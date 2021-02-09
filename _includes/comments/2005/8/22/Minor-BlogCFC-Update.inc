
<div class="comment" id="c_1713620164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620164">1</a> by Mark Ireland
		posted on 8/25/2005 at 12:03 PM
		</div>
		<div class="comment_text"><p>Try as I might I am unable to make this simple change. I want this:</p><p>&lt;code&gt;&lt;body&gt;</p><p>&lt;table width="800"&gt;</p><p>&lt;tr valign="top"&gt;<br>	&lt;td colspan=2&gt;&lt;div id="banner"&gt;Mark Ireland's Blog&lt;/div&gt;&lt;/td&gt;<br>&lt;/tr&gt;<br>&lt;tr valign="top"&gt;<br>	&lt;td width="600"&gt;</p><p>	&lt;div id="content"&gt;</p><p>		&lt;div id="blogText"&gt;&lt;/code&gt;</p><p>to be this:</p><p>&lt;code&gt;&lt;body&gt;</p><p>&lt;table width="100%"&gt;</p><p>&lt;tr valign="top"&gt;<br>	&lt;td colspan=2&gt;&lt;div id="banner"&gt;Mark Ireland's Blog&lt;/div&gt;&lt;/td&gt;<br>&lt;/tr&gt;<br>&lt;tr valign="top"&gt;<br>	&lt;td&gt;</p><p>	&lt;div id="content"&gt;</p><p>		&lt;div id="blogText"&gt;&lt;/code&gt;</p><p>I guess I dont get how scopeChache works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620171">2</a> by Raymond Camden
		posted on 8/25/2005 at 6:16 PM
		</div>
		<div class="comment_text"><p>By default, BlogCFC will cache the layout of your site. To force the cache to go away, you can either add ?reinit=1 to the URL, or enable design mode by logging in. When you are logged in, cache is disabled.</p></div>
	</div>
</div>
		