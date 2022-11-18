---
layout: post
title: "Building a YouTube Embed Web Component (both vanilla and WebC flavored)"
date: "2022-11-17T18:00:00"
categories: ["development"]
tags: ["eleventy","web components","javascript"]
banner_image: /images/banners/legos.jpg
permalink: /2022/11/17/building-a-youtube-embed-web-component-both-vanilla-and-webc-flavored
description: A look at a simple YouTube embed component built in traditional web components and Eleventy's WebC plugin.
---

It's been a week or two since I've played with web components, and this morning I was thinking about them (because that's just how cool I am) and comparing and contrasting them with Eleventy's [WebC](https://www.11ty.dev/docs/languages/webc/) support. I think WebC is incredibly compelling, and honestly, if I knew I were deploying to Jamstack, I'd probably always pick that over "vanilla" web components. Using WebC lets me do quite a bit on the server, and in my build, and reduces the amount of JavaScript sent to the client. That's *always* a good thing (usually), but I can also see people using regular web components with Eleventy as well. I'm still *very* new to all of this and still figuring out what makes sense where, but I thought it would be kind of fun to build the same component in both and compare and contrast the result. 

For my component, I decided to build a lazy-loading YouTube embed. Basically, it would default to an image thumbnail of the video (there's a standard URL format where if you know the ID of a video, you can get multiple different thumbnails) and only load the "full" YouTube embed experience after clicking. 

I found an excellent example of this by Arthur Corenzan way back in 2019, [Lazy load embedded YouTube videos](https://dev.to/haggen/lazy-load-embedded-youtube-videos-520g/). In his post, he describes how he used the `srcdoc` attribute of `iframe`. Now, I don't claim to know every HTML tag and attribute out there, but I feel like I've got a pretty good handle on the platform, and I've got to say, that was a new one for me. 

`srcdoc` lets you specify the content of an iframe instead of using a URL. So for example:

```html
<iframe 
    width="410" 
    height="420" 
    srcdoc="<img src='https://placekitten.com/400/400'>"></iframe>
```

You can see this in play here:

<p class="codepen" data-height="400" data-default-tab="result" data-slug-hash="MWXOaBz" data-user="cfjedimaster" style="height: 400px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/MWXOaBz">
  srcdoc example</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

<p/>

So his technique makes use of this. His example looks like so (with extra stuff removed):

```html
<iframe 
  ...
  srcdoc="<a href=https://www.youtube.com/embed/Y8Wp3dafaMQ><img src=https://i3.ytimg.com/vi/Y8Wp3dafaMQ/hqdefault.jpg></a>">
</iframe>
```

Cool, so let's take this basic idea and turn it into a web component first.

## The Web Component Version

My web component code takes his template code and looks for arguments for height, width, videoid, and title. Here's the entire component:

```js
class YoutubeEmbed extends HTMLElement {

    constructor() {

        super();

        const shadow = this.attachShadow({mode:'open'});

        this.width = 560;
        this.height = 315;
        this.title = '';
        this.videoid = null;

        if(this.hasAttribute('width')) this.width = parseInt(this.getAttribute('width'), 10);
        if(this.hasAttribute('height')) this.height = parseInt(this.getAttribute('height'), 10);
        if(this.hasAttribute('title')) this.title = this.getAttribute('title');
        if(this.hasAttribute('videoid')) {
            this.videoid = this.getAttribute('videoid');
        } else {
            console.warn('No videoid passed to youtube-embed tag, aborting.');
            return;
        }

        const div = document.createElement('div');
        div.innerHTML = `
<iframe
  width="${this.width}"
  height="${this.height}"
  src="https://www.youtube.com/embed/${this.videoid}"
  srcdoc="<style>*{padding:0;margin:0;overflow:hidden}html,body{height:100%}img,span{position:absolute;width:100%;top:0;bottom:0;margin:auto}span{height:1.5em;text-align:center;font:48px/1.5 sans-serif;color:white;text-shadow:0 0 0.5em black}</style><a href=https://www.youtube.com/embed/${this.videoid}?autoplay=1><img src=https://img.youtube.com/vi/${this.videoid}/hqdefault.jpg alt='${this.title}' title='${this.title}'><span>▶</span></a>"
  frameborder="0"
  allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture"
  allowfullscreen
  title="${this.title}"
></iframe>

`;
        shadow.appendChild(div);
    }
}

customElements.define('youtube-embed', YoutubeEmbed);
```

There really isn't much to it. The only real logic is when I define `innerHTML` and use the attributes passed in. This is exposed as `youtube-embed` which means it can be used like so:

```html
<youtube-embed videoid="a5C4_FZ3s-k" title="Presentation on Alpine"></youtube-embed>
... 
<script src="youtube-embed.js"></script>
```

And it just plain works! For the most part. If you read the comments on his blog post, you'll note folks mentioning that the video won't play on click, despite the `autoplay` parameter. I can confirm this behavior. As someone who was railed against autoplay videos for over a decade, the browser working *against* autoplay is something I can get behind. I think one could consider a modification of the component such that instead of a play button, it perhaps has text saying "Click here to load" or some such, so the expectation is set that it's one click to load, another to play. 

To me though, the real benefit comes in when you look at the difference in what's being loaded. On a page where I use this component, the initial is right below 2.5kb. When you click to load the video, that goes to nearly a meg. That's a *huge* difference and we're saving all of that from the user's first load which is a great thing. 

You can demo this version here:

<p class="codepen" data-height="500" data-default-tab="result" data-slug-hash="JjZOYgY" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/JjZOYgY">
  youtube-embed</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

<p/>

And the source may be found here too: <https://github.com/cfjedimaster/webcomponents/tree/main/youtube-embed>

Now, let's look at the WebC version.

## The WebC Component Version

Honestly, I don't know if "WebC Component" makes sense as it's got the C in the name already. I'm probably overthinking it, but let me know what you think. Ok, let's talk Eleventy and WebC. First off, if you haven't read the [WebC](https://www.11ty.dev/docs/languages/webc) docs yet, please do. And if you need a little extra help, my [introduction](https://www.raymondcamden.com/2022/10/16/first-experience-building-with-eleventys-webc-plugin) may help. I've got a small Eleventy site with the WebC plugin installed, configured to look at `"_includes/components/**/*.webc` for components. I built a new Liquid page and used the same code to call my component:

```html
<youtube-embed videoid="a5C4_FZ3s-k" title="Presentation on Alpine"></youtube-embed>
```

And actually, that's a lie. It *isn't* the same code, do you see what's missing? The script source. It's completely unnecessary now as Eleventy's going to handle all of that in the build process. For my actual component, here is `youtube-embed.webc`:

```html
{% raw %}<template webc:type="11ty" 11ty:type="liquid">
{% if width == blank %}
    {% assign width = "560" %}
{% endif %}
{% if height == blank %}
    {% assign height = "315" %}
{% endif %}

<iframe
  width="{{ width }}"
  height="{{ height }}"
  src="https://www.youtube.com/embed/{{videoid}}"
  srcdoc="<style>*{padding:0;margin:0;overflow:hidden}html,body{height:100%}img,span{position:absolute;width:100%;top:0;bottom:0;margin:auto}span{height:1.5em;text-align:center;font:48px/1.5 sans-serif;color:white;text-shadow:0 0 0.5em black}</style><a href=https://www.youtube.com/embed/{{videoid}}?autoplay=1><img src=https://img.youtube.com/vi/{{videoid}}/hqdefault.jpg alt='{{title}}' title='{{title}}'><span>▶</span></a>"
  frameborder="0"
  allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture"
  allowfullscreen
  title="{{title}}"
></iframe>

</template>{% endraw %}
```

This is just a Liquid template with a bit of logic on top, and then just dynamic output. I'm not a fan of needing to wrap the entire thing in `template` tags so I can use Liquid, but I can get over it too. 

For such a simple test, the size savings wasn't really big. I believe it was 1k less than the "vanilla" WebC version, but this one works without JavaScript, and *any* easy saving is a good saving!

While I don't have this demo running anywhere, you can find it (and other things I was playing with) here: <https://github.com/cfjedimaster/eleventy-demos/tree/master/webctest1> As always, don't forget this is a new feature, I'm learning, and it's bound to change before release.
