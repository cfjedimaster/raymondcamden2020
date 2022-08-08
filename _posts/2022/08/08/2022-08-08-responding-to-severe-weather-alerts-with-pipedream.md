---
layout: post
title: "Responding to Severe Weather Alerts with Pipedream"
date: "2022-08-08T18:00:00"
categories: ["serverless"]
tags: ["pipedream"]
banner_image: /images/banners/storm.jpg
permalink: /2022/08/08/responding-to-severe-weather-alerts-with-pipedream
description: Using a severe weather alert to fire off custom workflows with Pipedream
---

A few months ago I wrote about a (possibly) useless example of custom events in [Pipedream](https://pipedream.com), ["Kicking Off a Pipedream Workflow on a Full Moon (Because Why Not?)"](https://www.raymondcamden.com/2022/05/16/kicking-off-a-pipedream-workflow-on-a-full-moon-because-why-not). While not terribly practical, the article demonstrated one of the cooler features of Pipedream, the ability to create workflows on *any* particular piece of logic. In the case of that article, I defined a custom "event source" (what Pipedream calls a way to begin a workflow) based on a daily check on the current moon phase. Today I'm sharing another example of this feature, possibly quite a bit more useful - severe weather alerts.

I'm doing a bit of research into Microsoft's mapping solutions, and while I was looking at the docs, I discovered their [Severe Weather Alerts API](https://docs.microsoft.com/en-us/rest/api/maps/weather/get-severe-weather-alerts?tabs=HTTP). As you can imagine, given a location, it will return information about any possible severe weather in the area. If there aren't any, it simply returns an empty array. Here's an example (taken from Microsoft's docs) of how this could look:


```json
{
  "results": [
    {
      "countryCode": "CA",
      "alertId": 242621,
      "description": {
        "localized": "Heat Warning",
        "english": "Heat Warning"
      },
      "category": "NON-PRECIPITATION",
      "priority": 31,
      "source": "Environment Canada",
      "sourceId": 3,
      "alertAreas": [
        {
          "name": "Kirkland Lake - Englehart",
          "summary": "Heat Warning in effect until Thursday, 3:16 AM EDT.  Source: Environment Canada",
          "startTime": "2020-06-29T19:44:00+00:00",
          "endTime": "2020-07-02T07:16:03+00:00",
          "latestStatus": {
            "localized": "Continue",
            "english": "Continue"
          },
          "alertDetails": "\nA heat event continues through Thursday.\n\nDaytime high temperatures in the low thirties with overnight lows near 18 degrees Celsius are expected to continue until Thursday. Humidex values are expected to reach between 36 and 40 today. Cooler air will move into the region Thursday night. \n\nPlease refer to your public forecast for further details on expected temperatures.\n\nHot and humid air can also bring deteriorating air quality and can result in the air quality health index to approach the high risk category.\n\n###\n\nExtreme heat affects everyone.\n\nThe risks are greater for young children, pregnant women, older adults, people with chronic illnesses and people working or exercising outdoors.\n\nWatch for the effects of heat illness: swelling, rash, cramps, fainting, heat exhaustion, heat stroke and the worsening of some health conditions.\n\nPlease continue to monitor alerts and forecasts issued by Environment Canada. To report severe weather, send an email to ONstorm@canada.ca or tweet reports using #ONStorm.\n",
          "alertDetailsLanguageCode": "en-CA"
        }
      ]
    },
    {
      "countryCode": "CA",
      "alertId": 242633,
      "description": {
        "localized": "Heat Warning",
        "english": "Heat Warning"
      },
      "category": "NON-PRECIPITATION",
      "priority": 31,
      "source": "Environment Canada",
      "sourceId": 3,
      "alertAreas": [
        {
          "name": "Kirkland Lake - Englehart",
          "summary": "Heat Warning in effect until 9:25 PM EDT.  Source: Environment Canada",
          "startTime": "2020-07-01T09:25:59+00:00",
          "endTime": "2020-07-02T01:25:59+00:00",
          "latestStatus": {
            "localized": "New",
            "english": "New"
          },
          "alertDetails": "\nA heat event is expected through Thursday.  \n\nDaytime high temperatures in the low thirties on Wednesday and Thursday with overnight lows near 18 degrees Celsius are expected. This heat event may be extended into the weekend with daytime high temperatures near 30 degrees Celsius. \n\nPlease refer to your public forecast for further details on expected temperatures.  \n\nHot and humid air can also bring deteriorating air quality and can result in the Air Quality Health Index to approach the high risk category.\n\n###\n\nExtreme heat affects everyone.\n\nThe risks are greater for young children, pregnant women, older adults, people with chronic illnesses and people working or exercising outdoors.\n\nPlease continue to monitor alerts and forecasts issued by Environment Canada. To report severe weather, send an email to ONstorm@canada.ca or tweet reports using #ONStorm.\n",
          "alertDetailsLanguageCode": "en-CA"
        }
      ]
    }
  ]
}
```

In this example, two different alerts were returned for the same area. Calling the API is relatively simple. Given that you have a key, the endpoint looks like so:

```
https://atlas.microsoft.com/weather/severe/alerts/json?api-version=1.1&query=48.057,-81.091&subscription-key=X
```

Location is in longitude,latitude format and is passed to the `query` value. The only other optional arguments supported are to truncate the results or change the language. So given how easy it is to use the API, how do we use it as a Pipedream event source? 

I began by creating a file, `severeweather.js`, and used the format required for an event source. You can find this [documented](https://pipedream.com/docs/components/quickstart/nodejs/sources/#quickstart-examples) on the Pipedream site, but at a minimum, it looks like so:

```js
export default {
  name: "Source Demo",
  description: "This is a demo source",
  async run() {
    this.$emit({ message: "hello world!" });
  },
};
```

Basically - metadata and code. The `$emit` part is what creates an event and what would be used to fire off workflows. The Pipedream CLI can then be used to publish the code to your account. Here's how my event source is built:

```js
import fetch from "node-fetch";

export default {
  name: "Severe Weather",
  description: "I emit when a severe weather event is active in an area.",
  props: {
    timer: {
        type:"$.interface.timer",
        default: {
            intervalSeconds:60 * 60
        }
    },
    azureMapsKey: {
        type:"string",
        label:"Azure Maps Key",
        description:"Required - get it via the Azure Portal"
    },
    location: {
        type:"string",
        label:"Location",
        description:"Location in longitude,latitude format"
    },
  },
  dedupe: "unique", 
  async run() {
    let url = `https://atlas.microsoft.com/weather/severe/alerts/json?api-version=1.0&query=${this.location}&subscription-key=${this.azureMapsKey}`;
    let req = await fetch(url);
    let data = await req.json();
    data.results.forEach(r => {
        this.$emit(r, { id: r.alertId, summary: r.description.english });
    });
  },
};
```

Let's take it from the top. The `name` and `description` fields simply describe the source. The `props` section define the properties for the source, specifically the fact that it's based on a schedule (in this example, once an hour), and that it requires two unique values, an Azure Maps key, and a location. 

It's important to note that these properties will be unique per instance of the event source. So this code would be used in different workflows with different values. 

Let's skip `dedupe` for a bit and look at the `run` block. I use `node-fetch` to hit the Azure Severe Weather endpoint and fetch the results. For each alert, I want to emit it as a different event. However, it's possible an alert could be older than an hour and my event may fire more than once for one specific alert. Pipedream makes this easy to fix by using a `dedupe` strategy. When I specified `unique`, I was then responsible for creating a primary key for each event. You can see this in the second argument to `this.$emit`. I also add the optional `summary` value to describe the event. But the cool part is - I don't have to do anything else to enforce uniqueness. Pipedream itself will suppress any alert that was already emitted. 

When I deployed this via the command line, it prompted me for my two values, and then simply created the configured source and made it available. So for example, I could create a new workflow, and look for it as a source:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/sw1.jpg" alt="Severe Weather alert source" class="lazyload imgborder imgcenter">
</p>

At this point, you can do anything imaginable with the source. You could send an SMS message. You can send a notification to a device. You could email a listserv of people who may be in the area as a warning. As the simplest example, I created a workflow that simply sent me an email. I added a Python step that took the alert (notice I said alert, not alerts, my event source is going to fire one time for each unique alert) and created a string appropriate for email:

```python
from pipedream.script_helpers import (steps, export)

html = """
<h2>Severe Weather Alert</h2>
"""

html = html + f"""
<p>
A severe weather alert has been created for {steps['trigger']['event']['alertAreas'][0]['name']}.
</p>
<p>
Alert: <strong>{steps['trigger']['event']['description']['english']}</strong><br/>
Summary: {steps['trigger']['event']['alertAreas'][0]['summary']}
</p>

<p>
<pre>
{steps['trigger']['event']['alertAreas'][0]['alertDetails']}
</pre>
</p>
"""


# Return data for use in future steps
export("html", html)
```

And then this was passed to an email step. Pipedream has a "send an email to the owner" step that is super easy to use but note that if I wanted more fine-grained control, I could easily use something like Sendgrid instead. Here's how that configured step looks:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/sw2.jpg" alt="Configured email step" class="lazyload imgborder imgcenter">
</p>

As a quick note, I'm using the same value for plain text and HTML emails, which isn't good, but as I know I'm the person getting the email and my email client supports HTML, I don't worry about it. 

I did a quick test where I used [Accuweather](https://www.accuweather.com/en/us/severe-weather)'s severe weather page to find active events. Here's an example of the email I got:

<p>
<img data-src="https://static.raymondcamden.com/images/2022/08/sw3.jpg" alt="Example email" class="lazyload imgborder imgcenter">
</p>

As always, if any of this doesn't make sense, just let me know!

Photo by <a href="https://unsplash.com/@paniscusbcn?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Josep Castells</a> on <a href="https://unsplash.com/s/photos/storm?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  