
<div class="comment" id="c_1713650494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650494">1</a> by Phillip Senn
		posted on 2/24/2006 at 12:08 AM
		</div>
		<div class="comment_text"><p>I've always lived by the creed "Anything less than instantaneous is unacceptable".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650487">2</a> by Scott Stroz
		posted on 2/24/2006 at 12:40 AM
		</div>
		<div class="comment_text"><p>All off the answers that started with 'It depends', this one, by far is the most appropriate.</p><p>Also keep in mind that fewer records does not necessarily mean faster queries.  If your queries are complex, doing a lot of complex computations or even if your DB is not indexed approprately, the milliseconds can pile up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650495">3</a> by Raymond Camden
		posted on 2/24/2006 at 12:45 AM
		</div>
		<div class="comment_text"><p>Scott, that is a darn fine point and one I should have made. You are absolutely correct. Thanks for adding that!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650496">4</a> by Ryan
		posted on 2/24/2006 at 12:48 AM
		</div>
		<div class="comment_text"><p>When using MS SQL it tends to show execution times in CF in rough multiples of 16.66 milliseconds (the server counts seconds with roughly 300 or so clicks per second, so a nice round number isn't feasible).</p><p>I've found that simple queries take 16 or 31 milliseconds to run.  Longer obviously for more complex queries or those with bigger result sets.</p><p>Here is a query to a 15+ column wide Oracle table with 80k rows.  Execution time of 31ms, 30 rows returned:<br>select * from hremp where position in ('01g0834','013r827','019m898','0a10569','020b009')<br>or SPV_POS in ('01g0834','013r827','019m898','0a10569','020b009')<br>order by spv_pos, position</p><p>Here is one I didn't write that takes longer than I think it should to run (Time=453ms, Records=2348, tables have 10k &amp; 13k+ records in them):</p><p>SELECT DISTINCT P.Part_ID, P.Part_Name, P.Active, AsmtCount.Counter<br>	FROM Participants P LEFT OUTER JOIN<br>	Part_Asmt_Levels PAL ON P.Part_ID = PAL.Part_ID LEFT OUTER JOIN<br>	(SELECT Part_ID, COUNT(DISTINCT Assessment_ID) AS Counter<br>	FROM Part_Asmt_Levels<br>	WHERE Level_ID = 0<br>	GROUP BY Part_ID) AsmtCount ON <br>	P.Part_ID = AsmtCount.Part_ID <br>	WHERE PAL.Assessment_ID = 4<br>	AND PAL.Level_ID = 0<br>	ORDER BY P.Part_Name, P.Part_ID</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650472">5</a> by denis
		posted on 2/24/2006 at 12:55 AM
		</div>
		<div class="comment_text"><p>Paste the query in Query Analyzer<br>hit CTRL + K and look at the execution plan<br>index seek --good<br>index scan -- not as good<br>table scan --bad</p><p>So you want to avoid table scans by using sargable arguments<br>also you want to minimize IO by listing only the columns that you need instead of SELECT * FROM....</p><p>take a look here to see what else you can do(<a href="http://disq.us/url?url=http%3A%2F%2Fsqlservercode.blogspot.com%2F2005%2F12%2Fsql-query-optimizations.html%29%3ADzuE3cKvkyzg1y91b2vjYGWKX7o&amp;cuid=3321886" rel="nofollow noopener" title="http://sqlservercode.blogspot.com/2005/12/sql-query-optimizations.html)">http://sqlservercode.blogsp...</a></p><p>Denis</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650473">6</a> by Justice
		posted on 2/24/2006 at 12:59 AM
		</div>
		<div class="comment_text"><p>As a tuning method, or just to check major points of a SQL statement:</p><p>1) If you are joining 2 files, make sure that whatever field(s) you are joining on are indexed in both files.  Nothing like a non-indexed join to slow down your day</p><p>2) If you are doing 'alike' queries over and over, consider creating a view.  A view is like a SQL query overtop of a table(s) that you can run queries off of!  Whenever you can let your DB server do the hard work, it will be faster =)  Views are really easy too, check a simple example out here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.faqs.org%2Fdocs%2Fppbook%2Fr25758.htm%3AHDcVnZeVUJ_4N4v52MybvcCJIKA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.faqs.org/docs/ppbook/r25758.htm">http://www.faqs.org/docs/pp...</a></p><p>3) Order your WHERE clause so that the major limiting factors come first.  For example, if you have a table containing orders for the past 10 years, and the 1st thing in your where clause is WHERE Origin = 'MI', you are first finding any order from MI for the entire life of your table!  Put date limiters 1st in your WHERE clause, and it should filter down your results quicker (provided you have an index on date!)  In this same thought, put indexed fields 1st in your WHERE clause as well, and if all else fails, consider creating either a new index or an indexed view =)</p><p>Hope these help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650471">7</a> by Phillip Senn
		posted on 2/24/2006 at 1:35 AM
		</div>
		<div class="comment_text"><p>&gt; index seek --good<br>Mongo like index seek.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650477">8</a> by joel
		posted on 2/24/2006 at 1:42 AM
		</div>
		<div class="comment_text"><p>Yes, it certainly does depend. 1100 msec is a long time to look up a phone number, but a perfectly reasonable time if the query is, say, predicting the GDP of a Western African nation over the next 10 years based upon rainfall forecasts.</p><p>In addition to the comments made above about the "slow" query listed, left outer joins are considerably more expensive than inner joins. The two outer joins in that query could be a big contributing factor to the speed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650476">9</a> by sudo-name
		posted on 2/24/2006 at 1:46 AM
		</div>
		<div class="comment_text"><p>Hi, Ray - I'm the original questioner and wanted to say thank you for answering my question and to say thank you to the other posters here as well for their advice.  I think my indexing might be the problem, but anyway, here is my long running query:</p><p>SELECT  title, pdate, category<br>FROM  articles<br>WHERE  pdate &gt;= '#DateFormat(dateAdd('d','-12',liveDate),'yyyy-mm-dd')#'<br>AND  (category = '#a[x]#')<br>ORDER BY pdate DESC</p><p>I've got an array of six categories that I loop over.  I run a query based on the current array item (news, sports, etc) that equals the liveDate - the MAX date in the DB - and shoot them into a structure.  My liveDate query only runs once.</p><p>But if a query comes back empty for that array item, I run the above query to locate the most recent articles for that category going back 12 days.  Sometimes it'll be a week or more without an article appearing for that category.  It's totally random.</p><p>Please be gentle, my kevlar is thin...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650484">10</a> by todd
		posted on 2/24/2006 at 1:51 AM
		</div>
		<div class="comment_text"><p>why not try to make your category a list and run the query once kinda like this<br>SELECT title, pdate, category<br>FROM articles<br>WHERE pdate &gt;= '#DateFormat(dateAdd('d','-12',liveDate),'yyyy-mm-dd')#'<br>AND category in ('#myList#')<br>ORDER BY pdate DESC</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650480">11</a> by todd
		posted on 2/24/2006 at 1:52 AM
		</div>
		<div class="comment_text"><p>i think i may have misunderstood...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650470">12</a> by todd
		posted on 2/24/2006 at 1:59 AM
		</div>
		<div class="comment_text"><p>i'd probably go with datediff in your where clause, but i don't know that would make too big a difference</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650478">13</a> by Seth Petry-Johnson
		posted on 2/24/2006 at 2:08 AM
		</div>
		<div class="comment_text"><p>If you run the same query many, many times in succession (inside a loop, for example) parameterize it with &lt;cfqueryparam&gt;.  This enables the DB to compile the query statement a single time and re-use it for all subsequent calls.  If you just plop your data directly into the SQL statement then you basically force the server to re-analyze and re-compile the statement each time.  [This also guards against SQL injection attacks!]</p><p>This won't show you a noticeable performance increase on a single query, but it's a great habit to get into and will help if you have a high volume app that does the same query over and over again.</p><p>Some other random performance-enhancing tactics:</p><p>1) Indexes are your friend.  In my experience most web apps perform far more selects than inserts or updates, so liberal use of indexes is a good rule of thumb.</p><p>2) Properly normalize your database! This reduces redundant data, which reduces disc I/O operations, which increases performance.</p><p>3) Learn how to use a query analyzer tool to see the execution plan of a given query.  Use the plan to determine what indexes you might create that will speed up the query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650485">14</a> by Sam Curren
		posted on 2/24/2006 at 5:48 AM
		</div>
		<div class="comment_text"><p>This has been said before in this list, but the absolute best way to speed queries is to index the columns that you are using in joins or using in the WHERE clause. Any other tricks to speed up SQL queries generally pale in comparison to having properly indexed tables.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650474">15</a> by Phillip Senn
		posted on 2/24/2006 at 7:05 PM
		</div>
		<div class="comment_text"><p>Instead of checking<br>if a query comes back empty for that array item, and running another query to locate the most recent articles for that category going back 12 days...</p><p>It looks like you want to use the TOP 1 limitation instead.<br>SELECT TOP 1<br>title, pdate, category<br>FROM articles<br>WHERE pdate &gt;= '#DateFormat(dateAdd('d','-12',liveDate),'yyyy-mm-dd')#'<br>AND (category = '#a[x]#')<br>ORDER BY pdate DESC</p><p>This will always give you the most recent article.<br>I agree with Todd also: If you can combine your 6 queries into 1 with category in ('#myList#'), that would be much better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650475">16</a> by joel
		posted on 2/24/2006 at 7:18 PM
		</div>
		<div class="comment_text"><p>It's also worthy to note that database engines may choose not to use an index even if it exists. If the selectivity of an index is low ("many" rows in the table match the criteria selection) then it is more efficient simply to scan the table. An index on a unique value, say, username or SSN will almost certainly be used, while an index on gender (two values: M or F) may be ignored. The reason for this that collecting the row identifiers from the gender index then using that list to pick out the matching rows in the table is slower and more disk intensive then simply scanning the table top-to-bottom to find the desired values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650482">17</a> by Craig M. Rosenblum
		posted on 2/24/2006 at 7:36 PM
		</div>
		<div class="comment_text"><p>The point being is that you should let the database do all the hard work...</p><p>I have a simple philosophy, if the tables have too many records or too complex joins then it becomes a view. Then i am only bringing across the exact number of records i need...</p><p>The key is how much data you want, and then what is the best method for bringing it to the coldfusion page you need it for.</p><p>Other than having cfdocumentation bookmarked, i also have the ms sql 2000 books online bookmarked for easy reference.</p><p>Really helps to easily lookup any t-sql or any sql matter..</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdoc.ddart.net%2Fmssql%2Fsql2000%2Fhtml%2F%3A6ulr4p9napdjjqNh_0tms6ND5pw&amp;cuid=3321886" rel="nofollow noopener" title="http://doc.ddart.net/mssql/sql2000/html/">http://doc.ddart.net/mssql/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650479">18</a> by Phillip Senn
		posted on 2/24/2006 at 7:39 PM
		</div>
		<div class="comment_text"><p>These are good posts, and I'm learning a lot from the generic responses.<br>sudo-name: I posted a question similar to yours on <a href="http://disq.us/url?url=http%3A%2F%2FExperts-Exchange.com%3A9yPr_kGHyi4_7dTU-vnYkT2L1z0&amp;cuid=3321886" rel="nofollow noopener" title="Experts-Exchange.com">Experts-Exchange.com</a> <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.experts-exchange.com%2FDatabases%2FMicrosoft_SQL_Server%2FQ_21750223.html%3Ap0-84arnngVuRAk9EaLLFbTKW98&amp;cuid=3321886" rel="nofollow noopener" title="http://www.experts-exchange.com/Databases/Microsoft_SQL_Server/Q_21750223.html">http://www.experts-exchange...</a><br>and they came up with a solution like this:</p><p>SELECT title, Max(pdate), category<br>FROM articles<br>WHERE pdate &gt;= '#DateFormat(dateAdd('d','-12',liveDate),'yyyy-mm-dd')#'</p><p>Simple!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650483">19</a> by Craig M. Rosenblum
		posted on 2/24/2006 at 7:49 PM
		</div>
		<div class="comment_text"><p>Experts Exchange is a really great resource...</p><p>But for that dateformat query, i'd be tending to convert that into a sql function...just a personal preference...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650488">20</a> by Rick Osborne
		posted on 2/24/2006 at 9:02 PM
		</div>
		<div class="comment_text"><p>I made a quick (4-minute) flash video showing the basics of how to use the index tuning wizard to automagically figure out indexes from your queries:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Frickosborne.org%2Fblog%2F%3Fp%3D37%3AfUTpLhKSHDQAvjHjA5KMNWd2WCg&amp;cuid=3321886" rel="nofollow noopener" title="http://rickosborne.org/blog/?p=37">http://rickosborne.org/blog...</a></p><p>HTH</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650497">21</a> by Kjell
		posted on 7/19/2006 at 12:47 PM
		</div>
		<div class="comment_text"><p>SELECT <a href="http://disq.us/url?url=http%3A%2F%2Ft1.id%3Ag4DGUohdsfPEWWPwuPJQQwLtmak&amp;cuid=3321886" rel="nofollow noopener" title="t1.id">t1.id</a> AS Start, <a href="http://disq.us/url?url=http%3A%2F%2Ft2.id%3AXhgieATW8-pidV8sVdvJpeZ4Qr0&amp;cuid=3321886" rel="nofollow noopener" title="t2.id">t2.id</a> AS End, <a href="http://disq.us/url?url=http%3A%2F%2Ft2.id%3AXhgieATW8-pidV8sVdvJpeZ4Qr0&amp;cuid=3321886" rel="nofollow noopener" title="t2.id">t2.id</a> - <a href="http://disq.us/url?url=http%3A%2F%2Ft1.id%3Ag4DGUohdsfPEWWPwuPJQQwLtmak&amp;cuid=3321886" rel="nofollow noopener" title="t1.id">t1.id</a> +1 AS Result<br>FROM nede t1, nede t2<br>WHERE (<br><a href="http://disq.us/url?url=http%3A%2F%2Ft1.id%3Ag4DGUohdsfPEWWPwuPJQQwLtmak&amp;cuid=3321886" rel="nofollow noopener" title="t1.id">t1.id</a> &lt; <a href="http://disq.us/url?url=http%3A%2F%2Ft2.id%3AXhgieATW8-pidV8sVdvJpeZ4Qr0&amp;cuid=3321886" rel="nofollow noopener" title="t2.id">t2.id</a><br>)<br>AND NOT <br>EXISTS (</p><p>SELECT * <br>FROM nede t3<br>WHERE (<br>t3.no6 =1<br>AND <a href="http://disq.us/url?url=http%3A%2F%2Ft3.id%3AmWuHzG73wsdofsyS5T1wQjkN710&amp;cuid=3321886" rel="nofollow noopener" title="t3.id">t3.id</a><br>BETWEEN <a href="http://disq.us/url?url=http%3A%2F%2Ft1.id%3Ag4DGUohdsfPEWWPwuPJQQwLtmak&amp;cuid=3321886" rel="nofollow noopener" title="t1.id">t1.id</a><br>AND <a href="http://disq.us/url?url=http%3A%2F%2Ft2.id%3AXhgieATW8-pidV8sVdvJpeZ4Qr0&amp;cuid=3321886" rel="nofollow noopener" title="t2.id">t2.id</a><br>)<br>OR (<br><a href="http://disq.us/url?url=http%3A%2F%2Ft3.id%3AmWuHzG73wsdofsyS5T1wQjkN710&amp;cuid=3321886" rel="nofollow noopener" title="t3.id">t3.id</a> = <a href="http://disq.us/url?url=http%3A%2F%2Ft1.id%3Ag4DGUohdsfPEWWPwuPJQQwLtmak&amp;cuid=3321886" rel="nofollow noopener" title="t1.id">t1.id</a> -1<br>AND t3.no6 =0<br>)<br>OR (<br><a href="http://disq.us/url?url=http%3A%2F%2Ft3.id%3AmWuHzG73wsdofsyS5T1wQjkN710&amp;cuid=3321886" rel="nofollow noopener" title="t3.id">t3.id</a> = <a href="http://disq.us/url?url=http%3A%2F%2Ft2.id%3AXhgieATW8-pidV8sVdvJpeZ4Qr0&amp;cuid=3321886" rel="nofollow noopener" title="t2.id">t2.id</a> +1<br>AND t3.no6 =0<br>)<br>)<br>ORDER BY <a href="http://disq.us/url?url=http%3A%2F%2Ft2.id%3AXhgieATW8-pidV8sVdvJpeZ4Qr0&amp;cuid=3321886" rel="nofollow noopener" title="t2.id">t2.id</a> - <a href="http://disq.us/url?url=http%3A%2F%2Ft1.id%3Ag4DGUohdsfPEWWPwuPJQQwLtmak&amp;cuid=3321886" rel="nofollow noopener" title="t1.id">t1.id</a> DESC <br>LIMIT 1<br>/*********/<br>There is 300 records, and only 1 and 0 in column no6. <br>Can you please give me some info for why it take so long.<br>I am aware that it is an unbroken series of values that all are equal. It take about 20 sec to execute the query.<br>Hope for quick responds.<br>Best regards Kjell</p></div>
	</div>
</div>
		