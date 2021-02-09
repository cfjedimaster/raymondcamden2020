
<div class="comment" id="c_1713675517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675517">1</a> by Gary Gilbert
		posted on 12/14/2007 at 8:15 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Here is my "solution".  It's not elegant or pretty (thanks in part to the colors) but it works :).  I loop through the query and through each loop I pass the query and the day a function which then loops through the function and outputs the song as its sung (in reverse).</p><p>&lt;cffunction name="song2" output="true" &gt;<br>	&lt;cfargument name="x" type="numeric" required="true"&gt;<br>	&lt;cfargument name="q" type="query" required="true"&gt;</p><p>	&lt;cfloop from="#x#" to="1" index="i" step="-1"&gt;<br>		&lt;cfoutput&gt;&lt;span style="color:&lt;cfif i mod 2 eq 0&gt;red&lt;cfelse&gt;green&lt;/cfif&gt;"&gt;#<a href="http://disq.us/url?url=http%3A%2F%2Fq.gift%3AL-PTY8LyELFxeGd4dYIQvxiHMe0&amp;cuid=3321886" rel="nofollow noopener" title="q.gift">q.gift</a>[i]#&lt;/span&gt;&lt;/cfoutput&gt;<br>	&lt;/cfloop&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfoutput query="song"&gt;<br>On the #id# day of christmas my true love gave to me:<br>	#song2(<a href="http://disq.us/url?url=http%3A%2F%2Fsong.id%3AVHTQE0dp4tJD0J9s89gqw_xh-IQ&amp;cuid=3321886" rel="nofollow noopener" title="song.id">song.id</a>,song)# &lt;br&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675534">2</a> by Gary Gilbert
		posted on 12/14/2007 at 8:16 PM
		</div>
		<div class="comment_text"><p>dang forgot to add the output :) Please delete it if you don't want it</p><p>On the 1 day of christmas my true love gave to me:<br>	&lt;span style="color:green"&gt;A partridge in a pear tree&lt;/span&gt;  &lt;br&gt;</p><p>On the 2 day of christmas my true love gave to me:<br>	&lt;span style="color:red"&gt;Two turtle doves&lt;/span&gt; &lt;span style="color:green"&gt;A partridge in a pear tree&lt;/span&gt;  &lt;br&gt;</p><p>On the 3 day of christmas my true love gave to me:<br>	&lt;span style="color:green"&gt;Three French hens&lt;/span&gt; &lt;span style="color:red"&gt;Two turtle doves&lt;/span&gt; &lt;span style="color:green"&gt;A partridge in a pear tree&lt;/span&gt;  &lt;br&gt;</p><p>On the 4 day of christmas my true love gave to me:<br>	&lt;span style="color:red"&gt;Four calling birds&lt;/span&gt; &lt;span style="color:green"&gt;Three French hens&lt;/span&gt; &lt;span style="color:red"&gt;Two turtle doves&lt;/span&gt; &lt;span style="color:green"&gt;A partridge in a pear tree&lt;/span&gt;  &lt;br&gt;</p><p>On the 5 day of christmas my true love gave to me:<br>	&lt;span style="color:green"&gt;Five golden rings&lt;/span&gt; &lt;span style="color:red"&gt;Four calling birds&lt;/span&gt; &lt;span style="color:green"&gt;Three French hens&lt;/span&gt; &lt;span style="color:red"&gt;Two turtle doves&lt;/span&gt; &lt;span style="color:green"&gt;A partridge in a pear tree&lt;/span&gt;  &lt;br&gt;</p><p>On the 6 day of christmas my true love gave to me:<br>	&lt;span style="color:red"&gt;Six geese a-laying&lt;/span&gt; &lt;span style="color:green"&gt;Five golden rings&lt;/span&gt; &lt;span style="color:red"&gt;Four calling birds&lt;/span&gt; &lt;span style="color:green"&gt;Three French hens&lt;/span&gt; &lt;span style="color:red"&gt;Two turtle doves&lt;/span&gt; &lt;span style="color:green"&gt;A partridge in a pear tree&lt;/span&gt;  &lt;br&gt;</p><p>On the 7 day of christmas my true love gave to me:<br>	&lt;span style="color:green"&gt;Seven swans a-swimming&lt;/span&gt; &lt;span style="color:red"&gt;Six geese a-laying&lt;/span&gt; &lt;span style="color:green"&gt;Five golden rings&lt;/span&gt; &lt;span style="color:red"&gt;Four calling birds&lt;/span&gt; &lt;span style="color:green"&gt;Three French hens&lt;/span&gt; &lt;span style="color:red"&gt;Two turtle doves&lt;/span&gt; &lt;span style="color:green"&gt;A partridge in a pear tree&lt;/span&gt;  &lt;br&gt;</p><p>On the 8 day of christmas my true love gave to me:<br>	&lt;span style="color:red"&gt;Eight maids a-milking&lt;/span&gt; &lt;span style="color:green"&gt;Seven swans a-swimming&lt;/span&gt; &lt;span style="color:red"&gt;Six geese a-laying&lt;/span&gt; &lt;span style="color:green"&gt;Five golden rings&lt;/span&gt; &lt;span style="color:red"&gt;Four calling birds&lt;/span&gt; &lt;span style="color:green"&gt;Three French hens&lt;/span&gt; &lt;span style="color:red"&gt;Two turtle doves&lt;/span&gt; &lt;span style="color:green"&gt;A partridge in a pear tree&lt;/span&gt;  &lt;br&gt;</p><p>On the 9 day of christmas my true love gave to me:<br>	&lt;span style="color:green"&gt;Nine ladies dancing&lt;/span&gt; &lt;span style="color:red"&gt;Eight maids a-milking&lt;/span&gt; &lt;span style="color:green"&gt;Seven swans a-swimming&lt;/span&gt; &lt;span style="color:red"&gt;Six geese a-laying&lt;/span&gt; &lt;span style="color:green"&gt;Five golden rings&lt;/span&gt; &lt;span style="color:red"&gt;Four calling birds&lt;/span&gt; &lt;span style="color:green"&gt;Three French hens&lt;/span&gt; &lt;span style="color:red"&gt;Two turtle doves&lt;/span&gt; &lt;span style="color:green"&gt;A partridge in a pear tree&lt;/span&gt;  &lt;br&gt;</p><p>On the 10 day of christmas my true love gave to me:<br>	&lt;span style="color:red"&gt;Ten lords a-leaping&lt;/span&gt; &lt;span style="color:green"&gt;Nine ladies dancing&lt;/span&gt; &lt;span style="color:red"&gt;Eight maids a-milking&lt;/span&gt; &lt;span style="color:green"&gt;Seven swans a-swimming&lt;/span&gt; &lt;span style="color:red"&gt;Six geese a-laying&lt;/span&gt; &lt;span style="color:green"&gt;Five golden rings&lt;/span&gt; &lt;span style="color:red"&gt;Four calling birds&lt;/span&gt; &lt;span style="color:green"&gt;Three French hens&lt;/span&gt; &lt;span style="color:red"&gt;Two turtle doves&lt;/span&gt; &lt;span style="color:green"&gt;A partridge in a pear tree&lt;/span&gt;  &lt;br&gt;</p><p>On the 11 day of christmas my true love gave to me:<br>	&lt;span style="color:green"&gt;Eleven pipers piping&lt;/span&gt; &lt;span style="color:red"&gt;Ten lords a-leaping&lt;/span&gt; &lt;span style="color:green"&gt;Nine ladies dancing&lt;/span&gt; &lt;span style="color:red"&gt;Eight maids a-milking&lt;/span&gt; &lt;span style="color:green"&gt;Seven swans a-swimming&lt;/span&gt; &lt;span style="color:red"&gt;Six geese a-laying&lt;/span&gt; &lt;span style="color:green"&gt;Five golden rings&lt;/span&gt; &lt;span style="color:red"&gt;Four calling birds&lt;/span&gt; &lt;span style="color:green"&gt;Three French hens&lt;/span&gt; &lt;span style="color:red"&gt;Two turtle doves&lt;/span&gt; &lt;span style="color:green"&gt;A partridge in a pear tree&lt;/span&gt;  &lt;br&gt;</p><p>On the 12 day of christmas my true love gave to me:<br>	&lt;span style="color:red"&gt;Twelve drummers drumming&lt;/span&gt; &lt;span style="color:green"&gt;Eleven pipers piping&lt;/span&gt; &lt;span style="color:red"&gt;Ten lords a-leaping&lt;/span&gt; &lt;span style="color:green"&gt;Nine ladies dancing&lt;/span&gt; &lt;span style="color:red"&gt;Eight maids a-milking&lt;/span&gt; &lt;span style="color:green"&gt;Seven swans a-swimming&lt;/span&gt; &lt;span style="color:red"&gt;Six geese a-laying&lt;/span&gt; &lt;span style="color:green"&gt;Five golden rings&lt;/span&gt; &lt;span style="color:red"&gt;Four calling birds&lt;/span&gt; &lt;span style="color:green"&gt;Three French hens&lt;/span&gt; &lt;span style="color:red"&gt;Two turtle doves&lt;/span&gt; &lt;span style="color:green"&gt;A partridge in a pear tree&lt;/span&gt;  &lt;br&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675535">3</a> by todd sharp
		posted on 12/14/2007 at 8:22 PM
		</div>
		<div class="comment_text"><p>&lt;cfset song = querynew("id,gift","integer,varchar")&gt;</p><p>&lt;cfset gifts = ["A partridge in a pear tree","Two turtle doves","Three French hens","Four calling birds","Five golden rings","Six geese a-laying",<br>      "Seven swans a-swimming","Eight maids a-milking","Nine ladies dancing","Ten lords a-leaping","Eleven pipers piping","Twelve drummers drumming"]&gt;</p><p>&lt;cfloop index="x" from="1" to="#arrayLen(gifts)#"&gt;<br>   &lt;cfset queryAddRow(song)&gt;<br>   &lt;cfset querySetCell(song, "id", x)&gt;<br>   &lt;cfset querySetCell(song, "gift", gifts[x])&gt;<br>&lt;/cfloop&gt;</p><p>&lt;cfquery name="getSong" dbtype="query"&gt;<br>select *<br>from song<br>order by id desc<br>&lt;/cfquery&gt;</p><p>&lt;cfset title = "The 12 days of Christmas..."&gt;</p><p>&lt;cfpresentation title="#title#"&gt;<br>&lt;cfoutput query="getSong"&gt;<br>	&lt;cfsavecontent variable="slideTitle"&gt;On the #id#&lt;cfif id eq 1&gt;st&lt;cfelseif id eq 3&gt;rd&lt;cfelseif id eq 2&gt;nd&lt;cfelse&gt;th&lt;/cfif&gt; day of Christmas my true love gave to me....&lt;/cfsavecontent&gt;<br>	&lt;cfpresentationslide title="#slideTitle#"&gt;<br>		&lt;div&gt;<br>			&lt;img src="christmas_lights.gif" /&gt;&lt;br/&gt;<br>			&lt;h1&gt;#title#&lt;/h1&gt;<br>			&lt;h2&gt;#slideTitle#&lt;/h2&gt;<br>			&lt;span&gt;#<a href="http://disq.us/url?url=http%3A%2F%2FgetSong.gift%3AUYR-H19xLkupFPWwsz6me1sBmLU&amp;cuid=3321886" rel="nofollow noopener" title="getSong.gift">getSong.gift</a>#&lt;/span&gt;<br>		&lt;/div&gt;<br>	&lt;/cfpresentationslide&gt;<br>&lt;/cfoutput&gt;<br>&lt;/cfpresentation&gt;</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfsilence.com%2Fblog%2Fdemos%2F12days%2F12days.cfm%3AvDM7Gcy3KX6-gWjyCFT6qKkCMnc&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsilence.com/blog/demos/12days/12days.cfm">http://cfsilence.com/blog/d...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675516">4</a> by todd sharp
		posted on 12/14/2007 at 8:23 PM
		</div>
		<div class="comment_text"><p>I couldn't find a suitable cheesy mp3 to go along...sorry...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675518">5</a> by Raymond Camden
		posted on 12/14/2007 at 8:28 PM
		</div>
		<div class="comment_text"><p>Todd, your code doesn't work right. It starts with day 12. It should start with day 1. And on days 2-12, it doesn't show the previous gifts. Ie, day 2 should show day 1's gift as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675523">6</a> by todd sharp
		posted on 12/14/2007 at 8:42 PM
		</div>
		<div class="comment_text"><p>you grinch...</p><p>how's this?  <a href="http://disq.us/url?url=http%3A%2F%2Fcfsilence.com%2Fblog%2Fdemos%2F12days%2F12daysnew.cfm%3Ay6ZEDFP7L5seXNsrbR0Umj1eyNU&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsilence.com/blog/demos/12days/12daysnew.cfm">http://cfsilence.com/blog/d...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675539">7</a> by Dave Ferguson
		posted on 12/14/2007 at 9:02 PM
		</div>
		<div class="comment_text"><p>Here is my contribution.  I wish I had time to do more with it.  Maybe later today if I can find some free time.</p><p>&lt;CFSET IMGRoot = "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.dkferguson.com%2F12days%3ADCUD7AbfqH5yozSat174Sf9yWl4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.dkferguson.com/12days">http://www.dkferguson.com/1...</a>"&gt;<br>&lt;cfset song = querynew("id,gift","integer,varchar")&gt;<br>&lt;cfset gifts = ["A partridge in a pear tree","Two turtle doves","Three French hens","Four calling birds","Five golden rings","Six geese a-laying",<br>      "Seven swans a-swimming","Eight maids a-milking","Nine ladies dancing","Ten lords a-leaping","Eleven pipers piping","Twelve drummers drumming"]&gt;</p><p>&lt;cfloop index="x" from="1" to="#arrayLen(gifts)#"&gt;<br>   &lt;cfset queryAddRow(song)&gt;<br>   &lt;cfset querySetCell(song, "id", x)&gt;<br>   &lt;cfset querySetCell(song, "gift", gifts[x])&gt;<br>&lt;/cfloop&gt;</p><p>&lt;CFOUTPUT&gt;<br>	&lt;CFLOOP INDEX="d" FROM="1" TO="12"&gt;<br>	&lt;DIV ID="day#d#" STYLE="width:100%; float:left;"&gt;<br>	&lt;CFQUERY NAME="getGifts" DBTYPE="QUERY"&gt;<br>		select * from song where id &lt;= #d#<br>		order by id desc<br>	&lt;/CFQUERY&gt;<br>	&lt;BR&gt;&lt;BR&gt;<br>	ON DAY #d# of Christmas I got all this stuff:&lt;BR&gt; <br>		&lt;CFLOOP QUERY="getGifts"&gt;<br>			&lt;DIV ID="gift#d##id#" STYLE="float:left;"&gt;<br>				&lt;IMG SRC="#IMGRoot#/#id#.jpg"&gt;<br>			&lt;/DIV&gt;<br>		&lt;/CFLOOP&gt;<br>	&lt;/DIV&gt;<br>	&lt;/CFLOOP&gt;<br>&lt;/CFOUTPUT&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675537">8</a> by Raymond Camden
		posted on 12/14/2007 at 9:04 PM
		</div>
		<div class="comment_text"><p>Guys, to save space, when you post code, don't duplicate the data stuff please.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675540">9</a> by Rick O
		posted on 12/14/2007 at 9:13 PM
		</div>
		<div class="comment_text"><p>Just because I hadn't seen a QoQ solution yet, nor one that created grammatically correct sentences.  ;-)</p><p>&lt;cffunction name="Dayify" returntype="query"&gt;<br>	&lt;cfargument name="Q" type="query" required="true"&gt;<br>	&lt;cfset var Result=""&gt;<br>	&lt;cfset var P=arguments.q&gt;<br>	&lt;cfset var R=arguments.q&gt;<br>	&lt;cfquery dbtype="query" name="Result"&gt;<br>	SELECT <a href="http://disq.us/url?url=http%3A%2F%2Fr.id%3AzUPoPU8_FYYPfpvBWla3IMFlUWs&amp;cuid=3321886" rel="nofollow noopener" title="r.id">r.id</a> AS daynum, <a href="http://disq.us/url?url=http%3A%2F%2Fp.id%3AHtSotN6W0iVp2ONz1XPSVpoyswM&amp;cuid=3321886" rel="nofollow noopener" title="p.id">p.id</a> AS id, <a href="http://disq.us/url?url=http%3A%2F%2Fp.gift%3AcdoK3359sSjCZQHZMVhiNzyvujE&amp;cuid=3321886" rel="nofollow noopener" title="p.gift">p.gift</a> AS gift<br>	FROM r, p<br>	WHERE (<a href="http://disq.us/url?url=http%3A%2F%2Fr.id%3AzUPoPU8_FYYPfpvBWla3IMFlUWs&amp;cuid=3321886" rel="nofollow noopener" title="r.id">r.id</a> &gt;= <a href="http://disq.us/url?url=http%3A%2F%2Fp.id%3AHtSotN6W0iVp2ONz1XPSVpoyswM&amp;cuid=3321886" rel="nofollow noopener" title="p.id">p.id</a>)<br>	ORDER BY 1, 2 DESC, 3<br>	&lt;/cfquery&gt;<br>	&lt;cfreturn Result&gt;<br>&lt;/cffunction&gt;<br>&lt;cffunction name="htmlFromSong" returntype="string"&gt;<br>	&lt;cfargument name="Q" type="query" required="true"&gt;<br>	&lt;cfset var Verses=Dayify(Q)&gt;<br>	&lt;cfset var Result=""&gt;<br>	&lt;cfset var Colors=listToArray("red,green")&gt;<br>	&lt;cfset var Suffixes="st,nd,rd"&gt;<br>	&lt;cfif Verses.recordCount gt 3&gt;<br>		&lt;cfset Suffixes=listAppend(Suffixes,repeatString("th,",Verses.recordCount-3))&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfset suffixes=listToArray(suffixes)&gt;<br>	&lt;cfsavecontent variable="Result"&gt;<br>		&lt;cfoutput query="Verses" group="DayNum"&gt;<br>		&lt;p&gt;On the #DayNum#&lt;sup&gt;#Suffixes[DayNum]#&lt;/sup&gt; day of Christmas, my true love gave to me: &lt;cfoutput&gt;&lt;cfif DayNum neq id&gt;, &lt;cfif id eq 1&gt;and &lt;/cfif&gt;&lt;/cfif&gt;&lt;span style="color:#Colors[incrementValue(id MOD 2)]#"&gt;#HTMLEditFormat(gift)#&lt;/span&gt;&lt;/cfoutput&gt;.&lt;/p&gt;<br>		&lt;/cfoutput&gt;<br>	&lt;/cfsavecontent&gt;<br>	&lt;cfreturn Result&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfoutput&gt;#htmlFromSong(Song)#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675541">10</a> by Ron Gowen
		posted on 12/14/2007 at 9:13 PM
		</div>
		<div class="comment_text"><p>Never did cfpresentation before, thamks Todd :)</p><p>&lt;cfset song = querynew("id,gift","integer,varchar")&gt;</p><p>&lt;cfset gifts = ["A partridge in a pear tree","Two turtle doves","Three French hens","Four calling birds","Five golden rings","Six geese a-laying",<br>      "Seven swans a-swimming","Eight maids a-milking","Nine ladies dancing","Ten lords a-leaping","Eleven pipers piping","Twelve drummers drumming"]&gt;</p><p>&lt;cfloop index="x" from="1" to="#arrayLen(gifts)#"&gt;<br>   &lt;cfset queryAddRow(song)&gt;<br>   &lt;cfset querySetCell(song, "id", x)&gt;<br>   &lt;cfset querySetCell(song, "gift", gifts[x])&gt;<br>&lt;/cfloop&gt;</p><p>&lt;cffunction name="ord" access="public" returntype="string" output="false"&gt;<br>	&lt;cfargument name="theNum" type="string" required="true" /&gt;<br>		&lt;cfset theNewNum = "" /&gt;<br>		&lt;cfswitch expression="#arguments.theNum#"&gt;<br>			&lt;cfcase value="1"&gt;<br>				&lt;cfset theNewNum = arguments.theNum &amp;'st' /&gt; <br>			&lt;/cfcase&gt;<br>			&lt;cfcase value="2"&gt;<br>				&lt;cfset theNewNum = arguments.theNum &amp;'nd' /&gt; <br>			&lt;/cfcase&gt;<br>			&lt;cfcase value="3"&gt;<br>				&lt;cfset theNewNum = arguments.theNum &amp;'rd' /&gt; <br>			&lt;/cfcase&gt;<br>			&lt;cfdefaultcase&gt;<br>				&lt;cfset theNewNum = arguments.theNum &amp;'th' /&gt;<br>			&lt;/cfdefaultcase&gt;<br>		&lt;/cfswitch&gt;<br>	&lt;cfreturn theNewNum /&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfoutput&gt;<br>&lt;cfset title="The 12 Days of Christmas" /&gt;<br>&lt;cfpresentation title="The 12 Days of Christmas - stole this part from Todd thx"&gt;</p><p>	&lt;cfloop from="1" to="12" index="i"&gt;<br>	&lt;cfset slideTitle = "On the #ord(i)# day of christmas my true love brought to me" /&gt;<br>		&lt;cfpresentationSlide title="#slideTitle#" duration="2"&gt;<br>		&lt;div&gt;<br>		#title#&lt;br /&gt;<br>		#slideTitle#<br>		&lt;br /&gt;&lt;br /&gt;<br>			&lt;cfloop from="12" to="1" index="j" step="-1"&gt;</p><p>				&lt;cfif j LTE i&gt;<br>					&lt;cfif j MOD 2&gt;<br>						&lt;cfset fColor = 'green' /&gt;<br>					&lt;cfelse&gt;<br>						&lt;cfset fColor = 'red' /&gt;<br>					&lt;/cfif&gt;<br>					&lt;cfif j EQ 5&gt;<br>						&lt;span style="letter-spacing:2.5em; color:#fColor#;"&gt;#<a href="http://disq.us/url?url=http%3A%2F%2Fsong.gift%3AYVwmc6xDJOil7m0JIiSozpUoZ-k&amp;cuid=3321886" rel="nofollow noopener" title="song.gift">song.gift</a>[j]#&lt;/span&gt;&lt;br /&gt;<br>					&lt;cfelse&gt;<br>						&lt;span style="color:#fColor#;"&gt;#<a href="http://disq.us/url?url=http%3A%2F%2Fsong.gift%3AYVwmc6xDJOil7m0JIiSozpUoZ-k&amp;cuid=3321886" rel="nofollow noopener" title="song.gift">song.gift</a>[j]#&lt;/span&gt;&lt;br /&gt;<br>					&lt;/cfif&gt;<br>				&lt;/cfif&gt;<br>			&lt;/cfloop&gt;<br>		&lt;/div&gt;<br>		&lt;/cfpresentationSlide&gt;<br>		&lt;br /&gt;&lt;br /&gt;<br>	&lt;/cfloop&gt;</p><p>&lt;/cfpresentation&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675542">11</a> by Shane Zehnder
		posted on 12/14/2007 at 9:22 PM
		</div>
		<div class="comment_text"><p>After seeing Todd playing around with the &lt;cfpresentation&gt; tag I am starting to like it more and more.</p><p>Looks like it can be very useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675543">12</a> by todd sharp
		posted on 12/14/2007 at 9:28 PM
		</div>
		<div class="comment_text"><p>"nor one that created grammatically correct sentences"</p><p>Mine didn't do this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675544">13</a> by Mat Evans
		posted on 12/14/2007 at 9:53 PM
		</div>
		<div class="comment_text"><p>hehe i enjoyed that.. here's my code..</p><p>&lt;cfscript&gt;<br>function SingTheSong(level) {<br>   	if(level &lt; 13) {<br>		writeOutput('On the ' &amp; level &amp; ' day of christmas, my true love gave to me..&lt;br&gt;');<br>		for(i = level; i neq 0; i=i-1){<br>			if(i mod 2 gt 0){colour='red';} else {colour='green';}<br>			writeOutput('&amp;nbsp;&amp;nbsp;&lt;span style="color:' &amp; colour &amp; ';"&gt;' &amp; <a href="http://disq.us/url?url=http%3A%2F%2Fsong.gift%3AYVwmc6xDJOil7m0JIiSozpUoZ-k&amp;cuid=3321886" rel="nofollow noopener" title="song.gift">song.gift</a>[i] &amp; '&lt;/span&gt;&lt;br&gt;');<br>		}<br>	SingTheSong(level+1);<br>	}<br>}<br>&lt;/cfscript&gt;</p><p>&lt;cfoutput&gt;<br>#SingTheSong(1)#<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675547">14</a> by Gareth
		posted on 12/14/2007 at 11:23 PM
		</div>
		<div class="comment_text"><p>I modified mine slightly to include first, second, etc.</p><p>&lt;cfcomponent output="true"&gt;<br>	&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fthis.gifts%3AgUeaLSr0ydhjXx91sqDvO7bF3TQ&amp;cuid=3321886" rel="nofollow noopener" title="this.gifts">this.gifts</a> = ListToArray("A partridge in a pear tree,Two turtle doves and,Three French hens,Four calling birds,Five golden rings,Six geese a-laying,Seven swans a-swimming,Eight maids a-milking,Nine ladies dancing,Ten lords a-leaping,Eleven pipers piping,Twelve drummers drumming")&gt;</p><p>	&lt;cfset this.days = ListToArray("first,second,third,fourth,fifth,sixth,seventh,eight,ninth,tenth,eleventh,twelfth")&gt;</p><p>	&lt;cffunction name="down" access="remote" output="true" returntype="void"&gt;<br>		&lt;cfargument name="arrayPosition" default="1" /&gt;</p><p>		#<a href="http://disq.us/url?url=http%3A%2F%2Fthis.gifts%3AgUeaLSr0ydhjXx91sqDvO7bF3TQ&amp;cuid=3321886" rel="nofollow noopener" title="this.gifts">this.gifts</a>[arguments.arrayPosition]#<br>		&lt;cfif arguments.arrayPosition gt 1&gt;<br>			, #down(arguments.arrayPosition-1)#<br>		&lt;/cfif&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="daysOfXmas" access="remote" output="true" returntype="void"&gt;<br>		&lt;cfloop from="1" to="12" index="eachDay"&gt;<br>			On the #this.days[eachDay]# day of xmas, my true love gave to me&lt;br&gt;<br>			#down(eachDay)#&lt;br&gt;&lt;br&gt;<br>		&lt;/cfloop&gt;<br>	&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675546">15</a> by Simeon
		posted on 12/14/2007 at 11:48 PM
		</div>
		<div class="comment_text"><p>I decided to do mine in Ruby which really makes it ineligible for any contest but it was fun anyway :)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.simb.net%2F2007%2F12%2F14%2Frays-christmas-code-challenge-in-ruby%2F%3A6yWgBlCkBVmOd_vwJ0rG19qUjh8&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.simb.net/2007/12/14/rays-christmas-code-challenge-in-ruby/">http://blog.simb.net/2007/1...</a></p><p>Technically the part that outputs the song is 8 lines of code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675548">16</a> by todd sharp
		posted on 12/14/2007 at 11:57 PM
		</div>
		<div class="comment_text"><p>RUBY????  Lifetime ban!!!!!!!!!!!! :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675549">17</a> by todd sharp
		posted on 12/15/2007 at 1:34 AM
		</div>
		<div class="comment_text"><p>Hey guys - check Ray's post about grabbing the img's from Yahoo.</p><p>I mashed that up with my stuff and randomized the results for each slide:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfsilence.com%2Fblog%2Fdemos%2F12days%2Fyahoo%2Findex.htm%3AKVQpMXLnI1uhZ1rjCwK9FaiB3vE&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsilence.com/blog/demos/12days/yahoo/index.htm">http://cfsilence.com/blog/d...</a></p><p>(Oh and for the cfpresentation fans - rather then re-create the preso on the fly I took advantage of the directory attribute and wrote it to disk)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675550">18</a> by Fitz
		posted on 12/19/2007 at 4:39 AM
		</div>
		<div class="comment_text"><p>Hope I'm not to late to get in on the fun!</p><p>&lt;div style="width: 400px; font: .9em/1.8em Georgia, 'Times New Roman', Times, serif; padding: 30px;"&gt;<br>&lt;cfoutput&gt;<br> &lt;cfloop from="1" to="#arrayLen(gifts)#" index="j"&gt;<br> &lt;div style="padding: 20px 0; border-bottom: 1px solid ##ccc; color: green;"&gt;<br> &lt;em style="color: red;"&gt;On the #j# day of Christmas, my true love gave to me,&lt;/em&gt;&lt;br /&gt;<br>  &lt;cfloop from="#j#" to="1" index="k" step="-1"&gt;<br>   &lt;cfif (j gte 2 and k eq 1)&gt;<br>    and<br>   &lt;/cfif&gt;<br>    #<a href="http://disq.us/url?url=http%3A%2F%2Fsong.gift%3AYVwmc6xDJOil7m0JIiSozpUoZ-k&amp;cuid=3321886" rel="nofollow noopener" title="song.gift">song.gift</a>[k]#&lt;br /&gt;<br>  &lt;/cfloop&gt;<br>  &lt;/div&gt;<br> &lt;/cfloop&gt;<br>&lt;/cfoutput&gt;<br>&lt;/div&gt;</p></div>
	</div>
</div>
		