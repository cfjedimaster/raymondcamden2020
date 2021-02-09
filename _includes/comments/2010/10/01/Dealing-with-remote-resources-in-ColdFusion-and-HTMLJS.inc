
<div class="comment" id="c_1713726765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726765">1</a> by James Brown
		posted on 10/1/2010 at 6:43 PM
		</div>
		<div class="comment_text"><p>This is how you could deal with it on the client side:  <a href="http://disq.us/url?url=http%3A%2F%2Fbit.ly%2FbyqTXJ%3A74aHUZ_oQJTT4Rmk_lzJ3FP6u3I&amp;cuid=3321886" rel="nofollow noopener" title="http://bit.ly/byqTXJ">http://bit.ly/byqTXJ</a></p><p>For Twitter or Facebook, you could do something similar where you check if a function from their library exists and then display a message (or nothing?) if their site is down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726768">2</a> by Dave Ferguson
		posted on 10/1/2010 at 6:54 PM
		</div>
		<div class="comment_text"><p>What about using the onload attribute of the iframe?  You then may be able to use some dom manipluation to find out the content of the frame and see if it is accurate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726773">3</a> by todd sharp
		posted on 10/1/2010 at 7:34 PM
		</div>
		<div class="comment_text"><p>@Dave Ferguson - for some reason the load/error handlers do not fire in jQuery with an iframe.</p><p>@Ray:  How about something like this?  <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FrhkRkSQy%3A-_4mKoFR9EwXsOM9optF_9hLC_U&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/rhkRkSQy">http://pastebin.com/rhkRkSQy</a>  Can't verify it works 100% because Facebook is blocked here at work - but in theory it should work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726769">4</a> by todd sharp
		posted on 10/1/2010 at 7:37 PM
		</div>
		<div class="comment_text"><p>I copy/pasted that FB iframe url from another page, but you get the idea.  Go here to generate your own url to test with:  <a href="http://disq.us/url?url=http%3A%2F%2Fdevelopers.facebook.com%2Fdocs%2Freference%2Fplugins%2Flike%3AIHmxE4sT1Vpe-Ihqq0Wnb4-hREg&amp;cuid=3321886" rel="nofollow noopener" title="http://developers.facebook.com/docs/reference/plugins/like">http://developers.facebook....</a></p><p>Again...facebook, blocked, yada yada...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726776">5</a> by Raymond Camden
		posted on 10/1/2010 at 9:34 PM
		</div>
		<div class="comment_text"><p>@JB: Yep, looks smart. Thanks</p><p>@Dave: I would think you would still need a timer to see if the variable is set. Oh - you could make the iframe hidden at first and only show it on a good load. That would probably be better.</p><p>@Todd: That looks good too - can you try it when you get off work and let us know?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726771">6</a> by Adam Tuttle
		posted on 10/6/2010 at 7:45 PM
		</div>
		<div class="comment_text"><p>Here's how I would handle the possibility of external resources being down (even specifically using Facebook as an example):</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ffusiongrokker.com%2Fpost%2Fprotecting-usability-in-the-age-of-like%3AptKM3gJVSXGfb5YfZN5WwpbS5lg&amp;cuid=3321886" rel="nofollow noopener" title="http://fusiongrokker.com/post/protecting-usability-in-the-age-of-like">http://fusiongrokker.com/po...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726772">7</a> by Raymond Camden
		posted on 10/8/2010 at 5:25 PM
		</div>
		<div class="comment_text"><p>That's a damn nice tip. Thanks for sharing that Adam.</p><p>Is there anything jQuery can't do?</p></div>
	</div>
</div>
		