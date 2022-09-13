---
layout: post
title: "Discover New Music with the Spotify API and Pipedream"
date: "2022-09-13T18:00:00"
categories: ["serverless"]
tags: ["pipedream"]
banner_image: /images/banners/record.jpg
permalink: /2022/09/13/discover-new-music-with-the-spotify-api-and-pipedream
description: An example of using Spotify's APIs on Pipedream to discover new music.
---

Frequent readers here will know I'm somewhat fascinated by randomness. As a few examples, I've built demos that rely on generated text: [@TBSHoroscope](https://twitter.com/tbshoroscope) and [@MonsterConflict](https://twitter.com/MonsterConflict). I've also built demos that randomly select from an existing data set, including [@RandomComicBook](https://twitter.com/randomcomicbook) and [@NPSBot](https://twitter.com/npsbot). All of these accounts make me smile when I see them show up in my timeline, and they've been informative as well. The @RandomComicBook account has really surprised me with how much art styles have changed at Marvel over the decades as well as just how old some characters are. 

I'm a huge [Spotify](https://spotify.com) fan, and one of my favorite features is asking it to play one song and then seeing how Spotify riffs off it and plays similar music. This got me thinking about using Spotify's APIs to *really* riff by getting a completely random track. While I have genres I prefer, I love music in general and would be willing to give anything a shot once. With that in mind, I've built a [Pipedream](https://pipedream.com) workflow that emails me one random track every morning. 

So far I've gotten:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/09/music1.jpg" alt="Slipknot" class="lazyload imgborder imgcenter">
</p>

I've heard of Slipknot before but have never actually listened to any of their music. Guess what - I don't like em! But I really did enjoy playing the track (and a few others afterward).

<p>
<img data-src="https://static.raymondcamden.com/images/2022/09/music2.jpg" alt="Lil Uzi Vert" class="lazyload imgborder imgcenter">
</p>

I've heard of Pharrell, but not Lil Uzi Vert. Again, not my primary style, but I liked this one better than the Slipknot track.

<p>
<img data-src="https://static.raymondcamden.com/images/2022/09/music3.jpg" alt="Barry Gray" class="lazyload imgborder imgcenter">
</p>

And in a completely different vein, a track with multiple composers. I've heard of Hans ZImmer and Ramin Djawadi before, but not the others. This was my favorite of the bunch. 

So how was it built?

## Getting a Random Spotify Track 

Spotify has a [rich developer ecosystem](https://developer.spotify.com/). I first covered it back in February ([Testing out the new Pipedream to Get Trance Releases](https://www.raymondcamden.com/2022/02/22/testing-out-the-new-pipedream-to-get-trance-releases)) and I was impressed by how easy it was to use. Unfortunately, there is no API to get a random track. However, I came across a great tutorial on how to fake it: [Getting random tracks using the Spotify API.](https://perryjanssen.medium.com/getting-random-tracks-using-the-spotify-api-61889b0c0c27)

His technique basically comes down to using random search strings and random offsets. His method worked, except that at the time of publication, Spotify allowed an offset of up to ten thousand. Currently, the max is one thousand instead. I decided to build my version on Pipedream and make use of Python as much as possible.

I began with a step that generated a random search string. This is done by selecting a random letter (a-z, technically a-zA-Z) and then returning it with either a percent sign at the end, or in front and at the end. Here's the Python I used:


```python
def handler(pd: "pipedream"):
  
  # Credit: https://stackoverflow.com/a/2823331/52160
  import random
  import string
  
  letter = random.choice(string.ascii_letters).lower()

  if(random.choice([True,False])):
    search = letter + '%'
  else:
    search = '%' + letter + '%'

  return search
```

Next, I selected an offset:

```python
def handler(pd: "pipedream"):
  import random

  return random.randint(0,1000)
```

By the way, I have both of the above Python scripts in unique steps, nicely named (`create_search_string` and `select_offeset`). When working with Pipedream, I try to make each step as unique and atomic as possible. Pipedream doesn't care if I do two or more things in one step, but I feel like it's better architected this way. 

The next step is to perform a search against Spotify. I added a new Spotify step and used Python to hit the API with my random search and offset:

```python
import requests

def handler(pd: "pipedream"):
  token = f'{pd.inputs["spotify"]["$auth"]["oauth_access_token"]}'
  authorization = f'Bearer {token}'
  headers = {"Authorization": authorization}

  params = {
    "type":"track",
    "q": pd.steps["create_search_string"]["$return_value"],
    "offset":pd.steps["select_offset"]["$return_value"]
  }

  r = requests.get('https://api.spotify.com/v1/search', params=params, headers=headers)
  return r.json()
```

The important bit is the `params` block where I access the earlier steps. The result of this is a 'page' of tracks based on the search, an array. Here's how that's rendered in Pipedream:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/09/music4.jpg" alt="Result of API call" class="lazyload imgborder imgcenter">
</p>

All we need to do now is get a random track from that step. While building this, [Zalman Lew](https://twitter.com/zalmanlew) on the Pipedream Slack let me know there's actually a Pipedream step built in that lets you point to an array of data and have a random one returned. So while I could have done it in a few lines of Python, I went with the built-in step:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/09/music5.jpg" alt="" class="lazyload imgborder imgcenter">
</p>

At this point, I've got a randomly selected track value I can use. How did I use it?

## Send the Email

I decided to keep it simple and have Pipedream send me an email. You saw the screenshots above and yes, it could certainly look nicer. I first created a Python step to generate an HTML email string:

```python
def handler(pd: "pipedream"):

  track = pd.steps["select_random_track"]["$return_value"]
  print(track["external_urls"]["spotify"])
  artists = ""
  for artist in track["artists"]:
      if artists == "":
        artists = artist["name"]
      else:
        artists = artists + ", " + artist["name"]

  html = f"""
  <a href="{ track["external_urls"]["spotify"] }"><img src="{ track["album"]["images"][1]["url"] }"></a>
  <h2>Your Random Spotify Track</h2>
  <p>
  Your random Spotify track for today is <strong>{track["name"]}</strong> by
  {artists}. It appears on the album "{ track["album"]["name"] }" released on 
  { track["album"]["release_date"]}.

  Listen to it here: { track["external_urls"]["spotify"] }

  """

  return html
```

Spotify's API returns *a lot* of information about the track, but I figured the title, artists, and album cover was enough. With my HTML string complete, I then just added a built-in Pipedream "send the account owner an email" step, and as always, I used the HTML value for the text value, and as I always say, don't do this in production, but for my testing, it worked fine. 

Unfortunately, you still can't publicly share Pipedream V2 workflows, but if you want to see more of the workflow, feel free to reach out directly. Let me know if you've got any questions!

Photo by <a href="https://unsplash.com/@adkorte?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Adrian Korte</a> on <a href="https://unsplash.com/s/photos/music?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  