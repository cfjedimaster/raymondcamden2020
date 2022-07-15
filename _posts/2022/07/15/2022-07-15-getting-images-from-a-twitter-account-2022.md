---
layout: post
title: "Getting Images from a Twitter Account (2022)"
date: "2022-07-15T18:00:00"
categories: ["development"]
tags: ["pipedream","javascript"]
banner_image: /images/banners/pictures.jpg
permalink: /2022/07/15/getting-images-from-a-twitter-account-2022
description: A demo of using the Twitter API, via Pipedream, to render the images from a Twitter account.
---

Some time ago, back in the "before time" of 2016, I wrote up a demo of a simple idea - grabbing the media (pictures specifically) from a Twitter account. I follow several Twitter accounts that simply post cool pictures. Given how toxic online platforms can be, just seeing cool pictures can be a bit relaxing. The demo made use of Node.js and ran on IBM's Bluemix platform. You can read that old post here if you desire: [Getting Images from a Twitter Account](https://www.raymondcamden.com/2016/03/25/getting-images-from-a-twitter-account). I followed up this post two years later with an example of the same idea running via Azure Functions - [My First Azure Function App - Twitter Image Displayer](https://www.raymondcamden.com/2018/09/09/my-first-azure-function-app-twitter-image-displayer). A few weeks back someone DMed me asking about an update and I thought I'd take a stab at it. If you just want to see the demo, you can see it here: 

<https://cfjedimaster.github.io/webdemos/tweetimages2/>

Here's a beautiful example of getting the images from [@randomcomicbook](https://twitter.com/randomcomicbook)

<p>
<img data-src="https://static.raymondcamden.com/images/2022/07/ts1.jpg" alt="Sample result from demo" class="lazyload imgborder imgcenter">
</p>

And here's how I built this new version. There's a backend and a frontend, of course, so let's start with the backend.

## Server 

To start off, I created a new Pipedream workflow that fired on an HTTP request. I then added a code step to validate that an account was passed in the query string:

```js
export default defineComponent({
  async run({ steps, $ }) {
    // Reference previous step data using the steps object and return data to use it in future steps
    if(!steps.trigger.event.query.account) {
      await $.respond({
        status:500,
        body:'account value not passed in response.'
      })
    }
    return steps.trigger.event.query.account;
  },
})
```

I named this `get_account` and you'll see me reference the result later.

The next step actually does the work with Twitter. In the example from six years ago, I built a Node.js application and made use of OAuth. What this means is that to use the application, you needed a Twitter login and had to authenticate with Twitter first. This means that the application itself was limited to a quota of calls but that limit was based per user. For the version I built this week, I decided to make use of a Twitter application instead. 

The [docs](https://developer.twitter.com/en/docs/twitter-api/tweets/search/introduction) for Twitter's search API specifies that unless you have academic access, it will only search the past week. So keep that in mind when testing. If an account hasn't posted an image in a week, then no results are going to be found. 

Also, for [rate limits](https://developer.twitter.com/en/docs/twitter-api/rate-limits), an app has a limit of 450 requests per 15-minute window. For users, it's 180. I made the judgment call to go with an app to keep things simpler. I also figured that if this blog post "takes off", I'd still probably be way under the rate limit so I'm not too concerned, but keep that in mind if you build your own version of this. 

I created the app via Twitter's [developer console](https://developer.twitter.com/en/portal/dashboard), which has gotten *really* good over the past few years. With the app created, I then went to [Pipedream](https://pipedream.com).

Pipedream has excellent support for working with Twitter APIs, and I've built *way* too many Twitter bots with them. However, normally I've used their support based on a particular account. So by that I mean - I set up my bot to post on a schedule, and the action to send a tweet is based on the bot's account. In this case, I wanted to use Twitter APIs based on my Twitter app, and for that, you use a different action - "Twitter Developer App":

<p>
<img data-src="https://static.raymondcamden.com/images/2022/07/ts2.jpg" alt="The right step to add in Pipedream" class="lazyload imgborder imgcenter">
</p>

After selecting that, you then pick the "Use any Twitter Developer App API" option:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/07/ts3.jpg" alt="Almost done picking the right step..." class="lazyload imgborder imgcenter">
</p>

After selecting it, you are then given a step that lets you configure the Twitter Developer app. For that, you'll enter your values from the Twitter developer portal. And best of all - once you've done that, Pipedream will remember the connection and let you select it again. The default code shows that it uses the [Twit](https://www.npmjs.com/package/twit) library.

```js
module.exports = defineComponent({
  props: {
    twitter_developer_app: {
      type: "app",
      app: "twitter_developer_app",
    }
  },
  async run({steps, $}) {
    const Twit = require('twit')
    
    const { api_key, api_secret_key, access_token, access_token_secret } = this.twitter_developer_app.$auth
    
    const T = new Twit({
      consumer_key: api_key,
      consumer_secret: api_secret_key,
      access_token,
      access_token_secret,
      timeout_ms: 60 * 1000,  // optional HTTP request timeout to apply to all requests.
      strictSSL: true,  // optional - requires SSL certificates to be valid.
    })
    
    return await T.get('account/verify_credentials', { skip_status: true })
  },
})
```

The cool thing is that all you need to do is modify the last line to start adding your logic. Let's take a look at how I did my search:

```js
module.exports = defineComponent({
  props: {
    twitter_developer_app: {
      type: "app",
      app: "twitter_developer_app",
    }
  },
  async run({steps, $}) {
    const Twit = require('twit')
    
    const { api_key, api_secret_key, access_token, access_token_secret } = this.twitter_developer_app.$auth
    
    const T = new Twit({
      consumer_key: api_key,
      consumer_secret: api_secret_key,
      access_token,
      access_token_secret,
      timeout_ms: 60 * 1000,  // optional HTTP request timeout to apply to all requests.
      strictSSL: true,  // optional - requires SSL certificates to be valid.
    })
    
    // https://stackoverflow.com/questions/40631127/twitter-api-response-not-always-returning-entities-media-as-expected
    console.log(`Get images for ${steps.get_account.$return_value}`)
    let result = await T.get('search/tweets', { q: `from:${steps.get_account.$return_value} filter:media`, count: 100, include_entities:true, tweet_mode: "extended" });
    let tweets = result.data.statuses;

    let images = [];
    tweets.forEach(tweet => {
      if(tweet.entities && tweet.entities.media && tweet.entities.media.length > 0) {
          tweet.entities.media.forEach(function(m) {
            images.push(m.media_url);   
          });
      }
    });
    return images;
  },
})
```

I create a search query based on the user you want to scan for images, that's the `from` portion, I tell it to filter to media, that's the `filter` part. Finally, and this is crucial, note the `tweet_mode` value. As the StackOverflow link there points out, if you don't use this, you won't get the full results back. 

Once I have the results, I then loop over them, look for an image entity, and add it to an array of results. 

The final step is one more code step that returns the result to the caller:

```js
export default defineComponent({
  async run({ steps, $ }) {
    // Reference previous step data using the steps object and return data to use it in future steps
    await $.respond({
      status:200,
      headers: {
        'Content-Type':'application/json'
      },
      body:steps.get_images_for_user.$return_value
    })
  },
})
```

I absolutely could have included this in the last step, Pipedream won't complain, but I try to build my workflows such that each step does one concrete thing. I love that Pipedream lets me pretend to be a better developer when I'm not feeling lazy. 

## Client

For the front end, I took a look at my demo from six years ago. It made use of jQuery and a jQuery plugin for lightbox functionality. For the 'modern' version, I decided on vanilla JavaScript and an excellent non-framework-based library called [Parvus](https://github.com/deoostfrees/Parvus). Here's the HTML, which consists of text explaining what to do and a few DOM elements I need to work with:

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Twitter Image Viewer</title>
    <link href="parvus.min.css" rel="stylesheet">
    <link href="app.css" rel="stylesheet">
</head>
<body>

    <h2>Twitter Image Suck</h2>

    <p>
        This tool provides an "image only" view of a Twitter account. Simply enter the username of an account 
        and you'll see the most recent pictures they've embedded into their Tweets. You can click an individual
        image for a close up view. A great example account is <code>oneperfectshot</code>.
    </p>

    <div id="statusArea"></div>

    <div id="searchForm" style="display:none">
        <p>
            <input type="text" id="twitterAccount" placeholder="Twitter Account">
            <button id="searchButton">Get Images</button>
        </p>
    </div>

    <div id="results" style="display:none"></div>

    <script src="parvus.min.js"></script>
    <script src="app.js"></script>
</body>
</html>
```

And here's the JavaScript:

```js
let $status, $searchForm, $searchButton, $twitterAccount, $results;

const endpoint = 'https://eo73fogw8n2gknw.m.pipedream.net';

document.addEventListener('DOMContentLoaded', init, false);

function init() {
    $status = document.querySelector('#statusArea');
    $searchForm = document.querySelector('#searchForm');
    $searchButton = document.querySelector('#searchButton');
    $twitterAccount = document.querySelector('#twitterAccount');
    $results = document.querySelector('#results');

    $searchButton.addEventListener('click', search);
    $searchForm.style.display = '';

}

async function search() {
    let account = $twitterAccount.value.trim();
    if(!account) return;
    if(account.indexOf('@') === 0) account = account.replace('@','');
    $results.style.display = 'none';
    $status.innerText = `Finding images for the account, ${account}.`;
    let resp = await fetch(endpoint + `?account=${encodeURIComponent(account)}`);
    let data = await resp.json();
    let html = '';
    if(data.length > 0) {

        data.forEach(i => {
            html += `
    <div><a href="${i}" class="lightbox" data-group="twitterImageResults"><img src="${i}"></a></div>
            `;
        });
    } else html = '<div>Sorry, but no results were found. Twitter Search API results are date limited.</div>';

    $status.style.display = 'none';
    $results.innerHTML = html;
    $results.style.display = '';
    const prvs = new Parvus();

}
```

Basically, on button click, get the value (potentially removing the @), and then pass it to my Pipedream workflow. When I get the array back, either render them out (including the code Parvus needs) or report that no results were found.

The complete source code may be found here: <https://github.com/cfjedimaster/webdemos/tree/master/tweetimages2>. At this time, Pipedream doesn't support sharing workflows using its latest editing environment, but feel free to reach out to me directly if you need anything more from what I built. Finally, feel free to give it a try here and let me know what you think!

<https://cfjedimaster.github.io/webdemos/tweetimages2/>
