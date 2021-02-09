
<div class="comment" id="c_1713658921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658921">1</a> by Rick O
		posted on 11/3/2006 at 6:21 AM
		</div>
		<div class="comment_text"><p>Out of idle curiosity, what app is choking on the unescaped quotes?  I ask because the frilly double quotes shouldn't have to be escaped, right?  They aren't special characters as far as XML is concerned, so they should be treated like any other Unicode sequence.</p><p>Have you tried overriding the default UTF-8 encoding?  I end up having to do the Replace() trick on almost all of my XML to set everything to ISO-8859-1 or a whole bunch of stuff starts to break.  Lame, but at least workable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658940">2</a> by Ben
		posted on 11/3/2006 at 1:49 PM
		</div>
		<div class="comment_text"><p>There is a group of non-standard characters that Microsoft introduced known as Windows-1252. They are often used in Office Documents and are not automatically converted by XMLFormat.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FWindows-1252%3ACQIF-nO-CfWHMqCiAXFTpgO68tM&amp;cuid=3321886" rel="nofollow noopener" title="http://en.wikipedia.org/wiki/Windows-1252">http://en.wikipedia.org/wik...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658937">3</a> by Nathan Dintenfass
		posted on 11/5/2006 at 8:18 AM
		</div>
		<div class="comment_text"><p>So, is this a bug in xmlFormat, or just an encoding issue that developers are expected to deal with?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658936">4</a> by Raymond Camden
		posted on 11/6/2006 at 12:42 AM
		</div>
		<div class="comment_text"><p>Speaking for myself, I call it a bug in xmlFormat. xmlFormat should clean EVERYTHING, _or_, at least throw an error saying it could not convert. Right now the behavior is bad since it silently fails.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658938">5</a> by Rick O
		posted on 11/6/2006 at 7:42 AM
		</div>
		<div class="comment_text"><p>I'm no Unicode guru, but it seems to me that this is more a bug in the XML object's ToString() method.  It silently writes a header that puts everything in UTF-8 even when there are non UTF-8 characters in the stream.</p><p>I mean, I may be reading the spec wrong, but as near as I can tell the only things that must be escaped (ie, XMLFormat-ed) are the really obvious ones (brackets, ampersands, and quotes):</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2F2006%2FREC-xml-20060816%2F%23charencoding%3AR1Z2_Qma4C49boVtlQVVzYWq_8Q&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/2006/REC-xml-20060816/#charencoding">http://www.w3.org/TR/2006/R...</a></p><p>Everything else is left up to proper Unicode encoding.</p><p>-R</p></div>
	</div>
</div>
		