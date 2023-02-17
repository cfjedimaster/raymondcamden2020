---
layout: page
title: My Bots
description: My various Mastodon bots
body_class: page-template
---

<p>
I've been enjoying building bots for Mastodon (via <a href="https://pipedream.com">Pipedream</a>) and therefore 
I built this page to help me actually remember what I've built. For each of the bots you'll see their 
most recent toot at the time I built the site. Just click on the username to follow or see more.
</p>


{% capture "lasttoot_rcb" %}
{% lasttoot "botsin.space", "randomcomicbook" %}
{% endcapture %}

{% stoot "botsin.space", lasttoot_rcb %}

{% capture "lasttoot_sjc" %}
{% lasttoot "botsin.space", "superjoycat" %}
{% endcapture %}

{% stoot "botsin.space", lasttoot_sjc %}

{% capture "lasttoot_fra" %}
{% lasttoot "botsin.space", "rulesofacquisition" %}
{% endcapture %}

{% stoot "botsin.space", lasttoot_fra %}

{% capture "lasttoot_tbs" %}
{% lasttoot "botsin.space", "tbshoroscope" %}
{% endcapture %}

{% stoot "botsin.space", lasttoot_tbs %}

{% capture "lasttoot_tdh" %}
{% lasttoot "botsin.space", "thisdayinhistory" %}
{% endcapture %}

{% stoot "botsin.space", lasttoot_tdh %}