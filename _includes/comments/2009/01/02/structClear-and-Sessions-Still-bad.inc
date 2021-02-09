
<div class="comment" id="c_1713711206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711206">1</a> by Raymond Camden
		posted on 1/2/2009 at 8:05 PM
		</div>
		<div class="comment_text"><p>As just a quick note, I also did some testing with the Admin API, specifically getting the active session count and the session info itself.</p><p>&lt;cfinvoke component="cfide.adminapi.administrator" method="login" adminPassword="admin"&gt;<br>&lt;cfinvoke component="cfide.adminapi.servermonitoring" method="getActiveSessionCount" cfapplicationname="stest" returnVariable="sc"&gt;</p><p>&lt;cfoutput&gt;Total session count: #sc#&lt;br/&gt;&lt;/cfoutput&gt;</p><p>&lt;cfinvoke component="cfide.adminapi.servermonitoring" cfapplicationname="stest" method="getActiveSessions" returnVariable="sessions"&gt;</p><p>&lt;cfdump var="#sessions#"&gt;</p><p>I noticed that when I cleared, it had no impact on the session information returned (ie, time since last access, age, etc). So it looks like, under the covers, there is nothing wrong with structClear(session). If you don't use cfid/cftoken/sessionid in code itself then it should be safe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711198">2</a> by Scott P
		posted on 1/2/2009 at 10:40 PM
		</div>
		<div class="comment_text"><p>I use this instead, provides me a bit more control.</p><p>&lt;cfset safeList = "sessionid,urltoken,cfid,cftoken"&gt;<br>&lt;cfloop collection="#session#" item="i"&gt;<br>	&lt;cfif not ListFindNoCase(safelist,i)&gt;<br>		&lt;cfset structDelete(session,i)&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711200">3</a> by Red
		posted on 1/3/2009 at 12:02 AM
		</div>
		<div class="comment_text"><p>I have similar code to Scott's, but I do experience some weird session/caching behavior - I hope I don't deviate too much from the subject.</p><p>Basically, I login as user A, logout, login as user B, then I click on user-related parts of the site, and I get User A info. When I refresh the page it displays the correct user.  CFID/CFTOKEN don't change as one would expect, rather, it takes few logout/refresh for them to change. Also, I added some debugging code onRequestStart() and it doesn't show every time(especially when it flips to the previously logged in user).</p><p>By adding rand() to the end of each user-related link on the site I fixed the problem(well if you can call that a fix).</p><p>I've never experienced this before, and I am sure I had to go out my way to break this. I searched around, and I couldn't find anything similar to this problem. I wonder if anyone has seen this before?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711204">4</a> by DanaK
		posted on 1/3/2009 at 11:06 PM
		</div>
		<div class="comment_text"><p>We have off again and on again session problems with people dropping their cfid/cftoken all the time, or with what Red said. It won't happen for weeks then all of a sudden boom it happens 110 times a day for 2 weeks. Removing structClear() was one of the first things I did (to no avail!).</p><p>I think I've torn things apart 100x and never could figure it out. I notice IE 6.x has various builds that were pushed out that would wreak general havok with session id's dropping on page hits etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711199">5</a> by Raymond Camden
		posted on 1/4/2009 at 7:51 AM
		</div>
		<div class="comment_text"><p>@Red: First, you should NOT expect CFID/CFTOKEN to change. Those values are unique to your browser and machine. They have ZERO to do with actual session data. So when you logged in as A, then logged out, and came back as B, you were still on the same machine, so you would have the same CFID/CFTOKEN values.</p><p>You note that when you refreshed a page it seemed to show the right data - that could just be the browser cache aain. So I'd use the suggestions from this entry: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F1%2F1%2FAsk-a-Jedi-cflogout-session-variables-and-the-back-button%3A3jJAjIAQNo85eywL5fPlFyaPeds&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/1/1/Ask-a-Jedi-cflogout-session-variables-and-the-back-button">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711201">6</a> by Raymond Camden
		posted on 1/4/2009 at 7:52 AM
		</div>
		<div class="comment_text"><p>Another way to think of the CFID/CFTOKEN not changing this. You get a phone number, right, 555-1111. The number is associated to you, Red. Then you die (sorry!) and I move in to your home and get your phone number. It's the same number, but now the name associated with it is Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711202">7</a> by Elliott Sprehn
		posted on 1/4/2009 at 3:56 PM
		</div>
		<div class="comment_text"><p>@Red</p><p>CFID and CFToken are sent in cookies when the session is started and your browser stores them for as long as the Set-Cookie header told it to. CF will only send you a new CFID and CFToken if your session expires or your browser didn't send the cookies (they didn't exist, or they expired).</p><p>As Ray said, the issue you're describing, and the fix with a random number, is definitely a browser caching problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711208">8</a> by Brian
		posted on 1/5/2009 at 10:49 PM
		</div>
		<div class="comment_text"><p>I'm being lazy, but does this also apply to jsessionid?</p><p>@DanaK: We've seen that behavior when the cluster, er um, cluster-bombed... A user would be coming in through the master IP, but for some inexplicable reason, the affinity to a node never stuck...Which resulted in a new cfid/token with about every couple of hits...happened with predictable regularity on form submissions.  And this was browser agnostic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711207">9</a> by Raymond Camden
		posted on 1/5/2009 at 10:50 PM
		</div>
		<div class="comment_text"><p>@Brian: I did not run my test w/ j2ee sessions turned on. I'd imagine we would see the same (the particular value would go away, urltoken would still work right, and sessions would still be fine anyway).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711210">10</a> by Red
		posted on 1/6/2009 at 4:29 AM
		</div>
		<div class="comment_text"><p>Ray, Elliott, thanks for the explanation.</p><p>Ray, How do I "die" :(, and take my phone number with me, gracefully?</p><p>Elliott, I can expire CFID/CFTOKEN cookies on logout?</p><p>If I use StructClear() and get rid of CFID/CFTOKEN,  at which point will ColdFusion send a new pair of CFID/CFTOKEN?</p><p>I do understand that the issue I originally asked about is due to caching, and is NOT related to sessions.</p><p>Thx</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711211">11</a> by Raymond Camden
		posted on 1/6/2009 at 5:30 AM
		</div>
		<div class="comment_text"><p>@Red - I don't think you get it (or I don't get your comment). There is no need to delete cfid/cftoken. You want to remove YOUR data, not the markers CF uses to uniquely identify you. If on login you set session.loggedin=true, then on logout you simply remove that variable: structDelete(session, "loggedin")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711213">12</a> by Red
		posted on 1/6/2009 at 7:12 AM
		</div>
		<div class="comment_text"><p>eh, I get it... Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711212">13</a> by Don
		posted on 1/9/2009 at 3:18 AM
		</div>
		<div class="comment_text"><p>So now comes my problem with this. I do &lt;cfset structClear(session)&gt; and get the error "Variable SESSION is undefined"</p><p>I've even tried<br>&lt;script&gt;<br>structClear(session);<br>&lt;/script&gt;<br>and get the same error.<br>What am I doing wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711216">14</a> by Raymond Camden
		posted on 1/9/2009 at 11:38 PM
		</div>
		<div class="comment_text"><p>The only way you would get that error is if it was on a page w/o any application context. Ie, a request where Application.cfc or .cfm was run. (And of course, sessionmanagement has to be turned on for the app.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711214">15</a> by Don
		posted on 1/10/2009 at 12:19 AM
		</div>
		<div class="comment_text"><p>Well, none of that is true.  It is actually in the application.cfc file and session management is turned on.</p><p>I've run into this everytime I've tried to do it. Really strange. Different servers too.</p><p>The one I'm doing now has this in the application.cfc file.<br>&lt;cfif ISDEFINED("url.reset") and url.reset is "DOIT"&gt;<br>&lt;cfset #structClear(session)#&gt;<br>&lt;cflocation url="index.cfm"&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711215">16</a> by Raymond Camden
		posted on 1/10/2009 at 7:04 PM
		</div>
		<div class="comment_text"><p>Can you show us more of the App.cfc file? Please use a code pasting service like pastebin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711217">17</a> by Henry Ho
		posted on 3/14/2009 at 2:53 AM
		</div>
		<div class="comment_text"><p>In the CF8's doc on StructClear():<br><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F8%2Fhtmldocs%2Fhelp.html%3Fcontent%3Dfunctions_s_16.html%3A5_TgH6gEjimdJbKX9DJ6nhrGZnQ&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/8/htmldocs/help.html?content=functions_s_16.html">http://livedocs.adobe.com/c...</a></p><p>"Do not call this function on a session variable. For more information, see TechNote 14143..."</p><p>which is,</p><p>ColdFusion 4.5 and the StructClear(Session) Function<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Ftn_17479%3A1A0qGYCVeUO9OhbrTgZ3PVTmvQ0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/go/tn_17479">http://www.adobe.com/go/tn_...</a></p><p>The last workaround looks interesting.  Kill the app?  Wouldn't all active Session's be killed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711218">18</a> by Charlie Arehart
		posted on 1/26/2012 at 10:41 PM
		</div>
		<div class="comment_text"><p>Hey guys, about the code above that Scott P offered as a workaround, watchout for a typo in his whitelist. He was saying to "keep" these vars:</p><p>essionid,urltoken,cfide,cftoken</p><p>that should be:</p><p>essionid,urltoken,cfid,cftoken</p><p>It's a frequent slip (our brains typing--or in this case no one else even seeing) CFID and CFIDE as the same. :-)</p><p>Indeed, Ray, I suspect some may never see my comment here. Might you want to just edit Scott's comment to correct this? Feel free to delete mine in this case. (Or maybe you'd want to keep it for some reason, with this comment, and another from you saying you changed it.) Your call.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711219">19</a> by Raymond Camden
		posted on 1/27/2012 at 12:31 AM
		</div>
		<div class="comment_text"><p>Good point. Note to you forgot s in front of sessionid. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711221">20</a> by Charlie Arehart
		posted on 1/27/2012 at 1:16 AM
		</div>
		<div class="comment_text"><p>Cool, thanks. (Just a copy/paste error on my missing the "s".)</p><p>Did you by any chance change the comment from Scott? If so, perhaps you have to refresh the blog, because it's still showing CFIDE. Or were you preferring not to update his comment, hoping instead people will read all the way to the bottom before trying to use it? I fear they would not. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711222">21</a> by Raymond Camden
		posted on 1/27/2012 at 1:19 AM
		</div>
		<div class="comment_text"><p>I trust in people's ability to read the whole thread. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711224">22</a> by Raymond Camden
		posted on 1/27/2012 at 4:25 AM
		</div>
		<div class="comment_text"><p>Corrected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711229">23</a> by Charlie Arehart
		posted on 1/27/2012 at 4:41 AM
		</div>
		<div class="comment_text"><p>Awesome. Thanks for that. I'm sure it will help some folks finding this in the future.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711228">24</a> by Eric
		posted on 6/28/2012 at 12:05 AM
		</div>
		<div class="comment_text"><p>Nice post and comments, all. Thanks! It's always heartening to read discussions that are sensible and constructive.</p></div>
	</div>
</div>
		