
<div class="comment" id="c_1713735728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735728">1</a> by David Hammond
		posted on 10/14/2011 at 6:07 PM
		</div>
		<div class="comment_text"><p>Okay, not sure why I felt compelled to do this while I have a million other things to do this morning, but there you go.  My solution is not really weird or insane, but it is stupid.  It's based on the fact that this is the FRIDAY Puzzler.</p><p>	function mycheatfunc(d)<br>	{<br>		var dayofweek = 0;<br>		var friday = CreateDate(Year(Now()),Month(Now()),Day(Now()));<br>		d = CreateDate(Year(d),Month(d),Day(d));<br>		dayofweek = (7006 + dateDiff("d",friday,d)) % 7;<br>		if (dayofweek is 0) {<br>			dayofweek = 7;<br>		}<br>		return dayofweek;<br>	}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735748">2</a> by Raymond Camden
		posted on 10/14/2011 at 6:16 PM
		</div>
		<div class="comment_text"><p>As just an FYI, you don't have to name your func "mycheatfunc" - that's just how I named mine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735755">3</a> by Angelo Marras
		posted on 10/14/2011 at 6:53 PM
		</div>
		<div class="comment_text"><p>Probably not crazy enough...</p><p>&lt;cffunction name="mycheatfunc"&gt;<br>	&lt;cfargument name="d" required="true"&gt;</p><p>	&lt;cfset var myWeekday = DateFormat(arguments.d, "dddd")&gt;<br>	&lt;cfset var arWeekday = ArrayNew(1)&gt;</p><p>	&lt;cfset arWeekday[1] = "Sunday"&gt;<br>	&lt;cfset arWeekday[2] = "Monday"&gt;<br>	&lt;cfset arWeekday[3] = "Tuesday"&gt;<br>	&lt;cfset arWeekday[4] = "Wednesday"&gt;<br>	&lt;cfset arWeekday[5] = "Thursday"&gt;<br>	&lt;cfset arWeekday[6] = "Friday"&gt;<br>	&lt;cfset arWeekday[7] = "Saturday"&gt;</p><p>	&lt;cfreturn  ArrayFind(arWeekday, myWeekday)&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735746">4</a> by Tyson
		posted on 10/14/2011 at 8:39 PM
		</div>
		<div class="comment_text"><p>I picked a fixed date to serve as a known day of the week and figured the requested day of the week from that.</p><p>function uberDayOfWeek(date){<br>  /* A fixed day that I'll know the day of the week.<br>     I've also been catching up on Doctor Who... */<br>  var fixedDateInTime = '2011-4-22';<br>  var fixedDayOfWeek = 6;<br>  var result = fixedDayOfWeek;</p><p>  date = dateFormat(date, "yyyy-m-d");</p><p>  // Get difference between our days of the week<br>  var dayDiff = dateDiff("d", fixedDateInTime, date);<br>  var dateIsBefore = (dayDiff &lt; 0);<br>  dayDiff = abs(dayDiff mod 7);</p><p>  /* Add/subtract days from our fixed day of the week<br>     to get the requested day of the week */<br>  for(var i=1; i &lt;= dayDiff; i++){<br>    if(dateIsBefore)<br>      result = (result == 1) ? 7 : result-1;<br>    else<br>      result = (result == 7) ? 1 : result+1;<br>  }</p><p>  return result;<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735756">5</a> by Joshua Miller
		posted on 10/14/2011 at 10:34 PM
		</div>
		<div class="comment_text"><p>Check out my solution on Pastebin: <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FB3G8hdQk%3AG4WWmWEaOvwL4dfIFa8GfyIbWHs&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/B3G8hdQk">http://pastebin.com/B3G8hdQk</a> - hope you don't have anything important running when you test it :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735747">6</a> by Raymond Camden
		posted on 10/14/2011 at 10:35 PM
		</div>
		<div class="comment_text"><p>Wow. That. Is. Evil.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735742">7</a> by Joshua Miller
		posted on 10/14/2011 at 10:41 PM
		</div>
		<div class="comment_text"><p>I considered just doing an http() call to the page and extracting out your solution and then evaluating it, but I felt that might be pushing the limits of the rules a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735739">8</a> by Raymond Camden
		posted on 10/14/2011 at 10:42 PM
		</div>
		<div class="comment_text"><p>Actually I would have accepted that too. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735740">9</a> by Tami
		posted on 10/14/2011 at 10:52 PM
		</div>
		<div class="comment_text"><p>&lt;cffunction  name="whatdayisit" returntype="numeric"&gt;<br>&lt;cfargument name="d" required="yes"&gt;<br>  &lt;cfscript&gt;</p><p>     var daynumber = 0; <br>     var todayis = 0;<br>     var seed = dayofweek('1900-01-01');<br>     writeoutput("What day would #dateformat(d, 'mm/dd/yyyy')# be?&lt;br /&gt;");</p><p>    // set conditions for asking what day is it<br>	 var DadisSmart = randrange(0,1); // dad is either smart or not <br>	 var gameison = randrange(0,1); // dad may be watching the game <br>	 var TeacherisHelpful = randrange(0,1); // teacher is sometimes helpful <br>	 var SiblingisClueless = randrange(0,1); // why would I even bother to ask this one? <br>	 var MomisBusy = randrange(0,2); // mom is almost always busy, but there is a chance I can get answer from her</p><p>    if (  dadissmart and not gameison  )<br>		{  writeoutput( "Dad says the day is #dayofweekasstring(randrange(1,7))# -- but I'm just not sure&lt;br/&gt;"); <br>		}<br>		else {writeoutput(" Dad  doesn't know or isn't interested in finding out&lt;br/&gt;"); }</p><p>	if (not SiblingisClueless )<br>		{   writeoutput("Brother says day is #dayofweekasstring( randrange(2,8)-1 )#, but I don't trust him&lt;br/&gt;"); }</p><p>	if (TeacherisHelpful) <br>		{   writeoutput("Teacher says, ""I think today is is #dayofweekasstring( dayofweek(now()) )#, but you'll get extra credit if you look it up yourself""&lt;br/&gt;"); <br>		}<br>		else {  writeoutput("If I ask teacher, she'll make it a homework assignment&lt;br/&gt;"); }</p><p>   while (MomisBusy) {<br>		WriteOutput("Mom is busy... gotta wait...");<br>		MomisBusy = randrange(0,2);<br>	}<br>	if (not MomisBusy) {<br>    todayis = d- seed; //number of days between this day and seed date<br>    daynumber = (todayis mod 7) + seed ; // get offset by dividing by 7,then readding seed<br>    if ( daynumber  eq 8) {daynumber = 1;} //reset if it goes over 7<br>     WriteOutput(" Mom says, ""Well honey, today  must be #dayofweekasstring(daynumber)# cause it's #listgetat('pot-roast,chicken,burger,tuna,hotdog,pizza,spaghetti', daynumber)# night"" &lt;br/&gt;&lt;br/&gt;&lt;hr/&gt;");<br>	}<br>&lt;/cfscript&gt;<br>&lt;cfreturn daynumber&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735752">10</a> by Raymond Camden
		posted on 10/14/2011 at 10:53 PM
		</div>
		<div class="comment_text"><p>@Tami - your entry is like a mini-soap opera.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735743">11</a> by Tami
		posted on 10/14/2011 at 10:54 PM
		</div>
		<div class="comment_text"><p>Oops, I forgot... I have the whole function w/ your testharness here:  <a href="http://disq.us/url?url=http%3A%2F%2Fhhwd.com%2Fdiversions%2Frayspuzzler.cfm%3AEgVA5_ipTMaHLHKhtSKGAj6AfL8&amp;cuid=3321886" rel="nofollow noopener" title="http://hhwd.com/diversions/rayspuzzler.cfm">http://hhwd.com/diversions/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735737">12</a> by Tami
		posted on 10/14/2011 at 10:55 PM
		</div>
		<div class="comment_text"><p>Art imiates life -- at least at my house ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735738">13</a> by Chad Larter
		posted on 10/14/2011 at 11:42 PM
		</div>
		<div class="comment_text"><p>Ok Joshua, not only is it evil, it's freaking awesome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735751">14</a> by Joshua Miller
		posted on 10/15/2011 at 12:24 AM
		</div>
		<div class="comment_text"><p>Just for grins, I'm going to enter a second effort:</p><p>&lt;cfscript&gt;<br>function OfficialDayOfWeek(d){<br>	var h = new http();<br>	h.setMethod("get");<br>	h.setUrl('<a href="http://disq.us/url?url=http%3A%2F%2Fadobe.ly%2Fqa2DrM%27%29%3B%3Ahe4-5ODyaD8z3kY-YFDOa1YTvL4&amp;cuid=3321886" rel="nofollow noopener" title="http://adobe.ly/qa2DrM');">http://adobe.ly/qa2DrM');</a><br>	var r = h.send().getPrefix();<br>	var s = Find("&lt;title&gt;",r.filecontent,1);<br>	var e = Find("&lt;/title&gt;",r.filecontent,s);<br>	var c = e-s;<br>	var t = Mid(r.filecontent,s,c);<br>	var m = ListLast(t," ");<br>	return evaluate(m &amp; "('" &amp; dateformat(d,"mm/dd/yyyy") &amp; "')");<br>}<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735745">15</a> by Raymond Camden
		posted on 10/15/2011 at 12:25 AM
		</div>
		<div class="comment_text"><p>Loving these - thanks guys. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735741">16</a> by Nick Harvey
		posted on 10/15/2011 at 2:46 AM
		</div>
		<div class="comment_text"><p>Couldn't think of anything humorous, but at least it's complicated and involved :)</p><p>Enjoy</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FeCfXQNSX%3Ar6Z2fvcUf8LvXHBsQzqn_w8vy7Y&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/eCfXQNSX">http://pastebin.com/eCfXQNSX</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735753">17</a> by Nick Harvey
		posted on 10/15/2011 at 4:06 AM
		</div>
		<div class="comment_text"><p>So in testing a bit more, I found out that my script didn't work prior to the Gregorian switch in 1582. I know your test harness doesn't go back that far, but I thought it was important. So there's a new pastebin.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FzPCbd7ik%3AMKYYkIkuIIZjEMrJ_NSBTTgsf1g&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/zPCbd7ik">http://pastebin.com/zPCbd7ik</a></p><p>Thanks wikipedia, I was wandering why CF wouldn't let me createDate(1582, 10, 12)!! Seems that day and 9 others never existed. How cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735744">18</a> by Raymond Camden
		posted on 10/15/2011 at 4:58 AM
		</div>
		<div class="comment_text"><p>Dates are very cool in general - kudos to you for digging into that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735749">19</a> by AXL
		posted on 10/15/2011 at 3:58 PM
		</div>
		<div class="comment_text"><p>Here is my version.<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FfVMrnPVr%3AtqF2rtdtrJ90AEvT2-Qa9VpaVHo&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/fVMrnPVr">http://pastebin.com/fVMrnPVr</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735758">20</a> by Dave White
		posted on 10/15/2011 at 7:23 PM
		</div>
		<div class="comment_text"><p>I found an article about how you can tell someone the Day Of The Week given any date (and do it in your head).</p><p>It took me a while to figure out how to code it and here is my example.</p><p>You can find the article at</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.jimloy.com%2Fmath%2Fday-week.htm%3A3l2zKnlFUIhDFvXDKn57y5GSHdk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.jimloy.com/math/day-week.htm">http://www.jimloy.com/math/...</a></p><p>It reminded me of a DIBOL function I had to write when I was sweet 16 that calculated wether a given year was a Leap Year (wish I had saved a copy of that code but you don't think of that when your 16 and the internet had not even been invented).</p><p>Yes it is tag based (but I am a bit old fashioned in that way)</p><p>What I would really like to know, is what the dayofweek function in CF looks like, perhaps Ray Camden can get  the code for this and share it with us.</p><p>My code is on PasteBin at the following url :-</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FcHB77YUv%3A5NntPX2TWboh1IuNvpE2rdAjlVE&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/cHB77YUv">http://pastebin.com/cHB77YUv</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735733">21</a> by Tami
		posted on 10/15/2011 at 8:19 PM
		</div>
		<div class="comment_text"><p>@AXL -- LOVE IT!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735734">22</a> by AXL
		posted on 11/2/2011 at 10:15 PM
		</div>
		<div class="comment_text"><p>Where the heck is Nerd's Master???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735736">23</a> by Raymond Camden
		posted on 11/2/2011 at 10:25 PM
		</div>
		<div class="comment_text"><p>Eh?</p></div>
	</div>
</div>
		