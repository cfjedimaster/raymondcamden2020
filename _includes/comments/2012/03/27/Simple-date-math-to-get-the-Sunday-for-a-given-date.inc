
<div class="comment" id="c_1713740149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740149">1</a> by Jason
		posted on 3/28/2012 at 6:53 AM
		</div>
		<div class="comment_text"><p>Interesting - I had to do something similar for a project this past week.  It's a scheduling app where I need to know what the start and end of the week (Sunday to Saturday) is based on a user specified date.  I was new to using FIX with dates but what a great little feature.  Converting dates to numbers made it easy.</p><p>dtThisWeek = fix( *userdate* )<br>objThisWeek = structNew()<br>objThisWeek.Start = dateFormat(dtThisWeek - dayOfWeek( dtThisWeek ) + 1)<br>objThisWeek.End = dateFormat( objThisWeek.Start + 6 )</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740152">2</a> by Gert Franz
		posted on 3/28/2012 at 12:49 PM
		</div>
		<div class="comment_text"><p>Here you go:</p><p>&lt;cfset dSunday = int(now()/7)*7+1&gt;<br>or<br>&lt;cfset dSunday = now() - now() % 7 + 1&gt;</p><p>Since we know the date that equals to 0 is the 30st of December 1899 and that was a Saturday, you can easily use one of the two above approaches in order to find the closest sunday.</p><p>HTH</p><p>Gert</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740150">3</a> by Mark
		posted on 3/28/2012 at 4:34 PM
		</div>
		<div class="comment_text"><p>I wrote a PHP function like this for my church's website, but I was looking for the next Sunday rather than the previous Sunday. It was just a matter of incrementing the passed date (today) in a loop until the date('l',strtotime($passedDate)) equaled 'Sunday'. I'd imagine the same thing could be done by decrementing the passed date and using CF's DayOfWeekAsString function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740151">4</a> by David Boyer
		posted on 3/28/2012 at 4:49 PM
		</div>
		<div class="comment_text"><p>@Gert, nice approach that's going into my snippets ;)</p><p>It'd be nice to have a way to request relative dates like (dare I say it...) the PHP strToTime function (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.php.net%2Fmanual%2Fen%2Fdatetime.formats.relative.php%29%3AAaTHStKhXLmyyZaIQB6e74tscwY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.php.net/manual/en/datetime.formats.relative.php)">http://www.php.net/manual/e...</a>.  I have played around with a Java library that provides something similar but stumbled into a bug with specifying days (rrd4j - <a href="http://disq.us/url?url=http%3A%2F%2Frrd4j.googlecode.com%2Fsvn%2Ftrunk%2Fjavadoc%2Freference%2Forg%2Frrd4j%2Fcore%2Ftimespec%2FTimeSpec.html%29%3AM5YSUgCdDmY0v-KnbXKawCBItKY&amp;cuid=3321886" rel="nofollow noopener" title="http://rrd4j.googlecode.com/svn/trunk/javadoc/reference/org/rrd4j/core/timespec/TimeSpec.html)">http://rrd4j.googlecode.com...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740154">5</a> by David Boyer
		posted on 3/28/2012 at 4:54 PM
		</div>
		<div class="comment_text"><p>@Mark, easy way to get next Sunday in PHP is: date("Y-m-d l", StrToTime("Sunday"))<br>:)</p><p>@Ray, sorry for mentioning PHP twice on your blog :/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740155">6</a> by Raymond Camden
		posted on 3/28/2012 at 5:30 PM
		</div>
		<div class="comment_text"><p>@Gert: I tried to read your comment, but every time I did my brain bled a bit and I gave up. ;)</p><p>@David: No worries at all - I've seen that strToTime function and it's REALLY cool.</p><p>On a totally unrelated note - I noticed that Mail on my iPad will notice stuff like "tomorrow morning" and "Monday morning" and offer to create an event for it. That is SUPER cool - and I plan on trying to recreate that myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740156">7</a> by Gert Franz
		posted on 3/28/2012 at 6:52 PM
		</div>
		<div class="comment_text"><p>@Ray: Well all I do is to take the current day as a float and by dividing it by 7 and cutting of the decimals I get the number of weeks (X) since 12/30/1899. Then multiply it by 7 and then I get the Saturday which is X weeks after 12/30/1899. And since that day was a Saturday I have to add one. Hence the formula. The second version is actually the exact same thing written with the modulo operator. HTH :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740157">8</a> by Raymond Camden
		posted on 3/28/2012 at 6:54 PM
		</div>
		<div class="comment_text"><p>Math scary. Hulk smash.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740159">9</a> by Tim Garver
		posted on 3/28/2012 at 11:55 PM
		</div>
		<div class="comment_text"><p>I did this about 9 years ago and is not as elegant but here goes:<br>[code]<br>&lt;!--- td = today or what ever date ---&gt;<br>&lt;cfset td = dateAdd('d',-4,now())&gt;<br>&lt;cfset ToDay = DayOfWeek(td)&gt;<br>&lt;CFIF ToDay EQ 1&gt;<br> &lt;cfset lastsunday = DATEADD('d',-7,td)&gt;<br> &lt;cfset sunday = td&gt;<br>&lt;cfelseif today EQ 2&gt;<br> &lt;cfset lastsunday = DATEADD('d',-8,td)&gt;<br> &lt;cfset sunday = DATEADD('d',-1,td)&gt;<br>&lt;cfelse&gt;<br> &lt;cfset tmp = today - 1&gt;<br> &lt;cfset lastsunday = DATEADD('d',-(tmp+7),td)&gt;<br> &lt;cfset sunday = DATEADD('d',-tmp,td)&gt;<br>&lt;/cfif&gt;</p><p>[/code]</p><p>This will give you this weeks Sunday as a beginning to the week as well as the previous Sunday.<br>I know its a bit bloated but it works or at least i think it does :)</p><p>Tim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740162">10</a> by Raymond Camden
		posted on 3/28/2012 at 11:57 PM
		</div>
		<div class="comment_text"><p>I love the caps. Believe it or not - I used to do all my ColdFusion in caps. -shudder-</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740161">11</a> by Michael
		posted on 3/29/2012 at 6:41 PM
		</div>
		<div class="comment_text"><p>I did this in javascript recently:<br>getSundayFollowing: function(dt)<br>{<br>var endOfWeekVal = new Date(dt);<br>var dayOfWeek = endOfWeekVal.getDay();<br>if ( dayOfWeek &gt; 0 )<br>{<br>	endOfWeekVal.setDate(endOfWeekVal.getDate() + (7-dayOfWeek));<br>}<br>return endOfWeekVal;<br>},</p></div>
	</div>
</div>
		