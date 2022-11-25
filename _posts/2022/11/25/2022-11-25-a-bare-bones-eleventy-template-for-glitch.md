---
layout: post
title: "A Bare-Bones Eleventy Template for Glitch"
date: "2022-11-25T18:00:00"
categories: ["development"]
tags: ["javascript","eleventy"]
banner_image: /images/banners/glitch.jpg
permalink: /2022/11/25/a-bare-bones-eleventy-template-for-glitch
description: A quick template for using Eleventy on Glitch
---

A few weeks ago I blogged about a simple [Alpine.js template for Glitch](https://www.raymondcamden.com/2022/10/28/an-alpinejs-template-for-glitch) projects. I'm still new to [Glitch](https://glitch.com) and wanted to give it a whirl with an Eleventy demo I wanted to share. Glitch has an Eleventy template, but it's a bit verbose. It sets up a basic blog with sample posts and such, and that's great to learn, but if you already know Eleventy, you may prefer to start off a bit simpler. 

With that in mind, I created this repository: <https://github.com/cfjedimaster/glitch-eleventy> It defines an `.eleventy.js` file that specifies an input and output directory. It sets up a very basic HTML layout and an empty index page that uses it. I also used Liquid for my demo whereas the Glitch-provided one uses Nunjucks. 

I was tempted to add a very basic style sheet (by basic I mean empty) and ensure Eleventy copied it to the output, but wasn't sure how often I'd use that in demos. As always, I'm open to suggestions (and PRs!) on this, but my goal is to keep this as slim as possible. If folks create new projects based on my repo and have to spend time removing stuff, then that's a failure imo. Anyway, let me know if this is helpful!

Photo by <a href="https://unsplash.com/@lazycreekimages?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Michael Dziedzic</a> on <a href="https://unsplash.com/s/photos/glitch?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  

