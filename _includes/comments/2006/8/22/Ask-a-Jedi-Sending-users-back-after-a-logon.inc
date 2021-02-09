
<div class="comment" id="c_1713656709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656709">1</a> by FTPoed
		posted on 8/23/2006 at 3:52 AM
		</div>
		<div class="comment_text"><p>I usually do a &lt;cflocation url="#CGI.http_referer#" addtoken="no"&gt;</p><p>Seems to work well. Any drawbacks to doing it that way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656699">2</a> by todd
		posted on 8/23/2006 at 6:06 AM
		</div>
		<div class="comment_text"><p>FTPoed:</p><p>When you post to an action page from the login template, the http_referer becomes the login page itself.  Ray's method insures that the page _before_ the login page is where the user is sent back to.  Your method seems like it would work if the login form was on the actual page that the user is logging in from (in a pod for example).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656714">3</a> by Neil Bailey
		posted on 8/23/2006 at 7:04 AM
		</div>
		<div class="comment_text"><p>We have a session variable that gets set in the onRequestStart method - unless the page being loaded is one of a select list (*.cfc, login.cfm, etc).</p><p>I think I might like your method better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656713">4</a> by duncan
		posted on 8/23/2006 at 12:50 PM
		</div>
		<div class="comment_text"><p>FTPoed, CGI.HTTP_REFERER doesn't exist for all clients.  Certain software firewalls and the like deliberately remove this, or change what it's called.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656708">5</a> by Raymond Camden
		posted on 8/23/2006 at 2:42 PM
		</div>
		<div class="comment_text"><p>Thanks for responding guys. I was asleep. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656711">6</a> by Scott Stroz
		posted on 8/23/2006 at 4:10 PM
		</div>
		<div class="comment_text"><p>Who are you kidding?  You don;t sleep.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656722">7</a> by Raymond Camden
		posted on 8/23/2006 at 5:22 PM
		</div>
		<div class="comment_text"><p>It's funny. Some weeks I could work 24 hours a day. Some weeks -all I want to do is sit and get fat.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656717">8</a> by Neil Bailey
		posted on 8/23/2006 at 6:18 PM
		</div>
		<div class="comment_text"><p>I have already accheived 100% completion on the fat goal.  Now if I could put down the coke and dorritos, I'd be fine - that stuff is like crack to me!  Every day my wife asks me how many cokes I had, and every damn day I tell her.....the truth..as....she wants to know it :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656716">9</a> by todd
		posted on 8/23/2006 at 6:28 PM
		</div>
		<div class="comment_text"><p>Ray, I think I just found a bug.  Type a comment, hit cancel, then hit cancel on the alert.  It wipes out all comments but leaves the window open.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656710">10</a> by Tom Mollerus
		posted on 8/23/2006 at 6:49 PM
		</div>
		<div class="comment_text"><p>For applications where a user's session might time out while they're trying to save data, I include the login form in whichever page they're calling (instead of having a specific login page, such as the "login.cfm" referred to above). The login form contains code to pass along any form variables submitted so that the user doesn't lose their work:</p><p>&amp;lt;!--- If any form fields have been passed to this page ---&amp;gt;<br>&amp;lt;cfif IsDefined("FORM.fieldNames")&amp;gt;<br>	&amp;lt;!--- Pass them on to the next form ---&amp;gt;<br>	&amp;lt;cfloop index="field" list="#FORM.fieldNames#"&amp;gt;<br>	&amp;lt;cfif Left(field, 5) neq 'login'&amp;gt;&amp;lt;input type="hidden" name="#field#" value="#Evaluate("FORM." &amp; field)#"&gt;&amp;lt;/cfif&amp;gt;<br>	&amp;lt;/cfloop&amp;gt;<br>&amp;lt;/cfif&amp;gt;</p><p>Login form variables are always named starting with "login" so they're not ever passed in these hidden fields. The login process is always called first in page processing so that the additional form data is only processed if the login is successful. Otherwise, the login form is shown again and the same form data is retained in the hidden fields. Obviously, this doesn't work for file uploads, but it works for everything else-- and it saves you a lot of grief from users who would otherwise lose a lot of work that they left in their browser.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656715">11</a> by Raymond Camden
		posted on 8/23/2006 at 6:49 PM
		</div>
		<div class="comment_text"><p>Confirmed. Fixed here and in BlogCFC source (not in SVN).</p><p>Thanks Todd.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656718">12</a> by xzx
		posted on 9/19/2006 at 3:29 PM
		</div>
		<div class="comment_text"><p>dsds</p></div>
	</div>
</div>
		