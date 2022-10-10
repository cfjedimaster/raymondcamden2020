---
layout: post
title: "Working with Custom Events and Web Components"
date: "2022-10-10T18:00:00"
categories: ["development"]
tags: ["javascript","web components","adobe","pdf services"]
banner_image: /images/banners/legos.jpg
permalink: /2022/10/10/working-with-custom-events-and-web-components
description: How I updated a web component to broadcast custom events
---

A few days ago I [shared](https://www.raymondcamden.com/2022/10/02/a-pdf-embed-web-component) a web component I built that wrapped Adobe's [PDF Embed](https://developer.adobe.com/document-services/apis/pdf-embed/) library. As I said then, my intent was to build it as a quick prototype as I learn about web components, but this morning I got to thinking about web components and events. The PDF Embed library has a large set of events you can listen to and respond to, so I was curious how I'd actually do that within my wrapper. Here's what I came up with.

## Round One

I knew that working with events and PDF Embed is a bit complex, and while I hoped my web component could make it simpler, I decided to start with a completely arbitrary fake event. My web component has a `loadPDF` method that's run when the core library is loaded. I modified it to fire an event after two seconds:

```js
loadPDF() {
    var adobeDCView = new AdobeDC.View({clientId: this.key, divId: this.divid });
    adobeDCView.previewFile({
        content:{location: {url: this.url }},
        metaData:{fileName: this.name}
    }, {embedMode: this.embedMode});

    setTimeout(() => {
        console.log('fire event');
        this.shadowRoot.dispatchEvent(new CustomEvent('foo', { 
            composed: true, 
            bubbles: true
        }));
    }, 2000);

}
```

The first half is from the previous version and the `setTimeout` is where the real work begins. There are two crucial things here.

First, your custom event has to use the `composed` property. I found this on [StackOverflow](https://stackoverflow.com/a/53804106/52160) and you can read more about it on [MDN](https://developer.mozilla.org/en-US/docs/Web/API/Event/composed).

Secondly, and this applies to my particular web component and not web components in general, but notice I'm dispatching it from `shadowRoot`. In my [blog post](https://www.raymondcamden.com/2022/10/02/a-pdf-embed-web-component) detailing my first version of the component, I mentioned specifically I didn't use shadowRoot because my div needed to be "top-level" in order for the PDF Embed library to work. I'm still doing that (manipulating the root DOM to add my div), but I know use the shadowRoot to be my broadcaster.

With this in play, I could then listen for it in my HTML. First, I assigned an ID to the component:

```html
<pdf-embed 
    url="https://documentcloud.adobe.com/view-sdk-demo/PDFs/Bodea Brochure.pdf" 
    key="9861538238544ff39d37c6841344b78d"
    id="ray"
></pdf-embed>
```

If you remember, I had to generate unique IDs for my divs when generating the PDF Viewer. I'm still doing that, and I still think it's a good solution. This ID will apply to the actual component, not the DIVs it spits out.

Then in JavaScript I can listen for it:

```js
document.querySelector('#ray').addEventListener('foo', e => {
    console.log('foo ftw');
});
```

This worked well, so I then began working on the "real" version.

## Round Two

As I alluded to above, PDF Embed has an event system but it's a bit tricky to use. For example, we have three 'groups' of events. That's not terribly weird, but to listen for a particular event, you have to enable the right group and then, if you care, specify the precise event you want to listen to. All in all, I get the idea behind it - you don't need to listen to everything, but from a practical viewpoint I always found it a bit weird to use. 

So let's fix it!

First, in `loadPDF`, I decided to listen to everything, like so:

```js
adobeDCView.registerCallback(
    AdobeDC.View.Enum.CallbackType.EVENT_LISTENER,
    event => {
        // do something here...
    }, { enableFilePreviewEvents: true, enablePDFAnalytics: true, enableAnnotationEvents:true }
);
```

In the code block above, the three 'enable' settings are referring back to the event groups I mentioned before. Our API says that if you don't ask for specific events, all are fired, so the net result of the above is - for every single event possible, fire it and run my handler. Now let's fill out that handler:

```js
adobeDCView.registerCallback(
    AdobeDC.View.Enum.CallbackType.EVENT_LISTENER,
    event => {
        this.shadowRoot.dispatchEvent(new CustomEvent(event.type, {
            composed: true, 
            bubbles: true, 
            detail: event.data
        }));
    }, { 
         enableFilePreviewEvents: true, 
         enablePDFAnalytics: true, 
         enableAnnotationEvents:true 
        }
);
```

In the above code, I take the original event, and recreate it as a new `CustomEvent`, ensuring I set `composed` to true and passing on the original data as the `detail`. 

This then allows for:

```html
<h2>Embed</h2>
<pdf-embed 
    url="https://documentcloud.adobe.com/view-sdk-demo/PDFs/Bodea Brochure.pdf" 
    key="9861538238544ff39d37c6841344b78d"
    id="ray"
></pdf-embed>

<script src="pdfembed.js" type="module"></script>
<script>
document.querySelector('#ray').addEventListener('PAGE_VIEW', e => {
    console.log('pageview',e);
});
</script>
```

Here's how it looks in devtools. It's in dark mode so you know it's legit:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/10/devtools1.jpg" alt="Example output from event listener" class="lazyload imgborder imgcenter">
</p>

You can find the latest version here (as I mentioned earlier, I'm slowly migrating my web components to a new repo) - <https://github.com/cfjedimaster/webcomponents/tree/main/pdfembed>