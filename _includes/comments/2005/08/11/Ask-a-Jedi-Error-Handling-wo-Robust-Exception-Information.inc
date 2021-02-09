
<div class="comment" id="c_1713619947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619947">1</a> by Roger Lancefield
		posted on 8/12/2005 at 8:33 PM
		</div>
		<div class="comment_text"><p>Yep, this is what I do. I use the "error" collection to build a formatted mail message which is automatically sent to the site administrator in the event of exceptions. Works perfectly.</p><p>As you point out, you can also use it to populate a site-wide error template for display. I check the "cgi.server_name" parameter and if the app is on a development box I allow the template to dump all the contents of the error struct, if it's on a production server, then I output only very basic details. Again, it works well and is straightforward to implement.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619945">2</a> by Douglas Knudsen
		posted on 8/12/2005 at 9:28 PM
		</div>
		<div class="comment_text"><p>error.stacktrace is my favourite.  Very useful info that does not get into the error logs.</p><p>DK</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619943">3</a> by Yacoubean
		posted on 8/13/2005 at 2:39 AM
		</div>
		<div class="comment_text"><p>Hey Doug,</p><p>Can you elaborate on that error.stacktrace bit?  Is that a java object call or something?  I'm pretty much a base cold fusion tags/functions user, not very familiar with most of the lower level stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619948">4</a> by Jay
		posted on 8/9/2006 at 2:43 PM
		</div>
		<div class="comment_text"><p>Guys,</p><p>I am using cferror tag to point to a template which contains user friendly error message and internally i want to send a mail to myself for debugging it. I read in the help files that the template to which we point in cferror should a html page and we cannot use cftags in that. Then how youll manage to put cfmail tag in that template??? Can anybody please explain me</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619946">5</a> by Raymond Camden
		posted on 8/9/2006 at 4:01 PM
		</div>
		<div class="comment_text"><p>Jay, that depends on the TYPE of error. You see, you can have more than one cferror tag. If the type is request then you cannot use CFML. See the docs for more info. In the past what I've done is had a type=exception for my 'real' error handling, and then type='request' for my 'oh crap nothing is working' type error. It's fine to have them both.</p></div>
	</div>
</div>
		