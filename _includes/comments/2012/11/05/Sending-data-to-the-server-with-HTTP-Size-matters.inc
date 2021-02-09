
<div class="comment" id="c_1713743728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743728">1</a> by Tom
		posted on 11/6/2012 at 4:28 PM
		</div>
		<div class="comment_text"><p>There is also a limit on the number of POST variables, regardless of size, that ColdFusion (at least CF9) will accept.  The default is apparently 100.</p><p>The parameter is configurable and can be set in {cfhome}\lib\neo-runtime.xml by adding a postParametersLimit variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743731">2</a> by Raymond Camden
		posted on 11/6/2012 at 4:54 PM
		</div>
		<div class="comment_text"><p>It is configurable directly in the Admin in 10.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743737">3</a> by xavier
		posted on 8/30/2013 at 7:11 PM
		</div>
		<div class="comment_text"><p>I am facing a similar problem where I am running into a "502 Bad Gateway" error. I am using CFHTTP (method=Post) to post XML. I am having this problem only when the XML is exceeding a limit (around 7800 bytes).<br>I am able to post the same XML without a problem to my development server (http as opposed to https on the Production server). I am thinking it a size related problem, but I could be wrong.  I tried increasing the 20 MB default for "Maximum size of post data" in the Administrator to 200 MB but that also did not help. Any idea what is going on? Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743756">4</a> by Raymond Camden
		posted on 9/3/2013 at 12:25 AM
		</div>
		<div class="comment_text"><p>Are you using CFHTTP to post to a CF server or another type of server?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2793112230">
	<div>
		<img src="https://disqus.com/api/users/avatars/avguide.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2793112230">5</a> (In reply to <a href="#c_1713743737">#3</a>) by avguide.ch
		posted on 7/20/2016 at 12:08 PM
		</div>
		<div class="comment_text"><p>I have the same issue. DId you find a solution?</p></div>
	</div>
</div>
		