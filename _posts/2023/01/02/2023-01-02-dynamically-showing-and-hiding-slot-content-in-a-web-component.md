---
layout: post
title: "Dynamically Showing and Hiding Slot Content in a Web Component"
date: "2023-01-02T18:00:00"
categories: ["development"]
tags: ["web components","javascript"]
banner_image: /images/banners/watch.jpg
permalink: /2023/01/02/dynamically-showing-and-hiding-slot-content-in-a-web-component
description: An experiment in showing and hiding slot content for web components. 
---

Happy New Year and Happy First Post of the Year! Not sure that's a thing but this is my blog so I'm making it a thing. The last few days I've been playing with web components again, this time based on a simple idea: Could I create a web component that relies on external data, and use slots to provide content for the various stages of loading? What I mean by that is something like this:

```html
<get-remote-stuff>

	<div slot="loading">
	Please stand by, I'm loading your stuff.
	</div>
	
	<div slot="ready">
	I got the remote stuff, here it is!
	</div>
	
	<div slot="error">
	Sorry, something bad happened.
	</div>

</get-remote-stuff>
```

The idea here is the component would handle automatically showing and hiding each slot based on the state of the remote, async process. I was able to get an example of this working, but want to be clear there's parts to this I'm not 100% convinced I understand correctly. As always, I'm looking for your feedback, so drop me a line if you have any questions or clarifications. 

## Attempt One

For my first attempt, I used a fake async process that simply used `setTimeout`. First, I wrote some simple HTML:

```html
<slot-one>
	<span slot="loading">Loading slot</span>
	<span slot="ready">Ready slot</span>
	<span slot="error">Error slot</span>
</slot-one>
```

And then I created my `slot-one` web component:

```js
class SlotOne extends HTMLElement {

	constructor() {

		super();

		const shadow = this.attachShadow({mode:'open'});

		const div = document.createElement('div');
		div.innerHTML = `
<slot name="loading"></slot>
<slot name="ready"></slot>
<slot name="error"></slot>
`;

		const style = document.createElement('style');
		style.innerHTML = `
		slot {
			display:none;
		}
		`;

		shadow.appendChild(div);
		shadow.appendChild(style);
	}

	async connectedCallback() {
		console.log('connected callback');
		let loader = this.shadowRoot.querySelector('slot[name=loading]');
		loader.style.display='inline';
		let ready = this.shadowRoot.querySelector('slot[name=ready]');
		setTimeout(() => {
			console.log('delayed thing done');
			loader.style.display='none';
			ready.style.display='inline';
		}, 3000);
	}

}

customElements.define('slot-one', SlotOne);
```

From the top, I start off creating two DOM elements. One renders the slots and the other uses CSS to hide them. Notice I'm pointing to the `slot` element, not the `div` that will be rendered when the component is loaded. 

In `connectedCallback`, I use `querySelector` on the `shadowRoot` to unhide the loading slot and get a pointer to the `ready` slot. 

I do my async process, which in this case is just `setTimeout`, and when it's complete, I hide the loader and show the ready state. This seemed to work just fine, and you can see it in action below:

<p class="codepen" data-height="500" data-default-tab="js,result" data-slug-hash="XWBKraG" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/XWBKraG">
  Slot Test Hide Show</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

This seemed to work fine, so I then turned my attention to more of a real test. 

## Attempt Two

For my second attempt, I wanted to do two things. First, switch to a 'real' async process. I got a free key for [Weather API](https://www.weatherapi.com/). Given a location value and a key, I could get the weather report here: `https://api.weatherapi.com/v1/current.json?key=${key}&q=${q}&aqi=no`. This returns a bunch of information, but for simplicity sake, I decided to just return the current temperature. Here's the function:

```js
async getTemperature(q,key) {
	let resp = await fetch(`https://api.weatherapi.com/v1/current.json?key=${key}&q=${q}&aqi=no`);
	let data = await resp.json();
	return data.current.temp_f;
}
```

Yes, I didn't add error checking here, and I should, but as I'm on vacation, I'm being a bit lazy. (Ok, those of you who know me know I don't need an excuse to be lazy. ;) 

Ok, with this in place, my goal this time was pretty simple - after getting the result, make it available to the slot. To handle this, I used a simple variable token. Here's how it looks:

```html
<current-temp location="70508">

	<span slot="loading">
	Getting temperature...
	</span>
	
	<span slot="ready">
	The temperature is {temp}F.
	</span>
	
	<span slot="error">
	Error slot
	</span>

</current-temp>
```

I use brackets to represent the variable and the component should handle the replacement. I thought this would be trivial, but here's where I ran into a brick wall. Here's the JavaScript I had used to work with the slot before:

```js
let ready = this.shadowRoot.querySelector('slot[name=ready]');
// stuff...
ready.style.display='inline';
```

But when I tried to write *contents* of the slot, nothing worked. I tried `innerHTML`, `innerText`, even `textContents`. Nothing worked. I then tried something else:

```
let readyDOM = this.querySelector('*[slot=ready]');
```

This is matching any HTML element with the `slot` attribute set to `ready`, i.e. the DOM item from the HTML inside the web component. Also note I'm not using `shadowRoot`. So... I can hide and show the `slot` elements, but the actual text/HTML is in the "real" item with the named slot. I *think* that makes sense. Here's the complete `connected` callback handler:

```js
async connectedCallback() {
	console.log('connected callback');
	let loader = this.shadowRoot.querySelector('slot[name=loading]');
	loader.style.display='inline';
	let ready = this.shadowRoot.querySelector('slot[name=ready]');
	let temp = await this.getTemperature(this.location, this.KEY);

	loader.style.display='none';
	ready.style.display='inline';

	let readyDOM = this.querySelector('*[slot=ready]');
	let content = readyDOM.innerText;
	content = content.replace('{temp}', temp);
	readyDOM.innerText = content;
}
```

This works, and I said, I think it makes sense, but I'd love it if someone were to share some details as I'm a bit fuzzy here. You can see the complete demo below, and yes, it is missing the error handler, but that wouldn't be hard to add.

<p class="codepen" data-height="500" data-default-tab="js,result" data-slug-hash="ZEjOELE" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/ZEjOELE">
  Slot Test Hide Show Weather Demo (v2)</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

<p/>

For folks curious, right now in my zip code it is 73.9 degrees. Because Louisiana. 
