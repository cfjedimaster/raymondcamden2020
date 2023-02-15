---
layout: post
title: "Building a Mastodon Bot Listing Page in Eleventy"
date: "2023-02-15T18:00:00"
categories: ["jamstack"]
tags: ["eleventy"]
banner_image: /images/banners/robot1.jpg
permalink: /2023/02/15/building-a-mastodon-bot-listing-page-in-eleventy
description: How I built a page to show off my Mastodon bots.
---

Chalk this up for yet another thing most folks probably won't need, but it was fun to build so I figured I'd share. I've had a lot of fun building bots for Mastodon. If you're curious about the process, you can read about my experience here: ("Building a Mastodon Bot on Pipedream")[https://www.raymondcamden.com/2022/12/01/building-a-mastodon-bot-on-pipedream]. It occurred to me that it might be cool to build a page on my blog that shows off the bots I've built. It also occurred to me that it's 100% possible I'd build a bot and forget about it. 

So with that in mind, I built a page that does just that. For each of my bots, it displays their last post. You can see this in action here: <https://www.raymondcamden.com/bots>. Here's how I built it.

I began by looking at the Mastodon embed code written by Bryce Wray, ["Static embeds in Eleventy"](https://www.brycewray.com/posts/2022/08/static-embeds-eleventy/). In his post, he defines a simple shortcode named `stoot`. Once you make this available in your Eleventy site, you can then do this to embed a toot:

```js
{% raw %}{% stoot "mastodon.social", "108241788606585248" %}{% endraw %}
```

Simple enough, right? And in theory that could have been enough. All I'd need to do is go to my bots, find one toot, and get the ID. But I thought it would be cool to embed the *last* toot they did, or at least the last toot at time of building. To enable that, I created another shortcode, `lasttoot`. It works like so in the template:

```js
{% raw %}{% capture "lasttoot_rcb" %}
{% lasttoot "botsin.space", "randomcomicbook" %}
{% endcapture %}
{% endraw %}
```

Technically the capture isn't required per se, but as the shortcode returns the ID of the last toot, it would be useless without it. As you can see, I pass in both the server and the username of the bot. Now let's look at the code.

```js
/*
Given a mastodon user, I get their RSS and return the ID of the last toot.
*/
let Parser = require('rss-parser');
let parser = new Parser();

module.exports = async (instance, user) => {

	let rssFeedURL = `https://${instance}/users/${user}.rss`;
	let feed = await parser.parseURL(rssFeedURL);
	return feed.items[0].guid.split('/').pop();
}
```

Pretty simple, right? All Mastodon user's have an RSS feed of their activity. I used an RSS Parser to bring it in, get the most recent toot, and get the GUID value. That value looks like this (line breaks added for readability):

```xml
<guid isPermaLink="true">
	https://mastodon.social/@raymondcamden/109863869556714822
</guid>
```

As all I need is the ID, I do the split/pop calls to grab it. By the way, I wrote this code, and was satisfied with it, but then thought, do I really need an RSS parser? The RSS feed type won't change, maybe I could just use vanilla JavaScript. I did some searching, found solutions using DOMParser, and gave it a shot. It's then when I discovered that it was a *client-side* JavaScript solution, not server-side. Sigh. I also then remembered I was using `rss-parser` elsewhere on my site so I wasn't really hurting anything by using it again. 

To render my bots, I just repeated a bunch of calls to both shortcodes:

```js
{% raw %}{% capture "lasttoot_rcb" %}
{% lasttoot "botsin.space", "randomcomicbook" %}
{% endcapture %}

{% stoot "botsin.space", lasttoot_rcb %}

{% capture "lasttoot_sjc" %}
{% lasttoot "botsin.space", "superjoycat" %}
{% endcapture %}

{% stoot "botsin.space", lasttoot_sjc %}

{% capture "lasttoot_fra" %}
{% lasttoot "botsin.space", "rulesofacquisition" %}
{% endcapture %}

{% stoot "botsin.space", lasttoot_fra %}

{% capture "lasttoot_tbs" %}
{% lasttoot "botsin.space", "tbshoroscope" %}
{% endcapture %}

{% stoot "botsin.space", lasttoot_tbs %}

{% capture "lasttoot_tdh" %}
{% lasttoot "botsin.space", "thisdayinhistory" %}
{% endcapture %}

{% stoot "botsin.space", lasttoot_tdh %}{% endraw %}
```

And that's it. I did run into one interesting issue. For [RandomComicBook](https://botsin.space/randomcomicbook), the links to the particular comic book were being auto "previewed" in the embed, and since I also show the attached media, the cover, it ended up being displayed twice. I commented out that of the `stoot` embed for now as it solves it for me. Also, as one more quick aside, the CSS you'll see on my bot page is a bit of a mess. I took Bryce's CSS, messed with it a bit, and got it to "good enough" for my site. It's even embedded directly on the page which is bad practice, but as I'm planning on moving to a new theme soon and doing a big rewrite, I figured it was ok to leave it a bit messy for now. 

Anyway, let me know if you've got any questions on this, and pour one out for all the fun Twitter bots that have been destroyed by the Muskman!