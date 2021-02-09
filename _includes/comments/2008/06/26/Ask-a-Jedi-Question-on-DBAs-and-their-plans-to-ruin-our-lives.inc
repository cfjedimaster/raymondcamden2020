
<div class="comment" id="c_1713682223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682223">1</a> by Chad
		posted on 6/26/2008 at 6:21 PM
		</div>
		<div class="comment_text"><p>This is slightly off topic, but i saw a post on <a href="http://disq.us/url?url=http%3A%2F%2FHackaday.com%3APvJmE-48HmbWmN2H31FuNwLf0qE&amp;cuid=3321886" rel="nofollow noopener" title="Hackaday.com">Hackaday.com</a> about this HP tool to identify possible SQL injection vulnerabilities.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fdownload.spidynamics.com%2FProducts%2Fscrawlr%2F%3AVWDTvKhoADdy7bf3isd_VDhnmaE&amp;cuid=3321886" rel="nofollow noopener" title="https://download.spidynamics.com/Products/scrawlr/">https://download.spidynamic...</a></p><p>I tried it with this code and it said i did have a vulnerability.  I added a cfqueryparam and the vulnerability was gone.</p><p>&lt;code&gt;<br>&lt;cfparam default="1" name="URL.FORMID"&gt;</p><p>&lt;cfquery datasource="UPS_Shipping" name="test"&gt;<br>SELECT *<br>FROM package<br>WHERE id = #URL.FORMID#<br>&lt;/cfquery&gt;</p><p>&lt;a href="?formid=2"&gt;test&lt;/a&gt;<br>&lt;cfdump var="#test#"&gt;<br>&lt;/code&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682251">2</a> by Phil Duba
		posted on 6/26/2008 at 6:24 PM
		</div>
		<div class="comment_text"><p>I don't believe C to be industry standard, but one thing I've been told by our DBAs where I work now and in the past is that for each dsn, there would exist two accounts, an owning (all the query plus modification priveleges) and an application account that was limited to the CRUD type of queries. Obviously, the data may be compromised through SQL injection on the application account if other methods, like cfqueryparam and stored procedures weren't used, but the integrity of the schema wouldn't be, and, at least in my experience, that was more important than data that could be restored from back-ups.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682225">3</a> by Raymond Camden
		posted on 6/26/2008 at 6:26 PM
		</div>
		<div class="comment_text"><p>@Chad - it would be cool if you could mix that tool with the var scoper.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682246">4</a> by Brian Swartzfager
		posted on 6/26/2008 at 6:27 PM
		</div>
		<div class="comment_text"><p>Fortunately, my Oracle DBAs aren't out to get me:  they simply leave me alone, and I do the same to them.  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682248">5</a> by Sid Wing
		posted on 6/26/2008 at 6:29 PM
		</div>
		<div class="comment_text"><p>{ROFLMAO at the ODBA comment} OK, let me preface what I am about to say with this - I am a programmer first and a DBA second.  My first love has always been programming - but when I started to get involved in REAL programming - I realized the need for a good understanding of my DB backends.  SO - now I have been involved with MySQL, Oracle, and MSSQL (and several other less known DB's) - I am an MSSQL 2K5 MCITS and have learned WAY more about most DBMS's than I ever wanted to know (Started with DBase III+).</p><p>Ray is right - separating the datasources as read and write brings no extra level of safety and only complicates your job.  I have been in the industry for a rather large number of years and have never seen or heard of this in any kind of "standards and practices".</p><p>We run MANY COTS packages as well as a large number of in-house applications for our Defense contract customers - and even THEIR DBA's do not understand how this could possibly enhance data security (I asked around to make sure I wasn't just being silly).</p><p>Suffice it to say that while I think your DBA probably means well - his efforts are misdirected and misguided.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682247">6</a> by Milner
		posted on 6/26/2008 at 6:29 PM
		</div>
		<div class="comment_text"><p>As a CF developer with 8+ years experience under my belt, and a quasi-DBA (fyi Ray, an ORACLE DBA who's out to get you), I have to say that this is a little ridiculous.</p><p>I'm all for securing systems, and making sure table grants are made only for what the app user needs is a must (i.e., don't grant delete to public or anything silly).  But the job of a DBA isn't to make the lives of programmers miserable.  Nor is it the job of the programmer to make DBAs miserable.  One cannot really exist without the other, lest you read and write your data to flat files or some such thing (then you might make yoiur sysadmin cross).</p><p>In this situation, what I would recommend is that the programming team do an internal code review, find any places where SQL injection isn't protected by CF, resolve those issues, then present to the DBA and show him that every conceivable means available to CF (cfqueryparam, DSN rights in CF Admin, etc.) are being used to protect the application and the database.  If the DBA still takes issue, discuss it.  It could be that the DBA doesn't know what the capabilities are in CF, so a little education could go a long way.</p><p>Another solution could be to have the apps talk to a staging database, where all transactions are made in a separate database, or schema or whatever.  Then the DBA can write processes that will ensure the validity of the data before letting it into the production system.  If there's a staging area for these transactions, and it gets attacked, it may make life less painful if compromised (i.e., you're not exposing your full production system, just a stripped down staging area).</p><p>And, as far as write only DSNs go, that won't stop bad code or SQL attacks.  That'll just make sure the apps use a different path to get the badness in to the database.  So it's not a solution, it's a maintenance nightmare, for the CF admin, the programmer AND the DBA.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682249">7</a> by tony petruzzi
		posted on 6/26/2008 at 6:30 PM
		</div>
		<div class="comment_text"><p>i'll chime in a give me two cents. I'm a dba. I maintain roughly around 30 different databases and about 5 different servers.</p><p>bottom line is that as long as the datasources are pointing to the same database, having one datasource for reads and another for writes doesn't nothing to prevent data corruption since they are both altering the same database and as such the same data.</p><p>In my PROFESSIONAL opinion, the only thing that a design like the one proposed will do:</p><p>1) add complex to development since (you are correct) most application and framework are designed around using a single datasource (Ruby in Rails).</p><p>2) offer no advantage of security (only give a false impression of) since the same database is being targeted by both datasources.</p><p>3) add addition, unnecessary costs to the bottom line, since (as you stated) you will need to rewrite all existing application to meet the new specification and existing application will take long to write to meet the new specification.</p><p>one more thing. just make it a company policy to use cfqueryparam in all calls to the database and remember to strip all html tags from user inputted data. just doing those two thing will give 1000 fold more security over instituting a policy like this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682257">8</a> by Sid Wing
		posted on 6/26/2008 at 6:31 PM
		</div>
		<div class="comment_text"><p>@Phil - your DBA has it right as far as standards and practices go.</p><p>Another REALLY bad scenario I have seen of late are programmers/systems admins that create CF Datasources using an "sa" account.  VERY VERY BAD/DANGEROUS&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682256">9</a> by Brian Panulla
		posted on 6/26/2008 at 6:34 PM
		</div>
		<div class="comment_text"><p>There are plenty of products out there that will scan a production application or system for vulnerabilities such as SQL Injection and Cross-Site Scripting attacks. One I've had both the pleasure and pain of working with is WatchFire AppScan. It had a fair number of false positives that i had to refute, but it did find at least one legit vulnerability in an open source project that we were able to report back to the developers and get them to fix.</p><p>As long as the results of such tools are considered critically and not blindly accepted, some sort of scanning could be incorporated into your deployment process to ensure that developers behave, ahem, "consistently."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682258">10</a> by Brock
		posted on 6/26/2008 at 7:11 PM
		</div>
		<div class="comment_text"><p>Let's face it: I don't use Cold Fusion because I want to be told by some DBA how to do things.  Cold Fusion gives me the ability to write a lot of code in a short amount of time, and (surprise surprise) it works very well.</p><p>Sometimes I think that DBA's don't "get cold fusion," and they want to make life hard for us.  If I'm using cfqueryparam, that ought to be good enough--anything beyond that is just noise!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682262">11</a> by Jason Dean
		posted on 6/26/2008 at 7:22 PM
		</div>
		<div class="comment_text"><p>I have to agree with the majority here. I posted once that I thought this would be a good idea. <a href="http://disq.us/url?url=http%3A%2F%2Fpreview.tinyurl.com%2F553lac%3AefKRXFhuaW63H8aiHNmhRePGVCY&amp;cuid=3321886" rel="nofollow noopener" title="http://preview.tinyurl.com/553lac">http://preview.tinyurl.com/...</a>  But I have updated that post to say otherwise.</p><p>Really, what most are saying here makes good sense. Properly written queries used with cfqueryparam and properly configured DBMS account should adequately secure most, if not all, application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682266">12</a> by Paul Nielsen (SQL Server MVP)
		posted on 6/26/2008 at 7:27 PM
		</div>
		<div class="comment_text"><p>So long as the database has good security, and all access to the database goes through a good abstration layer (procs or views) that's enough.</p><p>The bigger risk is the extensibility of the database. Tight coupling will kill extensibility and will cost a fortune to fix later, or maybe even sink the organagation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682271">13</a> by zac spitzer
		posted on 6/26/2008 at 7:37 PM
		</div>
		<div class="comment_text"><p>Why don't you ask the DBA to setup some monitoring of the SQL being executed against the database (ie v$sqlarea in oracle and so on)</p><p>Then the DBA can report back any problematic unbound SQL they found which you can then easily fix.</p><p>Teamwork can achieve wonders and management tend to like such security audits</p><p>z</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682265">14</a> by Dave Ferguson
		posted on 6/26/2008 at 7:41 PM
		</div>
		<div class="comment_text"><p>Humm... I would tend to disagree with the datasource splitting technique. I don't think that splitting the datasources buy you anything.  If you are able to insert/update to the DB it does not matter what the datasource is.  The datasource that is allowing write is probably going to have sql that contains data that could be tampered with by the client.</p><p> I worked for a company that had a security audit of an application done by E&amp;Y.  The main thing we were told was to not use insert/update queries in inline sql.  It was suggested to use stored procedures everywhere we could.  Mostly any sql statement that had some value that could have been tampered with by the client.  While this would not block injection 100% of the time, a correctly written stored procedure would offer some inherit protection.</p><p>  If the policy is to use stored procedures and the developers are not then you have another issue on your hands.</p><p>My 2 cents...</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682263">15</a> by DanaK
		posted on 6/26/2008 at 7:41 PM
		</div>
		<div class="comment_text"><p>This is honestly a silly maneuvar and offers no additional protection. bad sql is bad sql even if its in its own unique datasource.</p><p>The best approach is to param all your vars, whether it be cfqueryparam or paraming inside the db procedures. Also lock down the CF datasources to remove unneccessary options under the advanced portion. We typically remove create, drop, grant and revoke from all our datasources as our apps do not typically do this via the web interface.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682269">16</a> by tc
		posted on 6/26/2008 at 7:44 PM
		</div>
		<div class="comment_text"><p>To start out with, I am not a DBA, but I have had plenty of interface with good DBA's and written web applications that interface with Oracle, MS SQL Server, and MySQL.  What the questioner's DBA is promoting is not industry practice.  It is also not recommended practice for either Oracle or MS SQL Databases.  Oracle and Microsoft have published many guidelines regarding security of data, independant of whether the application is middle-tier or client-server based.  These best practices include:</p><p>1.  Least Privileges:  Access should be based on performing only the actions necessary for the connection.  This means no SA or similar access.  I would state, it also means that applications should have different DSN's for guests/read-only users, editing users, and data administrators.  This is where, I will bring up again, the Oracle Proxy Authentication, would come in handy, if Adobe would support it.  Oracle Proxy Authentication connects through a common account (ALTER USER xyz GRANT CONNECT THROUGH abc), but retains the traditional database role security and auditing down to the individual level.  MS SQL Server doesn't have a Proxy Authentication method, but it does allow for trusted connections via Kerebos authenticated sessions, which .NET can use.  This is another area where CF is missing in its connectivity.</p><p>2. Fine Grain User Permissions via Roles:  This practice means that one uses database roles to grant permissions to objects.  To start with, in MS SQL server, one can limit the data connection to the built-in DataReader and DataWriter roles.  These roles do not allow for creation of objects.  I would often create custom web-related roles and grant permissions to objects via these custom roles, like limiting the roles to only executing stored procedures or access via views, instead of direct table access.</p><p>3. Access via Views and/or Stored Procedures:  Another common practices is to only allow web access via Views (reading of data) and Stored Procedures (reading and writing of data).  This eliminates access to the underlying tables themselves.  Writing via Stored Procedures also allows the Stored Procedures to do data-checking and has the same effect as parameterized queries.</p><p>None of these help for third-party apps, but if an organization implements these practices, it can include these requirements in their RFP's.  Including the practice in the RFP's may force third-party developers to start addressing these concerns.  If you don't make security a requirement for awarding a contract, then the vendors aren't going to address it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682267">17</a> by Chad
		posted on 6/26/2008 at 7:50 PM
		</div>
		<div class="comment_text"><p>@Ray</p><p>I dont think it would be to hard to write a CF application that checks for SQL injection vulnerabilities.</p><p>If you watch that program do it's thing it is looking for 500 errors as it tries to tack in multiple SQL queries.</p><p>They also have a nice document on SQL injection that gives good examples of injections.<br><a href="http://disq.us/url?url=http%3A%2F%2Fproducts.spidynamics.com%2Fasclabs%2Fsql_injection.pdf%3A3iNPNUOTjZl3PV9S7WRw4v9ml_w&amp;cuid=3321886" rel="nofollow noopener" title="http://products.spidynamics.com/asclabs/sql_injection.pdf">http://products.spidynamics...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682270">18</a> by Matt Osbun
		posted on 6/26/2008 at 7:58 PM
		</div>
		<div class="comment_text"><p>Looks like I get to be the lone voice of dissension.</p><p>Cool.  :)</p><p>To address the idea of data security, the best answer is "It depends".  When I worked for an insurance company, all web data went into a write-only database, and then went through a data check for various things (security was part of it, but not all of it) before being allowed into the central database that was shared with the desktop-client ERP system.</p><p>And that was A Good Thing (tm).  One massive application with a rotating cast of about 10 developers over a 2-year span of time, standards were hard to enforce.  This added a constant layer of data security.</p><p>Secondly, it's been shown that having a read-only database and a write-only database is a performance boost.  To keep the explanation short, the more you optimize a database for quick reading, the slower writing will generally be, and vice versa.  Our development group just did a sit-down meeting with one of our DBAs to talk about performance optimization, and this was one of his recommendations.</p><p>As for the dreaded "Industry Standard" argument, keep in mind that not all that long ago, a parametrized query went against industry standards.  ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682264">19</a> by Raymond Camden
		posted on 6/26/2008 at 8:02 PM
		</div>
		<div class="comment_text"><p>@Matt - One interesting note about what you said - you mentioned a write and read "database". I believe the original poster was saying the DBA was just using datasources. Ie, one db, two DSNs. In that case I think there is no benefit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682268">20</a> by Matt Osbun
		posted on 6/26/2008 at 8:06 PM
		</div>
		<div class="comment_text"><p>@Ray</p><p>Heh- look at that.  Totally missed that one. Mea Culpa.</p><p>Nope- having a hard time coming up with a reason two dataSOURCES pointing to the same dataBASE would offer any greater security over one properly resricted datasource.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682272">21</a> by Brad Wood
		posted on 6/26/2008 at 8:22 PM
		</div>
		<div class="comment_text"><p>Ok, I've been doing ColdFusion for 9 years now, and I've had to do some DBA work for the past couple years.  This is an interesting concept I had never really heard presented.  At my current job all data access is in the form of Stored Procs.  We separate read procs and write procs out and they use a difference datasource.  However, we did not do this for security, we did it to use replicated data easily by having a write database and a read database for reporting etc.</p><p>Regardless of the annoyance, and the possible lack of necessity, I've got to say I do think this approach would make your site more secure and here's why:  Every cfquery and cfstoredproc on your site represents a possible window of vulnerability.  Each time you add a query to a page you are placing an open database connection to your DBMS and the code you put in that cfquery will determined whether or not it can be exploited.  Let's say you have 100 cfqueries on your site.  That's 100 ways you can get hacked.  On average, 50 of them read and 50 of them write.  If you can remove 50 of those from the "potentially vulnerable" pool, you have just eliminated half of your worries.  Further to the point, I have successfully exacted SQL injection attacks before on my own sites etc and I have found places like search screens with multiple inputs and dynamic SQL are MORE likely to allow for SQL injection.  If anything, these are the queries that only need to be read-only in the first place!</p><p>Now, before you flame me, I'm not condoning the practice.  In fact I think it is a little ridiculous since ColdFusion makes it VERY easy to prevent SQL injection, but I think the DBA has a point-- albeit a little obtuse.<br>I would work on trying to strengthen your relationship with him and being more transparent about what SQL you are using-- perhaps he can review it all.  This DBA obviously doesn't trust you (which I think comes natural to them), but see if he can recall any recent incidents where this has been a problem that would justify the change.  Also, go over the ColdFusion administrator settings with him that allow you to block drops, grants, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682273">22</a> by Todd Rafferty
		posted on 6/26/2008 at 10:35 PM
		</div>
		<div class="comment_text"><p>@Brad Wood: If everything was done correctly the first time using &lt;cfqueryparam&gt; then those 100 cfquerys should be fine and 2 datasources is overkill.<br>--<br>Only thing I can think of is to separate logging.  When you look at one datasource-&gt;db account you're looking at all the reads.  If you look at the other, you look at all the writes.</p><p>No idea.  Just a weird DBA that doesn't understand what the front end technology is doing and protecting his ass.  Your best bet is to educate him on &lt;cfqueryparam&gt; and show him examples of &lt;cfquery&gt; with and without it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682275">23</a> by Tero Pikala
		posted on 6/26/2008 at 10:38 PM
		</div>
		<div class="comment_text"><p>I guess typical web application has front end which is publicly available and "admin" side for making changing - usually some kind of CMS. I would definitely consider using 2 datasources in this scenario.</p><p>Public site user/datasource should be limited to just those tables, views and procedures it needs. It will need write access to something but usually it's quite limited. As long as admin side is properly protected that user/datasource could have relaxed access.</p><p>This would also help with performance tuning and tracking connections at the database end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682274">24</a> by Todd Rafferty
		posted on 6/26/2008 at 11:00 PM
		</div>
		<div class="comment_text"><p>@Tero: Good point!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682276">25</a> by CoolJJ
		posted on 6/26/2008 at 11:05 PM
		</div>
		<div class="comment_text"><p>@Brad Wood: "but I think the DBA has a point-- albeit a little obtuse"</p><p>I don't get it. I think your entire comment just refuted the DBA's point because this is what I was going to say also. <br>It doesn't matter if the datasources allow only read, or only write. If there is a parametered query, it is a point for sql injection no matter what that query is doing, read or write. In fact, most sql injection attacks use union selects to scope out your database schema and read out your user data tables (email, creditcards, names, social security #s, addresses, etc). So separating datasources into read and write is totally pointless because it produces no benefit for the extra work involved. All that time that could be better spent doing code reviews, security audits, building in audit trails, and cqqueryparam'ing queries.</p><p>CooLJJ</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682277">26</a> by Brad Wood
		posted on 6/26/2008 at 11:10 PM
		</div>
		<div class="comment_text"><p>@Todd:  I cannot argue against that, but I don't think the DBA is packing his picnic for a perfect utopian application.  I think you would have to agree that 100 cfqueries, only 50 of which are connecting to the database with a user capable of modifying data has less RISK.  And RISK is always worth diminishing if it threatens something important.  It all goes back to the concept of supplying the LEAST permissions possible to do the job.  No one ever said that making your website as secure as possible had anything to do with manageability.  &lt;/devils_advocate&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682278">27</a> by Brad Wood
		posted on 6/26/2008 at 11:23 PM
		</div>
		<div class="comment_text"><p>@CooLJJ: There are three basic things a user can do with SQL injection:<br>1) Access private data they are not supposed to.<br>2) Modify/delete data they should have no control over<br>3) Modify the schema of your database by creating/dropping objects/permissions etc.</p><p>Hopefully the user your data sources authenticate through does not allow for option 3 regardless of whether you are reading or writing.</p><p>You are very correct that Option 1 is still problematic even with a read only authentication.</p><p>My point is that Option 2 will have been eliminated as a possibility from all of your selects.</p><p>Again, whether or not this extra step of security is WORTH it to your organization would need to be determined by yourself.  I am simply stating that the DBA's suggestion would in fact eliminate a portion of risk to his Database by minimalizing the places in code which have write access.<br>Trust me, organizations who take security very seriously will jump through seemingly absurd hoops that are probably "technically" not necessary, but each one covers part of their butt a little bit more.  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682280">28</a> by Jake Munson
		posted on 6/26/2008 at 11:25 PM
		</div>
		<div class="comment_text"><p>Multiple people have said that using read-only data sources is not industry practice.  If you define "industry practice" to mean what everybody else is doing, then I'll agree.  That said, I have read /security/ "industry practice" papers that suggest you use a read-only datasource.  I think the best thing it can do for you is force you to think about your coding, and truly try to code more securely.  Because even the best security minded coders can have their site hacked.</p><p>Also, it seems to me that if you had a read-only datasource, could you leave out all the cfqueryparams in the read-only queries?  Speed coding up a bit?</p><p>On the other side of the argument...say you do use 2 datasources...what's to stop you from just using the write datasource for everything?  And then SQL injection problems could occur again.  So unless you have code reviews, or preferably some automated tool to find potential security holes, it all seems like wasted effort.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682279">29</a> by Jason Dean
		posted on 6/26/2008 at 11:28 PM
		</div>
		<div class="comment_text"><p>@jake - A read-only datasource would not eliminate the need for cfqueryparam. SQL injection can be used to READ unauthorized data as well a alter it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682282">30</a> by CoolJJ
		posted on 6/26/2008 at 11:57 PM
		</div>
		<div class="comment_text"><p>@Brad Wood<br>"Hopefully the user your data sources authenticate through does not allow for option 3 regardless of whether you are reading or writing."</p><p>True. Hopefully everyone unchecks Create, Drop, Alter, Grant, and Revoke from the advanced settings when setting up datasources.</p><p>"My point is that Option 2 will have been eliminated as a possibility from all of your selects. Again, whether or not this extra step of security is WORTH it to your organization would need to be determined by yourself."</p><p>I could see that point if eliminating the treat footprint actually lowers the risk, and like you said it is pretty much up to the organization to decide if it does so in any significantly measurable way. But then again, it doesn't eliminate the treat, it just eliminates the treat footprint. A wise cracker could still scope out your schema, then move to a form that writes data to the DB, and manipulate queries to write malicious data where ever he wants.</p><p>If the DBA guy thinks this scheme is the end all to protect his databases against possible corruption by SQL Injection attacks, I would say he is misguided.</p><p>CoolJJ</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682281">31</a> by Dan Rouw
		posted on 6/27/2008 at 12:24 AM
		</div>
		<div class="comment_text"><p>This is a very interesting conversation, so I'm going to throw out a couple of questions to see what people think.</p><p>About 4 years ago I took an advanced CF class and the instructor recommended that we use 2 database users and 1 DSN. The DSN was setup with the username and password for the read-only account. Then if you wanted to update or delete data you had to supply the other set of credentials in your cfquery tag.</p><p>So, here are my questions:</p><p>1: What do you think about that reasoning?</p><p>2: Are you storing the username and password in your DSN or do you supply it for every cfquery, cfstoredproc, etc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682286">32</a> by Brock
		posted on 6/27/2008 at 1:00 AM
		</div>
		<div class="comment_text"><p>I think it would be interesting to hear what Adobe has to say about this.  Dan, it looks like the party line is to do something similar, is that kind of a general Adobe-sanctioned practice (by virtue of the fact it was probably an adobe-approved instructor, curriculum, etc?)</p><p>I totally trust what Adobe has to say about this, and think maybe we should seek their official wisdom on the matter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682285">33</a> by Dan Rouw
		posted on 6/27/2008 at 1:03 AM
		</div>
		<div class="comment_text"><p>The instructor was a certified Adobe instructor, but I can't remember if that was in the training materials or if it was something he practiced.</p><p>Unfortunately I have since switched jobs so I don't have access to the manual to check.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682287">34</a> by Tero Pikala
		posted on 6/27/2008 at 1:50 AM
		</div>
		<div class="comment_text"><p>I think it's a good idea; developer would have to make concious decision that query in question needs to have write access.</p><p>Often developer do know the best practices but in practice they are forgotten every now and then. If there is second line of defence it can't be too bad!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682293">35</a> by jdbo
		posted on 6/27/2008 at 2:00 AM
		</div>
		<div class="comment_text"><p>Doesn't this approach (splitting reads and writes between databases) completely break CF transaction support?</p><p>IIRC, any series of queries within a given pair of cftransacation tags must all be referencing the same datasource (otherwise CF complains).</p><p>I don't know if that restriction has been removed in more recent versions of CF, but I'd see that as a deal-killer (regarding this splitting approach) right from the start - if transactions are thrown out the window, then this strictly decreases the consistency of the db-hosted data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682288">36</a> by goldcoastnerd
		posted on 6/27/2008 at 2:13 AM
		</div>
		<div class="comment_text"><p>sounds like ur DBA is really out to get u mate. can't c any advantage to have separate databases for reads and writes. one way to make sure of a secure database is to not provide queries against tables but views and table variables instead. using views is excellent way to query tables and keeping it secure. other than that, all u can do at the coldfusion side of things is using cfqueryparam in all queries, that should b good enough as the others have pointed out....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682291">37</a> by Joshua Curtiss
		posted on 6/27/2008 at 6:30 AM
		</div>
		<div class="comment_text"><p>I actually agree with Brad that I can see why the DBA would want to enforce this. I would be ticked if I had a DBA that pushed this on me, but I can see why this DBA wants it.</p><p>Apparently from this DBA's perspective, we programmers are completely unreliable. It gives him hives just thinking that we have access to his database(s). The least he can do is completely eliminate the possibility of SQL injection with inserts or deletes on the select queries. For many sites, the select queries are likely more prominent and easiest to find.</p><p>The 2 datasource approach would "work" to protect the read-only queries because the read-only datasource would allow SELECT statements only and the write datasource would allow INSERT/UPDATE/DELETE statements only... Using the write database for select statements would not work, enforcing the 2 datasource approach on we weaselly programmers.</p><p>I don't think this is the solution to his/her concerns. The solution is a code review and careful usage of query params like everyone has said. But this requires trust. If you don't trust the programmer(s) and were a control freak, I can understand why you would come to this 2 datasource approach.</p><p>Ugh. I feel for ya.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682289">38</a> by Darren Walker
		posted on 6/27/2008 at 3:01 PM
		</div>
		<div class="comment_text"><p>To me the key problem here is that the DBA doesn't trust the developers or respect their opinions. So even if you come up with the perfect argument that would "stand up in a court of geek law", you will probably still lose. Most of the time people make emotional decisions, not rational ones. So my recommedation would be to focus on the inter-personel issues, the strategy being that you want the DBA to agree with you but think it was his (or her) decision. Usually this is done by cleverly crafted questions; "Explain to me why you think this is a problem?", "Why do say that?", "Are there any other ways we could achieve the same result?", "If the problem is the lack of developer trust, what would you suggest we do to fix this?", "Can you see the problem we face in implementing your solution?". You are all supposed to be on the same team. Also, this kind of thing, if it escalates, can cause lots of problems down the line. Often the solution is just the right amount of beer and/or pizza.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682295">39</a> by Daniel Greenfeld
		posted on 6/27/2008 at 4:41 PM
		</div>
		<div class="comment_text"><p>I'm wondering what management for the unfortunate ColdFusion developer in this article have to say about the productivity hit they are going to take from this new database rule.  Did they get a nicely research paper detailing why the sudden and massive architecture change demonstrating benefits and possible risks for this move?</p><p>This DBA reminds me of the so-called 'Usability and Section 508 expert' who demanded that source code (CFML &amp; Fusebox XML files) be Section 508 compliant.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682290">40</a> by Tariq Ahmed
		posted on 6/27/2008 at 8:04 PM
		</div>
		<div class="comment_text"><p>I can understand the DBA's perspective, if the database gets messed up he has to deal with it.</p><p>Debating technical implementation can go on forever, and this is not what's in the best interest of the business.</p><p>I'd recommend the following steps:</p><p>1) A representative or two from the DBA and Development teams get together, including the manager(s).</p><p>2) Define the problem. This is the biggest issue I see here, if it's not defined then everyone is trying to solve different problems, and solving only the symptoms of the problem in the process. Is the problem Security, unreliable developers, trust, etc...</p><p>3) With the problem now defined, itemize all of the options to solve the problem, along with the pros and cons of each. Multiple data sources, cfqueryparams, stored procs, code reviews, SQL permissions, CF Admin settings, process changes (e.g. prior to release you use that sql injection scanning tool that Chad mentioned), etc... And don't limit pros and cons to just the technical perspective, what is the cost/effort, limitations, business impact, etc...</p><p>4) Solicit feedback from the teams, external experts like Ray.</p><p>5) Recommend one or more of the options stating why.</p><p>6) Have someone with the authority to support the decision sign off.</p><p>7) There's no more debate anymore, the solution is backed by mgmt. Execute the plan, and if anyone doesn't like it - they can quit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682292">41</a> by JC
		posted on 6/27/2008 at 11:20 PM
		</div>
		<div class="comment_text"><p>FWIW, you'd need two *users*, not just two connections. CF's little set of checkboxes doesn't really do much of use so far as injection goes... if your database user has access to do bad things, he can do it. CF doesn't seem to do a very good job of verifying the contents of CFQuery.. if you're limited to selects and do select w from x where y; update c set z = (select top 1 w from x where y), your update will go through.</p><p>And if that user has access to other databases, the DSN doesn't limit access to those, either.</p><p>This might be of interest if you want to see what your exposures are:<br><a href="http://disq.us/url?url=http%3A%2F%2Fyougiveloveabad.name%2Farchives%2F2008%2F06%2F27%2Fcfdbinfo-what-can-you-see%2F%3A8mSDaThW5cChJixcBDkVRxzM2zg&amp;cuid=3321886" rel="nofollow noopener" title="http://yougiveloveabad.name/archives/2008/06/27/cfdbinfo-what-can-you-see/">http://yougiveloveabad.name...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682297">42</a> by bodyboarder20
		posted on 6/28/2008 at 5:21 AM
		</div>
		<div class="comment_text"><p>I think your DBA is having the same issues mine is--he/she is just looking for a reason to substantiate their outrageously high salary...</p><p>My Oracle DBA makes statement like yours on a daily basis, but we've just learned to keep him in the corner and knod our heads...</p><p>I think his suggestion makes no sense... SQL Injection attacks only effect write changes... so making two seperate accounts only adds extra work and complexity to your application...</p><p>Poor guy... I feel for you bro.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682298">43</a> by James
		posted on 6/28/2008 at 9:08 PM
		</div>
		<div class="comment_text"><p>A number of folks have suggested that the DBA may be justified because corrupt data is ultimately his or her responsibility.  In my experience, this has never been the case.  Certainly DBA's are traditionally responsible for the plumbing, backups, replication, patches, etc.  But when the data was flatly bad, I've always seen it put back on the developers' shoulders, because it is, after all, an application issue.  I guess what mystifies me about this DBA's policy is A) why his management hasn't sought a second opinion to such an obviously bone-headed idea (are they aware that this one policy prevents the use of virtually all known COTS software?) and B) why s/he even cares if the data goes bad anyway in the end?  Or has their organization redefined the role of the DBA?  No, this is an application question and the DBA should butt out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682299">44</a> by Jim Ruzicka
		posted on 7/5/2008 at 1:48 AM
		</div>
		<div class="comment_text"><p>This is just foolishness for so many reasons. I would just like to ask this DBA, How would you handle this:  What if you had a write INSERT query that returned a SELECT @@Identity  to get the last PKID created.. couldn't be done in his scenario, could it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682300">45</a> by blindman
		posted on 11/7/2008 at 10:50 PM
		</div>
		<div class="comment_text"><p>Well, I am an expert DBA, and I can confirm that this is a loony and useless idea, and the DBA in the story is clueless.</p></div>
	</div>
</div>
		