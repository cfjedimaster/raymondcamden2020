
<div class="comment" id="c_1713681210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681210">1</a> by Sid Wing
		posted on 5/25/2008 at 1:38 AM
		</div>
		<div class="comment_text"><p>Ray - You are THE MAN!  I've been fighting this issue with some internal feed generating apps that I wrote for work and have been thinking it was somehow related to the translation of datetime fields from SQL 2k5 to the formats supported by CF8.</p><p>And you're right... It would be easier (if the tag always generates GMT) to have an "offset" attribute in the tag itself.  Maybe for 8.02 or 9?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681213">2</a> by db
		posted on 5/25/2008 at 6:52 PM
		</div>
		<div class="comment_text"><p>i ran into tz offset mischief and decided to convert all dates to be viewed clientside to UTC.<br>i used DateConvert("local2utc", yourDate) on server dates and then some js to display on the page in the client timezone. it seems to be working ok.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681205">3</a> by Raymond Camden
		posted on 5/25/2008 at 7:39 PM
		</div>
		<div class="comment_text"><p>I want to say I had issues with this - it should work though. I'll try it again on Tuesday. It would certainly be a lot slimmer. The only issue would be if your times were not in the same tz as your machine's tz.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681214">4</a> by erik
		posted on 12/12/2008 at 12:32 AM
		</div>
		<div class="comment_text"><p>was having this same problem,but instead of using the above UDF and CF code i formatted the date column in the sql query to GMT and it worked great for me, heres the sql</p><p>,DATEADD(MINUTE,DATEDIFF(MINUTE,CURRENT_TIMESTAMP,GETUTCDATE()),date_published) AS 'date_published'</p></div>
	</div>
</div>
		