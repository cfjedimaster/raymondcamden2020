---
layout: post
title: "Links For You"
date: "2023-01-08T18:00:00"
categories: ["misc"]
tags: ["links4you"]
banner_image: /images/banners/links.jpg
permalink: /2023/01/08/links-for-you
description: Random links for your week
---

Welcome to the first links post of 2023! As always, the idea here is to use theses posts as a quick way to share cool links, updates, and so forth. I've got some good ones this week!

## Dynamically Showing and Hiding Slot Content in a Web Component

Last week, I wrote a post concerning [showing and hiding](https://www.raymondcamden.com/2023/01/02/dynamically-showing-and-hiding-slot-content-in-a-web-component) slot content in a web component. For my example, I used it in a component that loaded content remotely and wanted to provide an easy to show the various states (loading, ready, and failure). A good friend, [Simon MacDonald](https://www.simonmacdonald.com/) had some ideas to improve the code. 

One simple change that I did, was moving the HTML result to a template. I've not made use of the template tag because it's separate from the web component JavaScript file, but he simply made use of it via JavaScript, like so:

```js
const template = document.createElement('template');
template.innerHTML = `
  <style>
  </style>
  <div>
    <slot name="loading"></slot>
    <slot name="ready"></slot>
    <slot name="error"></slot>
  </div>`;
```

This is on top of the file, nicely separated, and I dig this. I'll probably start doing this in future components.

The biggest change though was in how he handled changing the states. Remember I said I've got three states based on the remote API call. He used a new variable, `state`, that he specified as an observed attribute:

```js
static get observedAttributes() {
	return ['state'];
}
```

This is then tied to code that monitors changes to attributes:

```js
attributeChangedCallback(name, oldValue, newValue) {
	this.updateStyle(this, newValue);
}
```

`updateState` is a nice generic function that hides all the slots and then 'brings back' the correct one based on the state of the component. As I said, it's generic, so when (ahem, yes when) I get around to properly adding error support, I just need to set the right state. If for some reason my component had four states, it would be easier to handle as well.

```js
updateStyle(elem, state = 'loading') {
	elem.shadowRoot.querySelector("style").textContent = `
		slot {
			display: none;
		}
		slot[name="${state}"] {
			display: inline;
		}
	`
}
```

What really fascinated me about this is that the state really isn't an attribute. Sure you could pass it in, but the component handles that for you. But you can treat it as if it were one, and get the built in mechanics like `attributeChangedCallback` to help you use it. 

Anyway, I really dig his update, and you can find the complete code below:

<p class="codepen" data-height="500" data-default-tab="js,result" data-slug-hash="QWBKKEL" data-user="macdonst" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/macdonst/pen/QWBKKEL">
  Slot Test Hide Show Weather Demo (v2)</a> by Simon MacDonald (<a href="https://codepen.io/macdonst">@macdonst</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

## Short Number Formatting in Java

A few days ago I posted about [short number formatting](https://www.raymondcamden.com/2023/01/04/using-intl-for-short-number-formatting) in JavaScript, and then I followed that up with a [Python example](https://www.raymondcamden.com/2023/01/05/short-number-formatting-in-python). My very good friend (and continual inspiration) [Todd Sharp](https://recursive.codes/) shared an example of it in Java:

<script src="https://gist.github.com/recursivecodes/aac412956011a3ce88c490c8b4e66ebc.js"></script>

He wanted to make sure I warned my readers he wrote this quickly so it may not be the most organized, but I was really impressed with how simple it was, and even more so, this particular line:

```java
 String[] compactPatterns= {"", "", "", "0k", "00k", "000k", "0m", "00m", "000m","0b", "00b", "000b", "0t", "00t", "0AA", "0BB", "0CC"}; 
 ```

 This lets you specify numbering formats for values, allowing you to specify something custom. This comes in handy for numbers over a trillion. Most folks don't know what comes after trillion (Quadrillion) and switching to letters is a simple way of handling it. In fact, my entire reason for looking into this was to build something exactly like that. I hope to have that post done later this week. 

 ## Organizing an Eleventy Config File

 For my last link, here is an incredible article on optimizing how you setup an Eleventy config file: [https://www.lenesaile.com/en/blog/organizing-the-eleventy-config-file/](https://www.lenesaile.com/en/blog/organizing-the-eleventy-config-file/). This post was written by [Lene Saile](https://www.lenesaile.com/en/blog/organizing-the-eleventy-config-file/) and contains a wealth of information and opinions. I didn't agree with everything, but even the options I didn't agree with seemed like solid tips. Definitely check it out. My own config setup here for my blog is somewhat messy, and one day I'll get around to cleaning things up. (Who wants to take a bet on whether or not I do?)

 That's it for today, and have a great rest of your week!