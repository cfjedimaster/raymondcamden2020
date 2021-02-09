
<div class="comment" id="c_1713730076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730076">1</a> by shakti
		posted on 3/1/2011 at 2:39 AM
		</div>
		<div class="comment_text"><p>I'v noticed if trusted cache is turned on , CF will cache a file not found as well. Even after i upload the file it still shows the same error. Should be able to tell a file not found and not cache it, but its not a major problem i guess.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730085">2</a> by Raymond Camden
		posted on 3/1/2011 at 2:45 AM
		</div>
		<div class="comment_text"><p>To be fair, Trusted Cache is VERY different from cfcache. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730086">3</a> by todd sharp
		posted on 3/2/2011 at 9:55 PM
		</div>
		<div class="comment_text"><p>This makes perfect sense to me.  &lt;cfcache&gt; simply takes the HTML output inside of it and stuffs it away.  It doesn't (nor should it IMO) care what that HTML is, it just saves it til it expires.</p></div>
	</div>
</div>
		