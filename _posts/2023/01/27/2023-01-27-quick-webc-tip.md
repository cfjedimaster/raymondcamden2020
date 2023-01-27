---
layout: post
title: "Quick WebC Tip"
date: "2023-01-27T18:00:00"
categories: ["jamstack"]
tags: ["eleventy"]
banner_image: /images/banners/tip.jpg
permalink: /2023/01/27/quick-webc-tip
description: How to enable better color coding for your WebC templates
---

Whenever I think I shouldn't post something because I'm covering something completely obvious, despite the fact that I missed it, I always find at least one other person who was also a bit slow in either remembering a basic tip or figuring out the simple stuff. So hey, that one person, good morning, and I hope this helps. 

Alright, so if you are using Eleventy's new [WebC](https://www.11ty.dev/docs/languages/webc/) feature, or starting to learn it, one of the first things you'll do is create a `.webc` file in your editor. However, you may notice you don't get the nice formatting you are used to in your editor. Here's a screenshot from Visual Studio Code:

<p>
<img data-src="https://static.raymondcamden.com/images/2023/01/webc1.jpg" alt="Screenshot from VSC" class="lazyload imgborder imgcenter">
</p>

I was playing around with WebC for a few weeks before it really clicked with me that I wasn't getting proper formatting, or code hinting. Luckily it's easy enough to fix. In Visual Studio Code, open up your File Association settings. And then add `*.webc` as an `html` file:

<p>
<img data-src="https://static.raymondcamden.com/images/2023/01/web2.jpg" alt="File association settings" class="lazyload imgborder imgcenter">
</p>

After that - voila:

<p>
<img data-src="https://static.raymondcamden.com/images/2023/01/webc3.jpg" alt="Properly styled webc file." class="lazyload imgborder imgcenter">
</p>

You also get your expected code hinting and such which is useful of course. While this particular example is for Visual Studio Code, any decent editor would support a similar configuration as well. 