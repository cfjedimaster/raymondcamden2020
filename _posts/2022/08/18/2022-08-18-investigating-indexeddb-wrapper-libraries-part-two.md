---
layout: post
title: "Investigating IndexedDB Wrapper Libraries - Part Two"
date: "2022-08-18T18:00:00"
categories: ["development"]
tags: ["javascript"]
banner_image: /images/banners/storage_ij.jpg
permalink: /2022/08/18/investigating-indexeddb-wrapper-libraries-part-two
description: In this part, I investigate using Dexie for simpler IndexedDB usage.
---

In my [post](https://www.raymondcamden.com/2022/08/17/investigating-indexeddb-wrapper-libraries-part-one) yesterday I spoke about how I was interested in digging into IndexedDB again, and specifically, how I wanted to investigate some libraries that make using the feature a bit easier. In the first post, I described a basic "Contacts" application and demonstrated the code required to add persistence with IndexedDB. Today I'm going to update my application to make use of a wrapper library named [Dexie](https://dexie.org/). 

Dexie is an incredibly simple wrapper for IndexedDB and has reactive support for frameworks including Vue, React, Svelte, and Angular. Dexie is a free library, but they also sell a [commercial sync service](https://dexie.org/cloud/) called Dexie Cloud. It makes use of Promises which makes using it with async/await even simpler. I suggest taking a look at the [extensive docs](https://dexie.org/docs/Tutorial/Getting-started) as I'm going to focus on just the parts I need to convert my application.

As before, I'm going to skip over discussing DOM stuff and just focus on the bits related to persistence. 

## Include Dexie

Including Dexie is as simple as adding a script ag and pointing to the CDN, https://unpkg.com/dexie/dist/dexie.js. I'm using CodePen for my demos so I added it as an external script. 

## Initialize the Database

Remember when I said working with Dexie made IndexedDB simple? Nothing could be more indicative of that than initialization. For comparison's sake, here's the original code:

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

Remember, you have to open the database and then listen for an upgrade event (which is also fired on the first visit) and do any structural setup there. This involves creating stores and indexes. My demo isn't doing any searches so I don't have to worry about that. 

Here's the Dexie version:

```js
async function initDb() {
    let db = new Dexie('contacts_dexie');
    db.version(1).stores({contacts:'++id'})
    return db;  
}
```

That's **shockingly** smaller. To be fair, this doesn't actually create the database, it just "prepares" your web page. Dexie smartly delays doing anything until you try to work with data. But it's important to note this if you have devtools open and are looking at your databases, you will *not* see anything at first.

The second line defines a store named `contacts`. The string value is how you define primary keys and indexes. As I don't have any indexes just a primary key, it's relatively short. If I wanted to build an index on the last name property, it would look like so:

```js
db.version(1).stores({contacts:'++id,lastName'})
```

Will the simplicity continue???

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/idb2_1.jpg" alt="Questioning cat" class="lazyload imgborder imgcenter">
</p>

## Get All Contacts

Next up is the call to get all contacts. Here's the original:

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

And now the Dexie version:

```js
async function getContacts() {
    return await db.contacts.toArray();
}
```

If you aren't impressed yet, I don't know what *will* impress you!

## Get One Contact

Once again, the previous version:

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

And with Dexie:

```js
async function getContact(key) {
    return await db.contacts.get(key);
}
```

## Saving Contacts

If you remember, in the previous version we used the `put` API to allow us to have one method for storing new contacts as well as updating existing ones. Here's the original:

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

And then Dexie:

```js
async function persistContact(contact) {
    await db.contacts.put(contact);
}
```

## Deleting Contacts

Finally, let's look at deleting a contact. Here's the original again:

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

And you get one guess as to how many lines it is in Dexie:

```js
async function removeContact(key) {
    return await db.contacts.delete(key);
}
```

## The Whole Enchilada

Below you'll find the complete application. Honestly, I almost considered removing my persistence methods with Dexie being so simple. But I also kind of assumed that it was nice having one method to handle DOM events and one method focused just on persistence. Those functions may be one or two lines each, but having it abstracted like that does enable me to make architectural changes later. Here's the final application, and again, forgive the slightly wonky formatting in the embed.

<p class="codepen" data-height="500" data-theme-id="dark" data-slug-hash="eYMbBpG" data-editable="true" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/eYMbBpG">
  IDB1</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

