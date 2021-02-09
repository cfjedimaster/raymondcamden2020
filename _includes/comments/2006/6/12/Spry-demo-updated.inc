
<div class="comment" id="c_1713653984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653984">1</a> by Dan Sorensen
		posted on 6/13/2006 at 2:53 AM
		</div>
		<div class="comment_text"><p>I'm impressed at how little code you needed for the examples. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653985">2</a> by Rob Gonda
		posted on 6/13/2006 at 4:14 AM
		</div>
		<div class="comment_text"><p>both demos are broken at this moment. You are probably working on the proxy ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653986">3</a> by Raymond Camden
		posted on 6/13/2006 at 4:26 AM
		</div>
		<div class="comment_text"><p>Dan: Thank Adobe. But I agree -it rocks.</p><p>Rob: Both work just fine for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653991">4</a> by Rob Gonda
		posted on 6/13/2006 at 7:27 AM
		</div>
		<div class="comment_text"><p>they do now.</p><p>Cheers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653987">5</a> by Brian
		posted on 9/20/2006 at 10:39 PM
		</div>
		<div class="comment_text"><p>Hey Ray -- Great examples here to get me going on Spry. Thanks!!!</p><p>I do have a question and maybe this is best served as a Jedi question.  When you build up your xml string is there any reason to do it the way in this example over something like this?</p><p>&lt;cfxml variable="mydoc"&gt;<br>&lt;categories&gt;<br> &lt;cfoutput query="xml"&gt;<br>   &lt;category&gt;<br>     &lt;foo1&gt;#foo1#&lt;/foo1&gt;<br>   &lt;/category&gt;<br> &lt;/cfoutput&gt;<br>&lt;categories&gt;<br>&lt;/cfxml&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653996">6</a> by Raymond Camden
		posted on 9/20/2006 at 10:47 PM
		</div>
		<div class="comment_text"><p>I don't think I get what yo mean. Are you asking why I build the string using stringbuffer instead of cfxml?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653990">7</a> by Brian
		posted on 9/20/2006 at 11:03 PM
		</div>
		<div class="comment_text"><p>Right is there any benefit to build up the string as you do or are both methods about the same.  I didn't know if when you hit huge XML files things start to lean one way or the other.  Or maybe it was just the way you do it makes it reusable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653988">8</a> by Raymond Camden
		posted on 9/20/2006 at 11:08 PM
		</div>
		<div class="comment_text"><p>Using the StringBuffer over s = s &amp; "..." will work a heck of a lot quiker which becomes critical when making large blocks. As for how it would compare to using the cfxml tag - I just don't like building my xml that way. That is just a personal preference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653993">9</a> by Bob Flynn
		posted on 9/28/2007 at 1:17 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>Your demo links appear to be broken.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653992">10</a> by Raymond Camden
		posted on 9/28/2007 at 2:23 AM
		</div>
		<div class="comment_text"><p>Change <a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%3Anr8Wfzs5RNhu5OZT_80z8UhvscU&amp;cuid=3321886" rel="nofollow noopener" title="ray.camdenfamily.com">ray.camdenfamily.com</a> to www.coldfusionjedi.comh</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653995">11</a> by Bob Flynn
		posted on 9/28/2007 at 7:56 PM
		</div>
		<div class="comment_text"><p>Thanks, I can see the demos now, but the <a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%3Anr8Wfzs5RNhu5OZT_80z8UhvscU&amp;cuid=3321886" rel="nofollow noopener" title="ray.camdenfamily.com">ray.camdenfamily.com</a> absolute paths are hard-coded into the links. Just wanted to let you know.</p><p>Cheers,</p><p>B</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653994">12</a> by Raymond Camden
		posted on 9/28/2007 at 7:58 PM
		</div>
		<div class="comment_text"><p>Yeah, with 2k+ blog entries, I've got quite a few old links. ;) In general most links auto forward, but not all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653997">13</a> by SEO Guy
		posted on 3/5/2009 at 9:04 AM
		</div>
		<div class="comment_text"><p>thanks for sharing that but the demo link is not working :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653998">14</a> by Raymond Camden
		posted on 3/5/2009 at 5:04 PM
		</div>
		<div class="comment_text"><p>Change the url from <a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%3Anr8Wfzs5RNhu5OZT_80z8UhvscU&amp;cuid=3321886" rel="nofollow noopener" title="ray.camdenfamily.com">ray.camdenfamily.com</a> to <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%3ASnQdkTPhxh9LZ0EYImp7Dl7Dx-o&amp;cuid=3321886" rel="nofollow noopener" title="www.coldfusionjedi.com">www.coldfusionjedi.com</a>.</p></div>
	</div>
</div>
		