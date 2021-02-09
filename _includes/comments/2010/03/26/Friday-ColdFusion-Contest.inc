
<div class="comment" id="c_1713722939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722939">1</a> by Connor Middleton
		posted on 3/26/2010 at 5:45 PM
		</div>
		<div class="comment_text"><p>BTW, best pic ever!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722928">2</a> by Olivier Bridgeman
		posted on 3/26/2010 at 5:51 PM
		</div>
		<div class="comment_text"><p>11 out of 1000 is actually 1.1%, but even that is an awkward percentage. So perhaps we should we convert percentages less than 2 to N out of 1000? For example: 1.2% would be 12 out of 1000.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722932">3</a> by Raymond Camden
		posted on 3/26/2010 at 5:53 PM
		</div>
		<div class="comment_text"><p>@Olivier - Yep, I was wrong. Brian Rinaldi pinged me on IM to give me a math beatdown. (Reload the blog post to see new last comment.) I'll take _any_ interesting solution as an entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722937">4</a> by Kevin Schmidt
		posted on 3/26/2010 at 6:19 PM
		</div>
		<div class="comment_text"><p>function causePanic( percent ) <br>{<br>    var data = StructNew();<br>    data['statistic'] = RandRange( 0,100 ) &amp; ' out of 100 people become zombies each year!';<br>	data['message'] 	= 'Run for the hills!  The Zombie invasion has begun!';<br>	data['note'] = 'Lies, damned lies and statistics!'</p><p>	return data; <br>}</p><p>That ought to do!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722926">5</a> by Danny Scott
		posted on 3/26/2010 at 6:23 PM
		</div>
		<div class="comment_text"><p>&lt;cffunction name="outOfConvert" access="public" returntype="string"&gt;<br>	&lt;cfargument name="inPercent" type="numeric" required="true"&gt;<br>	&lt;cfset var outSTR = ""&gt;<br>	&lt;cfset var percent = arguments.inPercent/&gt;<br>	&lt;cfset var outOf = 100/&gt;</p><p>	&lt;cfloop condition="#percent# LESS THAN 1"&gt;<br>		&lt;cfset percent *= 10/&gt;<br>		&lt;cfset outOf *= 10/&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfset percent = round(percent)/&gt;<br>	&lt;cfset outSTR = percent &amp; " out of " &amp; outOf/&gt;<br>	&lt;cfreturn outSTR/&gt;	 <br>&lt;/cffunction&gt;</p><p>The zombie one is way better than mine.  And it's an important safety tip!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722921">6</a> by Curt Gratz
		posted on 3/26/2010 at 6:52 PM
		</div>
		<div class="comment_text"><p>OK, Total Cheat, but I combined the two entries above to get you "ZombieStats"</p><p>function zombiesStats(normalStat) {</p><p>	var zombiesStat = "";<br>	var humans = arguments.normalStat;<br>	var Zombies = 100;</p><p>	while (humans LT 1) {<br>		humans *= 10;<br>		Zombies *= 10;<br>	}</p><p>	humans = round(humans);<br>	zombiesStat = humans &amp; " OUT OF " &amp; Zombies;</p><p>	return zombiesStat;<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722936">7</a> by Andy Sandefer
		posted on 3/26/2010 at 7:29 PM
		</div>
		<div class="comment_text"><p>Nice one @Kevin - LOL - I heart zombies.  You've gotta check out that new show on Comedy Central about the zombies and demons - it's pretty good.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722930">8</a> by Josh
		posted on 3/26/2010 at 9:50 PM
		</div>
		<div class="comment_text"><p>Here's my attempt</p><p>&lt;cffunction name="percentToString" access="public" returntype="string"&gt;<br>             &lt;cfargument name="enteredPercent" type="numeric" required="true"&gt;<br>	&lt;cfargument name="TwentyFourHrNewsNetworkStatistics" type="boolean" required="false" default="false"&gt;</p><p>	&lt;cfset var length = 0&gt;<br>	&lt;cfset var percent = 0&gt;<br>	&lt;cfset var multiplier = 1&gt;<br>	&lt;cfset var newnum = 0&gt;</p><p>	&lt;cfif arguments.TwentyFourHrNewsNetworkStatistics&gt;<br>		&lt;cfreturn RandRange(0,100) &amp; " out of 100"&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfif arguments.enteredPercent gte 1&gt;<br>		&lt;cfset percent = arguments.enteredPercent / 100&gt;<br>		&lt;cfset length = len(percent) - 2&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfset percent = arguments.enteredPercent&gt;<br>		&lt;cfset length = len(percent) - 1&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfloop from="#length#" to="1" step="-1" index="i"&gt;<br>		&lt;cfset multiplier = multiplier &amp; 0&gt;<br>	&lt;/cfloop&gt;</p><p>	&lt;cfset newnum = percent * multiplier&gt;</p><p>	&lt;cfreturn newnum &amp; " out of " &amp; multiplier&gt;</p><p>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722933">9</a> by Raymond Camden
		posted on 3/26/2010 at 10:07 PM
		</div>
		<div class="comment_text"><p>So far, only two "real" submissions - chances are good for you guys. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722929">10</a> by Michael
		posted on 3/26/2010 at 10:11 PM
		</div>
		<div class="comment_text"><p>&lt;cffunction name="percentString" returntype="string"&gt;<br>	&lt;cfargument name="percentIn" type="numeric"&gt;<br>	&lt;cfset var numDecPlaces = Len(ListLast(percentIn, "."))&gt;<br>	&lt;cfset var outOf = 100&gt;<br>	&lt;cfif FindNoCase(".", percentIn) lte 0&gt;<br>		&lt;cfset numDecPlaces = 0&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfset outOf = outOf &amp; RepeatString('0', numDecPLaces )&gt;<br>	&lt;cfreturn ReplaceNoCase(percentIn, ".", "", "ALL") &amp; " out of " &amp; outOf&gt;<br>&lt;/cffunction&gt;<br>&lt;cfoutput&gt;<br>#percentString(1)#&lt;br /&gt;<br>#percentString(.25)#&lt;br /&gt;<br>#percentString(25)#&lt;br /&gt;<br>#percentString(1.1)#&lt;br /&gt;<br>#percentString(1000)#&lt;br /&gt;<br>#percentString(100)#&lt;br /&gt;</p><p>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722922">11</a> by Rick Hopper
		posted on 3/26/2010 at 10:32 PM
		</div>
		<div class="comment_text"><p>I don't have access to ColdFusion right now so I can't test to make sure there are no errors.  But here are my thoughts...</p><p>&lt;cffunction name="ConvertPercentToString" access="public" returntype="string"&gt;<br>    &lt;cfargument name="pct" type="numeric" required="true"&gt;</p><p>    &lt;!--- Create return variable ---&gt;<br>    &lt;cfset var s = ""&gt;</p><p>    &lt;!--- Convert percent to decimal ---&gt;<br>    &lt;cfset var dec = (pct / 100)&gt;</p><p>    &lt;!--- Set defaults ---&gt;<br>    &lt;cfset var iNumDecimalPlaces = -1&gt;<br>    &lt;cfset var iNumericValuePosition = -1&gt;</p><p>    &lt;!--- Convert to string and remove leading "0." ---&gt;<br>    &lt;cfset dec = ToString(dec)&gt;<br>    &lt;cfset dec = Replace(dec, "0.", "", "ALL")&gt;</p><p>    &lt;!--- Loop over remaining digits of string so we can get count of decimal places and mark position of first non-zero digit ---&gt;<br>    &lt;cfloop from="1" to="#Len(dec)#" index="iNumDecimalPlaces"&gt;<br>        &lt;cfif (Int(Mid(dec, iNumDecimalPlaces, 1)) &gt; 0) AND (iNumericValuePosition EQ -1)&gt;<br>            &lt;cfset iNumericValuePosition = iNumDecimalPlaces&gt;<br>        &lt;/cfif&gt;<br>    &lt;/cfloop&gt;</p><p>    &lt;!--- If non-zero digit found, then use it and number of decimal places to build string ---&gt;<br>    &lt;cfif (iNumericValuePosition GT -1)&gt;<br>        &lt;cfset sNumericPortion = Right(dec, (Len(dec) - iNumericValuePosition))&gt;<br>        &lt;cfset s = sNumericPortion &amp; " out of " &amp; (10 ^ (iNumDecimalPlaces - 1))&gt;<br>    &lt;/cfif&gt;</p><p>    &lt;cfreturn s&gt;</p><p>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722947">12</a> by David Hammond
		posted on 3/26/2010 at 10:36 PM
		</div>
		<div class="comment_text"><p>I swear I didn't read Danny or Curt's entries before writing this.  It's very similar, but I'm submitting it anyway since it converts 90% to 9 out of 10 instead of 90 out of 100, which seems more like how it would appear in a news report.  Also, I have added more flattery, which ought to count for something</p><p>&lt;cffunction name="NOutOf" output="false" returntype="string"&gt;<br>	&lt;cfargument name="percent" type="numeric" required="true"&gt;<br>	&lt;cfset var n = arguments.percent/100&gt;<br>	&lt;cfset var outof = 1&gt;<br>	&lt;cfloop condition="round(n) is not n"&gt;<br>		&lt;cfset n = n*10&gt;<br>		&lt;cfset outof = outof*10&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfreturn "#NumberFormat(n)# out of #NumberFormat(outof)# people think that Ray's blog is awesome."&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722945">13</a> by Bob W
		posted on 3/26/2010 at 10:37 PM
		</div>
		<div class="comment_text"><p>My entry (changed your rules slightly to also allow 90% to be returned as "9 out of 10" - all those dentists can't be wrong!)<br>=====</p><p>&lt;cffunction name="textPercent" access="public" output="false" returntype="any"&gt;<br>&lt;cfargument name="percent" type="any" required="true"/&gt;<br>	&lt;cfset var local = StructNew()&gt;<br>	&lt;cfset local.rc = "Invalid percentage!"&gt;<br>	&lt;cfif isvalid('Numeric',arguments.percent)&gt;<br>		&lt;cfset local.p = arguments.percent/10.0&gt;<br>		&lt;cfset local.multiplier=10&gt;<br>		&lt;cfloop  index="local.i" from="1" to="4" step="1"&gt;<br>			&lt;cfif local.p eq int(local.p)&gt;&lt;cfbreak&gt;&lt;/cfif&gt;<br>			&lt;cfset local.p *= 10&gt;<br>			&lt;cfset local.multiplier *= 10&gt;<br>		&lt;/cfloop&gt;<br>		&lt;cfset local.rc = local.p &amp; ' out of ' &amp; local.multiplier&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfreturn local.rc /&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722944">14</a> by Jon Hartmann
		posted on 3/26/2010 at 11:29 PM
		</div>
		<div class="comment_text"><p>I've got no access to a ColdFusion box to test this (or even a CFML aware text editor). Hope this works:</p><p>&lt;cffunction name="XOutOf" output="false" returntype="string"&gt;<br>	&lt;cfargument name="percentage" type="numeric" required="true" /&gt;</p><p>	&lt;cfset var factor = "1#RepeatString("0", Len(ListLast(arguments.percentage, "."))#" /&gt;</p><p>	&lt;cfreturn "#arguments.percentage * factor# out of #10 * factor#" /&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722950">15</a> by Raymond Camden
		posted on 3/26/2010 at 11:31 PM
		</div>
		<div class="comment_text"><p>Just an FYI, going to make a random pick, I mean err a serious, hard choice at 4PM CST.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722949">16</a> by Raymond Camden
		posted on 3/27/2010 at 5:43 AM
		</div>
		<div class="comment_text"><p>Guys - I apologize. I totally dropped the ball on this. Going to pick a winner tomorrow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722957">17</a> by Loony2nz
		posted on 3/27/2010 at 11:16 AM
		</div>
		<div class="comment_text"><p>"That struct me as a bit odd..."  A wee bit too much coldfusion vernacular? hehehe  (some english beatdown for an english major? hehe)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722954">18</a> by Raymond Camden
		posted on 3/29/2010 at 9:39 PM
		</div>
		<div class="comment_text"><p>Some results. I used this as a 'test harness':</p><p>&lt;cfset tests = "1,2,3,0.1,0.11,0.5,1.5"&gt;</p><p>&lt;cfset theFunc = x&gt;</p><p>&lt;cfloop index="t" list="#tests#"&gt;<br>	&lt;cfoutput&gt;#t# = #thefunc(t)#&lt;br/&gt;&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;</p><p>where x was the udf to test.</p><p>@Danny - yours didn't seem to work for 0.1 or 0.11.</p><p>@Josh: for 0.1 it set 10 out of 100 - it got all the x.y ones wrong.</p><p>@Michael: Yours seems right, but, I'll ding it a bit for returning "01 out of 1000" and "011 ..." notice it left a trailing 0.</p><p>@Rick - I had to change one &gt; to gt, but it had the same issue as Michael.</p><p>@David - ok, flattery aside, so far this is the best, and I like the it used numberformat.</p><p>@Bob - yours worked well as well.</p><p>@JonH: Ha to add one more )... it returned it wrong off by a factor of 10... but interesting example there!</p><p>So being that I'm 3 days late (sorry guys again!) I'm going with David! David, please ping me via email with your preferred email for the Amazon gift cert, and thanks everyone!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722955">19</a> by Josh
		posted on 3/29/2010 at 10:00 PM
		</div>
		<div class="comment_text"><p>Ray, I was taking 0.1 to mean 10%.  10 out of 100 is 10%, although it should have returned 1 out of 10 at that point.  Strangely enough, .1 will return 1 out of 10.  I assumed anything under 1 was to be treated as the actual percentage, ie .25 = 25% and 5.6 = 5.6%.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722956">20</a> by Raymond Camden
		posted on 3/29/2010 at 10:06 PM
		</div>
		<div class="comment_text"><p>Makes sense - I hope I didn't come off too critical - I was just trying to judge this quickly as I had been so late in it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722953">21</a> by Josh
		posted on 3/29/2010 at 11:58 PM
		</div>
		<div class="comment_text"><p>No, I just didn't want to have my intent misinterpreted.</p></div>
	</div>
</div>
		