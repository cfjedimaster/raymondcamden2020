---
layout: post
title: "Adding Social Share Links in Eleventy"
date: "2022-08-22T18:00:00"
categories: ["jamstack"]
tags: ["eleventy"]
banner_image: /images/banners/sharing.jpg
permalink: /2022/08/22/adding-social-share-links-in-eleventy
description: A quick example of adding social sharing links to your Eleventy site
---

One common feature of content sites (including this one), is links/buttons/etc to share a piece of content on social media. Typically this is Twitter, but many sites will include ways to share links on Facebook, LinkedIn, and more. A reader asked me a few days ago about how this could be done in [Eleventy](https://www.11ty.dev/) and I thought I'd share a quick example.

The first thing to know is that for many sites, they would love for you to embed a JavaScript library on your page to give you an 'enhanced' experience. I read that as a bunch of additional crap/load/privacy-stealing stuff I don't need. That being said, because most docs lead folks to the 'widgets', it's sometimes difficult to find the simpler vanilla HTML solutions. 

While researching this, I discovered a great GitHub repository, [social-share-urls](https://github.com/bradvin/social-share-urls). This provides helper utilities in multiple languages to make it easier to raft these URLs. They also include public domain icons. But what's really cool is that if you just want to get right to the URLs, they provide a gist:

<script src="https://gist.github.com/HoldOffHunger/1998b92acb80bc83547baeaff68aaaf4.js"></script>

Lovely, right? As you can see, each one will always require a URL of the page you want to share and some include additional things like the page title and more. Let's look at an example of how we could craft these URLs with a focus on Facebook, Twitter, and LinkedIn. (Personally, I share my content on Twitter and LinkedIn, and keep Facebook to pics of my kids and LEGOs.)

First off - we need a URL - and that's actually not as simple as you may think. Eleventy provides a `page.url` value, but it's the *relative* URL, not the complete URL. If you want a full URL, you will either need to use a bit of code to sniff it, an environment variable possibly (Netlify provides one), or a hard-coded value. Personally, I think a simple hard-coded value is the best solution and can be handled in one line in your configuration file:

```js
eleventyConfig.addGlobalData("rootURL", "https://www.raymondcamden.com");
```

Given this, imagine we've got a blog written in Eleventy where all the posts use a `post` layout. I'd add social sharing links at the bottom, and craft them like so:

```html 
{% raw %}<a href="https://www.facebook.com/sharer.php?u={{ rootURL | url_encode }}{{ page.url | url_encode }}">Facebook</a> ~
<a href="https://twitter.com/intent/tweet?url={{ rootURL | url_encode }}{{ page.url}}&text={{title | url_encode}}">Twitter</a> ~
<a href="https://www.linkedin.com/sharing/share-offsite/?url={{ rootURL | url_encode }}{{ page.url | url_encode }}">LinkedIn</a>{% endraw %}
```

In the sample above, I'm creating a "full" URL by first using the `rootURL` value and then `page.url`. For both, note that I pass them through the `url_encode` filter to make them safe in the query string. (Although modern browsers tend to handle this for us, with it being so easy to use, we might as well, right?) Notice that the Twitter link also includes the `title` value. 

All in all, not difficult at all, but the code is a bit messy. We can make use of a Liquid tag to make it a bit nicer. Consider this version:

```html 
{% raw %}{% assign pageUrl = page.url | prepend: rootURL | url_encode %}
{% assign stitle = title | url_encode %}
<p>
<a href="https://www.facebook.com/sharer.php?u={{ pageUrl }}">Facebook</a> ~
<a href="https://twitter.com/intent/tweet?url={{ pageUrl }}&text={{ stitle }}">Twitter</a> ~
<a href="https://www.linkedin.com/sharing/share-offsite/?url={{ pageUrl }}">LinkedIn</a> ~ 
<a href="https://reddit.com/submit?url={{pageUrl}}&title={{stitle}}">Reddit</a>
</p>{% endraw %}
```

In the code block above, I made use of `assign` to create two variables, `pageUrl` and `stitle`. I craft my complete URL using `prepend` and still URL encode the values. For the title, I just encode it. (It may make sense here to include the name of the site as well.) I added Reddit in this example just because. 

As always, let me know if this doesn't make sense! You can find the complete source code here: <https://github.com/cfjedimaster/eleventy-demos/tree/master/sharelinks>

Photo by <a href="https://unsplash.com/@ecasap?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Elaine Casap</a> on <a href="https://unsplash.com/s/photos/sharing?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  