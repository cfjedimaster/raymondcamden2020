
<div class="comment" id="c_1713708681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708681">1</a> by Rick O
		posted on 9/19/2008 at 12:32 AM
		</div>
		<div class="comment_text"><p>I generally have a table called Today in most large databases I work with.  There's a scheduled task to rebuild this table each night at midnight.  The table holds all of the different date functions that I find useful, and grows with more columns over time as I need them.</p><p>For example, here's one that I have now:</p><p>SELECT 0 AS DateOffset,<br>DATEADD(DAY,DAY(GETDATE())-1,DATEADD(MONTH,MONTH(GETDATE())-1,DATEADD(YEAR,YEAR(GETDATE())-2006,{d '2006-01-01'}))) AS Today,<br>DATEADD(MONTH,MONTH(GETDATE())-1,DATEADD(YEAR,YEAR(GETDATE())-2006,{d '2006-01-01'})) AS ThisMonth,<br>DATEADD(MONTH,MONTH(GETDATE())-2,DATEADD(YEAR,YEAR(GETDATE())-2006,{d '2006-01-01'})) AS LastMonth,<br>DAY(DATEADD(DAY,-1,DATEADD(MONTH,1,DATEADD(DAY,1-DAY(GETDATE()),GETDATE())))) AS DaysInMonth,<br>CONVERT(FLOAT,DAY(GETDATE())) / CONVERT(FLOAT,DAY(DATEADD(DAY,-1,DATEADD(MONTH,MONTH(GETDATE()),DATEADD(YEAR,YEAR(GETDATE())-2006,{d '2006-01-01'}))))) AS PercentOfMonth,<br>DATEADD(DAY,1-DATEPART(WEEKDAY,GETDATE()),DATEADD(DAY,DAY(GETDATE())-1,DATEADD(MONTH,MONTH(GETDATE())-1,DATEADD(YEAR,YEAR(GETDATE())-2006,{d '2006-01-01'})))) AS FirstDayOfWeek,<br>DATEPART(DAYOFYEAR,GETDATE()) AS DayOfYear,<br>DATEPART(DAYOFYEAR,DATEADD(DAY,-1,DATEADD(YEAR,YEAR(GETDATE())-1999,{d '2000-01-01'}))) AS DaysInYear,<br>CONVERT(FLOAT,DATEPART(DAYOFYEAR,GETDATE())) / CONVERT(FLOAT,DATEPART(DAYOFYEAR,DATEADD(DAY,-1,DATEADD(YEAR,YEAR(GETDATE())-1999,{d '2000-01-01'})))) AS PercentOfYear,<br>YEAR(GETDATE()) AS [Year],<br>DATEADD(YEAR,YEAR(GETDATE())-2000,{d '2000-01-01'}) AS FirstDayOfYear,<br>DATEADD(DAY,-1,DATEADD(YEAR,YEAR(GETDATE())-1999,{d '2000-01-01'})) AS LastDayOfYear</p><p>This way, I almost never have to do any dort of date manipulation in any queries.  Instead, queries look like this example, where we get all of the orders placed so far this month.</p><p>SELECT o.*<br>FROM Today AS t<br>INNER JOIN Orders AS o ON (o.OrderDate BETWEEN t.ThisMonth AND t.Today)</p><p>Personally, I find that sooo much easier to read than having to look at all that date math in the query.</p><p>Better yet, the table has a second row where that first column (DateOffset) equals -1, and that's the dates for yesterday.  Since we do sales, most of our reports are based on "Today" actually meaning "Close of Business Yesterday".  The join then just includes the extra (DateOffset = -1) and you are good to go.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708685">2</a> by Daniel D
		posted on 9/19/2008 at 6:48 AM
		</div>
		<div class="comment_text"><p>@Rick nice idea.  Had not thought of that.  <br>It is a nice extension of a days table that I use frequently.  For those that have never used a days table it is the same idea as the Today table mentioned above but has many day mine usualy has 1900-2050 or something like that.  With extra columns like Rick mentioned and things like is_business_day is_holiday, 3rn_business_day ...</p><p>That and numbers table are very usefull.  To do thing like take 5/2/2008 - 5/20/2008 and return a record for everyday and the count of sales for that day if there are any sales but return all day even those with out sales.</p><p>Select theday, count(sales)<br>from days_table left outer sales on theday = sale_date<br>where theday between 5/2/2008 and 5/20/2008<br>group by theday</p><p>How to create a numbers table <a href="http://disq.us/url?url=http%3A%2F%2Fwww.sqljunkies.com%2FWebLog%2Famachanic%2Farticles%2FNumbersTable.aspx%3AT8_UgBePzGitZbbZ6GQxzekqQnE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.sqljunkies.com/WebLog/amachanic/articles/NumbersTable.aspx">http://www.sqljunkies.com/W...</a><br>What a number table can do <br><a href="http://disq.us/url?url=http%3A%2F%2Fsqlserver2000.databases.aspfaq.com%2Fwhy-should-i-consider-using-an-auxiliary-numbers-table.html%3AMPdZO8-DpsBQL4fRr8O-_AwB-x4&amp;cuid=3321886" rel="nofollow noopener" title="http://sqlserver2000.databases.aspfaq.com/why-should-i-consider-using-an-auxiliary-numbers-table.html">http://sqlserver2000.databa...</a><br>And here is a similar page for days table<br><a href="http://disq.us/url?url=http%3A%2F%2Fsqlserver2000.databases.aspfaq.com%2Fwhy-should-i-consider-using-an-auxiliary-calendar-table.html%3AuHOpDabfEYaux9fk8EnCs8lBC5Q&amp;cuid=3321886" rel="nofollow noopener" title="http://sqlserver2000.databases.aspfaq.com/why-should-i-consider-using-an-auxiliary-calendar-table.html">http://sqlserver2000.databa...</a></p><p>Very useful tools</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708680">3</a> by Gary Gilbert
		posted on 9/19/2008 at 11:15 AM
		</div>
		<div class="comment_text"><p>@Ray</p><p>You days table sounds a lot like what in Business Intelligence is refered to as a "Time Dimension".  Pretty much can't find a single BI data warehouse without one. And I can't honestly think of building any serious reporting without a Time Dimension whether or not you are using MDX.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708676">4</a> by Andre
		posted on 9/19/2008 at 3:40 PM
		</div>
		<div class="comment_text"><p>I actually know a guy who's name is Gareth Supremepizzapants</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708687">5</a> by Chris Amaro
		posted on 9/19/2008 at 5:40 PM
		</div>
		<div class="comment_text"><p>@Ray &amp; @Rick - nice work, guys. Both of these are highly useful for real world tasks like getting that report to run for that sales director that just has to have statistics on every monday, wednesday and thursday of the second week of each month that ends in the letter "Y"...</p><p>bitter, party of one...now seating bitter...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708682">6</a> by Joe Danziger
		posted on 9/19/2008 at 8:23 PM
		</div>
		<div class="comment_text"><p>Also check out <a href="http://disq.us/url?url=http%3A%2F%2Fwww.datejs.com%2F%3AYFl2vjSzxW2C8MULjPFU4th2Jl4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.datejs.com/">http://www.datejs.com/</a> - it's a JavaScript library that should give the kind of date flexibility you're looking for.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708684">7</a> by Gareth
		posted on 10/30/2008 at 12:17 AM
		</div>
		<div class="comment_text"><p>Hi, managed to implement the coding from the example made but do not know how to set a default results when the page is first loaded. I get the following error message:</p><p>Attribute validation error for tag cfoutput.  <br>The value of the attribute query, which is currently rsShows, is invalid.</p><p>The error occurred in C:\Websites\150657pd8\test2.cfm: line 108</p><p>106 :   <br>107 :   <br>108 :   &lt;cfoutput query="rsShows"&gt;<br>109 :     &lt;div id="showsearchbox"&gt;<br>110 :       &lt;div id="header"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708691">8</a> by Raymond Camden
		posted on 10/30/2008 at 8:32 PM
		</div>
		<div class="comment_text"><p>Well it means you aren't running the queyr, rsShows, on test2.cfm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708688">9</a> by Gareth
		posted on 1/31/2009 at 10:59 PM
		</div>
		<div class="comment_text"><p>Hi, I have got the code working but want to have another form field added. However, I can't seem to work out how to get a default of "" for either the date or show type to show all results either on the choice of "ALL" or when the page loads, what am I missing? Here is my code:</p><p>&lt;cfquery name="rsShowType" datasource="amdram"&gt;<br>SELECT *<br>FROM tblshowtype <br>&lt;/cfquery&gt;</p><p>&lt;cfparam name="form.range" default=""&gt;<br>&lt;cfparam name="form.show_type" default=""&gt;</p><p>&lt;form action="&lt;cfoutput&gt;#cgi.script_name#&lt;/cfoutput&gt;" method="post"&gt;<br>  &lt;select name="range"&gt;<br>    &lt;option value="thisweek" &lt;cfif form.range is "thisweek"&gt;selected&lt;/cfif&gt;&gt;This Week&lt;/option&gt;<br>    &lt;option value="thisweekend" &lt;cfif form.range is "thisweekend"&gt;selected&lt;/cfif&gt;&gt;This Weekend&lt;/option&gt;<br>    &lt;option value="nextweek" &lt;cfif form.range is "nextweek"&gt;selected&lt;/cfif&gt;&gt;Next Week&lt;/option&gt;<br>  &lt;/select&gt;<br>  &lt;select name="show_type" class="sidebarx_select" id="show_type"&gt;<br>    &lt;option value=""&gt;Select Show Type&lt;/option&gt;<br>    &lt;option value=""&gt;&lt;/option&gt;<br>    &lt;option value=""&gt;All - &lt;/option&gt;<br>    &lt;cfoutput query="rsShowType"&gt;<br>      &lt;option value="#rsShowType.showtypeID#"&gt;#rsShowType.showtypeName#&lt;/option&gt;<br>    &lt;/cfoutput&gt;<br>  &lt;/select&gt;<br>  &lt;input type="submit" name="search" value="Search"&gt;<br>&lt;/form&gt;</p><p>&lt;cfif structKeyExists(form, "search")&gt;</p><p>&lt;cfset show_type = form.show_type&gt;</p><p>   &lt;!--- create date/time ranges based on search type ---&gt;<br>   &lt;cfswitch expression="#form.range#"&gt;</p><p>      &lt;!--- From now() till end of day saturday ---&gt;<br>      &lt;cfcase value="thisweek"&gt;<br>         &lt;cfset start = now()&gt;<br>         &lt;cfset end = dateAdd("d", 7 - dayOfWeek(now()), now())&gt;<br>         &lt;!--- redo end to be end of day ---&gt;<br>         &lt;cfset end = dateFormat(end, "m/d/yyyy") &amp; " 11:59 PM"&gt;<br>     &lt;/cfcase&gt;</p><p>      &lt;!--- this sat, but not before now(), to end of day sunday ---&gt;<br>     &lt;cfcase value="thisweekend"&gt;<br>         &lt;cfset start = dateAdd("d", 7 - dayOfWeek(now()), now())&gt;<br>         &lt;!--- redo start to be 12:00 am ---&gt;<br>         &lt;cfset start = dateFormat(start, "m/d/yyyy") &amp; " 12:00 AM"&gt;<br>         &lt;!--- if this is before now, reset to now() ---&gt;<br>     &lt;cfif dateCompare(start, now()) is -1&gt;<br>            &lt;cfset start = now()&gt;<br>     &lt;/cfif&gt;</p><p>         &lt;cfset end = dateAdd("d", 7 - dayOfWeek(now()) + 1, now())&gt;<br>         &lt;!--- redo end to be end of day ---&gt;<br>         &lt;cfset end = dateFormat(end, "m/d/yyyy") &amp; " 11:59 PM"&gt;</p><p>     &lt;/cfcase&gt;</p><p>      &lt;!--- next sunday, 12am till sat midnight ---&gt;<br>     &lt;cfcase value="nextweek"&gt;</p><p>         &lt;cfset start = dateAdd("d", 7 - dayOfWeek(now()) + 1, now())&gt;<br>         &lt;!--- redo start to be 12:00 am ---&gt;<br>         &lt;cfset start = dateFormat(start, "m/d/yyyy") &amp; " 12:00 AM"&gt;</p><p>         &lt;cfset end = dateAdd("d", 7 - dayOfWeek(now()) + 6, now())&gt;<br>         &lt;!--- redo end to be end of day ---&gt;<br>         &lt;cfset end = dateFormat(end, "m/d/yyyy") &amp; " 11:59 PM"&gt;</p><p>     &lt;/cfcase&gt;      <br>   &lt;/cfswitch&gt;</p><p>  &lt;cfquery name="results" dbtype="query" datasource="amdram"&gt;<br>   select   *<br>   FROM tblperformance, tblshow<br>   WHERE tblperformance.performancedate BETWEEN<br>   &lt;cfqueryparam cfsqltype="cf_sql_timestamp" value="#start#"&gt;<br>   AND<br>   &lt;cfqueryparam cfsqltype="cf_sql_timestamp" value="#end#"&gt;<br>   AND tblperformance.performanceShowINT = tblshow.showID<br>   AND tblshow.showTypeINT = &lt;cfqueryparam value="#show_type#"&gt;<br>   ORDER BY tblperformance.performancedate ASC<br>   &lt;/cfquery&gt;</p><p>&lt;cfoutput query="results"&gt;<br>#showName# - #LSDateFormat(results.PerformanceDate,'DDDD, MMMM DD, YYYY')#&lt;br&gt;<br>&lt;/cfoutput&gt;</p><p>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708686">10</a> by Raymond Camden
		posted on 2/1/2009 at 7:07 PM
		</div>
		<div class="comment_text"><p>Sorry, but I don't quite get your question.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708683">11</a> by Gareth
		posted on 2/2/2009 at 4:58 PM
		</div>
		<div class="comment_text"><p>Sorry Ray. I basically have got the page working to a point, however I want to have the search results display * ALL results if once of the drop down selects are not chosen. I.e user wants to see all shows that are on 'this week', without specifying the keyword or show type. Here is my revised code and can be seen at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.amdramtheatre.com%2Fwhatson.cfm%3A%3AP1mqWD2ql9oi59tU5IQG4YAkazo&amp;cuid=3321886" rel="nofollow noopener" title="www.amdramtheatre.com/whatson.cfm:">www.amdramtheatre.com/whats...</a></p><p>&lt;cfset CurrentPage=GetFileFromPath(GetBaseTemplatePath())&gt;<br>&lt;cfparam name="PageNum_rsShows" default="1"&gt;</p><p>&lt;cfquery name="rsShows" datasource="amdram"&gt;<br>SELECT *<br>FROM tblshow, tblvenue, tblmembers, tblshowtype<br>WHERE tblshow.showvenueINT = tblvenue.venueID<br>AND tblshow.showGroupINT  = tblmembers.memberID<br>AND tblshow.showTypeINT = tblshowtype.showtypeID<br>AND tblshow.showActive = 1<br>AND tblshow.showCurrent = 1<br>ORDER By tblshow.showfinishdate ASC<br>&lt;/cfquery&gt;</p><p>&lt;cfquery name="rsShowType" datasource="amdram"&gt;<br>SELECT *<br>FROM tblshowtype <br>&lt;/cfquery&gt;</p><p>&lt;cfquery name="rsVenueSearch" datasource="amdram"&gt;<br>SELECT *<br>FROM tblvenue<br>ORDER by venueName ASC<br>&lt;/cfquery&gt;</p><p>&lt;cfquery name="rsUpdateShow" datasource="amdram"&gt;<br>UPDATE tblshow<br>SET showCurrent = 0<br>WHERE showFinishDate &lt;= curdate() - 1<br>&lt;/cfquery&gt;</p><p>&lt;cfset MaxRows_rsShows=10&gt;<br>&lt;cfset StartRow_rsShows=Min((PageNum_rsShows-1)*MaxRows_rsShows+1,Max(rsShows.RecordCount,1))&gt;<br>&lt;cfset EndRow_rsShows=Min(StartRow_rsShows+MaxRows_rsShows-1,rsShows.RecordCount)&gt;<br>&lt;cfset TotalPages_rsShows=Ceiling(rsShows.RecordCount/MaxRows_rsShows)&gt;<br>&lt;cfset QueryString_rsShows=Iif(CGI.QUERY_STRING NEQ "",DE("&amp;"&amp;XMLFormat(CGI.QUERY_STRING)),DE(""))&gt;<br>&lt;cfset tempPos=ListContainsNoCase(QueryString_rsShows,"PageNum_rsShows=","&amp;")&gt;<br>&lt;cfif tempPos NEQ 0&gt;<br>  &lt;cfset QueryString_rsShows=ListDeleteAt(QueryString_rsShows,tempPos,"&amp;")&gt;<br>&lt;/cfif&gt;<br>&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%3AlsD79NC9EpzB4LCkih033Se6Csw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">http://www.w3.org/TR/xhtml1...</a>"&gt;<br>&lt;html xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2Fxhtml%3AA6NInarpbzWm6HKZDXlFrwZefzc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/xhtml">http://www.w3.org/1999/xhtml</a>"&gt;<br>&lt;head&gt;<br>&lt;meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" /&gt;<br>&lt;title&gt;AmDram Theatre: Find &amp; Buy Tickets to local amateur Musicals, Plays, Pantomimes...&lt;/title&gt;<br>&lt;link href="css/master.css" rel="stylesheet" type="text/css" /&gt;<br>&lt;/head&gt;</p><p>&lt;body onLoad="initialize()" onUnload="GUnload()"&gt;<br>&lt;div id="wrapper"&gt;</p><p>&lt;cfinclude template="includes/inc_header.cfm"&gt;<br>&lt;cfinclude template="includes/inc_mainindeximage.cfm"&gt;</p><p>&lt;div id="maincontent_header"&gt;&lt;/div&gt;<br>&lt;div id="maincontent"&gt;</p><p>&lt;div id="container"&gt;</p><p>&lt;div class="h1"&gt;Shows<br>&lt;/div&gt;</p><p>&lt;cfparam name="form.range" default=""&gt;<br>&lt;cfparam name="form.show_type" default=""&gt;</p><p>&lt;div id="sidebarx"&gt;<br>&lt;div id= "header"&gt;Find a Show<br>  &lt;/div&gt;<br>  &lt;div id= "content_footer"&gt;<br>&lt;form action="&lt;cfoutput&gt;#cgi.script_name#&lt;/cfoutput&gt;" method="post" name="frm_showsearch" id="frm_showsearch"&gt;<br>  &lt;select name="range" class="sidebarx_select"&gt;<br>    &lt;option value="thisweek" &lt;cfif form.range is "thisweek"&gt;selected&lt;/cfif&gt;&gt;This Week&lt;/option&gt;<br>    &lt;option value="thisweekend" &lt;cfif form.range is "thisweekend"&gt;selected&lt;/cfif&gt;&gt;This Weekend&lt;/option&gt;<br>    &lt;option value="nextweek" &lt;cfif form.range is "nextweek"&gt;selected&lt;/cfif&gt;&gt;Next Week&lt;/option&gt;<br>  &lt;/select&gt;</p><p>  &lt;select name="show_type" class="sidebarx_select" id="show_type"&gt;<br>    &lt;option value=""&gt;Select Show Type&lt;/option&gt;<br>    &lt;option value=""&gt;&lt;/option&gt;<br>    &lt;option value=""&gt;All - &lt;/option&gt;<br>    &lt;cfoutput query="rsShowType"&gt;<br>      &lt;option value="#rsShowType.showtypeID#"&gt;#rsShowType.showtypeName#&lt;/option&gt;<br>    &lt;/cfoutput&gt;<br>  &lt;/select&gt;</p><p>  &lt;select name="venue" class="sidebarx_select" id="venue"&gt;<br>      &lt;option value=""&gt;Choose Venue&lt;/option&gt;<br>          &lt;option value=""&gt;&lt;/option&gt;<br>          &lt;cfoutput query="rsVenueSearch"&gt;<br>            &lt;option value="#rsVenueSearch.venueID#"&gt;#rsVenueSearch.venueName#&lt;/option&gt;<br>          &lt;/cfoutput&gt;<br>      &lt;/select&gt;</p><p>  &lt;input type="submit" name="search" value="Search"&gt;<br>&lt;/form&gt;<br>&lt;/div&gt;<br>&lt;/div&gt;</p><p>&lt;cfparam name="form.range" default=""&gt;<br>&lt;cfparam name="form.show_type" default=""&gt;<br>&lt;cfparam name="form.venue" default=""&gt;</p><p>&lt;cfif structKeyExists(form, "search")&gt;</p><p>&lt;cfset show_type = form.show_type&gt;</p><p>   &lt;!--- create date/time ranges based on search type ---&gt;<br>   &lt;cfswitch expression="#form.range#"&gt;</p><p>      &lt;!--- From now() till end of day saturday ---&gt;<br>      &lt;cfcase value="thisweek"&gt;<br>         &lt;cfset start = now()&gt;<br>         &lt;cfset end = dateAdd("d", 7 - dayOfWeek(now()), now())&gt;<br>         &lt;!--- redo end to be end of day ---&gt;<br>         &lt;cfset end = dateFormat(end, "m/d/yyyy") &amp; " 11:59 PM"&gt;<br>     &lt;/cfcase&gt;</p><p>      &lt;!--- this sat, but not before now(), to end of day sunday ---&gt;<br>     &lt;cfcase value="thisweekend"&gt;<br>         &lt;cfset start = dateAdd("d", 7 - dayOfWeek(now()), now())&gt;<br>         &lt;!--- redo start to be 12:00 am ---&gt;<br>         &lt;cfset start = dateFormat(start, "m/d/yyyy") &amp; " 12:00 AM"&gt;<br>         &lt;!--- if this is before now, reset to now() ---&gt;<br>     &lt;cfif dateCompare(start, now()) is -1&gt;<br>            &lt;cfset start = now()&gt;<br>     &lt;/cfif&gt;</p><p>         &lt;cfset end = dateAdd("d", 7 - dayOfWeek(now()) + 1, now())&gt;<br>         &lt;!--- redo end to be end of day ---&gt;<br>         &lt;cfset end = dateFormat(end, "m/d/yyyy") &amp; " 11:59 PM"&gt;</p><p>     &lt;/cfcase&gt;</p><p>      &lt;!--- next sunday, 12am till sat midnight ---&gt;<br>     &lt;cfcase value="nextweek"&gt;</p><p>         &lt;cfset start = dateAdd("d", 7 - dayOfWeek(now()) + 1, now())&gt;<br>         &lt;!--- redo start to be 12:00 am ---&gt;<br>         &lt;cfset start = dateFormat(start, "m/d/yyyy") &amp; " 12:00 AM"&gt;</p><p>         &lt;cfset end = dateAdd("d", 7 - dayOfWeek(now()) + 6, now())&gt;<br>         &lt;!--- redo end to be end of day ---&gt;<br>         &lt;cfset end = dateFormat(end, "m/d/yyyy") &amp; " 11:59 PM"&gt;</p><p>     &lt;/cfcase&gt;      <br>   &lt;/cfswitch&gt;</p><p>  &lt;cfquery name="results" dbtype="query" datasource="amdram"&gt;<br>   SELECT *<br>   FROM tblperformance, tblshow<br>   WHERE tblperformance.performancedate BETWEEN<br>   &lt;cfqueryparam cfsqltype="cf_sql_timestamp" value="#start#"&gt;<br>   AND<br>   &lt;cfqueryparam cfsqltype="cf_sql_timestamp" value="#end#"&gt;<br>   AND tblperformance.performanceShowINT = tblshow.showID<br>   AND tblshow.showTypeINT = &lt;cfqueryparam value="#show_type#"&gt;<br>   AND tblshow.showVenueINT = &lt;cfqueryparam value="#venue#"&gt;<br>   ORDER BY tblperformance.performancedate ASC<br>   &lt;/cfquery&gt;</p><p>&lt;cfoutput query="results"&gt;<br>#showName# - #LSDateFormat(results.PerformanceDate,'DDDD, MMMM DD, YYYY')#&lt;br&gt;<br>&lt;/cfoutput&gt;</p><p>&lt;cfelse&gt;</p><p>&lt;div class="paragraph"&gt;<br>  Below are all the show, past &amp; present, performed by all of our Groups &amp; Societies. Currently there are &lt;cfoutput&gt;#rsShows.RecordCount#&lt;/cfoutput&gt; upcoming shows, narrow down your results with our search facility:<br>&lt;/div&gt;</p><p>  &lt;div class="paragraph"&gt;<br>&lt;cfscript&gt;<br>//TM_PagesEndCount;<br>For (i=1; i LTE TotalPages_rsShows; i = i + 1) {<br>  If(i NEQ PageNum_rsShows) {<br>    WriteOutput('&lt;a href="#CurrentPage#?PageNum_rsShows=#i##QueryString_rsShows#"&gt;#i#&lt;/a&gt;');<br>  }Else{<br>    WriteOutput("&lt;strong&gt;#i#&lt;/strong&gt;");<br>  }<br>  If(i neq TotalPages_rsShows) WriteOutput(" | ");<br>}<br>&lt;/cfscript&gt;&lt;br /&gt;<br>&lt;br /&gt;<br>&lt;cfscript&gt;<br>TM_navLinks=0;<br>if(PageNum_rsShows neq 1){ <br>  TM_navLinks = PageNum_rsShows-1;<br>  WriteOutput("&lt;a href=""#CurrentPage#?PageNum_rsShows=1#QueryString_rsShows#""&gt;First&lt;/a&gt;");<br>  WriteOutput(" | ");<br>  WriteOutput("&lt;a href=""#CurrentPage#?PageNum_rsShows=#TM_navLinks##QueryString_rsShows#""&gt;Previous&lt;/a&gt;");<br>}else{<br>  WriteOutput("First");<br>  WriteOutput(" | ");<br>  WriteOutput("Previous");<br>}   <br>WriteOutput(" | ");<br>if (TotalPages_rsShows NEQ PageNum_rsShows) {<br>  TM_navLinks = PageNum_rsShows + 1;  <br>  WriteOutput("&lt;a href=""#CurrentPage#?PageNum_rsShows=#TM_navLinks##QueryString_rsShows#""&gt;Next&lt;/a&gt;");<br>  WriteOutput(" | ");<br>  WriteOutput("&lt;a href=""#CurrentPage#?PageNum_rsShows=#TotalPages_rsShows##QueryString_rsShows#""&gt;Last&lt;/a&gt;");<br>}else{<br>  WriteOutput("Next");<br>  WriteOutput(" | ");<br>  WriteOutput("Last");<br>}<br>&lt;/cfscript&gt;<br>&lt;/div&gt;</p><p>    &lt;cfoutput query="rsShows" startrow="#StartRow_rsShows#" maxrows="#MaxRows_rsShows#"&gt;<br>      &lt;div id="showsearchbox"&gt;<br>        &lt;div id="showimage1"&gt;<br>          &lt;cfif ("sicr" NEQ "region3" AND #rsShows.ShowImage1# NEQ "")&gt;<br>            &lt;a href="show.cfm?showID=#rsShows.showID#"&gt;&lt;img src="#Request.tNG_showDynamicThumbnail('', 'images/show_images/', '{rsShows.ShowImage1}', 100, 120, true)#" /&gt;&lt;/a&gt;<br>          &lt;/cfif&gt;<br>        &lt;/div&gt;<br>        &lt;div id="details"&gt;<br>          &lt;div id="showname"&gt;&lt;a href="show.cfm?showID=#rsShows.showID#"&gt;#rsShows.showName#&lt;/a&gt;&lt;/div&gt;<br>          &lt;cfif ("sicr" NEQ "region3" AND #rsShows.showSellOnline# EQ 1)&gt;<br>            &lt;img src="images/Ticket.jpg" name="ticket" id="ticket" /&gt;<br>          &lt;/cfif&gt;<br>          Performance Dates:&lt;br /&gt;<br>          #LSDateFormat(rsShows.showStartDate,'DD/MM/YY')# - #LSDateFormat(rsShows.showFinishDate,'DD/MM/YY')# &lt;br /&gt;<br>          &lt;br /&gt;<br>          A #rsShows.showTypeName# performed by;&lt;br /&gt;<br>          &lt;a href="grouphome.cfm?memberID=#rsShows.memberID#"&gt;#rsShows.memberGroupName#&lt;/a&gt;&lt;/div&gt;<br>      &lt;/div&gt;<br>    &lt;/cfoutput&gt;</p><p>&lt;/cfif&gt;</p><p>&lt;/div&gt;</p><p>&lt;cfinclude template="includes/inc_sidebar_offer1.cfm"&gt;</p><p>&lt;/div&gt;</p><p>&lt;div id="maincontent_footer"&gt;&lt;/div&gt;</p><p>&lt;cfinclude template="includes/inc_footer.cfm"&gt;<br>&lt;/div&gt;</p><p>&lt;/body&gt;</p><p>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708690">12</a> by Raymond Camden
		posted on 2/2/2009 at 5:24 PM
		</div>
		<div class="comment_text"><p>Wow, thats a lot of code. ;) I'm not going to read it all - it is a bit too much this early in the morning. It seems like you have 2 conditions in play here. An optional date filter. A keyword filter. Your query then would look something like this:</p><p>&lt;cfquery ...&gt;<br>select * <br>from foo<br>where 1=1<br>&lt;cfif I picked a date filter&gt;<br>and date filter stuff here<br>&lt;/cfif&gt;<br>&lt;cfif I picked a keyword&gt;<br>and keyword fitler here<br>&lt;/cfif&gt;<br>&lt;/cfquery&gt;</p><p>Obviously that is pseudo-code, but do you see what I'm doing? 1=1 means select everything. The 2 conditions though are added dynamically based on what you did with the form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708689">13</a> by Gareth
		posted on 2/2/2009 at 11:37 PM
		</div>
		<div class="comment_text"><p>Yes I understand, can you tell I am still learning CF! How would code look like in the SQL statement to show all if the form.range is not selected then?</p><p>Cheers Ray, really do appreciate your help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708699">14</a> by Raymond Camden
		posted on 2/3/2009 at 12:12 AM
		</div>
		<div class="comment_text"><p>Well, the code I showed you already does that. Again, look at the conditions.</p><p>First, 1=1 means everything.</p><p>Second, each CFIF is ONLY run when you pick a form value. So for example, in your date range, if the user doesn't pick something.... ah, I see something. Your drop down doesnt have an option for 'all time'. Just add a new option tag, use value="", and in the cfquery code, you only do the date stuff if form.range neq "".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708696">15</a> by Gareth
		posted on 2/3/2009 at 3:31 PM
		</div>
		<div class="comment_text"><p>Ah thanks Ray, managed to hammer out the code, here it is for the SQL for the benefit of any other of your visitors looking for a similar solution:</p><p>   &lt;cfquery name="results" dbtype="query" datasource="amdram"&gt;<br>   SELECT *<br>   FROM tblperformance, tblshow, tblmembers, tblvenue<br>   WHERE 1=1</p><p>   &lt;cfif #form.range# is not "all"&gt;<br>   AND tblperformance.performancedate BETWEEN<br>   &lt;cfqueryparam cfsqltype="cf_sql_timestamp" value="#start#"&gt;<br>   AND<br>   &lt;cfqueryparam cfsqltype="cf_sql_timestamp" value="#end#"&gt;<br>   &lt;/cfif&gt;</p><p>   AND tblperformance.performanceShowINT = tblshow.showID<br>   AND tblshow.showGroupINT = tblmembers.memberID<br>   AND tblvenue.venueID = tblshow.showVenueINT  <br>   AND tblshow.showCurrent = 1 <br>   #PreserveSingleQuotes(WADbSearch1.whereClause)#<br>   ORDER BY tblperformance.performancedate ASC</p><p>   &lt;/cfquery&gt;</p></div>
	</div>
</div>
		