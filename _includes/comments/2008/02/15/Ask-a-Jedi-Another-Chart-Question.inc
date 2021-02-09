
<div class="comment" id="c_1713677110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677110">1</a> by Tom Chiverton
		posted on 2/15/2008 at 9:04 PM
		</div>
		<div class="comment_text"><p>"the built in chart editor"<br>That's the second time you've said that, but I'm not sure what it's meant to be built into...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677112">2</a> by Raymond Camden
		posted on 2/15/2008 at 9:11 PM
		</div>
		<div class="comment_text"><p>In your CF install folder, go to the charting folder and run webcharts.bat.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677111">3</a> by Tom Chiverton
		posted on 2/15/2008 at 9:31 PM
		</div>
		<div class="comment_text"><p>Ahh, Linux guy walking, so it's at /opt/coldfusion8/charting/<a href="http://disq.us/url?url=http%3A%2F%2Fwebcharts.sh%3ARDM91rJCeoNGDQACBs6jbwo_u9s&amp;cuid=3321886" rel="nofollow noopener" title="webcharts.sh">webcharts.sh</a></p><p>That's very cool. Is it documented anywhere ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677106">4</a> by Raymond Camden
		posted on 2/15/2008 at 9:34 PM
		</div>
		<div class="comment_text"><p>I believe so. It doesn't run at all on my Mac, so I use my Windows box when I play with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677109">5</a> by Tucson Web Design
		posted on 2/16/2008 at 7:21 AM
		</div>
		<div class="comment_text"><p>Thanks, I have been looking for this information all day! I love cfchart!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677107">6</a> by Andrew
		posted on 2/16/2008 at 6:07 PM
		</div>
		<div class="comment_text"><p>If you don't want to mess with webcharts you can create an xml file with all of your chart styles defines and then use the style attribute of the cfchart tag to point to your xml file.  This gives you the option of applying specific styles to specific types of charts within your app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677108">7</a> by Derek
		posted on 4/29/2008 at 1:31 AM
		</div>
		<div class="comment_text"><p>I assume that chaning the webcharts.bat impacts all of the charts that are generated on the server.  Is there a way to just control the orientation of the labels within my app so as not to affect the orientation for other developers on the server?  I saw reference to creating XML file referenced through the style attribute in cfchart, but not really sure how to do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677114">8</a> by Raymond Camden
		posted on 4/29/2008 at 1:41 AM
		</div>
		<div class="comment_text"><p>Derek, you are incorrect. You never change webcharts.bat. You _run_ it. This runs a program that lets you generate an XML file you can pass to cfchart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677116">9</a> by Derek
		posted on 4/29/2008 at 1:44 AM
		</div>
		<div class="comment_text"><p>Thanks for the clarification.  I think that I just found what you are talking about.  Is there any place that I can find some steps to help this newbie succeed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677113">10</a> by Raymond Camden
		posted on 4/29/2008 at 1:46 AM
		</div>
		<div class="comment_text"><p>If you search my blog for cfchart, I don't have a guide per se, but I have a lot of examples. Also google around for Tim Buntel's blog as he did a simply entry _just_ on this topic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677122">11</a> by CfL00zer
		posted on 5/15/2009 at 8:03 PM
		</div>
		<div class="comment_text"><p>I wonder if anybody has this issue:<br>I have added Yaxis title, it works fine for 2 bars, but the third bar shows to yaxis title in popup.</p><p>your help be apreciated</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677119">12</a> by CfL00zer
		posted on 5/15/2009 at 8:09 PM
		</div>
		<div class="comment_text"><p>To Raymond Camden<br>in spot light type: wc50.jar, click on it, the web chart should load same as PC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677120">13</a> by Raymond Camden
		posted on 5/15/2009 at 8:12 PM
		</div>
		<div class="comment_text"><p>@CfLoozer- yep, I realize that now. No longer using RDP to hit Windows to run the chart editor.</p><p>@CfLoozer - got a screen shot or a reproducable case?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677118">14</a> by Eunice K
		posted on 8/4/2010 at 11:23 PM
		</div>
		<div class="comment_text"><p>The xml file is located here:  \cfusion.ear\cfusion.war\WEB-INF\cfusion\charting\styles for me</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677125">15</a> by Kovacs Stefan
		posted on 9/29/2010 at 5:32 PM
		</div>
		<div class="comment_text"><p>I'd like to know if it is posible how to make  the value label on vertical.<br>Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677121">16</a> by Raymond Camden
		posted on 10/3/2010 at 7:55 PM
		</div>
		<div class="comment_text"><p>Sorry - what part?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677123">17</a> by Kovacs Stefan
		posted on 10/4/2010 at 11:32 AM
		</div>
		<div class="comment_text"><p>I have a chart like this.<br>&lt;cfchart format="png" chartheight="200" scalefrom="0" labelformat="number" rotated="yes" tipstyle="mouseOver" &gt;<br>	&lt;cfchartseries type="bar" serieslabel="no" &gt;<br>        &lt;cfchartdata item="2000" value="200.0"&gt;<br>        &lt;cfchartdata item="2001" value="200.0"&gt;<br>        &lt;cfchartdata item="2002" value="250.0"&gt;<br>        &lt;cfchartdata item="2003" value="130.0"&gt;<br>        &lt;cfchartdata item="2004" value="450.0"&gt;<br>        &lt;cfchartdata item="2005" value="250.0"&gt;<br>	&lt;/cfchartseries&gt;<br>	&lt;cfchartseries type="bar" serieslabel="no" &gt;<br>        &lt;cfchartdata item="2000" value="100.0"&gt;<br>        &lt;cfchartdata item="2001" value="100.0"&gt;<br>        &lt;cfchartdata item="2002" value="150.0"&gt;<br>        &lt;cfchartdata item="2003" value="130.0"&gt;<br>        &lt;cfchartdata item="2004" value="250.0"&gt;<br>        &lt;cfchartdata item="2005" value="150.0"&gt;<br>	&lt;/cfchartseries&gt;<br>    &lt;cfchartseries type="bar" serieslabel="Sample 1" datalabelstyle="value" markerstyle="circle"&gt;<br>        &lt;cfchartdata item="2000" value="150.0"&gt;<br>        &lt;cfchartdata item="2001" value="300.0"&gt;<br>        &lt;cfchartdata item="2002" value="250.0"&gt;<br>        &lt;cfchartdata item="2003" value="230.0"&gt;<br>        &lt;cfchartdata item="2004" value="250.0"&gt;<br>        &lt;cfchartdata item="2005" value="450.0"&gt;<br>    &lt;/cfchartseries&gt;<br>&lt;/cfchart&gt;</p><p>I wonder if it is possible to show vertically the values of each element (enabled with datalabelstyle="value" on cfchartseries tag), because now some values are not readable.<br>Thank you very much.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677124">18</a> by Raymond Camden
		posted on 10/6/2010 at 12:22 AM
		</div>
		<div class="comment_text"><p>As far as I can see, from the Chart Designer, there is no way to do this. I'd recommend widening your chart size.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677126">19</a> by Kovacs Stefan
		posted on 10/6/2010 at 1:46 PM
		</div>
		<div class="comment_text"><p>Thank you for your time...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677127">20</a> by Reuben
		posted on 6/17/2013 at 9:28 PM
		</div>
		<div class="comment_text"><p>Is this possible in Coldfusion 10?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677128">21</a> by Raymond Camden
		posted on 6/17/2013 at 10:08 PM
		</div>
		<div class="comment_text"><p>CF10 still ships the old engine too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677129">22</a> by Reuben
		posted on 6/20/2013 at 7:26 PM
		</div>
		<div class="comment_text"><p>Found this feature for coldfusion 10  thanks to <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfuser.com%2Fcoldfusion-10-and-zingcharts-updated%2F%23attachment_1113%3ADoBT7K1sXngf_sa_cjA3cSPK7fg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfuser.com/coldfusion-10-and-zingcharts-updated/#attachment_1113">http://www.cfuser.com/coldf...</a></p></div>
	</div>
</div>
		