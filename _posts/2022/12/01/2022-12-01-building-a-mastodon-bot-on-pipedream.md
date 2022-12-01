---
layout: post
title: "Building a Mastodon Bot on Pipedream"
date: "2022-12-01T18:00:00"
categories: ["development"]
tags: ["pipedream","mastodon"]
banner_image: /images/banners/catsleeping1.jpg
permalink: /2022/12/01/building-a-mastodon-bot-on-pipedream
description: A look at using the Mastodon API to build bots with Pipedream
---

Like a lot of people, I've been making more use of Mastodon lately (you can find me [here](https://mastodon.social/@raymondcamden)) and less use of Twitter. I'm not *leaving* Twitter, I'm just reducing my use of it. I'm finding Mastodon a nicer place overall and when and if Twitter collapses, I'd be OK just tooting. That being said, I've built quite a few bots on Twitter, all for fun, and I was curious how difficult it would be to "port" them over to Mastodon. Turns out - it's rather simple, with [Pipedream](https://pipedream.com).

The first thing I did was google for bots and Mastodon. I know Mastodon has different rules than Twitter and each Mastodon instance itself has its own rules too. I found this great article from 2018 which still worked fine today: [Easy guide to building Mastodon bots](https://shkspr.mobi/blog/2018/08/easy-guide-to-building-mastodon-bots/). As my blog is about building bots on Pipedream I won't cover the same material the author did, but you should definitely check it out. His recommendation for the [BotsIn.Space](https://botsin.space/) server still works well today. When I signed up there I got approval in about an hour which was much better than I expected. For Pipedream, the important thing to do is set up your application and get your access token.

His recommended library, a Python module [Mastodon.py](https://github.com/halcy/Mastodon.py), was also a darn good solution, and as I'm trying to use Python more and more, I planned to make use of it as well. Unfortunately, I ran into a bug with Pipedream where I couldn't use it. Fortunately, that bug is already fixed. (Pipedream rocks.) But I had finished my bot already so I'll switch to that the next time I build a super-important mission-critical enterprise serious bot. 

Ok, so what did I build? I've got a Twitter bot named [Super Joy Cat](https://twitter.com/superjoycat). This bot uses [The Cat API](https://thecatapi.com/) to get a random image and then selects a random phrase to associate with the picture. The phrases are positive statements:

```
You are truly wonderful. Yes, you.
You make me think of a nap on a soft pillow in a warm sunbeam.
You make me purr.
You complete me.
```

Here's how I re-created this in Pipedream for Mastodon.

## Step One - Define the Schedule

I created my Pipedream workflow with the schedule trigger. I didn't want my bot to be annoying and I didn't want to worry about going over rate limits, so I specified an interval of four hours. 

<p>
<img data-src="https://static.raymondcamden.com/images/2022/12/pdm1.jpg" alt="PD Schedule settings" class="lazyload imgborder imgcenter">
</p>

## Step Two - Random Cat Picture

The next step selects the random image. The Cat API makes this incredibly easy - you just hit an endpoint. The only option I specified was for the size of the image. Normally I'm doing all Python for my Pipedream workflows, but as I had this written already in my Twitter bot, I just copied and pasted it. (I did have to change `$end` to `$.flow.exit`.)

```js
import fetch from 'node-fetch';

export default defineComponent({
  async run({ steps, $ }) {

    let url = `https://api.thecatapi.com/v1/images/search?api_key=${process.env.CAT_API}&size=med`;

    let result = await fetch(url);
    let data = await result.json();
    if(!data || !data.length) $.flow.exit("no data");
    return data[0].url;

  },
})
```

## Step Three - Download the Image

After selecting the image in the previous step, we need to download the file to `/tmp`. Pipedream has a built-in action for this, but it currently has a bug that can impact workflow editing. Luckily the code to replicate it is rather simple and can be found in the [documentation](https://pipedream.com/docs/code/nodejs/http-requests/#download-a-file-to-the-tmp-directory). Here's the code I used - note I'm hard coding the image name.

```js
import stream from "stream";
import { promisify } from "util";
import fs from "fs";
import got from "got";

export default defineComponent({
  async run({ steps, $ }) {

    // Download the webpage HTML file to /tmp
    const pipeline = promisify(stream.pipeline);
    return await pipeline(
      got.stream(steps.getcaturl.$return_value),
      fs.createWriteStream('/tmp/cat.jpg')
    );

  },
})
```

As a quick note, I just found out that the bug I ran into with the built-in action has already been fixed. Again, Pipedream rocks!

### Steps Four and Five - Defining and Selecting the Message

My next two steps are both Node.js actions with the first defining an array of messages and then selecting a random one. I could have done this in one step but liked having the messages by themselves. Here's the array:

```js
export default defineComponent({
  async run({ steps, $ }) {

    return [
      "You are truly wonderful. Yes, you.",
      "You make me think of a nap on a soft pillow in a warm sunbeam.",
      "You make me purr.",
      "You complete me.",
      "Cat nip has nothing on you!",
      "Hey, you. Yes, you. You rock!",
      "You are better than a red laser dot.",
      "I like you more than cat nip.",
      "Dogs are bad. You are awesome.",
      "You are like the softest part of my fur.",
      "After my food bowl, you are the first thing I want to see in the morning!"
    ]

  },
})
```

And here's the selection:

```js
export default defineComponent({
  async run({ steps, $ }) {

    const getRandomInt = function(min, max) {
      min = Math.ceil(min);
      max = Math.floor(max);
      return Math.floor(Math.random() * (max - min) + min); //The maximum is exclusive and the minimum is inclusive
    }

    return steps.defineMessages.$return_value[getRandomInt(0,steps.defineMessages.$return_value.length )];
  },
})
```

## Step Six - Post the Toot!

For the final step, it's time to actually make the toot on Mastodon. As I said, when I began making this bot, there was an issue with the Python library. When I searched for Mastodon Node modules, I came across [mastodon-api](https://www.npmjs.com/package/mastodon-api), and while it's a bit old, it did seem to work well. 

Much like Twitter, to create a toot with an image, you first upload the image and then post with your text and the result of the media upload. Here's the entire code:

```js
import Mastodon from 'mastodon-api'
import fs from 'fs'

const M = new Mastodon({
  access_token: process.env.CAT_BOT_MASTODON,
  api_url: 'https://botsin.space/api/v1/', 
})

export default defineComponent({
  async run({ steps, $ }) {

      let resp = await M.post('media', { file: fs.createReadStream('/tmp/cat.jpg') });

      await M.post('statuses', { 
          status: steps.selectMessage.$return_value,
          media_ids: [resp.data.id] 
      });

  },
})
```

Now, you may notice a lack of error checking here, and yeah, I should definitely do *something* about that, but for now, I'm fine with it as is. And that's the entire bot!

You can find joyful happy cats on Mastodon here: <https://botsin.space/@superjoycat>

While not the best pic, it's got Star Wars too, so here's a sample:

<iframe src="https://botsin.space/@superjoycat/109439745302574877/embed" class="mastodon-embed" style="max-width: 100%; border: 0; display:block;margin:auto;margin-bottom:15px" width="400" allowfullscreen="allowfullscreen"></iframe><script src="https://botsin.space/embed.js" async="async"></script>

You can create a copy of my workflow here: <https://pipedream.com/new?h=tch_mD7f8Q>
