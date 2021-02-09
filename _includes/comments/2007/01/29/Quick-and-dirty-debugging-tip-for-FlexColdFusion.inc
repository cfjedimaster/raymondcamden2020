
<div class="comment" id="c_1713661583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661583">1</a> by Tom Mollerus
		posted on 1/30/2007 at 2:11 AM
		</div>
		<div class="comment_text"><p>OK, I'll take the risk of sounding naive: what exactly are the dangers of using cflog in your error code in a production system? This seems like a pretty good tactic to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661587">2</a> by todd sharp
		posted on 1/30/2007 at 2:25 AM
		</div>
		<div class="comment_text"><p>Its been a while since I worked in Flex, but I also liked to throw a dump method into components when developing a flex app.  The method looked like this:</p><p>&lt;cffunction name="dump" output="false" access="remote" returntype="void" hint="i dump"&gt;<br>		&lt;cfargument name="content" type="any"&gt;<br>		&lt;cfset var theDir = getDirectoryFromPath(expandPath("*.*"))&gt;<br>		&lt;cfset var theFile = theDir &amp; createUUID() &amp; ".xls"&gt;<br>		&lt;cfset var theOutput = ""&gt;<br>		&lt;cfsavecontent variable="theOutput"&gt;&lt;cfdump var="#arguments#"&gt;&lt;/cfsavecontent&gt;<br>		&lt;cffile action="write" file="#theFile#" output="#theOutput#"/&gt;<br>	&lt;/cffunction&gt;</p><p>Again, not the prettiest but its a similar idea for taking a look at what a certain grid or flex data element contained in a familiar format (cfdump).</p><p>I would like to get my hands on Nimers debug panel if I get back into Flex development anytime soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661590">3</a> by Raymond Camden
		posted on 1/30/2007 at 2:28 AM
		</div>
		<div class="comment_text"><p>Tom, I didn't mean the cflog, but the cffile operation. That was the main point of the blog post. (Remember I said that cflog was text based?) If that isn't clear, let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661593">4</a> by Clint Tredway
		posted on 1/30/2007 at 2:31 AM
		</div>
		<div class="comment_text"><p>I normally use cfmail and dump the arguments and cfcatch scope into an HTML email and that has been the best way for me. I have been doing it this way since I started doing RIA's with Flash MX.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661591">5</a> by Justice
		posted on 1/30/2007 at 2:35 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I did this very same thing a while back, only I did my file dump like this:</p><p>&lt;cffile action="write" file="c:\debug\#replace(replace(xmlFormat(CGI.Script_Name), '/', '_', 'ALL'), '.', '_', 'ALL')#.html" output="#mydbgOutput#"&gt;</p><p>then, I got file names like this:  rootdir_subdir_dubdir_file.cfm.html</p><p>then I could look at all my templates being called and what debug output they had.  Like you said, its kinda resource heavy writing files for each request, but makes debugging easier, and wont break web layouts with popups or divs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661594">6</a> by Raymond Camden
		posted on 1/30/2007 at 2:40 AM
		</div>
		<div class="comment_text"><p>Clint, mail is what I normally do in production. But for dev - this worked out well as I didn't have to wait for the mail to arrive. Plus - I don't have a mail server on this local box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661588">7</a> by Clint Tredway
		posted on 1/30/2007 at 2:45 AM
		</div>
		<div class="comment_text"><p>Very true, I do a file dump when I dont have access to a mail server, but when I do, even in dev, I do mail dumps. I have also been using FlashTracer in FireFox to get errors as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661597">8</a> by Danlance
		posted on 1/30/2007 at 5:55 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I am using exactly the same technique ATM for debugging functions called from an Async event gateway.</p><p>I am using CFLog throughout the app to log events and errors to a log file, but there are definately times that having the full stack trace etc. is invaluable.</p><p>Again, as other people have mentioned, we use cfdump / cfmail within live apps, but during initial dev, having to wait ~3 minutes to see the error, is not acceptable :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661582">9</a> by Mike Collins
		posted on 1/31/2007 at 6:23 PM
		</div>
		<div class="comment_text"><p>I did something similar, although I wrapped the error in a cfdocument tag with a filename attribute and saved as a swf.  I then was able to pull in the swf right into my flex app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661585">10</a> by Raymond Camden
		posted on 1/31/2007 at 6:42 PM
		</div>
		<div class="comment_text"><p>Well that is pretty nifty there Mike. What a cool idea!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661584">11</a> by Sid Wing
		posted on 2/1/2007 at 4:33 AM
		</div>
		<div class="comment_text"><p>To keep from having to maintain differing versions from my testbed to my production, I could make a minor modification to that code (see below) which would only create the file on my testbed (ie. localhost) environment.</p><p>I could also throw in a "cfelse" that would run the "cfdump" to cfmail if it is NOT on the testbed.  Used this methodology when I was working with application.cfm at Discovery.  Worked well.</p><p>&lt;code&gt;<br>&lt;cffunction name="onError" returnType="void" output="false"&gt;<br>   &lt;cfargument name="exception" required="true"&gt;<br>   &lt;cfargument name="eventname" type="string" required="true"&gt;<br>   &lt;cfset var temp = ""&gt;</p><p>   &lt;cflog file="my app" text="#arguments.exception.message#, #arguments.exception.detail#"&gt;</p><p>   &lt;cfif cgi.servername is "localhost"&gt;&lt;!--- Sid's Mod ---&gt;<br>   &lt;cfsavecontent variable="temp"&gt;<br>   &lt;cfdump var="#arguments#"&gt;<br>   &lt;/cfsavecontent&gt;<br>   &lt;cffile action="write" file="c:\myapp.html" output="#temp#"&gt;<br>   &lt;cfdump var="#arguments#"&gt;<br>   &lt;cfabort&gt;<br>   &lt;/cfif&gt;&lt;!--- End of Sid's Mod ---&gt;<br>&lt;/cffunction&gt;<br>&lt;/code&gt;</p></div>
	</div>
</div>
		