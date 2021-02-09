
<div class="comment" id="c_1713729113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729113">1</a> by chuck
		posted on 1/25/2011 at 5:40 AM
		</div>
		<div class="comment_text"><p>Honestly if you really want some nice looking charts I would try some javascript libraries rapheal.js especially comes to mind for creating really great web charts that lok really great and you can customize them as much as you want... and its as easy to get started as creating a table and pointing the javascript at it...</p><p>anyway try this <a href="http://disq.us/url?url=http%3A%2F%2Fg.raphaeljs.com%2F%3AfinEGyMYrl4s9ImQtxqTQta3dB8&amp;cuid=3321886" rel="nofollow noopener" title="http://g.raphaeljs.com/">http://g.raphaeljs.com/</a></p><p>Cheers <br> Chuck</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729112">2</a> by Rawdyn
		posted on 1/25/2011 at 12:17 PM
		</div>
		<div class="comment_text"><p>Great solution.</p><p>I had the same issue and ended up swapping around the lables for the totals and having a hover to show the label. Client loved it and got me on other, more important tasks.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcodebase.com.au%2Fsb_clients%2Fcodebase%2Fdocs%2Fpie_example_V01.jpg%3Af1XbvMJDRdH4ILQMLzbaxI7LVgw&amp;cuid=3321886" rel="nofollow noopener" title="http://codebase.com.au/sb_clients/codebase/docs/pie_example_V01.jpg">http://codebase.com.au/sb_c...</a></p><p>By the way, I think HomeSite+ is still the best IDE... but that's another story :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729111">3</a> by Tom Jenkins
		posted on 1/25/2011 at 1:59 PM
		</div>
		<div class="comment_text"><p>I'm another advocate of JS graphs / charts over the native CF ones, specifically jqPlot</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.jqplot.com%2F%3Atydwgvi9BDelr22voF2zI_KlF2o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.jqplot.com/">http://www.jqplot.com/</a></p><p>They are just so much easier to control</p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729117">4</a> by Dan G. Switzer, II
		posted on 1/25/2011 at 7:44 PM
		</div>
		<div class="comment_text"><p>One other thing I've done, is to roll up all the very small percentages into an "Other" pie slice. So, what I would do is set like a maximum threshold for pie slices (for example, 8.) So, if I have more than 8 slices, what I do sort from the largest to smallest and then combine the numbers for anything less than then top 7 slices and put them in an "Other" slice.</p><p>Well this approach doesn't work for everything, it's another alternative I've used. This works especially well if you have a small screen area for the pie chart. Well the autoControl certainly helps, if your chart has to fit into a relatively small space (like 320x24) then the chart quickly gets unreadable if you try and display all the slices.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729115">5</a> by Raymond Camden
		posted on 1/25/2011 at 7:46 PM
		</div>
		<div class="comment_text"><p>@Chuck, @Tom: I'm definitely a fan of JS based charting (I've blogged on jqplot before and will be reviewing another engine soon), but it was kinda cool to get it working with the native charts. :) Plus - I do not believe the JS based ones would work for Report Builder.</p><p>@Dan: Yeah, now I'm convinced - going to do a part 2 with the Other slice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729121">6</a> by Jon
		posted on 1/26/2011 at 2:11 AM
		</div>
		<div class="comment_text"><p>it would be easier to change the graph to a bar chart. Pie charts are not useful to really show what is going on, you have to guess or read the values to figure them out. A bar or column chart gives you clear relationships between the values.</p><p>A pie chart, if used, should have no more than 4 pieces.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729118">7</a> by Raymond Camden
		posted on 1/26/2011 at 2:16 AM
		</div>
		<div class="comment_text"><p>Valid point - but sometimes we don't get to choose the chart type. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729126">8</a> by Jon
		posted on 1/26/2011 at 3:14 AM
		</div>
		<div class="comment_text"><p>If the boss says they want a pie chart, it is incumbent on the engineer to show the boss that there are better ways to analyze the data. If we don't educate mgmt, they will never learn. Sometimes putting data together that is actually readable and  useful to decision making trumps what the boss "wants".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729122">9</a> by Raymond Camden
		posted on 1/26/2011 at 3:15 AM
		</div>
		<div class="comment_text"><p>Ok, valid point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729124">10</a> by Raymond Camden
		posted on 1/26/2011 at 5:25 PM
		</div>
		<div class="comment_text"><p>Posted my follow up here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2011%2F1%2F26%2FUpdate-to-my-Pie-chart-with-lots-of-data-post%3Ae6fZ8LBD9gIapsxerJZCUYpREQY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2011/1/26/Update-to-my-Pie-chart-with-lots-of-data-post">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729114">11</a> by LLN08
		posted on 9/7/2012 at 10:30 PM
		</div>
		<div class="comment_text"><p>Hi,<br>Found this post very helpful. I am creating a line graph chart and got the values to display at each bullet point, but there are more than 1 line graph (chartseries). The values are overlapping on each other. I used the &lt;dataLabels style="value" autoControl="true"/&gt; in my xml file, but to no avail. Is there a different method to get the values at the bullet point to not overlap for line graph charts? Any help is appreciated.<br>Thanks<br>Loan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729116">12</a> by Raymond Camden
		posted on 9/9/2012 at 8:43 PM
		</div>
		<div class="comment_text"><p>If you can give me a template I can run to test this, I'll try to debug it. If your data is query based, try recreating it with queryNew so I can run it locally.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729120">13</a> by LLN08
		posted on 9/10/2012 at 7:55 PM
		</div>
		<div class="comment_text"><p>Here is my xml file called my_dataentry_chart1.xml:<br>&lt;?xml version="1.0" encoding="UTF-8"?&gt;<br> &lt;frameChart is3D="false"&gt;<br> &lt;frame xDepth="3" yDepth="1" leftAxisPlacement="Back" isHStripVisible="true"&gt;<br> &lt;/frame&gt;</p><p>&lt;xAxis type="DateTime" isAbsolute="false" scaleMin="0"&gt;<br>&lt;labelFormat style="DateTimePattern" pattern="MM/dd/yyyy"/&gt;<br>&lt;parseFormat style="DateTimePattern" pattern="yyyy-MM-dd"/&gt;<br>&lt;dateTimeStyle minorUnit="Hour"/&gt;<br>&lt;labelStyle isMultiline="false" orientation="horizontal"/&gt;<br>&lt;titleStyle font="Arial-16-bold" isMultiline="false"/&gt;</p><p>&lt;/xAxis&gt;</p><p>&lt;dataLabels style="Value" autoControl="true"/&gt;</p><p>&lt;/frameChart&gt;</p><p>Below is my code. The 2 lines overlapp making the values hard to read:</p><p>&lt;cfoutput&gt;<br>&lt;title&gt;Chart&lt;/title&gt;</p><p>		&lt;cfchart showborder="yes"<br>		chartheight="450"<br>		chartwidth="1000"<br>		yaxistitle="% Correct" <br>		xaxistitle="Weekly"<br>		sortXAxis="yes"</p><p>		xAxistype="category"<br> 		showxgridlines="yes"<br>		scaleFrom="90" <br>		scaleTo="100" <br>		showLegend="yes"<br>		tipStyle="mouseOver"<br>		title="% Correct"<br>		format="jpg"<br>		style="my_dataentry_chart1.xml"	<br>		&gt;</p><p>&lt;cfset a = queryNew("dateentered,avgscore","cf_sql_varchar,cf_sql_decimal")&gt;<br>&lt;cfset queryAddRow(a)&gt;<br>&lt;cfset querySetCell(a, "dateentered","08/05/2012")&gt;<br>&lt;cfset querySetCell(a, "avgscore",97.04)&gt;</p><p>&lt;cfset queryAddRow(a)&gt;<br>&lt;cfset querySetCell(a, "dateentered","08/12/2012")&gt;<br>&lt;cfset querySetCell(a, "avgscore",97.39)&gt;</p><p>&lt;cfset queryAddRow(a)&gt;<br>&lt;cfset querySetCell(a, "dateentered","08/19/2012")&gt;<br>&lt;cfset querySetCell(a, "avgscore",97.61)&gt;</p><p>&lt;cfset queryAddRow(a)&gt;<br>&lt;cfset querySetCell(a, "dateentered","08/26/2012")&gt;<br>&lt;cfset querySetCell(a, "avgscore",97.55)&gt;</p><p>&lt;cfset queryAddRow(a)&gt;<br>&lt;cfset querySetCell(a, "dateentered","09/02/2012")&gt;<br>&lt;cfset querySetCell(a, "avgscore",98.12)&gt;</p><p>&lt;cfset queryAddRow(a)&gt;<br>&lt;cfset querySetCell(a, "dateentered","09/09/2012")&gt;<br>&lt;cfset querySetCell(a, "avgscore",98.53)&gt;</p><p>&lt;cfchartseries type="line" serieslabel="Target"  <br>markerstyle="diamond" colorlist="Bright Green" datalabelstyle="none"&gt;</p><p>	&lt;cfloop query="a"&gt;<br>					&lt;cfset d = dateformat(a.DateEntered,"MM/dd/yyyy")&gt;<br>					&lt;cfchartdata item="#variables.d#" value="97.5"&gt;<br>	&lt;/cfloop&gt;</p><p>&lt;/cfchartseries&gt;</p><p>&lt;cfchartseries type="line" serieslabel="2012"  <br>markerstyle="circle"<br>colorlist="red,blue,yellow,green, aqua, fuchsia, teal, purple, olive, black, maroon"<br> datalabelstyle="value"&gt;</p><p>	&lt;cfloop query="a"&gt;</p><p>					&lt;cfset d = dateformat(a.DateEntered,"MM/dd/yyyy")&gt;<br>					&lt;cfchartdata item="#variables.d#" value="#decimalformat(a.avgscore)#"&gt; <br>	&lt;/cfloop&gt;		 &lt;!---- &lt;cfloop query="a"&gt;-----&gt;	<br>&lt;/cfchartseries&gt;</p><p>&lt;/CFCHART&gt; <br>&lt;/cfoutput&gt;</p><p>Thanks for your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729119">14</a> by Raymond Camden
		posted on 9/10/2012 at 8:34 PM
		</div>
		<div class="comment_text"><p>Just a quick favor, in the future, please use pastebin for large code blocks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729128">15</a> by Loan
		posted on 9/10/2012 at 8:50 PM
		</div>
		<div class="comment_text"><p>Sorry about that. I am new to this, and don't even know what a pastebin is. I really appreciate your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729129">16</a> by Raymond Camden
		posted on 9/11/2012 at 2:29 AM
		</div>
		<div class="comment_text"><p>So - I can see what you see. I tried like heck to find a setting in the chart editor to help with this, but I wasn't able too. Best I can recommend is NOT using the datalabels and relying on the mouseover to see the value - or switching to another charting engine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729125">17</a> by Raymond Camden
		posted on 9/11/2012 at 2:31 AM
		</div>
		<div class="comment_text"><p>I can say that in CF10, using the newer-style charting, it works out ok since the data labels don't show up at all. ;) And you can turn on/off each series to focos.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729127">18</a> by Loan
		posted on 9/11/2012 at 6:09 AM
		</div>
		<div class="comment_text"><p>Thank you for your help.  Our account rep sends this report to our client (I am not sure in what format) who doesn't run the report themselves, so we are not able to utilize the mouseover.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729130">19</a> by Joshua Rowe
		posted on 7/11/2013 at 2:13 AM
		</div>
		<div class="comment_text"><p>autoControl="true".  Thank you for your help.  You are a lifesaver, as always!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729132">20</a> by Raymond Camden
		posted on 7/11/2013 at 2:16 AM
		</div>
		<div class="comment_text"><p>No problem, but I'll point out - this charting engine now is WAY old. I'm encouraging folks to look at more modern charting engines. There's a bunch out there.</p></div>
	</div>
</div>
		