---
layout: post
title: "Building a Web-Based Badge Scanner"
date: "2022-08-11T18:00:00"
categories: ["javascript"]
tags: []
banner_image: /images/banners/qrbadgescan.jpg
permalink: /2022/08/11/building-a-web-based-badge-scanner
description: A web-based application that supports QR reading, persistence, and zip downloads.
---

I'm at a conference now working a booth (well, at least when I started writing this), and I really didn't realize how much I enjoyed this part of the job. While I've attended a few conferences post COVID (err, well, "post" may be too strong of a word), this is the first booth I've worked at in years. One of the first things I did when I arrived was check and see how we were going to get contacts via badge scanning. Not surprisingly, the conference organizers suggested a native app. Me being me - I immediately thought of how the app's features could be accomplished via the web. There's nothing wrong with the native app (actually, it's pretty buggy at times), but I dislike installing native apps for events. Nine times out of ten I forget to delete it off my phone even though I'll never use it again. I've now built a web-based version of the application, and while it's certainly ugly as hell, I thought I'd share how I did it.

The web app has the following features:

* Via user interaction, start a camera feed so you can point it at a badge and scan the QR code.
* Parse the results from the QR code and let you store the contact persistently.
* Render the list of contacts so you can see who you have scanned.
* Finally, let the user click to download the contacts as a zip file. 

Let's go into detail on how I built each of these parts.

## The QR Scanner

For the first part of the application, I needed a QR scanner. I knew that a web page could get access to a user's camera (via `getUserMedia`, an API I've used in the past) and I knew it could render it to screen via a `video` tag. The hard part would be looking at that stream and trying to find a QR code.

Luckily I came across a great library that simplified most of that work: <https://github.com/nimiq/qr-scanner>. The library handles getting camera access, displaying it on screen, and trying to find and parse the QR code. As an FYI, there is a native API for [barcode detection](https://developer.mozilla.org/en-US/docs/Web/API/Barcode_Detection_API) that supports QR codes, but it's pretty much a Chromium thing only now. The QR Scanner library I used will make use of it if it exists though. 

After grabbing the required JS library, here's how I used it. First, I began with a `video` tag in my layout:

```html
<video id="cam" style="width:300px; height:300px;"></video>
```

In JavaScript, there are a few steps. First, I get a pointer to the DOM element:

```js
videoElem = document.querySelector('#cam');
```

Next, I make an instance of the scanner:

```js
qrScanner = new QrScanner(
    videoElem,
    scanResult,
    { returnDetailedScanResult: true },
);
```

`scanResult` is a success handler. To start scanning, you use this method:

```js
qrScanner.start();
```

For my app, I tied this to a button you could click to start the scanning process. The success handler is passed an object that will contain, surprise surprise, the result of the scan as text. Now came the fun part.

## Parsing the Results 

When I tested my badge at this conference, the QR code contained vCard info. A vCard string is contact information in a somewhat simple format. (You can read more about it at the [spec](https://www.rfc-editor.org/rfc/rfc6350.html)). Here's an example (source from <https://docs.fileformat.com/email/vcf/>):

```
BEGIN:VCARD
VERSION:2.1
N:Gump;Forrest;;Mr.
FN:Forrest Gump
ORG:Bubba Gump Shrimp Co.
TITLE:Shrimp Man
PHOTO;GIF:http://www.example.com/dir_photos/my_photo.gif
TEL;WORK;VOICE:(111) 555-1212
TEL;HOME;VOICE:(404) 555-1212
ADR;WORK;PREF:;;100 Waters Edge;Baytown;LA;30314;United States of America
LABEL;WORK;PREF;ENCODING#QUOTED-PRINTABLE;CHARSET#UTF-8:100 Waters Edge#0D#
 #0ABaytown\, LA 30314#0D#0AUnited States of America
ADR;HOME:;;42 Plantation St.;Baytown;LA;30314;United States of America
LABEL;HOME;ENCODING#QUOTED-PRINTABLE;CHARSET#UTF-8:42 Plantation St.#0D#0A#
 Baytown, LA 30314#0D#0AUnited States of America
EMAIL:forrestgump@example.com
REV:20080424T195243Z
END:VCARD
```

It's not a terribly difficult format and I was able to find a few pre-built JavaScript libraries out there, but there were all a bit flakey. I decided to build my own, and while it's probably not completely robust, it does the job. My intent was to parse the fields as well as give them nicer names where possible. Here's the function I wrote:

```js
function parseVCard(str) {
  let result = {};
  
  let fieldMap = {
    'N':'name',
    'FN':'fullname',
    'EMAIL':'email',
    'TITLE':'title',
    'ORG':'org',
    'EMAIL':'email',
    'ADR':'address',
    'TEL':'telephone',
    'VERSION':'version'
  }

  str = str.trim();
  str.split(/[\r\n]/).forEach(l => {
    let [ key, value ] = l.split(':');
    if(key === 'BEGIN' || key === 'END') return;

    // Ok, so unless key has ; in it, we're simple
    if(key.indexOf(';') === -1) {
        result[fieldMap[key]] = value.trim(); 
    } else {
      // So in theory, it will ALWAYS be type=
      let [newKey, newType] = key.split(';');
      // and type can be TYPE=(nothing), so let's just keep it simple
      newType = newType.replace('TYPE=','');
      /*
      so type should always be blank or a value, but I've seen FAX,FAX which isn't valid, 
      so I'm going to split and [0]
      */
      if(newType.length) {
        newType = newType.split(',')[0].toLowerCase();
      }
      result[fieldMap[newKey]] = {
        type:newType,
        value:value
      }
    }
  });
  
  return result;
}
```

For the most part, this is just string parsing, but note that some fields in a contact record have types, like addresses and phone numbers. The result of this function is a nice JavaScript object that's an array of fields with nicer names, values, and where it exists, types. 

So going back to the scan operation, this is how I handle it:

```js
function scanResult(r) {
    qrScanner.stop();
    contact = parseVCard(r.data);
    contactOrig = r.data;
    resultElem.innerText = contact.name;
    addElem.removeAttribute('disabled');
}
```

I turn off the current scanner. Parse the data and save it as well as the original string in a global variable, and then update the DOM to reflect a new scan that came in. I use the name value as a label. 

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/q1.jpg" alt="Screenshot" class="lazyload imgborder imgcenter">
</p>

Did I mention that the UI wasn't pretty? 

So, as a quick test, I asked my two best friends to send me pictures of their badges from recent conferences. One had a vCard and one did not, instead having some other weird ~ delimited format. 

```
12688~Scott~Stroz~noyb@noyb.com~MySQL Developer Advocate~Oracle~5559755049~12345
```

Alright, so at this point, my app can scan a badge, parse the vCard, and now we need to save it.

## Persisting Contacts 

To handle persistence, I decided to make use of IndexedDB. A few years back, I went hardcore deep into client-side storage. I wrote posts on it, gave presentations, hell I even wrote a [book](https://www.amazon.com/gp/product/B06XHGH789/ref=as_li_tl?ie=UTF8&camp=1789&creative=9325&creativeASIN=B06XHGH789&linkCode=as2&tag=raymondcamd06-20&linkId=f23f73d89dfe77d76a37e967d7e28cd0) on it. But as the space hasn't really changed much (as far as I know), I haven't used it much recently. I'm definitely going to be doing some more updated posts on the topic, but for now, I used the [Dexie](https://dexie.org/) library. I plan on blogging more on this later in the month, but here's an example of how darn cool it is.

First, I set up an initialize my database:

```js
contactsDb = new Dexie('contactsDb');
contactsDb.version(1).stores({contacts:'++id,contact.fullname'})
```

In the second line, I define a collection named `contacts` with an auto number primary key and an index on a contact's name. I didn't end up using the index, but it's there if I need it. This is *not* a list of every part of the record I'll be saving, just the important information related to keys and indexes. 

To actually save my data, here's what I did:

```js
await contactsDb.contacts.put({ contact, originalContact:contactOrig, created:new Date() });
```

Yeah, that's it. I store the 'nice' contact, the original contact, and a date stamp. But that's literally it. In my app, I wanted to render the contacts. I began with an empty table:

```html
<table id="contactsTable">
    <thead>
    <tr>
        <th>Name</th>
        <th>Created</th>
    </tr>
    </thead>
    <tbody>
    </tbody>
</table>
```

And then built a rendering function like so:

```js
// earlier in the code
tableElem = document.querySelector('#contactsTable tbody');

async function renderContacts() {
  let contacts = await contactsDb.contacts.toArray();
  let html = '';
  contacts.forEach(c => {
    html += `
    <tr>
      <td>${c.contact.fullname ?? c.contact.name}</td>
      <td>${dtFormat(c.created)}</td>
    </tr>`;
  });
  tableElem.innerHTML = html;
}
```

The Dexie line is the `toArray()` part. Stupid simple and so much easier than "native" IndexedDB calls. Here's the oh-so-lovely result:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/q2.jpg" alt="Table of scanned contacts" class="lazyload imgborder imgcenter">
</p>

## Downloading a Zip 

For the final part of the application, I added a button that would fire off a process to export and save the contacts. I found a cool library for this, [JSZip](https://stuk.github.io/jszip/). It's probably one of the easiest zip libraries I've ever seen. When combined when another library, [FileSaver](https://github.com/eligrey/FileSaver.js), here's the entire routine:

```js
async function downloadContacts() {
  let zip = new JSZip();
  let contacts = await contactsDb.contacts.toArray();
  contacts.forEach(c => {
    let file = c.id + '.vcf';
    zip.file(file, c.originalContact);
  });

  zip.generateAsync({ type: 'blob' }).then(function (content) {
    saveAs(content, 'contacts.zip');
  });

}
```

I grab the contacts, iterate, give them a name based on the primary key, and then just generate it and save it. That's it!

## Code + Demo 

If you want to play with this yourself and have a QR code containing a vCard, you can see it online here: <https://cfjedimaster.github.io/webdemos/badgescanner/index.html> I also included a snazzy rainbow horizontal rule because why the heck not. 

The complete code may be found here: <https://github.com/cfjedimaster/webdemos/tree/master/badgescanner>

Now, there's a lot to be desired with my demo. It's not mobile-friendly in terms of layout. Also, as easy as the QR Scanner library was to use, it did get a bit slow on me at times. I'd hold up my badge and have to wait for it to 'see' the code. Sometimes it was incredibly fast though. I could probably look at the library closer and find ways to improve the performance. 

As always, if you've got an opinion on this, please let me know! 

Photo by <a href="https://unsplash.com/@purzlbaum?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Claudio Schwarz</a> on <a href="https://unsplash.com/s/photos/qr-code?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  