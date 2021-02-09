
<div class="comment" id="c_1713615516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615516">1</a> by Bryan F. Hogan
		posted on 3/24/2004 at 6:43 PM
		</div>
		<div class="comment_text"><p>Don't know if this is related or not. When using cfqueryparam on a query within a CFC that is cached in the application scope and you make a change to a column in the SQL table, even after you refresh the CFC cache an error will be thrown that the column you just added does not exist.</p><p>Only time it comes back to life is after a restart of the CF service.</p><p>Like yours, it seems to be random and I haven't been able to reproduce it at will.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615520">2</a> by dave ross
		posted on 3/24/2004 at 6:52 PM
		</div>
		<div class="comment_text"><p>RAY!</p><p>I have been dealing with these issues for some time, and for while I thought no one believed me. Yes, CF does cache the schema of the db when using cfqueryparam... and if you change the table definition (even if you add fields that aren't used by the query), cfqueryparam will choke.</p><p>I can almost always reproduce it if the query is inside a CFC that's in a shared scope. I think the reason it doesn't seem reproducible is that CF caches a certain number of queries, and as ones that don't use cfqueryparam come in, yours get pushed out out the cache (and are reloaded, and don't error).</p><p>I made a few posts about it on the MM forums... Ike Dealy also mentioned it on his blog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615517">3</a> by Eric Jones
		posted on 3/24/2004 at 7:13 PM
		</div>
		<div class="comment_text"><p>Hey ray, your link to mindseye isn't working is that site down?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615518">4</a> by Raymond Camden
		posted on 3/24/2004 at 7:21 PM
		</div>
		<div class="comment_text"><p>Yep, power outage at the office. Luckily I'm remote.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615522">5</a> by Doug Keen
		posted on 3/24/2004 at 8:34 PM
		</div>
		<div class="comment_text"><p>My guess is that queries with CFQUERYPARAM are treated like prepared statements, and a compiled version of that specific query is cached on the DB or in CF (rather than CF caching the DB schema).  When you change one of the tables involved in that prepared statement, the query version compiled against the old schema may still exist, but is now invalid and needs to be recompiled.  I assume that when the query is called again, either CF or the DB isn't smart enough to know the statement needs to be recompiled, and the cached version is used anyway, which may or may not work, and could cause some weird, unpredicatable effects.  When you added the semicolon, Ray, you in effect created a brand new query which would trigger a new compilation (fixing the problem).  Similarly, a CF service refresh would clear the cache.</p><p>Not sure how shared scopes would affect this.  Maybe the prepared statement is cached right in the persisted CFC instance, rather than the normal repository (where it can be knocked out of the queue like Dave said)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615521">6</a> by Daniel D
		posted on 3/25/2004 at 5:35 AM
		</div>
		<div class="comment_text"><p>If all the where statement items are build with queryparam then CF runs the query as a prepared statement.  Which for most DB server is a mini stored procedure.  Which means that the execution plan for the query is cached so that when you run it again with different paramaters it can reuse that execution plan.  Great for getting better performance but looks like it can be a pain with development.  I have not run into this myself but I suspect if you kill your DB connections that the cache will expire.  Not sure if there is a easy way to close all connections for a given datasource though one of the CF factories or not.  Might be worth looking into if you don't/can't restart CF to resolve the issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615536">7</a> by Doug
		posted on 3/29/2004 at 5:32 PM
		</div>
		<div class="comment_text"><p>We have had the same experiences.  I have found that if you use the CF Admin tool to disable a DSN, then re-enable it, things clear out.  Better then a service restart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615529">8</a> by Peter Windemuller
		posted on 4/9/2004 at 4:53 PM
		</div>
		<div class="comment_text"><p>Had the same experience today, because I changed a database type from tinyint to varchar;</p><p>Thanks for the entry!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615534">9</a> by Chris Tsongas
		posted on 4/12/2004 at 7:08 PM
		</div>
		<div class="comment_text"><p>This has nothing to do with CFCs because the problem persisted for sevaral days on a site of mine that doesn't use them.  Disabling and re-enabling the data source fixed it as described above.  My query also used</p><p>select *</p><p>and I'm curious if anyone has had this problem with queries that don't use that?  Has anyone submitted a bug report?</p><p>Helpful thread....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615542">10</a> by Dave Cordes
		posted on 6/1/2005 at 2:16 AM
		</div>
		<div class="comment_text"><p>Same thing here. It's a real pain in the butt because there is an extra step involved every time you make a database change. It shouldn't be this way!</p><p>Has anyone submitted a bug request? I think this should qualify as one.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615532">11</a> by Rob
		posted on 10/4/2005 at 10:53 PM
		</div>
		<div class="comment_text"><p>same over here. It's getting really annoying.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615537">12</a> by Damen
		posted on 10/7/2005 at 2:48 AM
		</div>
		<div class="comment_text"><p>Thanks for this, <br>reinforces my general rule with coldfusion caching craziness "When in doubt kick it in the guts (restart JRUN)"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615535">13</a> by Daryl Banttari
		posted on 12/7/2005 at 9:34 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I'll bet just adding (or removing) a space in the query would have the same effect as adding a semicolon: it becomes a "new" CallableStatement, and will therefore appropriately map to the updated schema.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615545">14</a> by Haris Kusumo
		posted on 9/16/2006 at 9:31 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I got similar problem with this queries</p><p>		&lt;CFQUERY NAME="getMemberInfo" DATASOURCE="#Request.dsn#" USERNAME="#Request.uid#" PASSWORD="#Request.pwd#"&gt;<br>			SELECT 	a.mem_id, a.firstname, a.lastname, b.status, c.role<br>			FROM	t_mems a, t_usrs b, t_roles c<br>			WHERE	a.mem_id = &lt;CFQUERYPARAM CFSQLTYPE="cf_sql_integer" VALUE="10"&gt;<br>			AND		a.mem_id = b.usr_id<br>			AND		a.mem_id = c.mem_id<br>		&lt;/CFQUERY&gt;</p><p>It seems that when I put value 10 on cfqueryparam I got the error message but any other number except 10 is working fine.</p><p>Is number 10 some kind of magic number or I am missing something.</p><p>Regards<br>- Haris -</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615544">15</a> by Snack
		posted on 9/28/2006 at 7:15 AM
		</div>
		<div class="comment_text"><p>I love you Ray!</p><p>Just spent 45 minutes trying to figure out why after updating a table in my DB with two new rows any data I  updated would succeed but then error upon request of the new data. Any record I had not updated would not error at all but all the data looked the same. Gack! Requesting updated data would generate the "[Macromedia][SQLServer JDBC Driver]Value can not be converted to requested type" error from this line of code, which worked perfectly for all data that hadn't been updated (and all data looked the same... sigh)<br>"WHERE game_id = &lt;cfqueryparam cfsqltype="CF_SQL_VARCHAR" value="#<a href="http://disq.us/url?url=http%3A%2F%2Furl.id%3A0bRnXeBrI7OIqL9bKyG2zQPmmP0&amp;cuid=3321886" rel="nofollow noopener" title="url.id">url.id</a>#"&gt;"</p><p>At a loss I googled the error, this page was the number one hit and one cold restart later I'm back to work! Speaking of cold, here's a cold one tipped in your general direction.  Cheers mate!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615541">16</a> by Raymond Camden
		posted on 9/28/2006 at 5:51 PM
		</div>
		<div class="comment_text"><p>No worries! Glad this post helped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615540">17</a> by Jason Weible
		posted on 12/15/2006 at 2:30 AM
		</div>
		<div class="comment_text"><p>Is this going to be fixed or anything?  It seems a bit ridiculous.</p><p>I'm glad I found this page though, I was going crazy trying to figure out what the deal was.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615539">18</a> by Michelle Kinsey Bruns
		posted on 1/10/2007 at 11:26 AM
		</div>
		<div class="comment_text"><p>Okay, this is the most ridiculous bug EVER. Thanks for calling it out.</p><p>You know, I'd wondered if caching was somehow involved and I thought I *had* modified the query in such a way that any cache should have been flushed. I had commented out everything between CFQUERY and /CFQUERY, and typed in its place a shorter, hardcoded version of the query to bypass CFQUERYPARAM. Of course the query worked so I undid my changes. By "recycling" the original CFQUERY tag, with an unchanged name attrib, I expected I'd eliminated the notion of caching as a culprit, per docs w/r/t CACHEDWITHIN and CACHEDAFTER. I'd be looking for the answer into my old age if I hadn't found your blog...</p><p>I guess my assumption having been wrong makes sense (for lack of a better term) in light of Daniel D's post, if the deal is indeed that the bug is related to having all where items built w/ CFQUERYPARAM. But talk about a needle in a haystack.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615546">19</a> by Kamil Saiyed
		posted on 9/18/2007 at 4:08 PM
		</div>
		<div class="comment_text"><p>I was completely stumped by this same exact error. It had it working perfectly on my development server, but the moment I ported the files on my production server, it began throwing this error: "[Macromedia][SQLServer JDBC Driver]Value can not be converted to requested type." My search led me to this page. I restared CF and it worked fine thereafter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615538">20</a> by Mike Haggerty
		posted on 12/18/2007 at 9:09 PM
		</div>
		<div class="comment_text"><p>I had the same issue today when changing a dbtype from int to varchar.  Thanks for the entry!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615531">21</a> by Eric
		posted on 3/13/2008 at 4:07 PM
		</div>
		<div class="comment_text"><p>The solution: due to caching of the odbc driver, you do NOT have to restart CF.</p><p>1. Go in the settings of the current datasource an UNCHECK 'Maintain Connections' --&gt; submit the change</p><p>2. Rerun the page with the changed view/table/sp and make sure it's running fine.</p><p>3. Go back into the odbc settings an re-enable the 'Maintain Connections' --&gt; submit the change</p><p>4. done!</p><p>Now everything should be working fine without restarting CF where a lot more i cached, like templates etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615557">22</a> by Raymond Camden
		posted on 3/13/2008 at 5:12 PM
		</div>
		<div class="comment_text"><p>Nice Eric!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615556">23</a> by Alexander Sante
		posted on 1/15/2009 at 7:24 PM
		</div>
		<div class="comment_text"><p>Thanks guys, this solved my problem as well. Great Post!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615560">24</a> by Lee
		posted on 5/7/2009 at 4:57 PM
		</div>
		<div class="comment_text"><p>Eric,</p><p>I have beat my head against a wall with this issue several times.  Finding your post was like finding a pot of gold.  Prefect fix - Thanks big time!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615562">25</a> by Aaron
		posted on 10/9/2009 at 1:11 AM
		</div>
		<div class="comment_text"><p>This just got me today!  Grrr!  Was restarting the app and everything trying to get this to clear.  What's even more frustrating is that if you change the SQL, it now sees the new fields, but if you put the QUERYPARAM back in there, it goes back to NOT seeing the new fields and using the old cached query!  Even using cfobjectcache failed here.  Very very annoying, especially since the DAO component is instantiated into the Application scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615558">26</a> by Brandon
		posted on 1/12/2010 at 10:44 AM
		</div>
		<div class="comment_text"><p>CFQUERYPARAMS use prepared statements from java <a href="http://disq.us/url?url=http%3A%2F%2Fjava.sun.com%2Fdocs%2Fbooks%2Ftutorial%2Fjdbc%2Fbasics%2Fprepared.html%3A2hkVPdgjF44oWegUYjjw1FNNcjE&amp;cuid=3321886" rel="nofollow noopener" title="http://java.sun.com/docs/books/tutorial/jdbc/basics/prepared.html">http://java.sun.com/docs/bo...</a> so the db compiles the statement like a stored procedure then the query executes by just passing parameters to it.  If the schema of the db changes the prepared statement does not know it since nothing signals the change. This is not really a bug but a FOL if it was fixed then you wouldn't get the performance improvements of using prepared statements. Clearing the connection pool cleans up the the prepared statements so that they are not reused thats why unchecking that option in the CF admin makes it work again.</p><p>All other queries in CF without CFQUERYPARAMS are dynamically executed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615555">27</a> by Michael Peters
		posted on 8/12/2010 at 3:42 PM
		</div>
		<div class="comment_text"><p>thanks for the workaround !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615561">28</a> by Tony Weeg
		posted on 12/3/2010 at 12:58 AM
		</div>
		<div class="comment_text"><p>ray :) again you help... i kinda knew this, but i wanted to make sure... instead of hitting you up on gtalk, i tried here first!</p><p>thanks bro</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615563">29</a> by Raymond Camden
		posted on 12/3/2010 at 1:01 AM
		</div>
		<div class="comment_text"><p>Wow, March 2004. Was there an internet back then?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615559">30</a> by Daryl Banttari
		posted on 12/3/2010 at 3:34 AM
		</div>
		<div class="comment_text"><p>Don't you remember all those tubes?</p></div>
	</div>
</div>
		