
<div class="comment" id="c_1713657644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657644">1</a> by Edward T
		posted on 9/22/2006 at 6:19 AM
		</div>
		<div class="comment_text"><p>I do basically the same thing, with the distinctions that you already make about setting the session variable on form submit.  A side note, if you permit users to log out of your application, and typically clear session values on logout, remember not to clear your session login count when you log out someone who has failed.</p><p>To make things even harder to figure out, I check for the logout before anything displays on any page, and redirect to a lockout.cfm page on failure.  I usually enforce password complexity and do case-sensitive checks, so I typically just want to slow down brute force attacks.</p><p>I set up one application where I flagged the user for lockout in the database after a session lockout; that was not so good, though - it was too easy to create denial of service attacks by locking everyone out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657646">2</a> by Gary Fenton
		posted on 9/22/2006 at 1:36 PM
		</div>
		<div class="comment_text"><p>I log attempts in a db from both an IP address and against a username. Because I'm logging against a username it can count failed attempts even if the hacker clears their cookies/session or rotates their IP address. Of course when the genuine user tries to log in it may block them if their account has been attacked, but this is a security measure and it's in their interest to protect their account. Banks would do the same thing if they detect attempted fraud on your account.</p><p>Logging to a db can also detect slow attacks that happen over a long period of time - scripted ones that may only try a few attempts per hour per username over weeks so not to raise the alarm. How far you take this depends on the value of the data you're protecting and the consequences of a hacker getting in. Our logs do take up a lot of disk space but it was a cost built in to the budget and we can change the purge date if they become too big.</p><p>Another idea I'd like to share is to ask a security question at login if a user tries to log in from a different IP address or computer from their last successful login. You can do this by checking for the presence of a cookie deposited from their last login (or an encrypted value in a cookie for higher security). This will only infrequently inconvenience a minority of users (e.g. those on a dynamic IP or periodically clear their cookies) but it will show hackers that their chances of a brute force attack are ridiculously tiny and they're better off hacking someone else's site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657645">3</a> by Justice
		posted on 9/22/2006 at 3:32 PM
		</div>
		<div class="comment_text"><p>I also log failed attempts from a given IP address, and if I get 10 consecutive failed password attempts to any username from a given IP, I ban that IP from further attempts until I manually release it.  I do give the user a message telling them that they will need to contact their customer service rep befure any further attempts can be made, but this just makes me feel better about script kiddies not being able to brute force any of my pages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657649">4</a> by Edward T.
		posted on 9/22/2006 at 4:47 PM
		</div>
		<div class="comment_text"><p>It just occurred to me, reading Gary and Justice's comments - we could put Captcha images on login pages.  They wouldn't have to be very long at all - just a couple or three characters - and that would pretty much bring brute force to a halt. What do you think?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657648">5</a> by Gary Fenton
		posted on 9/22/2006 at 4:59 PM
		</div>
		<div class="comment_text"><p>Edward, nice idea. That would help deter scripted attacks (programatically and pyscologically) but I would be concerned for users who can't visually work out the captcha text (for mental or optic reasons). It's also slightly discouraging to 20-20 vision users, some who would log in at least daily. I know typing in 3 extra chars is nothing (perhaps taking Joe Average 3 seconds longer) but you know how funny users can be about these things!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657650">6</a> by Raymond Camden
		posted on 9/22/2006 at 5:12 PM
		</div>
		<div class="comment_text"><p>I'm with Gary. I do think this would help, but would be a royal pain in the rear.</p><p>However - I have seen sites that only use CAPTHA after you fail to logon. That would strike a good balance don't you think?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657651">7</a> by Dan G. Switzer, II
		posted on 9/22/2006 at 5:37 PM
		</div>
		<div class="comment_text"><p>@Justice:</p><p>Be careful using the IP address as a sure fire way to identify someone. Most companies will use a proxy or a router which make all outbound traffic coming from that location use the same IP address. This means blocking a single IP address could erronously block many users.</p><p>Also, a hacker won't have any problem changing the IP address of his attacks.</p><p>While collecting the IP address is all good and well, just don't think it's a surefire method. I'd also not block an IP, but just the specific account, as you could end up locking out legitimate users.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657652">8</a> by Edward T.
		posted on 9/22/2006 at 5:51 PM
		</div>
		<div class="comment_text"><p>Ooo, Ray, *that* is a great solution!  I'm going to try that TODAY!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657654">9</a> by Dean H. Saxe
		posted on 9/22/2006 at 8:24 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>You're right about the session variables, bad idea.  Never use any variables under the control of the user for such information, for this to work it is *required* that the number of attempts be stored with the user record being checked.</p><p>Another problem with lockouts is that they can cause a massive denial of service.  So, a few things to think about (directed at many of the comments):</p><p>1) Error messages should never include information about whether the username or password was invalid.  "Inavlid login" is sufficient and doesn't tell the attacker if he has a valid username.</p><p>2) Same thing for lockout messages, they are never sent to the users browser.  If the user is locked it must be communicated via email, otherwise the attacker knows he has a valid user.</p><p>3) Lockouts that expire only slow down attackers somewhat, they don't prevent attacks from succeeding.  Combined with bad error messages, an attacker will just set up a multithreaded attack scenario working on many users at a time, waiting for locked users to be unlocked.</p><p>4) Bad passwords make this easy.  Enforce high password complexity either through long passphrases or complex passwords and force regular password rotation.  Most accounts are broken through this kind of brute-force attack.</p><p>5) Logging IP addresses is pretty useless.  Botnets have hundreds or thousands of machines with different IP addressed.  If you block based on IP, you may DoS an entire company or service provider.</p><p>6) Many CAPTCHA implementations are easily broken by automated machines.  Of course I could just hire cheap overseas labor to do it manually, if I had enough motive. (Yes, its been done.)</p><p>So, what's the best way to handle this IMHO?  Progressively longer lockouts combined with email notification to the user, eventually resulting in a hard-lockout which must be reset manually by an admin.</p><p>5 attempts.  Lock out 15 min and email user.<br>3 attempts.  Lock out 30 min and email user.<br>2 attempts.  Lock out 6 hours and email user.<br>1 attempt.  Lock out 24 hours and email user.<br>1 attempt.  Hard lock out.  Email user.</p><p>This gives you 30+ hours to find an attack in progress (you are monitoring logs, right?) and for users to be informed that they have either locked themself out and it will be reset in X minutes or that an attacker is trying to brute force their account.  This will significantly slow down an attack and any passwords which are not trivially weak will remain protected.</p><p>Of course, if I can perform SQL Injection on your DB and retrieve the passwords or use XSS to socially engineer your users, all of this is a moot point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657655">10</a> by Raymond Camden
		posted on 9/22/2006 at 8:30 PM
		</div>
		<div class="comment_text"><p>"Of course, if I can perform SQL Injection on your DB and retrieve the passwords or use XSS to socially engineer your users, all of this is a moot point."</p><p>Well, all of us are using cfqueryparam and valid ULR/Form checking, right?</p><p>-sigh- (If only that was true...)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657660">11</a> by Dean H. Saxe
		posted on 9/22/2006 at 8:41 PM
		</div>
		<div class="comment_text"><p>If only Ray.  Then I'd be out of a job!</p><p>FWIW, CFMX doesn't have good protection from XSS.  You have to write your own code to ensure escaping of all XSS chars:</p><p>&lt;<br>&gt;<br>(<br>)<br>#<br>&amp;<br>'<br>"</p><p>And that's for output encoding... input validation is another challenge altogether.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657661">12</a> by Christopher Wigginton
		posted on 9/22/2006 at 10:03 PM
		</div>
		<div class="comment_text"><p>The problem about a denial of service attack locking everyone out is when you make the login id's generally available, such as displaying the posters id in a forum post.  The trick is to use an additional display nick that can be used for internal site traffic and an id that is only used for the login.</p><p>You can really keep the script kiddies at work by setting up field name randomization.  You generate a random name for both the id and password, store those in the session.  On the return trip, you compare the session.passwordField with a StructKeyExists(Form,session.passwordField)test, you get the idea.  A script kiddie can get around this, but that means extra work by having to process the returned form.</p><p>Also don't forget that anyone hacking into your site is committing a crime, so logging IP's, while expensive, can be very worthwhile when you can turn the logs over to the FBI.</p><p>If you really want to have fun,  setup a honey pot with bogus data.  Have it alert you at what you can pretty much be sure is a hack attempt.  Let the idiot log in, have a message that they are logged on, let them "Change" their email (as in stupid enough to provide a way to contact them) and then log everything and learn a little bit about what the hacker is trying to do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657663">13</a> by Dean H. Saxe
		posted on 9/22/2006 at 10:21 PM
		</div>
		<div class="comment_text"><p>Parsing rotating field names is trivial for anyone who is dedicated.</p><p>Guessing passwords is not a crime.  IP Addresses which are outside the country and/or part of a botnet may not be traceable to the owner.  So that's a moot point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657676">14</a> by Christopher Wigginton
		posted on 9/22/2006 at 11:36 PM
		</div>
		<div class="comment_text"><p>Um, guessing a password is a crime if you use it...  If you access something that you are not supposed to.</p><p>18 U.S.C. 2701.</p><p>Unlawful Access to Stored Communications<br>§ 2701. Unlawful Access to Stored Communications</p><p>(a) Offense.--Except as provided in subsection (c) of this section whoever–</p><p>(1) intentionally accesses without authorization a facility through which an electronic communication service is provided;  or <br>(2) intentionally exceeds an authorization to access that facility; and thereby obtains, alters, or prevents authorized access to a wire or electronic communication while it is in electronic storage in such system shall be punished as provided in subsection (b) of this section.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657675">15</a> by Tom Mollerus
		posted on 9/23/2006 at 12:17 AM
		</div>
		<div class="comment_text"><p>I agree that relying on IP addresses is too problematic, since IP addresses could cover multiple users. And as Ray says, session-based cookies are pretty easy to clear. So how about a combination of cookies and cache tracking?<br>&lt;A HREF="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.mukund.org%2Fblog%2F101%2F%3AP6fX0D29WOEiWb8XMwjhAt0f3nE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mukund.org/blog/101/">http://www.mukund.org/blog/...</a>"&gt;<a href="http://disq.us/url?url=http%3A%2F%2Fwww.mukund.org%2Fblog%2F101%2F%3C%2FA%3E%3AIz0aHz8IVJ6S3Rg31aNMpe1sp44&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mukund.org/blog/101/</A>">http://www.mukund.org/blog/...</a></p><p>If you manage to embed a unique session ID in a cached JavaScript file, you can use the JavaScript file to send the session ID back to the server (say, via AJAX or with something as simple as an image preload). Since the JS file is cached, it isn't cleared as easily as cookies can be. So you can rely on cookies and on cached files in tandem to at least try to keep session identification working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657677">16</a> by tc
		posted on 9/26/2006 at 8:02 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I don't understand the lines:<br>&lt;cfif false&gt;<br>    &lt;!--- log the user in ---&gt;<br>    &lt;cfset session.loginattempts = 0&gt;<br>&lt;cfelseif true&gt;<br>    &lt;cfset session.loginattemps = session.loginattempts + 1&gt;<br>&lt;/cfif&gt;</p><p>How would the first CFIF in this sequence ever execute?  If it never executes, what purpose is it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657673">17</a> by Raymond Camden
		posted on 9/26/2006 at 8:58 PM
		</div>
		<div class="comment_text"><p>This was just a demo, so I wrote to make it so that your logon ALWAYS failed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657674">18</a> by Geoff
		posted on 9/27/2006 at 6:52 PM
		</div>
		<div class="comment_text"><p>"I agree that relying on IP addresses is too problematic, since IP addresses could cover multiple users."</p><p>You could check if CGI.HTTP_X_Forwarded_For exists - I can't say I'm entirely sure how that works, or if it's reliable, but I believe if the punter is using a proxy, you'll skip that ip and see their 'real' one..</p></div>
	</div>
</div>
		