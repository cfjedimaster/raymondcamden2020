---
layout: post
title: "Cloudinary Debugging Tip"
date: "2023-01-31T18:00:00"
categories: ["development"]
tags: ["cloudinary"]
banner_image: /images/banners/photos.jpg
permalink: /2023/01/31/cloudinary-debugging-tip
description: How to determine why a Cloudinary image isn't loading.
---

I've been blogging about [Cloudinary](https://www.cloudinary.com) here for the past few months, and I wanted to share a quick tip. A few weeks ago, I was privileged to be interviewed on the Cloudinary podcast, Dev Jams:

<iframe width="560" height="315" src="https://www.youtube.com/embed/PS7dRYkOQOo" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen style="margin:auto;display:block;margin-bottom:10px"></iframe>

While showing some code, I came across an image being loaded by Cloudinary that was returning a broken image. Obviously I'd done something wrong, but what? I began by opening the image in a tab, but that just gave me a 400 error:

<p>
<img data-src="https://static.raymondcamden.com/images/2023/01/cd1.jpg" alt="400 error returned from Cloudinary" class="lazyload imgborder imgcenter">
</p>

Turns out - there's a simple way to get to the issue. Open up your browser devtools and switch to the Network tab. Click on the request and go into the response headers. Scroll down until you see `x-cld-error`, and you'll have your error message there:

<p>
<img data-src="https://static.raymondcamden.com/images/2023/01/cd2.jpg" alt="Response header showing Cloudinary error" class="lazyload imgborder imgcenter">
</p>

You'll notice it's also present in `server-timing`, but `x-cld-error` is the clearer message. Hope this helps!