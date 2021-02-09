
<div class="comment" id="c_1713651084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651084">1</a> by David Harris
		posted on 3/24/2006 at 12:56 AM
		</div>
		<div class="comment_text"><p>Another question on the same lines...</p><p>If you have a very very busy site, and the DB is taking lots of hits, could you see any advantage to having 2 (or more) DSN pointing to the same DB and switching between them at different calls to spread the load on the JDBC?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651062">2</a> by Michael Schmidt
		posted on 3/24/2006 at 1:05 AM
		</div>
		<div class="comment_text"><p>One important thing to note in this situation:  You cannot do a cross DSN join of two tables except with Query of Query.  So in this situation your data is rather seperated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651085">3</a> by todd
		posted on 3/24/2006 at 1:26 AM
		</div>
		<div class="comment_text"><p>michael - not true with SQL Server - if the db's are linked you can join acrossed tables in different dsn's.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651074">4</a> by Michael Schmidt
		posted on 3/24/2006 at 1:36 AM
		</div>
		<div class="comment_text"><p>Todd,<br>  Yes that is the case, but the users question was specific to an access database.  Inside of a database system you can query agains tdifferent databases like in MSSQL with linked tables you can query even against an oracle database and join across these tables.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651070">5</a> by Tony Petruzzi
		posted on 3/24/2006 at 1:48 AM
		</div>
		<div class="comment_text"><p>@David</p><p>To answer your question, NO. You wouldn't see any performance improvement because your still hitting the same CF server and hitting the same SQL server.</p><p>The best thing to do would be cache as much of the database as possible into memory so you don't have to hit your database as much. Another good technique is to have seperate DB and CF servers. This way if you need to load balance the CF server or cluster the DB servers, you can.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651067">6</a> by Craig M. Rosenblum
		posted on 3/24/2006 at 2:50 AM
		</div>
		<div class="comment_text"><p>One way is to move as many of your joined queries into views, make the database do more of the db/logic/crunching work, and coldfusion less.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651066">7</a> by Tom Mollerus
		posted on 3/24/2006 at 4:05 AM
		</div>
		<div class="comment_text"><p>I would also point out to the user that it's a good habit to use variables instead of static DSN names.  That way you could easily change the variable's value in one place and have it immediately change for the whole application. This makes the app more portable as well.</p><p>For instance, in Application.cfm:<br>&lt;REQUEST.dsn = 'AccessDB1'&gt;</p><p>In every other file:<br>&lt;CFQUERY DATASOURCE="#REQUEST.dsn#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651075">8</a> by Stephen Cassady
		posted on 3/24/2006 at 7:19 AM
		</div>
		<div class="comment_text"><p>@david</p><p>Yes, there is an advantage (but it's been a long time). I know that I had a very very very busy Access database that was giving me all sorts of problems (locking issues, single threads, etc). When I access the database with two DNS settings (one for one sort of qeuery, the other for the ones that seemed to lock the system), mauc of the performance issues went away. I gues I could have run a script as well and 50/50 the system to pick one or the other db for any query.</p><p>There's some (this was back in 4 by the way) going on at serveral levels : CF, the server, the Access database, but this did help at that time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651079">9</a> by Ryan
		posted on 3/24/2006 at 12:27 PM
		</div>
		<div class="comment_text"><p>To the original poster:</p><p>One reason you may want to do this is in a corporate environment.  I'm working on a set of apps where we receive very basic employee information from a view in an Oracle database.  The Oracle view was created a few years ago for another application and we access 1 table only of 50k+ employees (email, their ID, name, etc.)  We use this for basic authentication and to give us our HR based employee hierarchy (subordinates, managers, directors, etc.).</p><p>From there, we use MS SQL 2000 for our actual application.  We have 3 databases, dev &amp; test (on the same box) and one for production.  When working on the app, most pages use 90% SQL with the occasional call in a query to the HR database.</p><p>Note, per other commenters, we too use #Request.DSN# or #Request.Datasource# in our query statements.  In our application.cfm (still on CF 6) we have some logic that checks the cgi.server variables to determine which server you are on and then dynamically sets the datasource based on which server (CF) you are on.  This is great since it allows us to develop CF on my desktop using the dev db.  I can wipe it out and jack it up at will (and then copy the clean data from production when needed).  When my boss is reasonably happy with the code or he needs a clean copy for demoing to someone internally he uses the test server which maps to the test db, then to staging and the real db, then the real CF and real db.  All with no manual rewriting of query statements, the application.cfm handles the name of the datasources dynamically.</p></div>
	</div>
</div>
		