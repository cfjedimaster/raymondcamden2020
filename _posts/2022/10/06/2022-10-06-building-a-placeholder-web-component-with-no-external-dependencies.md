---
layout: post
title: "Building a Placeholder Web Component with No External Dependencies"
date: "2022-10-06T18:00:00"
categories: ["development"]
tags: ["javascript","web components"]
banner_image: /images/banners/stickynotes.jpg
permalink: /2022/10/06/building-a-placeholder-web-component-with-no-external-dependencies
description: A placeholder web component that uses dynamic SVGs.
---

As my readers can tell, I'm on something of a web component kick, and while I'm enjoying building [silly examples](https://www.raymondcamden.com/2022/10/04/web-component-experiment-manipulating-inner-text), today I wanted to share one I thought might actually be useful - a placeholder component that doesn't use any external services.

As you probably know, there are about five million placeholder services out there that let you simply craft a URL and generate an image of specific size and other attributes. For example, [placeholder.com](https://placeholder.com) lets you use a URL like so, https://via.placeholder.com/350x150, which generates:

![placeholder](https://via.placeholder.com/350x150)

Of course, that's boring, what you really want to use is [placekitten.com](https://placekitten.com/) - given https://placekitten.com/600/300 you get:

![placekitten](https://placekitten.com/600/300)

Cool, but each of these services requires using an external service. While there's nothing necessarily wrong with that, I thought it would be interesting to build a web component that created the placeholder via SVG. This would remove the external dependency and improve the performance of the page. Obviously, placeholders aren't (typically) used in production so the performance of such a thing may not be that big of a deal, but I thought it would be fun to build. Here's what I came up with. 

First, I'm not terribly familiar with SVG, but I found you could create a simple rectangle of a particular size like so:

```svg
<svg xmlns="http://www.w3.org/2000/svg" width="400" height="400" viewBox="0 0 400 400">
<rect width="100%" height="100%" fill="#ff0000" />
</svg>
```

In theory, all I need for my web component is the ability to spit out those tags in the shadow DOM. Here's the first version of what I built:

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

        shadow.appendChild(wrapper);
    }
}

customElements.define('place-holder', PlaceHolder);
```

For the most part, I think this is pretty vanilla web component stuff, except for the use of `createElementNS`. Per the [MDN docs](https://developer.mozilla.org/en-US/docs/Web/API/Document/createElementNS), this creates an element with a specific namespace, which our SVG tags require. My web component took three attributes: width, height, and bgcolor, each of which has a basic default. Here's it in use:

```html
<h3>No attributes, all default, fully organic</h3>
<place-holder></place-holder>

<h3>Custom width,height</h3>
<place-holder width="500" height="500"></place-holder>

<h3>Custom width,height, bgcolor</h3>
<place-holder width="300" height="300" bgcolor="pink"></place-holder>
```

I'd share a screenshot but it's literally three boxes so you'll have to wait for the end. ;) 

I then thought it would be nice to support custom text. Placeholder.com does this and it's a useful way to mark what a placeholder is - well, taking place of so to speak. 

In SVG land, this tag will create a horizontally and vertically centered text:

```svg
<text x="50%" y="50%" dominant-baseline="middle" text-anchor="middle">Meow</text>   
```

To support this, I added a new condition to the web component:

```js
if(this.getAttribute('text')) {
    const text = document.createElementNS(ns, 'text');
    text.setAttribute('x', '50%');
    text.setAttribute('y', '50%');
    text.setAttribute('dominant-baseline', 'middle');
    text.setAttribute('text-anchor', 'middle');
    text.textContent = this.getAttribute('text');
    wrapper.appendChild(text);
}
```

Which then lets me do:

```html
<h3>Custom text</h3>
<place-holder width="300" height="300" bgcolor="pink" text="Hello World"></place-holder>
```

Nice! So, since I've been playing with web components a lot, I decided to start using a new repository: <https://github.com/cfjedimaster/webcomponents>. You can find the source code for this demo here: <https://github.com/cfjedimaster/webcomponents/tree/main/placeholder_svg>. Later this week I'll start moving over some of my earlier demos so I have them in one nice place. Finally, if you want to play with this yourself, use the CodePen below:

<p class="codepen" data-height="800" data-theme-id="dark" data-slug-hash="KKRxvNx" data-editable="true" data-user="cfjedimaster" style="height: 800px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/KKRxvNx">
  Placeholder (SVG)</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>
<p></p>

Let me know what you think. I believe this one may actually be - dare I say it - useful?

Photo by <a href="https://unsplash.com/@kellysikkema?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Kelly Sikkema</a> on <a href="https://unsplash.com/s/photos/placeholder?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  