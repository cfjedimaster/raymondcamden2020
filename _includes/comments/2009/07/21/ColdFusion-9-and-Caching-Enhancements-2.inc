
<div class="comment" id="c_1713717301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717301">1</a> by Don Blaire
		posted on 11/10/2009 at 9:21 AM
		</div>
		<div class="comment_text"><p>Can page or page fragment caching also be done by session instead of by application?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717315">2</a> by Raymond Camden
		posted on 11/10/2009 at 9:22 AM
		</div>
		<div class="comment_text"><p>Yes - as long as you include a unique session key in the cache id. Remember all sessions have a unique value, urltoken. That could be used.</p></div>
	</div>
</div>
		