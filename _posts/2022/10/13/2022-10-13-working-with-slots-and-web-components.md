---
layout: post
title: "Working with Slots and Web Components"
date: "2022-10-13T18:00:00"
categories: ["development"]
tags: ["javascript","web components","adobe","pdf services"]
banner_image: /images/banners/slots.jpg
permalink: /2022/10/13/working-with-slots-and-web-components
description: A look at slots and how they work with web components.
---

Before I begin a warning. As I've made clear over the last few posts on [web components](https://www.raymondcamden.com/tags/web+components), I'm still very much in the "learn and try things out" phase of my education with web components. This post in particular is one I'm a bit unsure of, but as I learn, I like to share, and as always, I'll post back later with corrections, updates, and further learnings. Alright, with that out of the way, let's get started.

I've been raving about [MDN Web Docs](https://developer.mozilla.org/en-US/) for a *very* long time. It is absolutely, unequivocally, the best source for learning about the web platform. That being said, this was one of those very rare cases where their documentation just really didn't work for me, specifically the [Using templates and slots](https://developer.mozilla.org/en-US/docs/Web/Web_Components/Using_templates_and_slots) section of their otherwise excellent Web Components reference. It's most likely my fault, and I'm fine with that, but I'm also going to see if I can contribute back some edits that may make things easier for me. It was a real struggle, but I think I've got a basic idea now of how slots work with web components.

## First - the Why?

Before we begin talking about slots, let's talk about what problems they can solve. As you may know, web components support the passing of arguments to help define their behavior, just like baked-in HTML elements. You can see an example of this in my [blog post](https://www.raymondcamden.com/2022/10/06/building-a-placeholder-web-component-with-no-external-dependencies) where I build a placeholder component that accepts arguments for width, height, and text. In that case, arguments work perfectly:

```html
<place-holder width="300" height="300" 
    bgcolor="pink" text="Hello World"></place-holder>
```

Ok, but what about arguments that may be longer, and more complex? Consider the typical "Card" UI component. Here's an example from the [Vuetify](https://vuetifyjs.com/en/components/cards/) library:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/10/card1.jpg" alt="Example of Vuetify Card" class="lazyload imgborder imgcenter">
</p>

Looking at that component, you can see it's got multiple different parts. A header image, header text, main body text, a row of buttons (well, one button) at the bottom. All of this could be passed to a web component tag, but it's going to get a bit messy. So example:

```html
<cool-card titleImage="img url" 
           titleText="Cafe Blah"
           includeStarRating="true"
           text="lots of text with possible P tags and more"
           availabiltyControl="true"
           etc="more">
</cool-card>
```

Slots can help here. Instead of passing a lot of arguments, possibly ones with complex values, we can use elements inside our web component with defined slots:

```html
<cool-card titleImage="img url" otherArgs="ok too!">

    <h2 slot="cardTitle">Cafe Blah</h2>

    <div slot="cardText">
    lots of stuff here for the text
    </div>

</cool-card>
```

In the above example, I'm still using arguments for the simpler stuff, but the more complex values are inline, with a `slot` argument specifying what their role is. 

Obviously, the use of slots versus arguments will change on a case-by-case basis, but flexibility is always a good thing!

## Second - ok but how?

This is where I ran into the most issues with the MDN documentation. The critical part missing for me was how the web component *used* the slots. Turns out it's rather easy. A web component can use a slot by just using the `slot` element. Here's an example:

```html
<h1>I'm a header</h1>
<p>Here's my slot: <slot name="testslot">default</slot></p>
<h2>I'm a footer.</h2>
```

In this case, I'm looking for a slot named `testslot` and rendering it inside a `p` element. Even cooler, you can provide default text inside that only shows up with the slot isn't used. Here's a component that makes use of this.

```js

class SlotOne extends HTMLElement {

    constructor() {

        super();

        const shadow = this.attachShadow({mode:'open'});

        const div = document.createElement('div');
        div.innerHTML = `
<h1>I'm a header</h1>
<p>Here's my slot: <slot name="testslot">default</slot></p>
<h2>I'm a footer.</h2>
`;

        shadow.appendChild(div);
    }

}

customElements.define('slot-one', SlotOne);
```

You'll notice I'm not using a bunch of createElement calls, just one to make a div and then I use a template string. This is a much simpler approach and I'll probably use this more going forward. Thanks to [Nolan Erck](https://nolanerck.com/) for the inspiration here, I saw something similar in his web component presentation.

Ok, given the above component, I can then do:

```html
<slot-one>
    <span slot="testslot">this is test slot</span>
</slot-one>

<hr/>

<slot-one>
</slot-one>
```

Which returns the following:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/10/slot1.jpg" alt="Slot demo results" class="lazyload imgborder imgcenter">
</p>

You can play with this below:

<p class="codepen" data-height="500" data-theme-id="dark" data-slug-hash="QWrYMXg" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/QWrYMXg">
  Slot 1</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

One interesting side effect is that as soon as a web component makes use of text, any content inside your component instance will *not* be rendered. So if I do:

```html
<slot-one>
hello kitty
</slot-one>
```

It won't render. Why? Anything not in a slot is considered the unnamed slot. I can add it to my web component DOM:

```html
<p>You may have sent me unslotted stuff, if so, 
here it is: <slot></slot></p>
```

And then it starts working. You can see this version here:

<p class="codepen" data-height="500" data-theme-id="dark" data-slug-hash="gOzqGOr" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/gOzqGOr">
  Slot 1</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

## Third - Time for a Useless Demo!

Ok, so once again, I built something fun. It's fragile, not really something I'd use in production, but was fun as a "can I build this?" exercise. Check out the following:

```html
<remote-array url="https://hub.dummyapis.com/employee?noofRecords=10">
{% raw %}
    <div>
    i will repeat for each item {{firstName}} {{lastName}} end test<br/>
    </div>
{% endraw %}
</remote-array>
```

Can you guess what it does? I'm calling a component that points to a remote API that returns an array of records. My text inside, which will become the default slot, is a template where each item in brackets will be replaced with a real value. Here's the web component:

```js

class RemoteArray extends HTMLElement {

    constructor() {

        super();

        const shadow = this.attachShadow({mode:'open'});
        if(this.hasAttribute('url')) {
            this.url = this.getAttribute('url');
        } else console.warn('No URL passed to remote-array, I will do nothing, but I\'ll do it fast!');

        const div = document.createElement('div');
        div.innerHTML = `
        <slot></slot>
        `;

        shadow.appendChild(div);


    }

    async connectedCallback() {
        console.log('connected callback');

        let req = await fetch(this.url);
        let data = await req.json();
        console.log(data);

        let template = this.querySelector('div').innerHTML;
        let result = '';

        data.forEach(d => {
            let recordHTML = template;
            for(let key in d) {
                {% raw %}let token = `{{${key}}}`;{% endraw %}
                recordHTML = recordHTML.replace(token, d[key]);
            }
            result += recordHTML;
        });
        
        this.querySelector('div').innerHTML = result;
    }
}

customElements.define('remote-array', RemoteArray);
```

In theory, I could have used the technique I [blogged](https://www.raymondcamden.com/2022/10/04/web-component-experiment-manipulating-inner-text) about using inner text of a component, but in this case I wanted to have a formal slot so my component has that... and just that.

In `connectedCallback`, I do a fetch against the URL, find my template and then begin iterating over the remote data. For each record, I check every key inside the object, and see if I have a corresponding value in the array. If so, it's replaced. I *could* get fancy and actually dynamically load in [Handlebars](https://handlebarsjs.com/) instead, but this was just for fun. Here's a CodePen showing this in action. The template shows up while loading, and I believe I could fix that, but I had trouble getting that working well. It was easy to hide with CSS, but when I tried to display the result it failed. I know I could work around that but for a quick demo, I'm fine with it as is. Once again, a CodePen for you!

<p class="codepen" data-height="500" data-theme-id="dark" data-slug-hash="gOzqGzR" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/gOzqGzR">
  Slot 3</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

As always, I hope this helps, and let me know what you think!

Photo by <a href="https://unsplash.com/@aarez?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Aarón González</a> on <a href="https://unsplash.com/s/photos/slots?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  