
<div class="comment" id="c_1713660492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660492">1</a> by Tom Mollerus
		posted on 12/19/2006 at 11:17 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>This is a really nice piece of work, even as simple as it is. Another great feature to add would be to track campaign codes from marketing efforts (e.g., capture a specific URL variable that is appended to the first page the person calls) and to track goals/conversions (e.g., did this person register, did they put anything in their shopping cart/look at the upgrade page, did they pay for premium services).  Hmm... you could perhaps embed some A/B testing in there, too... mind if I take your code to create a separate CFC to take a stab at it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660479">2</a> by Tom Mollerus
		posted on 12/19/2006 at 11:27 PM
		</div>
		<div class="comment_text"><p>Oops, I see that your previous article already addressed the conversions issue to some degree, but I wonder if it could be made a little more flexible by abstracting out the URLs which represent the conversion goals.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660495">3</a> by Raymond Camden
		posted on 12/20/2006 at 12:02 AM
		</div>
		<div class="comment_text"><p>Good point. One thing I forgot to mention, and I'll do it in a follow up post, is that you can create a function to map URLs to friendly names. So test.cfm would be Test, and news.cfm?id=54 would be News: Adobe buys Microsoft.</p><p>I'll blog about that tomorrow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660493">4</a> by David Crowther
		posted on 12/20/2006 at 12:48 AM
		</div>
		<div class="comment_text"><p>Could you not add entrypage and entrytime to the session scope in onSessionStart and use onSessionEnd to upload everything to the database, resulting in only one database call.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660490">5</a> by Raymond Camden
		posted on 12/20/2006 at 12:55 AM
		</div>
		<div class="comment_text"><p>Sure. Although it is just 2 db calls now. But yeah, that would be even better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660489">6</a> by Geoff
		posted on 12/20/2006 at 2:28 PM
		</div>
		<div class="comment_text"><p>Just wondering is session.urltoken always totally unique? (Between reboots of the server, for example?)</p><p>i.e. in your entryexitlog database table, have you made the "sessionid" column your unique primary key?</p><p>I wonder if a &lt;cfset session.myid=createuuid()&gt; might be better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660503">7</a> by Raymond Camden
		posted on 12/20/2006 at 5:23 PM
		</div>
		<div class="comment_text"><p>Geoff, I kinda assume most folks use j2ee sessions, which should be - but - shoot - it is so easy to use createUUID() you might as well anyway. I was going to do an update today with the other db mod a commenter made, and I'll do this one as well.</p><p>Everyone - GREAT feedback. Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660504">8</a> by duncan
		posted on 12/20/2006 at 7:14 PM
		</div>
		<div class="comment_text"><p>some typos in your code:<br>&lt;cfset thispagethispage<br>&lt;cfset sessionsession.hits</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660506">9</a> by Raymond Camden
		posted on 12/20/2006 at 7:19 PM
		</div>
		<div class="comment_text"><p>That is the code formatter. If you click the view plain link it will go away. I've pinged the author of the code formatter but I'll ping him again to see if he has a new version.</p></div>
	</div>
</div>
		