
<div class="comment" id="c_1713723721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723721">1</a> by James Moberg
		posted on 4/14/2010 at 7:31 PM
		</div>
		<div class="comment_text"><p>I recently wrote a jQuery function that does something similar... it identifies all links with the class ".confirmLink" and then uses the link's title parameter to create a javascript confirmation box.  (It defaults to "Are you sure?" if no title parameter is provided.)</p><p>$('.confirmLink').click(function(){ return confirm($(this).attr('title').length ? $(this).attr('title') : 'Are you sure?'); });</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723723">2</a> by Raymond Camden
		posted on 4/14/2010 at 7:43 PM
		</div>
		<div class="comment_text"><p>Nice. jQuery FTW. :)</p></div>
	</div>
</div>
		