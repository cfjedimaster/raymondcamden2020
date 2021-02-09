
<div class="comment" id="c_1713711585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711585">1</a> by todd sharp
		posted on 1/20/2009 at 8:59 PM
		</div>
		<div class="comment_text"><p>Just an FYI that jQuery allows you to do this listening for ajaxComplete:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdocs.jquery.com%2FAjax%2FajaxComplete%23callback%3AbI8s-6DH4VgPRdF-p7YwC1Bs6zA&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.jquery.com/Ajax/ajaxComplete#callback">http://docs.jquery.com/Ajax...</a></p><p>You can also listen globally for ajaxError, ajaxSend, ajaxStart, ajaxStop, ajaxSuccess.</p><p>Yet another reason to love jQuery...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711587">2</a> by Elliott Sprehn
		posted on 1/21/2009 at 10:58 AM
		</div>
		<div class="comment_text"><p>Mostly just a style thing, but onclick takes a snippet of javascript, you don't actually need the the "javascript:" in there.</p><p>Also, since load() returns void you can also just onclick="return load()"</p><p>Not critical, but it makes it much more compact.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711586">3</a> by Raymond Camden
		posted on 1/21/2009 at 5:12 PM
		</div>
		<div class="comment_text"><p>Thanks Elliott. I normally remember _not_ to put js: in front of my stuff in onclick - must have been asleep at the wheel there. I almost always put return false though and I knew there was a better way, but I had forgot about simply doing return x() in the onlick. Thanks!</p></div>
	</div>
</div>
		