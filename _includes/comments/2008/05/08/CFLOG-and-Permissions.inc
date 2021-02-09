
<div class="comment" id="c_1713680736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680736">1</a> by Steven Erat
		posted on 5/9/2008 at 1:37 AM
		</div>
		<div class="comment_text"><p>I was about to comment that it doesn't matter how you start ColdFusion because it su's to the runtime user, and always runs as that user.</p><p>But then, checking my facts, I read the ColdFusion start script in bin/ and found that Mac has different rules than Linux or Unix.  In the section where the script checks for user id 1 for root, there's a comment that says:</p><p>"#nothing, on OSX we don't care about the user name.  We assume that the user running it has permission to do everything"</p><p>Then further down there's an if block that checks the operating system and for Unix and Linux it does an "su - $RUNTIME_USER", but on Mac it doesn't... It just starts the server without su, meaning that ColdFusion is running as the user that started it.   I never quite realized this before.</p><p>Then it makes sense that CFLOG's permission depends on the account that starts the server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680727">2</a> by Raymond Camden
		posted on 5/9/2008 at 1:56 AM
		</div>
		<div class="comment_text"><p>Would that be a bug in the script then?</p><p>Also - does it make sense for cflog to just silently fail?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680737">3</a> by Will B.
		posted on 5/9/2008 at 2:05 AM
		</div>
		<div class="comment_text"><p>It would be my thought that cflog, yes, should silently fail.  Most people would use cflog for logging errors.  So if it throws an error, too...uh, oh!</p><p>- WB</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680735">4</a> by Steven Erat
		posted on 5/9/2008 at 7:08 AM
		</div>
		<div class="comment_text"><p>I would expect that CFLOG would behave the same as CFFILE.  The latter would throw an exception if the process didn't have permission, and so should the former... at least that's my logic.  I'll look into it tomorrow.</p></div>
	</div>
</div>
		