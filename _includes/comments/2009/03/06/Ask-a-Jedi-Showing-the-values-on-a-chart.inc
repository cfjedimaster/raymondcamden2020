
<div class="comment" id="c_1713713554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713554">1</a> by Alirio Boquin
		posted on 3/7/2009 at 2:16 AM
		</div>
		<div class="comment_text"><p>WOW, Raymond you always give us, a nice stuff.</p><p>Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713556">2</a> by Dan G. Switzer, II
		posted on 3/7/2009 at 2:29 AM
		</div>
		<div class="comment_text"><p>While not directly related to this issue, I just made a post on how to fix the default CFCHART tooltip behavior if you're generating static images:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.pengoworks.com%2Findex.cfm%2F2009%2F3%2F6%2FUsing-jQuery-to-fix-CFCHARTs-tooltip-behavior%3AuRW_LPoPXZmugRPSnWtlv-5f_UA&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.pengoworks.com/index.cfm/2009/3/6/Using-jQuery-to-fix-CFCHARTs-tooltip-behavior">http://blog.pengoworks.com/...</a></p><p>There are some issues with the default mouse handlers--the main issue is that tooltips can run out of the viewport.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713553">3</a> by Venkata Unnam
		posted on 3/26/2009 at 3:06 PM
		</div>
		<div class="comment_text"><p>YOu helped more today. Thanks Unnam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713555">4</a> by Eric Brancaccio
		posted on 2/12/2010 at 2:08 AM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I have a cfchart issue I wanted to run by you. Taking the chart you have on this page, let's say I wanted to have 2 or more bars above the result1 label on the xaxis.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713628">5</a> by Raymond Camden
		posted on 2/12/2010 at 5:52 PM
		</div>
		<div class="comment_text"><p>Sorry - not quite sure I get what you mean. You want two rows of bars?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713629">6</a> by Eric Brancaccio
		posted on 2/12/2010 at 9:30 PM
		</div>
		<div class="comment_text"><p>Your chart above has two labels across the x axis "result1" and "result2". Each label has one bar above it. Instead of one bar per label, I'd like to have two bars with different colors above the label "result1".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713625">7</a> by Raymond Camden
		posted on 2/13/2010 at 8:23 PM
		</div>
		<div class="comment_text"><p>Just add another series:</p><p>&lt;cfchart format="flash" xaxistitle="respondents" yaxistitle="numbers" style="#style#"&gt;</p><p>	&lt;cfchartseries type="bar" serieslabel="result"&gt;<br>		&lt;cfchartdata item="result1" value="75"&gt;<br>		&lt;cfchartdata item="result2" value="80"&gt;<br>	&lt;/cfchartseries&gt;</p><p>	&lt;cfchartseries type="bar" serieslabel="moon"&gt;<br>		&lt;cfchartdata item="result1" value="15"&gt;<br>		&lt;cfchartdata item="result2" value="20"&gt;<br>	&lt;/cfchartseries&gt;</p><p>&lt;/cfchart&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713633">8</a> by Colin C.
		posted on 2/25/2010 at 3:18 AM
		</div>
		<div class="comment_text"><p>Has anyone been able to place a datalabel value at the top of a stacked bar chart?  The minute I use seriesplacement="stacked" in my CFCHART tag it seems to screw up the placement of the value label.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713635">9</a> by Raymond Camden
		posted on 2/25/2010 at 3:57 AM
		</div>
		<div class="comment_text"><p>Have you tried it in the Chart Editor?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713632">10</a> by Pristos
		posted on 1/31/2012 at 9:42 PM
		</div>
		<div class="comment_text"><p>Hello, Raymond!<br>I'm trying to use the datalabelstyle pattern in a pie chart, but it's a mess! All labels are on top of the other, so I can't read anything. Do you know how can I fix it?<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713630">11</a> by Raymond Camden
		posted on 2/1/2012 at 12:12 AM
		</div>
		<div class="comment_text"><p>If you could create a one page demo I could run, I'd take a stab at trying to fix it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713636">12</a> by Pristos
		posted on 2/1/2012 at 3:29 PM
		</div>
		<div class="comment_text"><p>I've get the answer in another post! Thanks for the help!<br>If anyone is interested.. <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2011%2F1%2F24%2FAsk-a-Jedi-ColdFusion-Pie-chart-with-lots-of-data%3AsyZH_LH6omZnUlpxaZrrgdnqvjg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2011/1/24/Ask-a-Jedi-ColdFusion-Pie-chart-with-lots-of-data">http://www.raymondcamden.co...</a><br>Great Post</p><p>Now I'm having another problem with a cfchart... It's a bar chart created with data from a query. <br>I'm having trouble to define the thickness of bars and the distance between them. When I have lots of bars, they stay close to each other, but when I have just a few, they are really apart.<br>That's the xml:<br>&lt;cfsavecontent variable="style"&gt;<br>			&lt;?xml version="1.0" encoding="UTF-8"?&gt;<br>				&lt;frameChart&gt;<br>						&lt;frame xDepth="6" yDepth="6"  outline="#333333" lightColor="white"<br>							leftAxisPlacement="Front" rightAxisPlacement="Front"/&gt;<br>							&lt;elements shapeSize="40" place="stacked"/&gt;<br>						&lt;xAxis scaleMin="0"&gt;<br>							&lt;labelStyle isHideOverlapped="true" orientation="vertical"/&gt;<br>							&lt;titleStyle font="Verdana-14-bold" isMultiline="true"/&gt;<br>						&lt;/xAxis&gt;<br>						&lt;yAxis scaleMin="0"&gt;<br>							&lt;titleStyle font="Verdana-14-bold"/&gt;<br>						&lt;/yAxis&gt;<br>						&lt;topYAxis&gt;<br>							&lt;titleStyle font="Arial-12-bold"/&gt;<br>						&lt;/topYAxis&gt;<br>						&lt;dataLabels foreground="black"/&gt;<br>						&lt;popup background="#C8FFFFFF" foreground="#333333"/&gt;<br>						&lt;paint paint="Plain"/&gt;<br>						&lt;insets left="5" top="5" right="5" bottom="5"/&gt;<br>				&lt;/frameChart&gt;<br>			&lt;/cfsavecontent&gt;</p><p>That's my chart:<br>&lt;cfchart 	scalefrom	  	= "0"<br>			scaleto       	= "100"	 <br>			format        	= "jpg"<br>			chartHeight    	= "500"<br>			chartWidth     	= "800"<br>			font           	= "arial"<br>			fontSize       	= "10"<br>			showBorder     	= "no"<br>			labelFormat    	= "number"<br>			tipStyle       	= "mouseOver"<br>			backGroundColor	= "##f9f9f9"<br>			show3D         	= "no"<br>			title          	= "Chart" <br>			name           	= "my_chart"<br>			showlegend		= "yes"<br>			xaxistitle 		= "x" <br>			yaxistitle 		= "y"<br>			style			= #style#&gt;</p><p>	&lt;cfchartseries <br>		type="bar" <br>		colorlist="#variables.color#"<br>		dataLabelStyle="value"&gt;<br>		&lt;cfloop query="q_data"&gt;<br>			&lt;cfchartdata item="#desc#" value="#qty#"&gt;<br>		&lt;/cfloop&gt;<br>	&lt;/cfchartseries&gt;<br>&lt;/cfchart&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713626">13</a> by Bernie
		posted on 4/4/2012 at 8:39 PM
		</div>
		<div class="comment_text"><p>How would one go about charting the data in percentages but displaying the inside chart labels in counts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713638">14</a> by Raymond Camden
		posted on 4/4/2012 at 10:06 PM
		</div>
		<div class="comment_text"><p>As far as I know you can't do this - the "tokens" in the labels are based on values. You can't pass in arbitrary data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713631">15</a> by sherri
		posted on 2/6/2013 at 7:05 PM
		</div>
		<div class="comment_text"><p>Thanks so much for posting this Raymond!  You helped me to better define the pattern style to meet the needs of a client.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713634">16</a> by Raymond Camden
		posted on 2/6/2013 at 7:46 PM
		</div>
		<div class="comment_text"><p>Glad this was useful for you! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713627">17</a> by Sarah
		posted on 6/17/2013 at 9:55 AM
		</div>
		<div class="comment_text"><p>I have a combo chart (line and bar) but only want the data values on my bar series to be displayed. How do I do that? I've tried using       &lt;elements shape="Bar"&gt;<br>               &lt;series index="1" shape="Prism"&gt;<br>                    &lt;morph morph="Grow"/&gt;<br>                    &lt;dataLabel style="Value"/&gt;<br>               &lt;/series&gt;<br>          &lt;/elements&gt;<br>in my xml file, but I get an error. Invalid attribute: style<br>Do you know why this would be if i pulled it out of WebCharts?  I'm using CF Version 8</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713637">18</a> by Raymond Camden
		posted on 6/17/2013 at 7:22 PM
		</div>
		<div class="comment_text"><p>Can you show me how you used cfchart? Just that line.</p></div>
	</div>
</div>
		