---
layout: post
title: "A PDF Embed Web Component"
date: "2022-10-02T18:00:00"
categories: ["development"]
tags: ["javascript","web components","adobe","pdf services"]
banner_image: /images/banners/legos.jpg
permalink: /2022/10/02/a-pdf-embed-web-component
description: A web component version of the Adobe PDF Embed API
---

I'm still pretty new to web components (see my post back in May, [My First Web Component](https://www.raymondcamden.com/2022/05/18/my-first-web-component)), but I've been playing with them, and other libraries that wrap them, off and on. Recently I decided to revisit something I had tried at the time I first played with the technology, a wrapper for Adobe's [PDF Embed](https://developer.adobe.com/document-services/apis/pdf-embed/) library. 

At the time, I couldn't get my code working because the PDF Embed library requires the ID value of a div to use when rendering the PDF. When using a web component, you typically work with the Shadow DOM, a DOM tree "hidden" inside the web component. While it's possible to make the DOM tree accessible to outside code, the PDF Embed library still couldn't use it. It requires a string for the ID and it has to be available via 'regular' means, i.e. `document.querySelector('#TheIDValHere')`. I've already filed an ER with our engineers to add support for passing in an HTML element instead, but in the meantime, I just moved on. 

Until today. When randomly, this popped back into my head, and I wondered - can a web component add stuff to the wrapping DOM around it? Turns out it certainly can. It's frowned upon, and you should not do it typically, but I think this is a case where it makes sense. In my case, I decided to simply append the DIV element I need immediately after my web component. 

Let me share the code, and then I'll show it in action. Here's the entire component:

```js
import {
    v4 as uuidv4
} from 'https://jspm.dev/uuid';
class PDFEmbed extends HTMLElement {
    constructor() {
        super();
        this.divid = uuidv4();
        const wrapper = document.createElement('div');
        wrapper.id = this.divid;
        if (this.hasAttribute('url')) this.url = this.getAttribute('url');
        if (this.hasAttribute('key')) this.key = this.getAttribute('key');
        if (this.hasAttribute('width')) this.width = this.getAttribute('width');
        else this.width = '500px';
        if (this.hasAttribute('height')) this.height = this.getAttribute('height');
        else this.height = '500px';
        this.embedMode = 'FULL_WINDOW';
        if (this.hasAttributes('embedMode')) this.embedMode = this.getAttribute('embedMode');
        // if no url, safe to just return?
        if (!this.url) {
            console.error('pdf-embed: No url attribute passed.');
            return;
        }
        // Ditto for key
        if (!this.key) {
            console.error('pdf-embed: No key attribute passed.');
            return;
        }
        this.name = this.url.split('/').pop();
        wrapper.style = `width: ${this.width}; height: ${this.height}`;
        this.parentNode.insertBefore(wrapper, this.nextSibling);
    }
    loadPDF() {
        var adobeDCView = new AdobeDC.View({
            clientId: this.key,
            divId: this.divid
        });
        adobeDCView.previewFile({
            content: {
                location: {
                    url: this.url
                }
            },
            metaData: {
                fileName: this.name
            }
        }, {
            embedMode: this.embedMode
        });
    }
    connectedCallback() {
        /*
        the below doesnt work in my test where I have 2 right after each other, but it makes
        sense, we haven't loaded yet. However, if I use JS to add a new pdf-embed element, in theory, 
        this optimization will work.
        */
        if (window.AdobeDC) {
            this.loadPDF();
            return;
        }
        const script = document.createElement('script');
        script.type = 'text/javascript';
        script.src = 'https://documentservices.adobe.com/view-sdk/viewer.js';
        document.head.appendChild(script);
        if (window.AdobeDC) this.loadPDF();
        else document.addEventListener('adobe_dc_view_sdk.ready', () => this.loadPDF());
    }
}
customElements.define('pdf-embed', PDFEmbed);
```

I begin by importing the [uuid](https://www.npmjs.com/package/uuid) package. This is something I've used in Node quite a bit, but it's the first time I've used it in a client-side application. I'm using this to generate a unique ID for my DIVs. This way if a person makes 2, or more, PDF Embed instances on their web page, the div will always have a unique ID. I could have made it an tag attribute, but why make the user do work they really don't need to? (Although literally as I write this, I do see why allowing the user to set it could be good - for styling purposes for example.) 

Going on - my component requires the URL of the PDF and the client key (PDF Embed is free, but requires a domain-locked key). I then have optional arguments for width, height, and embed mode. (See our [docs](https://developer.adobe.com/document-services/docs/overview/pdf-embed-api/howtos/) for examples of these different modes.) 

Finally I have the important part - where I drop the div in the parent:

```js
this.parentNode.insertBefore(wrapper, this.nextSibling);
```

Again, this is not what you would normally do, but it worked just fine for me. Continuing on, next look at `connectedCallback`. This will be fired when the component is loaded and is how I handle loading in the external library. As the long-winded comment says, I did try to load this only once, but in my testing of two embeds right next to each other, my check did not work. It was expected, and as the comment suggests, I believe the optimization will work correctly if embeds are loaded later via JavaScript. 

Going back up, `loadPDF` is vanilla PDF Embed code to render the document in the DIV. Oh, our library also requires a "name" value for PDFs. I think that's silly so I just create it myself based on the URL. 

Once this is included in your web project, I freaking love how easy it is to use:

```html
<pdf-embed 
    url="https://documentcloud.adobe.com/view-sdk-demo/PDFs/Bodea Brochure.pdf" 
    key="9861538238544ff39d37c6841344b78d"
></pdf-embed>
```

Or with height, width, and mode:

```html
<pdf-embed 
    url="./adobe-developer-terms.pdf" 
    key="9861538238544ff39d37c6841344b78d" 
    width="90%" height="500"
    embedMode="SIZED_CONTAINER"
></pdf-embed>
```

If you want to see the component or possibly even make some edits, you can find it here: 

<https://github.com/cfjedimaster/webdemos/blob/master/webcomponents/pdfembed.js>

I also put it up on CodePen here:

<p class="codepen" data-height="700" data-default-tab="result" data-slug-hash="wvjjEWR" data-user="cfjedimaster" style="height: 700px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/wvjjEWR">
  PDF Embed WC</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

As always, let me know what you think, and remember I'm still new at this, so be gentle. ;)
