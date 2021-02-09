
<div class="comment" id="c_1713711484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711484">1</a> by Edward Beckett
		posted on 1/14/2009 at 2:11 AM
		</div>
		<div class="comment_text"><p>I don't use IE ... However in developing site for folks I have to check for "browser compatibility" with Internet Destroyer ... I mean Explorer ...</p><p>In IE (Icky ...) Go to:</p><p>Tools &gt; Internet Options &gt; Browsing History ...</p><p>Under Browsing History Change "Check for newer versions of stored pages " to something other than  "Every time I visit the web page" or "Automatically" ...</p><p>Having the setting "Every time I visit the web page" is great when you are developing a site ... but not for browsing purposes ...</p><p>HTH <br>Reviewing the</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711496">2</a> by Andy Sandefer
		posted on 1/14/2009 at 2:26 AM
		</div>
		<div class="comment_text"><p>PHP, Internet Explorer (the flickering wonder) and FARTS are ALL FREE!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711508">3</a> by Seb Duggan
		posted on 1/14/2009 at 3:03 AM
		</div>
		<div class="comment_text"><p>I was looking to see if there's a way to do this using ISAPI_Rewrite, and discovered a new product from Helicon, Ape: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.helicontech.com%2Fape%2F%3A7DPqJA38ruUQVZ8CS1dKw2v8KNs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.helicontech.com/ape/">http://www.helicontech.com/...</a></p><p>It's currently in beta, and I've not yet tried it myself, but it aims to emulate all the common Apache mod_ extensions, including the mod_expires which is referenced in the article Ray mentions.</p><p>So you could set up the expiry header on all images without having to serve them through the CF server...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711498">4</a> by Blaine
		posted on 1/14/2009 at 7:38 AM
		</div>
		<div class="comment_text"><p>I assume the problem is in mouseovers, which is about the only time i've noticed background image problems, so I combine my hover images into one and then use CSS positioning to select which image to use.  There are lots of resources out there for doing this... Its very simple and is faster since there are less round trips to the server.</p><p>Hope this helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711497">5</a> by Eric Hoffman
		posted on 1/14/2009 at 9:22 AM
		</div>
		<div class="comment_text"><p>Ray, for those wanting to do so in IIS, can you post what you set in IIS for this?  I know I just had my network guy do it, so I don't have the syntax offhand but it really helped and improved our Yslow score in that area.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711500">6</a> by Raymond Camden
		posted on 1/16/2009 at 12:45 AM
		</div>
		<div class="comment_text"><p>This help?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.dotnetjunkies.com%2FWebLog%2Fdavetrux%2Farchive%2F2007%2F08%2F20%2F286530.aspx%3AY8eMstXuHSFifNdjTWemA39jZwE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.dotnetjunkies.com/WebLog/davetrux/archive/2007/08/20/286530.aspx">http://www.dotnetjunkies.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711501">7</a> by Vyacheslav
		posted on 1/17/2009 at 6:23 PM
		</div>
		<div class="comment_text"><p>Helicon Ape is released now and you can use mod_expires module to solve your problem. Also please note 2 new modules (mod_cache and mod_gzip) are added into release.<br>Please refer to <a href="http://disq.us/url?url=http%3A%2F%2Fwww.helicontech.com%2Fape%3A0L7X_O1BZlTDN0JSK7keLU-ezfM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.helicontech.com/ape">http://www.helicontech.com/ape</a><br>to get more info.</p></div>
	</div>
</div>
		