---
layout: post
title: "Update to My Slideshow Web Component - by Šime Vidas"
date: "2023-01-24T18:00:00"
categories: ["javascript"]
tags: ["web components"]
banner_image: /images/banners/pictures.jpg
permalink: /2023/01/24/update-to-my-slideshow-web-component-by-sime-vidas
description: 
---

A few days ago I [blogged](https://www.raymondcamden.com/2023/01/20/a-simple-slideshow-web-component) about how I built a simple web component to create a "Slideshow" component. Basically, given a set of URLs, show one image at a time and provide controls to let the user navigate. I had planned to update that component (and still do!), but I wanted to share the work done by [Šime Vidas](https://mastodon.social/@simevidas). Šime is someone I have a *huge* amount of respect for when it comes to the web platform, so having him work on my component is quite cool, and I especially like that one of his changes was one I *really* thought I wouldn't like... until I saw it in action. It drives home the point that we as developers have quite a few different ways to approach working with web components and that's a *great* thing to have. 

Ok, so let's look at his changes, first on the HTML side. In my version, the URLs for the images were provided as an attribute, like so:

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

This *felt* nice to me. I liked that I could have line breaks and white space in there, making it easy to add or swap out images when needed. Šime's change was to use "proper" image tags instead, like so:

```html
<slide-show>
	<img src="https://placekitten.com/500/500" alt="">
	<img src="https://picsum.photos/id/1/500/500" alt="">
	<img src="https://via.placeholder.com/500" alt="">
	<img src="https://placebear.com/500/500" alt="">
	<img src="https://baconmockup.com/500/500" alt="">
</slide-show>
```

As I said, I thought I wouldn't like this, but the more I see it, the more it seems like a very good change. First off, you have complete support for folks without JavaScript enabled. Yes, they won't get the "one image at a time with controls", but they will get the images. That's an excellent fallback. It's a bit more typing, but I think it's worth it. And heck, it's still pretty easy to move/add/edit/etc in this form. Notice the `alt` attribute - I'm going to come back to that later.

On the code side, he supports this like so:

```js
this.setAttribute('images', [...this.querySelectorAll('img')].map(img => img.src).join(','));
this.innerHTML = '';		
```

He ends up writing the tag data into the attribute, so in theory, his version would support both HTML styles. 

Lastly, and this goes back to the JavaScript-disabled fallback, he added this CSS:

```css
slide-show:not(:defined) {
	display: flex;
	overflow-x: auto;
	gap: 1em;
}
```

The `:not(:defined)` aspect basically tells the browser to apply this when `slide-show` isn't a defined web component. This is your reminder that if you're still sharing the "Family Guy window blinds is CSS" meme, stop. CSS freaking rocks. 

Now, this is where I need to kinda think out loud. As I work with web components, I think about the developer experience. In my first version, the "install" experience is just adding the script tag (or including my JS in a build process). That's it. When I see the change he made, my first thought is - well now a developer has to add both JS *and* CSS. That kinda worries me, but at the same time, if you look at UI libraries, many do require both a JS and CSS resource, and that's ok. 

Like I said - I'm still thinking *a lot* about how web components can best be used, so I apologize to my readers if I seem to be a bit wishy-washy in terms of how I build things. :) 

I'll share his CodePen below, and then I have even more thoughts. (As an FYI, the placeholder.com server seems to be having issues today. If you get a broken image, it's them, not me. ;)

<p class="codepen" data-height="700" data-theme-id="dark" data-default-tab="result" data-slug-hash="eYjyVeK" data-editable="true" data-user="simevidas" style="height: 700px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/simevidas/pen/eYjyVeK">
  Slideshow Web Component</a> by Šime Vidas (<a href="https://codepen.io/simevidas">@simevidas</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

<p>

Ok, some quick notes. First off, in this new form, the `preload` function doesn't really do much, as the "real" `img` tags are going to load the images anyway. That could be removed from the code. 

Secondly, the `alt` tags, even if supplied, wouldn't help, because we only take the `URLs` from the DOM. But the code could be modified to read it along with `src`. The same could be done for `title` as well. My plan is to update my component by taking Šime's code and modifying it to do that. 