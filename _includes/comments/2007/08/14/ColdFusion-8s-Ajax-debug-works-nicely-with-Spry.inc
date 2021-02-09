
<div class="comment" id="c_1713670333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670333">1</a> by Will
		posted on 8/15/2007 at 1:23 AM
		</div>
		<div class="comment_text"><p>Sorry to bug again... I am trying to combine some spry goodness inside of a cflayout tab. The page with spry works fine on its own, but it seems it doesn't like being inside of a cflayout (or a cfpod for that matter). Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670322">2</a> by Raymond Camden
		posted on 8/15/2007 at 1:26 AM
		</div>
		<div class="comment_text"><p>You need to be extra careful when using JS inside containers like that - and Spry may not be workable there. For example, you can't do function foo(), but must do foo = function() instead.</p></div>
	</div>
</div>
		