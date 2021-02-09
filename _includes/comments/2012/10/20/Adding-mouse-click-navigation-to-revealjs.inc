
<div class="comment" id="c_1713743447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743447">1</a> by Pete
		posted on 10/22/2012 at 8:25 PM
		</div>
		<div class="comment_text"><p>That's a cool idea, double cool for showing me Touch Mouse as well, I hadn't heard of that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743448">2</a> by JR Galia
		posted on 9/15/2013 at 5:54 AM
		</div>
		<div class="comment_text"><p>I think the problem with this is that clicking "left" arrow will go back to the current page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743449">3</a> by Raymond Camden
		posted on 9/15/2013 at 6:56 PM
		</div>
		<div class="comment_text"><p>I'm not seeing that. Instead, it looks like the controls are broken. My code should probably notice a click on those controls and NOT do anything in that case.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2234527539">
	<div>
		<img src="https://disqus.com/api/users/avatars/danielostendorff.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2234527539">4</a> by Daniel Ostendorff
		posted on 9/3/2015 at 7:17 PM
		</div>
		<div class="comment_text"><p>One of the problems I'm running in to is by using a single mouse click to advance, I can't click on hyperlinks within the presentation. When I do, rather than following the hyperlinks, the presentation moves to the next slide. Anyone have any ideas about how to rewrite this require a double click to either move forward or backward? It might be simple.  I'm just not familiar with the coding on this one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2237609790">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2237609790">5</a> (In reply to <a href="#c_2234527539">#4</a>) by Raymond Camden
		posted on 9/5/2015 at 2:52 PM
		</div>
		<div class="comment_text"><p>Check the target in the event handler - if it is a link, then don't preventdefault and don't continue with the rest of the function.</p></div>
	</div>
</div>
		