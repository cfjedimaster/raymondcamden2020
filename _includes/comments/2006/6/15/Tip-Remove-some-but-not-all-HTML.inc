
<div class="comment" id="c_1713654212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654212">1</a> by Nathan D
		posted on 6/15/2006 at 8:04 PM
		</div>
		<div class="comment_text"><p>Be sure to see the comment there about REReplaceNoCase on the "events" strip (though, I don't understand the rest of the comment above that)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654201">2</a> by Evert
		posted on 6/16/2006 at 1:23 AM
		</div>
		<div class="comment_text"><p>It shouldn't be called safe though, it still allows XSS through the style attribute</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654211">3</a> by Raymond Camden
		posted on 6/16/2006 at 1:36 AM
		</div>
		<div class="comment_text"><p>COuld you not add style to the list of JS events?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654213">4</a> by Cedric Villat
		posted on 6/16/2006 at 1:59 AM
		</div>
		<div class="comment_text"><p>There is also a nifty tag called StripTags which allows you to specify which tags to allow or disallow. I use this all the time, since I can choose exactly which tags I want to keep, or remove. It is on cflib.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654214">5</a> by Jeff Anderson
		posted on 6/16/2006 at 8:14 AM
		</div>
		<div class="comment_text"><p>for those who are interested in removing "nasty" tags, CF7 admin has a setting to enable cross-site scripting attack prevention already built in. it runs a regular expression and replaces object, embed, script, applet, and meta tags with "&lt;invalidtag&gt;"</p></div>
	</div>
</div>
		