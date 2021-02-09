
<div class="comment" id="c_1713661482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661482">1</a> by Joel Cox
		posted on 1/24/2007 at 10:26 PM
		</div>
		<div class="comment_text"><p>How is this really different from count(*) without the limit clause?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661481">2</a> by todd sharp
		posted on 1/24/2007 at 10:45 PM
		</div>
		<div class="comment_text"><p>I'm not a MySQL user - is limit like top?</p><p>Anyways, in SQL server you can follow up a query with select @@rowcount to get the rows affected by the last query (including inserts, updates, deletes).  PS - I'm sure you know this, but CF now returns a recordcount for ins, upds, dels...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661480">3</a> by BL
		posted on 1/24/2007 at 10:59 PM
		</div>
		<div class="comment_text"><p>I have always been looking for a better implementation of this concept and I did not know about MySql's SQL_CALC_FOUND_ROWS feature.  I wonder if it's only on MySql version 5.x.  The way I've been doing this concept is to first run a select count(*) with the same from and where clauses and no limit (because count(*) executes much faster), then do the regular select with the limit.</p><p>It works pretty fast, but I've wondered myself if this is the best implementation of the concept.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661483">4</a> by todd sharp
		posted on 1/24/2007 at 11:06 PM
		</div>
		<div class="comment_text"><p>Read the docs - I see now.  I don't believe there is an equivalent in sql server.  That is a nice feature though!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661484">5</a> by Ben Nadel
		posted on 1/25/2007 at 1:38 AM
		</div>
		<div class="comment_text"><p>That would be sweeeeeet in SQL Server. I think it would change the way I did pagination.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661488">6</a> by Per K.
		posted on 1/25/2007 at 4:23 AM
		</div>
		<div class="comment_text"><p>When you do [select * from...] in CF/MySQL, CF executes [show full columns from...] behind the scenes. That screws up this function on MySQL 5.x (on 4.x it works fine)</p><p>Try this on MySQL 5.x:</p><p>select SQL_CALC_FOUND_ROWS * from entries limit 2;<br>show full columns from entries;<br>select found_rows();</p><p>found_rows(); actually returns the result from the previous query, that would be the number of fields in the table in question.</p><p>Bummer...</p><p>I've tried different versions of Connector/J - no luck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661486">7</a> by Brad Roberts
		posted on 1/26/2007 at 6:43 AM
		</div>
		<div class="comment_text"><p>We use SQL_CALC_FOUND_ROWS, LIMIT, and OFFSET for pagination.  Pretty slick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661485">8</a> by Robin
		posted on 2/20/2007 at 8:48 PM
		</div>
		<div class="comment_text"><p>I can tell you from experience that select count(0) is three times faster than SQL_CALC_FOUND_ROWS on larger tables.</p><p>count(0) is faster than count(*) by the way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661489">9</a> by Jack Welde
		posted on 7/22/2007 at 9:12 AM
		</div>
		<div class="comment_text"><p>@Per K -- this problem has been solved with the latest version of MySQL Connector/J (v.5.07 as of today).  With that JDBC connector, you can select found_rows() and it will work properly.</p><p>Note that I had to add "useDynamicCharsetInfo=false" in the Connection String of the datasource (I'm using BlueDragon, but I'm sure that ColdFusion administrator has the equivalent).</p><p>Hope that helps!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661487">10</a> by Per K
		posted on 7/22/2007 at 8:31 PM
		</div>
		<div class="comment_text"><p>I know, great! I filed the "bug/feature" back in January.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbugs.mysql.com%2Fbug.php%3Fid%3D25978%3AX1VWkHRZ4pqOHWWhI5yNaRQnPBU&amp;cuid=3321886" rel="nofollow noopener" title="http://bugs.mysql.com/bug.php?id=25978">http://bugs.mysql.com/bug.p...</a></p><p>But thanks for the notice ;)</p></div>
	</div>
</div>
		