---
layout: post
title: "Using Intl for Short Number Formatting"
date: "2023-01-04T18:00:00"
categories: ["javascript"]
tags: ["javascript"]
banner_image: /images/banners/numbers.jpg
permalink: /2023/01/04/using-intl-for-short-number-formatting
description: A look at the 'compact' feature of Intl Number Formatting
---

One of my favorite things about working on projects to blog about it is when I get random offshoot ideas for *other* posts while working on the code. That's exactly what happened yesterday. I was playing around with another idea I had and randomly discovered something cool I thought I'd share. I've long been a fan of the [Intl](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Intl) object in JavaScript. It's an incredibly useful and powerful way to handle date and number formatting without relying on external libraries. While I've known about, and have used, Intl for years, I was absolutely pleased to find a feature I didn't know about. 


A few years ago (holy crap, make that **eleven** years ago), I wrote up an example of using [Jasmine](https://jasmine.github.io/). In that [blog post](https://www.raymondcamden.com/2012/07/06/Simple-JavaScript-number-format-function-and-an-example-of-Jasmine), I used Jasmine to test a function that wrote large numbers in an easier-to-read shorthand format. So for example, given `341,941,776`, it would write it as `342M`. Yes, it's not as precise, but it's much quicker to scan and (hopefully) easier to wrap your head around if looking at a large number of stats. (As an aside, if using this in HTML, you could always use a title attribute to show the 'real' value: `<span title="3232">3K</span>`.) 

Turns out, Intl has this support baked in if you pass the `notation` option. This option supports four values: `standard` (the default), `scientific` (for scientific formatting), `engineering` (according to the docs, "return the exponent of ten when divisible by three", which seems weird to me), and `compact`, the one we want to look at today. For a complete list of all the options supported, you can always check the [MDN docs](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Intl/NumberFormat/NumberFormat#options). 

Let's take a look at this in action. First, I'll define an array of numbers to use as tests:

```js
let inputs = [
  999,
  1000,
  2999,
  12_499,
  12_500,
  430912,
  9_123_456,
  1_111_111_111,
  81_343_902_530,
  1_111_111_111_111,
  62_123_456_789_011,
  1_111_111_111_111_111,
];
```

Notice on the larger numbers, I use underscores to represent commas. This is a new feature called 'Numeric separators' that improves readability. This is well supported, except for IE, but IE is dead so we're fine with that. 

For each number, I can generate the formatted version of it like so:

```js
let result = new Intl.NumberFormat('en-US', 
	{ notation:'compact' }).format(i);
```

I've hard-coded it to `en-US`, but that could be dynamic of course. Given my inputs, the results are pretty much what you would expect I think. Check the CodePen below:

<p class="codepen" data-height="500" data-theme-id="dark" data-slug-hash="OJwRQgN" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/OJwRQgN">
  Intl Number Formatting</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

For the most part, I think this works as expected, but note the rounding on the items lower than 100K. I can see people not being happy with that. Also note what happens when you get to quadrillion - Intl simply returns thousands of trillions. That may or may not be a big deal to you. (And I'll note, this is what my original blog post was supposed to be about, I hope to get back to that soon!)

Let's return back to the issue I mentioned about rounding. If you would prefer a bit more specificity in the smaller numbers, you can use another feature of Intl, `maximumSignificantDigits`. According to the [docs](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Intl/NumberFormat/NumberFormat#maximumsignificantdigits), this lets you set a max size for significant digits, from 1 to 21, defaulting to 21. Here's an example:

```js
let result = new Intl.NumberFormat('en-US', 
	{ notation:'compact', maximumSignificantDigits: 3}).format(i);
```

I forked my CodePen to show the difference with this in use:

<p class="codepen" data-height="500" data-theme-id="dark" data-slug-hash="WNKGMMO" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/WNKGMMO">
  Intl Number Formatting (2)</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

For no real reason I can explain, this "feels" a bit better to me. Enjoy!

Photo by <a href="https://unsplash.com/@mbaumi?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Mika Baumeister</a> on <a href="https://unsplash.com/photos/Wpnoqo2plFA?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  