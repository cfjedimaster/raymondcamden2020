
<div class="comment" id="c_1713653736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653736">1</a> by Brad
		posted on 6/1/2006 at 10:39 PM
		</div>
		<div class="comment_text"><p>"Also - you are forgetting the cfqueryparam is more than just a security thing. It also speeds up the query execution (for databases that support it)."</p><p>That's really interesting. What are databases do you know that support it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653732">2</a> by Peter J. Farrell
		posted on 6/1/2006 at 10:49 PM
		</div>
		<div class="comment_text"><p>Any database that supports bound parameters.  Off the top of my head, MySQL, MsSQL and Oracle.  Also I think Postgres as well. Basically anything "enterprise" level - I seriously doubt Access (haven't touched that in five years).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653716">3</a> by Tom Mollerus
		posted on 6/1/2006 at 11:17 PM
		</div>
		<div class="comment_text"><p>The reason that query params speed up query execution is because the aforementioned databases generate what is called an "execution plan" before actually performing the query. If you pass in query parameters, then since the actual SQL doesn't change as often, the database can often cache the execution plan across queries.  It's as if you were creating a SQL "template" and passing in values to it-- all the database has to do is to cache the template, plug in the values, and run the query. It can skip the execution plan, and that translates to improved speed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653733">4</a> by Raymond Camden
		posted on 6/1/2006 at 11:22 PM
		</div>
		<div class="comment_text"><p>Thanks for the follow up guys - been swamped!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653731">5</a> by Bob Everland
		posted on 6/1/2006 at 11:53 PM
		</div>
		<div class="comment_text"><p>Oracle really likes to have things in cfqueryparam so that it can make Bind variables. If not it has to parse through what I pass it to figure out what it is. This is a big problem when a page is hit thousands of times. We have a ton of code here that never used cfqueryparam and it is really hitting Oracle hard with having to parse all of the data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653729">6</a> by Scott Stroz
		posted on 6/1/2006 at 11:57 PM
		</div>
		<div class="comment_text"><p>Also bear in mind, that while you should not do it, if you have a query that uses SELECT * FROM...and use &lt;cfqueryparam&gt; in a WHERE clause and the table gets modified, say, you add a column, the new column won't show up in your query object right away.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653737">7</a> by Edward T
		posted on 6/2/2006 at 12:14 AM
		</div>
		<div class="comment_text"><p>Back at the security-in-depth idea, it's good practice to validate at every level for the inevitable situation in which a previously single-use function/query/cfc gets repurposed in a new context - perhaps one that doesn't check as rigorously before passing parameters....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653739">8</a> by Dan G. Switzer, II
		posted on 6/2/2006 at 12:34 AM
		</div>
		<div class="comment_text"><p>&lt;cfqueryparam /&gt; also prevent SQL injections--which &lt;cfargument /&gt; would do nothing against.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653734">9</a> by tof
		posted on 6/2/2006 at 4:37 AM
		</div>
		<div class="comment_text"><p>I'd suspect sybase to accept bound parameters as well. since mssql is pretty much a clone of sybase in the first place.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653742">10</a> by Tony Petruzzi
		posted on 6/2/2006 at 5:27 AM
		</div>
		<div class="comment_text"><p>CFQUERYPARAM can be used with any database. From the documentation:</p><p>"If a DBMS does not support bind parameters, ColdFusion validates and substitutes the validated parameter value back into the string. If validation fails, it returns an error message."</p><p>So, yes you can use cfqueryparam with any DBMS system you have. Personally I use them all the time. If nothing more than just for the fact that I know what kind of information I'm throwing into the database.</p><p>The biggest gotcha with using them though is that you can't cache the query. Also using them in conjunction with SELECT * (which should NEVER be used) results in JDBC throwing errors if you change the underlying tables.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653735">11</a> by Scott Stroz
		posted on 6/2/2006 at 5:31 AM
		</div>
		<div class="comment_text"><p>'Also using them in conjunction with SELECT * (which should NEVER be used) results in JDBC throwing errors if you change the underlying tables.'</p><p>This actually depends on teh changes made to the underlying tables.  If you add a column, no error will be thrown, but the new column will not be included in the query object.  (It will eventually, but I am not sure of how long or after what event, though I know recycling the ColdFusion service will do the trick)</p></div>
	</div>
</div>
		