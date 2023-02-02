---
layout: post
title: "My town sure seems to have a lot of..."
date: "2023-02-02T18:00:00"
categories: ["JavaScript"]
tags: ["javascript"]
banner_image: /images/banners/map.jpg
permalink: /2023/02/02/my-town-sure-seems-to-have-a-lot-of
description: Using Google Maps APIs to count the number of a type of business in your area.
---

Ok, so I realize this will make me sound old (spoiler, I *am* old), but I swear I feel like my town (Lafayette, LA) has about ten thousand or so storage businesses. And banks. Oh, and hotels too. For a while now I thought it would be interesting to see if I could build a tool that would actually do that - count the number of a type of business. This week I took a stab at it and while the results aren't perfect, it was fun, and that's all that matters, right?

For my demo, I decided to use Google Map's [Places API](https://developers.google.com/maps/documentation/places/web-service/overview), or more accurately, that part of the JavaScript library. (Google's Maps APIs don't support CORS so if I wanted to do a direct call I'd need to setup a serverless proxy. Overkill for a dumb little demo.) 

The Places API supports a few different ways of searching, and for my first attempt I tried the [Text Search](https://developers.google.com/maps/documentation/places/web-service/search-text) version. This supports free form queries including things like, "banks lafayette, la", and I thought it would be a good way to start. I began with some simple HTML, asking for a type of business and a location:

```html
<p>
<label for="business">Enter a business type:</label>
	<input type="text" id="business" placeholder="car wash,storage place,etc">
</p>
<p>
<label for="location">Enter a location:</label>
	<input type="text" id="location" placeholder="lafayette,la or washington,dc">
</p>

<button id="searchBtn">So just how many are there?</button>

<div id="results"></div>

<div id="map"></div>
```

I've got two form fields, a button, and then a div for the results. You'll notice I also have a div for a map. I'm not using a map, but the Google Maps JavaScript library requires a div for a map. Even if you don't show it. Seems a bit weird, but what's one more `div` between friends, right?

Now let's consider the code. First off, the Google Maps JavaScript library is *usually* loaded via a `script` tag where the url includes your key, the libraries you need, and the name of a callback function. I was building on CodePen and that didn't quite work well. Instead, I simply appended a script tag to the end of my DOM using this:

```js
// Load Google Maps _after_ initMap setup
var script = document.createElement('script');
script.src = 'https://maps.googleapis.com/maps/api/js?key=AIzaSyCA0y7kh6V8poL-faDyVf3TpnLDNf9XtQY&libraries=places&callback=initMap';
script.async = true;

// Append the 'script' element to 'head'
document.head.appendChild(script);
```

I could have made that a nice function but I just dropped it at the end of my code. Now let's look at the function called by the library:

```js
function initMap() {
	console.log('initMap called');
	let pyrmont = new google.maps.LatLng(-33.8665433,151.1956316);
    map = new google.maps.Map(document.getElementById('map'), {
  		center: pyrmont, zoom: 15 
	});

	service = new google.maps.places.PlacesService(map);
	$business = document.querySelector('#business');
	$location = document.querySelector('#location');
	$results = document.querySelector('#results');
	$searchBtn = document.querySelector('#searchBtn');
	
	$searchBtn.addEventListener('click', doSearch);
}
```

As I mentioned above, you must have a map div even if you don't plan on showing it. I created a Map object based on sample code from their docs and I've got zero clue where that latitude and longitude is. In the end, it doesn't matter as it won't be used. The rest of the code creates my `service` object and assigns some DOM elements to variables for use later. 

When the search button is clicked, `doSearch` is run:

```js
function doSearch() {
	console.log('doSearch');
	$results.innerHTML = '';
	let biz = $business.value.trim();
	let loc = $location.value.trim();
	if(biz === '' || loc === '') return;
	total = [];
	$results.innerHTML = '<p><i>Currently searching...</i></p>';
	service.textSearch({ query: `${biz} ${loc}` }, handleResults);
}
```

I grab the values, do a bit of simple validation (the user has to enter *something*), and then call the text search API via the service object I created. Note how `query` is crafted from the user input. 

Now for the fun part, handling the results. Google's library supports pagination, and actually makes it quite easy to use. I defined `total` as an empty array in `doSearch` and it's global to the page. Here's how I use it:

```js
function handleResults(r, status, pagination) {
	console.log('results', r);	
	console.log('pagination.hasNextPage', pagination.hasNextPage);
	
	let open = r.filter(b => {
		return b.business_status === 'OPERATIONAL';
	});
	
	total = total.concat(open);
	
	if(pagination && pagination.hasNextPage) pagination.nextPage();
	else {
		console.log('total total is ', total.length);
		let finalResult = `<p>I found a total of ${total.length} results. Remember the max is 60.</p><p>`;
		total.forEach(t => {
			finalResult += `${t.name}, ${t.formatted_address}<br/>`;
		});
		$results.innerHTML = finalResult;
	}
}
```

As I said, the service handles pagination well. When I call `nextPage()`, it automatically knows to run `handleResults` again. So all I need to do is keep adding to the `total` array (but only after filtering out closed businesses) and when done, render out to HTML. 

As you can see in the text, there's a max of 60, which is unfortunate, because even in our mid-sized town, there's a crap ton of results for some of my searches. Still though it was kind of fun. For our town, searching for `church` returns the max, searching for `bar` returns 56. But I think it would have been 60 too if I didn't have the filter for closed businesses. Test it out yourself here:

<p class="codepen" data-height="500" data-theme-id="dark" data-default-tab="result" data-slug-hash="BaPGOoe" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/BaPGOoe">
  Testing Places API (2)</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

So that was round one. Let's make it simpler. The Google Places API also supports a [Nearby Search](https://developers.google.com/maps/documentation/places/web-service/search-nearby) operation. This lets you pass in a location and a business type, where the types are a nice [long list](https://developers.google.com/maps/documentation/places/web-service/supported_types) of, well just about everything. In my second version, I switched my HTML to a drop down:

```html
<p>
<label for="business">Select a business type:</label>
<select id="businessType"></select>
</p>
```

Which is populated via JavaScript:

```js
const TYPES = [ 'accounting', 'airport', 'amusement_park', 'aquarium', 'art_gallery', 'atm', 'bakery', 'bank', 'bar', 'beauty_salon', 'bicycle_store', 'book_store', 'bowling_alley', 'bus_station', 'cafe', 'campground', 'car_dealer', 'car_rental', 'car_repair', 'car_wash', 'casino', 'cemetery', 'church', 'city_hall', 'clothing_store', 'convenience_store', 'courthouse', 'dentist', 'department_store', 'doctor', 'drugstore', 'electrician', 'electronics_store', 'embassy', 'fire_station', 'florist', 'funeral_home', 'furniture_store', 'gas_station', 'gym', 'hair_care', 'hardware_store', 'hindu_temple', 'home_goods_store', 'hospital', 'insurance_agency', 'jewelry_store', 'laundry', 'lawyer', 'library', 'light_rail_station', 'liquor_store', 'local_government_office', 'locksmith', 'lodging', 'meal_delivery', 'meal_takeaway', 'mosque', 'movie_rental', 'movie_theater', 'moving_company', 'museum', 'night_club', 'painter', 'park', 'parking', 'pet_store', 'pharmacy', 'physiotherapist', 'plumber', 'police', 'post_office', 'primary_school', 'real_estate_agency', 'restaurant', 'roofing_contractor', 'rv_park', 'school', 'secondary_school', 'shoe_store', 'shopping_mall', 'spa', 'stadium', 'storage', 'store', 'subway_station', 'supermarket', 'synagogue', 'taxi_stand', 'tourist_attraction', 'train_station', 'transit_station', 'travel_agency', 'university', 'veterinary_care', 'zoo' ];

// later in the code...
$businessType = document.querySelector('#businessType');
let optionsString = TYPES.reduce((s, t) => {
	return s + `<option>${t}</option>`;
}, '');
$businessType.innerHTML = optionsString;
```

I just want to go on record as saying I've now used `reduce` twice this week and I'm definitely now a leet coder. Or lute coder? Whatever. 

I then removed the address and simply got your location via geolocation:

```js
let location = await getLocation();

// later in the code...
async function getLocation() {
    return new Promise((resolve, reject) => {
        navigator.geolocation.getCurrentPosition(pos => {
            resolve(pos.coords);
        }, e => {
            reject(e);
        }, { enableHighAccuracy: true});
    });
}
```

I *love* using `async/await` to "patch" over old APIs like geolocation and make them a bit nicer to use. The final change was to switch to the Nearby API:

```js
service.nearbySearch({ 
	location: mylocation, 
	radius: 1609,
	type: [biz]
}, handleResults);
```

The radius value is in meters and 1609 is roughly equal to a mile. Here's a screen shot of in action:

<p>
<img data-src="https://static.raymondcamden.com/images/2023/02/maps1.jpp" alt="Results of demo showing 3 results" class="lazyload imgborder imgcenter">
</p>

I'm sharing a picture and not embedding CodePen because geolocation is blocked when embedding the CodePen. I checked, and as far as I know there's no workaround, so for now, you'll need to click a link, sorry about that: <https://codepen.io/cfjedimaster/pen/MWBZJWZ>

Let me know what you think. Keep in mind, the results are based on the data Google has, and it's not always going to be accurate. I know I saw things in my test that were incorrect. 
