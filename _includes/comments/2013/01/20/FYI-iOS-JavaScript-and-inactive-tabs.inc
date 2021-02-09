
<div class="comment" id="c_1713744480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744480">1</a> by Simeon Bateman
		posted on 1/22/2013 at 11:25 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>Mobile safari has pagehide and pageshow events for helping deal with this. I don't think it works for going between tabs, but it should help when going between apps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744482">2</a> by Raymond Camden
		posted on 1/22/2013 at 11:26 PM
		</div>
		<div class="comment_text"><p>Oh yeah? Let me test. I think you are wrong. If I'm wrong, I'll just delete this comment and it will be like I never doubted you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744481">3</a> by Raymond Camden
		posted on 1/22/2013 at 11:34 PM
		</div>
		<div class="comment_text"><p>That works - but - you would have to use the same technique as described in the SO article. Ie, given that I know how long I was gone, what did I miss?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744484">4</a> by Simeon Bateman
		posted on 1/22/2013 at 11:37 PM
		</div>
		<div class="comment_text"><p>I guess it kinda depends on how you setup your loop.  If your loop is really do this every 10 seconds then you need the heartbeat.</p><p>If the loop triggers every 10 seconds and your code says do what ever I need to since the last time I did it, then the events for show hide may be enough.</p><p>But isn't that the quintessential answer: "It depends!" :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744485">5</a> by Raymond Camden
		posted on 1/22/2013 at 11:38 PM
		</div>
		<div class="comment_text"><p>Agreed. And more options == more gooder. Thanks for sharing this. (Of course, the best solution, probably, would be the Page Visibility API!)</p></div>
	</div>
</div>
		