---
layout: post
title: "Some Options for Timing Pages in Eleventy"
date: "2022-11-14T18:00:00"
categories: ["jamstack"]
tags: ["eleventy"]
banner_image: /images/banners/welcome2018.jpg
permalink: /2022/11/14/some-options-for-timing-pages-in-eleventy
description: Some experiments timing slow pages with Eleventy
---

A few days ago I [blogged](https://www.raymondcamden.com/2022/11/09/quick-liquidjs--eleventy-example-all-posts) about a page I added to my site to render all six thousand plus blog posts I've published. It's one of many "one-off" pages I've built here for various reasons, so as I was the intended target, I wasn't terribly concerned about the speed or UX of the page itself. I knew the code generating the page was kinda crap, but as it was a build-time only concern, I didn't think too much about it.

The more I thought about it though, the more I was curious about just how "bad" my page was. To be clear, it's definitely bad logic. If you didn't read the previous post, I'm doing this to generate the ["all"](https://www.raymondcamden.com/all) page:

* Get all posts
* Figure out my year range (first post to last)
* For every year, loop over every post and print a link if the year of the post matches the year of the index

That's roughly 20 (years) * 6000 (number of posts) iterations, or 120K. Luckily, however, this is the only inefficient code I've written in my life so I don't feel too bad. But I decided to do some digging to see if I could figure out some details on just how bad it is.

Before I start sharing examples, note that I'm testing this locally where I've got an `.eleventyignore` file that ignores a vast majority of my site. To see how bad things are, I went ahead and renamed that so I could see what would happen in production. Also, I'm using Eleventy `2.0.0-canary.16` except in one case that I'll specifically call out. 

## First Attempt - Simple Timings

The first thing I tried was as simple as you could get, printing out the time before and after the 'bad' code. To do that, I used this code:

```html
{% raw %}{{ "now" | date:"%H:%M:%S:%L" | log }}{% endraw %}
```

This prints out the current time to the millisecond. When I did a build, I got the following:

```
08:36:58:208
08:37:02:014
```

As you can see, roughly 4 seconds. As you can see, not bad. I thought about getting fancier and printing the difference in milliseconds. I thought I could assign the value to a variable and then use Liquid's `minus` filter, but while you can get "time since epoch" as a date format filter, it's in seconds, not milliseconds. You could multiply that out, but I was worried about the loss in precision when doing so.

Ok, so that seemed cool, and I really wanted to keep my code to the template in question, but for the heck of it, I created this shortcode:

```js
let _timer;
eleventyConfig.addLiquidShortcode("timer", () => {
if(!_timer) {
    _timer = new Date();
    console.log('TIMER INITIALIZED');
} else {
    let now = new Date();
    console.log('TIMER DIFF: ', now.getTime() - _timer.getTime());
    _timer = new Date();
}
});
```

This uses a global variable, `_timer`, to record the current time, and then print the diff on the second and later calls. I can then just add `timer` calls to my code. Here it is in the `all.liquid` template:

```html
{% raw %}---
layout: page
title: All Posts
description: Every.... single post. Ever
body_class: page-template
---

{% assign posts = collections.posts | reverse %}

{% assign thisYear = "now" | date: "%Y" %}
{% assign firstPost = collections.posts | first %}
{% assign firstYear = firstPost.date | date: "%Y" %}

{% timer %}
{% for year in (firstYear..thisYear) reversed %}

    <details>
        <summary>{{year}}</summary>
        <h3>Posts for {{ year }}</h3>
        {% for post in posts %}
            {% assign postYear = post.date | date: "%Y" | plus: 0 %}
            {% if postYear == year %}
                <a href="{{ post.url }}">{{ post.data.title }}</a> ({{ post.date | date: "%m/%d/%Y" }})<br/>
            {% endif %}
        {% endfor %}
    </details>
{% endfor %}

{% timer %}

poop 

{% timer %}{% endraw %}
```

The `poop` at the end was just a quick way for me to confirm that a third call would properly show the difference after the second call. This returned the following lovely output:

```
TIMER INITIALIZED
TIMER DIFF:  3747
TIMER DIFF:  0
```

Because I can't get tinkering, I remembered that Node itself had some timing code built in. I did a quick search, and found the [`console.time`](https://nodejs.org/api/console.html#consoletimelabel) function. Together with `console.timeEnd` and `console.timeLog`, it lets you create timers. While it doesn't require a label, I built a short code that would allow for it. It doesn't ever "end" the timer, which I think is ok but I'm not certain:

```js
let _timer2 = {};
eleventyConfig.addLiquidShortcode("timer2", (label) => {
if(!_timer2[label]) {
    console.time(label);
    _timer2[label] = true;
} else {
    console.timeLog(label);
}
});
```

Obviously, I wouldn't use `timer2`, just `timer`, but I was testing this along with my earlier shortcode. I added it to my template like so:

```html
{% raw %}{% timer2 "all loop" %}{% endraw %}
```

Here's how it outputs:

```
all loop: 3.430s
all loop: 3.431s
```

This doesn't show a diff but has highly accurate timings. The first output is after the slow code, and the second is after the poop. (Sorry, I'm basically 12 years old.)

## Second Attempt - Debugging

For my second attempt, I remembered that Eleventy would report timing information in aggregate when doing a build, for example:

```
[11ty] Copied 38 files / Wrote 6399 files in 35.28 seconds (5.5ms each, v2.0.0-canary.16)
```

And I also remembered it would "flag" data files that took too long. But I was curious if there were more options available via the CLI. Turns out, there's a `DEBUG` value you can use at the CLI as documented here: [Performance](https://www.11ty.dev/docs/debug-performance/)

Before I continue, let me say that it is FREAKING REFRESHING for a technical site like the Eleventy docs to provide instructions for both Mac/Linux and Windows. I'm really tired of sites that assume Mac/Linux and don't provide help for Windows users, especially in this case where the syntax is different. 

In my case, I'm on WSL, so I used this command:

```bash
DEBUG=Eleventy:Benchmark* npx @11ty/eleventy
```

This returns a *lot* of information, but here's a snippet:

```
Eleventy:Benchmark Benchmark      2ms   0%     2× (Aggregate) > Compile > ./_posts/2021/05/16/2021-05-16-building-a-choose-your-own-adventure-site-with-eleventy.md +0ms
Eleventy:Benchmark Benchmark      2ms   0%     2× (Aggregate) > Compile > ./_posts/2021/11/13/2021-11-13-congratulating-yourself-with-pipedream-and-microsoft-to-do.md +0ms
Eleventy:Benchmark Benchmark      2ms   0%     2× (Aggregate) > Compile > ./_posts/2022/06/18/2022-06-18-building-a-quiz-with-eleventy-and-eleventy-serverless.md +0ms
Eleventy:Benchmark Benchmark      2ms   0%     2× (Aggregate) > Compile > ./_posts/2022/09/13/2022-09-13-discover-new-music-with-the-spotify-api-and-pipedream.md +0ms
Eleventy:Benchmark Benchmark      0ms   0%    21× (Aggregate) (count) > Render Permalink > ./categories.liquid (21 pages) +0ms
Eleventy:Benchmark Benchmark      2ms   0%    42× (Aggregate) > Render > ./categories.liquid (21 pages) +0ms
Eleventy:Benchmark Benchmark      0ms   0% 12908× (Aggregate) (count) Template Compile Cache Hit +0ms
Eleventy:Benchmark Benchmark      0ms   0%    45× (Aggregate) (count) > Render Permalink > ./tags.liquid (45 pages) +0ms
Eleventy:Benchmark Benchmark      1ms   0%    90× (Aggregate) > Render > ./tags.liquid (45 pages) +0ms
Eleventy:Benchmark Benchmark      7ms   0%     1× (Aggregate) > Render > ./recentPosts.md +0ms
Eleventy:Benchmark Benchmark      4ms   0%     1× (Aggregate) > Render > ./readme.md +0ms
Eleventy:Benchmark Benchmark      6ms   0%     1× (Aggregate) > Render > ./index.liquid +0ms
Eleventy:Benchmark Benchmark   3652ms  10%     1× (Aggregate) > Render > ./all.liquid +1ms
Eleventy:Benchmark Benchmark     63ms   0%     1× (Aggregate) > Compile > ./theme/post.liquid +0ms
Eleventy:Benchmark Benchmark      4ms   0%     1× (Aggregate) > Compile > ./theme/default.liquid +0ms
Eleventy:Benchmark Benchmark      3ms   0%     1× (Aggregate) > Compile > ./theme/page.liquid +0ms
Eleventy:Benchmark Benchmark      3ms   0%     1× (Aggregate) > Compile > ./theme/tag.liquid +0ms
Eleventy:Benchmark Benchmark      3ms   0%     1× (Aggregate) > Compile > ./theme/category.liquid +0ms
Eleventy:Benchmark Benchmark   8874ms  24%  6399× (Aggregate) Template Write +0ms
Eleventy:Benchmark Benchmark     18ms   0%     1× (Data) `./_data/medium.js` +6ms
[11ty] Copied 38 files / Wrote 6399 files in 36.24 seconds (5.7ms each, v2.0.0-canary.16)
ray@Hoth:~/projects/raymondcamden2020$
```

You'll find `all.liquid` kind of in the middle there and you can see it's a huge part of the total time. Although not the worse, further up in the output I found:

```
Eleventy:Benchmark Benchmark  11702ms  32%    38× (Aggregate) Passthrough Copy File +0ms
```

Which frankly was surprising, as I didn't think I was copying that many files. I do have multiple calls to `addPassthroughCopy` in my config, but all in all I didn't think that many files were being copied. I've got something new to research now. 

Speaking of Mac/Linux versus Windows things, I discovered that the debug information above was *not* "regular" output. I discovered this when I added a pipe `> output.txt` and it still printed to the screen. After a quick search, I discovered this syntax:

```bash
command >file.txt 2>&1
```

The part at the end is what handles grabbing the non-standard output and piping it as well. Apparently, the debug info was `stderr`, which ... seems weird, but whatever. That worked. :) 

Cool, so on to the third idea!

## Third Attempt - Directory Output Plugin

When I first started looking into this, I reached out to Zach on Mastodon (note, Eleventy has an official presence now: <https://fosstodon.org/@eleventy>), and he shared a plugin I remember hearing about, but never actually used: [Directory Output](https://www.11ty.dev/docs/plugins/directory-output/). You install it by simply adding it to your config and then using `addPlugin`, once done, the result is a very nicely rendered table:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/11/perf1.jpg" alt="Directory Plugin output" class="lazyload imgborder imgcenter">
</p>

The above screenshot is only part of it, but you can see how it renders both size and timings, which is cool. You can also configure a warning for files that are too large, and honestly, I was surprised my `all` page didn't trigger that, but it is just a bunch of short links, so perhaps it's not too bad. 

I do want to point out that there is a reported bug with this plugin and the latest Eleventy Canary. I generated the result above using version 1.0.2.

## Final Thoughts

So, I did all of this and I still didn't bother improving my `all` page. Honestly, I just wanted to learn what my options are, and one thing Eleventy has been *really* consistent about is providing multiple ways to solve problems. This is truly why I love the project!
