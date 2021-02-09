
<div class="comment" id="c_1713734022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734022">1</a> by Peter Boughton
		posted on 7/6/2011 at 2:55 AM
		</div>
		<div class="comment_text"><p>Well you asked for it. ;)</p><p>&lt;cfset videoid = rereplace( u , "^[^?]+\?v=([^&amp;##]+).*" , "\1" ) /&gt;</p><p>Doing the [^?]+ bit is faster (avoids backtracking), whilst doing the [^&amp;##] instead of [a-z0-9\-_] means if YouTube change their IDs it'll always work.</p><p>With lookbehinds it could be done with a match instead of a replace, but CFML's default regex doesn't do lookbehind (so can't use rematch here), but in theory it could look like:<br>&lt;cfset videoid = RegexMatch( "(?&lt;=\?v=)[^&amp;##]+" , u ) /&gt;</p><p>Of course, all this assumes you've got a youtube URL in that format... they've actually got a handful of different ways of referring to videos. :/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734028">2</a> by Peter Boughton
		posted on 7/6/2011 at 3:27 AM
		</div>
		<div class="comment_text"><p>Ok, "handful" was a slight exageration, there's only actually three (I was thinking of http vs https stuff which isn't relevant).</p><p>This version should cater for "<a href="http://disq.us/url?url=http%3A%2F%2Fyoutube.com%2Fwatch%3Fv%3Did%3AXDJogLr2HwOH4SSbVKHveIyj9oE&amp;cuid=3321886" rel="nofollow noopener" title="youtube.com/watch?v=id">youtube.com/watch?v=id</a>" and "<a href="http://disq.us/url?url=http%3A%2F%2Fyoutube.com%2Fv%2Fid%3ALKJFBHVm0_Gm7KcnSWJL7vWYJ0U&amp;cuid=3321886" rel="nofollow noopener" title="youtube.com/v/id">youtube.com/v/id</a>" and "<a href="http://disq.us/url?url=http%3A%2F%2Fyoutube.com%2Fembed%2Fv%2Fid%3ANJ58QgN1GZ80uEnM72SYQdHvuqs&amp;cuid=3321886" rel="nofollow noopener" title="youtube.com/embed/v/id">youtube.com/embed/v/id</a>":</p><p>	&lt;cfset videoid = rereplace( u , "^(?:[^?]+\?v=|[^v]+/v/)([^&amp;##/]+).*", "\1" ) /&gt;</p><p>Though it does assume we never have "<a href="http://disq.us/url?url=http%3A%2F%2Fvideos.youtube.com%2Fv%2Fid%3A6Dvqo-1A_SBJ1q4jjIUYOeOEJz8&amp;cuid=3321886" rel="nofollow noopener" title="videos.youtube.com/v/id">videos.youtube.com/v/id</a>" (or anything else with a v before the important one), which is probably a safe bet for now, but of course not guaranteed.<br>( My brain has suddenly gone to sleep, otherwise I'd come up with something more sensible. :S )</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734023">3</a> by Raymond Camden
		posted on 7/6/2011 at 3:22 PM
		</div>
		<div class="comment_text"><p>Good ones, Peter, thanks. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734032">4</a> by Andres Bastidas
		posted on 1/6/2012 at 12:28 AM
		</div>
		<div class="comment_text"><p>great example. I've added an additional check to get the id from the new share URLs too, with <a href="http://disq.us/url?url=http%3A%2F%2Fyoutu.be%3AHHHwWfeYPwrHLOSM8Ma6Vk_7WNI&amp;cuid=3321886" rel="nofollow noopener" title="youtu.be">youtu.be</a>:</p><p>&lt;cfset regex = "^(?:[^?]+\?v=|[^v]+/v/)([^&amp;##/]+).*|<a href="http://disq.us/url?url=http%3A%2F%2Fyoutu.be%2F%3AsFYDRSAH41RxeGLzXnHL436MoHM&amp;cuid=3321886" rel="nofollow noopener" title="http://youtu.be/">http://youtu.be/</a>"&gt;</p><p>&lt;cfset videoid = rereplace(u, regex, "\1" ) /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734043">5</a> by kodulehe
		posted on 2/8/2012 at 2:48 PM
		</div>
		<div class="comment_text"><p>Good example, thanks! Searched this one some time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734045">6</a> by Simone
		posted on 11/20/2012 at 9:02 AM
		</div>
		<div class="comment_text"><p>You guys are rock stars!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734050">7</a> by Dani Szwarc
		posted on 12/5/2013 at 1:10 AM
		</div>
		<div class="comment_text"><p>Glad I've found the info here and even more glad about the 200 (well, maybe less) comments showing sexier, smaller, faster examples.<br>I love the CF community.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734051">8</a> by e-poe tegemine
		posted on 4/24/2014 at 1:45 AM
		</div>
		<div class="comment_text"><p>Thanks! Had one typo probably, but this example gave me right direction!</p></div>
	</div>
</div>
		