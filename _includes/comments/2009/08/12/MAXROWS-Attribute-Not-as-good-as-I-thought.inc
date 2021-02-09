
<div class="comment" id="c_1713717641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717641">1</a> by Jochem van Dieten
		posted on 8/12/2009 at 4:00 PM
		</div>
		<div class="comment_text"><p>It may even be more complicated then that. For instance, the buffering of the resultset could happen both serverside and clientside. In the MS SQL Server JDBC driver that is determined by the select method (cursor vs. direct, with direct (client) as the default). In PostgreSQL that depends on the protocol version between server and driver, FEBE 2 is buffered on the client, FEBE 3 may be on both sides.</p><p>It does pay to experiment a bit with this if you want to find out how your database and driver work exactly. For some SQL to test whether the SQL runs fully on the server see my blog entry &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fjochem.vandieten.net%2F2008%2F12%2F17%2Fdoes-cfquerys-maxrows-work-on-the-coldfusion-side-or-the-database-side%2F%3AvGd-zr-CNXJI_lIf3Ne1QBa65tE&amp;cuid=3321886" rel="nofollow noopener" title="http://jochem.vandieten.net/2008/12/17/does-cfquerys-maxrows-work-on-the-coldfusion-side-or-the-database-side/">http://jochem.vandieten.net...</a>"&gt;Does cfquery’s maxrows work on the ColdFusion side or the database side?&lt;/a&gt; If you want to know more about the buffering behaviour of your driver you are probably going to need a packetsniffer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717640">2</a> by Tomas Fjetland
		posted on 8/12/2009 at 4:54 PM
		</div>
		<div class="comment_text"><p>When I'm done with my apps I always run through them while running MS SQL Profiler (which imo they made harder to find for novices from 2005 onwards) on the MS SQL servers. That has given me A LOT of eye openers up through the years.</p><p>It's really worthwhile and I can't recommend it enough. I assume the other major engines have something similar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717642">3</a> by Gary Gilbert
		posted on 8/12/2009 at 5:18 PM
		</div>
		<div class="comment_text"><p>I don't believe I ever used maxrows for exactly the reason you stated.  I had the feeling that it was "trimming" was done by CF and not by the DB and my tests (way back when) confirmed my feelings and never looked at the attribute again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717647">4</a> by JC
		posted on 8/12/2009 at 5:31 PM
		</div>
		<div class="comment_text"><p>I'm not sure if I buy this 100%. I use MaxRows in testing sometimes when I'm working with large data sets, and the performance is more inline with select top 20 (of ~200k). It takes longer to run the full query in query analyzer than to run the CF script with maxrows=20.</p><p>Maybe it gets data back in chunks and stops requesting the next chunk after maxrows is passed? I dunno.  But it works great for testing, when you don't really need to sit around and wait for large datasets to parse</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717644">5</a> by Josh Knutson
		posted on 8/13/2009 at 9:15 AM
		</div>
		<div class="comment_text"><p>I use maxrows but only on query of queries when I am already displaying the main query on the page, but need to get the top one for one column for some other purpose.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717646">6</a> by SeanH
		posted on 8/14/2009 at 12:13 AM
		</div>
		<div class="comment_text"><p>MAXROWS is the suspenders, and "select top N" is the belt.  I try to never run a query in a db without a top N in the select, and always use the MAXROWS to get a cut of that.  Most of my SQLs I cap at 1000 (or whatever the sanity length is for the query), then cut down from there with maxrows because more often than not, somewhere down the page I'm going to need the rows that I cut and I don't want to have to re-run the query again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717645">7</a> by Unibands
		posted on 8/20/2009 at 6:19 PM
		</div>
		<div class="comment_text"><p>I use Maxrows for query of queries, since CF doesn't allow you to pass something like "LIMIT 20" in this way. This does make sense, since a query of queries is simplay getting data from something that has already been to the database.</p><p>It has its place, but yes, for queries direct to the database, I wouldn't use it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717649">8</a> by Andreas Schuldhaus
		posted on 11/11/2009 at 7:28 PM
		</div>
		<div class="comment_text"><p>I'm not using maxrows since I ran into a strange problem with cached queries. Even when changing maxrows from say 10 to 5 rows, you will again get 10 rows back if your query is still in cache with the initial value. While LIMIT or TOP will work as expected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717650">9</a> by Raymond Camden
		posted on 11/11/2009 at 7:32 PM
		</div>
		<div class="comment_text"><p>I don't find that surprising at all. The cached query should ignore maxrows and just return what was cached.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717654">10</a> by Andy Bellenie
		posted on 8/19/2010 at 7:02 PM
		</div>
		<div class="comment_text"><p>Hmm, I was suspicious this would be the case so I created a dummy table for a remote datasource with 10k rows and ran three queries to compare performance. To my surprise I found absolutely no speed difference between using maxrows or TOP.</p><p>testNoLimit (Time=3299ms, Records=10000)<br>SELECT id, stringValue<br>FROM test</p><p>testMaxRows (Time=64ms, Records=10)<br>SELECT id, stringValue<br>FROM test</p><p>testTOP (Time=65ms, Records=10)<br>SELECT TOP 10 id, stringValue<br>FROM test</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717655">11</a> by Raymond Camden
		posted on 8/19/2010 at 7:28 PM
		</div>
		<div class="comment_text"><p>Interesting. Well - as I said, I was only passing along what I was told. I wonder if this is something with your driver versus other drivers?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717653">12</a> by Jan-Pieter Atsma
		posted on 8/25/2010 at 7:06 PM
		</div>
		<div class="comment_text"><p>I've also tried it out several queries and saw something funny. Yes, the TOP 10 is faster the first 2 or 3 times, but as Andreas descibes the ColdFusion Query Caching kicks in. The TOP 10 Query however is not being cached and therefore takes longer to run.</p><p>So, in short. <br>TOP 10 seems 3 to 4 times faster, but Cached Queries are faster than TOP 10. Can anyone else confirm this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717662">13</a> by Raymond Camden
		posted on 8/25/2010 at 7:08 PM
		</div>
		<div class="comment_text"><p>I think it is a mistake to bring up cached queries. You can cache a query using top 10, so it is a moot point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717664">14</a> by Gavin
		posted on 10/10/2013 at 4:04 AM
		</div>
		<div class="comment_text"><p>I just found something interesting today.<br>Using Maxrows in a query, using CF9 to talk to MariaDB over the normal mysql driver...</p><p>Gives a big <br>Error Executing Database Query.<br>Unknown system variable 'OPTION'</p><p>So not only is it not good to use with DB, it doesn't play nice with MariaDB.<br>Haven't seen any other glitches with MariaDB yet, but there is 1.</p></div>
	</div>
</div>
		