
<div class="comment" id="c_1713621153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621153">1</a> by Bill
		posted on 9/30/2005 at 7:47 PM
		</div>
		<div class="comment_text"><p>I do something kind of similar (since CF 4.7) I store the time of the users last visit to any page in the app. Then on each subsequent pageload when I check to make sure the user is actually logged in and has permission to view the page, I make sure the difference between their last visit and the current timestamp isn't greater than the amount of time I want the session to live for.</p><p>If the time is too great, I log them out and send them to the login screen with the appropriate message (you have been logged out, you have been idle for "XXX" minutes).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621151">2</a> by Yacoubean
		posted on 9/30/2005 at 7:54 PM
		</div>
		<div class="comment_text"><p>I'm confused about session variables.  I did a lot of playing and research a couple of years ago (using MX 6 back then).  From my observations, it looked like session variables actually use the CFID cookie, or something similar, to keep track of the user.  If I turned off cookies in my browser, session variables wouldn't work.</p><p>It could be that I was just messing something up, but from my understaning, it's impossible to keep track of a user with today's browsers without cookies, or using url variables (which is dangerous for security reasons).  Unless, of course, if they've logged in and you're passing things around with hidden form fields or other magic like that.  IP address is unreliable because of shared IP pools and network gateways, etc.  The only way to know who a person is (or their PC, to be more accurate) is for them to somehow tell you who they are (i.e, a cookie).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621144">3</a> by Raymond Camden
		posted on 9/30/2005 at 8:16 PM
		</div>
		<div class="comment_text"><p>You are right, if you disable cookies, session variables will not work... by default. In order to make them work w/o cookies, you need ot pass the value, session.urltoken, in each and every link. Luckily there is a function that will make that easier, urlsessionformat.</p><p>As for the security danger, I'd say it is mild. It would only be an issue if the user forwarded the link to someone else. Even then, the other user would need to follow the link before the session timed out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621154">4</a> by Tom Mollerus
		posted on 9/30/2005 at 8:44 PM
		</div>
		<div class="comment_text"><p>If the user has JavaScript disabled in their browser, another method that would work to alert a user to a timed out session is to use a META refresh to the login page. This isn't as convenient as JavaScript can be, since with JavaScript you can just show the user a popup alert and keep the current page in the background.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621157">5</a> by Ray Horn
		posted on 9/30/2005 at 9:23 PM
		</div>
		<div class="comment_text"><p>You can use OnSessionEnd to alert the user if you are using an AJAX-like interface that uses JavaScript to poll for the Session-end event.</p><p>In the past I have used a Database to track each user's session and then I age the session myself which gives me the data I need to tell the user proactively when the session will end either using Flash remoting or some other method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621158">6</a> by Raymond Camden
		posted on 9/30/2005 at 9:59 PM
		</div>
		<div class="comment_text"><p>That won't work, Ray. Everytime AJAX makes a request, CF will reset the session timeout. Basically you would end up with a session that never ends.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621161">7</a> by Doug
		posted on 9/30/2005 at 11:17 PM
		</div>
		<div class="comment_text"><p>Oh man, where to start? First, the Javascript and META refreshes are riddled with holes (I've tried them). As soon as a user opens a link in a new window or tab (or async call , as pointed out) that is calling the same site and therefore restarting the session, they don't work. If you follow the creed about not inconveniencing legitamate users with your technical solutions, both of those are out the window. Can you imagine surfing around a site, opening something in a new window (say, a privacy policy or TOS), going back to the first window and doing something like filling out a long form or text entry (long comments?) only to have it Javascript or META redirect on you before you are done? The prevalence of poorly designed sites is exactly why I compose all comments and messages offline and paste them into the form, rather than composing online and not knowing if something stupid is going to happen when you submit causing all of your data to be lost.</p><p>Don't session variables still work as long as the user has session (in-memory) cookies enabled? I'm not 100% sure now, but most of the time when a user "turns cookies off" they are turning persistent cookies off and session cookies will work just fine. It's harder to figure out how to turn all cookies off - I even forget how myself - but you can't really do much on the web without in-memory cookies.</p><p>Finally, let CF handle the session stuff. If you want to show a logged out message when the user's session expires and that user tries to access restricted content, then whatever function/code that checks if the user is logged in and redirects them to the login page can simply redirect them to a page with a "session timed out" message. I am assuming that you don't leave links to restricted content displayed on your page for un authenticated users (only display them once the user is logged in), so there should be few instances where the user will be directly accessing restricted content while not logged in. Better yet, make the message a generic one saying that the content requires a login and that their session may have timed out, so they must re-login. This isn't really a problem that requires a complicated technical solution, IMO.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621159">8</a> by Yacoubean
		posted on 10/1/2005 at 12:58 AM
		</div>
		<div class="comment_text"><p>"Don't session variables still work as long as the user has session (in-memory) cookies enabled? I'm not 100% sure now, but most of the time when a user "turns cookies off" they are turning persistent cookies off and session cookies will work just fine. It's harder to figure out how to turn all cookies off - I even forget how myself - but you can't really do much on the web without in-memory cookies."</p><p>I would think you're right.  But I have known people that are uber paranoid (hint, slashdot folks), and deny all cookies.  Someone told me once, "If a site requires cookies, than they don't need my business".  Personally I allow all cookies, because I don't have anything to hide.  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621160">9</a> by Tom Mollerus
		posted on 10/3/2005 at 4:49 AM
		</div>
		<div class="comment_text"><p>Doug,</p><p>You make a good point about how both the JS and Meta-refresh strategies have their flaws, but I would disagree that developers should just let CF handle all session-related messages, because there are valid reasons for telling the user that their session has ended or is about to end. For instance, if someone is filling out a long form (similar to what you say you've done), it might be considered helpful to receive an alert telling you that your session is about to expire. And Bank of America tells you via JS when your session has expired and then redirects you so that you're aware that there's no longer a secure connection available. They probably do it that way so that they can wipe the screen of any financially-sensitive information which would otherwise be left on your screen for other people to see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621162">10</a> by Doug
		posted on 10/3/2005 at 11:58 PM
		</div>
		<div class="comment_text"><p>Well for the basic question quoted, I would stick by letting  CF handle the session stuff. But I admit those instances named have valid reasons for doing what they do as in the banking example. Still, in any other case, warning of an impending session timeout is preferable than actually whisking the user away to another screen.</p><p>In fact, if you keep the user on the same screen and let them press submit with an expired session, you can serialize the user's form and session, save it to the newly created session, so that when they re-login and go back to that form (or are taken to it, if possible), it is prepopulated with the "lost" info with a message explaining what happened.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621163">11</a> by Peter Tilbrook
		posted on 10/4/2005 at 3:19 AM
		</div>
		<div class="comment_text"><p>This custom tag is a viable solution:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftinyurl.com%2F8fd9y%3AmfXagioKmkx60wO2b0UTqGpDN_Q&amp;cuid=3321886" rel="nofollow noopener" title="http://tinyurl.com/8fd9y">http://tinyurl.com/8fd9y</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621165">12</a> by Joerg Zimmer
		posted on 10/4/2005 at 3:12 PM
		</div>
		<div class="comment_text"><p>Hi all,<br>seems like I started some kind of avalanche :)<br>Since I don't like to rely on client based methods (Javascript, cookies, etc.) I thought about a way to store something in the clientstorage to check on every request to the login page...<br>Just a thought... nothing tested that way...<br>Anyone who did this?</p><p>Greetz</p><p>Joerg</p></div>
	</div>
</div>
		