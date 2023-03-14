---
layout: post
title: "Progressively Enhancing a Table with a Web Component"
date: "2023-03-14T18:00:00"
categories: ["development"]
tags: ["javascript","web components"]
banner_image: /images/banners/hannes-egler-369155.jpg
permalink: /2023/03/14/progressively-enhancing-a-table-with-a-web-component
description: Building a web component wrapper to add table sorting.
---

Back nearly a year ago (holy smokes time goes fast), one of my first articles about web components involved building a component to create a paginated/sorted table: [Building Table Sorting and Pagination in a Web Component](https://www.raymondcamden.com/2022/05/23/building-table-sorting-and-pagination-in-a-web-component). In that example, the component looked like so in your HTML:

```html
<data-table src="https://www.raymondcamden.com/.netlify/functions/get-cats" cols="name,age"></data-table>
```

I thought this was cool, but one big issue with it is that if JavaScript is disabled, or if something else goes wrong with the code, then absolutely nothing is rendered to the page. This got me thinking - what if I could build a web component that enhanced a regular HTML table? Here's what I came up with.

First, I set up a table of simple data:

```html
<table>
	<thead>
		<tr>
			<th>Name</th>
			<th>Breed</th>
			<th>Gender</th>
			<th>Age</th>
	</thead>
	<tbody>
		<tr>
			<td>Luna</td>
			<td>Domestic Shorthair</td>
			<td>Female</td>
			<td>11</td>
		</tr>
		<tr>
			<td>Elise</td>
			<td>Domestic Longhair</td>
			<td>Female</td>
			<td>12</td>
		</tr>
		<tr>
			<td>Pig</td>
			<td>Domestic Shorthair</td>
			<td>Female</td>
			<td>8</td>
		</tr>
		<tr>
			<td>Crackers</td>
			<td>Maine Coon</td>
			<td>Male</td>
			<td>5</td>
		</tr>
		<tr>
			<td>Zuma</td>
			<td>Ragdoll</td>
			<td>Male</td>
			<td>8</td>
		</tr>
		<tr>
			<td>Lord Fluffybottom, the Third</td>
			<td>Domestic Longhair</td>
			<td>Male</td>
			<td>8</td>
		</tr>
		<tr>
			<td>Zelda</td>
			<td>Domestic Shorthair</td>
			<td>Female</td>
			<td>7</td>
		</tr>	
		<tr>
			<td>Apollo</td>
			<td>Persian</td>
			<td>Male</td>
			<td>3</td>
		</tr>	
	</tbody>

</table>
```

Note that I make use of both `thead` and `tbody`. I'm going to require this for my component to work, but outside of that, there's nothing special here, just a vanilla table. Now let's look at my component. First, I'll name it `table-sort`:

```js
class TableSort extends HTMLElement {
	
	// stuff here..

}

if(!customElements.get('table-sort')) customElements.define('table-sort', TableSort);
```

In my constructor, I'm just going to set up a few values. One will hold a copy of the table data, one will remember the last column sorted, and one will be a boolean that indicates if we're sorting ascending or descending:

```js
constructor() {
	super();
	this.data = [];
	this.lastSort = null;
	this.sortAsc = true;
}
```

Alright, now for some real work. In my `connectedCallback`, I'm going to do a few things. First, I'll do a sanity check for a `table`, `thead` and `tbody` inside myself:


```js
connectedCallback() {
	let table = this.querySelector('table');

	// no table? end!
	if(!table) {
		console.warn('table-sort: No table found. Exiting.');
		return;
	}
	
	// require tbody and thead
	let tbody = table.querySelector('tbody');
	let thead = table.querySelector('thead');
	if(!tbody || !thead) {
		console.warn('table-sort: No tbody or thead found. Exiting.');
		return;			
	}
```

Next, I look at the body of the table and get a copy of the data:

```js
	let rows = tbody.querySelectorAll('tr');
	rows.forEach(r => {
		let datum = [];
		let row = r.querySelectorAll('td');
		row.forEach((r,i) => {
			datum[i] = r.innerText;
		});
		this.data.push(datum);
	});
```

For the next portion, I look at the head. For each column, I want to do two things. First, set a CSS style to make it more obvious you can click on the header. Then I add an event handler for sorting:

```js
	// Get our headers
	let headers = thead.querySelectorAll('th');
	headers.forEach((h,i) => {
		h.style.cursor = 'pointer';
		h.addEventListener('click', e => {
				this.sortCol(e,i);
		});
	});
```

Finally, I copy over a reference to the body. This will be helpful later when I render the table on sort:

```js
	// copy body to this scope so we can use it again later
	this.tbody = tbody;

}
```

Alright. At this point, the component is set up. Now let's look at the sorting event handler:

```js
sortCol(e,i) {
	let sortToggle = 1;
	if(this.lastSort === i) {
		this.sortAsc = !this.sortAsc;
		if(!this.sortDir) sortToggle = -1;
	}

	this.lastSort = i;
	
	this.data.sort((a,b) => {
		if(a[i] < b[i]) return -1 * sortToggle;
		if(a[i] > b[i]) return 1 * sortToggle;
		return 0;
	});
	
	this.renderTable();
}
```

The event is passed a numeric index for a column which makes sorting our data simpler. The only really fancy part here is how I remember what I sorted last time, which lets me reverse the sort if you click two or more times on the same column. If you are noticing a potential issue here, good, you are absolutely right and I'll show the issue in a sec. 

Alright, the final part of the code is rendering the table:

```js
renderTable() {
	let newHTML = '';
	for(let i=0;i<this.data.length;i++) {
		let row = '<tr>';
		for(let c in this.data[i]) {
			row += `<td>${this.data[i][c]}</td>`;
		}
		row += '</tr>';
		newHTML += row;
	}
	this.tbody.innerHTML = newHTML;
}
```

This is pretty boilerplate. It does have one issue - if the original table cells had other stuff, for example, inline styles, or data attributes, then that is lost. I could have made a copy of the DOM node itself and sorted them around, but for this simple component, I thought it was ok. 

Whew! The final thing to do is to wrap my table:

```html
<table-sort>
<table>
	<thead>
		<tr>
			<th>Name</th>
			<th>Breed</th>
			<th>Gender</th>
			<th>Age</th>
	</thead>
	<tbody>
		<tr>
			<td>Luna</td>
			<td>Domestic Shorthair</td>
			<td>Female</td>
			<td>11</td>
		</tr>
		<!-- more rows --->
	</tbody>

</table>
</table-sort>
```

Now let's test it out in the CodePen below:

<p class="codepen" data-height="500" data-theme-id="dark" data-default-tab="result" data-slug-hash="gOdvJxW" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/gOdvJxW">
  PE Table for Sorting</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

Hopefully, it worked fine for you. Of course, if it failed for some reason, you still saw a table right? But maybe you tried sorting on age and saw this:

<p>
<img data-src="https://static.raymondcamden.com/images/2023/03/pet1.jpg" alt="Table sorted incorrectly for age" class="lazyload imgborder imgcenter">
</p>

Oops. The age column, which is a number, is sorted as a string. So how do we fix that? Remember that my goal was to have you not touch your original table at all. I initially thought I'd maybe have you add a `data-` attribute to the table, but that didn't feel right. Instead, I came up with another solution - an attribute to the web component:

```html
<table-sort numeric="4">
```

In this case, I'm specifying that the fourth column is numeric. Here's how I supported this in code. In `connectedCallback`, I look for the attribute:

```js
let numericColumns = [];

if(this.hasAttribute('numeric')) {
	numericColumns = this.getAttribute('numeric').split(',').map(x => parseInt(x-1,10));
}
```

Since the value in the HTML is 1-based, I take your input (which can be comma-delimited), split it, convert each value to a real number and subtract one. The end result with my sample input is an array with one value, 3. 

The final bit is to check for this when I create a copy of the data:

```js
let rows = tbody.querySelectorAll('tr');
rows.forEach(r => {
	let datum = [];
	let row = r.querySelectorAll('td');
	row.forEach((r,i) => {
		if(numericColumns.indexOf(i) >= 0) datum[i] = parseInt(r.innerText,10);
		else datum[i] = r.innerText;
	});
	this.data.push(datum);
});
```

And that's it. You can test that version below:

<p class="codepen" data-height="500" data-theme-id="dark" data-default-tab="result" data-slug-hash="OJovJee" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/OJovJee">
  PE Table for Sorting (2)</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>
