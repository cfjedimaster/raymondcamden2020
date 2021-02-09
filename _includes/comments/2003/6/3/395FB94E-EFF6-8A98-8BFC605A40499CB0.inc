
<div class="comment" id="c_1713614605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614605">1</a> by mike
		posted on 6/3/2003 at 4:08 PM
		</div>
		<div class="comment_text"><p>you can also use GetToken() to work on lists with multi-character delimiters.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614615">2</a> by Raymond Camden
		posted on 6/3/2003 at 4:13 PM
		</div>
		<div class="comment_text"><p>Incorrect. Consider the following code:</p><p>&amp;lt;cfset x = "f+oo+=+moo+=+zoo"&amp;gt;</p><p>&amp;lt;cfoutput&amp;gt;#getToken(x,2,"+=+")#&amp;lt;/cfoutput&amp;gt;</p><p>Because getToken treats + or = as the token, it returns 00, not moo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614614">3</a> by mike
		posted on 6/3/2003 at 5:11 PM
		</div>
		<div class="comment_text"><p>i realize it isnt ideal, but you can still use it in certain cases. likewise for the regular list functions. besides, all those functions are simpler and faster than RE''s, so why not use them if you can get away with it?</p></div>
	</div>
</div>
		