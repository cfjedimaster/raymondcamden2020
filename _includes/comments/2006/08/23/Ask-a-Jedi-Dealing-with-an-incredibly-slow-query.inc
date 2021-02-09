
<div class="comment" id="c_1713656731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656731">1</a> by Danilo
		posted on 8/24/2006 at 12:30 AM
		</div>
		<div class="comment_text"><p>If the resultset isn't large, just the dataset that the query has to sort through, then perhaps you use the cfquery cachedwithin attribute to tell CF to cache the results until the query is to be run again the next night. And its should be possible to use a Query of Queries to further filter/sort to the results as needed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656732">2</a> by Daniel Hai
		posted on 8/24/2006 at 12:56 AM
		</div>
		<div class="comment_text"><p>What kind of SQL back-end are you using?  If it's a resultset into the millions or billions or even trillions -- for sure dump the query into tables.  I'm guessing it's taking so long because you're aggregating data ... If you're not aggregating data then you probably have a design issue at hand (something is not indexed correctly or you're getting a table scan somewhere).  If you're not aggregating, then you could always split up the query by id's, and dump them into subsequent tables.  Another possibility might lie in non-aggregating first, dumping it into a table, and then doing the aggregate and updating that same table.</p><p>(it could be hardware related too?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656733">3</a> by John Ceci
		posted on 8/24/2006 at 5:09 AM
		</div>
		<div class="comment_text"><p>One thing that was already stated, but I can't stress enough, look at the things you are using to join and to filter against and make sure their are indexes that match the above.  Most of the time when I am asked to look at slow running queries there will be poorly thought our indexes.</p><p>You could also look at a series of queries in a stored procedure where some of the big filtering is done and then inserted into temp tables and then join the smaller sets together.  A well thought out stored procedure can really save some processing cycles.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656735">4</a> by Joel Cox
		posted on 8/24/2006 at 5:18 PM
		</div>
		<div class="comment_text"><p>If possible, use a materialized view on the database side, and avoid doing this in ColdFusion at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656734">5</a> by Tony Petruzzi
		posted on 8/24/2006 at 5:25 PM
		</div>
		<div class="comment_text"><p>Building on what others have already stated.</p><p>Be sure that you look at the execution plan of the query. When dealing with a slow query and building indexes, the exeution plan of the query can tell you if your indexes are optimal or not. The more "Index Seeks" and "Index Scans" you have, the better optimized the query. "Table Scans" are really bad EXCEPT when the table is very small. Now granted this is really the poor mans query optimization advice I'm giving here. I could literally talk to you on the phone for about 4 hours giving advice on optimizing queries.</p><p>Two more little tidbits. A lot of people never put indexes on their foriegn keys (why, I have no idea), make sure you do this. The rule of thumb is that any column you filter against in the WHERE clause SHOULD (in most cases) have an index (or be part of an index) on it (except for BIT, TEXT, IMAGES, BLOBS).</p><p>Another good tip is to physically look at what columns your hitting against the most on the tables and put the CLUSTED INDEX on them. Case in point. With BannerBoxes, we have a click table that stores that clicks we get. We have a column named PK that is a GUID for making each recored unique, HOWEVER I have the clustered index on the CREATIONDATE column, which is a TIMESTAMP field and sorted DESC. Now why is this you might ask. Because almost all my queries hitting against this table are like this: Return the clicks for the past days (week, month, whatever). So by putting the CLUSTERED INDEX on the CREATIONDATE column and sorting it DESC, it tells the SQL to PHYSICALLY put the records of the table in that order. Thus making queries lightning fast.</p><p>Sorry for the long comment Ray. I'm done now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656739">6</a> by Raymond Camden
		posted on 8/24/2006 at 5:34 PM
		</div>
		<div class="comment_text"><p>Tony (and others), do not hold back. This is what I want. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656736">7</a> by Aaron Rouse
		posted on 8/24/2006 at 5:44 PM
		</div>
		<div class="comment_text"><p>I run into this quite a bit with one of my larger clients.  Typically in most cases we have the need to run a query against someone elses database where all they have granted us is select access and sometimes only ODBC access.  For the latter we end up using CF to run the query and parse the results into our tables. This is a horrible solution for us though because the bigger the result set the higher likelyhood of the CF server running out of resources at least this is the case on the MX boxes but not the CF5.  Where we have select access what we do is setup a database link and use a stored procedure to grab the data we need and parse it into our local tables, sometimes it needs no parsing and we just select/insert what we need.</p><p>Our bigger problem is that the owners of those other databases are always unwilling to invoke any changes on their end to help us query their data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656737">8</a> by Erik Yowell
		posted on 8/24/2006 at 5:51 PM
		</div>
		<div class="comment_text"><p>It may sound ridiculously simple and patronizing, but sometimes it helps to just stand back and ask yourself WHY you're returning such a large recordset to begin with. I've found (on more than one occassion) that multiple smaller sets and queries, or just a general change in the perception of your data can make all the difference in the world.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656740">9</a> by Tony Petruzzi
		posted on 8/24/2006 at 6:10 PM
		</div>
		<div class="comment_text"><p>@Aaron.</p><p>If you're using MSSQL, then I think the better way to go is with a DTS package. I use to do a lot of stuff like that with CF when I first started. Since learning DTS I've moved everything over to it. It's a lot eaiser to maintain and so much more stable. Plus it's fast!</p><p>One of these days I need to do a blog post on query optimization and migrating CF stuff like this to DTS packages. I just wish I could get the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656741">10</a> by Aaron Rouse
		posted on 8/24/2006 at 6:18 PM
		</div>
		<div class="comment_text"><p>Tony, I do use DTS on one of them because it is pulling from Oracle and going into MSSQL.  All the others though are Oracle to Oracle, one exception being from LDAP to Oracle.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656743">11</a> by Joel Cox
		posted on 8/24/2006 at 6:35 PM
		</div>
		<div class="comment_text"><p>If you're doing Oracle to Oracle, can you set up a database link and build a materialized view on the remote data? This builds a snapshot of the remote data on the local database (however you define remote and local in this case) and it's automatically refreshed at whatever time interval you specify when you create the materialized view.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656738">12</a> by Craig M. Rosenblum
		posted on 8/24/2006 at 6:36 PM
		</div>
		<div class="comment_text"><p>I agree and recommend views and stored procedures...</p><p>Or create a csv file that you can create a tool to parse thru the next day...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656744">13</a> by Aaron Rouse
		posted on 8/24/2006 at 6:40 PM
		</div>
		<div class="comment_text"><p>I have thought about looking into materialized views the next time one of these comes up.  It just has been almost a year since one that was oracle to oracle has come up.  Right now out of the projects I have to support currently only one has the need for this and has just been chugging along with its already defined method.  It has an LDAP to Oracle(which randomly has issues since CFM is used for that), Oracle to Oracle(which honestly I do not think is even needed any longer), and ODBC to Oracle(which even more randomly has issues since CFM is used for that).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656742">14</a> by Fred Wenger
		posted on 8/24/2006 at 6:44 PM
		</div>
		<div class="comment_text"><p>We have a couple search queries that run long, not overnight, but 10-30 seconds; longer than most web users like to wait for a page.  We've done two things to work around the problem.</p><p>1) Create a Verity collection out of the data (cfindex w/ query=).  Not always the best, but it works for one of our situations.</p><p>2) On a couple of other searches, we've used CF's asynchronous, query-of-query and query caching abilities.  On the search start page we kick off an asynchronous page that runs the long query without any parameters (filters 200,000 records down to 5000 that might apply).  When the actual search starts, we run that query again and usually it is cache by then.  The search criteria are then applied to that as a query of a query.  Again, not always the best solution, but it works in our case.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656747">15</a> by mbeach
		posted on 8/27/2006 at 9:06 PM
		</div>
		<div class="comment_text"><p>Ray - not sure if a fella is allowed to plug a book on your blog [feel free to delete if breaking the rules], but I just finished "The Art of SQL" by Stéphane Faroult (published by O'Reilly) which I can't recommend highly enough.  Quite often, and especially as procedural programmers (like myself) starting using OO techniques, the power and limitation of the back end db seem to take a back seat.  This book has seriously improved my ability to write better, faster queries and has finally provided me some back up in my resistance to co-workers who quite often say "well just index that column" when a query runs slow.  Depending on Jay's db of choice, and obviously the size of the data, and other things posters here have already pointed out, the book covers all sorts of interesting techniques to not just 'tune' the sql but explain when any why certain solutions are more applicable.  There is a sample chapter online at O'Reilly's site.  It's not often you can read a technical book from start to finish but I did with this one.  CFUnited had a speaker this year about your own personal IPO (__ Coleman?) which I thought was quite interesting even though not directly related to CF - off topic - but a discussion about better understanding of SQL writing is something I think more CF programmers could use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656745">16</a> by Raymond Camden
		posted on 8/28/2006 at 2:59 AM
		</div>
		<div class="comment_text"><p>mbeach - no problem at all. In fact, I just added this to my wish list.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656746">17</a> by Leo
		posted on 9/14/2006 at 4:49 PM
		</div>
		<div class="comment_text"><p>Hello All,<br>Does anyone know how to insert an image into an oracle database using coldfusion. This is the code am using<br>&lt;cfif isdefined("form.filename") and #form.filename# NEQ ""&gt;<br>&lt;cffile<br>action = "upload"<br>fileField = "filename"<br>destination = "#uploaddirectory#"<br>nameConflict = "makeunique"&gt;<br>&lt;cffile<br>action = "readBinary"<br>file = "#file.serverdirectory#/#file.serverfile#"<br>variable = "thefile" &gt;<br>&lt;/cfif&gt;</p><p>&lt;cfquery name="upl"<br>datasource="ccz1"&gt;<br>INSERT INTO bestStaffImage <br>VALUES (<br>bestStaffImageSeq.Nextval,<br>'#form.staffName#',<br>'#toBase64(thefile)#',<br>'#file.serverfile#'<br>)<br>&lt;/cfquery&gt;</p><p>It uploads to the to the specified directory ok but it doesn't insert into the database. I get this error message  Error Executing Database Query.<br>[Macromedia][Oracle JDBC Driver][Oracle]ORA-01704: string literal too long</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656748">18</a> by Leo
		posted on 9/14/2006 at 4:52 PM
		</div>
		<div class="comment_text"><p>The data type i use for the image column is blob. I have tried clob, long and even varchar2(4000) but to no avail</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656750">19</a> by Leo
		posted on 9/15/2006 at 12:59 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>Am still expecting a reply to my previous message. Please Help!!!!!!!!!!!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656751">20</a> by Raymond Camden
		posted on 9/15/2006 at 5:54 PM
		</div>
		<div class="comment_text"><p>Leo, you may want to try cf-talk. This question really isn't exactly on topic for this blog post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656752">21</a> by Leo
		posted on 9/21/2006 at 9:51 PM
		</div>
		<div class="comment_text"><p>Very funny!!! Ray, Guess i'ld look for another forum</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656753">22</a> by Raymond Camden
		posted on 9/21/2006 at 11:53 PM
		</div>
		<div class="comment_text"><p>Sorry Leo - it just isn't on topic for this thread.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656755">23</a> by Leo
		posted on 9/22/2006 at 11:08 AM
		</div>
		<div class="comment_text"><p>No sweat Ray, infact i just resolved it. Thanks!!!</p></div>
	</div>
</div>
		