
<div class="comment" id="c_1713718146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718146">1</a> by Mark Landmann
		posted on 9/9/2009 at 6:16 AM
		</div>
		<div class="comment_text"><p>4) Which is a takeoff on #1.  You need to capture two time components: <br>a) OnRequestStart to OnRequestEnd<br>b) On start of web service invocation to end of web service invocation.<br>The log both times in a record (same record if possible)<br>Crunch the data – see where the time is being spent.</p><p>Your example – assumes the page executes in 100ms – it needs to be measured.  No assumptions!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718147">2</a> by Raymond Camden
		posted on 9/9/2009 at 6:17 AM
		</div>
		<div class="comment_text"><p>You could use onRequestStart/End. You could also just put another getTickCount pair on top and at the bottom of the CFM. If that total is N and the inner is M then your page minus the ws is just N-M. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718145">3</a> by MikeZ
		posted on 9/9/2009 at 12:34 PM
		</div>
		<div class="comment_text"><p>If you want to abstract it even more then just build yourself a custom tag which generates a tick count in its start and end tag. Then have the end tag log the difference along with some additional information.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718150">4</a> by Tom Grady
		posted on 9/9/2009 at 4:48 PM
		</div>
		<div class="comment_text"><p>Ray, interesting title for a blog post. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718149">5</a> by Raymond Camden
		posted on 9/9/2009 at 5:11 PM
		</div>
		<div class="comment_text"><p>How dare you insensate that I used a titillating title. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718148">6</a> by Daniel Budde
		posted on 9/9/2009 at 5:55 PM
		</div>
		<div class="comment_text"><p>I read it for the title, no other reason.</p></div>
	</div>
</div>
		