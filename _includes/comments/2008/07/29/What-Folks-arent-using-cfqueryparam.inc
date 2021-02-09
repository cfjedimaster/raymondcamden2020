
<div class="comment" id="c_1713684473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684473">1</a> by Chad
		posted on 7/29/2008 at 8:57 PM
		</div>
		<div class="comment_text"><p>I have this comic strip taped on my wall to always remind me of using cfqueryparam.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fxkcd.com%2F327%2F%3AxV6Hs_5WQtGWVARTXLUJAkZdTcw&amp;cuid=3321886" rel="nofollow noopener" title="http://xkcd.com/327/">http://xkcd.com/327/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684486">2</a> by Mamdoh
		posted on 7/29/2008 at 11:24 PM
		</div>
		<div class="comment_text"><p>I would like to share with you this utility which designed by HP. The program call Scrawlr which scan any URL and finds SQL injection vulnerabilities.  It will crawl a website while simultaneously analyzing the parameters of each bage for SQL injection.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fdownload.spidynamics.com%2FProducts%2Fscrawlr%2F%3AVWDTvKhoADdy7bf3isd_VDhnmaE&amp;cuid=3321886" rel="nofollow noopener" title="https://download.spidynamics.com/Products/scrawlr/">https://download.spidynamic...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684483">3</a> by Rob Huddleston
		posted on 7/30/2008 at 6:13 AM
		</div>
		<div class="comment_text"><p>@Ray - Unfortunately, it doesn't surprise me in the least that many, if not most developers are not using cfqueryparam, and I can guess at precisely why: no one learns it.</p><p>I think most developers (of any technology) fall into three groups: 1) folks who have been doing it "forever"; 2) folks who took a class to learn it; and 3) folks who learn by reading a book.</p><p>The reality is that most of the folks in group 1 assume that they know everything about the language; things that have been added to CF since they learned it with version 1 are nice, but when a new version comes out, they will at best scan the docs for the "gee whiz" features. A single tag that improves security on queries? Not likely to garner much attention.</p><p>The folks in group 3 will get it - they will have read CFWACK (partly because it's really good, partly because there's not much other choice), and they will be in your camp of folks who think that not using it is crazy.</p><p>But that second group: lord help them. They signed up for a course at a local Adobe certified training center, so the only exposure they've had to CF is the horrible, horrible pathetic piss-poor excuse for an introduction to ColdFusion that is "Fast Track to ColdFusion." It never brings up cfqueryparam. Not once - even in the advanced course. Sadly, that's not even the worst of its sins, not by far. If they didn't take it at an Adobe certified center, then they may have taken it from a corporate training center that isn't certified, and thus probably got a one day course (yup, you read that right) written by ElementK, which is the only thing out there that manages to make the certified course look good. Or, they may have taken it at a community college, in which case their prof was probably someone from group 1 above.</p><p>So I would bet just about anything that the sad truth is that most CF developers just simply don't know about cfqueryparam, and so yes, SQL injection attacks can and will still happen.</p><p>What needs to be done to solve the problem? Well, there's really not much to do about the group 1 folks, and the group 3 folks are already OK. As for the folks in group 2, well, that's a much longer discussion for a different day, and I don't want to get too far astray. Maybe we can schedule an unofficial BOF at MAX in a bar somewhere for everyone that shutters when the words "adobe" and "certified" get used together.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684488">4</a> by Mat Evans
		posted on 7/30/2008 at 1:33 PM
		</div>
		<div class="comment_text"><p>Hi all,</p><p>Been thinking about this recently, and having some older sites that were written before I was around, there is quite a lot to do in some places.</p><p>Would it not also be sensible to stick a little checker in OnRequest to check all URL and FORM variables for characters that could cause a problem? (semi-colons, etc)  I can see problems with this, but I think there is a valid use for it somewhere..  assuming you can read URL and FORM vars from onRequest, can't say i've ever tried.</p><p>Is there anything like this already? Had a look on RIAForge but couldn't find anything related.</p><p>Any observations I have missed? I am NOT proposing this as a replacement for cfqueryparam, just maybe a quick way of minimising the problem while it is fixed.</p><p>Cheers<br>Mat</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684492">5</a> by James Allen
		posted on 7/30/2008 at 2:45 PM
		</div>
		<div class="comment_text"><p>@Matt</p><p>This is exactly what I did when a big e-commerce site I built was attacked.. Or rather I had a scanner in place which alerted me to the first set of attacks so no damage was done, but then I just thought I'd check the logs in case they had got past it (which I didn't expect).. Guess what? I began to witness in almost realtime (via log downloads) an attack in progress that was attempting to rip off personal data from the D/B. They actually gained access to the admin system.. (Not having the admin URL on /admin is a GOOD idea).. However I was able to shut them down before they got any real data.. Phew.</p><p>Anyway, I do think the URL and Form filter is a good idea although by no means a proper solution. I implemented this on many of my sites as a first level of defense. I also added a global error handler to ensure no useful data could be exposed to the hackers. The filter has caught many an attack but the correct way of doing this it to ensure all queries use cfqueryparam.</p><p>I'm not using Transfer which takes care of a lot of this risk but making sure that every list query I build manually uses cfqueryparam...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684491">6</a> by Garry
		posted on 7/30/2008 at 3:05 PM
		</div>
		<div class="comment_text"><p>Am I right in thinking that an Access datasource isn't vunerable to SQL injection? If so, this might be why many developers who start in M$ Access and move to SQL never understand the problems?</p><p>And to be honest, when I first started using CF, back in about 1998 I never knew about the function, concentrating on just getting the code/site delivered to the client (and getting paid was more important than RTFM...)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684490">7</a> by Matt Osbun
		posted on 7/30/2008 at 3:50 PM
		</div>
		<div class="comment_text"><p>@Mat</p><p>*In Theory* this is a workable solution.</p><p>Sadly, theories don't always play out.  XSS, XSRF, and SQL Injection are difficult to manually filter- which is why web application firewalls are getting a lot of attention.</p><p>It wouldn't be a bad idea, I think, to set up a web application firewall (I don't know any of them well enough to recommend) on an older site to give you the breathing room you need to make improvements like cfqueryparam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684493">8</a> by Raymond Camden
		posted on 7/30/2008 at 4:16 PM
		</div>
		<div class="comment_text"><p>@RobH: This is a bit OT now, but it's sad to hear about the FTCF course. I remember taking it (I had to as a prereq to teaching) and it was quite intense - 3 days full of training. I remember it doing a good job, but honestly don't remember it they mentioned cfqueryparam back then (this was quite some time ago). I've toyed with the idea of doing CF training myself, over Breeze, but never got around to it while I was a contractor.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684489">9</a> by mamdoh
		posted on 7/30/2008 at 5:49 PM
		</div>
		<div class="comment_text"><p>For the security reason I stopped using Microsoft access and start to use SQL server or MSDE. And I don't use online stream query but I use Stored Procedures and CFStoredProc tag to execute them.  Store procedures not just more secure but faster to process.</p><p>Keep the good work Ray<br>Mamdoh</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684494">10</a> by Raymond Camden
		posted on 7/30/2008 at 5:57 PM
		</div>
		<div class="comment_text"><p>Warning, OT story I've told before (I'm old, I'm allowed to repeat):</p><p>I wrote DeathClock (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.deathclock.com%3ARMcpxh78b_4urVYlK-C9nKHXAzE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.deathclock.com">http://www.deathclock.com</a>) way back in 90something or another. The first iteration was Perl. When I switched to CF, I used Access for the db. I couldn't afford (and was too cheap) to use SQL Server. Access worked fine, even with the high traffic (4+ million page views per month), but I cached the heck out of things.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684499">11</a> by Chad
		posted on 7/30/2008 at 7:05 PM
		</div>
		<div class="comment_text"><p>I always though Access was safer because it could not do sub queries.  Which is what most SQL injections are.</p><p>By sub queries i mean tacking on a query to the WHERE section of the query to drop a table or delete records.  Last i knew Access could not do them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684496">12</a> by Mike Hodgson
		posted on 7/30/2008 at 7:56 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Thanks for the info and links!</p><p>As a relatively new Coldfusion developer (2 1/2 years), I've always used cfqueryparam in my code.</p><p>Unfortunately, I'm also responsible for maintaining many older apps, some up to 10 years old! Daryl and Peter's scanners have reduced DAYS of code auditing to just a few hours.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684495">13</a> by Dan
		posted on 7/31/2008 at 8:25 PM
		</div>
		<div class="comment_text"><p>MySQL gives you the option to disallow more than one query in a request.</p><p>I think having this enabled alone would prevent almost all injections, but combined with cfqueryparam you should be pretty safe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684498">14</a> by Paul Dynan
		posted on 10/21/2009 at 8:10 PM
		</div>
		<div class="comment_text"><p>I've been using it more and more comprehensivily, but I keep having problems w/ date/time.  It seems to be the only time I need to use CFSQLTYPE.  I found my Now()s weren't getting inseted/updated w/ time w/o using CF_SQL_TIMESTAMP.</p><p>Now I seem to have a problem using it to select.  I have this date:<br>&lt;CFSET temp = CreateDateTime(2009, 10, 17, 0, 0, 0)&gt;<br>&lt;CFSET date17 = CreateODBCDateTime(temp)&gt;</p><p>None of the following seem to work w/o a type error on a select (CF7, SQL datetime column):<br>&lt;CFQUERYPARAM VALUE="#date17#"&gt;<br>&lt;CFQUERYPARAM VALUE="#date17#" CFSQLTYPE="CF_SQL_TIMESTAMP"&gt;<br>&lt;CFQUERYPARAM VALUE="#date17#" CFSQLTYPE="CF_SQL_DATE"&gt;<br>&lt;CFQUERYPARAM VALUE="#date17#" CFSQLTYPE="CF_SQL_DATETIME"&gt;</p><p>Can you let me know where I'm going wrong? My searches make me feel like I'm the only one getting hung up here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684497">15</a> by Raymond Camden
		posted on 10/21/2009 at 8:11 PM
		</div>
		<div class="comment_text"><p>Get rid of the createODBCDateTime.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684475">16</a> by Paul Dynan
		posted on 10/21/2009 at 8:16 PM
		</div>
		<div class="comment_text"><p>EDIT:  My tests of those other types did produce results.  I just had the wrong page loaded.</p><p>I still have the question about cfqueryparam and dates.  Is this type the only exception to the rule, where it needs cfsqltype?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684476">17</a> by Paul Dynan
		posted on 10/21/2009 at 8:26 PM
		</div>
		<div class="comment_text"><p>Removing the createODBCDateTime didn't work, and it also seems to throw a fit if I use cfsqtype in a cfqueryparam in a WHERE statement in an update:</p><p>UPDATE users<br>SET	suUpdate = suSUUpdateDate<br>WHERE suUpdate= &lt;CFQUERYPARAM VALUE="#date17#" CFSQLTYPE="CF_SQL_TIMESTAMP"&gt;</p><p>I love this tag, so it's frustrating that date values seem to have so many rules (seemingly).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684474">18</a> by Raymond Camden
		posted on 10/21/2009 at 8:28 PM
		</div>
		<div class="comment_text"><p>Whats the database column type for suUpdate?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684477">19</a> by Paul Dynan
		posted on 10/21/2009 at 8:36 PM
		</div>
		<div class="comment_text"><p>Sorry again...the error there was again mine (not havign a good run here), and sorry for wasting your time again.  The update runs fine...</p><p>...but again, only w/ the cfsqltype.  So, again, my only confusion is why date/time seems to have problems w/o it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684478">20</a> by Paul Dynan
		posted on 10/26/2009 at 10:44 PM
		</div>
		<div class="comment_text"><p>I just wanted to follow up from my last post...in part because I probably sounded like a nutcase.</p><p>I set up a simple test, w/ an new table, and attempted to just insert a date (col is datetime) using cfqueryparam:<br>&lt;CFQUERY DATASOURCE="#APPLICATION.data_dsn#" NAME="add_date"&gt;<br>	INSERT INTO test_tbl (tDate)<br>	VALUES (&lt;CFQUERYPARAM VALUE="#Now()#"&gt;)<br>&lt;/CFQUERY&gt;</p><p>That gets me "Conversion failed when converting datetime from character string" (I also tried ParseDateTime(Now())).</p><p>Adding CFSQLTYPE="CF_SQL_DATE" works, and passes {ts '2009-10-26 14:30:06'}, but only 2009-10-26 00:00:00 shows up in the table.  As I mentioned before, CF_SQL_TIMESTAMP fixes this.  It also has the same behavior in SELECT statments.</p><p>So far, this seems to just be a problem w/ Now(), since &lt;CFQUERYPARAM VALUE="1/2/2008 13:45"&gt; works fine w/o a type.  As does Now() if used w/ DateFormat/TimeFormat.  The same is true of CreateODBCDateTime and CreateDateTime, and only working w/ Date/Time formats.</p><p>I think I understand now how to use date/time w/ CFQueryParam, but I guess I'm just confused about this aspect of it, and date/time alone needing this special attention.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684480">21</a> by Raymond Camden
		posted on 10/26/2009 at 10:53 PM
		</div>
		<div class="comment_text"><p>Holy smokes thats a lot. :)</p><p>So a cfqueryparam w/o a type means varchar which means string. You don't want to use that for dates.</p><p>If you want a full date/time, then you want timestamp. Period. If you use now() along with timestamp, it should work fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684479">22</a> by Paul Dynan
		posted on 10/26/2009 at 11:26 PM
		</div>
		<div class="comment_text"><p>Yes, except that cfqueryparam w/o a type that is a number is not a string.  My understanding of cfQP (I'm tired of typing it out ;) ) was that it checked w/ the DB what the col type was, and validated the data.  I guess it was my assumption it would see ODBC-formatted time correctly, as it does w/o using cfQP.</p><p>You can get away w/ not using CFSQLTYPE as long as you use DateFormat() and TimeFormat().  I'm thinking this is almost preferable, unless you're going to be in the habit of using CFSQLTYPE.  Although, one could argue this just means you now need to be in the habit of formatting your dates.</p><p>I guess this all just seems like the CF version of an "i before e..." kind of thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684482">23</a> by Raymond Camden
		posted on 10/26/2009 at 11:29 PM
		</div>
		<div class="comment_text"><p>Nope, according to the docs, if you leave the type off, the default is CF_SQL_CHAR.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684485">24</a> by Paul Dynan
		posted on 10/26/2009 at 11:43 PM
		</div>
		<div class="comment_text"><p>You are correct, sir! ;)</p><p>I guess I had missed or overlooked that in my indoctrination into cfQP.  I also mislead myself in how well it seemed to handle numerics any fuss.</p><p>Thanks for sticking w/ my through this line of posts.  I'm going to work out a personal best practice going forward.</p></div>
	</div>
</div>
		