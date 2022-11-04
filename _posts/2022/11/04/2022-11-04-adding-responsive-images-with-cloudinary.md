---
layout: post
title: "Adding Responsive Images with Cloudinary"
date: "2022-11-04T18:00:00"
categories: ["development"]
tags: ["javascript","cloudinary"]
banner_image: /images/banners/responsive.jpg
permalink: /2022/11/04/adding-responsive-images-with-cloudinary
description: A look at using Cloudinary's remote image feature to add responsive images to my blog
---

In case you can't tell, I've been enjoying playing around with [Cloudinary](https://cloudinary.com) these last few weeks. As part of my research, I recently looked around in the docs for things I wanted to dig deeper into. One of the features I thought was fascinating was Cloudinary's [remote image](https://cloudinary.com/documentation/fetch_remote_images) support. What does that mean?

In the examples I've shown so far, I've made use of Cloudinary's media library to store my files. That works well enough and has an API to let you automatate working with it, but what if you have existing images you don't want to move? Cloudinary lets you support them by simply including them in the URL request to their server! 

So for example, the picture of me in the upper left side of the blog (wow was I skinnier then) may be found at this URL:

https://www.raymondcamden.com/images/avatar2.jpg

This same image, with no transformations, may be found here:

https://res.cloudinary.com/demo/image/fetch/https://www.raymondcamden.com/images/avatar2.jpg

Except that now it's cached and served via Cloudinary CDNs. I can also apply transformations just like any other Cloudinary asset. So if I want to apply sepia (of course I do), I'd just use:

https://res.cloudinary.com/demo/image/fetch/e_sepia/https://www.raymondcamden.com/images/avatar2.jpg

And it would render as:

<p>
<img data-src="https://res.cloudinary.com/demo/image/fetch/e_sepia/https://www.raymondcamden.com/images/avatar2.jpg" alt="" class="lazyload imgborder imgcenter">
</p>

Cool! So let's see if we can use this to add a bit of responsiveness to my blog. Let me preface this by saying that I've been "adjacently" familiar with responsive design for years. By that I mean, I know the very high level basics, I recognize it in code when I see it, but I haven't actually built sites with it myself. For this blog post, I used the excellent article from MDN, [Responsive Images](https://developer.mozilla.org/en-US/docs/Learn/HTML/Multimedia_and_embedding/Responsive_images). I want to be clear that what I did was just a test (although it is deployed right now!) and it could most likely be done better. Basically, blame my ignorance, not Cloudinary. 

Each blog post has a header image on top. I usually source these from [Unsplash](https://unsplash.com) and manually resize them to 650 pixels wide. As an example, this is how a banner image is rendered in HTML here:

```html
<div class="post-thumbnail">
<img src="https://static.raymondcamden.com/images/banners/cat_sleeping.jpg" alt="Using Cloudinary with Alpine.js">
</div>
```

I decided to modify this HTML such that:

* At screen sizes 800px and higher, just render as is.
* At smaller screen sizes, render an image that's been scaled down to 300 pixels wide.

Given a URL of https://static.raymondcamden.com/images/banners/cat_sleeping.jpg, the resized Cloudinary version of that is https://res.cloudinary.com/raymondcamden/image/fetch/c_fit,w_300/https://static.raymondcamden.com/images/banners/cat_sleeping.jpg

Notice I've added the `c_fit,w_300` directive in there to handle the resize. Remember, this is done one time and it's cached, so while I don't have these images prepared as I type this, as soon as one person requests the image it will be built and then served from cache from then on. 

I modified my HTML like so... (Note - I use LiquidJS with [Eleventy](https://www.11ty.dev/) to build my site, but I figured people don't need to see the Liquid portion in order to get what I'm showing here. As always, my blog's [repo](https://github.com/cfjedimaster/raymondcamden2020) is available for perusal!)

```html
<div class="post-thumbnail">
	<picture>
		<source media="(max-width: 799px)" srcset="https://res.cloudinary.com/raymondcamden/image/fetch/c_fit,w_300/https://static.raymondcamden.com/images/banners/cat_sleeping.jpg">
		<source media="(max-width: 800px)" srcset="https://static.raymondcamden.com/images/banners/cat_sleeping.jpg">
		<img src="https://static.raymondcamden.com/images/banners/cat_sleeping.jpg" alt="Adding Responsive Images with Cloudinary">
	</picture>
</div>
```

Like I said above, I'm still fairly new to this and I know I could provide even more options for different viewport sizes, but I figure this one small change could be really helpful. 

As a quick test, I opened up dev dtools and tested with this blog post, which right now is using https://static.raymondcamden.com/images/banners/welcome2018.jpg. This image clocks in at 82.3KB. When I resize my viewport down, I get the Cloudinary version which is 13.0 kb. (The 0 size for the first request shows it was being loaded via cache.)

<p>
<img data-src="https://static.raymondcamden.com/images/2022/11/r1.jpg" alt="Screen shot of blog with devtools" class="lazyload imgborder imgcenter">
</p>

So just to recap. Given that I could do this better, definitely, but it took maybe 30 minutes to add a responsive header to my blog and I didn't have to touch *one* of my older media files. Cloudinary did all the work, I literally just crafted a URL. Freaking awesome!

Photo by <a href="https://unsplash.com/@bugsster?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Taras Shypka</a> on <a href="https://unsplash.com/s/photos/responsive?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  