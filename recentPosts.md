---
layout: null
title: 
---

{% assign posts = collections.posts | reverse %}

{% for post in posts limit:5 %}
<li class="recent-item"><a href="{{ site.url }}{{ post.url }}">{{ post.data.title }}</a> <span>{{ post.date | date: "%B %e, %Y" }}</span></li>
{% endfor %}
