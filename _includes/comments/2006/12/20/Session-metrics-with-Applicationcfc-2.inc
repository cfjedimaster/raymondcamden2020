
<div class="comment" id="c_1713660482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660482">1</a> by DK
		posted on 12/20/2006 at 9:12 PM
		</div>
		<div class="comment_text"><p>one of my projects has been doing something similar to this for awhile now since they use a framework, its often hard to get reports out of webtrends and the like without some extra effort (since everything goes through index).</p><p>Another interesting side effect of doing this tracking is the ability to add a field to capture IP address and maybe a message or a utility key field. At that point you can also use the same tracking for some ancillary security work and reporting. An example would be to use this information to drive a 3 bad logins and lock them out for x minutes etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660511">2</a> by David Crowther
		posted on 12/21/2006 at 2:43 PM
		</div>
		<div class="comment_text"><p>WooHoo! <br>Thanks Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660512">3</a> by Michael White
		posted on 12/21/2006 at 9:25 PM
		</div>
		<div class="comment_text"><p>now that the database is only updated when the session ends, I need a better way to end the session than I'm using. What is the proper way to end the session so all this logging stuff happens properly when the user "logs out" or closes the browser? seems like my sessions are only ending by timing out</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660514">4</a> by D K
		posted on 12/21/2006 at 9:55 PM
		</div>
		<div class="comment_text"><p>when you're users log out fire off the onSessionEnd(). As for the closing browser part, theres a few snippets of scripts out there to try and catch that as well, though each has downsides. myself, I've never found one that was completely accurate and wonderful for catching people who just close the browser while logged in or navigate away... but I've also haven't had a real need to solve the problem either. lemme know what you guys do :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660480">5</a> by Raymond Camden
		posted on 12/21/2006 at 10:06 PM
		</div>
		<div class="comment_text"><p>DK - you might not want to do that. FOr example, imagine a site that lets you do some stuff not logged in, some stuff logged in. Just because you logout doesn't mean you leave. You may browse some more. If I wanted to care JUST about people logged in, I wouldn't use onSessionStart/End at all. It is too ripe for confusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660481">6</a> by Michael White
		posted on 12/22/2006 at 3:09 AM
		</div>
		<div class="comment_text"><p>If you use CreateUUID()for sessionid instead of the webserver's sessionID will you be able to find the entries in the webserver log file if you wanted to?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660487">7</a> by Raymond Camden
		posted on 12/22/2006 at 3:31 AM
		</div>
		<div class="comment_text"><p>By webserver do you mean CF server? I don't think CF logs the session ID anywhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660509">8</a> by Michael White
		posted on 12/22/2006 at 3:52 AM
		</div>
		<div class="comment_text"><p>I mean IIS in my case</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660507">9</a> by D K
		posted on 12/22/2006 at 5:00 AM
		</div>
		<div class="comment_text"><p>= =<br>DK - you might not want to do that. FOr example, imagine a site that lets you do some stuff not logged in, some stuff logged in. Just because you logout doesn't mean you leave. You may browse some more. If I wanted to care JUST about people logged in, I wouldn't use onSessionStart/End at all. It is too ripe for confusion.<br>= =</p><p>yeah sorry, I was thinking of how one of my clients implemented it, which was tracking logged in user trends only. my bad :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660515">10</a> by Michael White
		posted on 12/23/2006 at 4:37 AM
		</div>
		<div class="comment_text"><p>I think this code is breaking my flash remoting calls in an application I'm developing:<br>&lt;cffunction name="onRequest" returnType="void"&gt;<br>  &lt;cfargument name="thePage" type="string" required="true"&gt;<br>  &lt;cfinclude template="#arguments.thePage#"&gt;<br>&lt;/cffunction&gt;<br>I didn't see it in the first version...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660521">11</a> by Raymond Camden
		posted on 12/23/2006 at 5:00 AM
		</div>
		<div class="comment_text"><p>It does. There is a workaround that Sean Corfield created. I have 2 seconds now so I can't post, but if no one else does, I'll be back in 3 hours.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660522">12</a> by Raymond Camden
		posted on 12/23/2006 at 7:13 AM
		</div>
		<div class="comment_text"><p>Read the comment at the bottom of the livedocs:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.macromedia.com%2Fcoldfusion%2F7%2Fhtmldocs%2Fwwhelp%2Fwwhimpl%2Fcommon%2Fhtml%2Fwwhelp.htm%3Fcontext%3DColdFusion_Documentation%26file%3D00000698.htm%3AMxOdWfx7i0nlgxyYH_t65YJzONE&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.macromedia.com/coldfusion/7/htmldocs/wwhelp/wwhimpl/common/html/wwhelp.htm?context=ColdFusion_Documentation&amp;file=00000698.htm">http://livedocs.macromedia....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660518">13</a> by Michael White
		posted on 12/28/2006 at 9:35 PM
		</div>
		<div class="comment_text"><p>thanks for the quick response (way under 3 hours!) but I guess my first question should have been... why do I need the onrequest method in my application.cfc? (in particular, what is it doing for my tracking of session metrics?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660519">14</a> by Raymond Camden
		posted on 12/28/2006 at 10:00 PM
		</div>
		<div class="comment_text"><p>Err, you don't. The use of onRequest was not part of this blog series. I used onRequestStart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660517">15</a> by Michael White
		posted on 1/4/2007 at 8:26 PM
		</div>
		<div class="comment_text"><p>ok, I've got this working pretty well but I have to call the cfc method that saves the data in two places. I have a logout page that will save their session info if they click the logout link, and I also have the same call in Application.cfc in the onSessionEnd() method in case they don't click the logout link. It seems rather inelegant. I can't directly call an application.cfc method like &lt;cfset onSessionEnd()&gt; from my logout page, right? maybe I should do something in the onRequestStart/End() methods sort of like the url.reinit running onApplicationStart()? (by the way, the captcha I have to type in is "oaf" not sure if your blog is getting to know me...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660516">16</a> by Raymond Camden
		posted on 1/4/2007 at 8:32 PM
		</div>
		<div class="comment_text"><p>Michael - I'd argue that my code isn't meant to be "sessions" as in login sessions, but the more generic CF session. Just because you log off it doesn't mean you leave the site, especially on sites that have a mix of public and private content.</p><p>But anyway - if you want to do a set of things on logout and have it be the _same_ as a 'real' session timeout, make a new method, and have onRequestStart note the logout and call the new method, and have onSessionEnd do the same. Don't forget though that you can't output or DIRECTLY use <a href="http://disq.us/url?url=http%3A%2F%2Fsession.foo%3A0GFwmortM5kwImb-zfNafWJu1YY&amp;cuid=3321886" rel="nofollow noopener" title="session.foo">session.foo</a> in onSesionEnd, and that would apply to this new method you can as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660520">17</a> by Larry
		posted on 2/19/2007 at 9:48 PM
		</div>
		<div class="comment_text"><p>I am trying to capture the time a user is on the actual site. I tried using onSessionEnd in my application.cfc but that just drops in the time of the actual last click variable I set and when the session times out. I don't capture the actual time the person left the site. I don't want to use short timeout values because the site has some very long pages to read and someone could spend 30 minutes on the page. Is there a way to have a hidden layer or graphic that keeps an open connection with the browser and the server so I can use short timeout values and not worry about the person just sitting there on one page reading? I also need to make sure whatever method is the most browser friendly and as unnoticeable by the user as possible. Thanks!</p></div>
	</div>
</div>
		