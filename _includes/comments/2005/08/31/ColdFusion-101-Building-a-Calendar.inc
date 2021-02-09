
<div class="comment" id="c_1713620482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620482">1</a> by Paakay
		posted on 9/1/2005 at 7:34 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Thanks for the calendar. Say you have an event calendar that is linked to a backend database, how do you make an event day a link. Just like you have done for your calendar where you can click on the certain days that you posted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620487">2</a> by Mike Nimer
		posted on 9/1/2005 at 8:18 AM
		</div>
		<div class="comment_text"><p>Ray, don't forget about the new CFCALENDAR tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620489">3</a> by Steve Walker
		posted on 9/1/2005 at 3:17 PM
		</div>
		<div class="comment_text"><p>...and if you're really "lazy", the folks over at Interakt have a new, steroid-enhanced, calendar tool for dreamweaver that does all the work for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620484">4</a> by Joe Rinehart
		posted on 9/1/2005 at 3:49 PM
		</div>
		<div class="comment_text"><p>Hey Ray...cool useful post!  I've got a snippet around that I wrote that does the same thing with forward/back controls.</p><p>I think it's going to butcher the source, but pasting into a page then browsing to it should get the symbols back.</p><p>&lt;cfparam name="url.calendardate" default="#now()#"&gt;<br>&lt;cfset firstDOM = createDate(year(calendarDate), month(calendarDate), 1) /&gt;<br>&lt;table border="1" width="100%"&gt;<br>&lt;cfoutput&gt;<br>&lt;thead&gt;<br>&lt;tr&gt;<br>	&lt;td&gt;&lt;a href="#cgi.script_name#?calendarDate=#urlEncodedFormat(dateAdd("m", -1, calendarDate))#"&gt;&amp;lt;&lt;/a&gt;&lt;/td&gt;<br>	&lt;td colspan="5" align="center"&gt;#dateFormat(calendarDate, "mmm yyyy")#<br>	&lt;td&gt;&lt;a href="#cgi.script_name#?calendarDate=#urlEncodedFormat(dateAdd("m", 1, calendarDate))#"&gt;&amp;gt;&lt;/a&gt;&lt;/td&gt;<br>&lt;/tr&gt;<br>&lt;tr&gt;<br>&lt;cfloop from="1" to="7" index="i"&gt;<br>	&lt;td width="14%"&gt;#dayOfWeekAsString(i)#&lt;/td&gt;<br>&lt;/cfloop&gt;<br>&lt;/tr&gt;<br>&lt;/thead&gt;<br>&lt;/cfoutput&gt;<br>&lt;tbody&gt;<br>&lt;tr&gt;<br>	&lt;cfloop from="1" to="#dayOfWeek(firstDOM) - 1#" index="i"&gt;<br>		&lt;td&gt;&amp;nbsp;&lt;/td&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfoutput&gt;<br>	&lt;cfloop from="1" to="#daysInMonth(firstDOM)#" index="i"&gt;<br>		&lt;cfset today = dateAdd("d", i - 1, firstDOM) /&gt;<br>		&lt;cfif i gt 1 and dayOfWeek(today) eq 1&gt;<br>			&lt;tr&gt;<br>		&lt;/cfif&gt;<br>		&lt;td&gt;&lt;cfif i eq day(now())&gt;&lt;strong&gt;#i#&lt;/strong&gt;&lt;cfelse&gt;#i#&lt;/cfif&gt;&lt;/td&gt;<br>		&lt;cfif dayOfWeek(today) eq 7&gt;<br>			&lt;/tr&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfif dayOfWeek(today) neq 7&gt;<br>		&lt;td colspan="#7 - dayOfWeek(today)#"&gt;&amp;nbsp;&lt;/td&gt;&lt;/tr&gt;<br>	&lt;/cfif&gt;<br>	&lt;/cfoutput&gt;<br>&lt;/tr&gt;<br>&lt;/tbody&gt;<br>&lt;/table&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620488">5</a> by Raymond Camden
		posted on 9/1/2005 at 4:40 PM
		</div>
		<div class="comment_text"><p>Yeah but if they use cfcalendar or interakt, they don't learn anything! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620483">6</a> by Bob Campbell
		posted on 9/2/2005 at 12:04 AM
		</div>
		<div class="comment_text"><p>Great tutorial. I've been at a loss to understand dates in CF, this is a great start. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620485">7</a> by Raymond Camden
		posted on 9/2/2005 at 1:32 AM
		</div>
		<div class="comment_text"><p>Paakay - when I get time, I'll do a followup that shows both the conversion of the code to a custom tag, and how to pass events to it so they highlight, show labels, links, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620494">8</a> by PaulH
		posted on 9/2/2005 at 2:58 AM
		</div>
		<div class="comment_text"><p>yeah cfcalendar would do too but what ray is leaving out is that the calendar knows about iso dates (week starts on monday) and islamic dates (week starts on saturday) as well as  it knows when to flop over into BIDI.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620498">9</a> by Raymond Camden
		posted on 9/2/2005 at 3:28 AM
		</div>
		<div class="comment_text"><p>Paul  - when you say "the calendar" do you mean the cfform calendar? Certainly mine wouldn't.  Or would it - since the days of the week are all function based.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620496">10</a> by PaulH
		posted on 9/2/2005 at 4:07 AM
		</div>
		<div class="comment_text"><p>no, i meant your blog's calendar. cfcalendar's bound and gagged to the gregorian calendar, so while you could fiddle w/the display you could never get a correct BE or HE date to display (it would always interpert those dates as way in the future or way in the past so the days of the week, etc. would be screwed up). it's also pesky like that w/timezones, always casting to clientside tz, even if you did that already server side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620499">11</a> by Raymond Camden
		posted on 9/2/2005 at 4:48 AM
		</div>
		<div class="comment_text"><p>Ah yes, if folks are interested in a much more advanced calendar, they should check the code in blog.cfc. Good call.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620497">12</a> by BM5k
		posted on 9/26/2005 at 1:04 PM
		</div>
		<div class="comment_text"><p>Nice! Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620500">13</a> by Peggy Blanc
		posted on 2/14/2006 at 3:05 AM
		</div>
		<div class="comment_text"><p>Thanks a bundle. I am very happy that people like you exist. Please keep up the good work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620501">14</a> by shashi
		posted on 4/19/2006 at 6:51 PM
		</div>
		<div class="comment_text"><p>anychance for the full snipet of code for the calendar?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620502">15</a> by Raymond Camden
		posted on 4/19/2006 at 11:03 PM
		</div>
		<div class="comment_text"><p>Sashi, it should be in the entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620505">16</a> by Giulia
		posted on 8/25/2006 at 3:32 PM
		</div>
		<div class="comment_text"><p>Hello Ray,</p><p>  Thank you for your tutorial, it's been very helpful indeed. How can be made the calendar to be editable and add events on certain days?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620504">17</a> by Raymond Camden
		posted on 8/25/2006 at 5:34 PM
		</div>
		<div class="comment_text"><p>Giulia, it really is a different topic altogether. You can have a database of events, and you would need to get the events in order to display them in the calendar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620503">18</a> by John Ramon
		posted on 11/9/2006 at 7:22 PM
		</div>
		<div class="comment_text"><p>I put together a sample page using Ray's code explaining one of the options you can use to add linkable info from your database with examples and complete code.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.johnramon.com%2FCFMiniCalendar.cfm%3AYw3AQowgxTSHPjnrc6QEViV-ZRs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.johnramon.com/CFMiniCalendar.cfm">http://www.johnramon.com/CF...</a></p><p>I hope this helps anyone else out there trying to put together a calendar system. Thanks again Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620506">19</a> by Raymond Camden
		posted on 11/9/2006 at 7:26 PM
		</div>
		<div class="comment_text"><p>Nice job. Can I send you a bill for the license for my code? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620509">20</a> by Luis
		posted on 11/28/2006 at 8:23 PM
		</div>
		<div class="comment_text"><p>Let me add to the many deserved thanks, Ray!  This is just the help I needed in getting a calendar off the ground in a pinch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620508">21</a> by gaill
		posted on 12/15/2006 at 4:09 PM
		</div>
		<div class="comment_text"><p>Please help ;)</p><p>I can't get this nice calendar start on monday. as european calendar.</p><p>How can I do this.</p><p>thanks in aadvance for your help ?<br>best regards <br>Gaill</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620510">22</a> by Raymond Camden
		posted on 12/16/2006 at 8:43 PM
		</div>
		<div class="comment_text"><p>Gaill - don't you know that America is number one and everyone needs to do things our way or the terrorists win? (Sorry, couldn't resist. ;)</p><p>So - I think I figured it out and it is a small mod. I first added this line to the very top:</p><p>&lt;cfset dowList = "2,3,4,5,6,7,1"&gt;</p><p>I modified the first block of code like so:</p><p>&lt;cfoutput&gt;<br>&lt;table border="1" width="100%" height="100%"&gt;<br>   &lt;tr&gt;<br>   &lt;cfloop index="x" from="1" to="7"&gt;<br>	  &lt;cfset theDow = listGetAt(dowList, x)&gt;<br>      &lt;th&gt;#dayOfWeekAsString(theDow)#&lt;/th&gt;<br>   &lt;/cfloop&gt;<br>   &lt;/tr&gt;<br>&lt;/cfoutput&gt;</p><p>Then I modified the one line that makes pad to this:</p><p>&lt;cfset pad = listFind(dowList, dow) - 1&gt;</p><p>This seemed to do it. If you need me to send you the entire file, please email me via the Contact address and include your email address.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620511">23</a> by Charlie Cousins
		posted on 7/13/2007 at 3:03 AM
		</div>
		<div class="comment_text"><p>Thanks for the cheap tutelage!  It'll help a lot as a small reference calendar to use as an adjunct to a calendar construct I'm throwing together that will hold and parse values back to a SQLdb as the gui end of a company timesheet app.  (basically, I'm a raw amateur--so I wrote out 7 sets of day numbers over cfinputs set to defined variables holding the SQL data--all within a cfif/cfelseif set that uses the DayOfWeek function to choose where the first day of the month falls.  It ain't pretty yet, though.  Every month shows 31 days.  So I have to figure out an approach to that problem that I can wrap my pea-sized brain around.</p><p>Thanks again for this--and all the other great stuff!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620512">24</a> by Dave Long
		posted on 9/20/2007 at 12:16 AM
		</div>
		<div class="comment_text"><p>Thanks so much, not only for the calendar but for the clarity of your directions. i learned a lot more than just how to design a calendar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620513">25</a> by Chris
		posted on 10/1/2007 at 7:08 AM
		</div>
		<div class="comment_text"><p>Just what I was Looking for - Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620515">26</a> by Dave
		posted on 3/28/2008 at 1:02 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>     The calendar is great.  I tried adapting it to be an event calendar for my site and it's working... except for one little detail.  On months ending with anything other than 31, i get an error at the end of the calendar, although it does render in all cases and does show my event data.</p><p>There's not a great deal of info to go on, just that the error occurs in this line...</p><p>&lt;cfset yourDate = createDate(#year_val#, #month_val#, #x#)&gt;</p><p>I'm using dropdowns to select month and year values, I'm sure it's not very efficient but I'm pretty new to this.  An ideas would be greatly appreciated.</p><p>&lt;form name="cal_select" method="get" action="#CGI.script_name#"&gt;	<br>	&lt;div align="center"&gt;Select Month - Select Year&lt;/div&gt;<br>	&lt;p align="center"&gt;</p><p>  &lt;select name="get_month" onchange="month()"&gt;<br>    &lt;option&gt;Select Month&lt;/option&gt;	<br>    &lt;cfloop from="1" to="12" step="1" index="x"&gt;<br>      &lt;cfoutput&gt;	<br>        &lt;option value="#x#"&gt;#monthasString(x)#&lt;/option&gt;			<br>      &lt;/cfoutput&gt;<br>    &lt;/cfloop&gt;<br>  &lt;/select&gt;</p><p>  &lt;select name="get_year" onchange="year()"&gt;<br>    &lt;option&gt;Select Year&lt;/option&gt;	<br>    &lt;cfloop from="2003" to="2010" step="1" index="x"&gt;<br>      &lt;cfoutput&gt;	<br>        &lt;option value="#x#"&gt;#x#&lt;/option&gt;			<br>      &lt;/cfoutput&gt;<br>    &lt;/cfloop&gt;<br>  &lt;/select&gt;<br>  &lt;p align="center"&gt;<br>  &lt;input type="submit" name="Go" value="GO" /&gt;<br>  &lt;cfoutput&gt;<br>    &lt;input name="month_val" value="#month(now())#" /&gt;<br>  &lt;/cfoutput&gt;<br>  &lt;cfoutput&gt;<br>  &lt;input name="year_val" value="#year(now())#" /&gt;<br>  &lt;/cfoutput&gt;</p><p>  &lt;cfoutput&gt;<br>&lt;/p&gt;&lt;/form&gt;</p><p>&lt;form name="caltest1" method="post"&gt;</p><p>&lt;table border="1" width="100%"&gt;<br>   &lt;tr&gt;<br>   &lt;cfloop index="x" from="1" to="7"&gt;<br>      &lt;th&gt;&lt;span class="style2 style4"&gt;#dayOfWeekAsString(x)#&lt;/span&gt;&lt;/th&gt;<br>   &lt;/cfloop&gt;<br>   &lt;/tr&gt;<br>&lt;/cfoutput&gt;</p><p>&lt;cfparam name="year_val" type="integer" default="#DatePart('yyyy', Now())#"&gt;<br>&lt;cfparam name="month_val" type="integer" default="#DatePart('m', Now())#"&gt;</p><p>&lt;cfset firstOfTheMonth = CreateDate(#year_val#, #month_val#, 1)&gt;<br>&lt;cfset dow = dayofWeek(firstOfTheMonth)&gt;<br>&lt;cfset pad = dow - 1&gt;</p><p>&lt;cfoutput&gt;<br>&lt;tr&gt;<br>&lt;/cfoutput&gt;</p><p>&lt;cfif pad gt 0&gt;<br>   &lt;cfoutput&gt;&lt;td colspan="#pad#"&gt;&amp;nbsp;&lt;/td&gt;&lt;/cfoutput&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfset days = daysInMonth(#month_val#)&gt;<br>&lt;cfset counter = pad + 1&gt;</p><p>&lt;cfloop index="x" from="1" to="#days#"&gt;<br>   &lt;cfif x is day(now())&gt;<br>      &lt;cfoutput&gt;&lt;td bgcolor="yellow"&gt;&lt;/cfoutput&gt;<br>   &lt;cfelse&gt;<br>      &lt;cfoutput&gt;&lt;td&gt;&lt;/cfoutput&gt;<br>   &lt;/cfif&gt;</p><p>&lt;cfset yourDate = createDate(#year_val#, #month_val#, #x#)&gt;</p><p>&lt;cfquery name="Events" datasource="4NYPElectrical"&gt;<br>SELECT *<br>FROM Events, Buildings<br>WHERE Buildings.BuildingID=Events.Site AND Start_Date=#CreateODBCDate(yourDate)#<br>&lt;/cfquery&gt;</p><p>   &lt;cfoutput&gt;<br>     &lt;div align="center"&gt;<br>     &lt;strong&gt;#DateFormat(yourDate, "mmmm d, yyyy")#&lt;/strong&gt;&lt;/cfoutput&gt;<br>   &lt;p&gt;	 &lt;cfoutput query="Events"&gt;</p><p>	   &lt;div align="center"&gt;#BuildingName# - #Desc#&lt;BR&gt;<br>&lt;/div&gt;&lt;p&gt;</p><p>	 &lt;/cfoutput&gt;<br>       &lt;/td&gt;<br>       &lt;/div&gt;</p><p>   &lt;cfset counter = counter + 1&gt;<br>   &lt;cfif counter is 8&gt;<br>      &lt;cfoutput&gt;&lt;/tr&gt;</p><p>	  &lt;/cfoutput&gt;<br>      &lt;cfif x lt days&gt;<br>         &lt;cfset counter = 1&gt;<br>         &lt;cfoutput&gt;<br>         &lt;tr&gt;<br>         &lt;/cfoutput&gt;<br>      &lt;/cfif&gt;<br>   &lt;/cfif&gt;<br>&lt;/cfloop&gt;</p><p>&lt;cfif counter is not 8&gt;<br>   &lt;cfset endPad = 8 - counter&gt;<br>   &lt;cfoutput&gt;<br>   &lt;td colspan="#endPad#"&gt;&amp;nbsp;&lt;/td&gt;</p><p>   &lt;/tr&gt;&lt;/cfoutput&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfoutput&gt;<br>&lt;/table&gt;<br>&lt;/cfoutput&gt;<br>&lt;cfoutput&gt;<br>&lt;input name="date" value="#yourDate#" /&gt;<br>&lt;/cfoutput&gt;<br>&lt;/form&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620518">27</a> by Raymond Camden
		posted on 3/28/2008 at 7:54 PM
		</div>
		<div class="comment_text"><p>In the future, please do not post large code blocks. Thanks.</p><p>Change this line</p><p>&lt;cfset days = daysInMonth(#month_val#)&gt;</p><p>to</p><p>&lt;cfset days = daysInMonth(firstOfTheMonth)&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620519">28</a> by Dave
		posted on 3/28/2008 at 8:00 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>    Thanks, worked great, sorry about the code!</p><p>- Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620517">29</a> by Vanita
		posted on 7/18/2008 at 3:13 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Thanx for the code...its nice and very much helpful too....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620516">30</a> by Tom
		posted on 6/4/2009 at 8:09 PM
		</div>
		<div class="comment_text"><p>better to hide this: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.johnramon.com%2FCFIDE%2Fadministrator%2Findex.cfm%3ADsg1dOU2vMn7RVsyukixYW3Bc4k&amp;cuid=3321886" rel="nofollow noopener" title="http://www.johnramon.com/CFIDE/administrator/index.cfm">http://www.johnramon.com/CF...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620530">31</a> by Sammy
		posted on 8/10/2009 at 11:39 PM
		</div>
		<div class="comment_text"><p>HI Ray,<br>Thanks a lot for this post. I am glad that i used this code and this worked simply fine! A small question of mine would be....how can we fill in the last row with the next month's starting dates, that way there are no blank spaces?</p><p>Thanks in advance.<br>Regards,<br>Sam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620533">32</a> by Raymond Camden
		posted on 8/11/2009 at 12:48 AM
		</div>
		<div class="comment_text"><p>Simple, just increment a counter. So the first space is 1, then 2, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620523">33</a> by Sammy
		posted on 8/11/2009 at 5:14 PM
		</div>
		<div class="comment_text"><p>Cool!! That worked.....thanks a lot....<br>I followed your idea of creating a cfwindow with javascript and ran into a couple of issues.....<br>1) It doesn't work with IE (i guess the event.pageX and event.pageY)<br>2) I am unable to pass URL variables to the window to display the events on a particular date....</p><p>Any help would be greatly appreciated!</p><p>Thanks beforehand!<br>Sam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620531">34</a> by Raymond Camden
		posted on 8/11/2009 at 6:17 PM
		</div>
		<div class="comment_text"><p>For 1- consult the web. :) I ran into myself but never bothered to fix it for IE, but it should be a simple matter of googling for "IE version of event.pageX"</p><p>As for 2, I'd need to know more about how you launch the window, but you can pass arguments to the URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620525">35</a> by Sammy
		posted on 8/11/2009 at 6:40 PM
		</div>
		<div class="comment_text"><p>HI Ray,<br>I appreciate your prompt response! some how i managed to solve the 'issue 1'. But still roaming around...for the 'issue2'<br>I have some records to show in the window(cfwindow) that are populated from Database. And these records are extracted basing on the date....so i need to pass the date as a URL variable to get the records!</p><p>Hope this makes sense...</p><p>Thanks a million!<br>Sam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620524">36</a> by Raymond Camden
		posted on 8/11/2009 at 6:41 PM
		</div>
		<div class="comment_text"><p>Well how are you launching the window now? What's that code? I assume it's based on a hyperlink on your event? (About to go dark for a few hours.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620535">37</a> by Sammy
		posted on 8/11/2009 at 6:59 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br> I got the window working with URL variables! <br>Surprisingly it works fine when i press cntrl and hit the link....<br>I really have no idea what is wrong!<br>Here is my code..<br>&lt;cfset event_date=DateFormat(#c1#,"yyyy-mm-dd")&gt;<br>	&lt;cfform method="post"&gt;<br>		&lt;a href="" onclick="ColdFusion.Window.create('mywindow4','Results','dater_results_cf8.cfm?today=#event_date#',{x:100,y:100,modal:true,closable:true,draggable:true,resizable:true,center:true})"&gt;<br>	&lt;font size="4" color="red"&gt;#getalldates.recordcount#&lt;/font&gt;&lt;/a&gt;&lt;/cfform&gt;</p><p>Thanks!<br>Sam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620534">38</a> by Raymond Camden
		posted on 8/11/2009 at 10:38 PM
		</div>
		<div class="comment_text"><p>I'm confused - you said it works when you ctrl click, but not when you do a regular click?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620529">39</a> by Sammy
		posted on 8/11/2009 at 11:35 PM
		</div>
		<div class="comment_text"><p>Hey Ray,<br>You got out early from the dark :)<br>And you guessed it correct. When i hold the cntrl key and click the link it works!<br>Unfortunately....the file size of my code which is done with ColdFusion windows has become massive and my boss wanted me to try it in jquery! Any suggestion in these lines?</p><p>Thanks!<br>Sam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620528">40</a> by Raymond Camden
		posted on 8/11/2009 at 11:42 PM
		</div>
		<div class="comment_text"><p>Well jQuery UI has a dialog option that works much like CFWINDOW. You could try that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620526">41</a> by Sammy
		posted on 8/11/2009 at 11:44 PM
		</div>
		<div class="comment_text"><p>Thanks Ray!</p><p>I will give it a shot.</p><p>Regards,<br>Sam,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620527">42</a> by sammy
		posted on 8/14/2009 at 9:54 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I have a ColdFusion event calender populated from database. I started digging into jQuery and created some popup windows when the user clicks on an event on a certain day. <br>But how do i pass the date as url variable to the target page in jQuery? Any help is greatly appreciated!</p><p>Thanks,<br>Sam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620522">43</a> by Raymond Camden
		posted on 8/14/2009 at 11:59 PM
		</div>
		<div class="comment_text"><p>If ID is a unique variable for the event, you just add it to your link. Unless I'm missing something:</p><p>&lt;a href="event.cfm?id=#id#"&gt;View&lt;/a&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620537">44</a> by Sam
		posted on 8/15/2009 at 3:24 AM
		</div>
		<div class="comment_text"><p>Thanks Ray,</p><p>I will try it out...and let you know if there are any concerns.</p><p>Thanks for your time!<br>Sam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620536">45</a> by Sammy
		posted on 8/16/2009 at 3:27 AM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I'm stuck with this....hope you can pull me off!<br>As i said, i have a calender with events populated into the table data from database. All i need is.... to show a popup window (like fading in and fading out) in response to the event clicked.<br>I tried doing it with a div tag basically hidden and faded in when the event is clicked.<br>When clicked on the event i need the popup window to show the events on that particular date.</p><p>Kindly put me on the right track (if at all this makes sense :))</p><p>Thanks,<br>Sam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620539">46</a> by John Ramon
		posted on 8/16/2009 at 7:12 AM
		</div>
		<div class="comment_text"><p>Hey Sam can you post your code in a test folder so we can see what your doing. From what I'm hearing I'm thinking your on click event is not triggering you call.</p><p>John Ramon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620538">47</a> by sammy
		posted on 8/17/2009 at 7:18 PM
		</div>
		<div class="comment_text"><p>HI John,</p><p>Thanks for your kind response. I think you are right! my click event is not triggering the call to the page. I will try in these lines and post the code if i couldn't draw anything out of it.</p><p>Thanks again!<br>Sam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620540">48</a> by sammy
		posted on 8/18/2009 at 1:49 AM
		</div>
		<div class="comment_text"><p>HI Ray,<br>How can i post the form data from the calling page to the called page through url and using jQuery?<br>I tried using $.post("addtext_dater.cfm",{Data:date},show_popup()); I need the url variable to be the date.(something like addtext_dater.cfm?today=#date#)<br>I am getting the correct date into my jQuery function though!</p><p>Thanks in advance.<br>Sam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620542">49</a> by Raymond Camden
		posted on 8/18/2009 at 1:54 AM
		</div>
		<div class="comment_text"><p>If you passed the data value to the function, than your post just needs to include it, like you have {Data:date}. If date was the name of your argument, then it will be sent to addtext_dater.cfm as <a href="http://disq.us/url?url=http%3A%2F%2Fform.date%3Ak1O8s2EnPj43IxHFWFBeczE78E8&amp;cuid=3321886" rel="nofollow noopener" title="form.date">form.date</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620541">50</a> by sammy
		posted on 8/18/2009 at 4:39 AM
		</div>
		<div class="comment_text"><p>HI Ray,<br>Thanks for the reply. I tried to dump the form variables in addtext_dater.cfm, the form field is empty. Am i going on wrong path in terms of jQuery?</p><p>Thanks in advance.</p><p>Sam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620544">51</a> by Raymond Camden
		posted on 8/18/2009 at 4:57 AM
		</div>
		<div class="comment_text"><p>Show us the link code and the JS function again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620545">52</a> by Sam
		posted on 8/18/2009 at 6:16 AM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>Here is the outline of link and the js file.<br>&lt;form id="myform"&gt;&lt;input type="hidden" value="#date#" id="event_date"/&gt;&lt;a href="" name="popup"&gt;+&lt;/a&gt;&lt;/form&gt;<br>When the user clicks on "+" i am getting the href attribute via the name and triggering a .click() function in jQuery.<br>$.post("addtext_dater.cfm",{Data:date},show_popup()); <br>In the call back function show_popup() i am just fading the div tag in. <br>The only problem is i guess with the post method where i am trying to append the date value to URL. I am kind of confused in how to pass the date value as a URL parameter to addtext_dater.cfm page.</p><p>Forgive me if this doesn't make any sense.</p><p>Thanks for your patience.<br>Sam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620543">53</a> by Raymond Camden
		posted on 8/19/2009 at 7:31 PM
		</div>
		<div class="comment_text"><p>I'm not quite getting it. Can you use Pastebin and put more of the code up there?</p><p>Basically your click event is tied to a link. Your ID is in a Form around that link. In theory, you can tell jQuery to get the Parent of the form, then 'find' the event_date id child under that. That would give you the hidden form field.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620546">54</a> by Sam
		posted on 8/20/2009 at 11:35 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>At last ....i figured it out!.....I used capital letter for a jQuery function and i guess that is where i messed up.......<br>I recoded a part of it and its working now.....</p><p>Here is my new doubt....i know its kind of a child stuff for you...but i am trying to get it straight....<br>I have a component with queries wrapped inside functions. When i create an object for the component in the calling page..does it contain all the functions (something like caching all the functions)?</p><p>Please let me know.<br>Thanks a million for your time and suggestion.</p><p>Sam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620552">55</a> by Raymond Camden
		posted on 8/21/2009 at 1:45 AM
		</div>
		<div class="comment_text"><p>@Sam - I don't mind answering this, but if you have more questions, lets switch to the Contact Form so as to keep things here on topic. The short answer is yes - when you create an instance of a component, it contains all the methods inside.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620551">56</a> by Mistazam
		posted on 4/6/2011 at 11:08 AM
		</div>
		<div class="comment_text"><p>thnks a lots dude! simple basic calendar. awesome :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620555">57</a> by Scot Hershman
		posted on 9/30/2011 at 8:30 PM
		</div>
		<div class="comment_text"><p>Wow 6 years old and it just helped me out in a pinch. Making me look good!</p><p>Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620556">58</a> by Raymond Camden
		posted on 9/30/2011 at 8:31 PM
		</div>
		<div class="comment_text"><p>Always happy to know my code still works. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620553">59</a> by Omar
		posted on 1/29/2012 at 4:28 AM
		</div>
		<div class="comment_text"><p>Is there a simple way to show only the current day or the week view?</p><p>I'd like to be able to show only one day (today) or the snapshot of the current week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620557">60</a> by Omar
		posted on 1/29/2012 at 4:58 AM
		</div>
		<div class="comment_text"><p>This help me loads. This is how to get the start of the week:</p><p>&lt;!--- show the start of the current week ---&gt;<br>&lt;cfset dowdate = DateFormat(DateAdd("d", "-#DayOfWeek(Now()) - 1#", Now()), "dddd, mmmm d, yyyy")&gt;<br>&lt;cfset dow = DatePart("d",dowdate)&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620558">61</a> by Rich Hefter
		posted on 7/9/2012 at 10:50 PM
		</div>
		<div class="comment_text"><p>Joe Rinehart's code had a small bug.  It bolds the day of every month equal to the current day of the month (well, you get it).  But I linked the scrolling.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620554">62</a> by lorrie
		posted on 12/18/2012 at 10:46 PM
		</div>
		<div class="comment_text"><p>i just recently learned coldfusion ang i need help from anyone who have experience in creating a calendar using hijri format.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1747456768">
	<div>
		<img src="https://disqus.com/api/users/avatars/yukonzach.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1747456768">63</a> by yukonzach
		posted on 12/17/2014 at 9:49 PM
		</div>
		<div class="comment_text"><p>Just discovered something crazy.  When I put "DaysInMonth" in a DateFormat function for the month of December, one day got subtracted from the day display (i.e. "30" showed for December.  But when I left the "DaysInMonth" function on its own, the correct day showed.  Using CF11.</p><p>#DateFormat(now(), "mm")#/#DateFormat(DaysInMonth(now()), "dd")#/#DateFormat(now(), "yyyy")#</p><p>12/30/2014</p><p>#daysInMonth(now())#</p><p>31</p><p>Just FYI.  Thanks for the blog Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1747533855">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1747533855">64</a> (In reply to <a href="#c_1747456768">#63</a>) by Raymond Camden
		posted on 12/17/2014 at 10:41 PM
		</div>
		<div class="comment_text"><p>Woah. Got to be something simple. Looking.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1747535434">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1747535434">65</a> (In reply to <a href="#c_1747456768">#63</a>) by Raymond Camden
		posted on 12/17/2014 at 10:42 PM
		</div>
		<div class="comment_text"><p>Oh I see it. You are running dateFormat on 31, not the actual date. That's the problem. It is like you did dateFormat("31", "dd"). I bet it treated it like the year AD 31, month 1.</p></div>
	</div>
</div>
		