---
layout: post
title: "Integrating Cloudinary into Eleventy"
date: "2022-10-20T18:00:00"
categories: ["development","jamstack"]
tags: ["javascript","eleventy","cloudinary"]
banner_image: /images/banners/photos.jpg
permalink: /2022/10/20/integrating-cloudinary-into-eleventy
description: A look at integrating Cloudinary image processing with Eleventy
---

I've had on my "to-do" list for *months* now to take a look at [Cloudinary](https://cloudinary.com/) and their media APIs. I got some time this week to play around with it and I wanted to share my experience. TLDR - it's freaking incredibly well done and surprisingly powerful. Here's what I found. 

Going into my research, I knew that they had APIs related to image (and other media) and made it simple to serve up different-sized images. So you could use one core, large, image as a way to serve multiple other versions better optimized for the web. I signed up for their free tier (you can find details on their [pricing page](https://cloudinary.com/pricing)) and began to poke around. 

I started in the [Image transformations](https://cloudinary.com/documentation/image_transformations) portion of the docs. Here's where I began to be really impressed. Given a core URL for an image hosted with them, you can apply a huge amount of different transformations. There's a bunch for crop and resize, of course, I expected that, what I didn't expect was the ability to do things like, "make a thumbnail of an image focused on a face". That's next-level awesome. Here's a practical example. 

This URL points to an original image (when you sign up with Cloudinary, they seed your media library with a bunch of samples:

https://res.cloudinary.com/raymondcamden/image/upload/v1666103328/samples/animals/cat.jpg

It's a large image so I won't render it as an image here, but you can copy the URL and view it in another tab. To apply a scale to it, you add in information in the URL before the `vXXXXX` part, like so (note - I've added a space to the following URLs so they wrap a bit nicer in the post):

https://res.cloudinary.com/raymondcamden/image/upload/ c_fit,w_200,h_200/v1666103328/samples/animals/cat.jpg

In this case, it's scaling to fit within a box 200x200. It's a scale, so the aspect ratio is kept. Here's the image:

![Scaled cat](https://res.cloudinary.com/raymondcamden/image/upload/c_fit,w_200,h_200/v1666103328/samples/animals/cat.jpg)

Along with size-based transformations, they have a bunch of [artistic ones](https://cloudinary.com/documentation/effects_and_artistic_enhancements) as well. Given the previous URL, I can add sepia by using `e_sepia`:

https://res.cloudinary.com/raymondcamden/image/upload/ c_fit,w_200,h_200,e_sepia/v1666103328/samples/animals/cat.jpg

![Sepia cat](https://res.cloudinary.com/raymondcamden/image/upload/c_fit,w_200,h_200,e_sepia/v1666103328/samples/animals/cat.jpg)

Finally, it's also easy to apply watermark images and text on an image. Here, I've added text with styling information:

https://res.cloudinary.com/raymondcamden/image/upload/ co_rgb:FF0000,l_text:Arial_120:Cat/fl_layer_apply/c_fit,w_400,h_400/v1666103328/samples/animals/cat.jpg

![Text cat](https://res.cloudinary.com/raymondcamden/image/upload/co_rgb:FF0000,l_text:Arial_120:Cat/fl_layer_apply/c_fit,w_400,h_400/v1666103328/samples/animals/cat.jpg)

If you want to play with these images (and why not, that cat is adorable), feel free to run this CodePen and play with the URLs yourself:

<p class="codepen" data-height="300" data-theme-id="dark" data-slug-hash="jOxjoLP" data-editable="true" data-user="cfjedimaster" style="height: 300px; box-sizing: border-box; display: flex; align-items: center; justify-content: center; border: 2px solid; margin: 1em 0; padding: 1em;">
  <span>See the Pen <a href="https://codepen.io/cfjedimaster/pen/jOxjoLP">
  Cloudinary</a> by Raymond Camden (<a href="https://codepen.io/cfjedimaster">@cfjedimaster</a>)
  on <a href="https://codepen.io">CodePen</a>.</span>
</p>
<script async src="https://cpwebassets.codepen.io/assets/embed/ei.js"></script>

All in all, fairly simple, and I only scratched the surface, but I figured at this point I knew enough to build a simple [Eleventy](https://www.11ty.dev/) demo. Now before I start, do note that there is both a [Netlify Cloudinary](https://www.netlify.com/integrations/cloudinary/) plugin as well as an [Eleventy Cloudinary](https://github.com/juanfernandes/eleventy-plugin-cloudinary) plugin. I wanted to try things out myself so I didn't use any of them. For my demo I wanted to accomplish the following:

* Use a directory of images as a source - ensuring that they all exist in my Cloudinary media library
* Generate Eleventy data for each image
* Include a URL for a thumbnail
* Include a URL for a version of the image that's sized reasonably for the web and has a 'copyright' notice watermark.

Here's how I built it.

I created a new Eleventy site, and in there, I created a folder called `photos` that included a bit over twenty different photos from my own personal collection.

<p>
<img data-src="https://static.raymondcamden.com/images/2022/10/cloud1.jpg" alt="Screenshot of my photos directory" class="lazyload imgborder imgcenter">
</p>

Next, I installed the [Node.js SDK](https://cloudinary.com/documentation/node_integration) for Cloudinary: `npm i cloudinary`. Once installed, I created a data file named `photos.js`. I began by configuring the Cloudinary object with my credentials:

```js
require('dotenv').config();
const fs = require('fs');

const cloudinary = require('cloudinary').v2;
cloudinary.config({ 
  cloud_name: process.env.CLOUDINARY_CLOUD_NAME, 
  api_key: process.env.CLOUDINARY_API_KEY, 
  api_secret: process.env.CLOUDINARY_API_SECRET,
  secure: true
});
```

Next, I specified my input directory:

```js
const IMG_DIR = './photos';
```

Then I defined my data to be returned to Eleventy:

```js
module.exports = async () => {

    let photos = [];

    const cloudinary_options = {
      use_filename: true,
      unique_filename: false,
      overwrite: false,
    };

    let files = fs.readdirSync(IMG_DIR);
    console.log(`Processing images, ${files.length} total`);
    for(let i=0; i<files.length; i++) {
        let file = IMG_DIR + '/' + files[i];

        // Should try/catch this.
        const result = await cloudinary.uploader.upload(file, cloudinary_options);
        //console.log(result);
        
        let newPhoto = {
            id: result.public_id,
            thumb:getThumb(result), 
            web:getWeb(result)
        }

        photos.push(newPhoto);

    };

    return photos;

}
```

From the top, I specify a set of options for uploading to Cloudinary, the important bit is the `overwrite` flag which *should* mean (more on that later) that it won't keep uploading images that were already stored. I loop over the images in my directory, and for each, run the `upload` method on them. I return an array of objects that consist of the ID of the image (a unique identifier) and the thumb and web versions of the URLs. 

For the functions that generate my thumb and web versions, I initially began writing code to manipulate the string. I figured that would be easy enough. But when I looked deeper into the Node SDK, I saw all of that was baked in! So for example, here's how I get the thumbnail URL:

```js
const getThumb = (img) => {
    return cloudinary.image(img.public_id, { width: "200", height: "200", crop: "fit" });
};
```

And here's how I get the web version that includes copyright text:

```js
const getWeb = (img) => {
    return cloudinary.image(img.public_id, { 
        width: "500", 
        transformation: [
            {overlay: {font_family: "Arial", font_size: 80, text: "Copyright Raymond Camden" }},
            {flags: "layer_apply"} 
        ]
    });
};
```

That second function is probably a bit more verbose than one string replace call, but it's a heck of a lot more readable. 

In use, I had 2 Eleventy templates. First, the list of thumbnails:

```html
---
layout: main
title: Photo Gallery
---

<style>
.photoList {
    display: grid;
    grid-template-columns: 25% 25% 25% 25%;
    justify-items: center;
}

.photoList img {
    padding: 10px;
}
</style>

<h2>Photos</h2>

<div class="photoList">{% raw %}
    {% for photo in photos %}
     <a href="/photos/{{ photo.id }}">{{ photo.thumb }}</a>
    {% endfor %}{% endraw %}
</div>
```

My Photos page makes use of pagination to create one HTML page per photo:

```html
{% raw %}---
layout: main
pagination:
    data: photos
    size: 1
    alias: photo
permalink: "photos/{{ photo.id }}/"
title: "Photo {{ photo.id }}"
---

<style>
.center_img {
    display: flex;
    justify-content: center;
}
</style>

<h2>Photo: {{ photo.id }}</h2>

<div class="center_img">
{{ photo.web }}
</div>
{% endraw %}
<p>
<a href="/">Home</a>
</p>
```

All in all, this took me maybe thirty minutes to write, not much time at all, and you can see the final result here: https://cloudinarytest1.netlify.app/

Note that the copyright watermark is rather small, although one could argue that makes it less obtrusive. Obviously, you can tweak that to your heart's content. If you want to play with the complete demo (you'll need your own Cloudinary credentials though), you can find it in my repo here: <https://github.com/cfjedimaster/eleventy-demos/tree/master/cloudinary1>

## Some Notes:

Right now the code works rather well, but the `photos.js` process is still oddly slow. It should *not* be uploading when the asset already exists, but I may have done something wrong. I wrote to support here: <https://support.cloudinary.com/hc/en-us/community/posts/8175120499602-Timing-issue-with-upload-and-overwrite-false>. It took about 20 seconds every time Eleventy reloaded, so if this isn't a bug, and it's just the nature of what Cloudinary needs to do to ensure it's uploaded assets, I'd probably add a bit of code to cache the array when working locally. 

You may notice that based on the URLs used in the web app, it would be possible for someone to get the original images. Not surprisingly, Cloudinary has a way to lock stuff down. I had a good conversation with Cloudinary evangelist [Colby Fayock](https://www.colbyfayock.com/) and he shared this resource for more information: [Media access control](https://cloudinary.com/documentation/control_access_to_media). That doc goes into detail on the multiple options you have available here and it would be absolutely possible to lock down the original assets as well as prevent people from generating their own versions of the assets with other dimensions. 

I should point out that Cloudinary has some pretty badass [video support](https://cloudinary.com/documentation/video_manipulation_and_delivery) as well. 

Let me know what you think as I'd love to see some real-world examples out there!