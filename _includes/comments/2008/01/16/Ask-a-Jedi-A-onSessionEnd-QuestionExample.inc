
<div class="comment" id="c_1713676276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676276">1</a> by todd sharp
		posted on 1/16/2008 at 6:36 PM
		</div>
		<div class="comment_text"><p>How could one safely assume that a session is indeed timed out based on only a timestamp on an hourly task?  Unless of course the 'lastHit' is recorded in onRequestStart that is...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676278">2</a> by ted parton
		posted on 1/16/2008 at 8:38 PM
		</div>
		<div class="comment_text"><p>@todd.sharp -- While each online shop is different, I think by and large most consumers will complete a purchase in 1 hour or less. That said, you could certainly adjust as needed for your online shop.</p><p>As for the date/time-stamp I would place this on each item as it was put in the basket. But wait, you say, I want all of the items to expire at the same time for that basket. OK, well you could handle that a couple of different ways. For instance, you could update all related items with the most recent time-stamp; or you could split the basket and the items into two tables and control the expiration at the basket level. The choice is yours. :)</p><p>As Ray suggests, I would have a scheduled task that runs every 15 or 30 minutes to clean up items &gt; 60 minutes old. This clean up routine would also lend itself to be a stored procedure and ran as a scheduled event on your database server, if your db server supports such.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676273">3</a> by Jason Martin
		posted on 1/17/2008 at 11:17 PM
		</div>
		<div class="comment_text"><p>If you store the basket information in the users session, you can use the sessiontracker to get all active sessions, loop over the collection, and match any product id's that are already in someones cart. This way you don't have to mess with databases or scheduled tasks.</p><p>&lt;cfset sessionTracker= createObject("java","coldfusion.runtime.SessionTracker") /&gt;<br>&lt;cfset activeSessions = tracker.getSessinoCollection(application.applicationName) /&gt;<br>&lt;cfdump var="#activeSessions#" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676274">4</a> by Jason Martin
		posted on 1/18/2008 at 8:04 AM
		</div>
		<div class="comment_text"><p>Doh, I just re-read my code. I was in a hurry earlier and didn't proof read. This should work better:</p><p>&lt;cfset sessionTracker= createObject("java","coldfusion.runtime.SessionTracker") /&gt;<br>&lt;cfset activeSessions = sessionTracker.getSessionCollection(application.applicationName) /&gt;<br>&lt;cfdump var="#activeSessions#" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676275">5</a> by Dave Phipps
		posted on 1/18/2008 at 3:14 PM
		</div>
		<div class="comment_text"><p>Is there a neat way to use OnSessionEnd to provide a message (possibly in cfwindow) to let a user know there session is about to timeout and give them an opportunity to login again and therefore not lose any changes they are in the process of making? Or is there a better place to put this and if so how could it work - can you get the session timeout info?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676277">6</a> by Raymond Camden
		posted on 1/18/2008 at 7:10 PM
		</div>
		<div class="comment_text"><p>No. Think about it - when onSessionEnd runs - no one is there, right?</p><p>You can do something like so:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2007%2F10%2F8%2FAsk-a-Jedi-How-can-you-timeout-a-session-in-an-Ajaxbased-application%3AO_dkbt1IKTPPY7NmiwIKUWER79Q&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2007/10/8/Ask-a-Jedi-How-can-you-timeout-a-session-in-an-Ajaxbased-application">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		