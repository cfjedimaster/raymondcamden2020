
<div class="comment" id="c_1713661361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661361">1</a> by Dragos
		posted on 1/23/2007 at 12:51 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>Indeed, Spry uses the initial state of that region before it gets updated. However, one way to setup the enabled/disabled buttons is to register an observer for the "onPostUpdate" event of the region. You have to setup the buttons *after* the region is in place.</p><p>Hope this helps you,<br>Best regards,<br>Dragos</p></div>
	</div>
</div>
		