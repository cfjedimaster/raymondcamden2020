---
layout: post
title: "Progressively Enhancing a Form with Web Components"
date: "2023-02-10T18:00:00"
categories: ["javascript"]
tags: ["web components"]
banner_image: /images/banners/legos.jpg
permalink: /2023/02/10/progressively-enhancing-a-form-with-web-components
description: Using a web component to turn a form into a multi-step process.
---

I've been loving playing with [web components](/tags/web+components) lately and today I'm excited to share another one. Especially excited as this one is a great example (I think!) of using a web component to enhance HTML, but that fails gracefully for a user with JavaScript disabled. Before I begin, a quick thank you to [Simon MacDonald](https://www.simonmacdonald.com/) for helping me get over the hump at the end of this one. For folks curious, I'll share where I got stuck and what he and I discussed after I get through the main part of this post. 

Alright, so what did I build? I was curious if it would be possible to use a web component to turn a "long" form into a multistep process. Much like a typical e-commerce checkout flow, I'd want to show a part of a form one at a time, and when done, submit everything. The idea is to make the process a bit less intimidating to the user. So for example, consider this form:

```html
<form action="https://postman-echo.com/post" method="post">
	
	<p>
	<label for="firstname">
		First Name: 
	</label>
	<input type="text" id="firstname" name="firstname">
	</p>
	<p>
	<label for="lastname">
		Last Name: 
	</label>
	<input type="text" id="lastname" name="lastname">
	</p>
	<p>
	<label for="email">
		Email: 
	</label>
	<input type="email" id="email" name="email">
	</p>

	<p>
	<label for="ccnumber">
		Credit Card Number: 
	</label>
	<input type="text" id="ccnumber" name="ccnumber">
	</p>
	<p>
	<label for="ccv">
		CCV: 
	</label>
	<input type="text" id="ccv" name="ccv">
	</p>
	<p>
	<label for="expdate">
		Expiration Date: 
	</label>
	<input type="text" id="expdate" name="expdate">
	</p>

	<p>
	<label for="street">
		Street: 
	</label>
	<input type="text" id="street" name="street">
	</p>
	<p>
	<label for="City">
		City: 
	</label>
	<input type="text" id="city" name="city">
	</p>
	<p>
	<label for="state">
		State: 
	</label>
	<input type="text" id="state" name="state">
	</p>
	<p>
	<label for="postalcode">
		Postal Code: 
	</label>
	<input type="text" id="postalcode" name="postalcode">
	</p>
	<input type="submit">

</form>
```

This isn't *terribly* long, here's how this looks with a bit of CSS:

<p>
<img data-src="https://static.raymondcamden.com/images/2023/02/mf1.jpg" alt="HTML display of the form fields" class="lazyload imgborder imgcenter">
</p>

Right away, we can improve this a bit by adding a bit of natural grouping with the `fieldset` and `legend` tags:

```html
<form action="https://postman-echo.com/post" method="post">
	
	<fieldset>
		<legend>Your Info</legend>
		<p>
		<label for="firstname">
			First Name: 
		</label>
		<input type="text" id="firstname" name="firstname">
		</p>
		<p>
		<label for="lastname">
			Last Name: 
		</label>
		<input type="text" id="lastname" name="lastname">
		</p>
		<p>
		<label for="email">
			Email: 
		</label>
		<input type="email" id="email" name="email">
		</p>
	</fieldset>

	<fieldset>
		<legend>Payment Info</legend>
		<p>
		<label for="ccnumber">
			Credit Card Number: 
		</label>
		<input type="text" id="ccnumber" name="ccnumber">
		</p>
		<p>
		<label for="ccv">
			CCV: 
		</label>
		<input type="text" id="ccv" name="ccv">
		</p>
		<p>
		<label for="expdate">
			Expiration Date: 
		</label>
		<input type="text" id="expdate" name="expdate">
		</p>
	</fieldset>

	<fieldset>
		<legend>Shipping Info</legend>
		<p>
		<label for="street">
			Street: 
		</label>
		<input type="text" id="street" name="street">
		</p>
		<p>
		<label for="City">
			City: 
		</label>
		<input type="text" id="city" name="city">
		</p>
		<p>
		<label for="state">
			State: 
		</label>
		<input type="text" id="state" name="state">
		</p>
		<p>
		<label for="postalcode">
			Postal Code: 
		</label>
		<input type="text" id="postalcode" name="postalcode">
		</p>
		<input type="submit">
	</fieldset>

</form>
```

And here's how this looks:

<p>
<img data-src="https://static.raymondcamden.com/images/2023/02/mf2.jpg" alt="Form with fieldsets" class="lazyload imgborder imgcenter">
</p>

Nicer! Looking at this, what if we could display one `fieldset` at a time, and dynamically add navigation? If you read my [Slideshow web component](https://www.raymondcamden.com/2023/02/08/another-update-to-my-slideshow-web-component-javascript-support) post, you saw an example of this. Given a list of images for input, I add a Previous and Next button to let you navigate the images. I built something similar for this - `MultistepForm`:

```js
class MultistepForm extends HTMLElement {

	constructor() {

		super();

		const shadow = this.attachShadow({mode:'open'});

		this.totalSets = this.querySelectorAll('fieldset').length;
		this.current = 0;
		
		const wrapper = document.createElement('div');

		wrapper.innerHTML = `
		<slot></slot>
		<p>
		<button id="prevButton">Previous</button> 
		Step <span id="currentSetNum">1</span> of <span id="totalPictures">${this.totalSets}</span>
		<button id="nextButton">Next</button> 
		</p>
		`;

		this.$nextButton = wrapper.querySelector('#nextButton');
		this.$prevButton = wrapper.querySelector('#prevButton');
	
		this.$currentSetNum = wrapper.querySelector('#currentSetNum');

		shadow.appendChild(wrapper);

	}
	
	connectedCallback() {
		this.$nextButton.addEventListener('click', e => this.nextSet(e));
		this.$prevButton.addEventListener('click', e => this.prevSet(e));
		this.$sets = this.querySelectorAll('fieldset');

		this.$sets.forEach(s => {
			s.style.display='none';
		});

		this.updateDisplay();
	}

	nextSet() {
		if(this.current+1 == this.totalSets) return; 
		this.current++;
		this.updateDisplay();
	}

	prevSet() {
		if(this.current == 0) return; 
		this.current--;
		this.updateDisplay();
	}

	updateDisplay() {
		this.$sets.forEach((s, x) => {
			if(x === this.current) this.$sets[x].style.display = 'block';
			else this.$sets[x].style.display = 'none';
		});
		this.$currentSetNum.innerText = this.current+1;
	}

}

customElements.define('multistep-form', MultistepForm);
```

Taking this from the top, I begin by counting how many `fieldset` tags I have wrapped in my tag. I then set my current page to 0. The layout defined in the tag is defined by the content passed in and loaded via `<slot></slot>`, with the navigation added to the bottom. Notice the two `spans` in there, they will be dynamic based on the current step and the total number of steps, as defined by the total blocks of `fieldset`s. 

In my `connectedCallback`, I add event listeners, and then grab the `fieldset` blocks. For each, I hide them with `display="none"` and call `updateDisplay`. The previous and next handlers are the same as I used in my Slideshow component. The real change is in `updateDisplay`, which loops through the `fieldset`s and shows/hides based on the right value. As this is non-destructive, the user can type stuff into the form fields, navigate the form, and finally submit it. 

To make use of this component, I simply wrapped my HTML in `<multistep-form`>` tags, and was done!

You can try this out yourself below:

<p class="codepen" data-height="600" data-theme-id="dark" data-default-tab="result" data-slug-hash="xxJoXad" data-editable="true" data-user="cfjedimaster" style="height: 600px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/xxJoXad">
  Multistep Form WC (V2)</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>
<p/>

All in all, I really dig this component. I love that it 'breaks' into a regular form so in theory, this is completely safe for any user. In theory. :) 

Ok, so that's the main post, feel free to stop reading. Now for the issue that stumped me and Simon helped me figure out. In my initial build of this component, I did not use the `slot` tag. I figured my component could edit the "regular" DOM items, not the shadow dom, and weirdly, I had no issues hiding the fieldsets, but couldn't bring them back. I assumed (guessed) that by *not* using `slot`, the original content was lost in some nether world of the DOM. I'm not sure. But using `slot` and manipulating the content directly in the shadow dom of the component had things working right away.