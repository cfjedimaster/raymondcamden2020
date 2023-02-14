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

<style>
.toot-header {
    display: flex;
}

.toot-header .toot-profile {
    margin-right: .5em;
    margin-bottom: 1em;
    flex-shrink: 0;
}

.toot-header .toot-author {
    display: flex;
    flex-direction: column;
    flex-grow: 1;
}

.toot-blockquote p {
    margin-top: 0;
    margin-bottom: 1em;
    line-height: 1.35em;
}

.toot-blockquote a:hover {
    color: #6a512c;
    text-decoration: underline;
}

.toot-footer {
    margin-top: 1rem;
    display: flex;
    align-items: center;
    font-size: 0.875rem;
}

blockquote.toot-blockquote:before {
	content: none;
}

blockquote.toot-blockquote {
    border: 2px solid #e5e7eb;
    color: hsl(0, 0%, 100%);
    background: #1d1d1d;
	width: 85%;
	font-size: 1rem;

    margin-right: 0;
    margin-left: 0;
    padding-left: 1.5em;
	padding-right: 1.5em;
	padding-bottom: 1em;
	line-height: 1;
	text-align: left;

    font-family: "Karla", sans-serif;
}

.toot-profile img {
    border-radius: 9999px;
    width: 48px;
    height: auto;
}
</style>


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