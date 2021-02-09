
<div class="comment" id="c_1713673419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673419">1</a> by todd sharp
		posted on 10/19/2007 at 6:25 PM
		</div>
		<div class="comment_text"><p>Rather then submit the whole form (unless that is necessary) he could have used getURL like this too:</p><p>onchange="getURL('test.cfm?date='+testCal.selectedDate, '_blank');"</p><p>Now be careful because that will pass the full date format (regardless of any mask applied to the tag) which would look like this:</p><p>test.cfm?date=Wed Oct 17 00:00:00 GMT-0400 2007</p><p>You could also get fancier with ActionScript and do something like this (broken out on seperate lines for readability:</p><p>onchange="getURL('test.cfm?month=<br>'+(testCal.selectedDate.getMonth()+1)+<br>'&amp;day='+testCal.selectedDate.getDate()+<br>'&amp;year='+testCal.selectedDate.getFullYear(), <br>'_blank');"</p><p>Note that I add 1 to the month because of the wonderful zero-based index in flashWhich would evaluate to:</p><p>test.cfm?month=10&amp;day=19&amp;year=2007</p><p>It's a good idea to keep the old AS dictionary bookmarked to help with simple AS functions like this when the need arrises:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fsupport%2Fflash%2Faction_scripts%2Factionscript_dictionary%2F%3AY1niRLtQQGjb_h6aEr8A2ndwll4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/support/flash/action_scripts/actionscript_dictionary/">http://www.adobe.com/suppor...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673425">2</a> by Raymond Camden
		posted on 10/19/2007 at 6:28 PM
		</div>
		<div class="comment_text"><p>Nice Todd. Is there a built in URL encode function that could be used for the first example?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673426">3</a> by todd sharp
		posted on 10/19/2007 at 6:35 PM
		</div>
		<div class="comment_text"><p>You could do this:</p><p>getURL('testdate.cfm?date='+escape(testCal.selectedDate), '_blank');</p><p>But if you dump the date you'll notice that CF does not grok the AS dateformat and you'll get a bogus year.</p><p>So maybe your solution is the way to go - or my second example above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673427">4</a> by Mikkel Johansen
		posted on 10/19/2007 at 6:41 PM
		</div>
		<div class="comment_text"><p>I am using the following code to change the source of a CFDIV when a date is selected.</p><p>&lt;script language="javascript"&gt;<br>	function calendarChanged(day, month, year) {<br>		ColdFusion.navigate(<br>			'#cgi.scriptname#?action=activities&amp;selectedDayStr=' + day + ',' + month + ',' + year,<br>			'mydiv'); <br>	}<br>&lt;/script&gt;</p><p>&lt;cfform name="myform" action="test3.cfm"&gt;<br>&lt;cfcalendar name="cal"<br>   onchange="getURL('javascript:calendarChanged(\'' + selectedDate.selectedDate.getDate() + '\',\''+ (selectedDate.selectedDate.getMonth()+1) + '\',\''+ selectedDate.selectedDate.getFullYear() + '\')')"&gt;<br>&lt;/cfform&gt;</p><p>I did not think of just submitting the FORM, but is it possible to make change the target, so it is connected (is that the right word?) to a CFDIV ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673429">5</a> by todd sharp
		posted on 10/19/2007 at 7:12 PM
		</div>
		<div class="comment_text"><p>You can do a POST with CF.navigate - check the docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673431">6</a> by Gareth
		posted on 10/19/2007 at 7:33 PM
		</div>
		<div class="comment_text"><p>In AS, there's also a<br>DateField.dateToString(myDate, "MM/DD/YYYY")<br>to convert a date to a string formatted however you want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673432">7</a> by Morten Kruse
		posted on 10/25/2007 at 4:57 PM
		</div>
		<div class="comment_text"><p>I use the method</p><p>onchange="getURL('test.cfm?month=<br>'+(testCal.selectedDate.getMonth()+1)+<br>'&amp;day='+testCal.selectedDate.getDate()+<br>'&amp;year='+testCal.selectedDate.getFullYear(), <br>'_blank');"</p><p>But if i click on the date already chosen I get a <br>undefined-NaN-undefined</p><p>Month undefined<br>date not a number<br>Year undefined.</p><p>How can I prevent this error?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673420">8</a> by todd sharp
		posted on 10/25/2007 at 5:30 PM
		</div>
		<div class="comment_text"><p>It's not an error - when you re-select the date it sets the value to blank/null/undefined.  You can switch to a JS function and conditionally send the user to another page if the date exists/is not blank.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673421">9</a> by Anthony
		posted on 10/30/2007 at 3:47 PM
		</div>
		<div class="comment_text"><p>Works EXACTLY as I need it to... BUT<br>This test page will not work in IE7.  I have NO idea why.<br>IT works fine in Firefox.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.festing.com%2Ftest.cfm%3AtsZJ9frGivygBjmHKKtbsYHWxvw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.festing.com/test.cfm">http://www.festing.com/test...</a></p><p>Here is my entire page...<br>&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%3AlsD79NC9EpzB4LCkih033Se6Csw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">http://www.w3.org/TR/xhtml1...</a>"&gt;<br>&lt;html&gt;<br>&lt;head&gt;<br>&lt;/head&gt;</p><p>&lt;body&gt;<br>&lt;cfform  name="abc"&gt;<br>&lt;cfcalendar  name="testCal"  width="250" <br>onchange="getURL('test.cfm?date='+testCal.selectedDate.getFullYear()+'-'+(testCal.selectedDate.getMonth()+1)+'-'+testCal.selectedDate.getDate(), '_self');"<br>&gt;<br>&lt;/cfform&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p><p>Since this is not working, and I have not idea why, and I need a calendar jump... I'd like to know what/where/how to see and example of a Flex2 calendar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673422">10</a> by WilGeno
		posted on 11/7/2007 at 8:53 PM
		</div>
		<div class="comment_text"><p>I ran your test page through my IE debugging tools. This is what I found. Two script errors. Also, I ran you code you posted on my cfmx 7.02 server and it works fine.</p><p>---------------<br>Script Error Informations:<br>====================<br>OS Information: Microsoft Windows XP Professional Service Pack 2 (Build 2600)<br>OS Language: en-us<br>Browser: Microsoft Internet Explorer 4.0 (compatible; MSIE 7.0; Windows NT 5.1; .NET CLR 1.1.4322; .NET CLR 2.0.50727) 0<br>Web Browser Language: en-us<br>User Agent: Mozilla/4.0 (compatible; MSIE 7.0; Windows NT 5.1; .NET CLR 1.1.4322; .NET CLR 2.0.50727)<br>Cookies enabled<br>Java enabled<br>-------------<br>Script Error:<br>//----------------<br>Line: 53<br>Character: 1<br>Code: 0<br>Error Message: Object expected<br>URL: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.festing.com%2Ftest.cfm%3AtsZJ9frGivygBjmHKKtbsYHWxvw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.festing.com/test.cfm">http://www.festing.com/test...</a><br>//----------------</p><p>-------------<br>Script Error:<br>//----------------<br>Line: 5<br>Character: 1<br>Code: 0<br>Error Message: Object doesn't support this property or method<br>URL: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.festing.com%2FCFIDE%2Fscripts%2Fcfformhistory.cfm%3Ajokz-Ip_BKPvobtCit9FLMCL6Hg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.festing.com/CFIDE/scripts/cfformhistory.cfm">http://www.festing.com/CFID...</a><br>//----------------</p><p>Regards</p></div>
	</div>
</div>
		