---
layout: post
title: "Supporting PDF Embeds in an Eleventy WebC Component"
date: "2023-03-01T18:00:00"
categories: ["jamstack"]
tags: ["eleventy","adobe","pdf services"]
banner_image: /images/banners/papers.jpg
permalink: /2023/03/01/supporting-pdf-embeds-in-an-eleventy-webc-component
description: Adding support for the Adobe PDF Embed with an Eleventy WebC Component
---

Way back in the old days, in August of 2021, I wrote up an example of adding support for Adobe's [PDF Embed API](https://developer.adobe.com/document-services/apis/pdf-embed/) as an Eleventy plugin: ["An Adobe PDF Embed Plugin for Eleventy"](https://www.raymondcamden.com/2021/08/02/an-adobe-pdf-embed-plugin-for-eleventy). When I find time, I need to update that to the newest URL for the library, but more recently I was curious if I could recreate support using the [WebC](https://www.11ty.dev/docs/languages/webc/) template language. While it was a bit difficult at times (and a big thank you goes to [Zach](https://www.zachleat.com/) for patiently helping me), I think it's at a point now where it can be shared. I will warn folks that I'm still struggling a bit with the best way to work with WebC, and at least one feature I'm showing isn't documented yet (but I've confirmed it will 100% ship), but hopefully this example will be useful for folks. 

Before we start, know that if you want to try this yourself, you will need a [free credential](https://developer.adobe.com/document-services/apis/interstitial/?api=pdf-embed-api). Credentials are host-based, which means a credential for raymondcamden.com will *not* work for localhost. You can definitely create a few, and if you *really* want to use one key for development and production, consider setting the host for your domain, minus the www, and use dev dot your domain locally. If you've never used your local `hosts` file for something like this, reach out and I'll help explain it. (Or heck, that may be my next post.)

Alright, so I began actually by writing a template that called my component. I kinda figured I'd write the example code in what felt like the most logical manner, and then I'd actually build the WebC component to match it. Here's how I did it:

```html
<pdfembed width="700" height="600"
  clientid="912a3ba447664592bfbffb224b74a371" 
  pdf="https://static.raymondcamden.com/images/2023/03/cat.pdf"></pdfembed>
```

I've got two attributes to define the size of my PDF, my client credential (it's host-based, so safe to share here, go ahead, steal it, I won't tell), and then the URL for my PDF. Note that when you point to a PDF, it needs to be in a CORS-accessible location. You can also use file promises in the API, but I'm keeping it simple here. 

Now let's look at the actual component:

```html
{% raw %}<template webc:is="noscript"><a :href="pdf"><span @text="pdf"></span></a></template>
<div :id="uid"></div>

<script webc:keep src="https://documentservices.adobe.com/view-sdk/viewer.js"></script>
<template webc:type="11ty" 11ty:type="liquid">
{% assign pdfname = pdf | split:"/" | last %}

<script webc:keep>
let clientID = "{{ clientid }}";

document.addEventListener("adobe_dc_view_sdk.ready", () => {
  let adobeDCView = new AdobeDC.View({clientId: clientID, divId: "{{uid}}"});
  adobeDCView.previewFile(
   {
      content:   {location: {url: "{{pdf}}"}},
      metaData: {fileName: "{{pdfname}}"},
      focusOnRendering: false
   });
});
</script>
</template>

<script webc:is="style" webc:type="js" webc:keep>`

div#${uid} {
  width: ${width}px;
  height: ${height}px;
}
`
</script>{% endraw %}
```

Let's discuss. I begin by adding a `noscript` tag that links to the PDF. That way a user without JavaScript enabled will still be able to get to the document. In order for this to work in WebC, I couldn't use the `noscript` tag directly but had to use a `template` instead with the `webc:is` directive. Zach explained why... but I honestly don't quite get it. Not yet anyway. 

Next, note the div:

```html
<div :id="uid"></div>
```

This is the part not yet documented. Every *instance* of a WebC component will automatically get provided a unique ID. This is especially useful for me as I need a way to associate a unique ID with the PDF library. This ID is safe for DOM IDs so it made sense to use it. 

Now for the slightly more complex part. I switch to Liquid so I can be a bit dynamic. Our library has a weird thing where it requires a URL (or file promise) as well as a PDF file name. I've already requested we get rid of this requirement, but for now, I get it by simply popping off the last part of the URL. 

The rest of the code in that Liquid block just outputs boilerplate PDF Embed code for the library and uses variables for the div ID, the PDF URL, and the filename.

The final part is probably the most confusing. I needed to apply CSS to style the size of the div where the PDF is rendered. To do so, I used a JavaScript string literal. I'm using a `script` tag as, technically, it's JavaScript, but it comes out as CSS, so I map it with `webc:is` as I did on top. Again, thanks go to Zach for this tip. Finally, I need to use `webc:keep` because the default behavior in WebC is to toll up and bundle all JavaScript and CSS. In this case, I need the block to stay and be used in every particular instance I call the component. 

Whew. Hopefully, this made some sense. If you want to test this yourself, I made a Glitch, because [Glitch](https://glitch.me) is freaking cool. You can see it here: <https://glitch.com/edit/#!/impossible-early-system?>