
<div class="comment" id="c_1713685912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685912">1</a> by Nat Papovich
		posted on 9/17/2008 at 7:29 PM
		</div>
		<div class="comment_text"><p>Sing praises for Ray! Thanks a million!</p><p>One note to you... Chart Designer does run on OS X. Open a terminal, type "bash" hit enter, open a Finder to /Applications/ColdFusion8/charting, then click-n-drag <a href="http://disq.us/url?url=http%3A%2F%2Fwebcharts.sh%3ARDM91rJCeoNGDQACBs6jbwo_u9s&amp;cuid=3321886" rel="nofollow noopener" title="webcharts.sh">webcharts.sh</a> into the bash term window. The sucker loads up and runs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685919">2</a> by Raymond Camden
		posted on 9/17/2008 at 7:31 PM
		</div>
		<div class="comment_text"><p>Heh cool tip! I didn't know that. Although honestly I can run RDP quicker than I can type all that. ;) Unless there is a way to shortcut those actions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685915">3</a> by Henry Ho
		posted on 9/17/2008 at 10:51 PM
		</div>
		<div class="comment_text"><p>Wow!  I didn't even know there's this hidden gem in CF8. WebChart3D 5.1.  That's weird, how come I've never see it mentioned anywhere in CFCHART doc: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfquickdocs.com%2Fcf8%2F%23cfchart%3AavOj7VoZYuwzhgF1Se3UDHcf00M&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfquickdocs.com/cf8/#cfchart">http://www.cfquickdocs.com/...</a> ?</p><p>Other hidden gems (to some people) :<br>- ColdFusion Report Builder<br>- LiveCycle DS (express, 1 CPU only limit)<br>- Verity full text search (anyone used it before?)</p><p>anymore?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685916">4</a> by Raymond Camden
		posted on 9/17/2008 at 10:57 PM
		</div>
		<div class="comment_text"><p>Hidden? Henry, you need to read the docs. ;) All of these are _fully_ explained in the docs. THe chart designer may not be, but the items you brought up certainly are.</p><p>Actually I just checked, and using the chart designer is also in the docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685920">5</a> by Henry Ho
		posted on 9/18/2008 at 2:17 AM
		</div>
		<div class="comment_text"><p>:) IMO CFML doc on CFCHART should at least mention the chart designer, don't you think?</p><p>As for the other hidden gems, yes they're not all that hidden to us, that's why I had "Other hidden gems (to some people)"</p><p>ColdFusion Report Builder is a separate download.  I bet many people don't even know such product exists if they don't use CF to generate report.</p><p>LiveCycle DS Express is quite hidden too.  You can't find any LiveCycle DS settings in ColdFusion Administrator.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685921">6</a> by Raymond Camden
		posted on 9/18/2008 at 10:09 PM
		</div>
		<div class="comment_text"><p>Eh? The docs do mention it. Don't just look at the reference, but the developer guide as well.</p><p>As for Report Builder and Livecycle, both are _fully_ covered in the developer guide.</p><p>I'd argue that if they are hidden, it is only to folks who don't take the time to read the docs. I will admit to not having read every page, but I do at least skim the TOC. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685918">7</a> by Steve
		posted on 10/22/2008 at 8:01 PM
		</div>
		<div class="comment_text"><p>Thank Raymond, this post really helped me out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685917">8</a> by Steve Leberman
		posted on 5/25/2010 at 5:15 PM
		</div>
		<div class="comment_text"><p>This is a great post. It almost solves my issue. I have graphs being displayed that contain null values that I woul like to skip as you have in this example. The main difference is that I have multiple sets of data being displayed on the same graph, so I am using the cfchartdata tag to represent each line on the graph. I am having trouble getting the null points to plot if I display multiple lines using the cfchartdata tag instead of just the cfchartseries tag with the query in it. Any thoughts??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685922">9</a> by Steve Leberman
		posted on 5/25/2010 at 5:40 PM
		</div>
		<div class="comment_text"><p>I actually came up with my own solution, not sure how elegant but it works  (o:   Maybe this will help someone... or maybe someone can show me how to do more elegant...lol..</p><p>&lt;cfsavecontent variable="style"&gt;<br>     &lt;?xml version="1.0" encoding="UTF-8"?&gt;<br>         &lt;frameChart isInterpolated="false"&gt;&lt;/frameChart&gt;<br>&lt;/cfsavecontent&gt;<br>&lt;cfoutput query="QGraphSurvey" group="evalmonth"&gt;<br>       &lt;cfquery dbtype="query" name="singlerow"&gt;<br>	select questionnum, avgscore, evalmonth<br>             from QGraphSurvey<br>	Where evalmonth = '#evalmonth#'<br>       &lt;/cfquery&gt;<br>&lt;cfchartseries type="line" query="singlerow" itemColumn="questionnum" valueColumn="avgscore" serieslabel="#dateformat(evalmonth, "mmm dd,yyyy")#"  /&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685923">10</a> by Daniel Whiddon
		posted on 5/27/2011 at 3:23 AM
		</div>
		<div class="comment_text"><p>I have located a much more elegant solution if you are using multiple series.</p><p>&lt;cfsavecontent variable="chartStyle"&gt;<br>    &lt;?xml version="1.0" encoding="UTF-8"?&gt;<br>    &lt;frameChart isInterpolated="false"&gt;<br>    &lt;yAxis scaleMin="0"/&gt;<br>    &lt;/frameChart&gt;<br>&lt;/cfsavecontent&gt;</p><p>this handles the display issues you face when you just use isInterpolated="false" as it will still show all the data in relation to zero</p></div>
	</div>
</div>
		