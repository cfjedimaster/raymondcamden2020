---
layout: post
title: "Investigating IndexedDB Wrapper Libraries - Part Three"
date: "2022-08-29T18:00:00"
categories: ["development"]
tags: ["javascript"]
banner_image: /images/banners/storage_ij.jpg
permalink: /2022/08/29/investigating-indexeddb-wrapper-libraries-part-three
description: Using DPP to dramatically simplify IndexedDB Usage
---

Welcome to the third and final (for now) entry into my series looking at wrapper libraries for working with IndexedDB. I began this series [earlier this month](https://www.raymondcamden.com/2022/08/17/investigating-indexeddb-wrapper-libraries-part-one) demonstrating a simple Contacts database implemented with IndexedDB. In the [second entry](https://www.raymondcamden.com/2022/08/18/investigating-indexeddb-wrapper-libraries-part-two), I demonstrated how the [Dexie](https://dexie.org/) library made working with IndexedDB much simpler. Today I'm going to look at my last "planned" entry (I may revisit this again if I find more) in this series - using [DPP](https://github.com/robtweed/DPP), or Deep Persistent Proxy Objects for JavaScript. 

DPP makes use of the JavaScript [Proxy Object](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Proxy) feature. This is a low-level feature that lets you control how access to an object is provided. I'd like to say this is 'new' but it's been discussed for some time. It's got [great support](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Proxy#browser_compatibility) so it's safe to use, but honestly, it feels like something more tailored for library/framework developers versus "day to day" coding. Of course, this is exactly the kind of case that DPP covers - a library on top of IndexedDB. 

How does DPP work? You begin with one asynchronous call to initialize your object. The simplest example would look like so:

```js
let dpp = await createDPP({ storeName:'MyDataStore' });
```

This will create a store, `MyDataStore`, under a default IndexedDB database named `DPP`. You can also specify a custom name:

```js
let dpp = await createDPP({ storeName:'MyDataStore', idb_name:'MyDB' });
```

Once you've initialized DPP, you then ask for the data like so:

```js
let myObj = await dpp.start();
```

Just to be clear, here's a "full" example:

```js
let dpp = await createDPP({ storeName:'MyDataStore' });
let myObj = await dpp.start();
```

At this point, `myObj` is persisted. What does that mean? I can do:


```js
myObj.purpose = "to store crap";
myObj.lastStore = new Date();
```

And... I'm done. That's it. The object with two keys will be persisted and the next time I work with it, I can just use it. For example:

```js
if(myObj.purpose) {
    console.log(`My purpose is ${myObj.purpose}`);
} else myObj.purpose = "to store crap";
```

Notice this is all done with regular synchronous calls. The library handles everything behind the scenes using web workers. (You can get more details on the project's [readme](https://github.com/robtweed/DPP) docs.) 

So how does this impact our example application? As before, I'm going to skip over discussing DOM stuff and just focus on the bits related to persistence. 

## Include DPP

Including DPP requires using an import statement. I'll be honest and say this still kinda confuses me in client-side JavaScript. I need to learn more about it.

```js
const {createDPP} = await import('https://cdn.jsdelivr.net/gh/robtweed/DPP/src/dpp_browser.min.js');
```

## Initialize the Database

Initializing the database just uses the two lines I showed above. The result is an object, not a database, so I changed from `initDb` to `initContacts`. So in my `init` function, I've got:

```js
contactsOb = await initContacts();
```

And `initContacts` is:

```js
async function initContacts() {

    const {createDPP} = await import('https://cdn.jsdelivr.net/gh/robtweed/DPP/src/dpp_browser.min.js');
    let dpp = await createDPP({
        storeName: 'contacts_dpp'
    });
    
    let contactsOb = await dpp.start();
    if(!contactsOb.contacts) contactsOb.contacts = [];
    
    
    return contactsOb;
}
```

Notice I check for `contacts` under the main object. I'm working with an array of data so I'm going to store it as `contactsOb.contacts`. 

## Working with Data 

Now for the fun part. In my previous two blog posts, I had one function for each use of working with DOM stuff, like rendering contacts, editing, etc, and one function each for persistence. That made it easier to switch from "pure IndexedDB" to Dexie. However, all of that is gone now. I'm not doing the persistence, DPP is. 

So for example, I don't need a function to get contacts. I already have it. And when I want to render them, I just do:

```js
contactsOb.contacts.forEach((c,i) => {
```

If I want to save a contact, I either update an existing contact by its index or add it to the end of the array:

```js
if($key.value) {
    let idx = parseInt($key.value,10);
    contactsOb.contacts[idx] = contact;
} else contactsOb.contacts.push(contact);
```

Deleting a contact is just a `splice` call:

```js
let key = parseInt(e.target.dataset.key,10);
contactsOb.contacts.splice(key, 1);
```

And... I'm done. Honestly, it's shocking how cool DPP is. My [original version](https://codepen.io/cfjedimaster/pen/poLOYWo) had 181 lines of JavaScript. My [Dexie version](https://codepen.io/cfjedimaster/pen/eYMbBpG) brought that down to 106. The DPP version goes down even more, to 97. While not as dramatic of a drop, there's not one line of IndexedDB code in there as it's all handled by the library. Here's the complete version for you to see:

<p class="codepen" data-height="500" data-default-tab="html,result" data-slug-hash="wvmNdVo" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/wvmNdVo">
  IDB DPP</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

Again, please pardon the kind of ugly formatting of the display in the embed, but I'm blown away by how simple DPP makes the application. If you've used it, I'd love to hear about it so please drop me a line. Also, if you've got suggestions for other IndexedDB libraries, please share them with me.