---
layout: post
title: "Support External Articles in an Eleventy Blog"
date: "2022-11-16T18:00:00"
categories: ["jamstack"]
tags: ["eleventy"]
banner_image: /images/banners/outside-path.jpg
permalink: /2022/11/16/support-external-articles-in-an-eleventy-blog
description: Adding a method to list external articles in an Eleventy blog
---

A few weeks ago, I began helping a friend migrate his company blog from WordPress to a new solution. Being a Jamstack proponent, I suggested using [Eleventy](https://www.11ty.dev/) for their new platform. They were all technical folks and the idea of not having to manage and patch WordPress, PHP, and MySQL was very appealing. For the most part, I figured it would be a simple conversion. I'd get their theme (using the hardcore developer technique of "view source") and simply set up a basic Eleventy blog. (Need help doing that? I've got an extensive [guide](https://cfjedimaster.github.io/eleventy-blog-guide/guide.html) that walks you through it!) Turns out, their existing blog had something interesting happening with it.

You can see their existing blog here, <https://news.ascendingnode.tech/> (At the time I write this, the Eleventy version is done, just not yet deployed). In case you don't want to click, here's the front page of posts:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/11/ext1.jpg" alt="Screenshot of blog, showing 4 recent posts" class="lazyload imgborder imgcenter">
</p>

In the screenshot above, you see four blog posts. This is - again - a very typical blog interface. You see a title, a date, and an extract of the post. The title (and the word 'more' at the end) should link to the actual blog post. All four of the posts shown above look to be identical in terms of 'form' and function. However, if you click the first link, you actually end up on an external site.

This surprised me... but also excited me. I write on my blog as well as on external publications. Currently, I list those articles on my [About](/about) page and honestly, I'm probably the only one who visits this. But I *loved* how the external article was presented as just another blog post. While their current blog doesn't have an RSS feed, you could imagine it being there just like any other post. In terms of discoverability, this feels like a *perfect* solution. 

So how do we solve this in Eleventy? Here's what I came up with.

First off, I wanted my solution to be in line with "regular" blog posts, by that I mean creating a Markdown file in the posts directory. So given a remote article "A Story of Cats", I'd create `a-story-about-cats.md`. 

Then, I added a new key to my post front matter, `remoteURL`. I considered seeing `permalink`, but as far as I can tell, it can only be used for writing files to the filesystem, nothing more. 

Lastly, I included a paragraph of text. This is the text you'll see on the home page, and in the RSS feed. Here's how I did this for their blog post on the external site:

```html
---
title: "Ascending Node Technologies: An Interactive Visualization Tool for Space Mission Planning"
date: 2022-08-22T18:00:00
remoteURL: https://space-tech.aerospacedefensereview.com/vendor/ascending-node-technologies-an-interactive-visualization-tool-for-space-mission-planning-cid-742-mid-67.html
---

Ascending Node Technologies develops solutions to allow spacecraft mission designers and operators to work better together through their flagship product Spaceline, which is supported by several NASA SBIR Phase II awards.
```

I was already using a data directory JSON file to specify a layout and tag for posts, but I converted this to JavaScript so I could add a bit of logic. In my case, remote URL blog posts should not get written to the file system:

```js
module.exports = {
    layout: "post",
    tags: "post",
    eleventyComputed: {
        permalink: data => {
            if(data.remoteURL) return false;
        }
    }
}
```

To handle these posts in the front end, I simply had to check for the `remoteURL` value in front matter and ensure I linked to that instead of the regular URL. So on the index page, I have: 

```html
{% raw %}{% for post in latestPosts limit:10 %}

    {% if post.data.remoteURL %}
        {% assign link = post.data.remoteURL %}
    {% else %}
        {% assign link = post.url %}
    {% endif %}{% endraw %}
```

The rest of the page doesn't change. These "remote" posts still have a title, still have a date, still have content I can pass to an `excerpt` filter. 

Finally, in the `feed.njk` template, I do something similar:

```html
{% raw %}{%- if post.data.remoteURL %}
    {%- set absolutePostUrl = post.data.remoteURL %}
{%- else %}
    {%- set absolutePostUrl = post.url | absoluteUrl(metadata.url) %}
{%- endif %}
{% endraw %}
```

Honestly, this isn't a big deal code-wise, but as someone who blogs a lot *and* does a lot of external articles, I'm really happy with this solution. I'm going to implement it here too, but I'll probably be lazy and wait till my next external article is published. What's cool is - I've got a newsletter (sign up below!) that is RSS based - so when I use this technique to add a new external article, my subscribed readers will automatically get an update. 

Photo by <a href="https://unsplash.com/@whatuprell?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Dorrell Tibbs</a> on <a href="https://unsplash.com/s/photos/outside?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  