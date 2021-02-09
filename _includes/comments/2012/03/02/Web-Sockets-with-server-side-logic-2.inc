
<div class="comment" id="c_1713739366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739366">1</a> by Salvatore Fusto
		posted on 3/3/2012 at 2:05 PM
		</div>
		<div class="comment_text"><p>Ray,<br>very interesting posts: can you add a feature so a user can log out from the chat?<br>the logout would update the chat users list.<br>Thanks and regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739354">2</a> by Raymond Camden
		posted on 3/3/2012 at 5:31 PM
		</div>
		<div class="comment_text"><p>There is support for disconnecting. Also, the server is _supposed_ to notice when you close the connection. That part is broken.</p><p>So basically, you can do it manually, and it will also happen automatically in the next update.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739369">3</a> by Matt Bram
		posted on 5/9/2012 at 8:45 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>I'm banging my head against the wall trying to get wsPublish() to work while using coldbox. I was just curious to see if you've experimented with websockets and front end controllers. I noticed that someone posted a bug on the bug report at Adobe Labs, which dealt with Java Concurrency. So, I think that it is either breaking because of the framework interception on the Application.cfc, or it could be because the framework uses multiple threads. Taking a stab at it...<br>Thanks!<br>Matt B</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739353">4</a> by Raymond Camden
		posted on 5/9/2012 at 3:37 PM
		</div>
		<div class="comment_text"><p>Nope, I've not done any WS stuff with MVC frameworks. If I can do a demo today with it, I will.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739360">5</a> by Raymond Camden
		posted on 5/10/2012 at 6:18 PM
		</div>
		<div class="comment_text"><p>Btw - I'm booked like crazy. If you can send me a ColdBox app that doesn't have any database dependencies and shows you trying to broadcast a WS, I can try running it here on my latest build. Not trying to be lazy, but...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739364">6</a> by Matt Bram
		posted on 5/11/2012 at 6:45 PM
		</div>
		<div class="comment_text"><p>I think that this may have something to do with Apache rewrite rules. I'm exploring now and will post back. Do you know if there is anyway to get an engineering brief from Adobe on the lifecycle of the websocket request? I wouldn't even know who to ask :)</p><p>Thanks for your help!<br>Matt B</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739362">7</a> by Raymond Camden
		posted on 5/11/2012 at 6:58 PM
		</div>
		<div class="comment_text"><p>You could try the main forums at Adobe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739365">8</a> by jeff horne
		posted on 4/3/2013 at 5:28 PM
		</div>
		<div class="comment_text"><p>This demo gets the json parse error I commented about on another blog entry.</p><p>SyntaxError: JSON.parse: unexpected character</p><p>var data = JSON.parse(<a href="http://disq.us/url?url=http%3A%2F%2Fmessage.data%3A3Pj5z629sKdbTHT63i5c2lRDjyk&amp;cuid=3321886" rel="nofollow noopener" title="message.data">message.data</a>); Line 67</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739368">9</a> by Raymond Camden
		posted on 4/3/2013 at 5:37 PM
		</div>
		<div class="comment_text"><p>This reflects a change in WebSockets from pre-release to release. You no longer need to JSON parse the result. Simple remove JSON.parse().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739367">10</a> by jeff horne
		posted on 4/4/2013 at 2:19 AM
		</div>
		<div class="comment_text"><p>Fantastic.  Thanks Ray.</p></div>
	</div>
</div>
		