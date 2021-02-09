
<div class="comment" id="c_1713727367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727367">1</a> by Raymond Camden
		posted on 11/5/2010 at 5:28 PM
		</div>
		<div class="comment_text"><p>By the way - I assume the technique above was simple enough where a code sample wasn't necessary. If I'm wrong (wouldn't be the first time), I could whip up a complete example in a few minutes. Let me know!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727373">2</a> by Scott Stroz
		posted on 11/5/2010 at 5:48 PM
		</div>
		<div class="comment_text"><p>I like the simple approach you suggest here - and I do not mean that as an insult, I love simple solutions to seemingly difficult problems. However, it should be noted that this will not stop some one from logging in from behind the same firewall - even from their own home.</p><p>If you are using J2EE session vars, can't you use that value stored in application scope to solve this problem? Using the J2EE session ID should actually be able to stop a user from logging in to the app from the same machine using a different browser.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727374">3</a> by Brad Newman
		posted on 11/5/2010 at 5:52 PM
		</div>
		<div class="comment_text"><p>This is great Ray.. I think that storing the last page request time is going to be allot more functional than storing a login time and making the user wait to assure they don't still have an active session.</p><p>Thanks for the thoughts!</p><p>Brad</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727387">4</a> by Raymond Camden
		posted on 11/5/2010 at 5:54 PM
		</div>
		<div class="comment_text"><p>Scott - first para: Agreed. second para: Dude - I've got no idea what you mean here. What value in the app scope? Oh - or do you mean use Application scope to store the values instead of the db?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727379">5</a> by Scott Stroz
		posted on 11/5/2010 at 5:59 PM
		</div>
		<div class="comment_text"><p>Yea...that does nto make much sense...I suck..I know it.</p><p>What I meant was, wouldn't the session ID be a better piece of identifying information than IP address?  You can have thousands of computers behind a firewall but your app would see them all as the same IP address.</p><p>I think a solution that stores user info (like userId), session ID and last login (either in app scope or DB) would be more effective at making sure that a user can only login from one location at a time...maybe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727382">6</a> by Raymond Camden
		posted on 11/5/2010 at 6:02 PM
		</div>
		<div class="comment_text"><p>Hmm. So user X logs in and you record:</p><p>X+session.urltoken+lastlogin</p><p>Hmmm. The problem I see is if I switch browsers though. (But realistically, what non-Nerd does that?) I think with the users behind a firewall you have one organization. The chance of a bad guy attacking a good guy in one org is probably minimal. As we all know, all the bad guys are Nigerian scammers. ;)</p><p>Interesting - let's see what others say.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727380">7</a> by Scott Stroz
		posted on 11/5/2010 at 6:10 PM
		</div>
		<div class="comment_text"><p>Yes, it can cause issues if you switch browsers - on the web based interface for my home router I will get a message if I try to login from Firefox while already logged from Chrome. But, as you pointed out how many non-nerds do that? Hell, hoe many non-nerds know that more than one web browser exists?</p><p>I am not so sure I agree that the chance of a 'bad guy' attacking a 'good guy' in one org is minimal. Some businesses are cut throat and I can easily see why one person might try to 'attack' another in order to make them look bad or to get ahead.</p><p>Routers/firewalls ned to have some way to know what response is coming back from what request so it can forward to the correct IP address behind the firewall. Is it possible there may be something in the header of the request that could be used to uniquely identify the computer, rather than IP address?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727394">8</a> by Ed Andrade
		posted on 11/5/2010 at 6:55 PM
		</div>
		<div class="comment_text"><p>For reasons I no longer remember, we use Client Scope for all sorts of variables inclinding logged in status, roles, etc.  I'm not saying this is the best way, but this app is about 10 years old and this method has worked well for us over that time and over every major version of CF in between.</p><p>How we handle clearing that info is on logout we have a routine that clears the client and cookie variables.  But what about when someone closes their browser without clicking Logout?  Everything is done within frames and the main frameset has the "onunload" defined which calls the same logout routine.  I know... what about people who turn off JavaScript?  Well, this is a corporate app where we can dictate things, and a lot of the rest of the app would not work without JavaScript anyways.</p><p>So, that is what we did.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727391">9</a> by Pedro Morin
		posted on 11/5/2010 at 9:42 PM
		</div>
		<div class="comment_text"><p>I inherited a CMS that used client based logins (they never expired) and allowed for unrestricted HTML (or any language for that matter) into their database. It's amazing what's out there. Just using session variables worked great for me and was an easy switch using application.cfc. The client was upset at first that they now had to login every time, but they got used to it. And now, their system is magically less buggy since I started using Anti-sammy for their HTML inputs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727396">10</a> by Brian
		posted on 11/18/2010 at 1:19 AM
		</div>
		<div class="comment_text"><p>My method for handling multiple logins from separate machines was:<br>1. create 2 new structs in the application scope<br>2. store active sessions with the token and userid in the activesessions scope<br>3. on each log in check the struct for the same userid but different token<br>4. If an older session exists, add that userid and token to the killsessions struct<br>5. When the first session tries to reload a page, the onrequest will check the killsessions struct for its session, if it exists, it kills the session and takes them to the login page with a notification.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727368">11</a> by Brian
		posted on 11/18/2010 at 1:22 AM
		</div>
		<div class="comment_text"><p>2. store active sessions with the token and userid in the activesessions *struct</p></div>
	</div>
</div>
		