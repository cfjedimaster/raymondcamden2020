
<div class="comment" id="c_1713718295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718295">1</a> by David Hammond
		posted on 9/13/2009 at 5:22 AM
		</div>
		<div class="comment_text"><p>Just a thought about an alternative solution.  Since Leigh notes that he is sorting file names saved in a database, a more efficient solution may be to use database functions to get the number out of the file name.  Here's my quick test (using SQL Server):</p><p>DECLARE @filename VARCHAR(100)<br>SET @filename = 'SP1234_21.jpg'<br>SELECT  CONVERT(INT, SUBSTRING(@filename, CHARINDEX('_', @filename) + 1,<br>             CHARINDEX('.', @filename) - CHARINDEX('_',@filename) - 1))</p><p>The select statement returns "21" as an integer, and that should work for any length of number.  You could use a similar statement in the ORDER BY clause to order the results by number.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718305">2</a> by Raymond Camden
		posted on 9/13/2009 at 7:25 AM
		</div>
		<div class="comment_text"><p>Nice - always impressed by what you can do in SQL. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718301">3</a> by Leigh Romeo
		posted on 9/14/2009 at 8:15 AM
		</div>
		<div class="comment_text"><p>Just implemented the CF method:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.rwsp.net%2FPR12464%3AEd4wJ-J9K3gKv7K7GnupU4c-GE0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.rwsp.net/PR12464">http://www.rwsp.net/PR12464</a></p><p>Will do some tests on a SQL query and look at the speed.</p><p>Cheers!</p></div>
	</div>
</div>
		