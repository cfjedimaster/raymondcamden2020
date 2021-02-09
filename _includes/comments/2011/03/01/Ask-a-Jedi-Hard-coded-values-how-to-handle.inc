
<div class="comment" id="c_1713730082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730082">1</a> by Kevin Schmidt
		posted on 3/1/2011 at 8:47 PM
		</div>
		<div class="comment_text"><p>Also, you could consider setting this as a default value in the database is this is an insert and remove it from the ColdFusion code entirely!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730089">2</a> by Raymond Camden
		posted on 3/1/2011 at 8:50 PM
		</div>
		<div class="comment_text"><p>You know - that brings up an interesting point. It's a bit OT, but I'm allowed. ;)</p><p>Do folks ever struggle with how much logic to put in the DB? I don't mean SQL - you can see SQL, but stored procs? Or do people just assume that any logic in the DB is something that web app shouldn't be worried about anyway?</p><p>I know I truncated his code above - but maybe it was useful to see the hard coded value? Like if the column was 'maxHits', (ok, dumb idea), it may be useful to know that this hard coded value is being applied to the logic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730092">3</a> by Tom Mollerus
		posted on 3/1/2011 at 9:11 PM
		</div>
		<div class="comment_text"><p>I don't "struggle" with the question of how much logic to put in the db, though it's still a good question. I just have clear feelings about it.</p><p>My opinion is: unless you have a DBA working on your app, don't worry about putting any logic in the database (except for default values). Leave the logic in the application code where your expertise is. That way, the app is de-coupled from the database and it's a bit more portable. For me, the trouble of coupling your app with the database and working with triggers/stored procedures just isn't worth the incremental speed increase it provides.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730097">4</a> by Joe Brislin
		posted on 3/1/2011 at 9:31 PM
		</div>
		<div class="comment_text"><p>Personally, I don't think the DB is used enough. I often see developers writing loops or something to build other queries where everything could have been condensed down into a single stored proc. It's always good to share performance loads with the DB. You see these high powered DB Servers sitting there just storing data and it never gets used for any of the data processing. It just seems like a waste to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730093">5</a> by Carl Von Stetten
		posted on 3/1/2011 at 9:32 PM
		</div>
		<div class="comment_text"><p>I have heard varying opinions on using &lt;cfqueryparam&gt; on constant values.  By making it a parameter, doesn't that affect how SQL Server (and possibly other DBMS's) generates execution plans?  What are the impacts to DB performance if you were to remove the &lt;cfqueryparam&gt; on that one field?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730094">6</a> by Josh Curtiss
		posted on 3/1/2011 at 9:43 PM
		</div>
		<div class="comment_text"><p>I've gone full circle on the "logic in the database" question. At one point I migrated to having tons of logic in the database and it just made the app's overall logic more confusing to me.</p><p>I prefer to not put logic in storedprocs unless there is really something meaty going on, which is rare in my apps. Same with select queries. I prefer to keep my queries in the application layer UNLESS it's a really complicated query (many joins or conditions) or a heavily reused query, in which case I will rely on views to benefit from the database's ability to process those faster and correspondingly simplify the query that needs to go in the application. But even then, if it's a big query that's used in just one spot, I'll prefer to keep it in the application code.</p><p>Sorry for the rambling there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730095">7</a> by Ed Tabara
		posted on 3/1/2011 at 10:09 PM
		</div>
		<div class="comment_text"><p>I personally prefer putting on DB's shoulders anything that is related to DB (each tool should be used what it has been designed for). It doesn't mean i would move each and every query to stored procedures, but when they are quite complicated (and sometimes just big enough), stored procedures make perfect sense. This will make the application run much better and faster.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730099">8</a> by David Hammond
		posted on 3/1/2011 at 11:18 PM
		</div>
		<div class="comment_text"><p>As others have mentioned, I will tend to go to stored procedures if I have a particularly complex query.  This is usually not a performance consideration, since parameterized queries in ColdFusion are pretty efficient.  It's mainly because I have some very nice tools for working with SQL Server (the database I happen to use mostly) that beat the tools in CF Builder.  I have one project that I work on that uses stored procedures heavily and so I'm comfortable working with them.  Most of my queries just go in cfquery tags though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730096">9</a> by Tof
		posted on 3/2/2011 at 5:05 AM
		</div>
		<div class="comment_text"><p>Carl,</p><p>I was about to comment about the cfqueryparam as well, but you beat me to it...</p><p>There is absolutely no benefit to using a cfqueryparam on a constant. There is no risk of SQL injection since the value isn't inputed by a user, and there will be no gain in performance related to the execution plan compilation.</p><p>Let me explain the second part.</p><p>Basically, SQL server has 3 types of caches. data, proc, and another very small one you don't need to worry about. The data cache stores often accessed data so it can be pooled out of memory instead of doing expensive io. The proc cache stores execution plan so it doesn't have to re-calculate what's the best algorithm to run a given query every single time. The bit that makes all the difference is how SQL server knows that a query has run before. it's really simple really, it goes like this: hash(SQLstatement). So...</p><p>1. SELECT t.a from myTable t WHERE t.b = '#somecfvariable#:' for every different variable input, the query text on the DB server side is effectively different, and SQL server see it as a different query, which means it will recalculate an execution plan. That's a waste of cpu and a waste of memory (since several plans for the same query will be cached.)<br>2. SELECT t.a from myTable t WHERE t.b = &lt;cfqueryparam ... value="#somecfvariable#" /&gt;: will translate to "WHERE t.b = ?" on the DB server side, and will result in a similar hash every time, no matter the input.<br>3. SELECT t.a from myTable t WHERE t.b = 1: well, same as above. 1 doesn't change, neither will the hash, thus the server won't ever have to recompile the plan until it goes out of cache.</p><p>Cheers,</p><p>Tof</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730079">10</a> by Carl Von Stetten
		posted on 3/2/2011 at 5:39 AM
		</div>
		<div class="comment_text"><p>@Tof,</p><p>Thanks for the explanation.  Thanks for confirming my suspicions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730080">11</a> by Brian
		posted on 3/2/2011 at 9:21 PM
		</div>
		<div class="comment_text"><p>@Tof, so following a portion of Ray's logic, and your explanation, if we're GOING to variablize a constant, it's better, from a performance standpoint to use the cfqueryparam rather than a simple substitution (column='#somevariable#')?</p><p>Recalling back to my CS days, the implication of using a constant value would mean that you have an imperative to drop in a comment so the next person down the line understands why.  (Does ANYONE comment anymore besides the "I was here and created this" header?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730081">12</a> by Tof
		posted on 3/3/2011 at 5:03 AM
		</div>
		<div class="comment_text"><p>@Brian</p><p>No. if the constant doesn't ever change (which is the definition of a constant), there's no point using a queryparam, no matter whether it's a variable or not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730083">13</a> by Raymond Camden
		posted on 3/3/2011 at 11:20 AM
		</div>
		<div class="comment_text"><p>@Brian: Yes, people do comment. Hopefully. ;)</p></div>
	</div>
</div>
		