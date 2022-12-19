---
layout: post
title: "Download Data as a File with Alpine.js"
date: "2022-12-19T18:00:00"
categories: ["development"]
tags: ["alpinejs","javascript"]
banner_image: /images/banners/tip.jpg
permalink: /2022/12/19/download-data-as-a-file-with-alpinejs
description: Dynamically serving client-side data as a downloadable file with Alpine.js
---

As my readers know, I've been updating some of my earlier Vue.js examples to demonstrate how they would work with [Alpine.js](https://alpinejs.dev/). Normally I post these "conversions" when I see one of the Vue posts pop up in my stats. Today I noticed this entry was "trending" - [Vue Quick Shot - Downloading Data as a File](https://www.raymondcamden.com/2020/12/15/vue-quick-shot-downloading-data-as-a-file). I thought it would be a great candidate for showing an Alpine version. Let's take a look. 

While I won't repeat everything from the previous post, I'll quickly cover how it worked. First, it makes use of the [`download`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/a#attr-download) attribute of the anchor tag. This will take a normal link operation and instead ask the browser to download the resource at the URL. To do this with client-side data, you can create an anchor tag with `createElement`, set it to point to your data, and then emulate a `click` event. I used this a few days ago in an Eleventy article: [Adding Download Support in an Eleventy Site](https://www.raymondcamden.com/2022/12/13/adding-download-support-in-an-eleventy-site). 

In the original article, I first demonstrated downloading a JSON file. But as most humans don't speak JSON, I then used [Papa Parse](https://www.papaparse.com/) to convert it to CSV. I'm going to follow the same flow for this update.

## First Version - Downloading JSON Data

For the first version, we're going to look at a tabular set of cats. I will not make you scroll past the gratuitous picture of a cat on a table. Heh, I lie:

<img data-src="https://static.raymondcamden.com/images/2020/12/black-cat-yawn.jpg" alt="Cat on a table" class="imgborder imgcenter ls-is-cached lazyloaded" src="https://static.raymondcamden.com/images/2020/12/black-cat-yawn.jpg">

Ok, so our data:

```json
"cats":[
	{"name":"Alese", "gender":"female", "age": 10},
	{"name":"Sammy", "gender":"male", "age": 12},
	{"name":"Luna", "gender":"female", "age": 8},
	{"name":"Cracker", "gender":"male", "age": 7},
	{"name":"Pig", "gender":"female", "age": 6}
]
```

The application begins by simply rendering this into a table. (Not a sortable or paginated one, but check out my other [Alpine.js](https://www.raymondcamden.com/tags/alpinejs) posts for examples of that.) I started off with this HTML:

```html
<div x-data="app">
	<table>
		<thead>
			<tr>
				<th>Name</th>
				<th>Gender</th>
				<th>Age</th>
			</tr>
		</thead>
		<template x-for="cat in cats">
			<tr>
				<td x-text="cat.name"></td>
				<td x-text="cat.gender"></td>
				<td x-text="cat.age"></td>
			</tr>
		</template>
	</table>
</div>
```

Alpine is used to loop over the `cats` array. Here's the initial JavaScript:

```js
document.addEventListener('alpine:init', () => {
  Alpine.data('app', () => ({
	cats:[
      {name:"Alese", gender:"female", age: 10},
      {name:"Sammy", gender:"male", age: 12},
      {name:"Luna", gender:"female", age: 8},
      {name:"Cracker", gender:"male", age: 7},
      {name:"Pig", gender:"female", age: 6}
      ]		
  }))
});
```

Now I'm going to add a download button that will trigger the download process:

```html
<button @click="download">Download</button>
```

I then added my handler. This code is a bit simpler than the previous version which added to anchor to the DOM, invisibly, and then clicked. 

```js
download() {
	let text = JSON.stringify(this.cats);
	let filename = 'cats.json';
	let element = document.createElement('a');
	element.setAttribute('href', 'data:application/json;charset=utf-8,' + encodeURIComponent(text));
	element.setAttribute('download', filename);
	element.click();
}
```

If you read my previous article involving [Eleventy and downloads](https://www.raymondcamden.com/2022/12/13/adding-download-support-in-an-eleventy-site), the biggest difference here is creating the data URL string that has the original data encoded into a string. You can test this version yourself here:

<p class="codepen" data-height="400" data-theme-id="dark" data-slug-hash="YzjzaGz" data-editable="true" data-user="cfjedimaster" style="height: 400px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/YzjzaGz">
  Alpine Data Save 1</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

## Second Version - Downloading CSV

For the next version, we just need to convert the JSON data to CSV. Once again I'll use [Papa Parse](https://www.papaparse.com/) as it makes this trivial. Instead of 

```js
let text = JSON.stringify(this.cats);
```

We can use:

```js
let text = Papa.unparse(this.cats);
```

I then made two more changes. First, the filename:

```js
let filename = 'cats.csv';
```

And then the mime-type:

```js
element.setAttribute('href', 'data:text/csv;charset=utf-8,' + encodeURIComponent(text));
```

That's literally the entire change. Now when clicking download you get a CSV that can be opened in Excel. My previous post had a screenshot of that but as this was before you could use Dark mode in Office, I figured I'd update it with a new one:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/12/dl1.jpg" alt="Excel sample output" class="lazyload imgborder imgcenter">
</p>

Here's the entire example:

<p class="codepen" data-height="400" data-theme-id="dark" data-slug-hash="yLqLKoj" data-editable="true" data-user="cfjedimaster" style="height: 400px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/yLqLKoj">
  Alpine Data Save 1</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>
