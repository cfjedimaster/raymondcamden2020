
<div class="comment" id="c_1713649963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649963">1</a> by Dave Shuck
		posted on 2/8/2006 at 9:30 PM
		</div>
		<div class="comment_text"><p>It stinks when people actually use your work.  Fortunately I rarely have that problem! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649950">2</a> by mikeD
		posted on 2/8/2006 at 9:31 PM
		</div>
		<div class="comment_text"><p>That's it Ray - you're limited to only one update a week per project.</p><p>...j/k</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649961">3</a> by Sean Corfield
		posted on 2/9/2006 at 12:47 AM
		</div>
		<div class="comment_text"><p>cfcUnit *cough*</p><p>Automated test suites are your friend here...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649967">4</a> by Sean Corfield
		posted on 2/9/2006 at 12:47 AM
		</div>
		<div class="comment_text"><p>cfcUnit *cough*</p><p>Automated test suites are your friend here...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649965">5</a> by Sean Corfield
		posted on 2/9/2006 at 12:48 AM
		</div>
		<div class="comment_text"><p>Sorry for the dupe... your add comment form no longer shows the comment after a submit so it's impossible to tell whether a comment was actually submitted or not!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649966">6</a> by Raymond Camden
		posted on 2/9/2006 at 12:55 AM
		</div>
		<div class="comment_text"><p>The idea was to simply remove the window and reload the main screen. The feedbacvk I've gotten is that people don't like reading the long threads in the small popup. Plus it saves you from having to shutdown the window. Are you saying you did NOT see your comment posted? If so, it may have just been cached. I can make the reload() call append a new URL to help refresh the cache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649968">7</a> by Steve
		posted on 2/9/2006 at 1:06 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>What was the bug?  I made yesterday's update and everything is working.  I have made so many mods to the look and feel, not to mention renaming the tables, that it's nice when you add comments to th change file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649976">8</a> by Raymond Camden
		posted on 2/9/2006 at 1:09 AM
		</div>
		<div class="comment_text"><p>The bug occured when editing existing bugs I believe. Existing before the 2.0.2 version I mean. In general - I've had 2 sets of bugs - one for editing new and one for editing old stuff. All should be perfect now. Really.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649973">9</a> by Dave Shuck
		posted on 2/9/2006 at 1:24 AM
		</div>
		<div class="comment_text"><p>Actually this bug happened when adding a new ticket to the system when there was a relationship defined between creator and the issue.</p><p>In the IssueManager.cfc emailNotifications() method, Ray set 'creator' using &amp;lt;cfset var creator = ""&amp;gt; at the top of the method.  At two points later in the method, a conditional check was being made like &amp;lt;cfif creator IS NOT ""&amp;gt;, which failed when creator was instantiated as an object.  The two changes were made on line 90 and 126 if memory serves me, and only made to that file.</p><p>~d</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649970">10</a> by Raymond Camden
		posted on 2/9/2006 at 1:28 AM
		</div>
		<div class="comment_text"><p>Thanks for the details - I've been doing too much lately. :)</p></div>
	</div>
</div>
		