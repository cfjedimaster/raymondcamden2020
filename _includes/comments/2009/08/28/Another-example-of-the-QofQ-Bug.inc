
<div class="comment" id="c_1713717960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717960">1</a> by Matt Williams
		posted on 8/28/2009 at 5:44 PM
		</div>
		<div class="comment_text"><p>I would actually consider that expected behavior more than a bug. As you said, "This comes from the fact that ColdFusion noticed they were dates and treated them as such. I think that makes sense..."</p><p>As for the chart formatting, I haven't used cfchart in a long time. Seems like the issue is how to get a date field from a database into cfchart in a specific format.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717959">2</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 8/28/2009 at 5:45 PM
		</div>
		<div class="comment_text"><p>Did it really change the query though? You applied a date (now()-loop1) to the column, you just formatted it (Using a 'date' method at that, dateformat(). Wouldn't the use of that function technically convert to a date object [if possible] if it weren't already?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717961">3</a> by Raymond Camden
		posted on 8/28/2009 at 5:45 PM
		</div>
		<div class="comment_text"><p>I do expect CF to notice the date-like formats and consider the data as dates. But it should not change the original query. A QofQ should not change the original query in any way. It should just read it - nothing more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717964">4</a> by Raymond Camden
		posted on 8/28/2009 at 5:46 PM
		</div>
		<div class="comment_text"><p>@Cutter: If I output the query and it shows X, and then Y, then to me that is a change. Period. :) Do you not agree?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717962">5</a> by Matt Williams
		posted on 8/28/2009 at 6:03 PM
		</div>
		<div class="comment_text"><p>I would almost say that it is a bug that doing the dump of the original query does not format it into the {ts} date object. It seems CF should recognize the date at that point. Obviously running the QofQ forces the recognition. I just tried a normal cfoutput query and can output the date in other formats (but if left alone it outputs as originally input).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717981">6</a> by Raymond Camden
		posted on 8/28/2009 at 6:08 PM
		</div>
		<div class="comment_text"><p>@Matt - Wait - are you serious? If I make a variable with the value "4-8-1973", I don't care if it is a valid date or not, CF should NOT format it as a date unless I specifically run dateFormat on it. That's INSANE MAN! (Sorry to yell, but I'm in awe here and want to start a rumble. ;)  It is a good thing CF is typeless, and it is a good thing that CF can _treat_ a string as a date, but CF shouldn't reformat data w/o me asking it to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717980">7</a> by Joel Cox
		posted on 8/28/2009 at 6:26 PM
		</div>
		<div class="comment_text"><p>QoQ will also "helpfully" convert strings to numbers:</p><p>&lt;cfset myQuery = QueryNew("agent,name") /&gt;<br>&lt;cfset QueryAddRow(myQuery, 1) /&gt;<br>&lt;cfset QuerySetCell(myQuery, "agent", "007") /&gt;<br>&lt;cfset QuerySetCell(myQuery, "name", "James Bond") /&gt;<br>&lt;cfset QueryAddRow(myQuery, 1) /&gt;<br>&lt;cfset QuerySetCell(myQuery, "agent", "86") /&gt;<br>&lt;cfset QuerySetCell(myQuery, "name", "Maxwell Smart") /&gt;<br>&lt;cfdump var="#myQuery#"&gt;<br>&lt;cfquery dbtype="query" name="queryAgents"&gt;<br>	select agent, name from myQuery<br>&lt;/cfquery&gt;<br>&lt;cfdump var="#queryAgents#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717982">8</a> by Matt Williams
		posted on 8/28/2009 at 6:36 PM
		</div>
		<div class="comment_text"><p>@Ray - I see your point and, no, CF shouldn't run willy nilly with variables like that. But at some point we expect the typeless behavior to take over. So who is to say when that should happen? I guess when dumping a query, I expect to see the data in its raw format, such as the {ts} format. That is what I always get from a normal query from a DB.</p><p>I guess I would prefer that QofQ translates that to a date object so it could keep the sorting I would expect (year-month-day, not alphabetical). If the QofQ did not do that translation, as you mentioned, a potential Order By would get wacky.</p><p>Oh, and no sweat over the yelling. Nothing like a good Friday rumble distraction. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717983">9</a> by Matt Williams
		posted on 8/28/2009 at 6:42 PM
		</div>
		<div class="comment_text"><p>@Joel - Sounds consistent. That would be a case where defining the column type in the QueryNew would be even more necessary.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717984">10</a> by Qasim Rasheed
		posted on 8/28/2009 at 6:45 PM
		</div>
		<div class="comment_text"><p>I would definitely consider this a bug as CF should not making any changes to data types. Several years ago we faced a similar situation where CAS Registry Numbers (which can be in this format XX-XX-XX) were converted by ColdFusion to dates if we ran a Query of Query. The database had the field in VarChar2 format.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717986">11</a> by Raymond Camden
		posted on 8/28/2009 at 6:53 PM
		</div>
		<div class="comment_text"><p>@Matt: But we aren't disagreeing. I do think QoQ should translate it to a date object. But it should do this on a COPY of the query. Not the original query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717987">12</a> by Joel Cox
		posted on 8/28/2009 at 6:55 PM
		</div>
		<div class="comment_text"><p>@Matt</p><p>Yes, defining the column types fixes the problem. <br>That feature was introduced several CF versions ago (I forget offhand which). Before that it was a real problem, now it's just something to look out for.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717990">13</a> by Joel Cox
		posted on 8/28/2009 at 6:58 PM
		</div>
		<div class="comment_text"><p>@Ray</p><p>I finally see what you're getting at. Didn't read so closely. When I went back and cfdumped my original 'myQuery', it, too, had changed, not just the QoQ version. I agree that this isn't good.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717994">14</a> by Daniel Budde
		posted on 8/28/2009 at 7:26 PM
		</div>
		<div class="comment_text"><p>Wow, like Joel it took me a moment to see that it is changing the original query (mydata) and not just your new QofQ (query4graph).  I would definetly call that a bug.  I could see it changing your QofQ because you did not explicitly set the column type, but man that is definitely an issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717993">15</a> by Steve W
		posted on 8/29/2009 at 3:24 AM
		</div>
		<div class="comment_text"><p>For what it is worth, my guess is that in order for QofQ to work it has to strip everything down to basic SQL query language and it does that before it renderers the html.   Try using  DateFormat in the RDS Query Builder...ahhhh, try again.  CF is smart enought to know it has to remove the formatting before it can perform the QofQ. While not the desired effect, it does make sense.  The "obvious" solution would be the automatic creation (in memory) of temp tables (e.g. mydata_temp) that represent all the data tables/views useds in all the QofQs.  I am glad I am not the CF engineer that has to figure out how to make that happen.</p></div>
	</div>
</div>
		