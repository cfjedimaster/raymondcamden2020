
<div class="comment" id="c_1713657452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657452">1</a> by Jeff Houser
		posted on 9/18/2006 at 6:30 PM
		</div>
		<div class="comment_text"><p>Although I haven't done any testing with AJAX-specific code, I have found that any JavaScript will break in Model Glue if you have debugging (and "Report Execution Times ") turned on.  Turn off Report Execution Times and things start working.</p><p> One of the internal Model Glue methods (ViewRender?) will show up in the template list, thus duplicating the contents of the view on the page.  How does JavaScript know which named element you are accessing when it exists twice?  It doesn't.</p><p> This is one of the issue I cover in an upcoming article for FAQU.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657434">2</a> by Raymond Camden
		posted on 9/18/2006 at 6:33 PM
		</div>
		<div class="comment_text"><p>I should have been clear that I was speaking of MG debugging, not CF debugging. But you can turn off CF debugging on a per request basis as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657448">3</a> by Raymond Camden
		posted on 9/18/2006 at 6:37 PM
		</div>
		<div class="comment_text"><p>It may help if I mention the actual code in case folks don't know. To turn off debugging in CF on a request basis, use:</p><p>&amp;lt;cfsetting showDebugOutput="false"&amp;gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657450">4</a> by Jeff Houser
		posted on 9/18/2006 at 6:50 PM
		</div>
		<div class="comment_text"><p>I'm a victim of not reading too closely.  ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657454">5</a> by Raymond Camden
		posted on 9/18/2006 at 6:56 PM
		</div>
		<div class="comment_text"><p>No - your point is definitely valid and would also screw up AJAX calls, so thanks for bringing it up. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657461">6</a> by Brian Rinaldi
		posted on 9/18/2006 at 8:41 PM
		</div>
		<div class="comment_text"><p>Ray, it is very important to note that turning off debugging per request like you mention does not remove or even reduce the performance hit you take with things like Model-Glue, Reactor or other frameworks. The debugging still runs as usual, only the output is suppressed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657455">7</a> by Raymond Camden
		posted on 9/18/2006 at 10:18 PM
		</div>
		<div class="comment_text"><p>I did say you should not do this in production, but I didn't make it clear why. Thanks Brian.</p></div>
	</div>
</div>
		