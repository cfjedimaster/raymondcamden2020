
<div class="comment" id="c_1713653699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653699">1</a> by Steven Erat
		posted on 5/31/2006 at 7:25 PM
		</div>
		<div class="comment_text"><p>To be specific, the user name and password are intended to be used for webserver BASIC Authenication.  If the URL is protected by DIGEST or NTLM Authentication then you cannot schedule a task to call that URL  (nor can you run a CFHTTP or CFINVOKE/webservice call against it if not using BASIC Auth).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653702">2</a> by Raymond Camden
		posted on 5/31/2006 at 7:34 PM
		</div>
		<div class="comment_text"><p>Thanks for the clarification. This should probably be in the help doc, don't you think?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653706">3</a> by Tom Mollerus
		posted on 5/31/2006 at 7:57 PM
		</div>
		<div class="comment_text"><p>I'll share a practice that I've developed with my custom tasks to make sure that they're only run by authorized personnel. I insert a condition where the script only runs if requesting user-agent (UA) is 'CFSCHEDULE'.  If the UA is any other value, the script runs in "test" mode, where no permanent database actions are performed and any generated emails are sent to internal staff.</p><p>You can also require that any request include a URL variable containing a specific string, such as "task.cfm?token=eG!UdswF36$". If the correct token isn't included, stop processing with cfabort.</p><p>Neither of these methods are completely failsafe (for reasons many of us know), but they're reasonably safe for my purposes-- plus, it's convenient having a test mode for the script.  Ray and Steven are correct that the best method for controlling access to a task would be basic authentication.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653704">4</a> by BlowToad
		posted on 5/31/2006 at 10:15 PM
		</div>
		<div class="comment_text"><p>In addition to checking the user agent as Tom does, I also only allow my sensitive scheduled tasks to be accessed from specified client IP addresses.  I do this with the web server (Apache HTTPD in my case) configuration rather than CF -- multiple layers of protection - like an onion, or an ogre.</p><p>If you are really concerned about the security, I think you can you call your scheduled task via https so that anyone listening doesn't sniff out your username and password.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653701">5</a> by Steven Erat
		posted on 5/31/2006 at 10:22 PM
		</div>
		<div class="comment_text"><p>Yes, the clarification of which types of authentication can be handled by the username and password for scheduled tasks is poorly documented, not just in the CFAdmin, but in the CF Docs as well.</p><p>It is generally assumed that developers know that Scheduled Tasks are implemented by the same code that implements CFHTTP, and that CFHTTP documentation does have this detailed info on types of authentication.</p><p>A documentation bug for the omission already exists.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653707">6</a> by Olav
		posted on 6/2/2006 at 11:45 AM
		</div>
		<div class="comment_text"><p>I recommend using the automation tool VisualCron instead of the built-in task scheduler.</p><p>Olav</p></div>
	</div>
</div>
		