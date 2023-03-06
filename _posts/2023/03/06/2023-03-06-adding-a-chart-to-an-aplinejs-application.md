---
layout: post
title: "Adding a Chart to an Apline.js Application"
date: "2023-03-06T18:00:00"
categories: ["development"]
tags: ["alpinejs","javascript"]
banner_image: /images/banners/chart.jpg
permalink: /2023/03/06/adding-a-chart-to-an-aplinejs-application
description: A look at adding a simple chart display to an Alpine.js application.
---

For a while now my blog queue has had an item in there suggesting I take a look at adding a basic chart to an [Alpine.js](https://alpinejs.dev/) application. I finally got a chance to play around with this over the weekend and I thought I'd share the result. For this post, I've used [Chart.js](https://www.chartjs.org/), which is a free, open-source charting library that's relatively easy enough to use. Certainly, others could be used as well and as always, if you've got an example, I'd love to see it. With that out of the way, let's take a look at the application.

## Before the Chart

I'll start by sharing what I built *before* I added a chart to the display. This application consists of a list of cities. For each city, we use the [Pirate Weather API](https://pirateweather.net/) to get an hourly forecast and from that, I display the temperature over the next twelve hours. Here's how that looks:

<p>
<img data-src="https://static.raymondcamden.com/images/2023/03/alp1.jpg" alt="Table of four cities and four weather forecasts." class="lazyload imgborder imgcenter">
</p>

I probably should have included a timestamp but for now, this gets the point across. Let's take a look at the code. I begin by defining my cities. This probably would be dynamic, loaded from a database or API, etc.

```js
cities: [
	{ label: "Lafayette, LA", latitude: 30.22, longitude: -92.02 },
	{ label: "Bellingham, WA", latitude: 48.768, longitude: -122.485 },
	{ label: "Chicago, IL", latitude: 41.881, longitude: -87.623 },
	{ label: "Washington, DC", latitude: 38.895, longitude: -77.036 }			
]
```

When the application starts, I want to fire off requests to get forecasts. I did this in two methods. The first top-level method fires off the requests:

```js
async getForecasts(locs) {
	console.log('get forecasts for my locations');
	let requests = [];
	locs.forEach(l => {
		requests.push(this.getHourlyForecast(l.latitude, l.longitude));
	});
	let data = await Promise.all(requests);
	data.forEach((d, i) => {
		this.cities[i].forecast = d;
	});
	this.numForecasts = this.cities[0].forecast.length;
},
```

Here I make use of promises to fire all four requests at once and then wait for them to finish. Yes, I should have error handling here. The result of `Promise.all` will be one array item per promise and will be in the same order I created them, so I can assign the results to my cities by just looping over them. 

The actual API call is done here:

```js
async getHourlyForecast(lat, lng) {
	let req = await fetch(`https://api.pirateweather.net/forecast/${APIKEY}/${lat},${lng}?exclude=alerts,daily,currently,minutely&units=us`);
	let data = await req.json();
	return data.hourly.data.slice(0,12);
}
```

I pass in my API key and the location to the API. The result contains a lot of information, but all I want is the hourly records and only the first twelve. I could probably simplify the result even more but this is good enough. 

With the forecast information ready, the table can now be displayed. Here's the UI:

```html
<div x-data="app">
	<table>
		<thead>
			<tr>
				<template x-for="city in cities">
					<th x-text="city.label"></th>
				</template>
			</tr>
		</thead>
		<tbody>
			<template x-for="i in numForecasts">
				<tr>
					<template x-for="city in cities">
						<td x-text="city.forecast[i-1].temperature"></td>
					</template>				
				</tr>
			</template>
		</tbody>
	</table>
</div>
```

Basically one loop over the cities to build the table header, and then a loop over the number of forecasts with an inner loop over each city to build each row. 

Here's a CodePen demonstrating the complete application.

<p class="codepen" data-height="500" data-theme-id="dark" data-default-tab="result" data-slug-hash="xxadMNB" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/xxadMNB">
  Alpine + ChartJS (Initial)</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

## Adding the Chart

For my chart, I thought it would be nice to visualize both the highest and lowest temperatures for each of the cities. That would give us an idea of the range over our time period as well as the relative difference in warmth between the cities. (Spoiler - Louisiana is hot. Always hot.) Here's the chart I came up with:

<p>
<img data-src="https://static.raymondcamden.com/images/2023/03/alp2.jpg" alt="Chart showing temperature ranges" class="lazyload imgborder imgcenter">
</p>

Note that this was me doing the bare minimum in terms of "design". Chart.js seems really powerful and I could absolutely do more to make this prettier, but honestly, it works, and I was pleased with how quickly I got this working. Here's what I had to do.

First, I added the library, https://cdn.jsdelivr.net/npm/chart.js. And hey, thank you Chart.js for not forcing me to `npm` anything. I appreciate it. 

Next, I added a `canvas` to my HTML. Because I'm lazy, I used the same ID as their docs, but this can be changed of course.

```html
<canvas id="myChart"></canvas>
```

Next, I added a new method to my code, `renderChart`, to handle the process. Here's that code.

```js
renderChart() {
	const ctx = document.getElementById('myChart');

	let names = this.cities.map(c => c.label);
	
	let highestTemps = this.cities.map(c => {
		return c.forecast.reduce((highest,f) => {
			if(f.temperature > highest) return f.temperature;
			return highest;
		},0);
	});

	let lowestTemps = this.cities.map(c => {
		return c.forecast.reduce((lowest,f) => {
			if(f.temperature < lowest) return f.temperature;
			return lowest;
		},999);
	});
	
	new Chart(ctx, {
		type: 'line',
		data: {
			labels: names,
			datasets: [
				{
					label: 'Highest Temp',
					data: highestTemps,
					borderWidth: 1
				},
				{
					label: 'Lowest Temp',
					data: lowestTemps,
					borderWidth: 1
				}						
			]
		},
		options: {
			scales: {
				y: {
					min: -20,
					max: 120
				}
			}
		}
	});
	
}
```

Let's examine this. The very first line simply gets a reference to the `canvas` tag where Chart.js will do its work. The next few lines of code are all me "prepping" my data for the chart. First I get a list of cities. Then I get both the highest and lowest temps for each city with the crafty use of both `map` and `reduce`. I am a JavaScript master and I will absolutely pass the next arbitrary coding challenge I get for a job interview. Honest. 

The net result of the above three blocks of code is three arrays. Each of these can then be passed to my chart declaration. You'll see `names` passed in for the labels and then my two datasets. This is all pretty much boilerplate demo code from Chart.js, the only thing I did custom was to specify a scale for my Y-axis. My range there isn't perfect, I know some places were below negative twenty recently, but it works for now. 

You can demo this version here:

<p class="codepen" data-height="500" data-theme-id="dark" data-default-tab="result" data-slug-hash="eYLEvEO" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/eYLEvEO">
  Alpine + ChartJS (Chart)</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

## Some Quick Notes

Ok, all of the following does not actually apply to the main point of this post, but I had some thoughts about what I built and wanted to share them.

First, I'm still relatively new to Alpine and still trying to figure out the "best" (for me) way to work with it. I like that Alpine is flexible in its definition and lets you specify methods and data all at once. That being said - I'm not sure I'm happy with how I organized my code. I think my feeling is that I should use the following rules:

* Put the init() method on top.
* Put any and all simple variable declarations next.
* Put methods after. 

Second, you may or may not notice I added a simple cache to the forecast function in the second CodePen. I did this to ensure I didn't kill my access to the API as CodePen tends to rerun stuff quite a bit. (I need to disable that I think. I just did. Will remember for next time. Honest.)

