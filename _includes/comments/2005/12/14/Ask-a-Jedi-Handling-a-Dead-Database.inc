
<div class="comment" id="c_1713623369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623369">1</a> by Douglas Knudsen
		posted on 12/14/2005 at 8:22 PM
		</div>
		<div class="comment_text"><p>I have never had any luck with doing this.  Under load this fails miserably as each request ties up a thread.  Sucks.  I've thought about making use of say TNSping, we use Oracle, to see if the DB is up or not, but have not had luck or time yet for that.</p><p>One other thing I have seen is if connection pooling is on for a DSN and your DB is failed over to a backup one or your DB is restarted, CF chokes.  Seems to keep some of the connections pooled longer than speciifed in the settings.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623370">2</a> by Raymond Camden
		posted on 12/14/2005 at 8:29 PM
		</div>
		<div class="comment_text"><p>How did it hang under load? If done in onAppStart, it should be single threaded. If done in a simple cfif, it could be done with locks. Also, the cferror approach should be fine as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623371">3</a> by Douglas Knudsen
		posted on 12/14/2005 at 9:06 PM
		</div>
		<div class="comment_text"><p>ah, we are not using CF7 yet.  onAppStart could be the ticket for sure.  Another reason to upgrade!</p><p>Any approach that actually connects to the DB to determine if it is alive is an issue I have found.  Its a third party call afterall.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623368">4</a> by Joe Rinehart
		posted on 12/14/2005 at 9:24 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>It can be done w/o reliance on any existing tables etc. by trying to get a JDBC connection via ServiceFactory or the AdminAPI:</p><p>&lt;!--- Using ServiceFactory ---&gt;<br>&lt;cfset DatasourceName = "taskBlaster" /&gt;<br>&lt;cftry&gt;<br>	&lt;cfset conn = CreateObject("java","coldfusion.server.ServiceFactory").getDataSourceService().getDatasource(DatasourceName).getConnection() /&gt;<br>	ServiceFactory: You've got a connection.<br>	&lt;cfcatch&gt;<br>		ServiceFactory: No Connection.<br>	&lt;/cfcatch&gt;<br>&lt;/cftry&gt;</p><p>&lt;!--- Using Admin API ---&gt;<br>&lt;cfset DatasourceName = "taskBlaster" /&gt;<br>&lt;cfset ColdFusionAdminPassword = "password" /&gt;<br>&lt;cfset DatasourceDbUserPassword = "password" /&gt;</p><p>&lt;cfset cfadmin = createObject("component","cfide.adminapi.administrator") /&gt;<br>&lt;cfset cfadmin.login(ColdFusionAdminPassword) /&gt;<br>&lt;cfset datasource = createObject("component","cfide.adminapi.datasource").getDatasources(DatasourceName) /&gt;</p><p>&lt;cfset driver = CreateObject("java", "java.lang.Class") /&gt;<br>&lt;cfset driver.forName(datasource.class) /&gt;<br>&lt;cfset driverManager = CreateObject("java", "java.sql.DriverManager") /&gt;</p><p>&lt;cftry&gt;<br>	&lt;cfset conn = driverManager.getConnection(datasource.url, datasource.username, DatasourceDbUserPassword) /&gt;<br>	AdminAPI: You've got a connection.<br>	&lt;cfcatch&gt;<br>		AdminAPI: No Connection.<br>	&lt;/cfcatch&gt;<br>&lt;/cftry&gt;</p><p>-Joe</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623373">5</a> by Justice
		posted on 12/14/2005 at 9:25 PM
		</div>
		<div class="comment_text"><p>If you are using MS SQL Server, do a query like this:</p><p>select TABLE_CATALOG from information_schema.tables where table_name = '(your table name)' AND TABLE_TYPE = 'BASE TABLE'</p><p>This  will very quickly tell you if that table exists or not.  If recordcount eq 0, then no table exists!</p><p>Have fun,</p><p>Justice</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623372">6</a> by Seth Petry-Johnson
		posted on 12/14/2005 at 9:37 PM
		</div>
		<div class="comment_text"><p>Here's another approach as well:  define an Application variable called "databaseVerified" or something.  Have a scheduled task run every 5 or 10 minutes that runs a test query on the database and updates the value of this variable. Then, on each page request simply check this value.  If its false then show your error page.</p><p>The nice thing about this approach is that it is "mostly real time" but puts a much lower load on the database server than testing the connection on each request.  The drawback is that if a user hits the site while the database is down and BEFORE the app var gets swapped then they will get an error message.  This type of DB error should be rare in a production environment so the tradeoff might be worth it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623379">7</a> by Douglas Knudsen
		posted on 12/14/2005 at 9:37 PM
		</div>
		<div class="comment_text"><p>Joe,  nice use of the SF.  interesting.  Has this been tested against Oracle at all.  We have a CF server that runs about 20 apps, so its difficult to say have one point to test if the DB server is up, rather we try to do this in a small subset of the 20 apps that are 'mission critical'.  Typically I usually see that a test like this takes forever to return back to CF if there is a DB issue.  Thus threads tend to pile up (we are on CF6, can't use onAppStart).  Add to this, what happens if its a network issue?  If the DB server is accessible, but the instance is down?  Everything is smoking but the DB server is overloaded?</p><p>Hmm...use of onAppStart for this test.  What if the DB becomes unavailable after onAppStart kicks off?</p><p>I basically gave up on this whole thing awhile back.</p><p>DK</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623374">8</a> by Justice
		posted on 12/14/2005 at 9:41 PM
		</div>
		<div class="comment_text"><p>Well, its not necessary to do the scheduled task, just let CF do it with a cached query.  Like this:</p><p>&lt;cftry&gt;<br>	&lt;cfquery name="CheckOrdbill" datasource="Portal" cachedwithin="#CreateTimeSpan(0,0,30,0)#"&gt;<br>	select * from information_schema.tables where table_name = 'ORDBILL'<br>	&lt;/cfquery&gt;</p><p>   &lt;cfcatch type="database"&gt;<br>   There was an error, help!<br>   &lt;cfabort&gt;<br>   &lt;/cfcatch&gt;<br>&lt;/cftry&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623380">9</a> by Raymond Camden
		posted on 12/14/2005 at 9:43 PM
		</div>
		<div class="comment_text"><p>Douglass, as for why to only check on startup - you don't have to. You could simply use cferror/onerror. The more I think about it, the more I'd say that is probably best.</p><p>You should use cferror/onerror _anyway_.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623377">10</a> by Joe Rinehart
		posted on 12/14/2005 at 9:51 PM
		</div>
		<div class="comment_text"><p>Hey Douglas,</p><p>I've used it against Oracle, MySQL, and MSSQL - the database platform doesn't matter too much, because it's just JDBC.</p><p>-Joe</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623381">11</a> by Gus
		posted on 12/14/2005 at 10:18 PM
		</div>
		<div class="comment_text"><p>In my view the best way to handle this is with a try/catch around every query.  This is basic error handling.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623376">12</a> by Seth Petry-Johnson
		posted on 12/14/2005 at 10:19 PM
		</div>
		<div class="comment_text"><p>&gt; Well, its not necessary to do the scheduled task, just let <br>&gt; CF do it with a cached query</p><p>I guess that would work as well, I didn't even think about it.</p><p>Still, I personally like the scheduled task approach because it decouples the application logic from the "is the system working OK?" logic.  I can add and remove different kinds of tests, error conditions and notification logic to the scheduled task without ever touching the main app's code.</p><p>I guess the right approach depends heavily on the specific situation at hand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623383">13</a> by Raymond Camden
		posted on 12/14/2005 at 10:26 PM
		</div>
		<div class="comment_text"><p>Gus, I disagree with that. I'd just use application error handling instead. _Unless_ you have very specific actions to take based on the sql. IE, do X if query A fails, do Y if query B fails, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623384">14</a> by Steven Erat
		posted on 12/14/2005 at 10:39 PM
		</div>
		<div class="comment_text"><p>As a minor tangent, if you use CFMX on JRun (multiserver,j2ee configs) you can create and use J2EE datasources from the JRun console.  Once J2EE datasources are added, you can manually edit the server's jrun-resources.xml file for fine control over the datasource properties, much more control than normal CFMX JDBC datasources offer.</p><p>Specifically, you can set a few helpful parameters to verify that you have a connection before the connection is used in your application.  Add the validation-query parameter to the datasource properties in jrun-resources.xml and that simple query will get run before using the connection [validation-query]{your simple sql statement here}[/validation-query]</p><p>Documentation on this and other datasource properties are found here:<br><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.macromedia.com%2Fjrun%2F4%2Fdescriptordocs%2Fjrun-resources%2Fjrun-resources.htm%23ELEMENT_validation-query%3ARWzdJ95zXcqDINgL-RFKUY-LjsE&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.macromedia.com/jrun/4/descriptordocs/jrun-resources/jrun-resources.htm#ELEMENT_validation-query">http://livedocs.macromedia....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623378">15</a> by Gus
		posted on 12/14/2005 at 10:48 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Granularity is precisely why in my view try/catch is the better way to go.  It gives me the flexibility to handle specific situations as desired.</p><p>Of course an argument can be made to use application-wide handling and add try/catch as needed but I like the consistancy of using try/catch everywhere.</p><p>I also find wrapping code blocks in try/catch to be a tremendous help in debugging apps as I am building them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623382">16</a> by Phillip Senn
		posted on 12/15/2005 at 12:09 AM
		</div>
		<div class="comment_text"><p>Robert Blackburn blogs about DB unit testing.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.rbdev.net%2Fdevblog%2Findex.php%3Fentry%3Dentry051204-154123%3AfvnaNOwX5n6zfIsC_N4e5Gewges&amp;cuid=3321886" rel="nofollow noopener" title="http://www.rbdev.net/devblog/index.php?entry=entry051204-154123">http://www.rbdev.net/devblo...</a><br>He's talking about AFTER you get past the "Is the database up?" part of testing.<br>Can someone in plain english talk about xUnit testing?<br>Here's my point of view:<br>You have a table called customer, so there's a test that says <br>SELECT * FROM Customer WHERE CustID=1 which should always return your company name (for instance).<br>At the top of every form is a green submit button.  When you press it, all the tests are run and if any fail, the button turns red.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623389">17</a> by denis
		posted on 12/15/2005 at 1:59 AM
		</div>
		<div class="comment_text"><p>Create a procedure like this<br>create procedure dbo.IsDataBaseUp<br>as<br>set nocount on<br>SELECT @@SPID as Spid<br>set nocount off</p><p>If the Spid is not greater than 50 ( a value below 51 is reserved for SQL server and can not be returned to CF anyway) your DB is down</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623388">18</a> by Douglas Knudsen
		posted on 12/15/2005 at 4:11 AM
		</div>
		<div class="comment_text"><p>Gus, the use of cftry/cacth around all the cfqueries seems logical, but for dead DBs this is useless, IME.  Under any load all requests to any of these queries will tie up a thread forever eventually bringing your server to its knees.</p><p>Steven, I have been wondering about using JRun DSNs.  I'll have to try this out.  How about a future CF version that just uses these in the first place, eh?</p><p>DK</p></div>
	</div>
</div>
		