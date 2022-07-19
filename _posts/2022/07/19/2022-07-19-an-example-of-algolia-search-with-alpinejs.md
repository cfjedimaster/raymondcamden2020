---
layout: post
title: "An example of Algolia Search with Alpine.js"
date: "2022-07-19T18:00:00"
categories: ["JavaScript"]
tags: ["alpinejs"]
banner_image: /images/banners/search.jpg
permalink: /2022/07/19/an-example-of-algolia-search-with-alpinejs
description: A quick example of using Algolia Search with Alpine.js
---

As my readers know, I've been falling in love with [Alpine.js](https://alpinejs.dev/) lately and am always on the hunt for more ways to practice using the framework. I thought I'd share an example of how you could use it with Algolia's [JavaScript client](https://www.algolia.com/doc/api-client/getting-started/install/javascript/?client=javascript). I use that on my [search page](/search) here with Vue.js, so it wasn't a terribly difficult thing to rebuild a similar interface in Alpine.js. Here's how I did it.

## The Layout 

For the layout, I went with a simple search interface and results that displayed the title, date, and a snippet for each result. Here's that HTML with Alpine.js directives throughout:

```html
<div x-data="app" x-cloak>
    <input type="search" x-model="term">
    <button @click="search" :disabled="!searchReady">Search</button>
    <div x-show="noResults">
        <p>
            Sorry, but there were no results.
        </p>
    </div>
    <div x-show="results">
        <h2>Results</h2>
        <p>
            There were <span x-text="totalHits"></span> total matches. Returning the first <span x-text="resultsPerPage"></span> results:
        </p>
        <template x-for="result in results">
            <div>
                <p>
                <a :href="result.url"><span x-text="result.title"></span></a> (posted <span x-text="result.date"></span>)
                </p>
                <p class="snippet" x-html="result.snippet"></p>
            </div>
        </template>
    </div>
</div>
```

From the top, the first two elements are my search field, using `x-model`, and a button that will initiate the search. I've got it disabled based on a value `searchReady` that you will see soon.

The next block handles cases where no results were found.

And then I have a block that shows up when results are ready. I render the total number of hits as well as how many I'm showing. (I could do paging here, and if folks want to see that, just ask.) I then loop over my results making use of the url, title, date, and snippet values. 

## The JavaScript

Now let's look at the JavaScript code:

```js
const appId = 'WFABFE7Z9Q';
const apiKey = 'd1c88c3f98648a69f11cdd9d5a87de08';
const indexName = 'raymondcamden';

document.addEventListener('alpine:init', () => {
  Alpine.data('app', () => ({
        init() {
            let client = algoliasearch(appId, apiKey);
            this.index = client.initIndex(indexName);
            this.searchReady = true;
        },
        index:null,
        term:'',
        searchReady:false,
        noResults:false,
        results:null,
        totalHits:null,
        resultsPerPage:null,
        async search() {
            if(this.term === '') return;
            this.noResults = false;
            console.log(`search for ${this.term}`);
            
//          let rawResults = await this.index.search(this.term);
            let rawResults = await this.index.search(this.term, { 
                attributesToSnippet: ['content']
            });         

            if(rawResults.nbHits === 0) {
                this.noResults = true;
                return;
            }
            this.totalHits = rawResults.nbHits;
            this.resultsPerPage = rawResults.hitsPerPage;
            this.results = rawResults.hits.map(h => {
                h.snippet = h._snippetResult.content.value;
                h.date = new Intl.DateTimeFormat('en-us').format(new Date(h.date));
                return h;
            });
        }
  }))
});
```

On top, I've got three constants related to Algolia. An application ID, my API token which only has read access, and the name of my index. When Alpine initializes the application, I create an instance of the Algolia index wrapper, and then set my `searchReady` boolean to true. This will enable that button in HTML. 

For search, I do a quick validation of the value, and then just pass it to Algolia. The commented-out line shows how simple this can be if you want the defaults, but I wanted Algolia to create a snippet on the content field so the search results would be a bit nicer. 

Finally, I do a bit of work on the results. If none were found, I set the value so that it will get flagged in the HTML. If we have results, I copy over the total hits and per page values. I then map the results to make things a bit easier in the HTML. Specifically, I copy over the snippet to an easier-to-use key, and then I use the `Intl` object to make the dates a bit nicer. 

Here's an example of how it looks, and please note that it's me doing my best at design. Don't blame Alpine or Algolia. ;)

<p>
<img data-src="https://static.raymondcamden.com/images/2022/07/alg1.jpg" alt="Example search result" class="lazyload imgborder imgcenter">
</p>

If you want to give this a try yourself, play with the CodePen below, and as always, let me know if you've got any questions!

<p class="codepen" data-height="500" data-default-tab="html,result" data-slug-hash="ExEWKgN" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/ExEWKgN">
  Algolia + Alpine example</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>
