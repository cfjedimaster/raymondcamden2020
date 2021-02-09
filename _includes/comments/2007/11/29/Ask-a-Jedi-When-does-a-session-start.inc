
<div class="comment" id="c_1713674789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674789">1</a> by todd sharp
		posted on 11/29/2007 at 7:46 PM
		</div>
		<div class="comment_text"><p>How do you feel about using a dynamic application name during development (like a UUID)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674790">2</a> by Raymond Camden
		posted on 11/29/2007 at 7:51 PM
		</div>
		<div class="comment_text"><p>I don't like it. Not sure why - but I just prefer my url hook method I guess. Also, while I like to restart the App scope on every hit (during dev), I'll normally use a second CFIF for session scope - that way it doesn't restart every hit, just when I want it to. (I should have said that above too.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674786">3</a> by shag
		posted on 11/29/2007 at 9:43 PM
		</div>
		<div class="comment_text"><p>i would add additional conditions to include server name and validated user id.  this prevents accidental resets or even deliberate attempts from other users.  you can also make sure it only occurs in dev/test environements vs prod.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674791">4</a> by Kevin Sargent
		posted on 11/30/2007 at 3:45 AM
		</div>
		<div class="comment_text"><p>Dynamic application name during development leaves TONS and TONS (every page hit...) of orphaned application 'scopes' out there waiting to time out...</p></div>
	</div>
</div>
		