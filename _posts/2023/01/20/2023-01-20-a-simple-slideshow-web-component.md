---
layout: post
title: "A Simple Slideshow Web Component"
date: "2023-01-20T18:00:00"
categories: ["javascript"]
tags: ["web components"]
banner_image: /images/banners/pictures.jpg
permalink: /2023/01/20/a-simple-slideshow-web-component
description: A web component that renders one picture at a time.
---

As I continue to play around with and learn more about web components, I thought I'd build a simple component to make it easier to add a slideshow. By that, I mean something that renders one picture but provides controls to go to more images. I've probably built this many times in the past, both in JavaScript and server-side code, and I thought it would be a nice candidate for a component. As with most of my demos so far, there's a lot more that could be done with it, but I thought I'd share what I have so far. Once again I want to give a shout-out to [Simon MacDonald](https://www.simonmacdonald.com/) for helping me get this code working. (At the end of the post, I'll share the mistake I made, as I think it's something others will run into, as well as a modified version Simon built.)

Ok, so I began by "designing" how I wanted to use the component in a regular HTML page. I wanted to allow for a list of images passed in via an attribute:

```html
<slide-show images="
	https://placekitten.com/500/500,
	https://picsum.photos/id/1/500/500,
	https://via.placeholder.com/500,
	https://placebear.com/500/500,
	https://baconmockup.com/500/500
	">
</slide-show>
```

Note that I added some space around the URLs. I did that to make the code more readable and easier to modify. (I had to modify my source URLs a few times.) The tag also supports a `width` attribute and generally should always be used, but defaults to 500.

```html
<slide-show width="500" images="
	https://placekitten.com/500/500,
	https://picsum.photos/id/1/500/500,
	https://via.placeholder.com/500,
	https://placebear.com/500/500,
	https://baconmockup.com/500/500
	">
</slide-show>
```

Now let's look at the JavaScript. It's not terribly long so I'll share the whole bit, and then talk about what each part is doing:

```js
class SlideShow extends HTMLElement {

	constructor() {

		super();

		const shadow = this.attachShadow({mode:'open'});

		if(!this.hasAttribute('images')) {
			console.warn('slide-show called with no images');
			return;
		}

		if(!this.hasAttribute('width')) {
			// default
			this.setAttribute('width', 500);
		}

		/*
		Convert attribute into an array and do some trimming so that the end user can have some spacing
		*/
		this.images = this.getAttribute('images').split(',').map(i => i.trim());
		
		// preload for quicker response, we don't need to wait for this
		this.preload(this.images);

		this.totalImages = this.images.length;

		this.current = 0;

		const wrapper = document.createElement('div');
		
		wrapper.innerHTML = `
		<img id="currentImage" src="${this.images[this.current]}">
		<p>
		<button id="prevButton">Previous</button> 
		Picture <span id="currentPicture">1</span> of ${this.totalImages}
		<button id="nextButton">Next</button> 
		</p>
		`;

		this.$nextButton = wrapper.querySelector('#nextButton');
		this.$prevButton = wrapper.querySelector('#prevButton');
		this.$currentPicture = wrapper.querySelector('#currentPicture');
		this.$image = wrapper.querySelector('#currentImage');
		
		const style = document.createElement('style');
		style.innerHTML = `
div {
	width: ${this.getAttribute('width')}px
}
p {
text-align: center;
}
		`;
		shadow.appendChild(wrapper);
		shadow.appendChild(style);
		
	}

	connectedCallback() {
		this.$nextButton.addEventListener('click', this.nextImage.bind(this));
		this.$prevButton.addEventListener('click', this.prevImage.bind(this));
	}

	nextImage() {
		if(this.current+1 == this.totalImages) return; 
		this.current++;
		this.updateImage();
	}

	prevImage() {
		if(this.current == 0) return; 
		this.current--;
		this.updateImage();
	}

	updateImage() {
		this.$image.src = this.images[this.current];
		this.$currentPicture.innerText = this.current+1;
	}

	preload(i) {
		for(let x=0; x<i.length; x++) {
			let img = new Image();
			img.src = i[x];
		}
	}
}

customElements.define('slide-show', SlideShow);
```

Alright, so from the top, I start with some basic validation. If you don't pass any images, the tag doesn't have anything to do so it might as well abort. I mentioned that the tag supports a width attribute and while it defaults, I would probably use it consistently in production. This part, 

```js
this.images = this.getAttribute('images').split(',').map(i => i.trim());
```

Is the bit that lets me add line breaks and stuff around the URLs. I really like this little bit as it makes it much easier for the developer making use of the tag. User experience FTW!

Speaking of experience, I added a `preload` function that automatically loads all the images. In theory, this will make the slideshow zippier as the user navigates through the images. I don't wait for it to finish, which I think is a good trade-off between trying to load things early and letting the user navigate as soon as they want. 

Next up, I have the basic layout of the component. It's just an image with a paragraph beneath it. That paragraph contains my buttons as well as some text letting the user know what picture they're on as well as how many total images are available. I also create a style element with just a bit of layout control. This could be prettier. I don't do pretty. 

That's most of the constructor explained. In the `connectedBacllback` event handler, I add my event listeners to the buttons, being careful to bind the `this` scope correctly and I totally didn't mess that up the first time around, honest. (I made a completely different mistake.) The event handlers do basic "end of range" checks and just update a value for the current image, then chaining off to `updateImage` to update the DOM. 

You can see the entire thing in action below:

<p class="codepen" data-height="700" data-theme-id="dark" data-default-tab="result" data-slug-hash="eYjygxN" data-editable="true" data-user="cfjedimaster" style="height: 700px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/eYjygxN">
  Slideshow Web Component</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

The source for this demo is up on my GitHub repo here: <https://github.com/cfjedimaster/webcomponents/tree/main/slideshow>

So, let me leave you with a few notes.

* In my original version, I was making use of `getAttribute` and `setAttribute` with an attribute name that was camel-cased. You can't do that. I had `currentImage` which isn't a valid web component attribute. I remember that now - but didn't when I was building. 
* I mentioned Simon helped me out, and he also built his own version. (His version was built before I added the text.) You can find it here: <https://gist.github.com/macdonst/75b0980e6b0bd033dd2d36c085dbba75>
* There's something missing from this component that I need to add, and will do so in my next post. It should be possible, via JavaScript, to modify the images. In theory, you could modify them now, but it wouldn't change anything. Web components definitely let you support that and I'm going to build a second version to demonstrate that! (And give me an excuse to blog again!)