---
layout: post
title: "How to Migrate from Lunr to Algolia - a Technical Guide"
date: "2022-08-09T18:00:00"
categories: ["Jamstack"]
tags: []
banner_image: /images/banners/search.jpg
permalink: /2022/08/09/how-to-migrate-from-lunr-to-algolia-a-technical-guide
description: A guide to migrating search support from Lunr to Algolia
---

Search is an incredibly important aspect of any site hosting even a small amount of
content. How quickly your site can provide search results and how well your results
match the user's intent is critical. There are multiple search options available for
developers, and so sometimes in the pursuit of speed and relevance, a site will migrate
from one service to another. In this article, I'm going to present a use case for why a site
may move from a self-hosted solution like [Lunr](https://lunrjs.com) to a server-based solution like [Algolia](https://www.algolia.com). I want to stress that this is not meant to be an attack on Lunr, but more where it would be
appropriate for a site and what the benefits were of moving to Algolia in my particular
use case.

## How Lunr Works 

Lunr is an open source JavaScript-based solution for search services. With Lunr, developers
start by creating an index of the content they want to be able to search through. This
need not be a one-to-one copy of site content, but instead can be tailored to focus what
will be most useful for search. This data can come from anywhere, but must be provided
to Lunr as an array of objects. Let's consider a fun hypothetical dataset: cats available
for adoption. Their data may look like this:

```json 
[
	{
		"name":"Fluffy",
		"gender":"female",
		"breed":"smelly",
		"dob":"7/18/2022",
		"history":"info about the cat...."
	},
	{
		"name":"Muffy",
		"gender":"female",
		"breed":"not so smelly",
		"dob":"2/18/2022",
		"history":"info about the cat...."
	}
]
```

Looking at this data, we can make the executive decision now that we'll let our users
search by name, gender, breed, and history, but not by birth date. With the Lunr library
loaded, code to generate that index would look something like this:

```js
let catReq = await fetch('./cats.json');
let cats = await catReq.json();
let index = lunr(function() {
	this.ref('name');
	this.field('gender');
	this.field('breed');
	this.field('history');
	cats.forEach(function(c) {
		this.add(c);
	});
});
```

With the index created, search then becomes one line:

```js 
let results = index.search('something')
```

## Where Lunr Might Not Work Well

Lunr is simple to use, but there are a few areas of concern. Here's a few things to keep
in mind that may make a migration more desirable.

* First, as your data grows, so will your index. Lunr needs time to create the index
and that time grows with the size of the content being indexed. Lunr does support
[pre-building](https://lunrjs.com/guides/index_prebuilding.html) the index, but that pre-built index must still be served up to the user.

* Another issue is that Lunr results contain just a reference to the original data. So for
example, in the cats data above, we defined the reference as the name of the cat.
In order to return a meaningful result to the user, we still need to use that reference
to go fetch the full data on the cat from our data storage.

* It is entirely possible to use Lunr on the server, but that then requires setting up the
server, or serverless functions. All absolutely possible, but more work on the
developers side.

* Lunr has a lot of incredible features like [stemming](https://lunrjs.com/guides/core_concepts.html#stemming), but there are still a few absent must-haves, like typo handling and synonym matching. Another example: how can
we get Lunr to factor the user’s location into result relevance scores?

* Finally, and this is the big one: we need to roll our own analytics. Again, it’s certainly
doable, but this will require more code, more data storage, and more maintenance.
These stats can be incredibly important because they reflect what your users need
and what they're having trouble finding.

## Migrating to Algolia 

So let's now assume that you've identified you need to migrate from Lunr. What does moving to Algolia look like?

First off, we need to calculate what your cost will be, if any. Algolia's [pricing](https://www.algolia.com/pricing/) page goes
into detail about with, basing an estimate on a combination of your index size and
search count. Currently, the free tier offers up to 10,000 search requests per month,
10,000 search recommendations per month, and 10,000 documents in the index at any
given time.

If you’re good with the price, the next step is [signing up](https://www.algolia.com/users/sign_up) and creating your account. After confirming your email address, you will be dropped into the Algolia dashboard.

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/a1.jpg" alt="Initial Algolia dashboard" class="lazyload imgborder imgcenter">
</p>

The first page directs you to create an index, a necessary part of building a search
interface. Your account can have as many different indexes you need — it's absolutely
possible one site may need multiple, depending on the size and complexity. As developers,
usually naming things is one of the harder parts of our job, but feel free to just use the
name of your web site. For my example, I used "cats".

After naming the index, you are prompted to add your data — you don't need to do this
immediately, but it’s definitely helpful while you get set up. This is where we run into an
important distinction if you’re coming from Lunr: with client-side solutions, you generate
an index every time search is used, or at build-time for pre-built indexes. With Algolia's
service-based approach, an index is like an empty database. You create the index as an
empty bucket and then can add, edit, and delete data within it. As an example, if you
add 100 documents to your index right now in Algolia, then that index is already seeded
and ready to search without a time-consuming build on the client. You’ll only need to
update the index to reflect changes in your dataset, but never to reload data that you’ve
already given to Algolia. Initially, Algolia will offer a few options as far as seeding goes:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/a2.jpg" alt="Import options" class="lazyload imgborder imgcenter">
</p>

At this point, how you seed the index is entirely up to you and how your data is stored.
I’m a Jamstack developer, so I’ll generate a JSON file of the searchable adoptable cats,
run a build of my site, and copy that JSON by hand.

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/a3.jpg" alt="Seeding data" class="lazyload imgborder imgcenter">
</p>

After uploading, I'm dropped into an interface that lets me see my index, and best of all,
immediately start testing search.

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/a4.jpg" alt="Test search interface" class="lazyload imgborder imgcenter">
</p>

At this point, you have a persisted index. It's done and ready for search. If you're using
an application server, like Node or PHP, your data may be in something like MySQL or
MongoDB, in which case you could write a custom query to generate the data you want
and feed it to the index through the Algolia API. There’s probably an SDK for the
backend language you’re using:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/a5.jpg" alt="SDK list" class="lazyload imgborder imgcenter">
</p>

All of that is backed by a REST API, so if you don’t like those options, you can just ping
the right endpoint yourself.

Let's consider the real example of my own blog. As with a Lunr or other client-side
approach, I do generate a JSON file of blog post titles, publishing dates, content, related
categories, and appropriate tags. As part of my build process, I update recent content
only (as that's the only content that's changed). First, I import the Node SDK and
initialize an index object:

```js 
const algCredentials = { appId: process.env.ALG_APP_ID, apiKey: process.env.ALG_API_KEY, indexName: 'raymondcamden' };

const algoliaSearch = require('algoliasearch');
const algolia = algoliaSearch(algCredentials.appId, algCredentials.apiKey);
const index = algolia.initIndex(algCredentials.indexName);
```

I then get a JSON copy of my recent content:

```js 
let dataResp = await fetch('https://www.raymondcamden.com/algolia_new.json');

let data = await dataResp.json();
```

And then I create a batch request to update the index:

```js 
let requests = [];

// If you use my code for a new blog, your index may not have 3 items!
for (let i=0; i<3; i++) {
	/* define an objectID for Algolia */
	let d = data[i];
	d.objectID = d.url;
	requests.push({
		'action': 'updateObject',
		'body': d
	})
};

console.log('Batch data object created to add to Algolia index');

let batchResult = await index.batch(requests);
```

I don't have to worry about re-indexing existing content because the `updateObject` action
handles merging new content into existing content through unique `objectID` values on every
record. Algolia's index persists permanently, so I don’t have to worry about anything but
what has explicitly changed since the last time I updated the index. My site has over
6,000 blog posts, so that’s a big deal to me. It's definitely fair to say that Algolia requires
a bit more work on my part, but this scalability make it more than worth it.

## Adding Search 

With Lunr, setting up search is a 100% manual process. We need to get user input
ourselves, call the library ourselves, use the returned refs to fetch our results from the
database ourselves, and rendering all of that ourselves. Algolia gives you this option if
you need the customizability: the same [JavaScript client](https://www.algolia.com/doc/api-client/getting-started/install/javascript/?client=javascript) used on the server-side can also be used on the client-side to
do this manually. The code might look something like this:

```js 
let client = algoliasearch('WFABFE7Z9Q', 'd1c88c3f98648a69f11cdd9d5a87de08');
let index = this.client.initIndex('raymondcamden');

// later, to actually search:
let resultsRaw = await this.index.search(search, {
	attributesToRetrieve:['title', 'url', 'date'],
	attributesToSnippet:['content'],
	hitsPerPage: 50,
	clickAnalytics:true
});
```

Notice that Algolia lets you filter what's returned. This is great because it lets you index
a large block of text and search it, like the body of a blog post, but only care about the
title, url, and date when working with the results. I can even specify that the blog content
be returned, but only the relevant snippet.

[On my site](https://www.raymondcamden.com/search/), this data is then rendered on the DOM:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/a6.jpg" alt="Site search example" class="lazyload imgborder imgcenter">
</p>

This manual approach gave me complete control over the search experience, but
Algolia goes the extra mile and gives us an out-of-the-box solution called
[InstantSearch.js](https://www.algolia.com/doc/guides/building-search-ui/what-is-instantsearch/js/). This lets you create a search interface via widgets where all the heavy lifting is done for you. Libraries and components are available for multiple different frontend frameworks and mobile platforms:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/a7.jpg" alt="InstaSearch clients" class="lazyload imgborder imgcenter">
</p>

This library greatly simplifies the search process on the front-end [while still giving you
as much control as you need](https://blog.jaden.baptista.dev/adding-document-search-to-my-portfolio-site).

## Getting Insights

After migrating to Algolia, one of the biggest benefits will be the ability to see and act on
your search statistics. In the dashboard, you’ll see cold, hard data on how many
searches have been performed, how many people are searching, and what they’re
doing after the query.

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/a8.jpg" alt="Analytics screen" class="lazyload imgborder imgcenter">
</p>

This overview also reports on the most common searches, the most common results,
and critically, searches that didn’t return anything:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/a9.jpg" alt="Search stats" class="lazyload imgborder imgcenter">
</p>

You can also enable (via the settings) a weekly email that summarizes your site's recent
search history. It includes the basic stats around usage, along with the details on
searches and those without results.

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/a10.jpg" alt="Example email search stats" class="lazyload imgborder imgcenter">
</p>

## Going Further

In this article, I focused mostly on the migration from Lunr to Algolia, but we didn't really
touch on what can be done beyond that migration. Algolia puts powerful, AI-driven
search features at our fingertips — things we never had in Lunr — all of which can be
configured via the dashboard for easier use across the organization. As with any
engineering decision, developers have to weigh features versus implementation time
and cost, but it was absolutely worth it for me. Perhaps you should [give it a shot](https://www.algolia.com/users/sign_up) today
to test if the migration will be worth your while?