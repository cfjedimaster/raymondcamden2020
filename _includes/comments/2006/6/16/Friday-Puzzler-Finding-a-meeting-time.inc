
<div class="comment" id="c_1713654231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654231">1</a> by bethb
		posted on 6/16/2006 at 5:15 PM
		</div>
		<div class="comment_text"><p>how long do they need to meet?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654250">2</a> by Raymond Camden
		posted on 6/16/2006 at 5:17 PM
		</div>
		<div class="comment_text"><p>1 hour.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654235">3</a> by Michael
		posted on 6/16/2006 at 5:45 PM
		</div>
		<div class="comment_text"><p>I am currently downloading cold fusion because i haven't done any CF development for over a year and a half now.  But here is my solution before debugging and actually making sure it works:</p><p>&lt;cffunction name="locateMeetingTime"&gt;<br>&lt;cfargument name="data"&gt;<br>&lt;cfargument name="span"&gt;<br>	&lt;cfset var sorted = QueryNew()&gt;<br>	&lt;cfset var beginTime="8:00 AM"&gt;<br>	&lt;cfquery name="sorted" dbtype="query"&gt;<br>		SELECT * FROM <a href="http://disq.us/url?url=http%3A%2F%2Farguments.data%3A1XhtCxXIwjaTo2vM7CN5yq8Q9mk&amp;cuid=3321886" rel="nofollow noopener" title="arguments.data">arguments.data</a> ORDER BY start<br>	&lt;/cfquery&gt;</p><p>	&lt;cfloop query="sorted"&gt;<br>		&lt;cfif beginTime lte sorted.start and beginTime + arguments.span lte sorted.start&gt;<br>			&lt;cfreturn beginTime&gt;<br>		&lt;cfelse&gt;<br>			&lt;cfif sorted.end gt beginTime&gt;<br>				&lt;cfset beginTime = sorted.end&gt;<br>			&lt;/cfif&gt;<br>		&lt;/cfif&gt;<br>		&lt;cfif beginTime gte "6:00 PM"&gt;<br>			&lt;cfreturn false&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfreturn false&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654243">4</a> by Martin
		posted on 6/16/2006 at 5:50 PM
		</div>
		<div class="comment_text"><p>I had to reparse the dates in the original query which puzzles me a little but here's my solution:</p><p>&lt;cffunction name="findFreeSlots"&gt;<br>	&lt;cfargument name="data" type="query" required="true" /&gt;<br>	&lt;cfargument name="attendees" type="string" required="true" hint="List of personIDs of attendees" /&gt;</p><p>	&lt;cfset var l = structNew() /&gt;</p><p>	&lt;!--- Had to do this otherwise the BETWEEN clause didn't work very well ---&gt;<br>	&lt;cfloop query="<a href="http://disq.us/url?url=http%3A%2F%2Farguments.data%3A1XhtCxXIwjaTo2vM7CN5yq8Q9mk&amp;cuid=3321886" rel="nofollow noopener" title="arguments.data">arguments.data</a>"&gt;<br>		&lt;cfset querySetCell( data, "start", parseDateTime( start ), currentRow ) /&gt;<br>		&lt;cfset querySetCell( data, "end", parseDateTime( end ), currentRow ) /&gt;<br>	&lt;/cfloop&gt;</p><p>	&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fl.today%3AdlOYzkWnYmnSz4aEUGyDl2rRRSM&amp;cuid=3321886" rel="nofollow noopener" title="l.today">l.today</a> = "6/16/06" /&gt;<br>	&lt;cfset l.freeSlots = "" /&gt;</p><p>	&lt;cfloop from="8" to="17" index="l.hour"&gt;<br>		&lt;cfset l.currentSlot = dateAdd( "n", 1, dateAdd( "h", l.hour, <a href="http://disq.us/url?url=http%3A%2F%2Fl.today%3AdlOYzkWnYmnSz4aEUGyDl2rRRSM&amp;cuid=3321886" rel="nofollow noopener" title="l.today">l.today</a> ) ) /&gt;</p><p>		&lt;cfquery name="l.whoIsBusy" dbtype="query"&gt;<br>			SELECT	*<br>			FROM	<a href="http://disq.us/url?url=http%3A%2F%2Farguments.data%3A1XhtCxXIwjaTo2vM7CN5yq8Q9mk&amp;cuid=3321886" rel="nofollow noopener" title="arguments.data">arguments.data</a><br>			WHERE	personID IN (#arguments.attendees#)<br>					AND ( '#dateFormat( l.currentSlot, "M/D/YY" )# #timeFormat( l.currentSlot, "h:mm tt" )#' BETWEEN start AND [end] )<br>		&lt;/cfquery&gt;</p><p>		&lt;cfif l.whoIsBusy.recordCount eq 0&gt;<br>			&lt;cfset l.freeSlots = listAppend( l.freeSlots, l.hour ) /&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;</p><p>	&lt;h3&gt;Possible meeting times:&lt;/h3&gt;<br>	&lt;cfif listLen( l.freeSlots ) gt 0&gt;<br>		&lt;cfloop list="#l.freeSlots#" index="l.slot"&gt;<br>			&lt;cfoutput&gt;#l.slot#:00 to #l.slot + 1#:00&lt;br /&gt;&lt;/cfoutput&gt;<br>		&lt;/cfloop&gt;<br>	&lt;cfelse&gt;<br>	No available slots<br>	&lt;/cfif&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfset findFreeSlots( data, "1,2" ) /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654244">5</a> by Raymond Camden
		posted on 6/16/2006 at 5:54 PM
		</div>
		<div class="comment_text"><p>Martin, my strings for datetimes may not have been valid. To be fair, I should have created real dt objects.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654245">6</a> by Martin
		posted on 6/16/2006 at 6:05 PM
		</div>
		<div class="comment_text"><p>Ray, I don't think your date strings are invalid. When using the dates as is, the between statement half works. For example when checking who's busy 8am to 9am, my query returned Lynn but not Ray.</p><p>I tend to avoid comparing dates as strings because I'm never sure how CF is interpreting them behind the scenes (I'm sure you do to).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654251">7</a> by Michael
		posted on 6/16/2006 at 6:16 PM
		</div>
		<div class="comment_text"><p>I fixed the problems and now this works.  Some things I would do differently is not hardcoding the date, but that is simple.</p><p>&lt;cffunction name="locateMeetingTime"&gt;<br>&lt;cfargument name="data"&gt;<br>&lt;cfargument name="span"&gt;<br>	&lt;cfset var sorted = ""&gt;<br>	&lt;cfset var beginTime="06/16/2006 8:00 AM"&gt;<br>	&lt;cfquery name="sorted" dbtype="query"&gt;<br>		SELECT * FROM <a href="http://disq.us/url?url=http%3A%2F%2Farguments.data%3A1XhtCxXIwjaTo2vM7CN5yq8Q9mk&amp;cuid=3321886" rel="nofollow noopener" title="arguments.data">arguments.data</a> ORDER BY start<br>	&lt;/cfquery&gt;<br>	&lt;cfloop query="sorted"&gt;<br>		&lt;cfif beginTime lte sorted.start and beginTime + arguments.span lte sorted.start&gt;<br>			&lt;cfreturn beginTime&gt;<br>		&lt;cfelse&gt;<br>			&lt;cfif sorted.end gt beginTime&gt;<br>				&lt;cfset beginTime = sorted.end&gt;<br>			&lt;/cfif&gt;<br>		&lt;/cfif&gt;<br>		&lt;cfif beginTime gte "06/16/2006 6:00 PM"&gt;<br>			&lt;cfreturn false&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfreturn false&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfscript&gt;<br>function addEvent(personid, name, start, end) {<br>   queryAddRow(data);<br>   querySetCell(data, "personid", arguments.personid);<br>   querySetCell(data, "name", <a href="http://disq.us/url?url=http%3A%2F%2Farguments.name%3AQqOM0eK7v9LDCdUJ173Sj4NsEtM&amp;cuid=3321886" rel="nofollow noopener" title="arguments.name">arguments.name</a>);<br>   querySetCell(data, "start", arguments.start);<br>   querySetCell(data, "end", arguments.end);<br>}<br>&lt;/cfscript&gt;</p><p>&lt;cfset data = queryNew("personid,name,start,end")&gt;<br>&lt;cfset addEvent(1, "Ray", "6/16/06 8:00 AM", "6/16/06 10:00 AM")&gt;<br>&lt;cfset addEvent(1, "Ray", "6/16/06 2:00 PM", "6/16/06 4:00 PM")&gt;<br>&lt;cfset addEvent(2, "Lynn", "6/16/06 8:00 AM", "6/16/06 9:00 AM")&gt;<br>&lt;cfset addEvent(2, "Lynn", "6/16/06 10:00 AM", "6/16/06 12:00 PM")&gt;</p><p>&lt;cfset meet = locateMeetingTime(data, "1:00")&gt;<br>&lt;cfdump var="#meet#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654248">8</a> by Gus
		posted on 6/16/2006 at 7:11 PM
		</div>
		<div class="comment_text"><p>In a real app, I would likely do this with SQL to take advantage of DB functions that deal with dates/times, but this works for this quiz:</p><p>&lt;cfoutput&gt;<br>    &lt;cfloop from='8' to='17' index='i'&gt;<br>        &lt;cfset hourStart = '6/16/06 #i#:00'&gt;<br>        &lt;cfset hourEnd = '6/16/06 #i + 1#:00'&gt;<br>        &lt;cfset busy = ''&gt;<br>        &lt;cfloop query='data'&gt;<br>            &lt;cfif i GTE REReplaceNoCase(timeFormat(start,'H:mm'),':.*','','all') AND I LT REReplaceNoCase(timeFormat(END,'H:mm'),':.*','','all')&gt;<br>                &lt;cfset busy = 'Not '&gt;<br>                &lt;cfbreak&gt;<br>            &lt;/cfif&gt;<br>        &lt;/cfloop&gt;<br>        #timeFormat(HourStart,'hh:mm tt')# -  #timeFormat(HourEnd,'hh:mm tt')# #busy#Available&lt;br&gt;<br>    &lt;/cfloop&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654253">9</a> by Michael
		posted on 6/16/2006 at 7:27 PM
		</div>
		<div class="comment_text"><p>Sorry for all the reposts, but I found a bug in my code and wanted to address it, it didn't handle the last meeting of the day case.</p><p>&lt;cffunction name="locateMeetingTime"&gt;<br>	&lt;cfargument name="data"&gt;<br>	&lt;cfargument name="span"&gt;<br>	&lt;cfargument name="date"&gt;<br>	&lt;cfset var sorted = ""&gt;<br>	&lt;cfset var beginTime="#<a href="http://disq.us/url?url=http%3A%2F%2Farguments.date%3ADPwqMIiobsTuMvC-3lFobxjsdlI&amp;cuid=3321886" rel="nofollow noopener" title="arguments.date">arguments.date</a># 8:00 AM"&gt;<br>	&lt;cfset var EOD = "#<a href="http://disq.us/url?url=http%3A%2F%2Farguments.date%3ADPwqMIiobsTuMvC-3lFobxjsdlI&amp;cuid=3321886" rel="nofollow noopener" title="arguments.date">arguments.date</a># 6:00 PM"&gt;<br>	&lt;cfquery name="sorted" dbtype="query"&gt;<br>		SELECT * FROM <a href="http://disq.us/url?url=http%3A%2F%2Farguments.data%3A1XhtCxXIwjaTo2vM7CN5yq8Q9mk&amp;cuid=3321886" rel="nofollow noopener" title="arguments.data">arguments.data</a> ORDER BY start<br>	&lt;/cfquery&gt;<br>	&lt;cfloop query="sorted"&gt;</p><p>		&lt;cfif beginTime lte sorted.start and (beginTime + arguments.span lte sorted.start ) and beginTime lt EOD&gt;<br>			&lt;cfreturn beginTime&gt;<br>		&lt;cfelse&gt;<br>			&lt;cfif sorted.end gt beginTime&gt;<br>				&lt;cfset beginTime = sorted.end&gt;<br>			&lt;/cfif&gt;<br>		&lt;/cfif&gt;<br>		&lt;cfif beginTime gte EOD&gt;<br>			&lt;cfreturn false&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfif beginTime + arguments.span lte eod&gt;<br>		&lt;cfreturn beginTime&gt;<br>	&lt;/cfif&gt;	<br>	&lt;cfreturn false&gt;<br>&lt;/cffunction&gt;</p><p>One thing that differentiates this solution from the others is a meeting doesn't have to start at the hour it rather starts when free time is available.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654255">10</a> by Raymond Camden
		posted on 6/16/2006 at 7:31 PM
		</div>
		<div class="comment_text"><p>Michael, don't worry about all the posts. The point of this is to share code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654256">11</a> by Edward T
		posted on 6/16/2006 at 8:15 PM
		</div>
		<div class="comment_text"><p>Here's a late entry.... I know this is solved, but I have such a TERRIBLE little hack, I couldn't help myself.  This solution will handle up to 9 people, and takes advantage of the fact that meetings start on the hour.  A very slight modification makes it possible to schedule meetings for n hours.  Can't really go into half or quarter hours, though, since we're limited on the size of integers:</p><p>&lt;cfset combinedSched = 0&gt;<br>&lt;cfoutput query="data" group="personid"&gt;<br>	&lt;cfset attendee[data.personid] = '0,0,0,0,0,0,0,0,0,0,0'&gt;<br>	&lt;cfoutput&gt;<br>		&lt;cfset mtgDur = timeformat(data.end, 'H') - timeformat(data.start, 'H')&gt;<br>		&lt;cfloop from="1" to="#mtgDur#" index="i"&gt;<br>			&lt;cfset attendee[data.personid] = listSetAt(attendee[data.personid], timeformat(data.start, 'H')-8+i, "1")&gt; <br>		&lt;/cfloop&gt;<br>	&lt;/cfoutput&gt;<br>	&lt;cfset combinedSched = numberFormat(combinedSched + replace(attendee[data.personid], ',','','all'), '00000000000')&gt;<br>&lt;/cfoutput&gt;</p><p>&lt;cfset mtgTimes = find('0', combinedSched)&gt;<br>&lt;cfif mtgTimes&gt;<br>&lt;h3&gt;Possible meeting times:&lt;/h3&gt;<br>	&lt;ul&gt;<br>&lt;cfloop condition="mtgTimes GT 0"&gt;<br>	&lt;li&gt;&lt;cfoutput&gt;#timeFormat(mtgTimes + 7 &amp; ':00', 'h:mm tt')#&lt;/cfoutput&gt;&lt;/li&gt;<br>	&lt;cfset mtgTimes = Find('0', combinedSched, mtgTimes+1)&gt;<br>&lt;/cfloop&gt;<br>&lt;/ul&gt;<br>&lt;cfelse&gt;<br>	&lt;h3&gt;Sorry, can't meet today!&lt;/h3&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654258">12</a> by Ed Bartram
		posted on 6/16/2006 at 8:42 PM
		</div>
		<div class="comment_text"><p>I originally tried doing a query of queries approach only to find all DATEPART and CAST functions that I wanted to use didn't seem to be available.  So I ended up storing the meetings in an Array to determine availability.</p><p>&lt;cfset aAvail=ArrayNew(1)&gt;<br>&lt;cfloop index="ptr" from="8" to="17"&gt;<br>	&lt;cfset aAvail[ptr]="yes"&gt;<br>&lt;/cfloop&gt;<br>&lt;cfloop query="data"&gt;<br>	&lt;cfloop index="ptr" from="#DatePart('h',start)#" to="#DatePart('h',end)-1#"&gt;<br>		&lt;cfset aAvail[ptr]="no"&gt;<br>	&lt;/cfloop&gt;<br>&lt;/cfloop&gt;<br>&lt;p&gt;Ray and Lynn are available the following times:&lt;br /&gt;<br>&lt;cfloop index="ptr" from="8" to="17"&gt;<br>	&lt;cfif aAvail[ptr] is "yes"&gt;<br>		&lt;cfoutput&gt;#ptr#&lt;/cfoutput&gt;:00&lt;br&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfloop&gt;<br>&lt;/p&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654257">13</a> by Michael
		posted on 6/16/2006 at 9:02 PM
		</div>
		<div class="comment_text"><p>Also decided to create a similar function that looks for all possible meetings times, because people like choices.</p><p>&lt;cffunction name="locateAllPossibleMeetingTimes"&gt;<br>	&lt;cfargument name="data"&gt;<br>	&lt;cfargument name="span"&gt;<br>	&lt;cfargument name="date"&gt;<br>	&lt;cfset var tmp = ""&gt;<br>	&lt;cfset var meetings = ArrayNew(1)&gt;<br>	&lt;cfset var sorted = ""&gt;<br>	&lt;cfset var beginTime="#<a href="http://disq.us/url?url=http%3A%2F%2Farguments.date%3ADPwqMIiobsTuMvC-3lFobxjsdlI&amp;cuid=3321886" rel="nofollow noopener" title="arguments.date">arguments.date</a># 8:00 AM"&gt;<br>	&lt;cfset var EOD = "#<a href="http://disq.us/url?url=http%3A%2F%2Farguments.date%3ADPwqMIiobsTuMvC-3lFobxjsdlI&amp;cuid=3321886" rel="nofollow noopener" title="arguments.date">arguments.date</a># 6:00 PM"&gt;<br>	&lt;cfquery name="sorted" dbtype="query"&gt;<br>		SELECT * FROM <a href="http://disq.us/url?url=http%3A%2F%2Farguments.data%3A1XhtCxXIwjaTo2vM7CN5yq8Q9mk&amp;cuid=3321886" rel="nofollow noopener" title="arguments.data">arguments.data</a> ORDER BY start<br>	&lt;/cfquery&gt;<br>	&lt;cfloop query="sorted"&gt;</p><p>		&lt;cfif beginTime lte sorted.start and (beginTime + arguments.span lte sorted.start ) and beginTime lt EOD&gt;<br>			&lt;cfset tmp = StructNew()&gt;<br>			&lt;cfset tmp["start"] = beginTime&gt;<br>			&lt;cfset tmp["finish"] = sorted.start&gt;<br>			&lt;cfset ArrayAppend(meetings, tmp)&gt;<br>			&lt;cfset beginTime = sorted.end&gt;<br>		&lt;cfelse&gt;<br>			&lt;cfif sorted.end gt beginTime&gt;<br>				&lt;cfset beginTime = sorted.end&gt;<br>			&lt;/cfif&gt;<br>		&lt;/cfif&gt;<br>		&lt;cfif beginTime gte EOD&gt;<br>			&lt;cfbreak&gt;			<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;	<br>	&lt;cfif beginTime + arguments.span lte eod&gt;<br>			&lt;cfset tmp = StructNew()&gt;<br>			&lt;cfset tmp["start"] = beginTime&gt;<br>			&lt;cfset tmp["finish"] = eod&gt;<br>			&lt;cfset ArrayAppend(meetings, tmp)&gt;							<br>	&lt;/cfif&gt;</p><p>	&lt;cfreturn meetings&gt;<br>&lt;/cffunction&gt;</p><p>usage:<br>&lt;cfset meet = locateMeetingTime(data, "1:00", "06/16/06")&gt;<br>&lt;cfset arrMeetings = locateAllPossibleMeetingTimes(data, "1:00", "06/16/06")&gt;<br>&lt;cfdump var="#arrMeetings#"&gt;<br>&lt;cfdump var="#meet#"&gt;</p></div>
	</div>
</div>
		