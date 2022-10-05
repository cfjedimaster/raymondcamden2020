---
layout: post
title: "Web Component Experiment - Manipulating Inner Text"
date: "2022-10-04T18:00:00"
categories: ["development"]
tags: ["javascript","web components"]
banner_image: /images/banners/innerlight.jpg
permalink: /2022/10/04/web-component-experiment-manipulating-inner-text
description: A look at manipulating the inner content of web components.
---

I've been thinking a lot more about web components lately, and this especially got a kick up after seeing a great presentation on the topic by [Nolan Erck](https://nolanerck.com/). Yesterday I was curious if web components could access, and manipulate, content between the opening and closing tag. So for example, consider this code:

```html
<place-kitten>
Here is text about a cat.
</place-kitten>
```

What I'd like to do is read the text inside (`Here is text about a cat.`) and manipulate it. I'm not talking about the [slot](https://developer.mozilla.org/en-US/docs/Web/Web_Components/Using_templates_and_slots) feature, which looks like a good feature, but a simpler approach where I can just grab the text between the paired tags. 

I was able to figure it out, and I'm going to share my findings below, but please remember that I'm new at this and maybe what I'm proposing is a bad idea. To be 100% clear, my third and final example is a very, *very* bad idea and you should not copy it. Seriously.

## Attempt One 

For my first example, I checked to see if I could read and edit the [textContent](https://developer.mozilla.org/en-US/docs/Web/API/Node/textContent) property. I created a quick web component named `inner-text`, and tried this code:

```js
class InnerTest extends HTMLElement {

    constructor() {

        super();

        const shadow = this.attachShadow({
            mode: 'closed'
        });
		
        const wrapper = document.createElement('div');
		wrapper.innerText = this.textContent.split('').reverse().join('');
        shadow.appendChild(wrapper);
	}	

}

customElements.define('inner-test', InnerTest);
```

Basically - read `textContent`, reverse it by using the convert to an array trick, and return it to the div I'm adding in the shadow DOM. I tested like so:

```html
<inner-test>
Raymond
Camden
</inner-test>
```

And voila, it worked:

<p class="codepen" data-height="500" data-default-tab="result" data-slug-hash="oNdMXrV" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/oNdMXrV">
  InnerText</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

## Attempt Two 

Seeing how simple it was, I then decided to build something real, and maybe a tiny bit practical. How about a Markdown Renderer?

```js
import { marked } from 'https://jspm.dev/marked';

class MarkdownRender extends HTMLElement {

    constructor() {

        super();

        const shadow = this.attachShadow({
            mode: 'closed'
        });
		
        const wrapper = document.createElement('div');
		wrapper.innerHTML = marked.parse(this.textContent);
        shadow.appendChild(wrapper);
	}	

}

customElements.define('markdown-render', MarkdownRender);
```

In the code above, I load in the [marked](https://www.npmjs.com/package/marked) JavaScript Markdown library which lets me simply use the `parse` command on text to convert it to HTML. Using input like so:

```html
<markdown-render>
# Hello World

* ray 
* camden 
* was 
* here
</markdown-render>
```

I get valid HTML out. Here's it in action:

<p class="codepen" data-height="300" data-default-tab="result" data-slug-hash="ExLpVxe" data-user="cfjedimaster" style="height: 300px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/ExLpVxe">
  Markdown</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>
<p></p>

Ok, stop reading now, honest. 

## Attempt Three 

Still reading? Why, I warned you! So, about five years ago, I blogged a completely dumb experiment I did on OpenWhisk, serverless BASIC support: [Serverless Basic](https://www.raymondcamden.com/2017/08/01/serverless-basic). I've got a fond memories of BASIC, specifically AppleSoft Basic, as it was my first programming language. Wouldn't it be cool, and completely useless, to build a web component that allowed for this?

```html
<applesoft-basic>
10 x = 10
20 y = 2

40 print "X+Y="
50 print x+y
</applesoft-basic>
```

Or even:

```html
<applesoft-basic>
10 x = 0
20 for i = 1 to 10
30 x = x + i
40 next

50 print x
</applesoft-basic>
```

Yes, of course it's cool! I used the same library I used in the past, [jsbasic](https://github.com/inexorabletash/jsbasic/), and built it into the following web component:

```js

class ApplesoftBasic extends HTMLElement {

    constructor() {

        super();

        const shadow = this.attachShadow({
            mode: 'open'
        });
		
        const wrapper = document.createElement('div');
        shadow.appendChild(wrapper);		
	}	

	connectedCallback() {

		const script = document.createElement('script');
		script.type = 'text/javascript';
		script.src='./applesoftbasic.js';
		document.head.appendChild(script);

		let interval = setInterval(() => {
			if(window.basic) {
				clearInterval(interval);
				let result = this.compile(this.textContent);
				let mydiv = this.shadowRoot.querySelector('div');
				mydiv.innerHTML = result;
			} 
		}, 250);
	}

	compile(input) {

		let result = '';
		let program = basic.compile(input);

		program.init({
			tty: {
				getCursorPosition: function() { return { x: 0, y: 0 }; },
				setCursorPosition: function() { },
				getScreenSize: function() { return { width: 80, height: 24 }; },
				writeChar: function(ch) { 
					//console.log('writeChar called with: '+ch);
					result += ch;
				},
				writeString: function(string) { 
					//console.log('writeString called with: '+string);
					result += string+'\n';
				},
				readChar: function(callback) {
					//callback(host.console.getc());
					callback('');
				},
				readLine: function(callback, prompt) {
					//host.console.puts(prompt);
					//callback(host.console.gets().replace(/[\r\n]*/, ''));
					callback('');
				}
			}
		});

		let driver = function() {
			var state;
			do {
				try {
					state = program.step(driver);
				} catch(e) {
					console.log('ERROR!',e);
					return {
						error:e
					}
				}
				// may throw basic.RuntimeError
			} while (state === basic.STATE_RUNNING);
		}
		driver(); // step until done or blocked

		return result;

	}

}

customElements.define('applesoft-basic', ApplesoftBasic);
```

This one's a bit more complex. First, I load in the library via a script tag added to the DOM, and then use an interval to see when the global object, `basic`, exists. Updating the content was a bit more complex. Since my BASIC parsing was finished after the component was loaded and rendered, I grab a div via `querySelector` and update it that way. 

In case it isn't obvious, this whole thing is a really bad idea. But it works. To be clear, it works if you stick to non-interactive BASIC, but heck, even the infamous `goto` and `gosub` work. You can play with it here:

Unfortunately I can't show this on CodePen as it needs access to the BASIC library in a CORS friendly manner, but you can test the running app here: <https://cfjedimaster.github.io/webdemos/webcomponents/basic.html>

All of the code shown here, and my other web components, may be be found here: <https://github.com/cfjedimaster/webdemos/tree/master/webcomponents>

Photo by <a href="https://unsplash.com/es/@iljatulit?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Ilja Tulit</a> on <a href="https://unsplash.com/s/photos/inner-light?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>