
<div class="comment" id="c_1713615403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615403">1</a> by Fernando da Silva Trevisan
		posted on 2/18/2004 at 6:36 AM
		</div>
		<div class="comment_text"><p>Great!<br>Tks for the nice work. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615404">2</a> by PaulH
		posted on 2/18/2004 at 3:17 PM
		</div>
		<div class="comment_text"><p>and its well on its way to being i18n.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615406">3</a> by markM
		posted on 2/19/2004 at 12:46 AM
		</div>
		<div class="comment_text"><p>Thanks for putting together a great product! I've learned a ton from your blog postings and appreciate the work you have put into the blog product itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615407">4</a> by Vaughan Allan
		posted on 2/23/2004 at 5:16 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I've been playing around with your blog on a freebie CFMX host, the limitations of which are:<br>a) no mappings<br>b) no cffile etc<br>c) only one datasource allowed</p><p>Given this environment, I've tailored it to a working solution, as follows:<br>a) I've changed all cfmodule calls to use relative paths - yes, my bad.  org.camden and org.hastings sit under the blog root.<br>b) I actually had to pay them to allow cffile (which also enabled cfobject - which would have required workarounds for the java createobject calls in the locale cfcs - which appear to be the basis of the whole locale system)<br>c) I've added an optional tableprefix in blog.ini which prefixes all db calls if it exists, allowing more than one blog from the same DSN (security issues aside).  I've also added a method in the cfc to deploy tables for a new blog. (TODO: not done for all db types)</p><p>Very trivial changes, but if any of them are of interest to you (or anyone else), I'd be happy to supply source and/or diffs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615434">5</a> by Vaughan Allan
		posted on 2/23/2004 at 5:20 PM
		</div>
		<div class="comment_text"><p>Excuse double post - forgot that I also removed the dependency on the webhost's timezone by changing (almost) all calls to now() to point to a udf. It's messy, and there's probably a more appropriate method, but it works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615405">6</a> by Raymond Camden
		posted on 2/24/2004 at 5:27 AM
		</div>
		<div class="comment_text"><p>Vaughan:<br>Sounds like some interesting mod. Your last mod is something I had planned to do for 3.0 anyway. As it stands, this blog is hosted on the west coast and I'm in the Central time zone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615408">7</a> by Ryan
		posted on 3/30/2004 at 10:55 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>What would it take to add CAPTCHA-ing to the comments form. I hear a lot about blog spamming and was wondering what can be done about this and what methods there are out there to utilize CAPTCHA in Coldfusion? Thanks!</p></div>
	</div>
</div>
		