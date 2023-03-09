---
layout: post
title: "Reminder about Web Components and Attributes"
date: "2023-03-09T18:00:00"
categories: ["javascript"]
tags: ["web components"]
banner_image: /images/banners/leaves-changing.jpg
permalink: /2023/03/09/reminder-about-web-components-and-attributes
description: Web Components have special rules for handling updates to attributes.
---

After my post yesterday about [web component lifecycle events](https://www.raymondcamden.com/2023/03/08/interesting-caveat-with-web-components-and-the-event-lifecycle), I had an interesting conversation with [Thomas Broyer](https://blog.ltgt.net/) on Mastodon. He brought up an issue with web components that I covered before on this blog, but as it was a very appropriate thing to discuss immediately after yesterday's post, I thought a bit of repetition would be ok. And heck, I'll take any chance to write more web component code as it gives me more practice.

So as a reminder, yesterday's [post](https://www.raymondcamden.com/2023/03/08/interesting-caveat-with-web-components-and-the-event-lifecycle) specifically dealt with what code is best used in a web component's constructor versus the `connectedCallback` event. Specifically, it dealt with the use case of checking attributes and handling web component elements created via JavaScript. To be clear, I don't mean the *definition* of the web component, but creating an instance of one, like so:

```js
let mc = document.createElement('my-component');
document.body.appendChild(mc); 
```

While I didn't bother setting a title in that example, I could have done so like this:

```js
let mc = document.createElement('my-component');
mc.setAttribute('title','My title');
document.body.appendChild(mc); 
```

And it works as expected. But here's an interesting question. What if later on I change the title? Imagine this code:

```js
setTimeout(() => {
	console.log('timer done, lets do this');
	mc.setAttribute('title','New title');
	console.log(`title for the mc is ${mc.getAttribute('title')}`);
}, 3 * 1000);
```

When run, what will it do? Check out the CodePen below to see:

<p class="codepen" data-height="500" data-theme-id="dark" data-default-tab="result" data-slug-hash="yLxPzjy" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/yLxPzjy">
  WC Tests (5)</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

As you can see, it does *not* work. Remember you can open your browser's console here if you want to see the messages. It will clearly say that the title attribute matches the update, but that's what you'll see reflected in the DOM.

The good (?) news is that this is completely expected and easily (for the most part) addressed. When defining a web component, you need to define which attributes you care about it (in terms of them changing) and write code to listen for those changes.

The first part is simple:

``js
static get observedAttributes() { return ['title'] };
```

The next part involves adding an event handler named `attributeChangedCallback`:

```js
attributeChangedCallback(name, oldValue, newValue) {
	console.log(`changing the value of ${name} from ${oldValue} to ${newValue}`);
}
```

If you try this, you'll see that it's fired multiple times. I had a "hard-coded" instance of the component in the DOM and it will message that the title is changing from null to the hard-coded value, reflecting the immediate change of the web component being added to the DOM. You will also see this run with the instance of the component created in JavaScript. 

Now for the fun part. The event handler needs to actually update the display to reflect the new value. In the first iteration of my example component, I skipped the Shadow DOM and just wrote it out directly to the main DOM. Since I now need to (possibly) update the DOM multiple times, I made two more changes. I switched to the Shadow DOM and built a new method, `updateDisplay`, that handles updating the display. Here's the entire class:

```js
class MyComponent extends HTMLElement {
	constructor() {
		super();
		console.log('constructor called');

		const shadow = this.attachShadow({ mode: "open" });
		const div = document.createElement('div');
		const h2 = document.createElement('h2');
		div.appendChild(h2);
		shadow.appendChild(div);

	}
	
	connectedCallback() {
		console.log('connected callback called');
		if(!this.getAttribute('title')) this.setAttribute('title', 'No title');

		this.updateDisplay();
	}
	
	updateDisplay() {
		this.shadowRoot.querySelector('h2').innerText = `My Component: ${this.getAttribute('title')}`;
	}
	
	static get observedAttributes() { return ['title'] };
	attributeChangedCallback(name, oldValue, newValue) {
		console.log(`changing the value of ${name} from ${oldValue} to ${newValue}`);
		this.updateDisplay();
	}
}
```

Notice that `updateDisplay` just uses `querySelector` to find its `h2` node and update the text. Now our code that updates the title after a few seconds will work correctly:

<p class="codepen" data-height="500" data-theme-id="dark" data-default-tab="result" data-slug-hash="qBMVPyX" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/qBMVPyX">
  WC Tests (5)</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

If you don't see the switch, just click the "Rerun" button on the bottom right. Anyway, as I said, I've discussed this before, but it definitely tripped me up the first time I ran into it so hopefully this helps others!

Photo by <a href="https://unsplash.com/@chrislawton?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Chris Lawton</a> on <a href="https://unsplash.com/photos/5IHz5WhosQE?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  