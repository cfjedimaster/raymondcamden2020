---
layout: post
title: "Reading Comic Books in the Jamstack"
date: "2022-07-01T18:00:00"
categories: ["jamstack"]
tags: ["eleventy"]
banner_image: /images/banners/comicbooks2018.jpg
permalink: /2022/07/01/reading-comic-books-in-the-jamstack
description: Adding support for digital comic books to your Jamstack site
---

One day I'm going to write a really good, Enterprise-grade blog post on Jamstack stuff and not talk about silly crap that has no business use. Today is not that day. For those of you who may not be avid comic book readers, you may not know that just like "regular" books, comic books come in digital formats as well. You can view them on your Kindle or via other applications and there's a pretty large market for them. 

Outside of the ones you read on a Kindle, comic books typically use the [comic book archive](https://en.wikipedia.org/wiki/Comic_book_archive) format. This is not a special format, but literally just a compressed file containing the images. You can tell the type of compression by the extension:

* cbz - Zip
* cbr - RAR

There are also versions for 7z, ACE (never even heard of that), and TAR (AKA the format I have to google every time I need to uncompress it). 

I thought it would be fun (I have a weird idea of fun) to see if I could add support for digital comics to Eleventy. It was a bit more work than I anticipated, but I thought I'd share what I built. It's rough... and it's not a great reading experience, but it works. My solution will use [Eleventy](https://11ty.dev/), but you should be able to use this in other static site generators.


## The Road Not Taken

Normally I don't spend a lot of time talking about the approaches I didn't select, but in this case, I spent a lot of time chewing on it and want to share *why* I decided to not take a certain approach. One of the more cool recent features of Eleventy is the support for [custom templates](https://www.11ty.dev/docs/languages/custom/). So for example, I can set up `.pdf` as a valid template extension and tell Eleventy how it should handle it. 

I really wanted to go this route, but the issue I had is that I knew I was going to have a lot of files related to my comics. So for example, a cover thumbnail. It wasn't just "one to one" (`.cbr` to `.html` for example), and my instincts just made me feel like that made the feature a poor fit for what I had in mind.

Again, I could be wrong here, and that's why I'm sharing why I didn't use the feature. 

## Source Material 

Most comic books are copyrighted material, but due to how long comics have been around, turns out there are quite a few in the public domain. I found an excellent website, [Comic Book+](https://comicbookplus.com/), that provides access to over **forty thousand** free comics you can download. Check it out if for no other reason than that it's a great way to see early comics. For my demo, I grabbed three comics from their collection.

## The Plan

Given a source comic, I decided on the following plan:

* First, extract the file into a directory of pages. That will let me show the pages via HTML.
* Given that we've got a directory of pages, assume that the first image is a cover, and create a nice-sized thumbnail.
* Store all of the above in a cacheable location so our builds will go faster.
* For the front end, I decided on a *super* simple reading experience - basically buttons to go back and forth and one page, centered, at a time.

## Parsing Comics

As I said above, I decided *against* using the custom template feature in Eleventy and instead used the global data feature. I created `_data/comics.js` and started coding. I made more than a few assumptions along the way, first of all being that I would only support `.cbr` and `.cbz`. That meant I'd only need two libraries to parse the files. 

My file is a bit complex, and honestly, could use a bit of refactoring, so let me share it in bits first so hopefully, it will make more sense.

First, a few constants:

```js
const inputDir = './comics'; 
const cacheDir = './comiccache'; 
```

Next, initialize my result, and read my directory:

```js
let comics = [];

console.log('Comic Processing:\n');
let files = fs.readdirSync(inputDir);

// first, ensure we filter to .cbr or .cbz, could be done using glob npm module instead
files = files.filter(f => {
    let ext = f.split('.').pop().toLowerCase();
    return ['cbr','cbz'].indexOf(ext) >= 0;
});
```

At this point, we've got an array of files. I looped over them and specified `f` as the current file:

```js
for(let i=0; i<files.length; i++) {

    let f = files[i];
```

For each comic, I need it to have its own cache directory under the main `cacheDir` defined above. I used the slugified version of the filename for that:

```js
let cacheFolder = cacheDir + '/' + slugify(f) + '/';
console.log(`For ${f}, the cache is ${cacheFolder}`);
if(!fs.existsSync(cacheFolder)) fs.mkdirSync(cacheFolder);
```

Now we need our first main process, extracting the contents into a 'pages' directory:

```js
/*
Always check for the pages first, as we use that to make thumbnails.
*/
let pagesFolder = cacheFolder + 'pages/';

if(!fs.existsSync(pagesFolder)) {
    fs.mkdirSync(pagesFolder);
    console.log(`Need to extract the pages to ${pagesFolder}`);
    /*
    we use one library for zips, another for rars
    */
    let ext = f.split('.').pop().toLowerCase();
    if(ext === 'cbz') {
        console.log(`Process the ZIP file, ${f}`);
        let zip = new AdmZip(inputDir + '/' + f);
        /*
        Can't use this as it doesn't allow us to ignore the internal directory
        zip.extractAllTo(pagesFolder, true);
        */
        let entries = zip.getEntries();
        entries.forEach(e => {
            if(!e.isDirectory) {
                zip.extractEntryTo(e.entryName, pagesFolder, false);
            }
        });
    } else {
        console.log('Process the RAR');
        let extractor = await unrar.createExtractorFromFile({ 
            wasmBinary, 
            filepath:inputDir + '/' + f, 
            targetPath:pagesFolder, 
            filenameTransform(file) {
                return file.split('/').pop();
            }
        });
        /*
        I have no idea how this works, but thanks: https://stackoverflow.com/a/71427375/52160
        */
        [...extractor.extract().files];
        console.log(`Extracted to ${pagesFolder}`);

    }
}
```

From the top - we first see if the `pages` folder exists and if not, create it. We then have two branches. For zip files, I used [adm-zip](https://www.npmjs.com/package/adm-zip), a relatively simple library for working with zips. The only issue I ran into is that I couldn't use the "one-liner" (commented out in the code sample above) as I needed to 'flatten' the result. So for example, given `spiderman01.cbz`, the contents inside may be in a subdirectory `spiderman (01)\....`. I want a 'flat' set of images which is what the third argument to `extractEntryTo` does. 

For RAR files, it was a bit more difficult. I used [node-unrar-js](https://www.npmjs.com/package/node-unrar-js) which was just a very difficult library to use. As I plainly said, I have no idea why that line there at the end worked, but it did. I'm sure that's totally fine and safe to deploy to production.

Ok, so at this point, we've extracted the comics. Now we need to make thumbnails:

```js
let thumb = cacheFolder + 'thumb.jpg';
if(!fs.existsSync(thumb)) {
    console.log(`Need to make the thumbnail, ${thumb}.`);
    /*
    First, find the first image in pagesFolder. We're going to get all and get the first
    item, but I'm NOT sure I trust the sorting. 

    Also, note I found one comic with a Thumbs.db, so we will filter to first jpg/gif/png
    */
    let images = fs.readdirSync(pagesFolder);
    let sourceImage = null;

    while(!sourceImage) {
        let image = images.shift();
        let ext = image.split('.').pop().toLowerCase();
        if(['jpg','gif','png'].indexOf(ext) >= 0) sourceImage = image;
    }

    const image = await Jimp.read(pagesFolder + '/' + sourceImage);
    await image.resize(THUMB_WIDTH, Jimp.AUTO);
    // hard coding for now
    await image.quality(80);
    await image.writeAsync(thumb);
}
```

For this, I used the [Jimp](https://www.npmjs.com/package/jimp), another easy-to-use library. The only real oddity I came across was one archive containing a `Thumbs.db` file I needed to ignore. 

The final part takes my data and prepares it for use on the site:

```js
/*
Ok, let's construct the data we're returning...
*/
let comic = {};
comic.filename = f;
comic.slug = slugify(f);
comic.pages = fs.readdirSync(pagesFolder).filter(f => {
    let ext = f.split('.').pop().toLowerCase();
    return ['jpg','gif','png'].indexOf(ext) >= 0;
}).map(p => {
    return cacheWebDir + '/' + comic.slug + '/pages/' + p;
});
comic.thumb = thumb;
comic.numPages = comic.pages.length;
comics.push(comic);
```

You'll notice I set a number of pages value just to make things easier in the front end. Also, note the use of `cacheWebDir`, I didn't show that, but it's:

```js
const cacheWebDir = '/comiccache';
```

Basically, it's the "web" version of my cache. Whew! Now on to displaying them.

## Displaying Comics

Alright, as I said earlier I was going with a *real* simple experience on the front end. First, here's the home page showing thumbnails:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/07/comic1.jpg" alt="Thumbnails of comics" class="lazyload imgborder imgcenter">
</p>

After clicking one, you see one image per page, with controls on top and bottom:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/07/comic2.jpg" alt="First page of the comic" class="lazyload imgborder imgcenter">
</p>

And for comparison, another page, which nicely shows you how to draw a wreath:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/07/comic3.jpg" alt="Another page" class="lazyload imgborder imgcenter">
</p>

I honestly gave it my best effort and this is what I came up with:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/07/comic4.jpg" alt="A poorly drawn wreath" class="lazyload imgborder imgcenter">
</p>

Honestly, I look like I had a stroke halfway through drawing it. Anyway, the home page iterates through each comic and displays the thumbnail:

```html
---
layout: main
title: Comic Books
---

<h2>Currently Available Comics</h2>

{% raw %}{% for comic in comics %}
    <a href="/comics/{{comic.slug}}"><img src="{{comic.thumb}}" class="comicThumb"></a>
{% endfor %}
{% endraw %}
```

To display the comics, I decided on a one-page approach. I wanted to go with no JavaScript at all, one HTML page per comic page, but I thought it would be nicer to keep the user on the page and just swap out the image. Here's how I built that:

```html
{% raw %}---
layout: main
pagination:
    data: comics
    size: 1
    alias: comic
permalink: "/comics/{{comic.slug}}/"
---

<h2>{{ comic.filename }}</h2>

{% capture "nav" %}
<p class="pageNav">
<button class="prevButton">Previous</button> 
Page <span class="currentPage">1</span> of {{comic.numPages}}
<button class="nextButton">Next</button>
</p>
{% endcapture %}
{{ nav }}

<p class="pageImage">
<img src="{{comic.pages[0]}}" id="pageImage">
</p>

{{ nav }}

<script>
const totalPages = {{comic.numPages}};
let currentPage = 0;
let currentPageDom;
let currentPageImage;

let images = [
    {% for image in comic.pages %}
        '{{image}}' {% if forloop.last == false %},{% endif%}
    {% endfor %}

];

document.addEventListener('DOMContentLoaded', init, false);
function init() {

    currentPageDom = document.querySelectorAll('.currentPage');
    currentPageImage = document.querySelector('#pageImage');

    document.querySelectorAll('.nextButton').forEach(nb => {
        nb.addEventListener('click', nextPage); 
    });

    document.querySelectorAll('.prevButton').forEach(pb => {
        pb.addEventListener('click', previousPage); 
    });

}

function nextPage() {
    console.log('go next');
    if(currentPage+1 < totalPages) {
        currentPage++;
        currentPageDom.forEach(c => c.innerText = currentPage + 1);
        currentPageImage.src = images[currentPage];
    }
}

function previousPage() {
    console.log('go prev');
    if(currentPage > 0) {
        currentPage--;
        currentPageDom.forEach(c => c.innerText = currentPage + 1);
        currentPageImage.src = images[currentPage];
    }
}
</script>{% endraw %}
```

A few things to note here. I made use of the `capture` Liquid tag to create a variable, `nav`, that I could use on top and at the bottom of my page. We default to the first page of course.

In JavaScript, I've got event listeners for my buttons which had to be a little bit complex since I've got two, not just one. Hence the `forEach` with the query selectors. Then it's just one handler for going forward and backward and for that I use the bounds (0 and totalPages) to ensure I don't go too far.

Want to see the live version? Sure you do! You can view it here: <https://comicbookjamstack.netlify.app/>. The repository may be found here: <https://github.com/cfjedimaster/eleventy-demos/tree/master/comicbooks>. Note that the cache will not work unless you actually set up Netlify to do that. I covered that in my last post: [Testing the Netlify Cache Plugin with Eleventy](https://www.raymondcamden.com/2022/06/26/testing-the-netlify-cache-plugin-with-eleventy)

