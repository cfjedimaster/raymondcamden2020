
<div class="comment" id="c_1713710489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710489">1</a> by Sean Coyne
		posted on 12/5/2008 at 7:53 PM
		</div>
		<div class="comment_text"><p>Add this to Application.cfc</p><p>&lt;cffunction name="onRequestStart" returnType="boolean" output="false"&gt;<br>	&lt;cfargument name="thePage" type="string" required="true"&gt;<br>	&lt;cfset var t = {} /&gt;<br>	&lt;cfif not isDefined("application.aPageRequests")&gt;<br>		&lt;cflock scope="application" timeout="60"&gt;<br>			&lt;cfset application.aPageRequests = [] /&gt;<br>		&lt;/cflock&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfset t.sessionid = session.sessionid /&gt;<br>	&lt;cfset t.datetime = now() /&gt;<br>	&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Ft.page%3AMhSyrMGXbY52KgYSrbdm60evpdI&amp;cuid=3321886" rel="nofollow noopener" title="t.page">t.page</a> = arguments.thepage /&gt;<br>	&lt;cflock scope="application" timeout="60"&gt;<br>		&lt;cfset arrayAppend(application.aPageRequests,t) /&gt;<br>	&lt;/cflock&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710500">2</a> by Phillip Senn
		posted on 12/5/2008 at 8:07 PM
		</div>
		<div class="comment_text"><p>Speaking of stats (not cf), this guy:<br><a href="http://disq.us/url?url=http%3A%2F%2Ffeltron.com%2F%3A7INfd_ewEHYOGX1QB2s6LyKGtyY&amp;cuid=3321886" rel="nofollow noopener" title="http://feltron.com/">http://feltron.com/</a></p><p>tracks his movements and produces a personal annual report.<br>Kind of weird, but a little inspiring.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710505">3</a> by Matt Osbun
		posted on 12/5/2008 at 8:30 PM
		</div>
		<div class="comment_text"><p>May be a little simplistic, but all you said was "some" stats:</p><p>&lt;cffunction name="onApplicationStart" returnType="void" output="false"&gt;<br>  &lt;cfset application.stats = structNew()&gt;</p><p>&lt;/cffunction&gt;</p><p>&lt;cffunction name="onRequestStart" returnType="void" output="true"&gt;<br>  &lt;cfset application[Now()] = cgi /&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710501">4</a> by Raymond Camden
		posted on 12/5/2008 at 8:33 PM
		</div>
		<div class="comment_text"><p>@matt - heh thats hella cool for short and simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710498">5</a> by Matt Osbun
		posted on 12/5/2008 at 8:40 PM
		</div>
		<div class="comment_text"><p>@Ray</p><p>Thanks.  That's actually seen production.  Back in '04 or '05 I was at a small company that wanted to track web usage stats.  They didn't want to pay the money for WebTrends, and no one had heard of Google Analytics back then.</p><p>This went onto the site, and a page displaying data with cfchart went up on the intranet.  The website used Fusebox, so it was very easy to tell which parts of the website were getting the most use, based off of which fuseactions were showing up more in the querystrings.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710496">6</a> by Damon Gentry
		posted on 12/5/2008 at 8:41 PM
		</div>
		<div class="comment_text"><p>@Matt / @Ray</p><p>While Matt's solution is short and simple, I (as the system administrator) would kick your arse from Portland to Miami for consuming every bit of JVM heap space I have allocated!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710502">7</a> by Damon Gentry
		posted on 12/5/2008 at 8:49 PM
		</div>
		<div class="comment_text"><p>@Matt / @Ray</p><p>I hope that didn't sound too mean!  What I meant was that your solution seems to create a uniquely named key in the application scope on each and every request.  Each struct/key value would take a few hundred bytes of data each.  But as your site gets used throughout the day, the amount of JVM heap used to store data in the application scope would grow and grow and grow, until the JVM heap crashed.</p><p>You'd have to recycle your application every few hours (or few days) to keep the thing stable.</p><p>I'd recommend storing (persisting) the data in a non-volatile location (like a database or a log file).  Just my $0.02.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710503">8</a> by Raymond Camden
		posted on 12/5/2008 at 8:57 PM
		</div>
		<div class="comment_text"><p>@Damon - No, not at all, and I should have been clear in my entry that - 'quick and dirty/not efficient' was ok, and should be assumed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710506">9</a> by Mat Evans
		posted on 12/5/2008 at 9:04 PM
		</div>
		<div class="comment_text"><p>I really like Matt's short and sweet case..</p><p>Live sessions could be kept track of, using onSessionStart &amp; onSessionEnd.</p><p>Just a little count in an application scope variable would do the trick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710510">10</a> by Dan Wilson
		posted on 12/5/2008 at 9:26 PM
		</div>
		<div class="comment_text"><p>I would download and install <a href="http://disq.us/url?url=http%3A%2F%2Fwww.nodans.com%2Fcustom%2Fsurfingstats%2F%3A0Rod6tyABkFSqKaLiNIRD1kZH38&amp;cuid=3321886" rel="nofollow noopener" title="http://www.nodans.com/custom/surfingstats/">http://www.nodans.com/custo...</a></p><p>Compact, yet stylish, delivering 110Gigawatts of real-time stats for your vanity and pleasure.</p><p>Do I win?</p><p>DW</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710504">11</a> by Shane Zehnder
		posted on 12/5/2008 at 9:52 PM
		</div>
		<div class="comment_text"><p>WhosOnCFC keeps up with that as well, although I rarely use it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710511">12</a> by Yaron Kohn
		posted on 12/5/2008 at 10:06 PM
		</div>
		<div class="comment_text"><p>//onRequestStart<br>//Some Lock Code would go here<br>LogFile.write(thisURL,now());</p><p>&lt;cfscript&gt;<br>//create report<br>Stats = createObject("component","cfcs.LogReader").init("/logs/");</p><p>Stats.spitSummary("12/01/08",now());</p><p>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710507">13</a> by johnb
		posted on 12/5/2008 at 11:17 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.woopra.com%3ASNKhqOzZYFgoRNXTTJes06ej2Tk&amp;cuid=3321886" rel="nofollow noopener" title="www.woopra.com">www.woopra.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710508">14</a> by Mark
		posted on 12/6/2008 at 3:56 AM
		</div>
		<div class="comment_text"><p>Maybe a snapshot version?</p><p>Just log details of all requests for 5 minutes. The user kicks it off and it ends itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710509">15</a> by David
		posted on 12/10/2008 at 11:26 PM
		</div>
		<div class="comment_text"><p>Shameless plug from the FusionReactor team :)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.fusion-reactor.com%2F%3ASMN5AylHl7CWoZW1pMCW8Cq1DeM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.fusion-reactor.com/">http://www.fusion-reactor.com/</a></p><p>See what's going on right now... current running requests, slowest pages, slowest queries, CPU usage, (heap space) memory usage, access to AMF (Flex) request data.</p><p>... all displayed with some sexy time-bound Flex graphs available for any J2EE server (CFMX standard/enterprise, Railo, BlueDragon, Tomcat, WebSphere, WebLogic, etc)!</p><p>In many cases you can install and be gathering metrics in under 5mins too :)</p></div>
	</div>
</div>
		