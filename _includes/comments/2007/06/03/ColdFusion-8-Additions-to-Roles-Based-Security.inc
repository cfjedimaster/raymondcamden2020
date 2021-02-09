
<div class="comment" id="c_1713666212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666212">1</a> by Scott P
		posted on 6/3/2007 at 9:39 PM
		</div>
		<div class="comment_text"><p>I see your point but instead of removing or decoupling, I'd like to see it as an optional setting.  Maybe at the application level, useWWWAuth or something.</p><p>My reason is I like having IIS handle the auth for some of my apps.  Support for password policies and such are supported at the OS level, I don't have to build it in to the application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666202">2</a> by Raymond Camden
		posted on 6/3/2007 at 10:00 PM
		</div>
		<div class="comment_text"><p>Yep, that is what I meant - but I certainly didn't say it right. I can see the feature being useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666218">3</a> by Marcin Szczepanski
		posted on 6/4/2007 at 2:25 AM
		</div>
		<div class="comment_text"><p>Personally I wouldn't just check for isLoggedIn for something like posting to a blog.  Even if the only person logging in was the blog owner, I'd still give them an "admin" role to check against instead.</p><p>It just doesn't feel right to me to only check if they're logged in and not worry about who they are, and I guess this kind of situation is where that paranoia makes sense :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666217">4</a> by Chip Temm
		posted on 6/4/2007 at 2:26 AM
		</div>
		<div class="comment_text"><p>RE your example:<br>Couldn't you turn to Roles to help you with this problem? What you're talking about is really authorization (authZ), not authentication(authN) anyway. In your example, the person has already presented their credentials and been accepted as who they say they are. Whether those credentials allow them access to specific functionality (BlogCFC) is another matter. Define a BlogCFC_User Role. If isUserInRole('BlogCFC_User') returns false, no dice.</p><p>Now if your webserver authN does do any authZ in the container, maybe you want to do a lookup based on the authenticated username on their first hit and setup your own authorizations.</p><p>You do not have to call cfloginuser from inside of cflogin, so you could setup you own roles in that way even if the user is authenticated.  However, I have to test and see what this would do to previously existing roles.  My first guess is that it would wipe them, so you'd probably want to check them first and append them to whatever you were doing.  Note that calling cfloginuser outside of cflogin will turn the user into an 'authenticated' one (isUserLoggedIn will return YES), so you'd have to kind of do an anti-CFLogin to make sure it isn't run in this way (to add Roles) UNLESS the user is already logged in.</p><p>Does that muddy the issue enough?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666222">5</a> by Raymond Camden
		posted on 6/4/2007 at 7:26 AM
		</div>
		<div class="comment_text"><p>I beg to differ. In the situation I provided, the user did not present their credentials. Or to be more clear - they presented their credentials to the web server, not to the application. The web server said, "You must authenticate before you view any of my files,", but BlogCFC needs a different authentication for its own system. Even if I did use roles, I still need a way to _set_ the roles. I do it now in cflogin, which will never run since you logged in at the web server level and cflogin thinks your already authenticated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666224">6</a> by Dan G. Switzer, II
		posted on 6/4/2007 at 9:46 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>This is obviously a hack (and the issue does seem like oversite to me and would cause us issues as well,) but couldn't you check to see if a Session Login variable exists and if it doesn't, run CFLOGOUT tag?</p><p>That way you'd clear the knowledge of the Web Server Authentication and could then run the CFLOGIN.</p><p>Just an idea.</p><p>It does seem like there should be a way to specify what kind of CFLOGIN authentication should be used--maybe per CFAPPLICATION (i.e. All, CF-only, Web-server only, etc.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666225">7</a> by Raymond Camden
		posted on 6/4/2007 at 9:57 PM
		</div>
		<div class="comment_text"><p>I'm kind adoing that now. My isAuthenticated checks for a session variable. I don't check getAuthUser().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666223">8</a> by Chip Temm
		posted on 6/5/2007 at 5:56 AM
		</div>
		<div class="comment_text"><p>@Ray<br>I think you mean BlogCFC _wants_ its own authentication. If the person who installed the app did so in a directory protected by webserver-based authN then I would assume that they a) did that on purpose and b)they would probably like to have one credential store/login. The webserver has validated the enduser's identity (which the installer told it to do)- why does BlogCFC _need_ to do that again? Granted, it is easier for the app to do it that way, but it is not a requirement.</p><p>As my previous post mentioned, you don't have to call cfloginuser from inside cflogin, so you do have a way to set the roles, but it would require you changing your use of cflogin.</p><p>I think as more people try to integrate applications like BlogCFC into their systems, we will see a greater need for a pattern in which applications are able to expose their authorization schema to the enclosing system and make use if its authentication.  Intranets are becoming notorious for forcing users to login repeatedly (even where they use LDAP or Active Directory to ensure one user/one credential).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666201">9</a> by Chip Temm
		posted on 6/5/2007 at 5:56 AM
		</div>
		<div class="comment_text"><p>@Ray<br>I think you mean BlogCFC _wants_ its own authentication. If the person who installed the app did so in a directory protected by webserver-based authN then I would assume that they a) did that on purpose and b)they would probably like to have one credential store/login. The webserver has validated the enduser's identity (which the installer told it to do)- why does BlogCFC _need_ to do that again? Granted, it is easier for the app to do it that way, but it is not a requirement.</p><p>As my previous post mentioned, you don't have to call cfloginuser from inside cflogin, so you do have a way to set the roles, but it would require you changing your use of cflogin.</p><p>I think as more people try to integrate applications like BlogCFC into their systems, we will see a greater need for a pattern in which applications are able to expose their authorization schema to the enclosing system and make use if its authentication.  Intranets are becoming notorious for forcing users to login repeatedly (even where they use LDAP or Active Directory to ensure one user/one credential).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666199">10</a> by Irv Wilson
		posted on 7/31/2012 at 4:17 PM
		</div>
		<div class="comment_text"><p>Ray, a five year old post but still very helpful!  Thank you! I was wondering why my cflogin stuff wasn't firing.  We use a common third party authentication app across a number of sites and servers that sets cgi.remote_user.  I was trying to look for it and then sort of transfer over to cflogin for a particular app.  The app kept skipping this and yet both IsUserLoggedIn and getAuthUser made it appear my cflogin had run when it hadn't.  Now I know why!  Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666200">11</a> by Raymond Camden
		posted on 7/31/2012 at 5:19 PM
		</div>
		<div class="comment_text"><p>Glad to help.</p></div>
	</div>
</div>
		