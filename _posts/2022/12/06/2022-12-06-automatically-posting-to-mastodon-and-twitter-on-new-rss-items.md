---
layout: post
title: "Automatically Posting to Mastodon and Twitter on New RSS Items"
date: "2022-12-06T18:00:00"
categories: ["development"]
tags: ["pipedream"]
banner_image: /images/banners/announce.jpg
permalink: /2022/12/06/automatically-posting-to-mastodon-and-twitter-on-new-rss-items
description: A look at using Pipedream to automatically tweet/toot new items from an RSS feed
---

I promise I won't be making *every* upcoming post about Mastodon, but as I realized I was pretty much limiting my Twitter use to posting about my new blogs, I figured why not automate that so I don't have to even open Twitter? And I'm automating the post to Twitter, why not do the same for Mastodon? As always, I look to [Pipedream](https://pipedream.com) first when building integrations like this, and not surprisingly, the entire automation took roughly ten minutes. Here's how I built it.

## Step One - the Trigger

For the trigger, Pipedream has built in a "New Item in Feed" action. I selected that and entered my RSS feed (<https://www.raymondcamden.com/feed.xml>). I then tested it to confirm it got my feed items. So to be clear, the entire "run this crap when a new item is posted" logic was done in about sixty seconds. 

<p>
<img data-src="https://static.raymondcamden.com/images/2022/12/rss1.jpg" alt="Screenshot of configured new item in feed trigger" class="lazyload imgborder imgcenter">
</p>

## Step Two - Format the Post

So, for this step, I wanted to create the text that would be used for both Mastodon and Twitter. I spent some time thinking about how I wanted to format this. In the past, I've sometimes done this for Twitter: "Blog Post: 'TItle of Post' link". I'll sometimes add a quick comment or shoutout to a product/service described in the post. I decided to make it even simpler for this workflow - the title in quotes, a line break, and a link.

I created a Python code step for this:

```python
def handler(pd: "pipedream"):

  # My goal is to create the text used to tweet/toot the new post
  # For my needs, I thought nice and simple would be best:
  # "Title of post"
  # (blank line)
  # URL

  text = f"""
  "{pd.steps["trigger"]["event"]["title"]}"

  {pd.steps["trigger"]["event"]["link"]}
  """

  # Return data for use in future steps
  return {"text": text}
```

## Step Three - Post to Mastodon

As I [mentioned](https://www.raymondcamden.com/2022/12/01/building-a-mastodon-bot-on-pipedream) a few days ago, my first time working with Mastodon on Pipedream required me to use Node as the Python library wouldn't work well. The issue I ran into was fixed pretty quickly, so my assumption was that I was going to use [Mastodon.py](https://github.com/halcy/Mastodon.py). However, along with Pipedream fixing that particular issue, they also added support for Mastodon as a defined account, which means you can set up your authentication (in this case, just the access token) system-wide and use it in multiple workflows. 

They also added a basic Mastodon action for hitting the API. So for example, here's what you get when adding the action:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/12/rss2.jpg" alt="New Mastodon action" class="lazyload imgborder imgcenter">
</p>

Once you've defined a Mastodon account, you can select it and then the code will be able to pick up on the authentication. Make note of the code - it's hitting the Mastodon API to verify credentials - a default call. But when I saw this, I was curious how difficult it would be to change this to posting a new toot. 

I checked the docs and found this for [publishing a new status](https://docs.joinmastodon.org/methods/statuses/#create)

```
POST https://mastodon.example/api/v1/statuses HTTP/1.1
```

Looking at that, I modified the default Python code a bit:

```python
import requests

def handler(pd: "pipedream"):
  token = f'{pd.inputs["mastodon"]["$auth"]["access_token"]}'
  authorization = f'Bearer {token}'
  headers = {"Authorization": authorization}

  toot = { "status": pd.steps["generateText"]["$return_value"]["text"]}

  r = requests.post(f'https://{pd.inputs["mastodon"]["$auth"]["site_domain"]}/api/v1/statuses', data=toot, headers=headers)

  # Export the data for use in future steps
  return r.json()
```

As you can see, I'm posting the text of my new blog post, and that's it. No need for Mastodon.py at all. Although I would use it if I were doing anything more complex. 

## Step Four - Post to Twitter

Guess what? Posting simple text to Twitter has been supported in Pipedream for a decade or so. (Ok, maybe not quite that long.) I literally just added the action, selected my account, and used the same text I used for Mastodon.

<p>
<img data-src="https://static.raymondcamden.com/images/2022/12/rss3.jpg" alt="Configured Tweet action" class="lazyload imgborder imgcenter">
</p>

## Conclusion

I mentioned earlier that all of the above took roughly ten minutes, and that's absolutely true. I think most of that was googling for the Mastodon docs and as I had not used them before, it took me a minute or two to find what I needed. If you want to try this out yourself, you can create a copy of my workflow here:

<https://pipedream.com/new?h=tch_3xxfnA>

Note - if you like this, but don't want to post to Twitter (or Mastodon), you can simply delete, or disable, the relevant step. Enjoy!

Photo by <a href="https://unsplash.com/@patrickian4?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Patrick Fore</a> on <a href="https://unsplash.com/s/photos/announce?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  