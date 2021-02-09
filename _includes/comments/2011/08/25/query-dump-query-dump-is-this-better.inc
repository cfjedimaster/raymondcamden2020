
<div class="comment" id="c_1713734790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734790">1</a> by Joe Mastroianni
		posted on 8/26/2011 at 12:59 AM
		</div>
		<div class="comment_text"><p>I could see the use in certain cases (such as the one you find yourself in now). But generally it's as you said, if I'm dumping a resultset, it's to see what a query I'm keeping is doing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734777">2</a> by John Walker
		posted on 8/26/2011 at 1:03 AM
		</div>
		<div class="comment_text"><p>Not often.  You generally have the query in your code already and need it.   I am the one that requested cfdump at a Meet the Experts at MAX, can't recall if that was Allaire or Macromedia days.....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734788">3</a> by MikeG
		posted on 8/26/2011 at 1:09 AM
		</div>
		<div class="comment_text"><p>have you tried cfdbinfo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734795">4</a> by Raymond Camden
		posted on 8/26/2011 at 1:23 AM
		</div>
		<div class="comment_text"><p>Todd Sharp suggested this in IM, but since he signed off, I'm going to pretend it was my idea. This works too:</p><p>&lt;cfdump var="#new Query(sql='select * from tblblogentries').execute().getResult()#" top=5&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734791">5</a> by Raymond Camden
		posted on 8/26/2011 at 1:23 AM
		</div>
		<div class="comment_text"><p>MikeG - no - because I really need the data + structure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734794">6</a> by Peter Boughton
		posted on 8/26/2011 at 2:07 AM
		</div>
		<div class="comment_text"><p>Why don't you just query the database directly?</p><p>Or, if you did want to do it in CF, I'd rather have:<br>&lt;cfdbpreview table="thetable" top=5 /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734789">7</a> by Raymond Camden
		posted on 8/26/2011 at 2:08 AM
		</div>
		<div class="comment_text"><p>Um... "I'm working on an application where I don't (yet) have access to the database schema."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734792">8</a> by Peter Boughton
		posted on 8/26/2011 at 2:13 AM
		</div>
		<div class="comment_text"><p>I don't understand that statement. If CF can access it, what's stopping you from accessing it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734796">9</a> by Raymond Camden
		posted on 8/26/2011 at 2:17 AM
		</div>
		<div class="comment_text"><p>Eh? CF can access it because it has the DSN info. I don't have CF Admin access, and even if I did, the password is encrypted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734797">10</a> by Peter Boughton
		posted on 8/26/2011 at 2:18 AM
		</div>
		<div class="comment_text"><p>To be more specific: you must have a datasource setup for CF to access it, right?</p><p>Which means anything else with a JDBC driver can use the same settings as the datasource.</p><p>So use something like SQL Explorer ( <a href="http://disq.us/url?url=http%3A%2F%2Fsqlexplorer.org%3AZcFm9n7WbQkCB-FX2jhE_8b90VU&amp;cuid=3321886" rel="nofollow noopener" title="http://sqlexplorer.org">http://sqlexplorer.org</a> ) and you can query directly, with existing settings.</p><p>Is there something I'm missing? :/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734798">11</a> by Raymond Camden
		posted on 8/26/2011 at 2:20 AM
		</div>
		<div class="comment_text"><p>No CF Admin access. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734799">12</a> by Peter Boughton
		posted on 8/26/2011 at 2:24 AM
		</div>
		<div class="comment_text"><p>Ok, well this is the point where I'd get whoever is in control of that access to do one of:<br>a) provide the password<br>b) setup a user<br>c) provide a current db diagram</p><p>Trying to work against a database without knowledge of what it contains is just crazy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734801">13</a> by Raymond Camden
		posted on 8/26/2011 at 2:30 AM
		</div>
		<div class="comment_text"><p>Ok, you're kinda missing the point here. ;) Yes, it's best to use a db tool. My point was - in cases where you need to do some quick testing, I've done cfquery/cfdump before. Either way - we all dev differently. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734802">14</a> by Peter Boughton
		posted on 8/26/2011 at 2:33 AM
		</div>
		<div class="comment_text"><p>I didn't miss that point, I just don't understand accepting bad conditions. :P</p><p>If I was stuck with them regardless, I'd create a cfdbpreview tag to do the query, sql, and dumping for me in one short command.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734775">15</a> by Phillip Senn
		posted on 8/26/2011 at 3:08 AM
		</div>
		<div class="comment_text"><p>I have a keyboard shortcut that's defined as: {Ctrl+C},{End},{Enter},&lt;cfdump var="#{Ctrl+V}#"&gt;{Enter}&lt;cfabort&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734779">16</a> by Tof
		posted on 8/26/2011 at 4:19 AM
		</div>
		<div class="comment_text"><p>I know you are interested in the data as well, but for the schema part, fastest way to output that stuff is to query the information_schema tables, which outline all of you database metadata. Sp_help is a time saver too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734780">17</a> by Jaana Gilbert
		posted on 8/26/2011 at 4:37 AM
		</div>
		<div class="comment_text"><p>My favorite way of getting db info when I don't have direct access to the database via Enterprise Manager etc. :)</p><p>Get tables from the database (MSSQL):</p><p>SELECT * FROM INFORMATION_SCHEMA.Tables<br>WHERE Table_Type = 'BASE TABLE'<br>ORDER BY Table_Name</p><p>And then you loop through your tables and get columns</p><p>SELECT * FROM INFORMATION_SCHEMA.Columns<br>WHERE Table_Name = &lt;cfqueryparam cfsqltype="CF_SQL_VARCHAR" value="#ii#"&gt;<br>ORDER BY ORDINAL_POSITION</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734782">18</a> by Tof
		posted on 8/26/2011 at 5:02 AM
		</div>
		<div class="comment_text"><p>@jaana,</p><p>What's the point of doing query 1 and looping over it if query 2 already has the table name in it? :-) Is it because you want to limit the result set to tables only and exclude view? In that case you're better off joining the 2 tables on table_Name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734784">19</a> by Jaana Gilbert
		posted on 8/26/2011 at 5:09 AM
		</div>
		<div class="comment_text"><p>@Tof,<br>These are 2 queries on 2 different pages, I just brought them both in to the post. I use the first query in a dropdown to do filtering on the fly and only showing certain data on the page. Old code that I haven't altered in years. Yes you can have just a single query with a join, this is just something I've had running for a long time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734785">20</a> by Raymond Camden
		posted on 8/26/2011 at 5:10 AM
		</div>
		<div class="comment_text"><p>@Psenn - don't forget you can do &lt;cfdump var="..." abort&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734787">21</a> by Andreas Schuldhaus
		posted on 8/26/2011 at 8:03 AM
		</div>
		<div class="comment_text"><p>Umm, no. While I find that it would be tempting and on a first glance it seems very convenient to querydump or dumpquery a recordset using cfdump only, talking in terms of separation of concerns I don't believe that ColdFusion should provide this feature. Cfdump would also have to accept additional attributes like "database", "dbtype", "username", "password" to fulfill this task.</p><p>As @John said, usually you have the query somewhere in your code already. So I think I can live very well with cfdump only dumping out vars that already exist in the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734793">22</a> by Michael Zock
		posted on 8/26/2011 at 8:41 AM
		</div>
		<div class="comment_text"><p>"I don't have CF Admin access, and even if I did, the password is encrypted. "</p><p>Don't forget about this little backdoor (saved me a lot of trouble the last time I had to migrate an inherited CF server)<br><a href="http://disq.us/url?url=http%3A%2F%2Fpaulalkema.com%2Fpost.cfm%2Fpull-a-list-of-all-coldfusion-datasources-along-with-username-and-passwords%3A5b175ScfPsPGLm9vw7t5nIbp6mI&amp;cuid=3321886" rel="nofollow noopener" title="http://paulalkema.com/post.cfm/pull-a-list-of-all-coldfusion-datasources-along-with-username-and-passwords">http://paulalkema.com/post....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734800">23</a> by Ian Turton
		posted on 8/26/2011 at 3:31 PM
		</div>
		<div class="comment_text"><p>Taking the &lt;cfdump ... abort&gt; idea (i.e. quite often you'll want to abort straight after a dump), what about reversing the 'dump point' (or for me putting it in a natural place), by having the ability to do &lt;cfquery name="qBlah" dump&gt;. Or, for more control, &lt;cfquery name="qBlah" dump abort brewUp&gt;.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734804">24</a> by Raymond Camden
		posted on 8/26/2011 at 3:33 PM
		</div>
		<div class="comment_text"><p>Personally I'd rather clutter up cfdump with a bunch of attributes since it's a multipurpose debug tool. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734809">25</a> by John Walker
		posted on 8/26/2011 at 4:12 PM
		</div>
		<div class="comment_text"><p>Ray, doesn't the IDE you use allow you to view datasources?  I am still an old Homesite+ hold out. The datasource tab allows you to look through the tables based on the CF server's datasources.  I hope CF Builder has that too?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734805">26</a> by Raymond Camden
		posted on 8/26/2011 at 4:54 PM
		</div>
		<div class="comment_text"><p>@John: Yep, it does. If you have CF Admin or RDS access.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734807">27</a> by Sharon
		posted on 8/28/2011 at 3:40 AM
		</div>
		<div class="comment_text"><p>I've been monkeying around with the idea of a simple dumpQuery() function (in my base.cfc) with the ability to dump any query based on a URL variable.  It would only work if session.isDebugMode=true and you know the query name (and, of course, you've gotten around to adding the function to the query code).  I'm thinking it would be super-duper helpful when trying to debug on production boxes (where you can't replicate the error on dev, of course) to display debug information without having to edit code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734806">28</a> by Phillip Senn
		posted on 8/29/2011 at 2:52 AM
		</div>
		<div class="comment_text"><p>What we need in the next version of ColdFusion is a way to make instantaneous communications easier (ala node.js).  ColdFusion was the early adopter of database html.  Now we need the makers of ColdFusion make event broadcasting easy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734808">29</a> by Raymond Camden
		posted on 8/29/2011 at 5:30 AM
		</div>
		<div class="comment_text"><p>What exactly do you mean by instantaneous communications? Sounds like something already covered by LCDS or Blaze, which plays well with ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734811">30</a> by Phillip Senn
		posted on 8/29/2011 at 10:58 PM
		</div>
		<div class="comment_text"><p>This video<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F2171-Realtime-Messaging-And-Synchronization-With-NowJS-And-Node-js.htm%3AG8UlbLZQNpaJF3Mixe3UYReMCRs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/2171-Realtime-Messaging-And-Synchronization-With-NowJS-And-Node-js.htm">http://www.bennadel.com/blo...</a><br>has been haunting me.  I realize that this is the future of the web.  It's the next Ajax!<br>So that's what I mean by instantaneous communications.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734810">31</a> by Raymond Camden
		posted on 8/30/2011 at 1:48 AM
		</div>
		<div class="comment_text"><p>This is no slight to NodeJS - but you can do this with Blaze/LCDS and CF as well.</p></div>
	</div>
</div>
		