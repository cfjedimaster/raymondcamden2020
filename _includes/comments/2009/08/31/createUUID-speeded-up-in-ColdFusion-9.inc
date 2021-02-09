
<div class="comment" id="c_1713718060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718060">1</a> by Mark Jones
		posted on 9/1/2009 at 1:28 AM
		</div>
		<div class="comment_text"><p>Yay!<br>It may be a minor thing, but I've been wondering about that. I've been treading carefully ever since I saw Tyson's post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718063">2</a> by TJ Downes
		posted on 9/1/2009 at 2:53 AM
		</div>
		<div class="comment_text"><p>Nice! I wonder how much of the performance gain is due to the performance enhancements of CF itself. In other words, are loops faster in CF9 too?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718061">3</a> by inj
		posted on 9/1/2009 at 3:03 AM
		</div>
		<div class="comment_text"><p>There is a faster way to create "UUID" - createobject ( "java", "java.util.UUID"). RandomUUID (). ToString (). The difference with the createUUID() - by my count - 4 times!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718062">4</a> by Henry Ho
		posted on 9/1/2009 at 3:37 AM
		</div>
		<div class="comment_text"><p>@inj really? wow.  I wonder why CF9 didn't use that...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718059">5</a> by Brad Wood
		posted on 9/1/2009 at 9:51 AM
		</div>
		<div class="comment_text"><p>@Henry: How do you know CF9 didn't use java.util.UUID?  Fire up your CF9 beta, paste in Ray's code and look at the stack traces with SeeFusion and you'll probably be able to see what they used.</p><p>@inj: java.util.UUID was only made available in Java 1.5.  For anyone on CF 6 or 7, (Java 1.4) they will need <a href="http://disq.us/url?url=http%3A%2F%2Fjug.safehaus.org%3AHxvm9fw_KBDCJARsDLwsESuDFmY&amp;cuid=3321886" rel="nofollow noopener" title="jug.safehaus.org">jug.safehaus.org</a>.</p><p>I'm glad to see this enhancement.  You don't need to create 20,000 GUIDs with createUUID() to see them start dragging down your stack traces.  On my CF 8 dev server (Java 1.6_12) I can only create about 1,200 hundred GUIDs in 20 seconds (!), but I can create 200,000 in 3/4ths of a second with JUG!  That's over 4,000 times faster and still beating the pants off CF9.</p></div>
	</div>
</div>
		