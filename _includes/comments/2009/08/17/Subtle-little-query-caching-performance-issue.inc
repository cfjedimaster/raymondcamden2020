
<div class="comment" id="c_1713717757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717757">1</a> by Mike Brunt
		posted on 8/18/2009 at 7:56 AM
		</div>
		<div class="comment_text"><p>Interesting Ray as I am looking at all things caching at the moment, thanks for the post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717774">2</a> by Adam Cameron
		posted on 8/18/2009 at 11:00 AM
		</div>
		<div class="comment_text"><p>Hi Ray<br>Not that it helps your situation on the CF side of things, but it'd help on the DB if you parameterised that date offset value rather than hard-coding it in the SQL.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717766">3</a> by Al Davidson
		posted on 8/18/2009 at 2:49 PM
		</div>
		<div class="comment_text"><p>CFQUERYPARAM is your friend!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717765">4</a> by Kevin Roche
		posted on 8/18/2009 at 3:26 PM
		</div>
		<div class="comment_text"><p>I came across this some time ago in version 5, and the solution I used was to create a rounded value for now() rounding to the nearest 15 minutes in that case solved the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717771">5</a> by Raymond Camden
		posted on 8/18/2009 at 3:36 PM
		</div>
		<div class="comment_text"><p>Adam - I'm embarrassed to say - I was so focused on the issue I completely missed the lack of QPs. This site I'm working on has a lot of those and I'm not tasked for fixing them, but certainly in cases like this I might as well go ahead and do it while I'm there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717758">6</a> by todd sharp
		posted on 8/18/2009 at 4:23 PM
		</div>
		<div class="comment_text"><p>I'd consider switching the where clause to use the DB's dateDiff() function, but your solution seems to work just as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717769">7</a> by Justin Dunham
		posted on 8/18/2009 at 5:14 PM
		</div>
		<div class="comment_text"><p>It looks like you are using mysql based on your limit statement. I usually do where dates like....</p><p>WHERE datefield &gt; DATE_SUB(CURDATE(),INTERVAL 1 DAY)</p><p>In the above example CF still calculates that date range every time the page is viewed, but if your query does that conversion, AND it's cached you are in good shape.  In most cases you wouldn't see much of a real world difference between the two, but if the page gets hit a ton it would be worth it to cut that calculation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717764">8</a> by Dan G. Switzer, II
		posted on 8/18/2009 at 6:26 PM
		</div>
		<div class="comment_text"><p>As Justin indicated, I recommend using the database native functions--which will help with it's stored index plans (especially in MSSQL.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717762">9</a> by James Moberg
		posted on 8/18/2009 at 8:18 PM
		</div>
		<div class="comment_text"><p>I've set up a "<a href="http://disq.us/url?url=http%3A%2F%2Frequest.now%3AhHd_DMyWOj_mFwNDPN5-luPf3Us&amp;cuid=3321886" rel="nofollow noopener" title="request.now">request.now</a>" variable that defaults to now(), but can also be specifically set for certain users for testing purposes.  It allows us to travel back-and-forward through time to test various date and time specific rules.  For example, if shipping deadlines change on Thurday at 2pm, I don't have to wait until Thursday at 2pm to test or modify any inline code anywhere.  I just change the global date/time variable to Thursday at 1:59pm and 2:01pm and verify the rules are properly configured.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717759">10</a> by Daniel D.
		posted on 8/18/2009 at 9:19 PM
		</div>
		<div class="comment_text"><p>I have used dates like that to programaticly invalidate the cache.  <br>Set cached after on a query to something like 1/1/1900.  Then keep a application or session variable of when things last changed.  Then add a where statement to the query:  where &lt;cfqueryparam value="#application.postlastchanged#"&gt; = &lt;cfqueryparam value="#application.postlastchanged#"&gt;<br>Which evaluates to a 1=1 type value so does not affect the query but invalidates that last cached query as the query string has changed and give you a new query result.  Very helpful for seldome updated values that you want to show up as soon as they are updated on the site.</p></div>
	</div>
</div>
		