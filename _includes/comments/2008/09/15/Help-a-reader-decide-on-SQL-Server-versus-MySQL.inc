
<div class="comment" id="c_1713685870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685870">1</a> by Raymond Camden
		posted on 9/15/2008 at 4:01 PM
		</div>
		<div class="comment_text"><p>I just posted this so it may be dumb to add a comment already, but I forgot to mention one thing. Andrew, since you are on CF7, do not forget that the built-in MySQL driver in CF is only for MySQL 3. While it will for MySQL 4/5, it will fail in certain operations. You want to use the custom JDBC driver for MySQL 4/5 which means using the "other" DSN type when setting things up. Adobe has a good article on this:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2F6ef0253%3AcL1I8EnhTXJdOITHCOKoo7kqmFY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/go/6ef0253">http://www.adobe.com/go/6ef...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685855">2</a> by Sid Wing
		posted on 9/15/2008 at 4:25 PM
		</div>
		<div class="comment_text"><p>As you said, Ray, it's rare that we actually have a voice in the DB platform being used.  But when I do, my normal reaction is this:</p><p>SQL Server - For use in Windows/Microsoft shops where everything need to play nice.  Especially if they are also doing any .NET/VB/C# dev work that will need to talk to the same database (as SQL now uses Visual Studio to replace the old Enterprise Manager)</p><p>MySQL - for everything else.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685878">3</a> by Martin
		posted on 9/15/2008 at 4:34 PM
		</div>
		<div class="comment_text"><p>MySql every time for me! <br>I work on a fairly busy site that is fairly db intensive.<br>We have 8 db schemas and over 40 tables, the biggest of which holds over 10 million rows. The whole thing runs on MySql - I love it.<br>The site was set up back in 2005 before MySql had stored procedures in place so our development machine had Sql Server installed to process all the raw data that comes in from a 3rd party.<br>Using both products has certainly been enlightening for me and my preference for ease of use, performance and price is MySql every time. The MySql GUI tools make it so easy to do stuff I often get frustrated when I have to switch over to Sql Server. The ONLY reason we have kept Sql Server on our development machine is because we also need the connectivity it has with a mapping application that populates spatial information for some of our tables.<br>I hope that helps.<br>Cheers<br>Marty</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685861">4</a> by Jim Priest
		posted on 9/15/2008 at 4:57 PM
		</div>
		<div class="comment_text"><p>I'd initially go with MySQL - free - fairly easy to get up and running, and it's going to perform better than Access :)</p><p>Down the road - if the need arises you can always migrate to SQL Server... or run both!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685862">5</a> by Tom Chiverton
		posted on 9/15/2008 at 5:30 PM
		</div>
		<div class="comment_text"><p>I will never normally use one technology, such as MSSQL that restricts my choice of technologies in what should be an unrelated area (such as operating system).</p><p>MySQL *may* be missing some features of MSSQL, but if you're just doing CRUD with your tables, it wont matter.<br>Both will scream along fine, performance wise.<br>MySQL is much, much, much cheaper, and you don't have to worry about it waking up one day, phoning home, deciding your licence key is invalid and shutting down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685882">6</a> by Andy Sandefer
		posted on 9/15/2008 at 5:46 PM
		</div>
		<div class="comment_text"><p>As a consultant I use both MySQL and SQL Server on a daily basis.  I can make arguments for using either rdbms but honestly the feature gap between MySQL and ORACLE or SQL Server shrinks every 8 months.  For the shear reasons of platform flexibility and license cost MySQL wins hands down.  Keep in mind that I'm saying this and I hold certifications on both SQL Server and ORACLE platforms.  Don't deploy them unless you have to or unless database budget is not a factor.  I would also argue that if you take half of the money for a processor license for SQL Server and put it towards a support agreement with the folks at sun/MySQL you will get way more value for your support dollars than you would with Microsoft or ORACLE.</p><p>Good luck!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685872">7</a> by rob
		posted on 9/15/2008 at 5:47 PM
		</div>
		<div class="comment_text"><p>I'd like to second Sid's comment, but add - it is often a bit easier to go from access -&gt; mssql.  If I remember correctly, there is a nice importer that just moves an access db to a mssql db.  Sometimes it's a bit more complicated to go from access to mysql if memory serves.</p><p>Also mssql has some data mining / visualization tools that are top notch.  I haven't seen very many mining tools for MySQL.</p><p>Personally, I default to MySQL or Postgres unless there is a compelling external reason to use mssql, oracle etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685860">8</a> by Andy Sandefer
		posted on 9/15/2008 at 6:00 PM
		</div>
		<div class="comment_text"><p>@rob<br>There is a tool called Navicat that converts Access (and lots of other formats) to MySQL in about 3 or 4 clicks for less than $100.00.  It also has a job scheduler, data exporter, report builder and some other decent stuff too (some of those features might require the enterprise version - not really sure because I just use it for design and backups).  I'm still kind of playing with ERD stuff for MySQL but I recently eval'd a package called ModelRight.  It seems great for modeling but not quite as seamless as other diagram tools that I've seen for ORACLE and SQL Server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685876">9</a> by JD
		posted on 9/15/2008 at 6:07 PM
		</div>
		<div class="comment_text"><p>I did the same thing as your reader (upgraded from Access).  That was about 5 years ago and I decided to go with MySQL.  Best decision I've made.  At that time, there were a few free consoles which allowed for direct import from Access to MySQL.  I think you might have to pay for the same tools now ($30-$50)...but it's well worth the price.  As I recall, I had to redo (or create) all of the indexes, but that's simple enough.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685871">10</a> by Ryan Stille
		posted on 9/15/2008 at 6:19 PM
		</div>
		<div class="comment_text"><p>I feel much more productive working in MySQL.  Its easier to manipulate my data with SQL (less casting needed, more data format functions available), and getting data in and out of the database is *so* much easier.  DTS is a pain and often leaves off important metadata.</p><p>I love being able to move data around between database servers with just one command.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685866">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685866">11</a> by Chad
		posted on 9/15/2008 at 6:30 PM
		</div>
		<div class="comment_text"><p>Personally i think MS SQL is superior to MySQL.  It has some really powerful feaures.</p><p>BUT if you really want to take full advantage of all of the features you really need to have a trained and dedicated DBA.</p><p>I suppose that could be said for MySQL too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685868">12</a> by Chris
		posted on 9/15/2008 at 6:42 PM
		</div>
		<div class="comment_text"><p>I agree with Chad... both system can be either very slow or very fast. It all depends on your knowledge about the system.</p><p>In case you go for MySQL, there are MySQL client tools (download from the MySQL web site) that contain a Migration Toolkit (at least in the Windows version) that'll help you convert databases to MySQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685875">13</a> by Patrick Flynn
		posted on 9/15/2008 at 6:43 PM
		</div>
		<div class="comment_text"><p>MySQL has some very nice and easy to use GUI tools. They have a migration tool that allows you to convert almost any DB over to MySQL, these tools are all free:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdev.mysql.com%2Fdownloads%2Fgui-tools%2F5.0.html%3AjKoHiezgOzBrow936UWQ2ZDasP0&amp;cuid=3321886" rel="nofollow noopener" title="http://dev.mysql.com/downloads/gui-tools/5.0.html">http://dev.mysql.com/downlo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685869">14</a> by Adrian J. Moreno
		posted on 9/15/2008 at 6:46 PM
		</div>
		<div class="comment_text"><p>MySQL has a Migration Toolkit that will convert MS-Access (and other databases) to MySQL _for free_.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685881">15</a> by Adrian J. Moreno
		posted on 9/15/2008 at 6:48 PM
		</div>
		<div class="comment_text"><p>*shakes fist at Patrick*</p><p>Blast your faster posting skills!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685867">16</a> by Tomas Fjetland
		posted on 9/15/2008 at 6:59 PM
		</div>
		<div class="comment_text"><p>Lots of good stuff have been said about both engines, so I won't go into that but instead correct a small bit of detail in Rays post. MS SQL 2005 Express is not a development version, it's a free engine for use even in production, assuming you can live with its limitations. And since it uses the same underlying technology, moving your Express DBs to one of the commercial variants of MS SQL is so eventless it's almost boring.</p><p>As others have said, I think one has to sit down and evaluate ones needs and the strengths of the competing technologies. But for basic CRUD stuff, if you already have the OS license, cost isn't necessarily a factor.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685874">17</a> by Raymond Camden
		posted on 9/15/2008 at 7:00 PM
		</div>
		<div class="comment_text"><p>@TF: Thanks for the correction there. I thought that was a possibility, but wasn't sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685857">18</a> by Eric Knipp
		posted on 9/15/2008 at 7:01 PM
		</div>
		<div class="comment_text"><p>Given unlimited budget I would choose MSSQL.  It is a better product and you can expect good support.</p><p>If you've got no money your choice is clear, and using MySQL is not as bad as it used to be.</p><p>Since this is all happening because traffic on your site is growing, I'd say this is a good problem to have =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685859">19</a> by Todd Rafferty
		posted on 9/15/2008 at 7:11 PM
		</div>
		<div class="comment_text"><p>I use MySQL at home, MS SQL at work.  If I had the choice between the two, I'd learn towards MySQL.</p><p>And, Tomas Fjetland is right, we have a client using SQL Server 2005 Express running in production.  They're grumbling at the moment because they wish they had understood the limitations a little better, but they chose they chose that path because of their budget issues (despite our warnings).  They could always upgrade, but they're dragging their feet on the decision.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685865">20</a> by Brian FitzGerald
		posted on 9/15/2008 at 7:29 PM
		</div>
		<div class="comment_text"><p>I will reinforce what Andy Sandefer mentioned earlier and say that I just got started using Navicat to manage a MySQL database and it has been a real pleasure.</p><p>Back ups, data transfer, data conversions, connecting to databases on your remote servers, etc., have all been a breeze so far.  They have a 30 day trial which is worth checking out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685873">21</a> by DanaK
		posted on 9/15/2008 at 7:32 PM
		</div>
		<div class="comment_text"><p>I think this more boils down to the feature set you need, and your experience levels.</p><p>If you are just doing CRUD, as someone mentioned above, MySQL is a cheap solution to your problems.</p><p>MSSQL I find is oftentimes easier to get things done more efficiently. This depends on specifically what you are doing... but the product has simply been around longer, and has the benefits of familiar windows gui'ing. There are also some powerful features in MSSQL that MySQL just doesn't have yet. The same could be said from MSSQL to Oracle I suppose too though.</p><p>My choice between the two is heavily product specific anyhow...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685863">22</a> by Todd Rafferty
		posted on 9/15/2008 at 7:32 PM
		</div>
		<div class="comment_text"><p>SQLyog can also convert db (and, it's cheaper than Navicat):<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.webyog.com%2Fen%2F%3A37t8P1qC15YLUeVFT2bLWEUvmZE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.webyog.com/en/">http://www.webyog.com/en/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685864">23</a> by Andy Sandefer
		posted on 9/15/2008 at 7:48 PM
		</div>
		<div class="comment_text"><p>@DanaK<br>Not to call you out, well ok I guess I'm calling you out, but anyway what "powerful features" does SQL Server have that MySQL does not?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685877">24</a> by Akira
		posted on 9/15/2008 at 9:23 PM
		</div>
		<div class="comment_text"><p>MSSQL has the SSIS designer, which is handy for moving large quantities of data back and forth. Not sure if MySQL has something similar to this.</p><p>However, I am disappointed in the sheer number of bugs that are in SQL Server 2005. 2000 was pretty stable and the DTS designer worked well. 2005's SSIS designer tries too much to enforce Microsoft's vision of what a DB should be like (all unicode tables, the Oracle driver is broken).</p><p>I'd say hold out for 2008 if you're going to go the MS route.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685885">25</a> by Jeff Self
		posted on 9/15/2008 at 9:31 PM
		</div>
		<div class="comment_text"><p>This one's easy.  Don't go with either.  Choose PostgreSQL.  It's cheaper than SQL Server and it is more SQL compliant than MySQL.  Not to mention I trust it with my data way more than I'd trust MySQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685889">26</a> by chief
		posted on 9/15/2008 at 9:39 PM
		</div>
		<div class="comment_text"><p>Somewhat relevant link:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.postgresonline.com%2Fjournal%2Findex.php%3F%2Farchives%2F51-guid.html%3AtbDvUKSocfF3S6SDr28tsu9vJAE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.postgresonline.com/journal/index.php?/archives/51-guid.html">http://www.postgresonline.c...</a></p><p>Comparison of SQL Server 2005, MySQL 5 and PostgreSQL 8.3.</p><p>Surprised I haven't heard anyone using PostgreSQL w/ CF...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685886">27</a> by Jake Munson
		posted on 9/15/2008 at 10:44 PM
		</div>
		<div class="comment_text"><p>Since Akira mention SQL Server bugs...I was getting an error in Management Studio every time I tried to connect to a database.  A google search revealed an article about it on Microsoft's site (kudos to them for that).  But the solution was a head scratcher.  I had to find a registry key, set it's value to something other than blank, and then set it back to blank.  What the hell?  But it did fix the error.  &lt;shrug&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685887">28</a> by DanaK
		posted on 9/16/2008 at 12:34 AM
		</div>
		<div class="comment_text"><p>@Andy Sandefer</p><p>Off the top of my head:</p><p>- SSIS. MYSQL's implmentation can be described, at best imho, as SSIS-lite.</p><p>- All the business intelligence tools in 08.</p><p>- SSRS (the reporting services). These were really stepped up in sql 08. They even added a scaled down ssrs to the express version.</p><p>- As of mysql 5/mssql 2005 (not sure if this is different now?), mysql was still using very distinctive architecture types. This causes headaches if you have the need for advanced options like replication across your databases.</p><p>- mssql 2008 (and to some extent 05) added a more significant tie-in to the .NET framework. This one is kind of parallel and not a big sql feature itself, but similar to CF 8.x adding it. The additional capabilities you add under the hood without needing to get your hands messy in advanced sql coding is great!</p><p>- I'll disclaim this next one I heard third hand and never fully investigated. Around the timeline of sql 05 vs mysql 5, sql server supported column level security unlike MySQL. It wasn't a concern for me a the time, so I didn't think much of it.</p><p>There are a few others, but like I said above, it really just depends on the scale of your apps. Use the right tools for the job. BI tools aren't for everyone heh. I'm not bashing MySQL, the performance of the MyISAM had always been traditionally superior to MSSQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685888">29</a> by Andy Sandefer
		posted on 9/16/2008 at 12:57 AM
		</div>
		<div class="comment_text"><p>@DanaK<br>Some of the tools that ship with SQL Server are great and some of them aren't.  I played with the last few releases of Reporting Services and I really liked it.  SSIS however has been nothing but non-intuitive and flat out crap every time I've used it.<br>In regards to the "scale" part of your arguments I would strongly caution you on starting a Windows Server vs. Linux/UNIX pissing contest in terms of scalability.  I guess I don't really have a problem with anything that you're saying and I don't have a problem with SQL Server - but I'm just so tired of people treating MySQL like it is a small, desktop class database.  It isn't Paradox or FoxPro or Access or any other toy database and saying things like "it really just depends on the scale of your apps" leads people down the path of incorrect thinking when it comes to MySQL.  Go ahead and find the best 64 Bit Windows data center on earth and put it in the ring against any Linux or UNIX cluster running ORACLE or MySQL and it will lose hands down every time.<br>Bottom line - MySQL is a scalable and reliable platform that should be treated just like any of the fully commercial rdbms platforms such as Microsoft, ORACLE, IBM, etc.</p><p>@Ray<br>Where is Sean Corfield when you need him?  I asked him for SQL Server help once and he laughed at me and championed MySQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685891">30</a> by Raymond Camden
		posted on 9/16/2008 at 12:59 AM
		</div>
		<div class="comment_text"><p>@AS - Heh, well, we definitely make use of MySQL, so we are all probably biased. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685890">31</a> by Jeff Self
		posted on 9/16/2008 at 5:14 AM
		</div>
		<div class="comment_text"><p>@chief<br>I have a theory as to why you don't see much PostgreSQL usage in the ColdFusion community.  Its pretty simple.  PostgreSQL didn't have a Windows installer until 8.0 was released.  Before that, it was pretty much Unix only.  And the overwhelming majority of ColdFusion users come from a Windows world.  Sure, some have migrated to OS X or even Linux, but most came from Windows or are still on Windows.  And MySQL has had a native Windows version since it came out.</p><p>When you on the Unix side of things, PostgreSQL definitely has a much larger following.  While its still not as much as MySQL, it is definitely much closer.  And almost everyone on the Unix camp agrees that PostgreSQL is a much more robust database.</p><p>Another reason for MySQL's popularity is that it came out right around the same time as PHP.  And every book about PHP in the late '90s used MySQL for the database.  So PHP and MySQL became synonymous with one another.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685892">32</a> by Kevin
		posted on 9/16/2008 at 7:12 AM
		</div>
		<div class="comment_text"><p>I use MySQL for our DB any time I have the choice and find that the GUI tools are better than MSSQL's. I also love that the database backups are plain text files instead of a cryptic unreadable format - which is great when I want to view or tweak the data during a migration. Performance is great too, no scaling problems so far.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685893">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685893">33</a> by Ray G
		posted on 9/16/2008 at 7:27 AM
		</div>
		<div class="comment_text"><p>I would say that the MySQL group_concat() aggregate function is all by itself enough reason to go with MySQL over MSSQL 2000.  Many headaches easily avoided!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685896">34</a> by Dave DuPlantis
		posted on 9/16/2008 at 5:36 PM
		</div>
		<div class="comment_text"><p>At the risk of being unoriginal, I'll echo much of what Ray said. I've rarely had the opportunity to select the database with which I'll be working, so I really can't contribute decision-making from my own experience. FWIW, I've used both Oracle (8i, 9i, 10g) and SQL Server (2000, 2005) with various ColdFusion versions, and they seem to work fairly well. I don't have any MySQL experience ...</p><p>Questions to ask: <br>Who and what else will need access to this data? (Developers, applications, etc.) <br>How are they using the data? <br>What availability do they expect?<br>Are there specific expectations for data recovery?</p><p>These questions won't necessarily tell you which DB to choose, but they may guide you with respect to the setup you need when you do choose one. (Of course, if you have an in-house application that is already using a DB, it may make more sense to use it for your site as well. That's my situation: we have two off-the-shelf apps that use SQL Server, so that's what I use.)</p><p>How much can you spend on the DB environment? <br>How much on support?<br>How much on training?<br>How much on DBA services?</p><p>You're going to be spending money one way or another, even if it's indirectly (by spending time on one or more of these activities). If you have a limited budget, make sure you get the best value you can for your money.</p><p>What do you have experience with?<br>Are there other developers in the company/group/house that have DB experience? What have they used?<br>Do you get a chance to talk to peers regularly (locally, online)? What do they use?</p><p>This is about expertise: sure, you can use online resources, books, etc., but there's nothing quite like getting help directly from someone like you who might know what you're trying to do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685895">35</a> by Tim Smith
		posted on 9/16/2008 at 6:21 PM
		</div>
		<div class="comment_text"><p>One thing I really enjoy as an app developer about using Coldfusion is that I can deliver an app that will run on a variety of platforms and DBs.  I have one app that has in the past 2 years moved from Windows/MS SQL Server to Linux/MySQL to Linux/Oracle 10g (none of the moves under my control). That said, my two cents is: if you are comfortable with Windows and have the $ or can live with the free Express editions use MS SQL Server any other case use MySQL (PHPMYADMIN helps alot).  If you are in a situation where performance etc. is becoming an issue then you need a DBA to help decide or "become" a DBA in which case you will have a strong opinion that I couldn't sway anyway.</p><p>The whole point of my ramblings is that Coldfusion gives you flexibilty to test the waters and see what works best for you :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685897">36</a> by DanaK
		posted on 9/16/2008 at 7:20 PM
		</div>
		<div class="comment_text"><p>@Andy - Sorry I wasn't completely clear I think. I wasn't referring to scale in the terms of scalability. It probably wasn't worded correctly. I meant in the terms of feature-sets. MySQL has made huge strides since the days (not long ago) where joins didn't even exist etc. In fairness SQL server has been laboring under a similar direction playing catch up with Oracle (imho anyhow). What I meant by scale was maybe you have absolutely no use for the BI, or reporting tools. If you're doing just CRUD stuff mostly I think MySQL is the best choice (depending on your environment, as you mentioned) being free and pretty powerful for its price tag. I think as far as scalability is concerned, MSSQL falls flat sometimes because of all that additional complexity that adds overhead to everything.</p><p> In fact I believe there is a way to hook mssql SSRS into MySQL, it just requires you to have a working mssql installed on the box which is obviously redundant.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685898">37</a> by MySQL user
		posted on 9/16/2008 at 7:46 PM
		</div>
		<div class="comment_text"><p>Hi Andy,</p><p>What do you mean by:<br>"<br>I'm still kind of playing with ERD stuff for MySQL but I recently eval'd a package called ModelRight. It seems great for modeling but not quite as seamless as other diagram tools that I've seen for ORACLE and SQL Server. <br>"</p><p>We're using ModelRight for Oracle and MySQL and we like it a lot.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685900">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685900">38</a> by Andy Sandefer
		posted on 9/16/2008 at 8:16 PM
		</div>
		<div class="comment_text"><p>@MySQL User<br>Um, it looks a lot like English to me.  I "mean" exactly what I said.  Well ok, let me give you a scenario of what it is like to use ModelRight and I will try to articulate exactly what I mean...<br>---<br>Finally came a moment of synchronicity that took them both by surprise and swept them into their first ModelRight encounter. It was a Cartesian firestorm.</p><p>Neither had ever before experienced anything remotely similar. They were equally matched in both strength and quickness, but SQL Server Diagram Toolkit was particularly shocked by ModelRight's aggressive nature. ModelRight had a no-holds-barred approach that was a direct parallel to SQL Server's skills as a fighter pilot. ModelRight was able to make SQL Server fly ModelRightly with the same gusto that ModelRight brought to all data design adventures. ModelRight's subtlety in the handling of SQL Server's control surfaces would confound SQL Server to the very razor edge of an unhandled exception (which is actually quite common for Windows species), anyway then ModelRight would back off as mere hair's breadth to hold SQL Server trembling at that pre-compiled level for astonishingly long moments.  When they were finished a small midget named MySQL entered the room riding on a Unicorn named ORACLE.<br>---<br>So anyway, that's what I meant.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685901">39</a> by Albert Nurick
		posted on 9/16/2008 at 8:56 PM
		</div>
		<div class="comment_text"><p>Having spent years firmly in the Microsoft camp, Binetix is now a MySQL shop.</p><p>We use MySQL for all of our sites (including some transaction-heavy sites that are mission critical for our clients) and to back-end our e-mail server (the excellent hMailServer.)  Our web servers are IIS on Win2003.</p><p>We're currently running MySQL 5.0.  It's rock solid, performance is exceptional, and administration is straightforward.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685899">40</a> by Andrew
		posted on 9/22/2008 at 7:59 PM
		</div>
		<div class="comment_text"><p>I'm the Andrew that submitted the question and just wanted to say thanks. I've talked to everyone a bit more and the MySQL route is definitely better for both now and seemingly in the long run. The points here were definitely interesting and a good read so I for one appreciate everyone's input!</p></div>
	</div>
</div>
		