---
layout: post
title: "Generating Zips in an Eleventy Site"
date: "2022-07-23T18:00:00"
categories: ["jamstack"]
tags: ["eleventy"]
banner_image: /images/banners/zipper.jpg
permalink: /2022/07/23/generating-zips-in-an-eleventy-site
description: An example of providing zipped resources in an Eleventy site.
---

Here's an interesting question. Given an Eleventy site that has dynamic resources of some kind, how could you provide a way to get those resources in one simple zip file? Here's how I solved that problem. 

First, I decided that my "dynamic resources" would be a set of cat pictures, because, of course I did. In a new Eleventy site, I created an `images` directory, and under that, a subdirectory named `cats`. In this directory, I dropped a random bunch of cat pictures. (I've got a OneDrive folder of about a hundred of them.) As I wanted Eleventy to be aware of them, I created a `_data` directory file named `catpics.js`:

```js
const glob = require('glob-promise');

module.exports = async () => {

    return (await glob('./src/images/cats/*.jpg')).map(p => p.replace('./src',''));

};
```

Basically, select all the JPGs and return them in an array, while also removing `/src` from the result so I end up with an array of paths I could use in HTML later. Here's how I used that:

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <title>Zip Demo</title>
    <style>
    img {
        max-width: 220px;
        max-height: 220px; 
    }
    </style>
</head>
<body>

<h2>Cats</h2>

{% raw %}{% for cat in catpics %}
    <img src="{{ cat }}">
{% endfor %}
{% endraw %}
</body>
</html>
```

The final bit was to ensure my images were copied into the source directory. I did that in my `.eleventy.js` file:

```js
eleventyConfig.addPassthroughCopy('src/images');
```

Here's how this looks when rendered:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/07/cats1.jpg" alt="Gratuitous cat picture is gratuitous" class="lazyload imgborder imgcenter">
</p>

Honestly, I don't really need to show you this picture but I couldn't resist. Alright, so the next part was to generate the zip file. While I had a good idea of how I was going to create the zip, I struggled with what was the "best" or more appropriate place to handle that logic. In the end, I decided to use Eleventy's [eleventy.after](https://www.11ty.dev/docs/events/#eleventy.after) event. That event fires after a build is complete. Here's how I used it in my `.eleventy.js` file:

```js
// Stuff removed to keep the code listing short...
const AdmZip = require('adm-zip');
const glob = require('glob-promise');

eleventyConfig.on('eleventy.after', async () => {
        console.log('after build');
        let catpics = await glob('./src/images/cats/*.jpg');
        let zip = new AdmZip();
        catpics.forEach(c => zip.addLocalFile(c));
        zip.writeZip('_site/catpics.zip');
});
```

I make use of [adm-zip](https://www.npmjs.com/package/adm-zip), a nice JavaScript zip library I've used before. I make a new zip, add each picture, and when done I wrote it out to my output directory as `catpics.zip`. Back in my HTML, I then just added a link to it:

```html
<p>
Download them here: <a href="catpics.zip">catpics.zip</a>
</p>
```

That's it. In theory, now you can drop new images in the cat directory, run a build (hopefully that's automated), and the zip file will be updated when the build is done. If you've done something like this, I'd love to see a real-world example, just let me know. If you want the complete source to this demo, you may find it here: <https://github.com/cfjedimaster/eleventy-demos/tree/master/autozip>

Photo by <a href="https://unsplash.com/@tomas_nz?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Tomas Sobek</a> on <a href="https://unsplash.com/s/photos/zip?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  