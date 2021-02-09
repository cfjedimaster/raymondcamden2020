
<div class="comment" id="c_1713663068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663068">1</a> by John Ramon
		posted on 3/13/2007 at 6:35 PM
		</div>
		<div class="comment_text"><p>I pretty much did what you did Ray my blog just counts the page views and hitting refresh will make the count go up. I really don't see the point in creating a blog that counts the number of times a page is uniquely visited on a blog, well mine anyway.  We do have some apps that log views by session and IP the main reason is for the reporting section for the client. My blog isn't reporting to investors so I don't need to keep a true count.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663081">2</a> by DK
		posted on 3/13/2007 at 7:46 PM
		</div>
		<div class="comment_text"><p>There's no end all be all solution really like you said. Unless every thread sits behind user authentication so you can run it by user id and track views I suppose.</p><p>I've seen/done apps a couple diff ways. One way was similar to yours Ray with a session based tracking. Obviously the user can just log back later and affect the count, but it suited the app it was used on at the time. I think thats the key to any solution, whatever best suits the app and not always the preferred method to use I guess.</p><p>The other way I've seen it done is a lookup table off a user security trace. I've worked on apps that had to log every action a logged in and non logged in user performed. The table contained the ancillary data required to track counts if you wanted to. I believe this particular one transcribed it into a separate lookup table for just the counts later on or something similar.</p><p>Third way I've seen was an app that had the count in the view items table as an int field (so in the forum thread table an additional column called count or w/e). It then performed the update to that count on the view based on logic in the page. This one I believe allowed for inflation  and only checked the referrer so you couldn't just sit there and refresh normally.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663082">3</a> by Joshua Curtiss
		posted on 3/13/2007 at 7:50 PM
		</div>
		<div class="comment_text"><p>For a few internal apps where I work, I used the same "store the viewed pages in their session scope" approach. It seems most efficient for the desired effect: If someone comes back to it 5 times over the course of 20 minutes, or sits there and hits refresh, you don't want those to all count, but if they come back tomorrow, you'd want that to count. Session scope takes care of that perfectly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663080">4</a> by DK
		posted on 3/13/2007 at 7:56 PM
		</div>
		<div class="comment_text"><p>sorry to be wordy, but another comment I had was on unwieldy tables. IMHO unwieldy tables is more a reflection on your current skill level with your db server of choice. Thats not a knock on anyone, I think I fall extremely short in many areas of DB administration. I've felt similar worries about table size .... but then I found sites like <a href="http://disq.us/url?url=http%3A%2F%2Fgo-gaia.com%3AuOxCzeysJP3pW-O3jkbUyJFPqAg&amp;cuid=3321886" rel="nofollow noopener" title="go-gaia.com">go-gaia.com</a> that would dwarf my estimates for the tables in question.</p><p>Go-Gaia is a roleplaying type community that uses a modified phpbb forum (I used to do php before CF) to drive their forums and games and some of their portals etc. They have something like over 9 million posts, 6 million users, and at any given time 20k to 80k users online. Their sites (before machine upgrades) would still cruise for the most part, and their admin posted his tuning tips on the phpbb forums (I think they are still stickied). (Side-note: his post garnered dozens of posts arguing his methods as is the nature of us tech folk heh). I think it puts things in perspective sometimes when you check his diagnostic query results he posted and how optimized his queries were. Good stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663085">5</a> by Rick Root
		posted on 3/14/2007 at 4:32 PM
		</div>
		<div class="comment_text"><p>I recently added "Views" functionality to CFMBB.</p><p>Because content in forum threads is constantly changing... I actually use cookies for each thread that expire in X minutes.  The default in CFMBB is 2 minutes... so if you look at a thread... and then you look at it again 2 minutes later, it counts as another view... but if you hit refresh a bunch of times, they don't count.</p><p>the exact code:</p><p>&lt;cfif NOT isDefined("cookie.view#replace(threadid,"-","","ALL")#")&gt;<br>	&lt;cfset application.thread.updateViewCount(threadid)&gt;<br>	&lt;cfset request.thread.views = request.thread.views + 1&gt;<br>	&lt;!--- only count views every 2 minutes ---&gt;<br>	&lt;cfcookie name="view#replace(threadid,"-","","ALL")#" expires="#createTimeSpan(0,0,2,0)#" value="1"&gt;<br>&lt;/cfif&gt;</p><p>Now, it someone is reading a long thread for the first time, they might cause several views as they're paging through the messages in the thread... but that doesn't really bother me =)</p><p>In the case of a very active thread, you might get subscription updates almost immediately after you respond to a thread.  CFMBB sends a link directly to the new message, and if fewer than 2 minutes have passed... it won't count as another view, even though it probably should.  This kind of activity was not uncommon for "Game Day Threads" on the Carolina Hurricanes web site last year during the Stanley Cup Playoffs.  A topic would get hundreds of new responses over the course of a 2-1/2 hour hockey game.</p><p>I guess it all depends on how you want to define a "view".. you want to avoid the refresh issue.. but I think you want to count additional views when a user comes back to see a topic again because of new content.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663083">6</a> by Aegis
		posted on 3/15/2007 at 5:27 AM
		</div>
		<div class="comment_text"><p>Thank you all for the suggestions - you've given me much to think about! Initially I'm going to try two options - Ray's session variant, Rick's CFMBB setup to see how they stack up.</p><p>@DK, you're absolutely right - I've only ever used DBs as glorified spreadsheets unfortunately - I'm slowly improving on my knowledge on that side. When i get some more time, i'll try a table-based tracking system - i do prefer this idea, as it should make duplication of views a lot easier to prevent i think</p></div>
	</div>
</div>
		