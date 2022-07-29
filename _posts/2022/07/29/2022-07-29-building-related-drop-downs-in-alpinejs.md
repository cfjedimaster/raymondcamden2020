---
layout: post
title: "Building Related Selects in Alpine.js"
date: "2022-07-29T18:00:00"
categories: ["JavaScript"]
tags: ["alpinejs"]
banner_image: /images/banners/nightcity.jpg
permalink: /2022/07/29/building-related-selects-in-alpinejs
description: How to build related selects using Alpine.js
---

One common UX/UI metaphor in web design is the idea of "related" selects or drop-downs. What I mean by this is the idea of having one select field of options, and when you select something from there, it drives the contents of *another* (or related) select field. An example of this could be a drop-down of car makes. When a particular make is selected, you then get a drop-down of car models. I thought it would be fun to build an example of this in [Alpine.js](https://alpinejs.dev/). 

To begin, I created two utility functions that would create mock data for my selects. The first returns a list of states (not all of them, and that's ok):

```js
const getStates = () => {
    return [
        {id:1, label:"Alabama"},
        {id:2, label:"California"},
        {id:3, label:"Louisiana"},
        {id:4, label:"Texas"},
        {id:5, label:"Washington"}
        ]
}
```

Notice each state has an `id` and `label` value. Each state has a set of related cities. For that, I built a method to generate them when requested. To demonstrate returning different sets of data for each state, both the names of the cities and the number of cities are dynamic:

```js
const getCities = (id) => {
    if(!id) return [];
    let state = (getStates()).find(i => i.id === parseInt(id,10));
    let result = [];
    for(let i=0; i<(id*2); i++) {
        result.push({id:i, label:`${state.label} City ${i+1}`});
    }
    return result;
}
```

Alright, let's look at the HTML I'll use for this:

```html
<div x-data="app" x-cloak>
    <label>State:
    <select x-model="state">
        <option value="">-- Select a State --</option>
        <template x-for="state in states">
            <option :value="state.id"><span x-text="state.label"></span></option>
        </template>
    </select>
    </label>
    
    <label x-show="state">City:
        <select x-model="city">
            <template x-for="city in cities">
                <option :value="city.id"><span x-text="city.label"></span></option>
            </template>
        </select>
    </label>
</div>
```

I've got two main parts to this - one for states and one for cities. For states, I've bound the select to a `state` variable and the options come from `states`. 

For cities, it's pretty similar, but note the use of `x-show`. The idea here is to only show the city drop-down when a state is selected. 

Now let's check out the JavaScript:

```js
document.addEventListener('alpine:init', () => {
  Alpine.data('app', () => ({
        states:getStates(),
        state:null,
        city:null,
        cities() {
            return getCities(this.state);
        }
  }))
});
```

As this is a very simple demo, the code isn't long. You can see `states` making use of the function I defined earlier. Ditto for `cities`, but notice how it uses `this.state`. This will re-run anytime the value of `state` changes. I don't have to do anything else. You can play with this yourself here:

<p class="codepen" data-height="500" data-theme-id="dark" data-default-tab="html,result" data-slug-hash="VwXrKOR" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/VwXrKOR">
  Related DD</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

For the heck of it, I decided to build another version, this one where the call to get cities for a state was asynchronous. You could imagine this being the result of calling an API for example. As a hackish way to fake that, I simply used `setTimeout`. Here's the new version:

```js
const getCities = async (id) => {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            if(!id) resolve([]);
            let state = (getStates()).find(i => i.id === parseInt(id,10));
            let result = [];
            for(let i=0; i<(id*2); i++) {
                result.push({id:i, label:`${state.label} City ${i+1}`});
            }
            resolve(result);
        }, 1000);
    });
}
```

There's one more slight difference in that I check if the `id` value is null, which it will be on load, and if so, return an empty array. 

Now - at first - it was an easy modification to use this. I literally just did this to the `cities` definition in my Alpine app:

```js
async cities() {
    return  await getCities(this.state);
}
```

And it just freaking worked. But there wasn't any feedback to the user that something was happening when a state was selected. I decided to add a loading message and ensure the cities select was hidden during this process. That ended up being a bit more complex. 

First, I modified the second half of my HTML:

```html
<span x-show="loadingCities"><i>Loading cities...</i></span>
<label x-show="state && !loadingCities">
    <span x-show="!loadingCities">City:</span>
    <select x-model="city" x-show="!loadingCities">
        <template x-for="city in cities">
            <option :value="city.id"><span x-text="city.label"></span></option>
        </template>
    </select>
</label>
```

First, I've got a span that shows up when a new value, `loadingCities`, is true. You'll see that in a second. I then modified the `label` to check for both `state` and `loadingCities` to be false. So far so good. But here's where things got odd. In my mind, this should have been enough. But when I had "City" by itself, not wrapped in a span, I would see it the very first time a state was selected, even though `loadingCities` was true. On the second, and so forth, selection, it worked as expected. I also had an issue with the select showing up, empty. 

I'm not sure why, but I added the span, used `x-show` for both inside, and even though it feels like I had to do more work than expected, it seemed to work well. 

Here's the updated JavaScript:

```js
document.addEventListener('alpine:init', () => {
  Alpine.data('app', () => ({
        states:getStates(),
        state:null,
        loadingCities:false,
        async cities() {
            if(this.state) this.loadingCities = true;
            let result = await getCities(this.state);
            this.loadingCities = false;
            return result;
        }
  }))
});
```

You can see `cities` is a bit more complex. I've got to get the result and then set my loading value back to false, then return it. All in all, it worked, but as I said, it was tricky to get the timings right on everything. Here's this application for you to play with:

<p class="codepen" data-height="500" data-theme-id="dark" data-default-tab="result" data-slug-hash="QWmOdWx" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/QWmOdWx">
  Related DD (Async)</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

<p/>

Photo by <a href="https://unsplash.com/@aeschwarz?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Adrian Schwarz</a> on <a href="https://unsplash.com/s/photos/cities?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  
