
<div class="comment" id="c_1713709275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709275">1</a> by Nick
		posted on 10/23/2008 at 6:59 PM
		</div>
		<div class="comment_text"><p>This is fantastic. I've been running a Disc Golf site for 2 years now and have always wanted to show Par in relation to actual. *bow to those greater than I*</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709276">2</a> by Raymond Camden
		posted on 10/23/2008 at 7:01 PM
		</div>
		<div class="comment_text"><p>So when are you going to play a real sport?</p><p>*ducks*</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709280">3</a> by Hatem Jaber
		posted on 10/23/2008 at 7:54 PM
		</div>
		<div class="comment_text"><p>Ray's script doesn't work for CFMX7, so with his help, this is a revised sample if you're working on with CFMX7:</p><p>&lt;cfset q = queryNew("dept,year,sales","varchar,integer,integer")&gt;<br>&lt;!--- generate random sales data ---&gt;<br>&lt;cfloop index="y" from="1990" to="1998"&gt;<br>   &lt;cfscript&gt;<br>   queryAddRow(q);<br>   if(y neq 1996) {<br>   querySetCell(q, "dept", "Gamma");<br>   querySetCell(q, "year", y);<br>   querySetCell(q, "sales", randRange(80,220));<br>   } else {<br>   querySetCell(q, "dept", "Gamma");<br>   querySetCell(q, "year", y);<br>   }<br>   &lt;/cfscript&gt;<br>&lt;/cfloop&gt;<br>&lt;cfdump var="#q#"&gt;</p><p>&lt;!--- style from webcharts ---&gt;<br>&lt;cfsavecontent variable="style"&gt;<br>&lt;?xml version="1.0" encoding="UTF-8"?&gt;<br>&lt;frameChart isInterpolated="false" is3d="false"&gt;<br>   &lt;yAxis&gt;<br>&lt;limits index="0" min="120" max="140" color="#e6e7e8"/&gt;<br>   &lt;/yAxis&gt;<br>&lt;/frameChart&gt;<br>&lt;/cfsavecontent&gt;</p><p>&lt;p&gt;&lt;p&gt;</p><p>&lt;cfchart chartWidth="400" chartHeight="400" title="Sales" style="/style.xml"&gt;<br>   &lt;cfchartseries type="line" query="q" itemColumn="year" valueColumn="sales" /&gt;<br>&lt;/cfchart&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709278">4</a> by Raymond Camden
		posted on 10/23/2008 at 7:58 PM
		</div>
		<div class="comment_text"><p>Let me give some context to Hatem's comment (we were talking on IM).</p><p>The cfchart tag has a style attribute (obviously), and it allows you to pass in either an XML string, or a path name. Ie, the path to a file. For some reason, CF7 (and I think CF6) always seemed to have issues with the XML as a string option. So for him I simply recommended saving the XML. Others may have to do the same. There is probably a nicer workaround, but I don't have a CF7 box to test with.</p><p>Secondly - he had to remove isInterpolated from his version of the XML. That threw an error. I'm guessing that the bundled WebCharts was updated in CF8. Interpolation is a pretty trivial feature though. I bet CF7 supports enabling/disabling it, but it probably uses a different XML value for it. I'd recommend folks playing with the chart editor to see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709281">5</a> by David
		posted on 10/29/2008 at 4:19 AM
		</div>
		<div class="comment_text"><p>Between 50 and 70? Let me bring you golfing some day my friend....if you keep pace with me, you'll be near 70 on the FRONT 9!  ;-)</p><p>Thanks for the tip</p><p>Davo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709279">6</a> by Raymond Camden
		posted on 7/8/2010 at 9:42 PM
		</div>
		<div class="comment_text"><p>A reader asked me (off blog) if you can do multiple limits. Absolutely. Just use additional &lt;limits&gt; tags:</p><p>&lt;limits index="0" min="120.0" max="100.0" color="#CC99FF"/&gt;<br>&lt;limits index="1" min="350.0" max="300.0" color="#00C451"/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709277">7</a> by Ann Terrell
		posted on 1/12/2011 at 12:40 AM
		</div>
		<div class="comment_text"><p>Thanks for this posting! It partially solved a big headache for me:  for my Y axis, I needed to somehow show numeric values below the "700" Y value to be Good and those above 700 to be Bad.  This gives me a visual way to do this.</p><p>Originally I had hoped to make the 700 value gridline in red (as opposed to the default gray color) or to make the 700 value label on the Y in red. I couldn't find anyway to do this, although in WebCharts you can set the "show zero level" frame attribute so that the gridline is the same color as the frame, but nothing to allow me to set a different gridline level.</p><p>Maybe you know a secret way to accomplish either of these? (hope beyond hope)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709284">8</a> by Raymond Camden
		posted on 1/12/2011 at 4:17 AM
		</div>
		<div class="comment_text"><p>You could use a second series where the second series is a line and is _just_ the value 700.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709283">9</a> by Ann Terrell
		posted on 1/12/2011 at 4:35 AM
		</div>
		<div class="comment_text"><p>Thanks so much for your reply!</p><p>I tried creating a static series, and it "works" to set a red line at the Y axis.  However when I did that - some of the attributes I used for the first series was overwritten by the second series.</p><p>The first series (a bar chart) had a colorlist attribute so that the max and min values were different than the default color. Also, I set the dataLabelStyle="value" in this first series.</p><p>Once I introduced the second series, the bar chart values for the first were all changed to the same color (no longer was showing max/min colors).  Also, the dataLabel in the second series, which was set to none, now displayed like the first (with values showing).</p><p>Does that make sense, without seeing code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709286">10</a> by Raymond Camden
		posted on 1/13/2011 at 7:13 AM
		</div>
		<div class="comment_text"><p>It kinda makes sense. You may need to switch to using XML to style _everything_.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709285">11</a> by LL
		posted on 6/6/2011 at 7:19 AM
		</div>
		<div class="comment_text"><p>Can I do like that in cfmx 6.1?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709289">12</a> by Raymond Camden
		posted on 6/6/2011 at 3:26 PM
		</div>
		<div class="comment_text"><p>If I remember right, in CF 6, you could only use a file for the style attribute. So you could try saving that xml to a file and then point to it with the style attribute.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709287">13</a> by LL
		posted on 6/7/2011 at 6:35 AM
		</div>
		<div class="comment_text"><p>Thanks so much for your reply. I think, <br>style attribute is does not have in CFMX 6.1 because i use style attribute in cfchart error occur like that "Attribute validation error for tag chart. The tag does not have an attribute called style, etc.."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709282">14</a> by Raymond Camden
		posted on 6/7/2011 at 6:36 AM
		</div>
		<div class="comment_text"><p>I'm sorry - I checked the reference again and style was added in 7, not 6.1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709292">15</a> by Raymond Camden
		posted on 6/7/2011 at 6:37 AM
		</div>
		<div class="comment_text"><p>I'll point out though that there are many other charting engines out there - some free. You should be able to use many of them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709291">16</a> by LL
		posted on 6/7/2011 at 6:40 AM
		</div>
		<div class="comment_text"><p>Thank a lot for your advise.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709293">17</a> by Lina Haddad
		posted on 12/1/2011 at 11:16 PM
		</div>
		<div class="comment_text"><p>Raymond, do you know if we can change the tip text ,<br>to let the tip text takes its information from a query ,<br>i need it for the purpose of doing this (my chart is line of percentages, and for example ,the percentage in one point is (25%) i wanna show in the tip for that point (50/200)), thank you so much.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709294">18</a> by Raymond Camden
		posted on 12/2/2011 at 12:21 AM
		</div>
		<div class="comment_text"><p>I dug around a bit in the chart designer, and while I could modify some of the design properties of the popup, nothing else seemed to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709298">19</a> by Rob
		posted on 1/16/2013 at 2:29 AM
		</div>
		<div class="comment_text"><p>Hi, I am having a problem with multiple series chart where the 0 value will be displayed on the graph as a straight line. i want display only data that doesn't have a 0 value.<br>i have also check those two links wher they said this is a bug in some build of CF9 but i have the lastest build of CF 9.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fforums.adobe.com%2Fmessage%2F3304324%233304324%3AwNt8J3XxeGPZagkB39CQ5y7LJPc&amp;cuid=3321886" rel="nofollow noopener" title="http://forums.adobe.com/message/3304324#3304324">http://forums.adobe.com/mes...</a><br><a href="https://disq.us/url?url=https%3A%2F%2Fbugbase.adobe.com%2Findex.cfm%3Fevent%3Dbug%26id%3D3042868%3AEHhkp91f5ftrze0xUZI8f29Ec7Y&amp;cuid=3321886" rel="nofollow noopener" title="https://bugbase.adobe.com/index.cfm?event=bug&amp;id=3042868">https://bugbase.adobe.com/i...</a></p><p>i check the interpolated in the xml file on inside cf9 directory and it seems to be false.</p><p>i really appreciate any help</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709299">20</a> by Raymond Camden
		posted on 1/16/2013 at 2:39 AM
		</div>
		<div class="comment_text"><p>I think you want this. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2008%2F9%2F17%2FAsk-a-Jedi-Handling-nulls-in-a-chart%3AlDTeukTqvMyfv1NMkFspGxBfY2Y&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2008/9/17/Ask-a-Jedi-Handling-nulls-in-a-chart">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709297">21</a> by Rob
		posted on 1/16/2013 at 3:09 AM
		</div>
		<div class="comment_text"><p>Thanks for the reply Raymond but i tried it. both  external and internal xml but still the same</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709295">22</a> by Raymond Camden
		posted on 1/16/2013 at 3:12 AM
		</div>
		<div class="comment_text"><p>Ok I just checked your forum link. This _is_ a bug. So... I'm not sure what to tell you. There are _numerous_ other charting engines out there, many JavaScript based, that would probably work just fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709296">23</a> by Stanislav Vladimirov
		posted on 11/19/2014 at 7:58 PM
		</div>
		<div class="comment_text"><p>Hello Raymond,<br>Is there a way to move limits in front of the bars?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709302">24</a> by Raymond Camden
		posted on 11/19/2014 at 8:04 PM
		</div>
		<div class="comment_text"><p>Not sure. Best I can recommend is playing with the chart editor as I did. I don't use cfchart anymore, nor do I recommend it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709301">25</a> by Stanislav Vladimirov
		posted on 11/20/2014 at 5:48 PM
		</div>
		<div class="comment_text"><p>Thank you for your answer Raymond. <br>Unfortunately I need it in order to include charts as part of pdf generation project and so far it have been a convenient way to do so. The other problem is that I can't find the chart editor application on our CF10 server installed on MacOS. There is only a pdf documentation included. I found that I can use the multicharts to combine bars and line and this is the next thing I will try.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709303">26</a> by Raymond Camden
		posted on 11/20/2014 at 6:53 PM
		</div>
		<div class="comment_text"><p>On my Mac, it is /Applications/ColdFusion10/cfusion/charting/<a href="http://disq.us/url?url=http%3A%2F%2Fwebcharts.sh%3ARDM91rJCeoNGDQACBs6jbwo_u9s&amp;cuid=3321886" rel="nofollow noopener" title="webcharts.sh">webcharts.sh</a>.</p></div>
	</div>
</div>
		