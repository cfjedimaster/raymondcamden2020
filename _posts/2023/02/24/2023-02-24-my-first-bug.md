---
layout: post
title: "My First Bug"
date: "2023-02-24T18:00:00"
categories: ["Development"]
tags: ["apple"]
banner_image: /images/banners/bug.jpg
permalink: /2023/02/24/my-first-bug
description: A story about the first bug I ran into, and how it ties into good documentation.
---

I've told this story a few times before, but I don't think I've actually ever shared it on my blog. My interest in and introduction to computers came at a very early age. My mother's employer sent her home with an Apple 2 (either the Plus or E model, I forget which), and while it was supposed to be for her, it also included a bunch of games, so I immediately became attached to it. At around the same time, I saw a movie that had a huge impact on me. No, not Star Wars, but instead, TRON. While I was pretty young, I definitely knew it was fiction, and working with computers wouldn't be quite that cool, but it really fired up my interest. I mean, just look at this...

<iframe width="560" height="315" src="https://www.youtube.com/embed/ymz3_GI7eMg" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen style="display:block;margin:auto;margin-bottom:15px"></iframe>

So at some point, I stopped playing the games (err, well, stopped playing the games _exclusively_) and took a stab at trying to learn to program. Applesoft BASIC was a simple language, and best of all, you could literally turn on your machine and immediately begin writing programs. It's hard to describe just how exciting that was - having a development environment as a default meant I spent a *heck* of a lot of time writing programs. Shoot, I'd sometimes write the same simple program multiple times just to see the result again. 

My manual was the Applesoft BASIC Programming Reference Manual:

<p>
<img data-src="https://static.raymondcamden.com/images/2023/02/apple1.jpg" alt="Cover of the BASIC manual" class="lazyload imgborder imgcenter">
</p>

This was a good manual, but I quickly ran into an issue, and by quickly I mean on page 2. Here's where I got stuck:

<p>
<img data-src="https://static.raymondcamden.com/images/2023/02/apple2.jpg" alt="Screenshot from page 2" class="lazyload imgborder imgcenter">
</p>

BASIC programs consist of lines of code preceded by line numbers. By default, execution will go from the lowest number to the highest, but basic jumping around was supported as well. The typical program would use line numbers counted by ten. This lets you "slip in" lines of code you may have forgotten. Never complain about writing code in Notepad again - this was truly old-school coding. (And to be fair, it was a hell of a lot better than using punch cards. I'm old, but not *that* old.) 

Anyway, I followed that text very carefully, and when I ran it, I got an error. Here it is recreated in the Windows [AppleWin](https://github.com/AppleWin/AppleWin) emulator:

<p>
<img data-src="https://static.raymondcamden.com/images/2023/02/apple3.jpg" alt="Error report, syntax error in 10" class="lazyload imgborder imgcenter">
</p>

I swear I looked at this for *hours* (most likely it was far less than that) and I just couldn't figure it out. I'd look at the manual, look at the screen, go back to the manual, and I just had no clue. 

Then... I went back to the manual, and read *past* the lines of code...

<p>
<img data-src="https://static.raymondcamden.com/images/2023/02/apple4.jpg" alt="Snippet from page, with last line highlighted" class="lazyload imgborder imgcenter">
</p>

See that highlighted line? Yeah, young Ray didn't notice it. I had entered the first line of code... and then used the spacebar to wrap the cursor to the next line. 

Dumb, right? Of course, with a few years of developer relations and technical writing experience, I look at that and immediately think I'd have moved that statement *above* the lines of code to make it more obvious. 

Getting it right gave me such a feeling of complete and utter joy. It's that feeling that has had me hooked on writing code. 

Luckily, I've not made that same dumb mistake since. I've made huge numbers of other, more unique dumb mistakes. I look forward to what I'll screw up next!

Photo by <a href="https://unsplash.com/@neringa_h_feld?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Neringa Hünnefeld</a> on <a href="https://unsplash.com/photos/szB0t0I1FLA?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  