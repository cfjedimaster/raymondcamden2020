
<div class="comment" id="c_1713621498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621498">1</a> by Christopher Wigginton
		posted on 10/21/2005 at 10:17 PM
		</div>
		<div class="comment_text"><p>Before stepping through the code, I'd recommend the first action to attempt would be to place a cfdump/cfabort just after the variable is set, and if your expecting it to be a struct or part of a scope, dump the parent and/or root of the variable, such as the attributes scope if it's in a custom tag or the arguments scope in a cfc/udf.  Just the fact of actually seeing the variable contents will often indicate where the problem is occuring.  It might be that your forgot to enclose the passed-in arguments with "#"'s</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621499">2</a> by Raymond Camden
		posted on 10/21/2005 at 11:42 PM
		</div>
		<div class="comment_text"><p>Well, a dump normally would make sense, but this only occurs on her machine, not all, thats why it makes me think it is something deeper. Either way - yeah - dumping is always a good idea. :)</p></div>
	</div>
</div>
		