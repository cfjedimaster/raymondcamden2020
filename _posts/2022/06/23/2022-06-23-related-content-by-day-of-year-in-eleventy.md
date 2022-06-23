---
layout: post
title: "Related Content by Day of Year in Eleventy"
date: "2022-06-23T18:00:00"
categories: ["jamstack"]
tags: ["eleventy"]
banner_image: /images/banners/calendar.jpg
permalink: /2022/06/23/related-content-by-day-of-year-in-eleventy
description: A demonstration of how to get content published on the same day in the past.
---

Ok, chalk this up to something that is probably useful to one out of ten of my readers, but the idea's been bouncing around my brain for a few months now and I finally took the time to build it out. Imagine a content site that's been around for a while, for example, this blog (twenty years next February). It may be interesting to tie articles to content written in the past, specifically, on the same day in previous years. This requires a site with years of content and enough content such that there would actually be a decent chance of that happening, but I could see newspaper sites or other news organizations being able to meet that criteria. For my demo, I took three years of content from this blog and got to work.

I began by creating a "post" template that would check for, and optionally include the content:

```html
{% raw %}---
layout: main 
---

<h2>{{ title }}</h2>
<p>Published {{ date | date: "%B %d, %Y %l:%M%P" }}</p>

{{ content }}

{% assign relatedPosts = date | onthisday: collections.posts %}
{% if relatedPosts.length > 0 %}

    <h2>On this day...</h2>
    {% for post in relatedPosts %}
    <a href="{{ post.url }}">{{ post.data.title }}</a> ({{ post.date | date: "%B %d, %Y %l:%M%P" }})<br/>
    {% endfor %}
{% endif %}{% endraw %}
```

The template calls a filter, `onthisday`, and passes the date of the article itself, and all the content it needs to check, in this case a collection of posts. Let's look at that filter:

```js
eleventyConfig.addFilter('onthisday', (date, posts) => {
    date = new Date(date);

    return posts.filter(p => {
        return p.date.getFullYear() < date.getFullYear() && 
                p.date.getMonth() == date.getMonth() && 
                p.date.getDate() == date.getDate();
    });

});
```

Basically - check the year and ensure it's less than the current year, then check for matches on month and date (which is the day of the month). Here's an example of how it looks when content is found:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/06/otd.jpg" alt="On This Day related content" class="lazyload imgborder imgcenter">
</p>

That's it. I do think you could make it a bit better if you perhaps allowed for a bit of wiggle room - like maybe return results that match the day, but also one before and one after. That would help find matches near weekends when publishing may slow down. If you want a copy of a complete demo of this, you can find it here: <https://github.com/cfjedimaster/eleventy-demos/tree/master/onthisdayfilter>