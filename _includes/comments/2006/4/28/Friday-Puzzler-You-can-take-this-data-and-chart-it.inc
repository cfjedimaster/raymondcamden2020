
<div class="comment" id="c_1713652388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652388">1</a> by Scott P
		posted on 4/28/2006 at 5:39 PM
		</div>
		<div class="comment_text"><p>Not pretty but here is 5 minutes:<br>Note: I divided the sales figures by 2 for displaying purposes.</p><p>&lt;code&gt;<br>Sales Report&lt;br&gt;<br>&lt;!--- Sales of widgets over the last 12 months ---&gt;<br>&lt;cfset sales = arrayNew(1)&gt;</p><p>&lt;cfloop index="x" from="1" to="12"&gt;<br>   &lt;cfset sales[x] = randRange(0,100)&gt;</p><p>   &lt;Cfoutput&gt;#MonthAsString(x)#:&lt;/CFOUTPUT&gt;<br>	&lt;!--- Draw the chart ---&gt;<br>        &lt;cfloop from="1" to="#sales[x] /2#" index="r"&gt;<br>	*<br>	&lt;/cfloop&gt;<br>	&lt;br&gt;<br>&lt;/cfloop&gt;<br>&lt;/code&gt;<br>* = 2 Units</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652374">2</a> by Raymond Camden
		posted on 4/28/2006 at 5:44 PM
		</div>
		<div class="comment_text"><p>Heh, one mistake. You use a BR tag. Remember, no html. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652390">3</a> by Scott P
		posted on 4/28/2006 at 5:59 PM
		</div>
		<div class="comment_text"><p>OK attempt two, well past the five minute mark and this is my last try.  Stubborn me.</p><p>&lt;pre&gt;<br>&lt;Cfoutput&gt;</p><p>Sales Report #chr(10)##chr(13)#<br>&lt;!--- Sales of widgets over the last 12 months ---&gt;<br>&lt;cfset sales = arrayNew(1)&gt;</p><p>&lt;cfloop index="x" from="1" to="12"&gt;<br>&lt;cfset sales[x] = randRange(0,100)&gt;</p><p>&lt;Cfoutput&gt;#MonthAsString(x)#:&lt;/CFOUTPUT&gt;<br>   &lt;!--- Draw the chart ---&gt;<br>&lt;cfloop from="1" to="#sales[x] /2#" index="r"&gt;*&lt;/cfloop&gt;</p><p>#chr(10)##chr(13)#</p><p>&lt;/cfloop&gt;</p><p>&lt;/CFOUTPUT&gt;</p><p>&lt;/pre&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652391">4</a> by Raymond Camden
		posted on 4/28/2006 at 6:01 PM
		</div>
		<div class="comment_text"><p>Btw (and sorry to be picking on you, but you are the one posting. ;), don't forget that instead of a loop, you can also use the mostly unknown repeatString function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652389">5</a> by Jim Walker
		posted on 4/28/2006 at 6:36 PM
		</div>
		<div class="comment_text"><p>No HTML. So you have to view the 'text' to see it.  I have to disqualify myself, I think it took maybe 8 mins.</p><p>&lt;!--- Sales of widgets over the last 12 months ---&gt;<br>&lt;cfset sales = arrayNew(1)&gt;<br>&lt;cfloop index="x" from="1" to="12"&gt;<br>   &lt;cfset sales[x] = randRange(0,100)&gt;<br>&lt;/cfloop&gt;</p><p>&lt;cfoutput&gt;<br>&lt;cfloop index="i" from="#ArrayMax(sales)#" to="1" step="-1"&gt;<br>	#RJustify(i,3)##chr(32)##chr(32)#<br>	&lt;cfloop index="j" from="1" to="12"&gt;<br>		#chr(32)#&lt;cfif sales[j] gte i&gt;*&lt;cfelse&gt;-&lt;/cfif&gt;#chr(32)##chr(32)#<br>	&lt;/cfloop&gt;<br>	#chr(13)#<br>&lt;/cfloop&gt;<br>#chr(32)##chr(32)##chr(32)##chr(32)##chr(32)#<br>&lt;cfloop index="k" from="1" to="12"&gt;<br>	#Left(MonthAsString(k),3)#<br>&lt;/cfloop&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652392">6</a> by Teddy Payne
		posted on 4/28/2006 at 6:36 PM
		</div>
		<div class="comment_text"><p>I must ahve ate my cherios this morning because this code came to me in less than 5 minutes.  It is also a vertical bar char as well.  =)</p><p>&lt;cfset iCeiling = 100&gt;<br>&lt;cfset sales = arrayNew(1)&gt;</p><p>&lt;cfloop index="x" from="1" to="12"&gt;<br>   &lt;cfset sales[x] = randRange(0,iCeiling)&gt;<br>&lt;/cfloop&gt;</p><p>&lt;cfoutput&gt;<br>&lt;pre&gt;&lt;cfloop from="#iCeiling#" to="1" step="-1" index="i"&gt;&lt;cfloop from="1" to="12" index="j"&gt;&lt;cfif sales[j] gte i&gt;&amp;nbsp;*&amp;nbsp;&lt;cfelse&gt;&amp;nbsp;&amp;nbsp;&amp;nbsp;&lt;/cfif&gt;&lt;/cfloop&gt;#chr(10)##chr(13)#&lt;/cfloop&gt;&lt;/pre&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652393">7</a> by Ed B
		posted on 4/28/2006 at 6:37 PM
		</div>
		<div class="comment_text"><p>This is my attempt #2 as well.  I didn't notice the "no HTML" requirement until I was about to post my attempt #1 and saw Ray's comment to Scott P...</p><p>&lt;cfcontent type="text/plain"&gt;</p><p>	Sales of widgets over the last 12 months</p><p>&lt;cfsetting enablecfoutputonly="yes"&gt;</p><p>&lt;!--- Sales of widgets over the last 12 months ---&gt;<br>&lt;cfset sales = arrayNew(1)&gt;</p><p>&lt;cfloop index="x" from="1" to="12"&gt;<br>&lt;cfset sales[x] = randRange(0,100)&gt;<br>&lt;cfoutput&gt;<br>	#x# &lt;cfloop index="y" from="1" to="#sales[x]#"&gt;*&lt;/cfloop&gt;<br>&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652399">8</a> by StuMo
		posted on 4/28/2006 at 6:58 PM
		</div>
		<div class="comment_text"><p>Couldn't resist adding a box for the chart.</p><p>&lt;cfoutput&gt;&lt;pre&gt;<br>#repeatString(" ",5)##repeatString("-",Round(ArrayMax(sales))+2)##Chr(13)#<br>&lt;cfloop from="1" to="#arraylen(sales)#" index="i"&gt;&lt;cfif Len(i) lt 2&gt;#Chr(32)#&lt;/cfif&gt;#i#: | #repeatString("*",sales[i])#&lt;cfif sales[i] neq ArrayMax(sales)&gt;#RepeatString(Chr(32),Abs(sales[i]-ArrayMax(sales)))#&lt;/cfif&gt; |#Chr(10)#&lt;/cfloop&gt;<br>#repeatString(" ",5)##repeatString("-",Round(ArrayMax(sales))+2)##Chr(13)#&lt;/pre&gt;&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652398">9</a> by ErikG
		posted on 4/28/2006 at 7:04 PM
		</div>
		<div class="comment_text"><p>&lt;!--- horz output ---&gt;<br>&lt;strong&gt;Sales of widgets over the last 12 months&lt;/strong&gt;&lt;br/&gt;<br>&lt;cfloop index="i" from="1" to="#ArrayLen(sales)#"&gt;<br>	&lt;cfoutput&gt;#RepeatString("*",sales[i])# #sales[i]#&lt;br/&gt;&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;</p><p>&lt;br/&gt;&lt;br/&gt;</p><p>&lt;!--- vert output ---&gt;<br>&lt;strong&gt;Sales of widgets over the last 12 months&lt;/strong&gt;<br>&lt;table&gt;<br>&lt;tr valign="bottom"&gt;<br>&lt;cfloop index="i" from="1" to="#ArrayLen(sales)#"&gt;<br>	&lt;td align="center" style="padding:2px 8px;line-height:25%;"&gt;&lt;cfoutput&gt;&lt;strong&gt;#sales[i]#&lt;/strong&gt;&lt;br/&gt;&lt;br/&gt;&lt;br/&gt;#RepeatString("*&lt;br/&gt;",sales[i])#&lt;br/&gt;&lt;/cfoutput&gt;&lt;/td&gt;<br>&lt;/cfloop&gt;<br>&lt;/tr&gt;<br>&lt;/table&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652400">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652400">10</a> by ErikG
		posted on 4/28/2006 at 7:07 PM
		</div>
		<div class="comment_text"><p>OK, sorry... I didn't read any comments until after posting, and I totally missed the no-HTML-ness of the challenge.</p><p>Textbased to me doesn't automatically mean no HTML.</p><p>My bad.  Disregard my entries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652383">11</a> by ErikG
		posted on 4/28/2006 at 7:24 PM
		</div>
		<div class="comment_text"><p>Here's the TXT based versions.  Horizontal was simple of course, the vertical pushed me into 8 minutes, I am a loser.</p><p>&lt;!--- horz output ---&gt;<br>&lt;pre&gt;<br>Sales of widgets over the last 12 months<br>&lt;cfloop index="i" from="1" to="#ArrayLen(sales)#"&gt;<br>&lt;cfoutput&gt;#RJustify(sales[i],3)# #RepeatString("*",sales[i])#&lt;/cfoutput&gt;&lt;/cfloop&gt;<br>&lt;/pre&gt;</p><p>&lt;!--- vert output ---&gt;<br>&lt;cfset txtChart = ""/&gt;<br>&lt;cfloop index="x" from="100" to="1" step="-1"&gt;<br>	&lt;cfset txtChartLine = ""/&gt;<br>	&lt;cfloop index="i" from="1" to="#ArrayLen(sales)#"&gt;<br>	&lt;cfset txtChartLine = txtChartLine &amp; "   "/&gt;&lt;!--- padding between bars ---&gt;<br>	&lt;cfif sales[i] GTE x&gt;&lt;cfset txtChartLine = txtChartLine &amp; "*"/&gt;&lt;cfelse&gt;&lt;cfset txtChartLine = txtChartLine &amp; " "/&gt;&lt;/cfif&gt;<br>	&lt;/cfloop&gt;<br>	&lt;cfif Len(Trim(txtChartLine)) GT 0&gt;&lt;cfset txtChart = txtChart &amp; txtChartLine &amp; Chr(10)/&gt;&lt;/cfif&gt;<br>&lt;/cfloop&gt;<br>&lt;cfloop index="i" from="1" to="#ArrayLen(sales)#"&gt;<br>	&lt;cfset txtChart = txtChart &amp; RJustify(sales[i],4)/&gt;<br>&lt;/cfloop&gt;</p><p>&lt;pre&gt;<br>Sales of widgets over the last 12 months<br>&lt;cfoutput&gt;#txtChart#&lt;/cfoutput&gt;<br>&lt;/pre&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652382">12</a> by Damon Gentry
		posted on 4/28/2006 at 10:06 PM
		</div>
		<div class="comment_text"><p>About 4 minutes:</p><p>&lt;!--- Sales of widgets over the last 12 months ---&gt;<br>&lt;cfset sales = arrayNew(1)&gt;<br>&lt;cfloop index="x" from="1" to="12"&gt;<br>   &lt;cfset sales[x] = randRange(0,100)&gt;<br>&lt;/cfloop&gt;</p><p>&lt;pre&gt;<br>&lt;cfscript&gt;</p><p>	for (i = 1; i LTE ArrayLen(sales); i = i + 1) {</p><p>		writeoutput(i &amp; "	");<br>		writeoutput(RepeatString("*", sales[i]) &amp; "&lt;br /&gt;");		<br>	}<br>&lt;/cfscript&gt;<br>&lt;/pre&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652394">13</a> by Damon Gentry
		posted on 4/28/2006 at 10:08 PM
		</div>
		<div class="comment_text"><p>Oops!  I didn't see the comment about no HTML.  I'd have to simply replace my "&lt;br /&gt;" tag with CHR(10).</p></div>
	</div>
</div>
		