---
layout: post
title: "Interesting Caveat with Web Components and the Event Lifecycle"
date: "2023-03-08T18:00:00"
categories: ["javascript"]
tags: ["web components"]
banner_image: /images/banners/legos.jpg
permalink: /2023/03/08/interesting-caveat-with-web-components-and-the-event-lifecycle
description: Something to watch out for when using various lifecycle events in web components.
---

I've been exploring [web components](https://www.raymondcamden.com/tags/web+components) the last few months and as part of that exploration, I've been reading ["Web Components in Action"](https://www.manning.com/books/web-components-in-action) by fellow Adobian Ben Farrell. I'm still at the beginning of the book but so far it's been great. It *is* a few years old now, but for the most part, the only thing I've seen out of date is that at the time of publication, Microsoft Edge didn't have complete support for web components yet. That's been corrected (good thing, I switched to Edge a while back) so it's not really a concern.

However yesterday I read something that didn't quite jive with my understanding. The fourth chapter, "The component lifecycle", deals with the various hooks you get into web components when they are used on a page. In this chapter, he spends a good amount of time comparing the constructor of a web component to the `connectedCallback` event. The constructor is called when the component is created, but `connectedCallback` is not fired until the component is added to the browser's DOM. That last bit is important. If you add an instance of a web component to a DOM element, let's say a `div` you created in JavaScript, but that div itself is not in the browser's DOM, the event won't fire.

Before going further, let's look at a quick example. Assume this JavaScript for a trivial component:

```js
class MyComponent extends HTMLElement {
	constructor() {
		super();
		console.log('constructor called');
		this.innerHTML = '<h2>My Component</h2>';
	}
	
	connectedCallback() {
		console.log('connected callback called');
	}
}

if(!customElements.get('my-component')) customElements.define('my-component', MyComponent);
```

If we use `<my-component>` in the DOM, we will see both console messages for each instance of the tag. Here's a CodePen that demonstrates this. Note that you will need to "Edit on CodePen" to actually see console messages, or open your console right here on my site.

<p class="codepen" data-height="400" data-default-tab="result" data-slug-hash="WNgpQPB" data-user="cfjedimaster" style="height: 400px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/WNgpQPB">
  WC Tests</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

All of this made sense, and really touched on something I've been noodling over - what should I put in the constructor versus `connectedCallback`. He made one point that didn't seem right to me - that if you check the value of an attribute in the constructor, it will be null. I've been doing this in my previous examples, and heck, even MDN shows it in one of their [examples](https://github.com/mdn/web-components-examples/blob/main/popup-info-box-web-component/main.js):

```js
class PopUpInfo extends HTMLElement {
  constructor() {
    // Always call super first in constructor
    super();

    // Create a shadow root
    const shadow = this.attachShadow({mode: 'open'});

    // Create spans
    const wrapper = document.createElement('span');
    wrapper.setAttribute('class', 'wrapper');

	// stuff deleted...

    // Take attribute content and put it inside the info span
    const text = this.getAttribute('data-text');
    info.textContent = text;

	//lot more stuff...
```

Here's an example where it clearly works just fine:

```js
class MyComponent extends HTMLElement {
	constructor() {
		super();
		console.log('constructor called');
		
		if(!this.getAttribute('title')) this.setAttribute('title', 'No title');
	}
	
	connectedCallback() {
		console.log('connected callback called');
		this.innerHTML = `<h2>My Component: ${this.getAttribute('title')}</h2>`;
	}
}

if(!customElements.get('my-component')) customElements.define('my-component', MyComponent);
```

And if called like so:

```html
<my-component title="ray"></my-component>
<my-component></my-component>
```

I get:

```
My Component: ray
My Component: No title
```

As I said, this matched my expectations. Here's a complete CodePen for this:

<p class="codepen" data-height="400" data-default-tab="result" data-slug-hash="MWqEPOa" data-user="cfjedimaster" style="height: 400px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/MWqEPOa">
  WC Tests (2)</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

So, Ben and I talked about this over Slack, and initially, we just figured it was a change since he released his book, but then he made a really important point. What happens if you create an instance of your component via JavaScript? Consider:

```js
class MyComponent extends HTMLElement {
	constructor() {
		super();
		console.log('constructor called');
		
		if(!this.getAttribute('title')) this.setAttribute('title', 'No title');
	}
	
	connectedCallback() {
		console.log('connected callback called2');
		this.innerHTML = `<h2>My Component: ${this.getAttribute('title')}</h2>`;
	}
}

if(!customElements.get('my-component')) customElements.define('my-component', MyComponent);

let mc = document.createElement('my-component');
document.body.appendChild(mc); 
```

In this case, I've made a new `my-component` and added it to my DOM. I would have assumed this just worked, but instead, you get an error:

```
Uncaught DOMException: Failed to construct 'CustomElement': The result must not have attributes
```

If you want to see this yourself, open up [this CodePen](https://codepen.io/cfjedimaster/pen/KKxXGQw), and open your browser's console, not the CodePen one. The error doesn't get floated up right to the 'virtual' console CodePen uses. 

Now it makes sense, and it's an easy enough correction to move that logic to `connectedCallback`:

```js
class MyComponent extends HTMLElement {
	constructor() {
		super();
		console.log('constructor called');
		
	}
	
	connectedCallback() {
		console.log('connected callback called');
		if(!this.getAttribute('title')) this.setAttribute('title', 'No title');

		this.innerHTML = `<h2>My Component: ${this.getAttribute('title')}</h2>`;
	}
}

if(!customElements.get('my-component')) customElements.define('my-component', MyComponent);
```

And in doing so, I can then create instances in JavaScript, and even set my title:

```js
let mc = document.createElement('my-component');
document.body.appendChild(mc); 

let mc2 = document.createElement('my-component');
mc2.setAttribute('title','Custom title');
document.body.appendChild(mc2); 
```

In the CodePen below, you can see I used both a "regular" instance of the component in HTML as well as the two defined here and all three act correctly:

<p class="codepen" data-height="400" data-default-tab="result" data-slug-hash="OJoxBoG" data-user="cfjedimaster" style="height: 400px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/OJoxBoG">
  WC Tests (3)</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

I hope this makes sense, and as always, reach out if it doesn't. Going forward, I'll be doing more of my attribute validation and setting in `connectedCallback`. 
