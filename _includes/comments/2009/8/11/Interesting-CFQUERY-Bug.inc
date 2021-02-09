
<div class="comment" id="c_1713717658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717658">1</a> by goyuix
		posted on 8/12/2009 at 2:07 AM
		</div>
		<div class="comment_text"><p>This immediately reminded me of the wacky behavior of looping over a query, while already being inside another cfloop. You have to copy the value from the outer query into a local variable prior to entering the inner loop or else you get all sorts of exciting output (if you reference the outer query variable inside the loop for the inner query output).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717656">2</a> by Gary Funk
		posted on 8/12/2009 at 5:31 PM
		</div>
		<div class="comment_text"><p>I have experienced both of those probllems.  The cfloop problem is an old one. I have seen it many times. The cfquery problem I ran into about three years ago, when I started my current job. I always considered this more of an undocumented feature than a bug.  Now that I give it more thought, a bug is what they are and I should have reported these to Ray, as at the time, I had no idea on how to report bugs to Adobe. I'm betting most people don't know how to report bugs.  In fact, I have a bug in Flash Builder 4 that I have no idea on how to report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717648">3</a> by Raymond Camden
		posted on 8/12/2009 at 5:32 PM
		</div>
		<div class="comment_text"><p>Gary, there is a public bug tracker for Flash. Don't have the URL handy - but there is one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717657">4</a> by Elliott Sprehn
		posted on 8/15/2009 at 3:28 PM
		</div>
		<div class="comment_text"><p>Did you file a ticket for this?</p><p>It has to do with how they set transaction points on the current thread I think, and they should really fix it. It's not hard to end up in a situation like this if you go down the AOP road.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717661">5</a> by Raymond Camden
		posted on 8/15/2009 at 3:30 PM
		</div>
		<div class="comment_text"><p>David did.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717660">6</a> by Ben Nadel
		posted on 8/19/2009 at 6:09 PM
		</div>
		<div class="comment_text"><p>Very interesting. I wonder what happens if you wrap this all in a CFTransaction tag? Will it barf? Or will it see it as a single data source?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717665">7</a> by Michael
		posted on 4/12/2012 at 4:08 AM
		</div>
		<div class="comment_text"><p>We are running into this problem.  They way we fixed it was to just put the full database name in the insert query.</p><p>For Example,</p><p>&lt;cfquery...&gt;<br>insert into db.dbo.table<br>('#UDF(value)#')<br>&lt;/cfquery&gt;</p><p>As long as your databases are on the same table, and they have the correct access rights, it will work</p></div>
	</div>
</div>
		