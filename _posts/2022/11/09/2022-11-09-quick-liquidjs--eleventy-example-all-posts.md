---
layout: post
title: "Quick LiquidJS + Eleventy Example - All Posts"
date: "2022-11-09T18:00:00"
categories: ["jamstack"]
tags: ["eleventy"]
banner_image: /images/banners/calendar1.jpg
permalink: /2022/11/09/quick-liquidjs--eleventy-example-all-posts
description: Some quick things I learned about Liquid when building an "All Posts" page.
---

So, on a whim today I decided to add a page to my blog to display every single post, separated by year. This was not meant to be used by anyone (hence me not linking to it in the nav), but something I've wanted around for a while. I've got a nice search form here, but sometimes I want to search for something I blogged a few weeks ago and having a simple list of posts would be useful. I didn't want to build "proper" pagination, just one giant list in on an HTML page. That's not the best UX but as I'm building this for me, I approve. I thought it would be a quick little script, but as I built it, I ran into a few interesting issues.

First, let me state that I prefer Liquid for my template language, but when doing "data centric" type stuff I'll usually go to [EJS](https://ejs.co/). EJS isn't pretty, but it's flexible as heck. If you want, you can peruse the awesome-not-ugly-at-all code I wrote for my [stats page](https://github.com/cfjedimaster/raymondcamden2020/blob/master/stats.ejs). I figured my logic wouldn't be too crazy here so Liquid should be fine. 

I began by figuring out my year range. I could have hard coded the first year (2003) as that's not going to change, but I wanted to do things the "right" way as much as possible.

```html
{% raw %}{% assign posts = collections.posts | reverse %}

{% assign thisYear = "now" | date: "%Y" %}
{% assign firstPost = collections.posts | first %}
{% assign firstYear = firstPost.date | date: "%Y" %}{% endraw %}
```

In the snippet above, I get all my posts, generate the current year, and then get my first blog post year. I wanted to do those two last lines in one call, but as far as I can tell, Liquid doesn't have a filter that can take an object and return just one particular key. 

Next, we need to loop over each year:

```html
{% raw %}{% for year in (firstYear..thisYear) reversed %}

{% endfor %}{% endraw %}
```

The `for` loop logic needs to go from now till the first year, but there isn't a `step` value for looping in Liquid. Instead, you can simply apply the `reversed` keyword to the array created by the two years. 

I decided to use `details` tags for my display so that I wouldn't have a giant list of six thousand links. To be clear, the web page is still downloading a giant list of links, but as I said, I'm building this for me and I'm fine with that:

```html
{% raw %}<details>
	<summary>{{year}}</summary>
	<h3>Posts for {{ year }}</h3>
</details>{% endraw %}
```

Now came the fun part. I've got a loop iteration for every year and I need to render the posts from that year. The proper thing to do here would be to build a filter I could pass my posts to and iterate over a result of posts for one particular year. I did not do the proper thing. Instead, I looped over everything:

```html
{% raw %}
{% for post in posts %}
	{% assign postYear = post.date | date: "%Y" | plus: 0 %}
	{% if postYear == year %}
		<a href="{{ post.url }}">{{ post.data.title }}</a> ({{ post.date | date: "%m/%d/%Y" }})<br/>
	{% endif %}
{% endfor %}{% endraw %}
```

Ignoring how horribly inefficient this is, make note of this: `| plus: 0`. Initially my conditional never returned true. It occurred to me that perhaps `postYear` was a string and I needed to cast it. There isn't a cast-type function in Liquid, but you can perform a mathematical operation on it, in this case adding zero. 

This worked great - again - if we ignore how dumb it is to loop 20ish times over six thousand entries. Or so I thought. Locally I work with a much smaller set of posts so reloads are quicker. When I deployed to production my build failed with a `Maximum call stack size exceeded` error. This really surprised me. I mean, I knew it wasn't efficient code, but 20ish loops over six thousand objects shouldn't be *too* bad. Or at least I thought. 

I was going to start reworking the code when I decided to try something else - moving to Eleventy 2 - well the Canary version. I wouldn't normally deploy unreleased code live, but as it's just my blog I figured why not. Even better, it fixed the issue. 

If you want to see the final result, you can see it live here: <https://www.raymondcamden.com/all>

And here's the complete template:

```html
---
layout: page
title: All Posts
description: Every.... single post. Ever
body_class: page-template
---

{% raw %}{% assign posts = collections.posts | reverse %}

s{% assign thisYear = "now" | date: "%Y" %}
{% assign firstPost = collections.posts | first %}
{% assign firstYear = firstPost.date | date: "%Y" %}

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
{% endfor %}{% endraw %}
```

