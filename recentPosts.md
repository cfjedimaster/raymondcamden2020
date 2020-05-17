---
layout: null
title: 
---

{% assign posts = collections.posts | reverse %}

<section class="widget widget-recent-posts">
<h2 class="widget-title">Latest Posts</h2>
<ul class="recent-posts" id="recent-posts">
	{% for post in posts limit:5 %}
<li class="recent-item"><a href="{{ site.url }}{{ post.url }}">{{ post.data.title }}</a> <span>{{ post.date | date: "%B %e, %Y" }}</span></li>
	{% endfor %}
</ul>
</section>

{% if popularposts %}
<section class="widget widget-recent-posts">
<h2 class="widget-title">Popular Posts</h2>
<ul class="recent-posts">
	{% for post in popularposts limit:5 %}
		{% assign postData = post.path | toTitle: collections.posts %}
		{% if postData.title != "" %}
<li class="recent-item"><a href="{{ site.url }}{{ post.path }}">{{ postData.title }}</a> <span> {{ postData.date | date: "%B %e, %Y" }}</span></li>
		{% endif %}
	{% endfor %}
</ul>
</section>
{% endif %}
