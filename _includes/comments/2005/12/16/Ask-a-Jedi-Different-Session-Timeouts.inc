
<div class="comment" id="c_1713623404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623404">1</a> by tony petruzzi
		posted on 12/17/2005 at 12:16 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>You were definiatly on the right track. We have a website that is external, however we have internal people hitting it through an internal ip address. The way I determine who is who, is by the CGI.REMOTE_ADDR. If I see that it starts with the internal ip (ie. 10.0) then I know they are internal. With that bit of information I can then use a simple if statement to execute code. So if I have a statement that logs a person out after a certain amount of time, I can choose not to run if for the internal people:</p><p>&lt;cfset variables.isinternal = false&gt;<br>&lt;cfif ListFirst(cgi.REMOTE_ADDR, '.')  EQ 10&gt;<br>	&lt;cfset variables.variables.isinternal = true&gt;<br>&lt;/cfif&gt;<br>&lt;cfif DateDiff(n, seesion.lastvisit, now()) GTE 15 AND NOT variables.variables.isinternal&gt;<br>	&lt;cfset session.token = ""&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623398">2</a> by Ryan Guill
		posted on 12/17/2005 at 12:20 AM
		</div>
		<div class="comment_text"><p>We have a custom made javascript that will keep someone logged in.  You set it to a timeout just before your session timeout and if the browser stays open on a single page for longer than the alloted time it issues a refresh.  The only problem is on pages that you post to, but I never have the user on a page that is posted to.  I either use gets or if I need a post, I post to an action page and redirect to the next page.</p><p>I would be willing to share if you would like it.  You could put it in where the code only runs if they are certain users im sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623408">3</a> by Alan
		posted on 12/17/2005 at 1:49 AM
		</div>
		<div class="comment_text"><p>Ray and everybody - thanks a ton.  I think we have what we need to solve our problem.  Ray, you da man.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623405">4</a> by Rob Brooks-Bilson
		posted on 12/17/2005 at 2:51 AM
		</div>
		<div class="comment_text"><p>Just to be a security nag here, it's better if you don't rely on the remote IP as that's pretty easy to spoof.  As Ray mentioned, a better way would be to have a flag in your db/ldap that marks a user as internal or external.  It'll save you problems down the road should you start mixing in things like VPN/webVPN access, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623412">5</a> by Douglas Knudsen
		posted on 12/17/2005 at 8:37 AM
		</div>
		<div class="comment_text"><p>we are not on CF7 yet...approach on CF &lt; 7...two cfapplication tags, err names rather?  In my experience, the remote IP would be the proxy server if the user is accessing via extranet and not spoofable, but this may depend on your extra/intranet setup.  some psuedo code</p><p>If remoteip == proxy server<br>   appname = extranet<br>   sessiontimeout = 20<br>else<br>   appname = intranet<br>   sessiontimeout = 60<br>end if</p><p>cfapplication name="#appname#" sessiontimeout="#sessiontimeout#"</p><p>would this not work? how to do this on CF7 eh?</p></div>
	</div>
</div>
		