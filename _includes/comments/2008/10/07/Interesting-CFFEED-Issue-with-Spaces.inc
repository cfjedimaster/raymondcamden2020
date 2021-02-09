
<div class="comment" id="c_1713708984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708984">1</a> by dfguy
		posted on 10/8/2008 at 10:16 PM
		</div>
		<div class="comment_text"><p>and exactly how is this CFEED's problem? seems to me that if he forgets to sanitize his input, it's his fault.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fxkcd.com%2F327%2F%3AxV6Hs_5WQtGWVARTXLUJAkZdTcw&amp;cuid=3321886" rel="nofollow noopener" title="http://xkcd.com/327/">http://xkcd.com/327/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708996">2</a> by Raymond Camden
		posted on 10/8/2008 at 10:27 PM
		</div>
		<div class="comment_text"><p>True - but one could argue that CFFEED makes an odd decision on switching to file based lookups because of the space.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708998">3</a> by dfguy
		posted on 10/8/2008 at 10:38 PM
		</div>
		<div class="comment_text"><p>why is it strange? filenames can have spaces in them, urls cannot per rfc 1738.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708997">4</a> by Raymond Camden
		posted on 10/8/2008 at 10:39 PM
		</div>
		<div class="comment_text"><p>True. I'm guessing their back end code does: if url, fetch, else load from file system, and the if url fails on the space. Of course, it works just fine if you add a space at the end. That's what threw me at first.</p><p>Either way - this post really wasn't meant to assign blame per se, but to serve as a warning, as it certainly wasn't obvious what was going on.</p></div>
	</div>
</div>
		