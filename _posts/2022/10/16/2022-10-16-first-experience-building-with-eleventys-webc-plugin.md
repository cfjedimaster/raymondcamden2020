---
layout: post
title: "First Experience Building with Eleventy's WebC Plugin"
date: "2022-10-16T18:00:00"
categories: ["development","jamstack"]
tags: ["javascript","web components","adobe","pdf services","eleventy"]
banner_image: /images/banners/orangejuice.jpg
permalink: /2022/10/16/first-experience-building-with-eleventys-webc-plugin
description: My first attempt working with Eleventy's new Web Component plugin
---

A few weeks ago, Zach Leatherman began discussing his plans to add web component support to Eleventy. Starting with his announcement post, [Adding Components to Eleventy with WebC](https://www.zachleat.com/web/webc-in-eleventy/), developers can now start working with a plugin, WebC, to test out this new support. The plugin docs have a great [explainer](https://www.11ty.dev/docs/languages/webc/#why-use-webc) as to why this support is being added, but to me it mainly boils down - running our web components during server build and not on the client-side with JavaScript. Now, so far, my own experiments with [web components](https://www.raymondcamden.com/tags/web+components) have been fairly simple, small things, so I'm not too concerned about the client-side impact, but heck, if we can ship **no** JavaScript, that's better than a small amount. 

I will say that while the [WebC docs](https://www.11ty.dev/docs/languages/webc/) are fairly extensive, I am struggling to wrap my head around it completely now. To be honest, I struggled with [Eleventy Serverless](https://www.11ty.dev/docs/plugins/serverless/) too, so I figure I just need to build out a few demos and I think I I'll grok it better. As always, I blog what I learn so I hope this entry (and any further ones) helps others. 

I don't want to repeat the docs so I won't walk you through installation and the like, that's all fairly simple, but I do want to point out a few things that caused me trouble at first.

By default, when you add WebC to an Eleventy project, it does *not* scan for and automatically add in web components. This is [covered](https://www.11ty.dev/docs/languages/webc/#defining-components) but (imo) rather late in the docs. When I'm learning something I absolutely do not read to the of the page. As soon as I feel like I *can* play, I do, and if an important detail is a bit late in the doc, I typically end up screwing something up. ;) 

You can add support for a specific or glob of web components three ways, but for now I'll focus on two. You can either define a glob of web components in front matter (at the template or directory level), or as a configuration **option**. While the first code sample shows the default behavior: 

```js
const pluginWebc = require("@11ty/eleventy-plugin-webc");

module.exports = function(eleventyConfig) {
	eleventyConfig.addPlugin(pluginWebc);
};
```

You will most likely want to start off by having Eleventy automatically scan a folder of web components like so:

```js
const pluginWebc = require("@11ty/eleventy-plugin-webc");

module.exports = function(eleventyConfig) {
	eleventyConfig.addPlugin(pluginWebc, {
	    components: "_includes/components/**/*.webc"
	});
};
```

By the way, the exact folder doesn't really matter. I used the above based on examples from the docs, but I think going forward I'll use something like `_components` to match the style used by data and include files in Eleventy.

The next thing that caused me trouble was creating a web component that was dynamic based on attributes. I think my issue was that I was thinking that Liquid directives and tags would be supported, but that's not the case. You use a new file type, `.webc`, and while it has support for binding attributes via a `:name`, it isn't really a template language like Liquid. So for example, I couldn't do basic things like conditionals. Here's an example of the simple level  you can do with a .webc file, in this case `hello-world.webc`:

```html
Hello! <span @html="this.name" :alt="this.name"></span>
```

In this case, I'm binding the alt attribute (which isn't really an attribute of span afaik) as well as defining the inner HTML of a block by using the attribute passed via `name`, so for example:

```html
<hello-world @name="ray"></hello-world>
```

This all outputs to:

```html
Hello! <span alt="ray">ray</span>
```

But like I said, I wanted more flexibility in my component, what I really wanted was Liquid. There is a way to do that, just wrap your component with:

```html
<template webc:type="11ty" 11ty:type="liquid">
stuff here
</template>
```

I think for now my plan is to just use this as a basis for my components, unless I know for sure I don't need conditions and looping. 

As I said - I'm pretty new to this so I expect how I do things will change as I learn. 

That's pretty much the main things that causes me problems so far, so let's look at a demo!

## A Placeholder WebC Example

Back a few days ago, I blogged about a [placeholder web component](https://www.raymondcamden.com/2022/10/06/building-a-placeholder-web-component-with-no-external-dependencies) that made use of dynamic SVG to render simple placeholder images. It was pretty simple, but actually practical I think. How would I convert that code to a server-side rendered WebC component? I basically just switched from JavaScript to Liquid:

```html
<template webc:type="11ty" 11ty:type="liquid">
{% raw %}{% if width == blank %}
	{% assign width = "199" %}
{% endif %}
{% if height == blank %}
	{% assign height = "199" %}
{% endif %}

<svg ns="http://www.w3.org/2000/svg" 
	width="{{width}}"
	height="{{height}}" viewbox="0 0 {{width}} {{height}}">
	<rect width="100%" height="100%" fill="#ff0000"></rect>
	{% if text %}
	<text x="50%" y="50%" dominant-baseline="middle" text-anchor="middle">{{ text }}</text>
	{% endif %}
</svg>
</template>{% endraw %}
```

For comparison's sake, here's the JavaScript one:

```js
const ns = 'http://www.w3.org/2000/svg';

class PlaceHolder extends HTMLElement {

	constructor() {

		super();

		const shadow = this.attachShadow({mode:'open'});

		this.width = 250;
		this.height = 250;
		this.bgcolor = '#c0c0c0';

		if(this.hasAttribute('width')) this.width = parseInt(this.getAttribute('width'), 10);
		if(this.hasAttribute('height')) this.height = parseInt(this.getAttribute('height'), 10);
		if(this.hasAttribute('bgcolor')) this.bgcolor = this.getAttribute('bgcolor');

		const wrapper = document.createElementNS(ns, 'svg');
		wrapper.setAttribute('width', this.width);
		wrapper.setAttribute('height', this.height);
		wrapper.setAttribute('viewBox', `0 0 ${this.width} ${this.height}`);

		const rect = document.createElementNS(ns, 'rect');
		rect.setAttribute('width', '100%');
		rect.setAttribute('height', '100%');
		rect.setAttribute('fill', this.bgcolor);
		wrapper.appendChild(rect);

		if(this.getAttribute('text')) {
			const text = document.createElementNS(ns, 'text');
			text.setAttribute('x', '50%');
			text.setAttribute('y', '50%');
			text.setAttribute('dominant-baseline', 'middle');
			text.setAttribute('text-anchor', 'middle');
			text.textContent = this.getAttribute('text');
			wrapper.appendChild(text);
		}

		shadow.appendChild(wrapper);
	}
}

customElements.define('place-holder', PlaceHolder);
```

I have to say - as much as I don't mind the JavaScript interface for working with web components (and I still have a lot of exploring to do), that Liquid/HTML version is a *heck* of a lot simpler! Basically - check and default my height and width and just output SVG, with a conditional block inside. 

I added this to my components directory, and then in an Eleventy `index.webc` file, used it like so:

```html
<h3>No Tags</h3>
<place-holder></place-holder>

<p>

<h3>Specified w,h, and text.</h3>
<place-holder width="250" height="300" text="ray"></place-holder>
```

I did NOT include a JavaScript file, I don't need to. The output in `_site` looks like so:

```html
<h3>No Tags</h3>


	


	


<svg ns="http://www.w3.org/2000/svg" width="199" height="199" viewBox="0 0 199 199">
	<rect width="100%" height="100%" fill="#ff0000"></rect>
	
</svg>



<p>

Specified w,h, and text. <br>




<svg ns="http://www.w3.org/2000/svg" width="250" height="300" viewBox="0 0 250 300">
	<rect width="100%" height="100%" fill="#ff0000"></rect>
	
	<text x="50%" y="50%" dominant-baseline="middle" text-anchor="middle">ray</text>
	
</svg>
```

You'll notice a lot of white space in the output above. While you can fix that with a HTML post processor (see the super simple [Eleventy sample code example](https://www.11ty.dev/docs/config/#transforms-example-minify-html-output)), it's something I want to see if I can fix myself later. Most importantly though - not a lick of JavaScript! 

Want to see it yourself? I decided to give it a try on Glitch, a service I discovered a month or so ago. You can browse a live, working Eleventy site on their service here: <https://glitch.com/edit/#!/placeholder-demo>. You can view the running version here: <https://placeholder-demo.glitch.me/> Give it a shot and let me know what you think. 

Photo by <a href="https://unsplash.com/@mateusz_feliksik?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Mateusz Feliksik</a> on <a href="https://unsplash.com/s/photos/orange-juice?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  
