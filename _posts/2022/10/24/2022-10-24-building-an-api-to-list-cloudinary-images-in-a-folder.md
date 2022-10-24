---
layout: post
title: "Building an API to List Cloudinary Images in a Folder"
date: "2022-10-24T18:00:00"
categories: ["development"]
tags: ["javascript","pipedream","cloudinary"]
banner_image: /images/banners/folders.jpg
permalink: /2022/10/24/building-an-api-to-list-cloudinary-images-in-a-folder
description: How I built a simple API version of a Cloudinary folder
---

I was preparing to work on a Cloudinary and Apline post when I realized I needed something before I could build that demo - a list of images in a [Cloudinary](https://cloudinary.com/) folder. While this is directly supported by their SDKs and REST APIs, I needed something that could be used in a public-facing web application. So with that in mind, I turned to [Pipedream](https://pipedream.com) to build a serverless endpoint. Here's how I did it.

Before I start talking about code, I began by logging into my Cloudinary account, going into my Media Library, and creating a new folder named `cats`. In there, I dragged and dropped a few cat pictures from my personal collection. (Do not ask how many of these I have.)

<p>
<img data-src="https://static.raymondcamden.com/images/2022/10/cp1.jpg" alt="Screen shot of Cloudinary Media Library cats folder" class="lazyload imgborder imgcenter">
</p>

In Pipedream, I created a new workflow with the HTTP trigger. I've talked about Pipedream [quite a bit](https://www.raymondcamden.com/tags/pipedream) here, but for those unfamiliar with the service, this is their way of creating a workflow that's executed by an incoming HTTP request. 

Because I like my workflows to be as flexible as possible, I specified an "Export Variables" step which is a simple way to define key/value pairs in your workflow. In my case, I defined a key of `folder` with the value, `cats`. 

<p>
<img data-src="https://static.raymondcamden.com/images/2022/10/cp2.jpg" alt="Export variables step defining my folder" class="lazyload imgborder imgcenter">
</p>

Now I need to get my images from the folder. I began by seeing what Pipedream had in terms of Cloudinary support. I added a step and searched for Cloudinary, and of course, they had stuff!

<p>
<img data-src="https://static.raymondcamden.com/images/2022/10/cp3.jpg" alt="Cloudinary support in Pipedream" class="lazyload imgborder imgcenter">
</p>

Unfortunately, none of the built-in actions supported getting a list of images from a folder:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/10/cp4.jpg" alt="List of actions supported for Cloudinary in Pipedream" class="lazyload imgborder imgcenter">
</p>

Fortunately, and as with other services, you can write custom Node/Python code as seen in the screenshot above. I've mentioned this before, but the beauty of this is that Pipedream handles authentication for you (once you log in of course):

<p>
<img data-src="https://static.raymondcamden.com/images/2022/10/cp5.jpg" alt="Custom Cloudinary code" class="lazyload imgborder imgcenter">
</p>

Ok, so while I don't have to worry about authentication (which to be honest, their SDK makes incredibly easy anyway), I did have to dig a bit to find out how to list images from a folder. Turns out, there are multiple ways documented on Cloudinary's support site in this useful article: [Listing all assets within a folder](https://support.cloudinary.com/hc/en-us/articles/202521082-Listing-all-assets-within-a-folder)

For me, it came down to a URL of the form:

https://api.cloudinary.com/v1_1/MYCLOUDNAME/resources/image?max_results=50&prefix=MYFOLDER&type=upload

Notice I've specified a max result of 50. I didn't check, but I know there's a cap on how high that value can get, so I'll warn folks that my solution may need tweaking if you need to support repeating calls to handle paging. Anyway, here's the Python code I used - which was very slightly modified from Pipedream's default code:

```python
import requests

def handler(pd: "pipedream"):
  folder = pd.steps["set_folder"]["config"]["folder"]

  r = requests.get(f'https://api.cloudinary.com/v1_1/{pd.inputs["cloudinary"]["$auth"]["cloud_name"]}/resources/image?max_results=50&prefix={folder}&type=upload', auth=(f'{pd.inputs["cloudinary"]["$auth"]["api_key"]}', f'{pd.inputs["cloudinary"]["$auth"]["api_secret"]}'))
  # Export the data for use in future steps
  return r.json()
```

Cool. So at this point, I could have just returned my data, but I realized that there was a lot of information there that I didn't need, and maybe shouldn't be public. I added another Python step just to transform my results. This was my first time using a Python lambda and the map function. 

```python
def handler(pd: "pipedream"):
  # Reference data from previous steps

  result = map(lambda p: {"url":p["url"], "width":p["width"], "height":p["height"]},  pd.steps["cloudinary_get_cats"]["$return_value"]["resources"])
  return list(result)
```

I decided to return the URL, height, and width. I figured that was enough. 

Finally, I needed to return the result. I had to switch back to Node as it's not possible to return a custom HTTP response in Pipedream's Python support. (Not yet anyway.)

```js
export default defineComponent({
  async run({ steps, $ }) {

    await $.respond({
      status: 200,
      headers: { "Content-Type": "application/json" },
      body: { pictures: steps.transform_result.$return_value }, 
    });

  },
})
```

And that's it. You can see the output here: <https://eoghaym28jbb0zf.m.pipedream.net/>. 

As a reminder, the modern version of Pipedream's workflow editor is still working on supporting sharing. 
You can create a copy of my workflow here: <https://pipedream.com/new?h=tch_ORVf6y>, but note that you will need to click "Add App" in the `cloudinary_get_cats` section to add a Cloudinary connection. 

P.S. As a completely unnecessary aside, I struggled a bit with whether or not I should return just the array of images or the object of an array as I did. On one hand, it feels silly to have an object with one key being the result - just return the value. On the other hand... it just feels... "more right" I suppose, to return it as an object. This is totally not important in regard to what I was doing, but just thought I'd share. ;)

Photo by <a href="https://unsplash.com/@viktortalashuk?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Viktor Talashuk</a> on <a href="https://unsplash.com/s/photos/folders?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  