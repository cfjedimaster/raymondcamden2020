
<div class="comment" id="c_1713659891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659891">1</a> by todd sharp
		posted on 12/4/2006 at 6:48 PM
		</div>
		<div class="comment_text"><p>Ray:  You're getting more into Flex lately - how do you handle errors thrown in cfc's called via flash remoting?  I have a method I use - but I'm curious as to how you're doing it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659902">2</a> by Raymond Camden
		posted on 12/4/2006 at 7:14 PM
		</div>
		<div class="comment_text"><p>Todd, I knew there is a Fault handler when working with remote stuff. I'll blog on that. I'm DEFINITELY a noob but I'll share as it will flesh out better comments.</p><p>Ray Camden - making the world smarter by showing how much he doesn't know.</p><p>p.s. Check this blog for a very important announcement later today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659903">3</a> by todd sharp
		posted on 12/4/2006 at 8:17 PM
		</div>
		<div class="comment_text"><p>Sweet!  Can't wait.  Hey, just another quick FYI - your sites have been a little slow for me lately.  I'm sitting on a T3 at work, so I don't think it's my connection.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659905">4</a> by Raymond Camden
		posted on 12/4/2006 at 8:24 PM
		</div>
		<div class="comment_text"><p>Yeah, I see it too. I may be outgrowing the box that <a href="http://disq.us/url?url=http%3A%2F%2FHosting.com%3AmgR3sW0ImF0OIFORqW1khwLKH-g&amp;cuid=3321886" rel="nofollow noopener" title="Hosting.com">Hosting.com</a> gave me. I can't complain as they have been hosting me free for a LONG time, and I give many kudos to them, but the box is a P3 with 1 gig of RAM.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659904">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659904">5</a> by Ben Nadel
		posted on 12/4/2006 at 9:17 PM
		</div>
		<div class="comment_text"><p>Ray, just a tip that I picked up from Toby Goldfinger a while back at the NY CFUG meeting: when CFMailing yourself an error, you should do a StructDelete() on the FORM scope for any sensitive information like SSN or Credit Cards. That way, if the CFMail is send out over an unsecured (I don't know how it works behind the scenese), you don't have to worry about any one snooping on you. Either that, or encrypt it or something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659906">6</a> by Raymond Camden
		posted on 12/4/2006 at 9:30 PM
		</div>
		<div class="comment_text"><p>Very good point Ben.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659911">7</a> by William from Lagos
		posted on 12/4/2006 at 10:03 PM
		</div>
		<div class="comment_text"><p>&lt;!--- ON ERROR ---&gt;<br>	&lt;cffunction name="onError"&gt;</p><p>		&lt;cfargument name="Exception" required="yes" /&gt;<br>		&lt;cfargument name="EventName" type="string" required="yes" /&gt;</p><p>		&lt;!--- Watch out for "coldfusion.runtime.AbortException" errors that result from &lt;cfabort&gt; and &lt;cflocation&gt; tags ---&gt;<br>		&lt;cfif arguments.exception.rootcause.type neq "coldfusion.runtime.AbortException"&gt;</p><p>			&lt;!--- Construct error message ---&gt;<br>			&lt;cfsavecontent variable="mailMessage"&gt;<br>				&lt;!--- Mail message goes here (can be in html format) ---&gt;<br>			&lt;/cfsavecontent&gt;</p><p>			&lt;!--- Invoke Mail component (my CFC for sending emails) and send email  ---&gt;<br>			&lt;cfinvoke <br>			 component="#Application.config.componentPath#.Mail"<br>			 method="sendMail"<br>			 returnvariable="sentStatus"&gt;<br>				&lt;cfinvokeargument name="toEmail" value="foo@foo.com"/&gt;<br>				&lt;cfinvokeargument name="fromEmail" value="foo@foo.com"/&gt;<br>				&lt;cfinvokeargument name="fromName" value="foo foo"/&gt;<br>				&lt;cfinvokeargument name="subject" value="An error occured in website"/&gt;<br>				&lt;cfinvokeargument name="message" value="#mailMessage#"/&gt;<br>				&lt;cfinvokeargument name="htmlFormat" value=true /&gt;<br>			&lt;/cfinvoke&gt;</p><p>			&lt;!--- If the error didn't occur in the "onSessionEnd" and "onApplicationEnd" event handlers display error page ---&gt;<br>			&lt;cfif NOT (arguments.EventName EQ "onSessionEnd") OR (arguments.EventName EQ "onApplicationEnd")&gt;<br>				&lt;!--- Redirect to error template ---&gt;<br>				&lt;cflocation url="errorTemplate.cfm" addtoken="no" /&gt;<br>			&lt;/cfif&gt;</p><p>		&lt;/cfif&gt;<br>	&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659907">8</a> by William from Lagos
		posted on 12/4/2006 at 10:11 PM
		</div>
		<div class="comment_text"><p>Oops I missed out the important part.</p><p>The mail message in the &lt;cfsavecontent&gt; tag could be in this format</p><p>&lt;cfsavecontent variable="mailMessage"&gt;<br>				&lt;cfoutput&gt;<br>					&lt;h3&gt;An error occcured on the website, <a href="http://disq.us/url?url=http%3A%2F%2Ffoo.com%3AN7Z24oIKkMVc9eNBzSRQUSpuMJ0&amp;cuid=3321886" rel="nofollow noopener" title="foo.com">foo.com</a>&lt;/h3&gt;<br>					&lt;p&gt;The error information is given below.&lt;/p&gt;<br>					&lt;div style='background-color:##FDFFEF;border:1px solid ##ECEFD1; margin-top: -0.3em;	padding: 8px; margin-bottom: 0.3em; color: ##666666; font-size:13px; font-family:"Tahoma, Verdana"'&gt;<br>					&lt;p&gt;&lt;b&gt;ERROR INFORMATION&lt;/b&gt;&lt;/p&gt;<br>					&lt;p&gt;&lt;strong&gt;Page : &lt;/strong&gt; #cgi.SCRIPT_NAME#&lt;/p&gt;<br>					&lt;p&gt;&lt;b&gt;Error Type : &lt;/b&gt;#arguments.Exception.type#&lt;/p&gt;<br>					&lt;p&gt;&lt;b&gt;Error Message : &lt;/b&gt;#arguments.Exception.message#&lt;/p&gt;<br>					&lt;p&gt;&lt;b&gt;Error Details : &lt;/b&gt;#arguments.Exception.Detail#&lt;/p&gt;<br>					&lt;p&gt;&lt;strong&gt;ROOT CAUSE &lt;/strong&gt;&lt;/p&gt;<br>					&lt;p&gt;&lt;strong&gt;Type : &lt;/strong&gt;#IIf(arguments.exception.rootcause.type neq "",Evaluate(DE("arguments.exception.rootcause.type")),DE("None"))#&lt;/p&gt;<br>					&lt;p&gt;&lt;strong&gt;Message : &lt;/strong&gt;#IIf(arguments.exception.rootcause.message neq "",Evaluate(DE("arguments.exception.rootcause.message")),DE("None"))#&lt;/p&gt;<br>					&lt;p&gt;&lt;strong&gt;Detail : &lt;/strong&gt;#IIf(arguments.exception.rootcause.detail neq "",Evaluate(DE("arguments.exception.rootcause.detail")),DE("None"))#&lt;/p&gt;<br>					&lt;cfdump var="#arguments.exception.rootcause.tagcontext#" /&gt;<br>					&lt;p&gt;&lt;strong&gt;Date and time : &lt;/strong&gt; #TimeFormat(now(),"short")# #DateFormat(now(),"full")# &lt;br&gt;<br>					&lt;strong&gt;IP Address : &lt;/strong&gt; #cgi.REMOTE_ADDR# &lt;br&gt;<br>					&lt;strong&gt;Browser : &lt;/strong&gt; #detectBrowser()#&lt;br&gt;<br>					&lt;strong&gt;HTTP Referer : &lt;/strong&gt; #IIf(cgi.HTTP_REFERER neq "",Evaluate(DE("cgi.http_referer")),DE("None"))#&lt;br&gt;&lt;/p&gt;<br>					&lt;/div&gt;<br>					&lt;p&gt;-----------------------------------------------------------------------------&lt;/p&gt;<br>				&lt;p style='color:##666666; font-size:11px; font-family:"Verdana"'&gt;foo foo&lt;br/&gt;&lt;br/&gt;&lt;br/&gt;&lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Ffoo.com%3AN7Z24oIKkMVc9eNBzSRQUSpuMJ0&amp;cuid=3321886" rel="nofollow noopener" title="foo.com">foo.com</a>"&gt;<a href="http://disq.us/url?url=http%3A%2F%2Ffoo.com%3AN7Z24oIKkMVc9eNBzSRQUSpuMJ0&amp;cuid=3321886" rel="nofollow noopener" title="foo.com">foo.com</a>&lt;/a&gt;&lt;/p&gt;<br>				&lt;/cfoutput&gt;<br>			&lt;/cfsavecontent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659908">9</a> by Douglas Knudsen
		posted on 12/5/2006 at 8:12 AM
		</div>
		<div class="comment_text"><p>I setup a template that logs errors to a DB.  This way I can run reports and such.  I setup scheduled tasks to email error reports even.  Able to snag a stack trace this way too.  Note that need to add a cflog call to enter the data in the application log.</p><p>DK</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659910">10</a> by David Lakein
		posted on 12/6/2006 at 6:11 AM
		</div>
		<div class="comment_text"><p>Re showing the debug info on the screen:  One could also switch based on a client.debug variable (or session.debug), and allow users to switch debug modes based on other criteria (like IP+url vars or password or login) -- if client.debug on, skip the email and show debug info.</p><p>Especially if you are looking at the same hostname that others are seeing.</p></div>
	</div>
</div>
		