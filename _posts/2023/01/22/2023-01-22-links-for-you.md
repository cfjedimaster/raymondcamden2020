---
layout: post
title: "Links For You"
date: "2023-01-22T18:00:00"
categories: ["misc"]
tags: ["links4you"]
banner_image: /images/banners/links.jpg
permalink: /2023/01/22/links-for-you
description: Happy Links for a Happy Week
---

Happy Sunday, programs. Here's some links for you to enjoy this week. I'll be speaking this week at the free event, [The Jam.dev](https://cfe.dev/events/the-jam-2023/), and I hope to see you there (virtually) as well!

## Eleventy 2.0 Beta

Eleventy 2.0 has been in the works for a while now, and the final release will be here soon. The [2.0 beta](https://www.11ty.dev/blog/eleventy-v2-beta/) release was shipped this week with lots of new features and improvements. While not a new feature, the fact that the `node_modules` size went down near 80% is freaking awesome. If you are still on 1.x, I'd take a look at this article, [New Features and Upgrade Considerations for Eleventy v2.0.0](https://11ty.rocks/posts/new-features-upgrade-considerations-eleventy-version-2/), which will help you prepare for the upgrade. I've been running a 2.0 canary for a while so I hit the major issues upgrading back then, but all in all it should be a pretty painless process. I've upgraded my blog here to the 2.0 beta and everything worked fine. 

## Eleventy and Cloudinary Example

Regular readers will know I'm a big fan of [Cloudinary](https://cloudinary.com/), and this week I had an interesting conversation with Daniel Braun about how to integrate the two. Specifically, he was trying to find an easy way to get dimensions of an image stored in Cloudinary. He discovered that Cloudinary has a transformation that returns metadata about an image: [fl_getinfo](https://cloudinary.com/documentation/transformation_reference#fl_getinfo). I find this completely fascinating as it's the only (that I know of so far) transformation that returns textual data, not a new image. It's super useful and for Daniel, it let him do stuff with Cloudinary and not use the SDK or REST-based API. He wrote a great blog about it in detail: [Eleventy, Images and Cloudinary](https://blog.danbraun.me/posts/eleventy-images-and-cloudinary/). 

The fact that Cloudinary has this flexibility just makes me like it even more.

## Awesome Web Components

Want to learn more about web components? I do! [Serhii Kulykov](https://github.com/web-padawan) has set up a repository of links for everything web component related: [Awesome Web Components](https://github.com/web-padawan/awesome-web-components). There are a *huge* amount of resources here so whether your an expert or just a beginner, you'll find lots of stuff to check out. As an example, I was happy to discover not one but two [books](https://github.com/web-padawan/awesome-web-components#books) are already in development. As someone who likes to use printed books to learn tech, I'll definitely be picking up one (or both) of them!

