
<div class="comment" id="c_1713732273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732273">1</a> by Chris Bowyer
		posted on 5/17/2011 at 8:57 AM
		</div>
		<div class="comment_text"><p>Great article. Never really got my head around read only. Actually, I don't mind admitting that locking is something I have never fully got my head around at all, and being long time user of Sandra Clark's Fusebox 'request' plugin, that writes the Session scope into the Request scope and back into the Session scope with each page request, I have not had to worry about it too much. Incidentally, in the case of a cflocation etc, she also has a script called 'fnc_writerequest.cfm' to write back into the Session scope before the end of a page request. I do rely on cftransaction on one of my sites that sometimes process many transactions per second though - <a href="http://disq.us/url?url=http%3A%2F%2Fsms2screen.com.au%3AOCmecc2Zs63D0t8rbj2doQ8Yd5E&amp;cuid=3321886" rel="nofollow noopener" title="http://sms2screen.com.au">http://sms2screen.com.au</a>. In particular though, I have never got my head around not locking Session variables around some database queries, and remain a little puzzled with Sean Corfield's 'underscore' (on line two) of my customised version of one of his locking examples (below). Would love to know about that, although the double struct check does make sense.</p><p>&lt;cfif NOT StructKeyExists(Application, "Security")&gt;<br>  &lt;cflock name="#Application.applicationName#_Security" type="exclusive" timeout="10"&gt;<br>    &lt;cfif NOT StructKeyExists(Application, "Security")&gt;<br>      &lt;cfset Application.Security = CreateObject("component", "model.security.Security").init(Request.dsn) /&gt;<br>    &lt;/cfif&gt;<br> &lt;/cflock&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732272">2</a> by Chris Bowyer
		posted on 5/17/2011 at 9:28 AM
		</div>
		<div class="comment_text"><p>I forgot to mention. It's handy to know that the lock name can be any string, I didn't know that. One thing that I have never been able to work out though, is how long to set timeout. What should that be based on?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732274">3</a> by Raymond Camden
		posted on 5/17/2011 at 2:55 PM
		</div>
		<div class="comment_text"><p>When you say you don't understand the underscore, do you mean in the lock name? All he did there was create a name based on the current application name (that's a built in variable) followed by _security. So given an app called beer, the lock would be beer_security. If you used the same code in another application, wine, it would be wine_security. The end result is an application specific named lock.</p><p>Timeout should be based on the reasonable expectation of how long you think a process would take and your traffic. Given that a fileWrite is probably going to take 100ms or so, if I had 100 people hit my site at the same time, then it would take 10 seconds total for them to all get an exclusive lock and write out. 30 seems safe in that regard then.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732275">4</a> by Chris Bowyer
		posted on 5/17/2011 at 4:16 PM
		</div>
		<div class="comment_text"><p>D'oh! I should have picked the underscore issue up from where you mentioned the lock name can be any string. Makes sense now, as well as the calculation for timeout. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732276">5</a> by Paul Dynan
		posted on 5/17/2011 at 5:10 PM
		</div>
		<div class="comment_text"><p>Is there any reason not to just append a 4-5 digit random number on the end of the lock name? (eg, "SecLock_#RandRange(1, 10000)#")  Seems like it takes the time out of coming up with names, or worrying your convention is too conventional and is being repeated.</p><p>Ovwerall, I wonder why locks aren't just unique by default.  It seems bug-prone and ineffcient to rely on users to manage this, versus just handling it programatically.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732277">6</a> by Raymond Camden
		posted on 5/17/2011 at 5:17 PM
		</div>
		<div class="comment_text"><p>Paul, making the lock random would totally defeat the purpose of the lock. When 2 people hit the page, they would have different lock names, and the code block would NOT be single threaded.</p><p>As to why this isn't automatic - it's one of those things. A compiler simply can't be "smart" about this. It requires a human to say - this is an operation that I need to single thread. You may - for example - not care. Consider the hit counter. You may decide that you NEVER want to slow people down, and if the hit counter is off by a few points, that's ok.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732279">7</a> by Dave Ferguson
		posted on 5/17/2011 at 6:15 PM
		</div>
		<div class="comment_text"><p>The one thing I would be careful of is doing file locks when reading files via unc pathing.  I have seen, from personal experience, that the lock can get stuck on the file.</p><p>For example, lets day you put a exclusive read lock on a file.  In the process of reading that file the network goes down.  ColdFusion never finished its read so it was never able to release the lock.  The file is now stuck in a perpetual lock state.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732278">8</a> by Raymond Camden
		posted on 5/17/2011 at 6:18 PM
		</div>
		<div class="comment_text"><p>Interesting. Does CF crash or does it continue to serve _other_ requests and only requests using that lock get hung?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732282">9</a> by Bryan Rice
		posted on 5/17/2011 at 6:19 PM
		</div>
		<div class="comment_text"><p>We have an app that lets users download files from the server using the standard combination cfheader and cfcontent to accomplish the download. Should the that code be cflock-ed since there is a chance that several users may try to download the same file at the same time or is this different?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732280">10</a> by Raymond Camden
		posted on 5/17/2011 at 6:21 PM
		</div>
		<div class="comment_text"><p>Ask yourself - does it matter if N people download the file? Probably not. You aren't modifying the file - simply serving it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732281">11</a> by Dave Ferguson
		posted on 5/17/2011 at 6:21 PM
		</div>
		<div class="comment_text"><p>@ray From what I have seen it just fails that thread.  You end up getting a file read error.  Other threads continue just fine and CF stays running.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732283">12</a> by Roland Collins
		posted on 5/17/2011 at 9:50 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Don't forget to double-check your conditions if you're conditionally locking code.  For example, this:</p><p>&lt;cfif not isDefined("cookie.firsttime")&gt;<br>      &lt;cflock name="counterFileRead: #fileName#" type="exclusive" timeout="30"&gt;<br>      &lt;cfif fileExists(fileName)&gt;<br>            etc.....<br>Should be this:</p><p>&lt;cfif not isDefined("cookie.firsttime")&gt;<br>      &lt;cflock name="counterFileRead: #fileName#" type="exclusive" timeout="30"&gt;<br>            &lt;cfif not isDefined("cookie.firsttime")&gt;<br>                  &lt;cfif fileExists(fileName)&gt;<br>                        etc.....</p><p>Otherwise you wind up with a potential race condition under heavy load.  Even though it's a small possibility, two requests *could* hit that first "if" statement and try to lock at the same time - if they do, you don't want the code inside of the locked section to execute twice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732286">13</a> by Raymond Camden
		posted on 5/17/2011 at 9:56 PM
		</div>
		<div class="comment_text"><p>That would only occur with two requests from the same user. Possible with frames, or tabs, but highly unlikely. Still - good point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732285">14</a> by Roland Collins
		posted on 5/17/2011 at 9:57 PM
		</div>
		<div class="comment_text"><p>Or AJAX requests - I think it's actually even more important in the context of AJAX.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732284">15</a> by Misty
		posted on 5/18/2011 at 11:04 AM
		</div>
		<div class="comment_text"><p>Good Article Ray!</p><p>But I always consider doing the Lock Timing as Timestamps and Store them In DB and Fetch them, I do not trust cflock.</p><p>Various Reasons!</p><p>1. What happens if you shut the browser from the Taskbar!<br>2. What Happens if the Browser gets Closed Unexpectly.<br>3. Power Failure anotehr Reason.</p><p>and Others many i do not remember yet!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732287">16</a> by Raymond Camden
		posted on 5/18/2011 at 2:47 PM
		</div>
		<div class="comment_text"><p>@Misty: None of the things you mentioned mattered. Given our example of 2 users hitting the file at once, if user's 1 browser closes, CF still continues the request and the lock end.</p></div>
	</div>
</div>
		