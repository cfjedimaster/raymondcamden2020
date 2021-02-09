
<div class="comment" id="c_1713616380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616380">1</a> by Ken Ingle
		posted on 10/20/2004 at 9:32 PM
		</div>
		<div class="comment_text"><p>I run a couple of websites currently that are on CF5, I tried to upgrade and had the same problem, had to back track.  Would love to hear a possible solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616382">2</a> by Emanuel
		posted on 10/20/2004 at 10:20 PM
		</div>
		<div class="comment_text"><p>We had similar problems like yours. What we did:</p><p>1 - Make sure the file jrunresources.xml has the right entries for the datasources.<br>2 - Updated the class driver to the latest one provided by  Macromedia.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616384">3</a> by Calvin Ward
		posted on 10/20/2004 at 10:34 PM
		</div>
		<div class="comment_text"><p>I believe the recent Updater contains the latest Database Drivers?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616383">4</a> by dave ross
		posted on 10/21/2004 at 1:11 AM
		</div>
		<div class="comment_text"><p>cached query settings? If the increased activity is on the db server, it's gotta be making more calls or making them in a different way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616386">5</a> by Ryan
		posted on 10/21/2004 at 7:30 PM
		</div>
		<div class="comment_text"><p>There is a datasource migration issue that will basically disable the use of indexes on varchar columns. <br>Tech note here: <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fsupport%2Fcoldfusion%2Fts%2Fdocuments%2Fmigrate_db_perf.htm%3Fpss%3Drss_coldfusion_19570%3AH9eMkNFYuwJHwFBtk-vIIr_0stA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.macromedia.com/support/coldfusion/ts/documents/migrate_db_perf.htm?pss=rss_coldfusion_19570">http://www.macromedia.com/s...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616387">6</a> by Jason Clark
		posted on 10/21/2004 at 9:02 PM
		</div>
		<div class="comment_text"><p>My suggestions would be:</p><p>1) ensure he's on the august updater of 6.1 as there are new data direct drivers in there.</p><p>2) open sql profiler, isolate the databases that the datasources are hitting and monitor activity and CPU.  Particularly pay attention to CPU,reads,writes columns in profiler.</p><p>3) isolate what pages are hit if any when CFMX starts, maybe point the webserver at a directory with nothing in it, again this would probably come from watching profiler to see what sql is being executed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616385">7</a> by tony petruzzi
		posted on 10/22/2004 at 5:19 PM
		</div>
		<div class="comment_text"><p>I ran into this issue before and figured it out.</p><p>First off you should make sure that you have "maintain database connection checked" in the datasource in CFAdmin.</p><p>Next, check to see what queries are running slow and optismize them. My problem was that for some odd reason a view that I hit slowed the server down to a crawl on CFMX. However, on CF5 it ran like a champ.</p><p>I put the view into Query Analyser and did an Index Tune. Turned out that I missed an index on a table. I had SQL server create the index and BINGO! no more problem.</p><p>I don't know why this happens.</p></div>
	</div>
</div>
		