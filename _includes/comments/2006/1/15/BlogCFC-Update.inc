
<div class="comment" id="c_1713649157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649157">1</a> by Rob Gonda
		posted on 1/16/2006 at 2:53 AM
		</div>
		<div class="comment_text"><p>There was an easier way to prevent reposting: relocate to itself in application.cfm after the login:<br>&lt;cfloginuser name="#trim(username)#" password="#trim(password)#" roles="admin"&gt;<br>&lt;cfset session.loggedin = true&gt;<br>&lt;cflocation addtoken="No" url="#script_name#?#query_string#" /&gt;</p><p>I'm not sure of the cases were you would need to login in a specific thread with SEO --that uses slashes--, but this could be replaces with path_info and it would work there too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649167">2</a> by The Rabid CF Developer
		posted on 1/16/2006 at 3:11 AM
		</div>
		<div class="comment_text"><p>Kewl, I'll get right on rolling these changes into the Rabid_BlogCFC just in case anyone else out there enjoys being "rabid" the way I do...</p><p>Kudos for the bug fixes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649172">3</a> by tony of the weeg clan
		posted on 1/16/2006 at 4:19 AM
		</div>
		<div class="comment_text"><p>ray ray</p><p>is there a file in existence that speaks to which files were changed?</p><p>i have HEAVILY modified my blog with your code as the engine of course, and i dont want to muck up my design ... nawwimean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649165">4</a> by tony of the weeg clan
		posted on 1/16/2006 at 4:20 AM
		</div>
		<div class="comment_text"><p>cancel that houston.<br>we have confirmation on the file.<br>excellent.</p><p>danke.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649170">5</a> by jj
		posted on 1/16/2006 at 9:35 PM
		</div>
		<div class="comment_text"><p>I agree with Tony of the weeg clan.  Can you provide us with what files were updated so that those with customization can save some time?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649169">6</a> by jj
		posted on 1/16/2006 at 9:37 PM
		</div>
		<div class="comment_text"><p>I pulled a "Bob", ya know, my friend.  I found the file that "Bob" couldn't find that provided me with the info on updates.  Dur.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649171">7</a> by Roger Benningfield
		posted on 1/16/2006 at 11:51 PM
		</div>
		<div class="comment_text"><p>"I'd like to think the spammers realize now they can't 'cluster bomb' my blog..."</p><p>Ray: If they can get even one ping through, then it's worth it for them to send 500. They're using proxies and zombies, after all, so it's not *their* bandwidth being wasted.</p></div>
	</div>
</div>
		