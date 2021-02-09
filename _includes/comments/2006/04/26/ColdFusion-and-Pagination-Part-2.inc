
<div class="comment" id="c_1713652344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652344">1</a> by Neil Middleton
		posted on 4/26/2006 at 4:26 PM
		</div>
		<div class="comment_text"><p>Unlike you to make a fix to something the day after release Ray....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652351">2</a> by Raymond Camden
		posted on 4/26/2006 at 5:14 PM
		</div>
		<div class="comment_text"><p>I know. What's up with that? I never make mistakes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652349">3</a> by Edward T
		posted on 4/26/2006 at 5:33 PM
		</div>
		<div class="comment_text"><p>&gt; ...I've learned not to use math before I've had enough coffee.</p><p>"I don't do math in public." - overheard on NPR; it has become my stock response when someone asks me to do arithmetic in a meeting.</p><p>A possible solution that sort of lies midway between this solution and Rob's is using a caching parameter in the query.  It speeds up retrieval, and as long as you don't have too much change in the data or too many rows to retrieve, you get the performance boost with the cf pagination.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652350">4</a> by Rob Gonda
		posted on 4/26/2006 at 5:59 PM
		</div>
		<div class="comment_text"><p>I thought about that too, but until cfmx7, query of queries has been buddy with datatypes...</p><p>Now with cfmx7, I wanted to find a medium not to cache the entire table, because again, my table weights about 10Gb :) Downloading 1000 records at a time and caching them in CF, and use CF pagination for smaller blocks could work ... but I find that to be too much complication.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652348">5</a> by Tom Mollerus
		posted on 4/26/2006 at 6:09 PM
		</div>
		<div class="comment_text"><p>One solution I've used in the past is to run two queries, each using the exact same joins, where clauses, grouping, and ordering.  The only difference is that the first query is cached and returns only one column, whereas the second query returns the rows corresponding to the values in the first query that match the "page" you're viewing (e.g., rows 51 - 100 representing the second page of a 50-rows-per-page pagination).</p><p>It's definitely a complicated solution, but it works well to pull only a few records from the db in what could otherwise be a massive query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652347">6</a> by Edward T
		posted on 4/26/2006 at 6:11 PM
		</div>
		<div class="comment_text"><p>Rob, that's a sweet idea...one way you might implement it is by having CF do the loading in the background.  I did a site not too long ago that had to pull medical provider info for multiple insurance plans.  I didn't know which provider they would start with (depends on which page they enter the site through), but I wanted them to have every provider's page ready after entering the zip code any any entry page.</p><p>So, I stored the data for each user's zip in session, and then had CF GET the provider's list.  When the page rendered, I had CF decide which providers were left to get, write a little JavaScript in the page to do an AJAX load of the remaining session objects (one per provider).  When the user went to the next page, CF checked for a populated object and did the GET itself if the AJAX failed.  Otherwise, voila, the object is already there.  It's really simple AJAX, since there is nothing to render - it's just doing an asyn load in the background.</p><p>Anyhow, you could simplify block caching in this way.  You work with the current 1,000 record set until the user pages up near the end of the block, then AJAX-call the next block into cache.  It is a little more complex, but you can use the same stored proc and just let CF decide what the page limits should be.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652353">7</a> by Raymond Camden
		posted on 4/26/2006 at 6:13 PM
		</div>
		<div class="comment_text"><p>Tom, I've done that as well. Our CMS uses it for pagination in the admin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652354">8</a> by Neil Middleton
		posted on 4/26/2006 at 6:20 PM
		</div>
		<div class="comment_text"><p>Another option lies in SQL2005 where it has query pagination built in..</p><p>&lt;code&gt;<br>SELECT<br>	  myField1<br>	, myField2<br>	, RowID<br>FROM<br>	(<br>		SELECT<br>			  myField1<br>			, myField2<br>			, ROW_NUMBER() OVER ( ORDER BY myField1, myField2 ) AS RowID<br>		FROM<br>			myHugeAndIncomprehensibleTablesAndJoins<br>		WHERE<br>			AnyFiltersIWant = 1<br>	) myPageQuery<br>WHERE<br>	RowID BETWEEN 21 AND 30<br>ORDER BY<br>	  RowID<br>&lt;/code&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652356">9</a> by Edward T
		posted on 4/26/2006 at 6:24 PM
		</div>
		<div class="comment_text"><p>Neil,</p><p>Yes, or use rownum in Oracle, but you still need to hit the db and pull the data across the network.  With caching, the query is right there in CF memory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652355">10</a> by Scott Stroz
		posted on 4/26/2006 at 7:38 PM
		</div>
		<div class="comment_text"><p>MySQL has LIMIT to do the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652360">11</a> by Donnovan Lewis
		posted on 4/27/2006 at 11:57 PM
		</div>
		<div class="comment_text"><p>So its interesting to randomly come to Rays site and see the new things in discussion. It just so happened that i was bored one day and wanted to set up a db for myself and my friends to look at and search my music. (Before anyone goes all anti-pirate on me, there is no access to the actual music. It is just a listing of what i have.)</p><p>I have seen some interesting ways to do paging of results but this one caught my eye. It is the ability do display the pages in "chunks" as i call it. I chose 3 page chunking. This allows the first 3 pages and last 3 pages always to be visible and then the rest are in a "..." filler. The current page would show 2 previous pages and 2 next pages in the page listing. so for example it would be this link: <a href="http://disq.us/url?url=http%3A%2F%2Fwilsondesigns.ath.cx%2Fmp3db.cfm%3AvCrOdl0PvOZE-0GhYW_XP1WUNJA&amp;cuid=3321886" rel="nofollow noopener" title="http://wilsondesigns.ath.cx/mp3db.cfm">http://wilsondesigns.ath.cx...</a></p><p>I would explain it but seeing it is easier. Now it took me a couple hours to figure out the algorithm for this, but i am not sure if there was a better way to do it. If there isnt then the code is below for anyone to use.</p><p>&lt;!--- Begin: Code ---&gt;<br>&lt;cfparam name="page" default="0"&gt;<br>&lt;cfparam name="pageChunk" default="3"&gt;<br>&lt;cfparam name="perPage" default="50"&gt;<br>&lt;cfparam name="searchCriteria" default=""&gt;</p><p>&lt;cfquery&gt;QUERY CODE HERE&lt;/cfquery&gt;</p><p>&lt;cfset startRow = (page*perPage)+1&gt;<br>&lt;cfset endRow = (startRow+perPage)-1&gt;<br>&lt;cfif endRow GT searchdb.recordCount&gt;<br>  &lt;cfset endRow = searchdb.recordCount&gt;<br>&lt;/cfif&gt;<br>&lt;cfset numPages = Ceiling(searchdb.recordCount/perPage)&gt;<br>&lt;cfset pagesLeft = numPages - pageChunk&gt;<br>&lt;cfif pagesLeft GT pageChunk&gt;<br>  &lt;cfset endFrom = numPages-pageChunk&gt;<br>  &lt;cfelse&gt;<br>  &lt;cfset endFrom = numPages-pagesLeft&gt;<br>&lt;/cfif&gt;</p><p>&lt;!--- Begin: Next Previous ---&gt;<br>      &lt;cfoutput&gt;<br>        &lt;cfif page GT 0&gt;<br>		  &lt;a onfocus="this.blur();" href="?page=#page-1#&amp;searchCriteria=#searchCriteria#"&gt;&amp;lt;&amp;lt; Prev&lt;/a&gt;<br>          &lt;cfelse&gt;<br>          &amp;lt;&amp;lt; Prev<br>        &lt;/cfif&gt;<br>        &amp;nbsp;&amp;nbsp;&amp;nbsp;<br>        &lt;cfif page LT numPages-1&gt;<br>          &lt;a onfocus="this.blur();" href="?page=#page+1#&amp;searchCriteria=#searchCriteria#"&gt;Next &amp;gt;&amp;gt;&lt;/a&gt;<br>          &lt;cfelse&gt;<br>          Next &amp;gt;&amp;gt;<br>        &lt;/cfif&gt;<br>      &lt;/cfoutput&gt;<br>      &lt;!--- End: Next Previous ---&gt;</p><p>&lt;!--- Begin: Page Numbering ---&gt;<br>      &lt;cfoutput&gt;<br>        &lt;!--- Begin: FirstChunk ---&gt;<br>        &lt;cfif numPages GT pageChunk&gt;<br>          &lt;cfloop from="0" to="#pageChunk-1#" index="i"&gt;<br>            &lt;cfset sRow = (i*perPage)+1&gt;<br>            &lt;cfset eRow = (sRow+perPage)-1&gt;<br>            &lt;cfif eRow GT searchdb.recordCount&gt;<br>              &lt;cfset eRow = searchdb.recordCount&gt;<br>            &lt;/cfif&gt;<br>            &lt;cfif i NEQ page&gt;<br>              &lt;cfif i GT 0&gt;<br>                |<br>              &lt;/cfif&gt;<br>              &lt;a onfocus="this.blur();" href="?page=#i#&amp;searchCriteria=#searchCriteria#"&gt;#sRow#-#eRow#&lt;/a&gt;<br>              &lt;cfelse&gt;<br>              &lt;cfif i GT 0&gt;<br>                |<br>              &lt;/cfif&gt;<br>              #sRow#-#eRow#<br>            &lt;/cfif&gt;<br>          &lt;/cfloop&gt;<br>          &lt;!--- End: FirstChunk ---&gt;<br>          &lt;!--- Begin: MiddleChunk ---&gt;<br>          &lt;cfif numPages GT 2*pageChunk&gt;<br>            &lt;cfif page-pageChunk GTE pageChunk&gt;<br>              | ...<br>            &lt;/cfif&gt;<br>            &lt;cfset midTo = page+(pageChunk-1)&gt;<br>            &lt;cfif midTo GTE endFrom&gt;<br>              &lt;cfset midTo = endFrom-1&gt;<br>            &lt;/cfif&gt;<br>            &lt;cfif midTo GTE pageChunk&gt;<br>              &lt;cfset midFrom = page-(pageChunk-1)&gt;<br>              &lt;cfif midFrom LTE pageChunk&gt;<br>                &lt;cfset midFrom = pageChunk&gt;<br>              &lt;/cfif&gt;<br>              &lt;cfif midFrom LT endFrom&gt;<br>                &lt;cfloop from="#midFrom#" to="#midTo#" index="i"&gt;<br>                  &lt;cfset sRow = (i*perPage)+1&gt;<br>                  &lt;cfset eRow = (sRow+perPage)-1&gt;<br>                  &lt;cfif eRow GT searchdb.recordCount&gt;<br>                    &lt;cfset eRow = searchdb.recordCount&gt;<br>                  &lt;/cfif&gt;<br>                  &lt;cfif i NEQ page&gt;<br>                    | &lt;a onfocus="this.blur();" href="?page=#i#&amp;searchCriteria=#searchCriteria#"&gt;#sRow#-#eRow#&lt;/a&gt;<br>                    &lt;cfelse&gt;<br>                    | #sRow#-#eRow#<br>                  &lt;/cfif&gt;<br>                &lt;/cfloop&gt;<br>              &lt;/cfif&gt;<br>            &lt;/cfif&gt;<br>            &lt;cfif endFrom-page GT pageChunk&gt;<br>              | ...<br>            &lt;/cfif&gt;<br>          &lt;/cfif&gt;<br>          &lt;!--- End: MiddleChunk ---&gt;<br>          &lt;!--- Begin: LastChunk ---&gt;<br>          &lt;cfloop from="#endFrom#" to="#numPages-1#" index="i"&gt;<br>            &lt;cfset sRow = (i*perPage)+1&gt;<br>            &lt;cfset eRow = (sRow+perPage)-1&gt;<br>            &lt;cfif eRow GT searchdb.recordCount&gt;<br>              &lt;cfset eRow = searchdb.recordCount&gt;<br>            &lt;/cfif&gt;<br>            &lt;cfif i NEQ page&gt;<br>              | &lt;a onfocus="this.blur();" href="?page=#i#&amp;searchCriteria=#searchCriteria#"&gt;#sRow#-#eRow#&lt;/a&gt;<br>              &lt;cfelse&gt;<br>              | #sRow#-#eRow#<br>            &lt;/cfif&gt;<br>          &lt;/cfloop&gt;<br>          &lt;!--- End: LastChunk ---&gt;<br>          &lt;cfelse&gt;<br>          &lt;!--- Begin: One Chunk Case ---&gt;<br>          &lt;cfloop from="0" to="#numPages-1#" index="i"&gt;<br>            &lt;cfset sRow = (i*perPage)+1&gt;<br>            &lt;cfset eRow = (sRow+perPage)-1&gt;<br>            &lt;cfif eRow GT searchdb.recordCount&gt;<br>              &lt;cfset eRow = searchdb.recordCount&gt;<br>            &lt;/cfif&gt;<br>            &lt;cfif i NEQ page&gt;<br>              &lt;cfif i GT 0&gt;<br>                |<br>              &lt;/cfif&gt;<br>              &lt;a onfocus="this.blur();" href="?page=#i#&amp;searchCriteria=#searchCriteria#"&gt;#sRow#-#eRow#&lt;/a&gt;<br>              &lt;cfelse&gt;<br>              &lt;cfif i GT 0&gt;<br>                |<br>              &lt;/cfif&gt;<br>              #sRow#-#eRow#<br>            &lt;/cfif&gt;<br>          &lt;/cfloop&gt;<br>          &lt;!--- End: One Chunk Case ---&gt;<br>        &lt;/cfif&gt;<br>      &lt;/cfoutput&gt;<br>      &lt;!--- End: Page Numbering ---&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652359">12</a> by Donnovan Lewis
		posted on 4/27/2006 at 11:59 PM
		</div>
		<div class="comment_text"><p>wow that looks hideous...how can i make that code look nicer in with tabs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652357">13</a> by Justice
		posted on 4/28/2006 at 10:40 PM
		</div>
		<div class="comment_text"><p>Raymond, I think you forgot one part in your StartRow sanitation, how about 'not structKeyExists(URL, "start")' ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652358">14</a> by Raymond Camden
		posted on 4/28/2006 at 10:44 PM
		</div>
		<div class="comment_text"><p>No, I have a cfparam above it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652361">15</a> by Jeff Gladnick
		posted on 7/11/2006 at 5:27 PM
		</div>
		<div class="comment_text"><p>I am currently in the hell-hole that is pagination in SQL-Server 2000, and its driving me bonkers to no end.</p><p>I am trying to return 50 results per page, and I just can't get the SQL to return stuff in the correct order, or to return the right data.</p><p>I started off with a variation of MSDN's official suggestion:<br>(link: <a href="http://disq.us/url?url=http%3A%2F%2Fmsdn.microsoft.com%2Flibrary%2Fdefault.asp%3Furl%3D%2Flibrary%2Fen-us%2Fdnpag%2Fhtml%2Fscalenethowto05.asp%29%3ArsBptQzwkcQuWPR5UwLHgVMhOoQ&amp;cuid=3321886" rel="nofollow noopener" title="http://msdn.microsoft.com/library/default.asp?url=/library/en-us/dnpag/html/scalenethowto05.asp)">http://msdn.microsoft.com/l...</a></p><p>---------<br>SELECT TOP &lt;pageSize&gt; CustomerID,CompanyName,ContactName,ContactTitle<br>  FROM<br>  (SELECT TOP &lt;currentPageNumber * pageSize&gt; <br>          CustomerID,CompanyName,ContactName,ContactTitle <br>   FROM <br>     Customers AS T1 ORDER BY ContactName DESC)<br>  AS T2 ORDER BY ContactName ASC<br>---------</p><p>That kind of works - except it starts at the end, with the Z's.  I kind of got this to work, but wrapping this in yet ANOTHER SELECT top 50 order by statement. So now there are 3 levels, and i know for sure one of them is redundant.  I was frustrated enough that i was willing to accept this and be done with it, except i noticed im not getting accurate results  for some reason.</p><p>So my question for the group - can someone recommend a better nested SQL query, or a different way BESIDES using a stored procedure?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652369">16</a> by Jeff Gladnick, Produce Marketi
		posted on 7/11/2006 at 6:14 PM
		</div>
		<div class="comment_text"><p>Here is the actual SQL code i am using:</p><p>SELECT     *<br>FROM         (SELECT     TOP 50 *<br>                       FROM          (SELECT     TOP 150 first_name, last_name, label_name<br>                                               FROM          USR_WEB_CONTACTS<br>                                               WHERE      1 = 1 AND (Last_Name LIKE '%smith%' OR<br>                                                                      first_name LIKE '%smith%')<br>                                               ORDER BY Last_Name ASC) DERIVEDTBL<br>                       ORDER BY Last_Name DESC) DERIVEDTBL<br>ORDER BY last_name</p><p>-----<br>I have noticed that when i add columns to the list (first_name, last_name, label_name) it starts giving me back a different set of data.  which i find very surprising - how could this happen?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652363">17</a> by William Haun
		posted on 1/9/2007 at 1:01 AM
		</div>
		<div class="comment_text"><p>I was using Ray's fabulous pagination code and ran into this lovely IE bug (err... feature).</p><p>Here was my url created for the next set of results:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmysite.com%2Fpage.cfm%3Fstart%3D10%26deg_id%3D15%3AXVm8fv8KVXJkkRn0ie-3tbQs330&amp;cuid=3321886" rel="nofollow noopener" title="mysite.com/page.cfm?start=10&amp;deg_id=15">mysite.com/page.cfm?start=1...</a></p><p>It worked beautifully in Mozilla, Opera, and Safari but didn't in IE.  Internet Explorer rendered the link as:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmysite.com%2Fpage.cfm%3Fstart%3D10%3ALYGXpbUv1vG7kyWifaMPqXdEueg&amp;cuid=3321886" rel="nofollow noopener" title="mysite.com/page.cfm?start=10">mysite.com/page.cfm?start=10</a>°_id=15</p><p>It turns out there is a special HTML code for the degree sign.  The code is &amp;deg;  IE is assuming that I forgot the semi-colon and is plugging the special character in for me.</p><p>Thanks but no thanks IE.  Guess I'll have to move my deg_id variable to the start of the query string so that it shows up after the question mark.  Either that or change the variable name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652362">18</a> by Raymond Camden
		posted on 1/9/2007 at 4:47 AM
		</div>
		<div class="comment_text"><p>I'd just change the variable name.</p></div>
	</div>
</div>
		