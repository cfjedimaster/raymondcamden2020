---
layout: post
title: "Adding Download Support in an Eleventy Site"
date: "2022-12-13T18:00:00"
categories: ["development"]
tags: ["javascript","eleventy","jamstack"]
banner_image: /images/banners/matrix.jpg
permalink: /2022/12/13/adding-download-support-in-an-eleventy-site
description: An example of adding download resources to an Eleventy site
---

I was thinking recently about how I would add "Downloads" support to an Eleventy site. By that I mean, a site where you have various resources (PDFs, zip, etc) and want to provide a way to let users download them in a consistent manner, as well as how basic tracking could be done as well. I came up with a few ideas I'd like to share, but as always, please let me know what you've done and what you would suggest.

## Method 1 - Meta Refresh

For my first attempt, I imagined a site where I've got some files up in S3 (like I do for my images here) and I'd like to take a directory and set them up as resources. So for example, imagine a `_data` file named `downloads.json`:

```json
{
    "root":"https://static.raymondcamden.com/images/2022/12/",
    "files": [
        "alpha.pdf",
        "beta.pdf",
        "gamma.pdf"
    ]
}
```

I've specified a root location for my files and then a simple list of resources. This could be more complex, so for example, I could imagine an array of objects where I have the file as well as a human-readable name. Heck, maybe even a date for when the file was last updated. But for now, a simple file is enough. 

I then created a `downloads.liquid` file that uses pagination:

```html
{% raw %}---
layout: main
pagination:
    data: downloads.files
    size: 1
    alias: file
permalink: "downloads/{{ file | slug }}/"
eleventyComputed:
    download: "{{ file }}"
---

Let's download {{ file }}. If your download does not start automatically, please click 
<a href="{{ downloads.root }}{{file}}">here</a>{% endraw %}

```

The pagination aspect is vanilla Eleventy stuff, basically creating one unique file per download under a `downloads` folder, with the file name sluggified as part of the final generated HTML. I've got text telling people they can click if the download doesn't start automatically, but where is that part actually done? 

In my front matter, note that I'm specifying a `download` value that uses the current file name of the download. I'm using this in my site layout:

```html
{% raw %}<!doctype html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>{{ title }}</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.2.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-rbsA2VBKQhggwzxH7pPCaAqO46MgnOM80zW1RWuH61DGLwZJEdK2Kadq2F9CUG65" crossorigin="anonymous">
    {% if download %}
    <meta http-equiv="refresh" content="2;url={{ downloads.root }}{{download }}" />
    {% endif %}
</head>
<body style="margin: 50px">

    {{ content }}

    <footer class="pt-5">
    <a href="/">Home</a>
    </footer>

<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-kenU1KFdBIe4zVF0s0G1M5b4hcpxyD9F7jL+jjXkk+Q2h455rYXK/7HAuoJl+0I4" crossorigin="anonymous"></script>
</body>
</html>{% endraw %}
```

This is the important line:

```html
{% raw %}<meta http-equiv="refresh" content="2;url={{ downloads.root }}{{download }}" />{% endraw %}
```

A `meta` with the `refresh` command is *incredibly* old web tech, but it works well. In this case, I've specified that in two seconds, the browser should redirect to the resource specified by the front matter. So when a user goes to one of the files, like at `http://localhost:8080/downloads/alpha.pdf/`, they will then be directed to `https://static.raymondcamden.com/images/2022/12/alpha.pdf`. (Note that if you do not specify the right headers for your S3 files, they will not be downloaded, but simply viewed in the browser. You can add those headers when pushing files up. I did a quick test and while it isn't quite working for me, I think that's more the CloudFront caching I have in front of my S3. Long story short - that's an S3-specific concern you may want to ensure you address when setting up your downloadable resources.)

For the heck of it, I also added links to my downloads from the demo site's home page:

```html
{% raw %}---
layout: main
title: List of Downloads
---

<h1>List of Downloads</h1>

<ul>
{% for dl in downloads.files %}
    <li><a href="/downloads/{{ dl | slug }}/">{{ dl }}</a></li>
{% endfor %}
</ul>{% endraw %}
```

Because I've got a standard location for my downloads, I can use that in a simple list as shown above. What's nice about this approach is that if you have a random blog post talking about a resource, you know how to link to it to let users download it.

Finally - the tracking I mentioned earlier is enabled simply by having a unique URL that auto-directs to the download. While Eleventy by itself doesn't have web analytics, if you had one defined for your site, then it should "just work" out of the box. I switched to [GoatCounter](https://www.goatcounter.com/) a week or so ago and so far really love it. I got sick and tired of fighting Google Analytics for basic stats. 

## Method 2 - JavaScript

The best part of the first solution is that it's a non-JavaScript solution. As I said, `meta` tag support is ancient so it's pretty much guaranteed to work, but I also added a direct link in the HTML as well in case it doesn't work. To me, that feels like an incredibly safe and simple way to handle it. That being said, I was curious about a JavaScript solution as well. The one I used is one I've worked with in the past - creating a virtual `A` tag, setting the `download` attribute and location, and then triggering a virtual click. This works simply enough, but note that due to browser security rules, will not actually force a download for a file on a different domain. (But it "fails" perfectly, opening it in a new tab.) To get around that for my demo, I moved my downloads local to my Eleventy site.

First, I created a `fileassets` folder and ensured it was copied to the build:

```js
eleventyConfig.addPassthroughCopy("fileassets");
```

To get the files available as data, I then added this:

```js
const fs = require('fs');

eleventyConfig.addGlobalData('downloads2', () => {
    return fs.readdirSync('./fileassets');
});
```

I then created a new pagination template:

```html
{% raw %}---
layout: main
pagination:
    data: downloads2
    size: 1
    alias: file
permalink: "downloads2/{{ file | slug }}/"
---

Let's download {{ file }}. If your download does not start automatically, please click 
<a href="/fileassets/{{file}}">here</a>

<script>
document.addEventListener('DOMContentLoaded', () => {
    // https://stackoverflow.com/a/37673039/52160
    let anchor = document.createElement('a');
    anchor.href = '/fileassets/{{file}}';
    anchor.target = '_blank';
    anchor.download = '{{file}}';
    anchor.click();
});
</script>{% endraw %}
```

As described above, we make a new anchor tag, set the various properties, and then trigger a click. As I mentioned above, if for some reason I used the S3 files and the domains didn't match it wouldn't download, but it does open a new tab. For my test with local files though it worked just fine. 

Also note that what I said about tracking downloads works here as well, although if you are assuming JavaScript support, most analytics libraries provide an API to track custom events and I'd use that instead. 

If you want to see the source for my demo, you can grab it here: <https://github.com/cfjedimaster/eleventy-demos/tree/master/downloadtracktest>

Let me know what you think!

Photo by <a href="https://unsplash.com/@markusspiske?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Markus Spiske</a> on <a href="https://unsplash.com/s/photos/assets?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  