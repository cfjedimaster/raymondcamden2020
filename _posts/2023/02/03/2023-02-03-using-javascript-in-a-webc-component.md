---
layout: post
title: "Using JavaScript in a WebC Component"
date: "2023-02-03T18:00:00"
categories: ["jamstack"]
tags: ["eleventy"]
banner_image: /images/banners/catsleeping1.jpg
permalink: /2023/02/03/using-javascript-in-a-webc-component
description: 
---

A week or so ago (time is so weird these days), I gave a presentation on Eleventy's [WebC](https://www.11ty.dev/docs/languages/webc/) plugin. While working on the slides, I built a bunch of demos of various things and knew I'd share a few on the blog. Here's one in particular I wanted to write about. This isn't anything not covered by the docs, but like most things, I needed to try it myself first to see it in action. Specifically for this post, I want to talk about JavaScript in WebC components.

Let's begin by creating a simple tag, `cat`, that will render a random cat:

```html
<template webc:type="11ty" 11ty:type="ejs">
<%
// credit:
function getRandomInt(min, max) {
  min = Math.ceil(min);
  max = Math.floor(max);
  return Math.floor(Math.random() * (max - min) + min); // The maximum is exclusive and the minimum is inclusive
}

let width = getRandomInt(200,600);
let height = getRandomInt(200,600);
%>

<p class='myCatImage'>
<img src="https://placekitten.com/<%= width %>/<%= height %>">
</p>
</template>
```

The component uses EJS to generate a random width and height, and then outputs it using the PlaceKitten image holder service. Not terribly useful, but it's cats, and cats always server a purpose. If we add this to a page:

```html
<h2>Cats</h2>

<cat></cat>
<cat></cat>
```

We will end up with two random cats. (Random at build time of course, once deployed it's going to be static HTML.) Here's a completely gratuitous screenshot just so I can have some cat pictures in the post:

<p>
<img data-src="https://static.raymondcamden.com/images/2023/02/webc1.jpg" alt="Output from component, 2 random cats" class="lazyload imgborder imgcenter">
</p>

Ok, so far so good, but let's add a bit of interactivity to the component. I want to make it so that when you mouseover the picture, the browser plays a sound file of a cat meowing. I would never do this in real life because it would be annoying af as the kids say, but whatever. Here's the new version:

```html
<template webc:type="11ty" 11ty:type="ejs">
<%
// credit:
function getRandomInt(min, max) {
  min = Math.ceil(min);
  max = Math.floor(max);
  return Math.floor(Math.random() * (max - min) + min); // The maximum is exclusive and the minimum is inclusive
}

let width = getRandomInt(200,600);
let height = getRandomInt(200,600);
%>

<p class='myCatImage'>
<img src="https://placekitten.com/<%= width %>/<%= height %>">
</p>
</template>

<script>
const meow = new Audio('meow.wav');

document.addEventListener('DOMContentLoaded', () => {
	const catPics = document.querySelectorAll('.myCatImage img');
	catPics.forEach(c => {
		c.addEventListener('mouseover', () => {
			console.log('over da cat');
			/*
			You will get a DOMException if you don't click on the page first, which is good, but we also
			don't care about it, so try/catch and ignore
			*/
			try {
				meow.play();
			} catch {
				// do nothing
			}
		}, false);
	});
}, false);
</script>
```

The code basically just looks for cat images by class and adds the event listener. If we add this, and check our site, we'll get... nothing. If you view source, you'll see why:

```html
<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="utf-8">
	<title></title>
<script type="module" integrity="sha512-bSCWm+/TC6zrRk+5XcKszZefvT4Aqwa8b0XOmkMfIirtfzTRqgxEkpAurbYHXD+q0VGBS5e4C4U3XEuBeIOUrA==" src="/.11ty/reload-client.js"></script></head>

<body>

<body>

<h1>Cat Test</h1>

<cat><p class="myCatImage">
<img src="https://placekitten.com/488/206">
</p>



</cat>

<h2>Another Cat</h2>

<cat><p class="myCatImage">
<img src="https://placekitten.com/405/204">
</p>



</cat>

<h3>Hello</h3>

<cat><p class="myCatImage">
<img src="https://placekitten.com/501/455">
</p>



</cat>


</body>

</body>
</html>
```

What happened to our JavaScript? Well, it turns out, WebC automatically detects this, and "gathers" up the JavaScript into one bundle you can use in your code. To use the bundle, you can add a bit of code to your layout:

```html
{% raw %}<script>{{ page.url | webcGetJs }}</script>{% endraw %}
```

This is Liquid code, but similar code exists for layouts written in WebC, and other languages. Once added, we get the correct behavior, and you can see it in source now:

```html

<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="utf-8">
	<title></title>
	<script>
const meow = new Audio('meow.wav');

document.addEventListener('DOMContentLoaded', () => {
	const catPics = document.querySelectorAll('.myCatImage img');
	catPics.forEach(c => {
		c.addEventListener('mouseover', () => {
			console.log('over da cat');
			/*
			You will get a DOMException if you don't click on the page first, which is good, but we also
			don't care about it, so try/catch and ignore
			*/
			try {
				meow.play();
			} catch {
				// do nothing
			}
		}, false);
	});
}, false);
</script>
<script type="module" integrity="sha512-bSCWm+/TC6zrRk+5XcKszZefvT4Aqwa8b0XOmkMfIirtfzTRqgxEkpAurbYHXD+q0VGBS5e4C4U3XEuBeIOUrA==" src="/.11ty/reload-client.js"></script></head>

<body>

<body>

<h1>Cats</h1>

<cat><p class="myCatImage">
<img src="https://placekitten.com/477/484">
</p>



</cat>
<cat><p class="myCatImage">
<img src="https://placekitten.com/327/432">
</p>



</cat>


</body>

</body>
</html>
```

What's nice is, despite `cat` being run twice, only one copy of the code is used, which makes sense, but is still nice to see. And since the code is checking for multiple items matching the class, only one copy of the code makes sense. 

As an aside, you may not *want* WebC to bundle your code. If so, simply add `webc:keep` to your script tag, like so:

```html
<script webc:keep>
// awesome code in here that's totally important for the user, totally.
</script>
```

Read more about this at the docs: [Asset Bundling](https://www.11ty.dev/docs/languages/webc/#asset-bundling)

Want to play with this? You can see the code here, <https://glitch.com/edit/#!/webc-javascript-example>, or run the released version here, <https://webc-javascript-example.glitch.me>. Enjoy!