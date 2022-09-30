---
layout: post
title: "Using the Adobe PDF EMbed API with Vue 3"
date: "2022-09-30T18:00:00"
categories: ["development"]
tags: ["adobe","pdf services","vuejs"]
banner_image: /images/banners/papers.jpg
permalink: /2022/09/30/using-the-adobe-pdf-embed-api-with-vue-3
description: An update to my post on using Adobe's PDF Embed with Vue 3 projects
---

A long time ago, ok, February of last year, I posted about using the [Adobe PDF Embed](https://developer.adobe.com/document-services/apis/pdf-embed/) library with Vue.js: [Using the PDF Embed API with Vue.js](https://www.raymondcamden.com/2021/02/17/using-the-pdf-embed-api-with-vuejs). The main issue with our Embed library and libraries like Vue is a "chicken and egg" issue. Basically, our docs tell you to add an event listener for our library to load, but it's possible that the library has loaded *before* you add the event listener. 

In my previous post, I talked about how you can still use the event listener, but also look for `window.AdobeDC` to see if it's loaded. This method would apply to *any* framework wanting to make use of the library so it's a good tip in general.

Today, a user on our forums [posted](https://community.adobe.com/t5/document-services-apis-discussions/pdf-embed-api-amp-vue-3/m-p/13236191) that they were having issues with the library and Vue 3, although it was something completely different. 

First off - they didn't have the "chicken/egg" issue I described above. They were loading our library dynamically in `mounted`:

```js
mounted() {
document.addEventListener("adobe_dc_view_sdk.ready", () => {
	this.adobeApiPDFReady = true;
	console.log("Adobe created with adobe_dc_view_sdk.ready");
});

// Dynamically load Adobe SDK Viewer for this page
const plugin = document.createElement("script");
plugin.setAttribute(
	"src",
	"https://documentcloud.adobe.com/view-sdk/viewer.js"
);
plugin.async = true;
document.head.appendChild(plugin);
},
```

I like this approach! Anyway, they had no problem creating an AdobeDCView object for their PDF. They used a `watch` on `this.adobeApiPDFReady`:

```js
watch: {
	adobeApiPDFReady(val) {
		if (val) {
			// val == true ; Adobe is loaded on page
			this.adobeDCView = new window.AdobeDC.View({
				clientId: "9861538238544ff39d37c6841344b78d",
				divId: "pdfview",
				});
			}
			console.log("Adobe is mounted with Client ID");
	},
},
```

So far so good. They then used a button to trigger displaying the PDF:

```html
<button @click="openPDF">Click to view file</button>
<div id="pdfview"></div>
```

And here's the method:

```js
openPDF() {
	console.log("Trying to open PDF");
	// Opening preview with default settings from https://developer.adobe.com/document-services/docs/overview/pdf-embed-api/#live-demo
	this.adobeDCView.previewFile(
	{
		content: {
			location: {
				url:
				"/hamlet.pdf",
			},
		},
		metaData: { fileName: "hamlet.pdf" },
	},
	{}
	);
},
```

This is all boilerplate per our docs, just slightly modified for Vue, for example, `this.adobeDCView` to represent Vue's data. However when `previewFile` was called, this error was returned:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/09/vue1.jpg" alt="Vue Error" class="lazyload imgborder imgcenter">
</p>

Honestly I was completely at a loss as to why this error was being thrown. Nothing seemed amiss. I ensured that the div element was being found correctly. I ensured that the library was *really* loaded. Nothing made sense. 

Then - purely on a whim - I changed `adobeDCView` from a Vue value (i.e. in the `this` scope for the component) to `window.adobeDCView`. It started working! 

I then tried this:

```js
watch: {
	adobeApiPDFReady(val) {
		if (val) {
			// val == true ; Adobe is loaded on page
			this.adobeDCView = new window.AdobeDC.View({
				clientId: "9861538238544ff39d37c6841344b78d",
				divId: "pdfview",
				});
			}

			window.ray = new window.AdobeDC.View({
				clientId: "9861538238544ff39d37c6841344b78d",
				divId: "pdfview",
				});
			}

			console.log("Adobe is mounted with Client ID");
	},
},
```

And inside my code calling `previewFile`, did:

```js
console.log("Ray", this.adobeDCView);
console.log("Ray2", window.ray);
```

And saw this:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/09/vue2.png" alt="" class="lazyload imgborder imgcenter">
</p>

Note how the Vue object is a Proxy, which makes sense - Vue's data is reactive and all. Honestly I'm not sure why I didn't have this issue before, but certainly Vue 3 is a *significant* update from Vue 2. So, I didn't want to use a window object as it felt... wrong. I did a bit of searching and found this StackOverflow answer: [How to make a template variable non-reactive in Vue](https://stackoverflow.com/a/52844620/52160) which led to a note in the [official docs](https://v2.vuejs.org/v2/guide/instance.html#Data-and-Methods) on the use of `Object.freeze()`.

I literally just changed this:

```js
watch: {
	adobeApiPDFReady(val) {
		if (val) {
		// val == true ; Adobe is loaded on page
		this.adobeDCView = Object.freeze(new window.AdobeDC.View({
			clientId: "9861538238544ff39d37c6841344b78d",
			divId: "pdfview",
		}));
		}
		console.log("Adobe is mounted with Client ID");
	},
},
```

And it worked! Here's an embedded CodeSandbox showing it in action:

<iframe src="https://codesandbox.io/embed/adobe-vue-embed-api-forked-l1quyk?fontsize=14&hidenavigation=1&theme=dark"
     style="width:100%; height:500px; border:0; border-radius: 4px; overflow:hidden;"
     title="adobe-vue-embed-api (forked)"
     allow="accelerometer; ambient-light-sensor; camera; encrypted-media; geolocation; gyroscope; hid; microphone; midi; payment; usb; vr; xr-spatial-tracking"
     sandbox="allow-forms allow-modals allow-popups allow-presentation allow-same-origin allow-scripts"
   ></iframe>

As always, let me know if this doesn't work for you!