
<div class="comment" id="c_1713623089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623089">1</a> by Ryan Guill
		posted on 12/2/2005 at 1:23 AM
		</div>
		<div class="comment_text"><p>LOL, from the title on your post I thought you were having trouble with your mistress ;)</p><p>I have done your final way before, but I think you could also do cfqueryparam cfsqltype="cf_sql_date" value="#dateFormat(yesterday,"mm/dd/yyyy")#"</p><p>That should work, you may have to tweak the dateformat to get it to work with sql server, im not sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623091">2</a> by Brian Rinaldi
		posted on 12/2/2005 at 1:41 AM
		</div>
		<div class="comment_text"><p>I think you could do something like this using pure SQL:<br>select   fullsize, caption, id<br>from   mtnphotos<br>where   sentviaemail &gt;= LEFT(DATEADD(day, -1, getDate()),11)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623090">3</a> by Scott Stroz
		posted on 12/2/2005 at 1:58 AM
		</div>
		<div class="comment_text"><p>You could also have done:</p><p>select   fullsize, caption, id<br>   from   mtnphotos<br>   where   DATEDIFF(day,sentviaemail,getDate()) = 1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623092">4</a> by Steve Bryant
		posted on 12/2/2005 at 1:58 AM
		</div>
		<div class="comment_text"><p>DATEADD(dd, DATEDIFF(dd,0,getdate()), -1) will work in SQL Server.</p><p>If you will excuse the self-reference, I have some more information about this sort of thing here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fsteve.coldfusionjournal.com%2Fextracting_date_from_sql_server_datetime.htm%3AN5C6S89Klpa77JbJvVTbh-0yp0o&amp;cuid=3321886" rel="nofollow noopener" title="http://steve.coldfusionjournal.com/extracting_date_from_sql_server_datetime.htm">http://steve.coldfusionjour...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623093">5</a> by Christopher Wigginton
		posted on 12/2/2005 at 2:48 AM
		</div>
		<div class="comment_text"><p>In Oracle, this should work</p><p>TO_DATE(TO_CHAR(myDate,'MM/DD/YYYY'),'MM/DD/YYYY') &gt;= (TO_DATE(TO_CHAR(sysdate,'MM/DD/YYYY'),'MM/DD/YYYY')  - INTERVAL '1' DAY)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623096">6</a> by Christopher Wigginton
		posted on 12/2/2005 at 2:55 AM
		</div>
		<div class="comment_text"><p>DOH! <br>Completely forgot about the Oracle TRUNC function which trims a date to 12 A.M. midnight</p><p>MYDATE &gt;= TRUNC(SYSDATE)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623097">7</a> by Toby
		posted on 12/2/2005 at 3:06 AM
		</div>
		<div class="comment_text"><p>Am I wrong in thinking the best solution might be</p><p>sentviaemail &gt;= #CreateODBCDate(DateAdd('d',-1,Now()))# ?</p><p>That makes it database neutral, which I think is always a good idea.</p><p>Obviously, the way your intern wrote the code, once you roll over to the first of the month, the Day() part suddenly jumps to the end of the month.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623099">8</a> by Raymond Camden
		posted on 12/2/2005 at 3:08 AM
		</div>
		<div class="comment_text"><p>That would chop off the time, right, then if so, that would work as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623102">9</a> by Tjarko
		posted on 12/2/2005 at 3:12 AM
		</div>
		<div class="comment_text"><p>From now until the time yesterday:<br>where sentviaemail BETWEEN dateadd(d,-1,getdate()) AND getdate()</p><p>If you want to have it from yesterday 00:00:00 hours until today<br>where convert(int,sentviaemail) BETWEEN convert(int,dateadd(d,-1,getdate())) AND convert(int,getdate())</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623103">10</a> by Scott Stroz
		posted on 12/2/2005 at 3:17 AM
		</div>
		<div class="comment_text"><p>Correection on mine...it should be:</p><p>select fullsize, caption, id<br>from mtnphotos<br>where DATEDIFF(day,sentviaemail,getDate()) &lt; 1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623098">11</a> by Toby
		posted on 12/2/2005 at 3:21 AM
		</div>
		<div class="comment_text"><p>Ray,<br>It should chop off the time, but if you wanted to be sure you could use this instead:</p><p>sentviaemail &gt;= #CreateODBCDate(DateAdd('d',-1,DateFormat(Now())))#</p><p>which ensures that only the date is used. If you wanted, you could also use CreateODBCDateTime, just so you could verify (in Query debugging, for instance) that the value for Dec 1 (for example) was actually {ts '2005-11-30 00:00:00'}.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623100">12</a> by Toby
		posted on 12/2/2005 at 3:26 AM
		</div>
		<div class="comment_text"><p>Guess who didn't read the whole post?  I always seem to miss that "More" link. So, sorry if my posts seem a little weird.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623108">13</a> by Tjarko
		posted on 12/2/2005 at 3:27 AM
		</div>
		<div class="comment_text"><p>On second thought... it should be this..oeps..</p><p>WHERE convert(int,log_regdate) BETWEEN convert(int,dateadd(d,-2,getdate())) AND convert(int,dateadd(d,1,getdate()))</p><p>Then you get everything from yesterday and today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623101">14</a> by Mike Rankin
		posted on 12/2/2005 at 7:29 AM
		</div>
		<div class="comment_text"><p>Whew!  I'm glad we finally got that cleared up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623105">15</a> by Patrick McElhaney
		posted on 12/2/2005 at 6:02 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I've run into this problem often enough that I added variable called <a href="http://disq.us/url?url=http%3A%2F%2Frequest.today%3ADgrn4FlJuYKbXNsZSrFERXJUfLc&amp;cuid=3321886" rel="nofollow noopener" title="request.today">request.today</a> to my application.cfm.</p><p>There's still a teeny-tiny bug with your current implementation. But I'm not going to tell you what it is. That would spoil all the fun. ;-)</p><p>Patrick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623104">16</a> by Nkosi
		posted on 12/2/2005 at 6:07 PM
		</div>
		<div class="comment_text"><p>Using Oracle:</p><p>where sentviaemail &gt;= sysdate - 1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623106">17</a> by Phillip Senn
		posted on 12/2/2005 at 6:27 PM
		</div>
		<div class="comment_text"><p>Page 195 of SQL Server bible says<br>"The easiest way to get just the daet - stripping off the time, is to use a couple string functions:</p><p>Select Convert(Char(10), GetDate(), 101) as DateTime</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623107">18</a> by Raymond Camden
		posted on 12/2/2005 at 7:09 PM
		</div>
		<div class="comment_text"><p>You got me Patrick. I certainly don't see it. If you could tell me though I'd appreciate it as this live on a site now. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623112">19</a> by tony petruzzi
		posted on 12/2/2005 at 7:51 PM
		</div>
		<div class="comment_text"><p>Ah-ha!!!</p><p>Philip, you fell into the trap that I did. Although your solution will give you just the date without the time, it is returning the date as a char and not a date. What this means is that if you now do an order by, the dates will not sort correctly. Thus the way around this to to cast the return as a datetime:</p><p>SELECT CAST(CONVERT(char(10), getdate(), 101) AS datetime) AS mytime</p><p>Then you can use CF DateFormat() to trim out the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623110">20</a> by Patrick McElhaney
		posted on 12/2/2005 at 8:02 PM
		</div>
		<div class="comment_text"><p>Don't worry. The bug will only affect one out of every hundred billion or so transactions.</p><p>Patrick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623117">21</a> by Raymond Camden
		posted on 12/2/2005 at 8:07 PM
		</div>
		<div class="comment_text"><p>Well, I know that both myself, and my readers, would probably be very interested. Why not just say what the issue is?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623119">22</a> by Steve Bryant
		posted on 12/2/2005 at 8:19 PM
		</div>
		<div class="comment_text"><p>Could it be some weird thing where the code is run around midnight and the difference in the time on your web server and your database server are such that the date calculation doesn't match and so the result is effectively one day off?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623115">23</a> by Patrick McElhaney
		posted on 12/2/2005 at 8:27 PM
		</div>
		<div class="comment_text"><p>Ray, when you find out what the bug is I doubt you'll even bother to fix it. And you may even question whether it qualifies as a "bug."</p><p>I only mentioned it because you "love bug hunting." And I imagine many of your readers do, too. It's a game. Play along. :)</p><p>Steve, you're getting close.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623118">24</a> by Steve Bryant
		posted on 12/2/2005 at 8:34 PM
		</div>
		<div class="comment_text"><p>OK. So, the flip-side of the same problem is that someone accesses the site from the other side of the international date-line than the server and so what is "today" for them isn't "today" for the server. Again providing results that are one day off (from the perspective of the user).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623120">25</a> by Patrick McElhaney
		posted on 12/2/2005 at 8:54 PM
		</div>
		<div class="comment_text"><p>I'm not concerned about "one day off" errors. As long as the value for "today" is correct according to someone's perspective, it's okay.</p><p>I'm talking about an edge case where the value for today would be off by many days.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623122">26</a> by Raymond Camden
		posted on 12/2/2005 at 8:57 PM
		</div>
		<div class="comment_text"><p>Are you saying then the dateAdd itself would go wrong? I'm very curious now. Please just go ahead and -say- what the issue is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623123">27</a> by Patrick McElhaney
		posted on 12/2/2005 at 9:22 PM
		</div>
		<div class="comment_text"><p>The issue is with createDate(year(now()), month(now()), day(now())).</p><p>Let's say that code is run just before midnight on November 30.</p><p>year(now()) = 2005</p><p>month(now()) = 11</p><p>day(now()) = 30</p><p>But what if the clock strikes midnight right before day(now()) runs? It's now Dec 1, so the day(now()) = 1.</p><p>CreateDate() is called with the values (2005, 11, 1). The variable "today" is about a month off.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623125">28</a> by Raymond Camden
		posted on 12/2/2005 at 9:30 PM
		</div>
		<div class="comment_text"><p>Hmmm. Now -that- is a very very unique case. Ah. So the answer than is just to replace now() with a variable. So you only calculate the time once.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623124">29</a> by Phillip Senn
		posted on 12/2/2005 at 11:24 PM
		</div>
		<div class="comment_text"><p>USE Northwind<br>GO<br>SELECT ORDERDATE,<br>CONVERT(char(10), DateAdd(Day,1,OrderDate), 101) AS DateBeforeOrderDate<br>FROM ORDERS<br>ORDER BY ORDERDATE</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623127">30</a> by Phillip Senn
		posted on 12/2/2005 at 11:26 PM
		</div>
		<div class="comment_text"><p>-1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623128">31</a> by Scott Stroz
		posted on 12/3/2005 at 12:35 AM
		</div>
		<div class="comment_text"><p>For those who may have missed it, here is a CF-free solution that works.</p><p>select fullsize, caption, id<br>from mtnphotos<br>where DATEDIFF(day,sentviaemail,getDate()) &lt;= 1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623130">32</a> by Brian Cheung
		posted on 12/7/2005 at 4:13 AM
		</div>
		<div class="comment_text"><p>Heh, it's funny. I used to see this quite alot. Company working in the finance always want to see dates and times :P<br>Normally I just escape this with CreateODBCDate(DateAdd("d", -1, Now())<br>You can replace Now() with any variable you want and you'll always have the day before the day you have as variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623129">33</a> by Brian Cheung
		posted on 12/7/2005 at 4:15 AM
		</div>
		<div class="comment_text"><p>Ugh nvm about my post, someone said that already ;)</p></div>
	</div>
</div>
		