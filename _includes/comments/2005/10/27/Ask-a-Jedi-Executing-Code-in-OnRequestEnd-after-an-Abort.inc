
<div class="comment" id="c_1713622149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622149">1</a> by Matt
		posted on 10/27/2005 at 6:35 PM
		</div>
		<div class="comment_text"><p>Yes, in Coldfusion 8.0, introduce a new Application.cfc function that doesn't abort even if a cfabort is present in the other parts of the template. I've myself had to resort to trys/catches to come up with a complex solution to a simple problem like this.</p><p>Let's call this function. OnRequestNotEnd ... :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622150">2</a> by Matt
		posted on 10/27/2005 at 6:38 PM
		</div>
		<div class="comment_text"><p>Or, introduce a new attribute to cfabort or cfexit, that only stops processing current template.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622151">3</a> by quiksilv
		posted on 10/27/2005 at 6:51 PM
		</div>
		<div class="comment_text"><p>What you could do is include a file in you onRequestEnd file called 'end.cfm' (or better still #application.myEndRequestFileName#).  Then before you cfabort include this file.</p><p>A bit of a hack i know but it should work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622148">4</a> by Brian Rinaldi
		posted on 10/27/2005 at 6:59 PM
		</div>
		<div class="comment_text"><p>cfexit will end the currently running page but still run your onRequestEnd (or anything in other templates). I have used this on occassion when I needed to do something like this. I it is supposed to be for custom tags, but I have found it will work just about anywhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622153">5</a> by Brian
		posted on 10/27/2005 at 7:25 PM
		</div>
		<div class="comment_text"><p>The way I got around the cflocation issue in a recent application was to place a function called Redirect() in my utility component.  Instead of calling cflocation, I call the Redirect() function which internally calls the same function(s) I call in OnRequestEnd() before performing the redirect using cflocation.  You could probably apply similar solutions to the other tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622152">6</a> by Raymond Camden
		posted on 10/27/2005 at 7:25 PM
		</div>
		<div class="comment_text"><p>Brian - what a good idea. I just did a quick test and it ran just fine.</p></div>
	</div>
</div>
		