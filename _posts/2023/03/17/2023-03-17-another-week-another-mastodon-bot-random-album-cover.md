---
layout: post
title: "Another Week, Another Mastodon Bot - Random Album Cover"
date: "2023-03-17T18:00:00"
categories: ["serverless"]
tags: ["pipedream","mastodon"]
banner_image: /images/banners/albumcovers.jpg
permalink: /2023/03/17/another-week-another-mastodon-bot-random-album-cover
description: Using Pipedream and the Spotify API to share random album art.
---

Last September, I blogged about how I used the Spotify API and [Pipedream](https://pipedream.com) to discover new music: [Discover New Music with the Spotify API and Pipedream](https://www.raymondcamden.com/2022/09/13/discover-new-music-with-the-spotify-api-and-pipedream). I used a Pipedream workflow to select a random track from Spotify and email me a track every morning. I've still got this process running and I enjoy seeing it every morning. More recently, I noticed a cool bit of album art in my Spotify client and it occurred to me that it would be kind of cool to see more. With that in mind, I present to you my latest Mastodon bot, [Random Album Cover](https://botsin.space/@randomalbumcover). You can see an example toot here:

{% capture "lasttoot_rac" %}
{% lasttoot "botsin.space", "randomalbumcover" %}
{% endcapture %}

{% stoot "botsin.space", lasttoot_rac %}

I have no idea what you'll see when viewing this post as it will be generated during a build, but I'm looking at a striking album cover from an artist I've never heard of, NLE Choppa. So, how was it built?

For the most part, it follows the logic of my [previous post](https://www.raymondcamden.com/2022/09/13/discover-new-music-with-the-spotify-api-and-pipedream), doing the following:

* Select a random letter
* Randomly decide to make it the beginning of a search string ("A something") or in the middle ("something A something")
* Select a random number between 0 and 1000
* Hit the Spotify API. Their API doesn't have a "real" random search, but we use the random letter and offset to search.
* Given our set of results, select a random record from that.

All of the above hasn't changed from the previous post, except I switched the search from `track` to `album`. Next, I download the image to a temporary directory. This is straight from the Pipedream samples:

```js
import stream from "stream";
import { promisify } from "util";
import fs from "fs";
import got from "got";

export default defineComponent({
  async run({ steps, $ }) {

    const pipeline = promisify(stream.pipeline);
    return await pipeline(
      got.stream(steps.select_random_album.$return_value.images[0].url),
      fs.createWriteStream('/tmp/cover.jpg')
    );

  },
})
```

And then I post the toot. This code is pretty short as it makes use of the excellent [mastodon-api](https://www.npmjs.com/package/mastodon-api) package. My only real work is crafting the text to go along with the image.

```js
import Mastodon from 'mastodon-api'
import fs from 'fs'


export default defineComponent({
  async run({ steps, $ }) {

    const M = new Mastodon({
      access_token: process.env.RANDOMALBUMCOVER_MASTODON,
      api_url: 'https://botsin.space/api/v1/', 
    });

  let artists = steps.select_random_album.$return_value.artists.reduce((cur, art) => {
    if(cur == '') return art.name;
    return cur + ', ' + art.name
  },'');

  let toot = `
Album:     ${steps.select_random_album.$return_value.name} (${steps.select_random_album.$return_value.external_urls.spotify})
Artist(s): ${artists}
Released:  ${steps.select_random_album.$return_value.release_date}
  `.trim()

  let resp = await M.post('media', { file: fs.createReadStream('/tmp/cover.jpg') });
  await M.post('statuses', { 
        status: toot,
        media_ids: [resp.data.id] 
    });


  },
})
```

I just want to go on record as saying that this is like the third or fourth time I've used `reduce` without checking the docs and I'm definitely a JavaScript expert now. Definitely. 

I'll point out that I spent maybe thirty minutes total on this. The longest wait for was the Mastodon instance to approve my bot (maybe 1.5 hours). I also spent more than a few minutes wondering why my Python code wasn't running in a Node step, so maybe I'm not an expert. Maybe. 

If you want to check out the complete workflow, you can do so here: <https://pipedream.com/new?h=tch_m5ofq7>

