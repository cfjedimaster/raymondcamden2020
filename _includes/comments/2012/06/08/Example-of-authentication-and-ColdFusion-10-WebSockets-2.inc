
<div class="comment" id="c_1713741535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741535">1</a> by John Jarrard
		posted on 11/9/2012 at 2:45 AM
		</div>
		<div class="comment_text"><p>Hi Ray,   So I downloaded your demo, copied it to a freshly setup/updates CF10 server and it does nothing.  I've checked to make sure port 8575 is open and that the WebSocket Server is enabled.   I have tried to run the script locally as well... yet nada.</p><p>Have you seen this happen?  Or what would you suggest I do to track down the issue?</p><p>Thanks so much,<br>JJ</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741534">2</a> by Raymond Camden
		posted on 11/9/2012 at 2:51 AM
		</div>
		<div class="comment_text"><p>Do you see any issues in the JavaScript console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741537">3</a> by John Jarrard
		posted on 11/9/2012 at 2:54 AM
		</div>
		<div class="comment_text"><p>I'm getting this:</p><p>WebSocket network error: The operation couldn’t be completed. Operation timed out</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741539">4</a> by Raymond Camden
		posted on 11/9/2012 at 2:59 AM
		</div>
		<div class="comment_text"><p>Have you tried a simple 'hello world' type websocket example just to ensure even basic things work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741542">5</a> by John Jarrard
		posted on 11/9/2012 at 3:06 AM
		</div>
		<div class="comment_text"><p>Yes, I have the devnet examples on the server...</p><p>http://75.103.111.231/websocket/adc/v1/helloWorld.cfm</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741540">6</a> by John Jarrard
		posted on 11/9/2012 at 3:17 AM
		</div>
		<div class="comment_text"><p>Ok, I narrowed it down - it was that the firewall wasn't allowing outbound, server originated traffic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741545">7</a> by Raymond Camden
		posted on 11/9/2012 at 3:32 AM
		</div>
		<div class="comment_text"><p>That's probably it. :)</p></div>
	</div>
</div>
		