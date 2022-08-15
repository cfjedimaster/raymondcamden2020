---
layout: post
title: "Support Draft Blog Posts in Eleventy"
date: "2022-08-14T18:00:00"
categories: ["jamstack"]
tags: ["eleventy"]
banner_image: /images/banners/draft.jpg
permalink: /2022/08/14/support-draft-blog-posts-in-eleventy
description: A look at various ways of supporting draft posts with Eleventy
---

Last week, I was helping someone over email and we began talking about how to support "draft" posts in Eleventy. A draft post, at least for the purpose of this post, refers to content that should not be rendered on the published site. It may be a blog post that needs time for edits or perhaps just something the author needs time to chew over. It may be committed to a repository, but should not be displayed on the actual website. I did a bit of digging into this and came up with a couple of different solutions I'd like to share, but as always, please let me know what you think or how you've accomplished the same thing. 

For this demo, I'm using a simple blog application where posts are all stored in a `posts` directory. I've got two posts, `alpha.md` and `beta.md`, and my intent is for `beta.md` to be a draft. Initially, each blog post contains front matter for `title` and `layout`. Alright, let's get into it!


## Iteration One

The first, and simplest, way to suppress content is to use the `permalink` feature to disable writing to disk. So given a post I want to be in draft mode, I could just do this:

```markdown
---
title: beta
layout: main
permalink: false
---

this is beta
```

Setting `permalink` to false will stop the file from being published. Sweet and simple, right? But what if you are using a directory data file to specify your collection, or `getFilteredByGlob`? In that case, the template would still be considered part of the collection even though it wasn't stored. So for example, imagine our `posts` directory had `posts.11tydata.json`:

```json
{
"tags":"posts"
}
```

You would normally do this to save yourself from having to tag every blog post. If you had done this and then iterated over `collections.posts`, the draft post would show up. The `url` property would be false, but it would still show up. As an example:

```html
{% raw %}{% for post in collections.posts %}
a post: {{ post.url }}, title {{ post.data.title}}, tags: {{ post.data.tags }}<br/>
{% endfor %}
{% endraw %}
```

And the result:

```html
<h2>Posts</h2>

a post: /posts/alpha/, title alpha, tags: posts<br/>
a post: false, title beta, tags: posts<br/>
```

The other issue I have with this iteration is that - while it halfway works - I don't like the fact that a new developer to the repository may not get why we're using `permalink` like this. Yes, I'm being picky, but the code isn't being clear about what it's trying to do here. Let's make it better.

## Iteration Two 

In the second iteration, I want to fix two problems from the previous version. First, I want to use better front matter to more clearly express my intent, and more importantly, ensure the draft post isn't showing up in collections. 

First, let's switch from using a data JSON file to a data JavaScript file so we can use some code. I renamed my JSON file to `posts.11tydata.js` and used this code:

```js
module.exports = {
    eleventyComputed: {
        permalink: data => {
            if(data.draft) return false;
        },
        tags: data => {
            if(!data.draft) return 'posts';
            return '';
        }
    }
}
```

I'm making the `permalink` value dynamic based on the value of `draft` in front matter. The `tags` value as well is dynamic, this time only setting it to `posts` when `draft` isn't being used. In `beta.md`, I switched to this:

```html
---
title: beta
layout: main
draft: true
---

this is beta
```

This *looked* perfect, but something interesting happened. First, `permalink` worked perfectly, `beta.md` wasn't published. But, when I looped over `collections.posts` - oddly nothing was output! In fact, check this out:

```html
<h2>posts</h2> 

{% raw %}{% for post in collections.posts %}
a post: {{ post.url }}, title {{ post.data.title}}, tags: {{ post.data.tags }}<br/>
{% endfor %}

<h2>all</h2>

{% for post in collections.all %}
page: {{ post.url }}, title {{ post.data.title}}, tags: {{ post.data.tags }}<br/>
{% endfor %}{% endraw %}
```

As you can see, I'm looping over my posts and the global `all` collection. In both, I output the `url`, `title`, and `tags`. Here's the output:

```html
<h2>posts</h2>

<h2>all</h2>

page: /, title , tags: <br/>
page: /posts/alpha/, title alpha, tags: posts<br/>
page: false, title beta, tags: <br/>
```

So yeah, my non-draft post was correctly tagged but didn't show up in the collection. I'm not sure what to think about that and possibly it's a bug (after publishing this I'll file - update - I filed it [here](https://github.com/11ty/eleventy/issues/2529)), but I took another approach. 

In `.eleventy.js`, I added a custom collection:

```js
eleventyConfig.addCollection("blogPosts", function(collectionApi) {
    return collectionApi.getFilteredByTag("posts");
});
```

And guess what? This too didn't work! It's got to be a timing/chicken+egg/etc type issue. Finally, I switched to a file system solution:

```js
eleventyConfig.addCollection("blogPosts", function(collectionApi) {
    let initial = collectionApi.getFilteredByGlob("posts/*.md");
    return  initial.filter(i => {
        return i.data.tags && i.data.tags === 'posts';
    });
});
```

Oddly, in this scenario I was able to get my posts, Eleventy properly processed the dynamic tags aspect, and correctly returned a filtered list of non-draft posts. I switched my 'blog post display' logic to:

```html
{% raw %}{% for post in collections.blogPosts %}{% endraw %}
```

Perfect! Note that you want to ensure you consistently use this new collection. So for example, if you have an RSS feed 
(you *do*, right?) or a search interface, you'll want to use `blogPosts`, not `posts`. 

In theory, you can stop reading now, but I had another idea as well.

## Iteration Three 

What if you wanted to have 'draft' posts that were published, but not linked to from your list of posts, RSS, and so forth? This would let you publish a draft post and let other folks take a look for review purposes. To be clear, you could just share a link to your repository as well, but if you wanted a non-technical person to do the review, see the post in the context of your website, etc, then publishing, but not including, a draft could be helpful. 

We can support this by simply removing the `permalink` feature:

```js
module.exports = {
    eleventyComputed: {
        tags: data => {
            if(!data.draft) return 'posts';
            return '';
        }
    }
}
```

Tagging is still done correctly, at least when combined with our custom collection, and `beta.md` will be written out to the file system. This means you could then share a URL with others to get their feedback on the content. 

As a final note, you could also use all of this to support future posts. Ie, don't link/publish if the data is in the future. But you would need to combine that with a scheduled build system to ensure that when it *is* time for the post to go live, a build is fired off. That could be done with a daily schedule if you weren't concerned about a precise time. 

If you would like a copy of the demo code, you may find it here: <https://github.com/cfjedimaster/eleventy-demos/tree/master/eleventy_draft_test>

Photo by <a href="https://unsplash.com/@d_mccullough?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Daniel McCullough</a> on <a href="https://unsplash.com/s/photos/draft?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
