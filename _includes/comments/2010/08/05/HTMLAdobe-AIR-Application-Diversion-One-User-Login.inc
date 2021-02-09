
<div class="comment" id="c_1713725810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725810">1</a> by Hatem Jaber
		posted on 8/6/2010 at 2:41 AM
		</div>
		<div class="comment_text"><p>Thank you Ray, I am going to play with this, this should be a good start! I appreciate the help and look forward to more articles in the air/cf/js/jq series!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725825">2</a> by Henry Ho
		posted on 8/6/2010 at 2:46 AM
		</div>
		<div class="comment_text"><p>Can't the AIR app send the username/password every time?  Why do we need Session at all on a stateful AIR app?</p><p>Could we have used http(s) basic access authentication?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725829">3</a> by Raymond Camden
		posted on 8/6/2010 at 3:03 AM
		</div>
		<div class="comment_text"><p>"Can't the AIR app send the username/password every time? Why do we need Session at all on a stateful AIR app?"</p><p>In a Flex app, you can do it with Flash Remoting.</p><p>"Could we have used http(s) basic access authentication?"</p><p>I don't know. Ok - I checked the jQuery docs: <a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%2FjQuery.ajax%2F%3A1c0QRBLEELMVydxGrAwGlPUisDY&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquery.com/jQuery.ajax/">http://api.jquery.com/jQuer...</a></p><p>And it does look possible. CF's cflogin framework supports picking up on these credentials automatically, so that too is an option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725828">4</a> by Hatem Jaber
		posted on 8/6/2010 at 3:34 AM
		</div>
		<div class="comment_text"><p>Why would we want to pass the user info each time? If the app depends on the internet to work, assuming it's an app that needs to be constantly online, than i prefer to have the session set one time and be done with it. If you have to pass the login info each time that would mean each request would have to be authed every single time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725831">5</a> by Henry Ho
		posted on 8/6/2010 at 3:42 AM
		</div>
		<div class="comment_text"><p>@Hatem, you are sending CFID and CFSESSIONID every time via cookie, so the network payload is about the same.  You're correct that authentication will need to be done every time, but the server can scale better without session management.  Furthermore, the client does not have to handle session timeout.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725832">6</a> by Simeon Bateman
		posted on 8/6/2010 at 3:50 AM
		</div>
		<div class="comment_text"><p>"Why do we need Session at all on a stateful AIR app?"</p><p>The real reason is that while our client is stateful the server is not.  The session is still about letting the server keep track of you and letting it know when to not let a user have access anymore.</p><p>You will want to avoid sending login credentials over the wire every time.  This is essentially how http-basic-auth works (although they are hashed) with most public API's (google, yahoo, twitter).  All of these companies have started to move to OAuth (or similar) which allows you to send that information over the wire once and then you receive a session key for your troubles.  Then you send that session key with each of your requests.</p><p>Why bother with that when AIR maintains state with CF so well? Because while the browser in AIR does maintain cookies from the CF server, not all clients do.  And using the OAuth mechanism allows many different clients to connect and access the stateless server without having to support cookies.</p><p>And that is my long and over informative answer to a very simple question.</p><p>:)<br>Hi Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725830">7</a> by Henry Ho
		posted on 8/6/2010 at 4:05 AM
		</div>
		<div class="comment_text"><p>@Simeon</p><p>"You will want to avoid sending login credentials over the wire every time."</p><p>why?  How is OAuth that much better? (OAuth sucks for mobile, and OAuth2 is still in draft).  And isn't OAuth for transferring capabilities, not for user authentication only?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725811">8</a> by Marcin Szczepanski
		posted on 8/6/2010 at 4:18 AM
		</div>
		<div class="comment_text"><p>My understanding of OAuth is that it's not about avoiding sending credentials over the wire, but is about not giving your (say) Twitter credentials to a Twitter client / Twitter accessing website.  The client redirects to a page from Twitter where you enter your credentials to give the client a token it can use to access Twitter as you without ever knowing your credentials.  You still need to give your credentials to Twitter, at which point they go over the wire.</p><p>The other benefit of OAuth is that you can then access the Twitter site and see which applications have been given tokens and potentially revoke them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725813">9</a> by Marcin Szczepanski
		posted on 8/6/2010 at 4:19 AM
		</div>
		<div class="comment_text"><p>BTW - In case it wasn't clear, I'm not saying OAuth is only for Twitter, it was just an example.. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725812">10</a> by Henry Ho
		posted on 8/6/2010 at 4:34 AM
		</div>
		<div class="comment_text"><p>I think OAuth is irrelevant here.  The app in question is just consuming its own services, not 3rd party services.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725827">11</a> by Raymond Camden
		posted on 8/6/2010 at 5:02 AM
		</div>
		<div class="comment_text"><p>@Sim: Hi SIm! (For folks who don't know it, Sim is one of like 2 'go to' guys for my Flex/AIR questions. Surprised he showed up here though since the topic is HTML. :P</p><p>@Marcin: Twitter is fine. As it stands, 99% of all Twitter clients are written in AIR. :)</p></div>
	</div>
</div>
		