---
layout: post
title: "Investigating IndexedDB Wrapper Libraries - Part One"
date: "2022-08-17T18:00:00"
categories: ["development"]
tags: ["javascript"]
banner_image: /images/banners/storage_ij.jpg
permalink: /2022/08/17/investigating-indexeddb-wrapper-libraries-part-one
description: Looking into easier ways to work with IndexedDB for client-side storage.
---

Many years ago, in fact during my first stint at Adobe, I got pretty deep into client-side storage mechanisms for the web. At the time, "HTML5" was the buzzword and a lot of people were talking about improved capabilities for the web, but it seemed to me that a lot of the talk was focused around more visual components like Canvas. For me, I got more excited about things like new form fields and storage. I spent a lot of time digging into various ways of storing data, I even [wrote a book](https://www.amazon.com/gp/product/1491935111/ref=as_li_tl?ie=UTF8&tag=raymondcamd06-20&camp=1789&creative=9325&linkCode=as2&creativeASIN=1491935111&linkId=239944c4f3cbf1e35ce47f4eb857b2a7) on the topic. But after spending a lot of time digging into it I moved on to other topics. 

Now - many years later - it's on my mind again, specifically IndexedDB. When I first got deep into the topic, I focused on using it as is, just the raw API, and didn't really dig into helper libraries. I thought it would be a good time to look into some of the options out there and see which fit best for my development. IndexedDB isn't necessarily hard to use, but it's a bit complex and requires a bit of planning. When compared to LocalStage it's *much* more difficult, but still absolutely usable with some practice. However it can certainly be simpler with a nice utility library. 

As I've already covered *how* to use IndexedDB here in the past I won't go into it again, but I'll use this opportunity to link to the *best* resource for learning anything web related, the mdn web doc. Their [IndexedDB](https://developer.mozilla.org/en-US/docs/Web/API/IndexedDB_API) docs are great and go deep into the concepts and APIs. 

For this first blog post, I'm going to demonstrate a simple application that uses IndexedDB without any helper libraries at all. It's a simple "Contacts" application (see my [earlier post](https://www.raymondcamden.com/2022/08/11/building-a-web-based-badge-scanner) for something similar) that stores a list of people, including a first name, last name, and email property. The interface lists contacts and provides a form to the right. The form on the right can be used for creating new contacts or editing existing ones.

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/idb1.jpg" alt="Screenshot from demo application." class="lazyload imgborder imgcenter">
</p>

I'll share the complete code for the application at the end, and I'm going to skip talking about DOM methods and the such. Instead, let's focus on the IndexedDB portions. 

## Initialize the Database

Any use of IndexedDB requires opening a connection to a database and handling initial object store creation. To further complicate matters, IndexedDB supports versioning and you're only allowed to make changes to a database on a version changing. I handle all of this in one function:

```js
async function initDb() {
	return new Promise((resolve, reject) => {
		
		let request = indexedDB.open('contacts', 1);

		request.onerror = event => {
			alert('Error Event, check console');
			console.error(event);
		}
		
		request.onupgradeneeded = event => {
			console.log('idb onupgradeneeded firing');

			let db = event.target.result;

			let objectStore = db.createObjectStore('contacts', { keyPath: 'id', autoIncrement:true });
			objectStore.createIndex('lastname', 'lastname', { unique: false });
		};
		
		request.onsuccess = event => {
			resolve(event.target.result);
		};
	});
}
```

You'll notice I'm returning a promise so I can use it easier. I open the database, listen for an `onupgradeneeded` event, which will fire the first time the user hits the page, and set up the object store. For my contacts, I want an auto incrementing key named `id`. Not *too* bad, but outside of this function I can just do:

```js
db = await initDb();
```

I love async/await like I love a good cookie. 

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/idb2.jpg" alt="Cookie monster picture for no particular good reason" class="lazyload imgborder imgcenter">
</p>

Now let's look at the various CRUD (Create/Read/Update/Delete) functions.

## Get All Conctacts

Getting all my contacts so I can render them in a table isn't too difficult since there's a `getAll()` API for IndexedDB.

```js
async function getContacts() {
	return new Promise((resolve, reject) => {
		let transaction = db.transaction(['contacts'], 'readonly');
		
		transaction.onerror = event => {
			reject(event);
		};
		
		let store = transaction.objectStore('contacts');
		store.getAll().onsuccess = event => {
			resolve(event.target.result);
		};
	
	});
}
```

Back in the calling code I can just do: 

```js
let contacts = await getContacts();
```

The result is simple JavaScript objects in an array, so it's not difficult to use. 

## Get One Contact

Getting one contact requires a primary key. In my case I used the `id` property so once I know that, I can use `get(key)` to fetch the record. Here's that function:

```js
async function getContact(key) {
	return new Promise((resolve, reject) => {
		let transaction = db.transaction(['contacts'], 'readonly');
		
		transaction.onerror = event => {
			reject(event);
		};
		
		let store = transaction.objectStore('contacts');
		store.get(key).onsuccess = event => {
			resolve(event.target.result);
		};
	
	});
}
```

By the way, you'll notice that sometimes I wait for the transaction to fire a success message and sometimes I wait for a particular request to fire a success. That's a bit inconsistent but I also think it's ok too. Again though it just speaks to the complexity of working with IndexedDB. Here's an example of it being called:

```js
let contact = await getContact(key);
```

## Saving Contacts

One way IndexedDB is a bit simple however is with storing records. While there's an API to add records, there's a record to update that nicely handles creating new records when it needs to. This is done via `put` and all I need to do is either pass an object with an `id` value or not - and it just does what it needs to:

```js
async function persistContact(contact) {
	return new Promise((resolve, reject) => {
		
		let transaction = db.transaction(['contacts'], 'readwrite');
		transaction.oncomplete = event => {
			resolve();
		};
		
		transaction.onerror = event => {
			reject(event);
		};
		
		let store = transaction.objectStore('contacts');
		store.put(contact);
		
	});
}
```

Once again, using this is simple:

```js
await persistContact(contact);
```

## Deleting Contacts

For the last and final CRUD method we need, I set up a delete method. This requires a primary key.

```js
async function removeContact(key) {
	return new Promise((resolve, reject) => {
		let transaction = db.transaction(['contacts'], 'readwrite');

		transaction.oncomplete = event => {
			resolve();
		};
		
		transaction.onerror = event => {
			reject(event);
		};
		
		let store = transaction.objectStore('contacts');
		store.delete(key);
		
	});
}
```

And here is the code using it:

```js
await removeContact(key);	
```

## The Whole Enchilada

All in all, once you encapsulate the complexity away into functions, it's not too difficult to use IndexedDB, and again, async/await makes life *so* much easier once you get the hang of it. But I'm really curious to see what happens after I start using a helper library or two. For the complete demo, you can use the CodePen demo below. Please forgive the slightly wonky formatting - it looks better on the CodePen site. See you in the next part!

<p class="codepen" data-height="500" data-theme-id="dark" data-default-tab="result" data-slug-hash="poLOYWo" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/poLOYWo">
  IDB1</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

<br/>