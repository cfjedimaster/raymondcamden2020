
<div class="comment" id="c_1713674626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674626">1</a> by Jordan Clark
		posted on 11/29/2007 at 4:41 AM
		</div>
		<div class="comment_text"><p>You could save some space by serializing the query to json instead of wddx.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674627">2</a> by Dan
		posted on 11/29/2007 at 5:02 AM
		</div>
		<div class="comment_text"><p>Sweet! I'll have to give this a try...  Make sure to post the follow up on how to restore a database with ColdFusion!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674631">3</a> by Sam Curren
		posted on 11/29/2007 at 5:39 AM
		</div>
		<div class="comment_text"><p>Since you are going to zip the file anyway, saving it to json doesn't gain much over saving it to xml. The XML version is a little more descriptive, and since it is WDDX, it can be read and used by more then just CF. AFAIK, the json encoding of queries is specific to CF.</p><p>I was thinking about writing something similar to this, only generating the create and insert statements required to extract a DB in a form that could easily be moved to a different server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674628">4</a> by todd sharp
		posted on 11/29/2007 at 7:16 AM
		</div>
		<div class="comment_text"><p>The other day I was looking into a Java solution for this called ddlutils.  It can be used to do this very thing (as well as create an XML representation of your table structure).  The cool thing about it is that it supposedly can be used to take that same data/schema and import it into a completely different DBMS.  More to come on my experiences with it (ping me offline if you want to know more).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674629">5</a> by Raul Riera
		posted on 11/29/2007 at 1:31 PM
		</div>
		<div class="comment_text"><p>Im having problems to read your "code blocks" in my Mac (Safari 3), the font size is way small.</p><p>Am I the only one? (I know u are on a mac too Raymond)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674630">6</a> by Raymond Camden
		posted on 11/29/2007 at 5:16 PM
		</div>
		<div class="comment_text"><p>Raul, I see it. I'll look into fixing it a bit later today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674636">7</a> by James Edmunds
		posted on 11/29/2007 at 9:31 PM
		</div>
		<div class="comment_text"><p>Very interesting! What do you suppose would happen if this were done on a database with several tables of 100,000+ records? Timeout issues? Processing load an issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674635">8</a> by Raymond Camden
		posted on 11/29/2007 at 9:36 PM
		</div>
		<div class="comment_text"><p>The world - as we know it - would come to an end. ;)</p><p>Um, I'd thin it would probably time out. You could add sanity checks in there - checking record count, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674633">9</a> by David Buhler
		posted on 11/29/2007 at 9:49 PM
		</div>
		<div class="comment_text"><p>Any suggestions for using cfdbinfo to select all tables except a list of tables to skip?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674632">10</a> by David Buhler
		posted on 11/29/2007 at 9:49 PM
		</div>
		<div class="comment_text"><p>subscribing :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674638">11</a> by Raymond Camden
		posted on 11/29/2007 at 9:52 PM
		</div>
		<div class="comment_text"><p>The result is a query. If you had a list of 'bad tables':</p><p>&lt;cfset badlist = "foo,moo"&gt;</p><p>Then in your cfloop, you just do:</p><p>&lt;cfif not listfind(badlist, table_name)&gt;</p><p>Ie, if you don't find the table in the bad list, carry on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674641">12</a> by James Edmunds
		posted on 11/29/2007 at 9:59 PM
		</div>
		<div class="comment_text"><p>Ray, nice, this would allow you to, say, omit CDATA and CGLOBAL and use this on an otherwise digestibly-sized database.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674637">13</a> by Raymond Camden
		posted on 11/29/2007 at 10:05 PM
		</div>
		<div class="comment_text"><p>If you wanted to get fancy, you could check the columns and ignore BLOBS and CLOBS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674642">14</a> by David Buhler
		posted on 11/29/2007 at 11:29 PM
		</div>
		<div class="comment_text"><p>That's pretty cool.</p><p>IMO, a "skip-list" seems like a great way to compromise between incremental back-ups, and full back-ups for tables that never change.</p><p>Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674644">15</a> by James Harvey
		posted on 1/30/2008 at 7:32 PM
		</div>
		<div class="comment_text"><p>I love this script! I truelly do! <br>Now that said (and it works great), is it possible to to save that backup data into a file other than a wddx packet?</p><p>say like a text file perhaps that is zipped up instead?<br>Just Curious...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674645">16</a> by Raymond Camden
		posted on 1/30/2008 at 8:27 PM
		</div>
		<div class="comment_text"><p>Well WDDX is a nice way to quickly convert data into a string. If you wanted to do it someother way, perhaps with JSON, that would be trivial in CF8 as well. Point is - you have to find _some_ way to convert a data structure (the query) into a simple string.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674646">17</a> by Erik
		posted on 4/15/2008 at 8:12 PM
		</div>
		<div class="comment_text"><p>Just curious since I am now doing this exact type thing. Is there any reason why you query each of the tables to gather all the data, then put it in a packet instead of doing a single  BACKUP DATABASE **** TO DISK='***' type query and just zip up the .bak file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674647">18</a> by Raymond Camden
		posted on 4/15/2008 at 8:16 PM
		</div>
		<div class="comment_text"><p>The idea was to write a generic solution in CF. SOmething DB specific would be better, but this could be applied to _anything_.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674648">19</a> by ramzi
		posted on 4/27/2008 at 1:18 PM
		</div>
		<div class="comment_text"><p>yaay! now i can back up ... but how do we restore?<br>i m gonna read a bit more about json and wddx packets :)</p><p>good one</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674652">20</a> by Mike
		posted on 6/19/2008 at 2:35 PM
		</div>
		<div class="comment_text"><p>Another great little snippet there Ray! Just what I was after for my backup script, though wddx isnt something i have come accross before.</p><p>As an aside for bigger DB's what would you or anyone else recommend as a way of maybe splitting the file into "emailable" chunks?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674651">21</a> by Raymond Camden
		posted on 6/19/2008 at 4:05 PM
		</div>
		<div class="comment_text"><p>Considering it's all just text, I'd just use cfzip.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674653">22</a> by Mike
		posted on 8/29/2008 at 11:25 PM
		</div>
		<div class="comment_text"><p>Ray, any chance of a follow up on this on how you would use the wddx to get info back?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674655">23</a> by Raymond Camden
		posted on 8/30/2008 at 6:23 PM
		</div>
		<div class="comment_text"><p>That would involve:</p><p>a) First, you want to convert the WDDX packet back into native data. That is as simple as running cfwddx again, but with action=wddx2cfml.</p><p>b) This gives us a structure with table names as keys, and queries as data. For each key you would:</p><p>c) Loop over the query and do an insert of the data back into the table. Remember that CF gives you functions to inspect queries (columnlist) and get the individual cells, so this is something you can handle easily enough. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674656">24</a> by Aina
		posted on 6/25/2009 at 7:14 AM
		</div>
		<div class="comment_text"><p>Have just tried to run your code but got an error when encountered the table index (like foreign key). Any ideas how to work around that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674657">25</a> by Raymond Camden
		posted on 6/25/2009 at 3:36 PM
		</div>
		<div class="comment_text"><p>What error exactly?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674658">26</a> by Aina
		posted on 6/27/2009 at 4:31 AM
		</div>
		<div class="comment_text"><p>Yes, soory, forgot to mention in my previous post I have tried to run it on Posgres database (version 8.3). When it got to &lt;cfloop&gt; and started to go through tables and then got to a foreign key of the table it through an error saying that your_table_fk is not a table. My guess Postgres is treating foreign keys and indices as something special, not sure what though. This is the first time I work with Posgres.<br>Thanks,<br>Aina.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674662">27</a> by Gurpreet
		posted on 7/4/2010 at 12:16 PM
		</div>
		<div class="comment_text"><p>This is mysql based right!</p><p>how do we analyze mssql and backup mssql tables using coldfusion</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674663">28</a> by Raymond Camden
		posted on 7/4/2010 at 5:59 PM
		</div>
		<div class="comment_text"><p>cfdbinfo can introspect any DSN, so it should "just work".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674661">29</a> by Misty
		posted on 11/17/2010 at 12:55 PM
		</div>
		<div class="comment_text"><p>Great! What if we want to do something like same on Coldfusion 7, we opt to use &lt;cfexecute&gt; but that is disabled with most hots! then what the solution could be, undelying java classes or what!????</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674660">30</a> by Raymond Camden
		posted on 11/17/2010 at 7:20 PM
		</div>
		<div class="comment_text"><p>No idea man. Upgrade to cf8. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674665">31</a> by Henry
		posted on 7/19/2011 at 10:23 PM
		</div>
		<div class="comment_text"><p>Realise this is an old post now, but super super useful...</p><p>Am going to write some code to rebuild the DB from the WDDX now - will post when I've got it - thanking you kindly sir!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674667">32</a> by Misty
		posted on 2/23/2013 at 6:41 PM
		</div>
		<div class="comment_text"><p>Hi ray, how to restore the backup</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674668">33</a> by Raymond Camden
		posted on 2/23/2013 at 7:20 PM
		</div>
		<div class="comment_text"><p>I'd use the command line tools available in most DBs. MySQL, for example, allows you to restore from a backup, and create backups. To be honest, this entire blog post is a proof of concept really. If I had MySQL, I'd use their CLI tools and automate it. The most I'd bring in CF for is to possibly fire it off with cfexecute.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674666">34</a> by Marios Papaioakim
		posted on 11/7/2013 at 5:44 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>Thank you very much for your script. i have an issue with greek characters (actually all utf-8) languages' characters...<br>the greek characters in the data.packet  file aren't readable...</p><p>any suggestion ?</p><p>thank you in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674671">35</a> by Raymond Camden
		posted on 11/7/2013 at 5:52 PM
		</div>
		<div class="comment_text"><p>Try using &lt;cfprocessingdirective pageencoding="utf-8"&gt;. If that doesn't work, try to diagnose where it breaks. For example, dump the query to see if the Greek chars are ok at that point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674669">36</a> by Marios Papaioakim
		posted on 11/7/2013 at 6:15 PM
		</div>
		<div class="comment_text"><p>It works !!!</p><p>Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674674">37</a> by Misty
		posted on 3/2/2014 at 8:46 PM
		</div>
		<div class="comment_text"><p>Hi Ray, Running this Getting the following error:</p><p> Error Executing Database Query.<br>Value '0000-00-00 00:00:00' can not be represented as java.sql.Timestamp</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674673">38</a> by Raymond Camden
		posted on 3/2/2014 at 8:51 PM
		</div>
		<div class="comment_text"><p>Did you Google for this?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F11133759%2F0000-00-00-000000-can-not-be-represented-as-java-sql-timestamp-error%3A35cD-krld_MCDaVNx-6lY2LQpcw&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/11133759/0000-00-00-000000-can-not-be-represented-as-java-sql-timestamp-error">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674672">39</a> by Misty
		posted on 3/2/2014 at 9:03 PM
		</div>
		<div class="comment_text"><p>I Checked it, But I am using the above script to make a backup, so what are my options here</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674670">40</a> by Raymond Camden
		posted on 3/2/2014 at 9:05 PM
		</div>
		<div class="comment_text"><p>The link provided showed how you can modify the JDBC connection. You can do that in the CF Admin.</p></div>
	</div>
</div>
		