---
layout: post
title: "Another Update to my Slideshow Web Component - JavaScript Support"
date: "2023-02-08T18:00:00"
categories: ["javascript"]
tags: ["web components"]
banner_image: /images/banners/pictures.jpg
permalink: /2023/02/08/another-update-to-my-slideshow-web-component-javascript-support
description: Adding support for changes to the component via JavaScript
---

Last month I [shared](https://www.raymondcamden.com/2023/01/20/a-simple-slideshow-web-component) a simple web component I built to embed slideshows onto web pages. If you didn't get a chance to read that, you can see it in action in this CodePen below:

<p class="codepen" data-height="500" data-default-tab="result" data-slug-hash="eYjygxN" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/eYjygxN">
  Slideshow Web Component</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>
<p/>

After I wrote this, [Šime Vidas](https://mastodon.social/@simevidas) shared an excellent update to my component with some great modifications. I talked about this version in a [blog post](https://www.raymondcamden.com/2023/01/24/update-to-my-slideshow-web-component-by-sime-vidas), and it's the version I'll be using for my post today. What am I covering today? 

When I demonstrated how to use my web component, it was done via a script include (well, it's on CodePen, but you get the idea), and then a bit of HTML. Here's an example. (And again, thank you to Šime for his improvements.)

```html
<slide-show>
	<img src="https://placekitten.com/500/500" alt="">
	<img src="https://picsum.photos/id/1/500/500" alt="">
	<img src="https://via.placeholder.com/500" alt="">
	<img src="https://placebear.com/500/500" alt="">
	<img src="https://baconmockup.com/500/500" alt="">
</slide-show>
```

This works well, but, what if you wanted to *modify* the contents of the slideshow with other images? Let's see what happens when I try that. 

First, I'll add a button to the bottom:

```html
<button id="switchButton">Switch to Other Show</button>
```

The idea here is that a user would click this to load other content. Now let's write a bit of JavaScript:

```js
document.querySelector('#switchButton').addEventListener('click', () => {
	console.log('Lets switch the images.');
	let newUrls = 'https://via.placeholder.com/500?text=Alpha,https://via.placeholder.com/500?text=Beta,https://via.placeholder.com/500?text=Gamma,https://via.placeholder.com/500?text=Delta';
	
	// find the slideshow, could cache this
	let show = document.querySelector('#myShow');
	show.images = newUrls;
	
});
```

In this code, I've set up a click event handler and when it's used, it sets the `images` attribute of my web component to new URLs. Remember, even though Šime changed my component to allow for inline images, the JavaScript code of the component still actually updates the attribute, like so:

```js
this.setAttribute('images', [...this.querySelectorAll('img')].map(img => img.src).join(','));
this.innerHTML = '';
```

So, in theory, our code should work, right? Check it out below and see for yourself:

<p class="codepen" data-height="600" data-default-tab="result" data-slug-hash="jOpoxWz" data-user="cfjedimaster" style="height: 600px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/jOpoxWz">
  Slideshow Web Component</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>
<p/>

Yep, not working. You can open up your console too and clearly see the console message being displayed and no errors, but the change doesn't have the effect we would have assumed. So what went wrong? As usual with my code, multiple things. 

First off, web components will *not*, by default, monitor changes to attributes. Your web component class needs to specify what attributes it will care about when it comes to things changing. This can be done with one line of code:

```js
static get observedAttributes() { return ['images']; }
```

The getter `observerAttributes` returns an array of attributes that should be monitored for changes. For this demo, I'm specifying just the `images` attribute, but in theory, you could imagine responding to changes in `width` and `height` as well. 

Next, we have to write code to notice those changes. This is done via the `attributeChangedCallback` function:

```js
attributeChangedCallback(name, oldValue, newValue) {
	console.log(`Attribute Changed callback: ${name}, ${oldValue}, ${newValue}`);
	//do stuff
}
```

For now I'm just logging the attributes. As you can tell, this gets called for *any* change, but for us, it will always be `images`. 

Finally, there's a problem with how I changed the images:

```js
show.images = newUrls;
```

It may be immediately obvious, but this changes a *property* of the DOM element, not an *attribute*. There's a [great StackOverflow post](https://stackoverflow.com/a/6004028/52160) you can read on the topic, but my code should have done this instead:

```js
show.setAttribute('images', newUrls);
```

Whew. So with just that done, if the button is clicked, the following will show up in the console:

```js
"Attribute Changed callback: images, https://placekitten.com/500/500,https://picsum.photos/id/1/500/500,https://via.placeholder.com/500,https://placebear.com/500/500,https://baconmockup.com/500/500, https://via.placeholder.com/500?text=Alpha,https://via.placeholder.com/500?text=Beta,https://via.placeholder.com/500?text=Gamma,https://via.placeholder.com/500?text=Delta"
```

It's a bit hard to read as it's two long lists, but you can definitely see the previous and new values. Now let's make the changes. 

Here's my updated `attributeChangedCallback`:

```js
attributeChangedCallback(name, oldValue, newValue) {

	this.images = this.getAttribute('images').split(',').map(i => i.trim());

	this.totalImages = this.images.length;
	this.current = 0;
	this.shadowRoot.querySelector('#totalPictures').innerText = this.totalImages;
	this.updateImage();

}
```

As I said, I can assume the change will always be to `images`, but if I wanted to I could check the `name` value. I then copied some code from the constructor - split the string into an array, update the total number of images and reset us back to the first. The `totalPictures` line there is not from the constructor, but is a change I made to the HTML being generated:

```html
Picture <span id="currentPicture">1</span> of <span id="totalPictures">${this.totalImages}</span>
```

Having the `span` there lets me update it easily. Here's a demo:

<p class="codepen" data-height="600" data-default-tab="result" data-slug-hash="abjrGaO" data-user="cfjedimaster" style="height: 600px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/abjrGaO">
  Slideshow Web Component (v3)</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>
<p/>

Ok, better, right? There's still a bit that can be done. I definitely do not like the fact that I copied a few lines of code when updating my display. That code in both the constructor as well as the attribute changed callback could be abstracted out into a `render` function so there's no code duplication. As the intent for this post was to demonstrate an example of updating a component via JavaScript, I'm fine leaving that out so the focus is on just that, but feel free to fork the CodePen and share with me your update!