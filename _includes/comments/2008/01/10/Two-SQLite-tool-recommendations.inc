
<div class="comment" id="c_1713676105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676105">1</a> by Anuj Gakhar
		posted on 1/10/2008 at 8:33 PM
		</div>
		<div class="comment_text"><p>Not an expert Ray but would like to hear about your date problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676126">2</a> by Raymond Camden
		posted on 1/10/2008 at 8:35 PM
		</div>
		<div class="comment_text"><p>I'm getting confusing feedback on the AIR side if AIR+SQLite supports true date columns. It seems like it does. And I know the tools I use to look at my db say my column is a date.</p><p>But I'm trying to do a simple date comparison. Ie, get * from hours where date &gt; today and nothing I try seems to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676127">3</a> by Anuj Gakhar
		posted on 1/10/2008 at 8:44 PM
		</div>
		<div class="comment_text"><p>hmm, Is date the name of your column by any chance? sounds like a reserved word to me..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676129">4</a> by Raymond Camden
		posted on 1/10/2008 at 8:46 PM
		</div>
		<div class="comment_text"><p>I thought so as well. Thing is - I can select date form hours and it works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676114">5</a> by Anuj Gakhar
		posted on 1/10/2008 at 8:49 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.sqlite.org%2Fdatatypes.html%3AhbtLwy8p5SDE9inNcPuKOnT5Djc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.sqlite.org/datatypes.html">http://www.sqlite.org/datat...</a></p><p>Look at this, it says Sqlite is Typeless. Everything is considered as a string. It might be best to save dates as numerics and then do a comparison.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676113">6</a> by Anuj Gakhar
		posted on 1/10/2008 at 9:04 PM
		</div>
		<div class="comment_text"><p>var now:Date = new Date();<br>var currentTime:Number = now.getTime();</p><p>that should give you the number of seconds since January 1, 1970. Pretty good to use that for date comparisons.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676108">7</a> by Erki Esken
		posted on 1/10/2008 at 10:38 PM
		</div>
		<div class="comment_text"><p>With SQLite JDBC driver from <a href="http://disq.us/url?url=http%3A%2F%2Fwww.zentus.com%2Fsqlitejdbc%2F%3Ac9jc3Mdc2k-S_kExyCG3mV9W8vI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.zentus.com/sqlitejdbc/">http://www.zentus.com/sqlit...</a> I actually use my favourite SQL editor Aqua Data Studio to edit AIR embedded databases. Works great. Same JDBC driver should be able to get your local CF to talk to AIR DBs as well.</p><p>To get it to work you add SQLite JDBC driver to your java path, and then datasource URL is something like "jdbc:sqlite:/path/to/airapp.db" and driver is "org.sqlite.JDBC".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676110">8</a> by mloncaric
		posted on 1/10/2008 at 11:55 PM
		</div>
		<div class="comment_text"><p>Check this project:<br><a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fp%2Fasqlib%2F%3Ag4srouAZiLG5ed8NikuQu7tJwnA&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/p/asqlib/">http://code.google.com/p/as...</a></p><p>Instead of writing sql statements all by yourself, those classes can ganerate sql statements for you. It's still work in progress, so expect changes - more classes for larger sql support.</p><p>Have a nice day.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676109">9</a> by shag
		posted on 1/11/2008 at 12:42 AM
		</div>
		<div class="comment_text"><p>sqlite is typeless with suggestions, but supports suggested types.  my only experiece with sqlite is within trac, so I am not sure if the date store was specific to trac implementation or sqlite.  either way, here is how I got similar request to work:</p><p>where datetime(t.time, 'unixepoch', 'localtime') &gt; datetime('now', '-25 days', 'localtime')</p><p>the site that documents the datetime function is here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.sqlite.org%2Fcvstrac%2Fwiki%3Fp%3DDateAndTimeFunctions%3Aqpw_roEQrZz8Ss2lM04aM28dRE8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.sqlite.org/cvstrac/wiki?p=DateAndTimeFunctions">http://www.sqlite.org/cvstr...</a><br>hope this helps</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676111">10</a> by Raymond Camden
		posted on 1/11/2008 at 12:50 AM
		</div>
		<div class="comment_text"><p>shag - that throws an error for me when I use the SQLite AIR app:</p><p>Error:</p><p>near "unixecpoch": syntax error</p><p>My precise sql:</p><p>select *<br>from hours<br>where datetime(<a href="http://disq.us/url?url=http%3A%2F%2Fhours.date%3AHn3OBRJDncD4BksVkSOwhQhlC4I&amp;cuid=3321886" rel="nofollow noopener" title="hours.date">hours.date</a>, 'unixepoch', 'localtime') &gt; datetime('now', '-25 days', 'localtime')</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676112">11</a> by J
		posted on 1/11/2008 at 4:08 AM
		</div>
		<div class="comment_text"><p>Another tool I have found useful is: -</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.sqlmaestro.com%2Fproducts%2Fsqlite%2F%3AZ5jnNmfS2hYsuOxrLNmK9q99Kms&amp;cuid=3321886" rel="nofollow noopener" title="http://www.sqlmaestro.com/products/sqlite/">http://www.sqlmaestro.com/p...</a></p><p>Christophe's tool is also useful (as u mentioned)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676117">12</a> by shag
		posted on 1/11/2008 at 9:21 AM
		</div>
		<div class="comment_text"><p>sorry ray.  i am working on some assumptions here.  did you try this already?</p><p>    select * from hours<br>    where date &gt; date('now')</p><p>if it doesn't work, i would ask for your create table statement and/or what your data looks like when you select it.  i feel certain this is in the format of your data.</p><p>also, to one of the other posts, aqua data is a great tool.  it natively connects to all the major db's, and will connect to anything else with an odbc or jdbc driver.  it is a very sweet tool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676115">13</a> by Raymond Camden
		posted on 1/11/2008 at 7:28 PM
		</div>
		<div class="comment_text"><p>Shag - can you download my app? You can find it here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2008%2F1%2F9%2FWorking-with-Flex-AIR-and-SQL-2%3AyPEg4cIEN2VVC6yiwdxUvfJZc48&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2008/1/9/Working-with-Flex-AIR-and-SQL-2">http://www.coldfusionjedi.c...</a></p><p>Enter a project, client, then a few hours, and you will have sample data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676116">14</a> by Gareth
		posted on 1/12/2008 at 1:32 AM
		</div>
		<div class="comment_text"><p>Hey Ray,<br>Looking at your date values, it looks like they're getting entered strangely into the dB.  It looks like it's adding milliseconds to the date.  It shows up in SQLite Manager as 1199941200000, but when converting back to a string date, this will not convert properly.  However, if you remove the last 3 zeros, it comes back correctly at 2008-10-1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676118">15</a> by Raymond Camden
		posted on 1/12/2008 at 1:33 AM
		</div>
		<div class="comment_text"><p>I thought maybe I was entering data wrong. Let me play with that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676119">16</a> by Raymond Camden
		posted on 1/12/2008 at 1:40 AM
		</div>
		<div class="comment_text"><p>That seems to have doen it. Now I need to figure out how to get stuff for today. date &gt; date('now') doesn't seem to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676120">17</a> by Gareth
		posted on 1/12/2008 at 1:58 AM
		</div>
		<div class="comment_text"><p>How about this</p><p>SELECT * from hours<br>where date('now') &lt;= date(date, 'unixepoch')</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676122">18</a> by Raymond Camden
		posted on 1/12/2008 at 2:07 AM
		</div>
		<div class="comment_text"><p>No go. No error, but no results. Even if I switch &lt; to &gt;.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676121">19</a> by Gareth
		posted on 1/12/2008 at 2:24 AM
		</div>
		<div class="comment_text"><p>It looks like the time might be a little screwy.  If you enter 1200000000 as the date, it says that it is 2008-1-10 (correct), but if you enter 1200014000, it says that it is 2008-1-11 (incorrect, actually 2008-1-10 20:13:20), so I'm not sure if it's doing something with GMT or something weird like that.  2008-1-11 starts from 1200027600.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676125">20</a> by Gareth
		posted on 1/12/2008 at 2:28 AM
		</div>
		<div class="comment_text"><p>Ah, ha!  Looks like that is what it is :)  If you use this date 1200027600 (2008-1-10 19:00:00) it shows as 2008-1-11.  But change that to 1200027599, 1 second earlier, and it returns 2008-1-10.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676123">21</a> by Gareth
		posted on 1/12/2008 at 2:52 AM
		</div>
		<div class="comment_text"><p>I apologize to all of the subscribers for all of my posts.</p><p>Try this<br>SELECT *<br>FROM hours<br>WHERE date('now', 'localtime') &lt;= date(date, 'unixepoch', 'localtime')</p><p>This will add 5 hours to the date time (if you are EST) to account for the time difference from GMT.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676124">22</a> by Raymond Camden
		posted on 1/12/2008 at 2:55 AM
		</div>
		<div class="comment_text"><p>Still now working for me, but maybe I'm still storing it bad. When I do a generic select with no filter, I have</p><p>1/11/08</p><p>Should I have store 2008-11-1 instead?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676128">23</a> by shag
		posted on 1/12/2008 at 3:40 AM
		</div>
		<div class="comment_text"><p>ok, after much fumbling around (you wouldn't believe the self inflicted issues i had with this), i finally got this up and going.  i was about to ask for your changes after @gareth's post.  then realized, i could just drop the 0's myself. that having been said, here you are:</p><p>select * from hours<br>where datetime(<a href="http://disq.us/url?url=http%3A%2F%2Fhours.date%3AHn3OBRJDncD4BksVkSOwhQhlC4I&amp;cuid=3321886" rel="nofollow noopener" title="hours.date">hours.date</a>, 'unixepoch', 'localtime') &gt; date('now')</p><p>if this doesn't work, then please post/send the updated code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676136">24</a> by shag
		posted on 1/12/2008 at 3:46 AM
		</div>
		<div class="comment_text"><p>sorry, the 'localtime' isn't necessary.  i also just realized I used &gt; vs &gt;=, and it worked.  looks like sqlite uses different tie breaking logic.  i would suggest &gt;= in case future changes to sqlite.</p><p>select * from hours<br>where datetime(<a href="http://disq.us/url?url=http%3A%2F%2Fhours.date%3AHn3OBRJDncD4BksVkSOwhQhlC4I&amp;cuid=3321886" rel="nofollow noopener" title="hours.date">hours.date</a>, 'unixepoch') &gt;= date('now')</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676135">25</a> by Gareth
		posted on 1/12/2008 at 4:42 AM
		</div>
		<div class="comment_text"><p>@Ray,<br>I'm not sure why it's not working.  If it returns the date correctly, I'm guessing that it should be working.  What do you get if you type in</p><p>select date('now') from hours</p><p>(just to see what is returned when you select "now")?</p><p>Another thing to try is messing around with the unixepoch dates and see if you can get it to return something.  I went to this page <a href="http://disq.us/url?url=http%3A%2F%2Fwww.esqsoft.com%2Fjavascript_examples%2Fdate-to-epoch.htm%3AaJoqJVEsMYKFfoq1S-_ZBmPGuzA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.esqsoft.com/javascript_examples/date-to-epoch.htm">http://www.esqsoft.com/java...</a><br>and grabbed some converted dates and put them into the query to test against and see what was returned.</p></div>
	</div>
</div>
		