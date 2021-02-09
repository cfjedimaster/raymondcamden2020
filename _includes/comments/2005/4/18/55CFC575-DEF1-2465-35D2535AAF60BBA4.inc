
<div class="comment" id="c_1713618004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618004">1</a> by tonyoftheweegclan
		posted on 4/18/2005 at 8:44 PM
		</div>
		<div class="comment_text"><p>ray ray...<br>(sounds like a character from fat albert)</p><p>do you have a fix in mind for "quotes" showing up wrong in comments?</p><p>just wondering</p><p>also, "johnny usability" is making another request to rearrange the cancel/post buttons :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618005">2</a> by Raphael Anzenberger
		posted on 4/27/2005 at 2:24 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>In blog.cfc, you have a logic in place -- I believe -- that filters out blog entries according to a date range, to show only active entries.  For instance, on our blog, we have entries falling into the Archive section and because we don't have more recent entries, the blog loads saying that there is no blog available.</p><p>Where can I modify the criteria in your code so that I can show older blog entries?  I found a place to do so, but I am afraid that I might break the code somewhere else...</p><p>Thanks for taking the time to respond to this query.</p><p>Take care,</p><p>Raphael.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618091">3</a> by Raymond Camden
		posted on 4/27/2005 at 6:10 PM
		</div>
		<div class="comment_text"><p>The default mode uses two filters:</p><p>&lt;!--- For default view, limit by date and max entries ---&gt;<br>&lt;cfset params.lastXDays = 30&gt;<br>&lt;cfset params.maxEntries = 25&gt;</p><p>What you care about is the lastXDays - this prevents entries more than 30 days old from showing up. You can completely remove this line. The maxEntries will still work to prevent too many entries from showing up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618088">4</a> by DJ
		posted on 5/3/2005 at 2:30 PM
		</div>
		<div class="comment_text"><p>I downloaded your wonderful blog tool today and installed everything on a CF7 machine following your install instruction and I'm getting the following error:</p><p>MSACCESS is not a supported value (MSACCESS,MYSQL,MSSQL)</p><p>The error occurred in...</p><p>I read your comments on the other posts and I'm confused about how to restructure the access database using the mysql.sql schema. Any ideas or suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618089">5</a> by Raymond Camden
		posted on 5/3/2005 at 5:56 PM
		</div>
		<div class="comment_text"><p>Just an FYI - I'm still out of town so it may be a day or so before I can respond.</p></div>
	</div>
</div>
		