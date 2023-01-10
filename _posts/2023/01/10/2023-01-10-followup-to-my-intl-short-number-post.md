---
layout: post
title: "Followup to My Intl Short Number Post"
date: "2023-01-10T18:00:00"
categories: ["javascript"]
tags: ["javascript"]
banner_image: /images/banners/numbers.jpg
permalink: /2023/01/10/followup-to-my-intl-short-number-post
description: A quick followup to using Intl to create short numbers
---

A few days ago I shared a [blog post](https://www.raymondcamden.com/2023/01/04/using-intl-for-short-number-formatting) about using the [Intl](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Intl) object in JavaScript to create short, more readable numbers. So for example, instead of 9123456, it would display 9.1M. This was done using the `notation` option in `Intl.NumberFormat`. Yesterday I randomly ran into an interesting modification on this using yet another option, `compactDisplay`. 

The [`compactDisplay`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Intl/NumberFormat/NumberFormat#:~:text=compactDisplay) option is only used when `notation` is set to `compact`. It supports two options, `short` which is default and what I demonstrated in the previous post, and `long`. 

So given a number, `i`, you would use it like so:

```js
new Intl.NumberFormat('en-US', { notation:'compact', compactDisplay:'long'}).format(i);
```

And the result is, well, longer. ;) What's nice though is that it's still a shortened, simpler version. You can see the result here:

<p class="codepen" data-height="500" data-theme-id="dark" data-default-tab="result" data-slug-hash="qByRxRo" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/qByRxRo">
  Intl Number Formatting (long)</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

<p/>

Awesome. And if you want to dig deeper into Intl, I recommend the very cool [Intl Explorer](https://www.intl-explorer.com/) site. It's an interactive explorer for the Intl spec and covers everything. (If I had paid more attention to it, I would have seen `compact` sooner!) 