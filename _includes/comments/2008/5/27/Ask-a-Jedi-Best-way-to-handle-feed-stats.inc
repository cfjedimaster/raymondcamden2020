
<div class="comment" id="c_1713681233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681233">1</a> by Edward Beckett
		posted on 5/27/2008 at 11:36 PM
		</div>
		<div class="comment_text"><p>Ray</p><p>This is good stuff to know ... Doing SEO ... I have a bit of experience with on-page optimization. Yet, lately I have found that I need to increase my readership with newsletters, feeds and blogging.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681242">2</a> by Albert
		posted on 5/29/2008 at 7:01 PM
		</div>
		<div class="comment_text"><p>Ray:  How about a simple query on the RSS feed page that records information about the client (Specific request, Time, IP address, etc.) to a SQL table?  Then you'll have a compact, application-specific log file that only has the information you wish to track.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681234">3</a> by Raymond Camden
		posted on 5/29/2008 at 8:39 PM
		</div>
		<div class="comment_text"><p>Sure that would work. I'd worry about it though under load. "Possibly" worry I should say. RSS tends to get hit a LOT more then non-RSS, so you will greatly increase your db traffic. Also - it feels kinda wrong to me to log to the db at the same time your web server is logging as well.</p></div>
	</div>
</div>
		