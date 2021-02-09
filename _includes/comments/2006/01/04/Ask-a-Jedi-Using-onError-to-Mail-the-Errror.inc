
<div class="comment" id="c_1713623950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623950">1</a> by Derek P
		posted on 1/4/2006 at 9:14 PM
		</div>
		<div class="comment_text"><p>hey thats a good idea. I never thought of emailing the dump's like that.</p><p>nice call!</p><p>- D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623949">2</a> by Brian B
		posted on 1/4/2006 at 10:53 PM
		</div>
		<div class="comment_text"><p>Be careful with what scopes you dump, though.  Depending on what information you store in session/application scopes (or whatever else you're displaying), it can easily create 1+ MB html emails (I know from expecience!)</p><p>Brian</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623951">3</a> by tof
		posted on 1/5/2006 at 4:23 AM
		</div>
		<div class="comment_text"><p>Also, if you dump application or session, you would have to lock them wouldn't you ? If it's a big application that generates lots of these error, wouldn't it slow the sytem down  to perform all these locks ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623958">4</a> by Raymond Camden
		posted on 1/5/2006 at 4:30 AM
		</div>
		<div class="comment_text"><p>It is only a read, so you wouldn't need to lock it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623957">5</a> by Doug
		posted on 1/6/2006 at 2:21 AM
		</div>
		<div class="comment_text"><p>You don't really want all that bloated HTML+CSS+JS table markup in an email... Dump the structs out to plain text. If there's not a UDF to do that on CFLIB, I'll have to upload mine. I wrote it specifically for this purpose and also to display the dumps in a textarea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623953">6</a> by Raymond Camden
		posted on 1/6/2006 at 2:33 AM
		</div>
		<div class="comment_text"><p>What's wrong Doug - you on dialup? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623952">7</a> by Raymond Camden
		posted on 1/6/2006 at 2:33 AM
		</div>
		<div class="comment_text"><p>Actually, that's not a horribly bad idea - "DumpLite" function. I may steal the idea and blog it one day. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623956">8</a> by Doug
		posted on 1/6/2006 at 10:34 PM
		</div>
		<div class="comment_text"><p>I think the problem was really how the CSS and layout was screwing with my layout (creating a horizontal scrollbar and "breaking my template" by pushing everything on the right side off the screen as well). The same can happen with webmail readers as well. With tables, there is little fitting and wrapping to accomodate the size or the window/element/reader.</p><p>Just wanting to find out a value or existence of somthing, it's pretty easy to scan a list like I output:</p><p>SESSION = [Struct]<br>SESSION.CFTOKEN = XXXX<br>SESSION.URLTOKEN = CFID=YYYY&amp;CFTOKEN=XXXX<br>SESSION.CFID = YYYY<br>SESSION.USER = [Struct]<br>SESSION.USER.FULLNAME = Doug <br>SESSION.USER.ROLES = [Array]<br>SESSION.USER.ROLES.1 = Super Llama<br>SESSION.USER.ROLES.2 = Janitor<br>SESSION.USER.USERNAME = dgibson<br>SESSION.USER.AUTHENTICATED = 1</p><p>I'll send the UDF to <a href="http://disq.us/url?url=http%3A%2F%2FCFLIB.org%3A5eXVMG89Ja2owSKT3q6j3Ql1gqA&amp;cuid=3321886" rel="nofollow noopener" title="CFLIB.org">CFLIB.org</a> and you can post or tidy it as needed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623962">9</a> by Michael White
		posted on 4/21/2007 at 12:18 AM
		</div>
		<div class="comment_text"><p>when my users' sessions time out, all the session variables are cleared along with it and that's fine with me, but when the end user goes to the next page they get an ugly error about a session variable not being defined. how do I make all those cranky users happy?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623954">10</a> by Raymond Camden
		posted on 4/21/2007 at 12:20 AM
		</div>
		<div class="comment_text"><p>Your code should handle cases where session variables don't exist. So for example, if your site has a logon system then your onRequestStart should look for session.username, and if it doesn't exist, log them in. I mean ask them to login.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623963">11</a> by Michael White
		posted on 4/27/2007 at 12:13 AM
		</div>
		<div class="comment_text"><p>I had code similar to that, but I was using the cflogin framework so coldfusion thought they were still logged in and didn't run that code so outside of the cflogin I added:</p><p>&lt;cfif NOT StructKeyExists(Session,"UserName") or Session.UserName is ""&gt;<br>	&lt;cflogout&gt;<br>&lt;/cfif&gt;<br>and then right after that I start the cflogin code. works fine now, Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623955">12</a> by Nate
		posted on 5/11/2007 at 10:23 PM
		</div>
		<div class="comment_text"><p>That code seems to work well.  However, would it not make sense to include the date and time that the error occurred as well?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623959">13</a> by Raymond Camden
		posted on 5/11/2007 at 10:25 PM
		</div>
		<div class="comment_text"><p>I don't normally since the date/time will be darn close to the date/time on the mail itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623960">14</a> by Billy
		posted on 1/16/2009 at 6:41 AM
		</div>
		<div class="comment_text"><p>Okay, so I did the above and got an error stating "Element CGI is undefined in ARGUMENTS." I guess I should check whether or not the variables are defined. Or, am I missing something?</p><p>My onError method is:</p><p>&lt;cffunction name="onError" access="public" output="true"&gt;<br>&lt;cfargument name="Exception" type="Any" required="true" /&gt;<br>&lt;cfargument name="EventName" type="String" required="true" /&gt;</p><p>&lt;cfif ARGUMENTS.Exception.RootCause.Type EQ "coldfusion.runtime.AbortException"&gt;<br>    &lt;cfreturn/&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfmail ... &gt;<br>&lt;p&gt;Error Event: #ARGUMENTS.EventName#&lt;/p&gt;<br>&lt;cfdump var="#ARGUMENTS.exception#"&gt;<br>&lt;cfdump var="#ARGUMENTS.cgi#"&gt;<br>&lt;cfdump var="#ARGUMENTS.form#"&gt;<br>&lt;cfdump var="#ARGUMENTS.url#"&gt;<br>&lt;/cfmail&gt;</p><p>    .        <br>    .<br>    .		<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623961">15</a> by Raymond Camden
		posted on 1/16/2009 at 7:09 AM
		</div>
		<div class="comment_text"><p>It's not arguments.CGI, or arguments.url, or arguments.form. CGI, Form, and URL are built in scopes. So dump them by theselves.</p><p>&lt;cfdump var="#cgi#" label="CGI"&gt;<br>&lt;cfdump var="#form#" label="Form"&gt;<br>&lt;cfdump var="#URL#" label="URL"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623966">16</a> by Derek
		posted on 3/25/2009 at 9:45 PM
		</div>
		<div class="comment_text"><p>I know, bring up an old post but I was looking for some onError stuff.</p><p>You say no need to use "arguments.", but in your code in the blog post you specifically put that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623967">17</a> by Raymond Camden
		posted on 3/25/2009 at 9:52 PM
		</div>
		<div class="comment_text"><p>You don't HAVE to scope the variables, but I normally do scope them.</p></div>
	</div>
</div>
		