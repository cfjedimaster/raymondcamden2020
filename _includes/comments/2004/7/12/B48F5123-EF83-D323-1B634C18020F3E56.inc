
<div class="comment" id="c_1713615964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615964">1</a> by Robert Reinhardt
		posted on 7/20/2004 at 5:12 AM
		</div>
		<div class="comment_text"><p>Another thing you might have already discovered is that Flash Remoting calls over SSL (https) will fail if you the web server isn't adding Cache-Control: no-store headers to all requests. (At least, on IE Windows they will fail.) Also, I found that Apple Safari will cache the first gateway call, making subsequent Flash Remoting calls fail. Same solution as SSL, add the header to prevent caching, and you're back to normal.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615966">2</a> by Laurent
		posted on 2/11/2005 at 4:24 AM
		</div>
		<div class="comment_text"><p>[Flash Remoting MX]-&amp;gt;Request received was not Flash-based (not of the binary AMF protocol).</p><p>I keep getting this and it really messes with our app... nothing to find on the web and since we always use the named address i can't find out how to fix this... any suggestions would be very welcome!</p></div>
	</div>
</div>
		