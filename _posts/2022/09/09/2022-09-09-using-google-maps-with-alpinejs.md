---
layout: post
title: "Using Google Maps with Alpine.js"
date: "2022-09-09T18:00:00"
categories: ["javascript"]
tags: ["alpinejs"]
banner_image: /images/banners/map2.jpg
permalink: /2022/09/09/using-google-maps-with-alpinejs
description: A look at integrating the Google Maps API with Alpine.js
---

It's been a little while since I've blogged about [Alpine.js](https://alpinejs.dev/), and I thought an example of integrating 
[Google Maps](https://developers.google.com/maps) with it would be a good way to continue my path to becoming comfortable with the framework. I imagined it would be fairly simple, but in building a few demos I ran into some interesting issues that helped me learn a bit more about Alpine. Let's take a look.

## My Data

All of my examples are going to use the same set of data - a few [Spirit Halloween](https://stores.spirithalloween.com/) stores close to my location. I went to their site, opened up dev tools, and copied the location of seven stores. I tweaked the data on one that was *super* close to another location and added a value that represents if a store is open twenty-four hours a day. Spirit stores don't do that, but I had a plan for it later.

```json
[
    {
        "lat": 30.175776,
        "lng": -92.077008,
        "allday":true
    },
    {
        "lat": 30.173529,
        "lng": -92.078997,
        "allday":true
    },
    {
        "lat": 30.394324,
        "lng": -91.086551,
        "allday":false
    },
    {
        "lat": 30.176162,
        "lng": -93.219241,
        "allday":false
    },
    {
        "lat": 31.269887,
        "lng": -92.46034,
        "allday":false
    },
    {
        "lat": 29.61629,
        "lng": -90.757389,
        "allday":false
    },
    {
        "lat": 30.486217,
        "lng": -90.45677,
        "allday":false
    }
]
```

## Starting Simple - Static 

For my first example, I decided to use the [Google Maps Static Map API](https://developers.google.com/maps/documentation/maps-static/overview). This has been a favorite API of mine for years as it's less an API and just a URL. For instances where you don't need a dynamic map, the Static Map API is simple as hell and just requires you to craft a URL with location information in it. I began by building a new Alpine application that would render the location of each store along with a map. I'm displaying the latitude and longitude values which you would probably never do as 'regular' people don't really care. Instead, I'd display a street address.

```html
<div x-data="app">
    <template x-for="store in stores">
        <p>
            Store location: <span x-text="store.lat"></span>,<span x-text="store.lng"></span><br/>
            <img :src="getImageUrl(store.lat,store.lng)">
        </p>
    </template>
</div>
```

For each store, I'm calling out to a method, `getImageUrl`, that will return the Static Map API URL I need for my images. Here's my Alpine application in its entirety, except with the JSON trimmed a bit for size.

```js
const MAP_KEY = 'AIzaSyC3hC35ehz1oAfUll7q7qzUlPa27Gz5g5g';

document.addEventListener('alpine:init', () => {
  Alpine.data('app', () => ({
        stores:getStores(),
        getImageUrl(lat,lng) {
            return `https://maps.googleapis.com/maps/api/staticmap?center=${lat},${lng}&zoom=15&size=400x400&maptype=roadmap&markers=color:blue%7C${lat},${lng}&key=${MAP_KEY}`
        }
  }))
});

/* 
imagine this was an API call..
*/
function getStores() {
    return [
        // list of stores here
    ]
}
```

As an example, the URL for the first store is: 

```
https://maps.googleapis.com/maps/api/staticmap? 
center=30.175776,-92.077008&zoom=15&size=400x400&maptype=roadmap
&markers=color:blue%7C30.175776,-92.077008
&key=AIzaSyC3hC35ehz1oAfUll7q7qzUlPa27Gz5g5g
``` 

You can see that blow:

<p>
<img data-src="https://maps.googleapis.com/maps/api/staticmap?center=30.175776,-92.077008&zoom=15&size=400x400&maptype=roadmap&markers=color:blue%7C30.175776,-92.077008&key=AIzaSyC3hC35ehz1oAfUll7q7qzUlPa27Gz5g5g" class="lazyload imgcenter" alt="Static Map image">
</p>

Notice that I center my map at the location *and* add a marker so it's really obvious what I'm pointing out. Markers can have different colors and labels, but I'm keeping it simple for now. Here's a CodePen showing the complete application. 

<p class="codepen" data-height="500" data-theme-id="dark" data-slug-hash="gOzroqx" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/gOzroqx">
  Alpine + Google Maps 1</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

## A Dynamic Map

For my second example, I wanted to do a proper dynamic Google Map, but just that, and nothing more. Normally I would *not* use Alpine.js if my only goal was to render a map and nothing else. The Google Map JavaScript library isn't hard to use and if I don't need Alpine, then there's no reason to load it. 

But in working on this demo, I ran into some interesting issues. First off, both Google Maps and Alpine load asynchronously. If in my next version I want to add Alpine functionality that is integrated with the map, I'd need a way to handle that. I did some Googling and came across this helpful resource: [Calling Alpine.js methods from third-party scripts](https://blog.freshbits.in/calling-alpinejs-methods-from-third-party-scripts). The blog entry describes a method by which you fire off a custom event from your Google Maps code that Alpine will listen to. Their code didn't work for me right away, I had to tweak it a bit, but let's take a look. 

First, here's how you add the Google Maps JavaScript SDK (with some additional line breaks for clarity):

```html
<script
src="https://maps.googleapis.com/maps/api/js? 
key=AIzaSyC3hC35ehz1oAfUll7q7qzUlPa27Gz5g5g 
&callback=initMap&v=weekly"
      defer
></script>
```

Notice two important things here - first my key (which I've locked to a few domains so it's safe to be here) and more importantly, the `callback` function. This will be called when Google Maps is ready.

Here's my `initMap`, taken from the Google Maps docs and modified slightly:

```js
// earlier in the code: 
let map;
// The location of Uluru
const uluru = { lat: -25.344, lng: 131.031 };           


function initMap() {
    
  // The map, centered at Uluru
  map = new google.maps.Map(document.getElementById("map"), {
    zoom: 4,
    center: uluru,
  });

  window.dispatchEvent(new Event('map-loaded'));
}
```

Notice how I'm dispatching a custom event? Back on the Alpine side, I can then add an app-wide listener for that like so:

```html
<div x-data="app" @map-loaded.window="doMapStuff()">
    
    <div id="map"></div>
</div>
```

Now let's return to Alpine:

```js
document.addEventListener('alpine:init', () => {
  Alpine.data('app', () => ({
        init() {
            if("google" in window) this.doMapStuff(); 
        },
        doMapStuff() {
            console.log('do map stuff');
            
            // The marker, positioned at Uluru
            const marker = new google.maps.Marker({
                position: uluru,
                map: map,
            });
        }
  }))
});
```

First, it's possible Google Maps loads before Alpine, so in `init`, I check for it and if it's there, I do my map stuff. That function, `doMapStuff`, is the same one called by the Alpine event listener. So either way - I'm covered. In this case, I just add a marker to the map. You can see the complete demo below.

<p class="codepen" data-height="500" data-theme-id="dark" data-slug-hash="ZEoWaJy" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/ZEoWaJy">
  Alpine + Google Maps 2</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

## Map with Alpine Data 

Alright, so let's combine that map data from the first sample with the dynamic version from the second example. First, I modified the HTML a bit to include a new control that lets the user filter to stores open twenty-four hours a day:

```html
<div x-data="app" @map-loaded.window="doMapStuff()">
    <h2>Stores</h2>
    <p>
    <label><input type="checkbox" x-model="alldayfilter"> Filter to 24 Hour Stores</label>
    </p>
    <div id="map"></div>
</div>
```

In the JavaScript, I began by modifying `doMapStuff` to render one marker per store:

```js
doMapStuff() {
    console.log('do map stuff');
    
    this.stores.forEach(store => {
        store.marker = new google.maps.Marker({
            position: { lat: store.lat, lng: store.lng },
            map: map,
        });
    });

}
```

Notice that I'm creating a marker object and storing it in my store data. Why? This allows me to toggle visibility when the checkbox is changed. To support that feature I used a watcher:

```js
this.$watch('alldayfilter', val => {
    this.stores.forEach(store => {
        if(!val) store.marker.setVisible(true);
        else {
            if(!store.allday) store.marker.setVisible(false);
        }
    });
});
```

When `alldayfilter` changes, I either set every marker to visible or conditionally hide those that aren't open all day. 

Once again, here's the CodePen: 

<p class="codepen" data-height="500" data-theme-id="dark" data-slug-hash="OJZNQqd" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/OJZNQqd">
  Alpine + Google Maps 2</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

That's it - let me know what you think, and if you've used Google Maps with Alpine, give me a shout-out so I can see it in action! 

