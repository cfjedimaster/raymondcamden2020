
<div class="comment" id="c_1713736823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736823">1</a> by Patrick Heppler
		posted on 11/15/2011 at 1:36 PM
		</div>
		<div class="comment_text"><p>I didn't expect this, too. Docs say: a security prefix in front of the value that a ColdFusion function returns in JSON-format in response to a remote call</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736818">2</a> by Gregory Marthews
		posted on 12/16/2011 at 12:43 AM
		</div>
		<div class="comment_text"><p>I do this very thing and simply run a global dataFilter via ajaxsetup to remove my custom prefix.</p><p>It works in all instances, i.e., JSON AJAX calls, and the serializedjson example you provided above.</p><p>I'm not an expert, but did I mis-understand your point? Granted, I'm running my own box, but I would think this would work via shared as well?</p><p>G.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736819">3</a> by Raymond Camden
		posted on 12/16/2011 at 12:53 AM
		</div>
		<div class="comment_text"><p>I think you did miss the point. :) What I said was, I assumed the JSON prefix stuff only happened when you requested the data via an XHR, or HTTP request in general. Ie, as part of the returnFormat=json support for CFCs. I didn't think it happened outside of those calls.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736817">4</a> by Gregory Marthews
		posted on 12/16/2011 at 12:59 AM
		</div>
		<div class="comment_text"><p>10-4, but why would you recommend disabling this feature if the prefix can easily be handled via a global filter?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736820">5</a> by Raymond Camden
		posted on 12/16/2011 at 1:05 AM
		</div>
		<div class="comment_text"><p>Notice I said to explicitly disable it if you don't want to use it. My point is - if it is turned on, and you aren't aware, and you work with JSON like I showed up, you can get screwed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736810">6</a> by Gregory Marthews
		posted on 12/16/2011 at 1:19 AM
		</div>
		<div class="comment_text"><p>Funny you should say that. That's exactly how I learned about it, i.e., I set the flag in CF Admin and started wondering why my scripts were all of a sudden breaking.</p><p>Thanks for the post as always.</p><p>G.</p></div>
	</div>
</div>
		