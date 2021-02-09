
<div class="comment" id="c_1713682632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682632">1</a> by Dave Ferguson
		posted on 7/3/2008 at 5:42 PM
		</div>
		<div class="comment_text"><p>I could see this as maybe being useful in the sense that you could have a single multiple use function.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682638">2</a> by Raymond Camden
		posted on 7/3/2008 at 5:47 PM
		</div>
		<div class="comment_text"><p>Well, my issue is that CF already provides a way to override the returnFormat. The client does it (using the query string). This though is all server side.</p><p>I don't know - it just feels wrong. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682619">3</a> by John Farrar
		posted on 7/4/2008 at 1:42 AM
		</div>
		<div class="comment_text"><p>This could be used to make sure the return format isn't altered. (Not that I see a use case issue, but that would be one scenario.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682637">4</a> by Steve Ross
		posted on 10/21/2011 at 7:08 PM
		</div>
		<div class="comment_text"><p>Would this fail if it was an ajax post instead of a get? ie: url variable would be form variable right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682634">5</a> by Raymond Camden
		posted on 10/21/2011 at 7:44 PM
		</div>
		<div class="comment_text"><p>Possibly. Remember when doing a POST you can still send URL params. But yeah - you can change the code to check form instead (or both).</p><p>Personally - when I do Ajax hits, I'll put the returnformat and method in the query string:</p><p>some.cfc?method=doit&amp;returnformat=json</p><p>and use the Form data for my actual data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682636">
	<div>
		<img src="https://disqus.com/api/users/avatars/morrisreport.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682636">6</a> by Kevin Morris
		posted on 10/21/2012 at 9:52 AM
		</div>
		<div class="comment_text"><p>Yes, this is definitely the centerpiece in the "not so sure this is a good idea" department! I've spent the past two hours debugging a "Invalid return type" error.  Turns out that using a url.returnFormat="plain" in a CFC function called by another CFC function causes the outer function to be unable to return a valid JSON object...because the returnType for the _entire request_ has been changed to "plain".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682635">7</a> by Raymond Camden
		posted on 10/22/2012 at 4:59 AM
		</div>
		<div class="comment_text"><p>In theory, you could do a check to see if url.returnformat is defined, and if not, then set it to plain. That would at least make it like a default and not forcibly change existing requests.</p></div>
	</div>
</div>
		