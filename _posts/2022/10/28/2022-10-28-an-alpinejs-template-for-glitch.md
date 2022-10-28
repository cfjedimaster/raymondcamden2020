---
layout: post
title: "An Alpine.js Template for Glitch"
date: "2022-10-28T18:00:00"
categories: ["development"]
tags: ["javascript","alpinejs"]
banner_image: /images/banners/teal_mountains.jpg
permalink: /2022/10/28/an-alpinejs-template-for-glitch
description: A quick look at using Alpine with Glitch
---

I discovered [Glitch](https://glitch.com/) a few months ago, and while I haven't used it a *lot* since then, the more I do, the more I really dig it. When working on my [blog post](https://www.raymondcamden.com/2022/10/27/using-cloudinary-with-alpinejs) yesterday, I shared the demo as a Glitch project, you can see it [here](https://glitch.com/edit/#!/ancient-tall-mustard) if you would like. While setting up the project, I fumbled a bit with the right order of script tags, which was entirely my fault, but knowing my memory I wanted to note what worked for me, and share it with others. Let's start with the code first. 

Here's an incredibly basic HTML page that loads up Alpine, a style sheet, and a JavaScript file:

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1" />
    <link rel="icon" href="https://glitch.com/favicon.ico" />
    <title></title>

    <link rel="canonical" href="" />
    <link rel="stylesheet" href="/style.css" />
  </head>
  <body>

    <div x-data="app" x-cloak>
    </div>

    <script src="/script.js" defer></script>
    <script defer src="https://unpkg.com/alpinejs@3.x.x/dist/cdn.min.js"></script>
  </body>
</html>
```

I pretty consistently use `app` for my Alpine applications, but certainly, you can name it a bit better. My style sheet only contains the `x-cloak` definition:

```css
[x-cloak] { display: none !important; }
```

And here's `script.js`:

```js
document.addEventListener('alpine:init', () => {
  
  Alpine.data('app', () => ({
    async init() {
    }
  }))
  
});
```

When I write Alpine, I don't like including code in the HTML, so I do everything inside an `alpine:init` block. I also almost always use the `init` method, so I've got an empty one there. 

Finally, and I forgot this part when I published the blog post a few minutes ago, I added an `.eslintrc.json` file so that the Glitch editor wouldn't complain about the `Alpine` global:

```json
{
  "globals": {
    "Apline": "readonly"
  },
  "parserOptions": {
    "ecmaVersion": "latest"
  },
  "env": {
    "es6": true
  }
}
```

Cool. So how do you use this? You could copy and paste, but Glitch makes this easier. Click `New Project` in the upper right-hand UI:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/10/g1.jpg" alt="Glitch new project menu" class="lazyload imgborder imgcenter">
</p>

And select `Import from GitHub`. In the prompt, enter the repo I created for my template: <https://github.com/cfjedimaster/glitch-alpine>

I didn't include a README in there because it would just be something you would have to remove or edit in your project. All in all, it's pretty minimal, which honestly is what I prefer when starting new projects. Anyway, enjoy!

Photo by <a href="https://unsplash.com/@danielleone?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Daniel Leone</a> on <a href="https://unsplash.com/s/photos/mountain?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>