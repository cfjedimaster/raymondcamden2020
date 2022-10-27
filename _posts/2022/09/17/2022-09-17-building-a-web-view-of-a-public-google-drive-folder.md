---
layout: post
title: "Building a Web View of a Public Google Drive Folder"
date: "2022-09-17T18:00:00"
categories: ["javascript"]
tags: ["pipedream","alpinejs"]
banner_image: /images/banners/files.jpg
permalink: /2022/09/17/building-a-web-view-of-a-public-google-drive-folder
description: How I used Pipedream and Alpine to build a web-based front end to a Google Drive Folder
---

I'm working on a project to help with local initiatives and as part of that effort, I needed to look into creating a nice way to display, make available, etc., files stored in Google Drive. Google Drive lets you make a folder public, and to be honest, the interface isn't too hard to use. I've got a folder you can open yourself at <https://drive.google.com/drive/folders/1FYLaoscxWBV_BU5sFouf7XCrv7cKktBY?usp=sharing>. Here's how it looks if you don't want to click.

<p>
<img data-src="https://static.raymondcamden.com/images/2022/09/gd1.jpg" alt="View of public folder" class="lazyload imgborder imgcenter">
</p>

It's a pretty simple interface. You get nice thumbnails, you can view pretty much any kind of file, and you can download it. It's good, but we can do better, right? I decided to look into using the [Google Drive API](https://developers.google.com/drive/api) via [Pipedream](https://pipedream.com) if I could get a data-centric version of the files. I could then render them on my website and have more control over the experience. I could do filtering, sorting, provide context, and so forth, while still having a dynamic list of files. I've got an initial version of this I'm sharing today, but have a follow-up planned with a few more advanced features. Ok, let's get started.

## Step One - Make/Decide on the Folder

You're going to need a folder of some sort to test with. I made a new folder in Google Drive, went to the Sharing options, and enabled public access to view items in the folder. That lets anyone see and download files but doesn't let them have control over it. While doing so, I made note of the URL, 

```
https://drive.google.com/drive/u/0/folders/1FYLaoscxWBV_BU5sFouf7XCrv7cKktBY
```

Specifically the value after `folders`, which I assumed to be a unique folder identifier.

## Step Two - Create the Pipedream workflow

In Pipedream, I built a new workflow using the HTTP request trigger. Don't forget Pipedream recently added support to automatically filter out requests to favicon.ico and you should absolutely turn that on.

I then went to add an action to get my Google Drive folders. I knew that Pipedream had built-in actions for working with Google Drive, and quite a few of them:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/09/gd2.jpg" alt="Google Drive actions" class="lazyload imgborder imgcenter">
</p>

Unfortunately, and a bit odd, they don't yet have an action for "List Files in Folder". I raised this in their Slack (track the issue [here](https://github.com/PipedreamHQ/pipedream/issues/4271)!) and there's a good chance that by the time you read this it will be supported, but luckily, Pipedream made it *incredibly* easy to do. Just select one of the first two options, "Use any Google Drive with...". I chose Node.js and you get code like so:

```js
import { axios } from "@pipedream/platform"
export default defineComponent({
  props: {
    google_drive: {
      type: "app",
      app: "google_drive",
    }
  },
  async run({steps, $}) {
    return await axios($, {
      url: `https://www.googleapis.com/oauth2/v1/userinfo`,
      headers: {
        Authorization: `Bearer ${this.google_drive.$auth.oauth_access_token}`,
      },
    })
  },
})
```

After you authenticate in the step with your account, you literally just need to change `url`. That's it! Most times you need to add some query parameters and such and that can be additional work, but 100% of the authentication is handled by Pipedream. I've said it before and I'll say it again - I freaking love that the boring, hard-to-do part is done and I can just focus on building. 

I began by looking at the [Files/List](https://developers.google.com/drive/api/v3/reference/files/list) API. I needed to figure out two things here. 

First, how do we filter to a folder? This is done by using the syntax:

```
q={FOLDERID} in parents
```

I mentioned needing the folder ID from step and that's where it comes in. So my code then looked like so:

```js
let folderId = '1FYLaoscxWBV_BU5sFouf7XCrv7cKktBY'
let q = `"${folderId}" in parents`
let url = `https://www.googleapis.com/drive/v3/files` + `?q=` + encodeURIComponent(q);
```

As a reminder, Pipedream supports dynamic props in actions, and I could move `folderId` outside of the code and make it a step parameter if I wanted. I was lazy this time and didn't bother.

This by itself was enough, but by default Google Drive returns maybe 3-4 fields per file. To add more, you can specify a list of fields. I used `fields=*` to see *everything*, and then decided to get:

* name
* mime type 
* view, download, and thumbnail links 
* size

Here's my code now with that update:

```js
import { axios } from "@pipedream/platform"
export default defineComponent({
  props: {
    google_drive: {
      type: "app",
      app: "google_drive",
    }
  },
  async run({steps, $}) {
    let folderId = '1FYLaoscxWBV_BU5sFouf7XCrv7cKktBY'
    let q = `"${folderId}" in parents`
    let url = `https://www.googleapis.com/drive/v3/files` + `?q=` + encodeURIComponent(q);
    url += '&fields=files/name,files/mimeType,files/webContentLink,files/thumbnailLink,files/size,files/webViewLink';

    return await axios($, {
      url,
      headers: {
        Authorization: `Bearer ${this.google_drive.$auth.oauth_access_token}`,
      },
    })
  },
})
```

To be clear, all I did was change URL. It took more time for me to research the API than it did to actually write code, thanks to Pipedream. 

I added one more code step just to return my information:

```js
export default defineComponent({
  async run({ steps, $ }) {
    let resp = steps.get_files.$return_value.files;
    await $.respond({
      status: 200,
      headers: {},
      body: resp
    })
  },
})
```

And that's it. I still can't share new Pipedream workflows, but you can see the endpoint yourself here: <https://eoemdgkqfhrtf27.m.pipedream.net/>

## Step Three - Build the Front End with Alpine.js

For the front end, I decided on a simple interface built with [Alpine.js](https://alpinejs.dev/). For this first iteration, I'm going to get the files and render them in a table. Let's start with the HTML:

```html

<div x-data="app">
    <!-- on top, render a list of files in a table -->
    <h2>Available Files</h2>
    <table id="fileList">
        <thead>
            <tr>
                <th>Name</th>
                <th>Type</th>
                <th>Size</th>
                <th></th>
            </tr>
        </thead>
        <tbody>
            <template x-for="file in files">
                <tr>
                    <td><span x-text="file.name"></span></td>
                    <td><span x-text="file.mimeType"></span></td>
                    <td><span x-text="file.size"></span></td>
                    <td><a :href="file.webViewLink" target="_new">view</a>/<a :href="file.webContentLink">download</a></td>
                </tr>
            </template>
        </tbody>
    </table>
</div>
```

I have a table showing name, type, and size, with a fourth column for viewing and downloading. Viewing is done on Google Drive, so I use a new tab to view it, whereas download will just plain work. For my JavaScript, I kept it rather simple - on load, hit the endpoint.

```js
const FILES_API = 'https://eoemdgkqfhrtf27.m.pipedream.net/';

document.addEventListener('alpine:init', () => {
  Alpine.data('app', () => ({
        async init() {
            this.getFiles();
        },
        files: [],
        async getFiles() {
            let resp = await fetch(FILES_API);
            this.files = await resp.json();
        }
  }))
});
```

I really should have some error handling here, and I definitely should have a loading indicator, but here's the first draft in action:

<p class="codepen" data-height="500" data-default-tab="result" data-slug-hash="poVeQaQ" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/poVeQaQ">
  Render Google Drive Files</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>
<p></p>

For my second draft, and with the mindset of having non-technical people use this, I made three changes. First, I changed the size to a slightly more human-readable form. I found an excellent little function on [StackOverflow](https://stackoverflow.com/a/14919494/52160) named humanFileSize and updated the table cell to use it:

```html 
<td><span x-text="humanFileSize(file.size,true)"></span></td>
```

Next, I looked into changing the mime type. There were a few options out there but nothing that felt appropriate for this simple front-end application. Therefore, I decided to simply roll my own and make a judgment call on what's supported. I decided to support:

* PDFs (of course)
* Images (and I didn't bother with JPG vs GIF vs etc - regular people don't care)
* HTML
* Word, PowerPoint, and Excel 

MDN has a [great list](https://developer.mozilla.org/en-US/docs/Web/HTTP/Basics_of_HTTP/MIME_types/Common_types) of common mime types and I used that as my reference. 

Here's the function I wrote:

```js
function humanType(mime) {
    if(mime === 'application/pdf') return 'PDF';
    if(mine.startsWith('image/')) return 'Image';
    if(mime === 'text/html') return 'HTML';
    if(mime === 'application/word' || mime === 'application/vnd.openxmlformats-officedocument.wordprocessingml.document') return 'Word';
    if(mime === 'application/vnd.ms-excel' || mime === 'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet') return 'Excel';
    if(mime === 'application/vnd.ms-powerpoint' || mime === 'application/vnd.openxmlformats-officedocument.presentationml.presentation') return 'PowerPoint';
    return 'File';
}
```

And here's how I updated the front end:

```html
<td><span x-text="humanType(file.mimeType)"></span></td>
```

Finally, I added a loading indicator:

```html
<h2>Available Files <span x-text="loading"></span></h2>
```

Where `loading` default to `(Loading...)` and gets set to an empty string when, well, things load. Here's the entire JavaScript now:

```js
const FILES_API = 'https://eoemdgkqfhrtf27.m.pipedream.net/';

document.addEventListener('alpine:init', () => {
  Alpine.data('app', () => ({
        async init() {
            this.getFiles();
        },
        files: [],
        loading:"(Loading...)",
        async getFiles() {
            let resp = await fetch(FILES_API);
            this.loading = '';
            this.files = await resp.json();
        }
  }))
});

// https://stackoverflow.com/a/14919494/52160
/**
 * Format bytes as human-readable text.
 * 
 * @param bytes Number of bytes.
 * @param si True to use metric (SI) units, aka powers of 1000. False to use 
 *           binary (IEC), aka powers of 1024.
 * @param dp Number of decimal places to display.
 * 
 * @return Formatted string.
 */
function humanFileSize(bytes, si=false, dp=1) {
  const thresh = si ? 1000 : 1024;

  if (Math.abs(bytes) < thresh) {
    return bytes + ' B';
  }

  const units = si 
    ? ['kB', 'MB', 'GB', 'TB', 'PB', 'EB', 'ZB', 'YB'] 
    : ['KiB', 'MiB', 'GiB', 'TiB', 'PiB', 'EiB', 'ZiB', 'YiB'];
  let u = -1;
  const r = 10**dp;

  do {
    bytes /= thresh;
    ++u;
  } while (Math.round(Math.abs(bytes) * r) / r >= thresh && u < units.length - 1);


  return bytes.toFixed(dp) + ' ' + units[u];
}

function humanType(mime) {
    if(mime === 'application/pdf') return 'PDF';
    if(mine.startsWith('image/')) return 'Image';
    if(mime === 'text/html') return 'HTML';
    if(mime === 'application/word' || mime === 'application/vnd.openxmlformats-officedocument.wordprocessingml.document') return 'Word';
    if(mime === 'application/vnd.ms-excel' || mime === 'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet') return 'Excel';
    if(mime === 'application/vnd.ms-powerpoint' || mime === 'application/vnd.openxmlformats-officedocument.presentationml.presentation') return 'PowerPoint';
    return 'File';
}
```

And here's it in action:

<p class="codepen" data-height="500" data-default-tab="result" data-slug-hash="poVeQxG" data-user="cfjedimaster" style="height: 500px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/poVeQxG">
  Render Google Drive Files V2</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>
<p></p>

That's it for this version, but as I said above, I've got some ideas for how to make this better and I'll be coming back to it in a few days. As always, let me know what you think!

Photo by <a href="https://unsplash.com/@iammrcup?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Mr Cup / Fabien Barral</a> on <a href="https://unsplash.com/s/photos/file-cabinet?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  