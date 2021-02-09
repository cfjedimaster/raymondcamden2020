
<div class="comment" id="c_1713740577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740577">1</a> by Chris Blackwell
		posted on 4/15/2012 at 10:53 AM
		</div>
		<div class="comment_text"><p>I'be had this issue too, bit rather than parse the gist, which might break if github change the format, I decided to render it using a js engine on the server.</p><p>The source is on github naturally - <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fd1rtym0nk3y%2Fcfgist%3A4DL4i-dUe-1iLJcWpgeKBZlkGfI&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/d1rtym0nk3y/cfgist">https://github.com/d1rtym0n...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740579">2</a> by Raymond Camden
		posted on 4/16/2012 at 12:25 AM
		</div>
		<div class="comment_text"><p>Interesting - I have to ask though why you use Rhino? Since all Gist is doing is nicely dropping in text, isn't that overkill to replicate?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740580">3</a> by ChrisBlackwell
		posted on 4/16/2012 at 5:32 PM
		</div>
		<div class="comment_text"><p>Yeah i guess it might be slightly overkill, but when i was thinking about how to aproach the problem i had one of those "hey, you know whada be cool" moments and just ran with it.</p><p>I've just updated the project so that it caches the final html, rather than js, that removes the need to use rhino at all apart form the first request, although in my unscientific F5 testing the rhino portion of the code executes in ~5ms, so it really isn't that big an overhead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740578">4</a> by Raymond Camden
		posted on 4/16/2012 at 6:00 PM
		</div>
		<div class="comment_text"><p>Some of my best code experiences have come from "know what would be cool?" - hope I didn't sound too negative. ;)</p></div>
	</div>
</div>
		