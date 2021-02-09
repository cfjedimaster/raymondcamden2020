
<div class="comment" id="c_1713674583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674583">1</a> by Phil Duba
		posted on 11/28/2007 at 1:39 AM
		</div>
		<div class="comment_text"><p>Maybe they envisioned some kind of argument tag like cfexecuteargument or something like that but regardless it is very strange behavior.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674582">2</a> by Sam Curren
		posted on 11/28/2007 at 5:34 AM
		</div>
		<div class="comment_text"><p>The other thing that has bitten me on CFExecute is the fact that it returns immediately BY DEFAULT. You can have it wait for process completion before returning, and I would expect that to be the default behavior.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674581">3</a> by Jeff
		posted on 11/28/2007 at 7:04 AM
		</div>
		<div class="comment_text"><p>If you look at WEB-INF/cftags/META-INF/taglib.cftld you will find that the cfexecute tag is really a JSP custom tag which are normally required to be closed. There are some cases where non-closed JSP cts will not error, but perhaps some extra validation was added for this tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674584">4</a> by Jeff
		posted on 11/28/2007 at 7:07 AM
		</div>
		<div class="comment_text"><p>Follow-up post: I attached the runtime/cfusion.jar to a java project in Eclipse as an external jar and looked at the method names for coldfusion.tagext.lang.ExecuteTag. There is no public doEndTag() method defined to do something with the tag body. That's why in your example above the "&lt;cfset x = 1&gt;" does nothing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674585">5</a> by Kevin Sargent
		posted on 11/30/2007 at 3:11 AM
		</div>
		<div class="comment_text"><p>I don't know about the syntax / closing tags....</p><p>But boy is cfexecute picky! It likes to leave processes open indefinitely, and lock files and all sorts of other nasty stuff if the called app doesn't behave just so (like writes to the input stream too much...)</p></div>
	</div>
</div>
		