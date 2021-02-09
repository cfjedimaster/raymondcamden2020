
<div class="comment" id="c_1713614553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614553">1</a> by Sean Corfield
		posted on 4/28/2003 at 11:54 PM
		</div>
		<div class="comment_text"><p>Yup, weird isn''t it? I mentioned it here (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.corfield.org%2Fblog%2Farchives%2F2003_04.html%23000285%29%3Aog-9Ln8bDDIpkeOetahwqGFJQQg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.corfield.org/blog/archives/2003_04.html#000285)">http://www.corfield.org/blo...</a> and noted that arrayLen(arguments) in particular can be misleading...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614549">2</a> by Raymond Camden
		posted on 4/29/2003 at 12:00 AM
		</div>
		<div class="comment_text"><p>Ack - didn''t mean to repeat anyone. :) (I _do_ read your blog.) It just goes to show that we &lt;i&gt;really&lt;/i&gt; need a firmer grasp of null. It would be even better if foo simply didn''t show up in the structure at all.</p><p>Also - it seems like the effort that was put into the arguments thing to make it support both array and structure type notation kind of left things messy. I would have preferred just struct or just array type notation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614548">3</a> by Nathan Dintenfass
		posted on 4/29/2003 at 6:19 PM
		</div>
		<div class="comment_text"><p>You can, though, do a test for null by comparing the value to chr(0) -- in the case of an "empty" argument it will equal null in that test.</p><p>It is very strange to have structKeyExists() return false but still be able to output that key from the struct (though, strictly speaking ARGUMENTS is not a "normal" CF struct).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614534">4</a> by Raymond Camden
		posted on 4/29/2003 at 6:23 PM
		</div>
		<div class="comment_text"><p>That''s why I say again - I wish MACR would have made the arguments thing a bit simpler. I understand why they wanted it like an array since UDFs in CF5 treated arguments as an array - and I understand how we need names as well, since it makes it easier code wise and it''s how arguments were addressed in CF5 UDFs as well. However, I just think this could have been done in a simpler way - somehow. To be honest, I don''t know the answer, so I don''t blame MACR for not getting it perfect either. (And to be honest, this is being kind of picky. :)</p></div>
	</div>
</div>
		