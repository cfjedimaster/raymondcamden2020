
<div class="comment" id="c_1713727983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727983">1</a> by Mike
		posted on 11/29/2010 at 8:03 PM
		</div>
		<div class="comment_text"><p>In CFEclipse, nested CF comments will also prevent proper "outline mode" rendering.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727998">2</a> by Raymond Camden
		posted on 11/29/2010 at 8:05 PM
		</div>
		<div class="comment_text"><p>Interesting. I tested that in CFB - commented out badboy, and INSIDE of the comment block added another comment. It did not break the outline.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727995">3</a> by Ram Kulkarni
		posted on 11/29/2010 at 8:14 PM
		</div>
		<div class="comment_text"><p>Functions are still there in the outline view, but they are shown as children of &lt;tr&gt;, since it was not closed. Agree that this is not the correct hierarchy, but since CFB shows all CFML and HTLM tags in the outline, it would be difficult, if not impossible, to correctly display documents, that are not well formed, in the outline view. Quick outline will show all functions in this case.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727999">4</a> by Raymond Camden
		posted on 11/29/2010 at 8:19 PM
		</div>
		<div class="comment_text"><p>Confirmed - when I open TR it is there.</p><p>While I would like the outline to handle my method above, in the _real_ example it was truly broken HTML. So hopefully this post will help others find broken HTML in their CFCs/CFMs. :)</p></div>
	</div>
</div>
		