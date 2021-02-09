
<div class="comment" id="c_1713676389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676389">1</a> by Joey Krabacher
		posted on 1/19/2008 at 3:25 AM
		</div>
		<div class="comment_text"><p>In this entry you speak of both a WCP file and a MCP file.  Is this a typo or are these two different files?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676390">2</a> by Raymond Camden
		posted on 1/19/2008 at 3:27 AM
		</div>
		<div class="comment_text"><p>I meant WCP. Edited - and thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676391">3</a> by Peter J. Farrell
		posted on 1/19/2008 at 3:44 AM
		</div>
		<div class="comment_text"><p>Yeah, Matt and I talked about this way back in ColdFusion Weekly Podcast version 1.2b in April of 2006.</p><p>We use custom CFC API (that we built) for charting on <a href="http://disq.us/url?url=http%3A%2F%2FGreatBizTools.com%3A8lnebckDSNmzsJ-icphX7TvbwZY&amp;cuid=3321886" rel="nofollow noopener" title="GreatBizTools.com">GreatBizTools.com</a> to create all the charts that WebCharts3D supports.  There are a bunch of helper java classes for data manipulation and style changes.  However I won't get into that here as it's mess to work with directly.</p><p>An example chart which is similar to yours is here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fcoldfusionweekly.com%2Fimages%2F1-2%2Fcfw_1-2_charting_example.png%3AmJlPaGDwbyg47hLrfX1NiK9-284&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfusionweekly.com/images/1-2/cfw_1-2_charting_example.png">http://coldfusionweekly.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676393">4</a> by SigEpJedi
		posted on 1/19/2008 at 3:48 AM
		</div>
		<div class="comment_text"><p>Ray waves hand: <br>These are not the Droids you are looking for....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676396">5</a> by Peter J. Farrell
		posted on 1/19/2008 at 3:51 AM
		</div>
		<div class="comment_text"><p>BTW, the sample: 0 is the label for the row. Since the gauge chart isn't using the label -- it's not shown.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676392">6</a> by Rick O
		posted on 1/19/2008 at 4:42 AM
		</div>
		<div class="comment_text"><p>You can also have CF talk to Batik (which comes installed with CF7+8).  Batik renders SVG files, which are just XML, into PNG or JPEG.  I did exactly that to generate speedometer-type graphs (among many other things) for <a href="http://disq.us/url?url=http%3A%2F%2Fnowrists.com%3AqgpJvCgEwdqQEagMWj0TVqx0fJY&amp;cuid=3321886" rel="nofollow noopener" title="nowrists.com">nowrists.com</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676398">7</a> by Alan McCollough
		posted on 1/19/2008 at 5:52 AM
		</div>
		<div class="comment_text"><p>Quite slick. I bet this is one of those tricks that doesn't work with CF7, though. I made a guage-style .wcp file, and set up the example here, and ran it. With CF7, I get "Invalid style type: gauge".</p><p>Got to get our copies of CF8 installed...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676394">8</a> by Peter J. Farrell
		posted on 1/19/2008 at 7:13 AM
		</div>
		<div class="comment_text"><p>I've most definitely done the "gauge" style charts on CF7, however I never used the .wcp files instead using the java classes that represent data and charting styles.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676395">9</a> by Justice
		posted on 1/21/2008 at 6:03 PM
		</div>
		<div class="comment_text"><p>Dont forget the designer that is included with CF7, so you have a GUI you can design your chart with, then save it off and use it. =)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfcode.net%2Findex.cfm%2F2007%2F10%2F16%2FWeb-Charts--the-hidden-CF-Gem%3AedXNLHG1Wcls-mJReLqv5YDopxc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfcode.net/index.cfm/2007/10/16/Web-Charts--the-hidden-CF-Gem">http://www.cfcode.net/index...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676397">10</a> by Raymond Camden
		posted on 1/21/2008 at 6:11 PM
		</div>
		<div class="comment_text"><p>@Justice: Errr - isn't that I mentioned in the article? ;) I said that I used that - but it still failed when I passed the XML to cfchart.</p><p>@Peter: Sorry I missed your earlier posts!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676401">11</a> by Justice
		posted on 1/22/2008 at 12:02 AM
		</div>
		<div class="comment_text"><p>Ray</p><p>Sorry bud, thats what I get for reading too quick =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676399">12</a> by randy
		posted on 1/22/2008 at 9:04 PM
		</div>
		<div class="comment_text"><p>Anyone have this issue:<br>When we (three of us now) open webcharts.bat in CF8, all the text is binary zero characters.  Totally unreadable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676404">13</a> by J. Lyle Martin
		posted on 7/9/2008 at 8:45 PM
		</div>
		<div class="comment_text"><p>Hello,</p><p>When I try to run this example, with my own (non modified) gauge .wcp file I get the following text and no graph.  What am I doing wrong, or missing?</p><p>&lt;!-- WebCharts3D v5.1(2077) --&gt; &lt;IMG SRC="http://192.168.1.108/CFIDE/GraphData.cfm?graphCache=wc50&amp;graphID=Images/3607960040100155.png" id="Images_3607960040100155_png" name="Images_3607960040100155_png" usemap="#Images_3607960040100155_png_map" border="0"/&gt; &lt;table cellpadding='0' cellspacing='1' style='visibility: hidden;display: none; position:absolute;font-family: Arial;font-size: 13px; font-weight:700;background:#FFFF00;foreground:#0000FF;color:#0000FF;-moz-opacity:.50;-opacity:.50;filter:alpha(opacity=50);border:1px solid #0000FF;' name='GP1215621759443AAAB' id='GP1215621759443AAAB'&gt;&lt;tr&gt;&lt;td width='8'&gt; &lt;/td&gt;&lt;/table&gt; &lt;MAP name='Images_3607960040100155_png_map'&gt; &lt;AREA shape='rect' coords='0,0,1,1'/&gt; &lt;AREA shape="poly" coords="293,133,191,194,183,180,289,126"/&gt; &lt;/MAP&gt; &lt;script language="javascript" src="http://192.168.1.108/CFIDE/GraphData.cfm?graphCache=wc50&amp;graphID=script.js"&gt;&lt;/script&gt; <br>Thanks so much!<br>-Lyle</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676403">14</a> by Raymond Camden
		posted on 7/9/2008 at 9:41 PM
		</div>
		<div class="comment_text"><p>I spoke with J off line - the issue was forgetting to update the URL in the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676402">15</a> by Larry
		posted on 7/18/2008 at 9:26 PM
		</div>
		<div class="comment_text"><p>To randy:<br>I had a similar (the same?) issue.  Most of the text visible was showing a square instead of the character.  Numbers showed up ok.  Called up Gpoint and was told to reload the java virtual machine.  This did not work.  Found out by accident that if instead of running webcharts.bat you find and doubleclick C:\ColdFusion8\lib\wc50.jar all appears to work ok.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676407">16</a> by adam
		posted on 7/26/2008 at 1:10 AM
		</div>
		<div class="comment_text"><p>Am I correct in assuming the 'Adobe ColdFusion 8 Developer Edition' water mark will show up regardless of your Coldfusion server license?</p><p>Thanks,<br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676406">17</a> by J. Lyle Martin
		posted on 7/26/2008 at 1:18 AM
		</div>
		<div class="comment_text"><p>You can develop charts on the Developer Edition, you will see the watermark there.  When you move the same code to a licensed version of CF you will no longer see the watermark.</p><p>Hope that helps.</p><p>-Lyle</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676405">18</a> by adam
		posted on 7/26/2008 at 1:24 AM
		</div>
		<div class="comment_text"><p>I understand that in general.  I'm asking because I'm on a server that should be legitimately licensed, and doesn't show the watermark for normal graphs, but still shows it for any of the graphs that directly address webcharts3d classes.</p><p>But maybe there's something wrong in the server settings.  I just thought since I haven't seen the behavior in any other charts it might be related to this specifically.  So I was wondering if anyone knew for sure that the watermark shouldn't be there.</p><p>Thanks again,<br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676408">19</a> by Raymond Camden
		posted on 7/29/2008 at 4:55 AM
		</div>
		<div class="comment_text"><p>I haven't tested this yet on production. It may be that it does indeed show the watermark. Has anyone else tried it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676410">20</a> by Rodell Basalo
		posted on 9/10/2008 at 10:16 AM
		</div>
		<div class="comment_text"><p>"You can develop charts on the Developer Edition, you will see the watermark there. When you move the same code to a licensed version of CF you will no longer see the watermark.</p><p>Hope that helps.</p><p>-Lyle<br># Posted By J. Lyle Martin | 7/25/08 4:18 PM "</p><p>have you tried editing the watermark.png under \lib ? <br>i removed the text in the png and saved and overwrited the file without the Watermark text</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676409">21</a> by Reed Powell
		posted on 10/29/2008 at 10:38 PM
		</div>
		<div class="comment_text"><p>Be careful about doing this!  I did it and it caused the Webcharts engine to put "Developer Edition" watermarks on all charts, including those that are created with &lt;CFCHART&gt; - waht a mess!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676413">22</a> by Justin Cook
		posted on 6/16/2009 at 8:19 PM
		</div>
		<div class="comment_text"><p>Where does the GraphData.cfm come from in the reference? I don't believe we have that on our system.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676414">23</a> by Raymond Camden
		posted on 6/16/2009 at 8:20 PM
		</div>
		<div class="comment_text"><p>It's a purely virtual file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676415">24</a> by Justin Cook
		posted on 6/16/2009 at 10:46 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>We have a Load Balancing situation though and if we create the chart, the page just shows an area that says that the chart expired. So typically, we have been writing charts to a file and then calling them back out immediately from a place where we wrote the chart to.  Is it possible to write this chart to a file so that we can call it back out that way? Rather than serving it up live from the CF Server and the cache that it creates.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676421">25</a> by Raymond Camden
		posted on 6/17/2009 at 3:44 PM
		</div>
		<div class="comment_text"><p>Not sure. You could maybe look at the Java API and see about setting it to a binary type, and see if the Java API lets you get the bits.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676422">26</a> by Justin Cook
		posted on 6/17/2009 at 5:50 PM
		</div>
		<div class="comment_text"><p>My co-worker continued working on it and did save the file out as a binary to a local directory.  Then we went back and recalled the saved SWF. We saved the SWF in a folder we named "charts".  Here's the last half of the script:</p><p>&lt;!--- initialize chart settings ---&gt;<br>&lt;cfscript&gt; <br>	oMyWebChart = createObject("Java","com.gp.api.jsp.MxServerComponent"); oMyApp = getPageContext().getServletContext(); oSvr = oMyWebChart.getDefaultInstance(oMyApp); oMyChart2 = oSvr.newImageSpec(); <br>	oMyChart2.width = 400; oMyChart2.height= 300; oMyChart2.type = "swf"; <a href="http://disq.us/url?url=http%3A%2F%2FoMyChart2.style%3A7FearMlx9Y6y9MMfBtVo5WLvBrQ&amp;cuid=3321886" rel="nofollow noopener" title="oMyChart2.style">oMyChart2.style</a> = "#chartStyle#"; oMyChart2.model = "#chartModel#";<br>&lt;/cfscript&gt;&lt;!--- Create html tag set ---&gt;<br>&lt;cfsavecontent variable="chartImgTag"&gt;<br>	&lt;cfoutput&gt;#oSvr.getImageTag(oMyChart2,"<a href="http://disq.us/url?url=http%3A%2F%2Fourwebsite.com%2FCFIDE%2FGraphData.cfm%3FgraphCache%3Dwc50%26graphID%3D%3AYyUGq25LalhTqATdrqko6rlQNuc&amp;cuid=3321886" rel="nofollow noopener" title="http://ourwebsite.com/CFIDE/GraphData.cfm?graphCache=wc50&amp;graphID=">http://ourwebsite.com/CFIDE...</a>")#&lt;/cfoutput&gt;</p><p>&lt;/cfsavecontent&gt;&lt;!--- Good old Webcharts loves to add an extra /Images/ to the URL ---&gt;</p><p>&lt;cfset chartImgTag = replace(chartImgTag,"<a href="http://disq.us/url?url=http%3A%2F%2Fourwebsite.com%2FImages%2F%3AM9PFxuZnt2sQSVlB0Zd_I92Lbns&amp;cuid=3321886" rel="nofollow noopener" title="http://ourwebsite.com/Images/">http://ourwebsite.com/Images/</a>","<a href="http://disq.us/url?url=http%3A%2F%2Fourwebsite.com%2F%3AvjUc3MuEfZfQJ24fgk0btYUDT90&amp;cuid=3321886" rel="nofollow noopener" title="http://ourwebsite.com/">http://ourwebsite.com/</a>","All")&gt;<br>&lt;cfoutput&gt;</p><p>&lt;p&gt;<br>#chartimgtag#<br>&lt;/cfoutput&gt;<br>&lt;cfset listpos=listcontains(chartImgTag, "graphID", "=")&gt;&lt;cfset listpos=listpos+1&gt;<br>&lt;cfset chartID=listgetat(chartImgTag,listpos,"=")&gt;<br>&lt;cfset chartID=listgetat(chartID,2,"/")&gt;&lt;cfset chartID=replace(chartID, '"', '')&gt;<br>&lt;br&gt;<br>&lt;cfhttp url="<a href="http://disq.us/url?url=http%3A%2F%2Fourwebsite.com%2FCFIDE%2FGraphData.cfm%3FgraphCache%3Dwc50%26graphID%3DImages%2F%23chartID%23%3An_eOE06nZvwkAfL72qqhCNgnRPU&amp;cuid=3321886" rel="nofollow noopener" title="http://ourwebsite.com/CFIDE/GraphData.cfm?graphCache=wc50&amp;graphID=Images/#chartID#">http://ourwebsite.com/CFIDE...</a>" getasbinary="yes"&gt;</p><p>&lt;cffile action="write" file="#local_path#charts\untitled11.swf" output="#cfhttp.filecontent#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676419">27</a> by Red
		posted on 1/27/2010 at 4:13 AM
		</div>
		<div class="comment_text"><p>Since the chart is created in the CF cache directory, is there a way to determine the image attributes after it has been drawn? I currently have the chart style set as flash but I have no objection to using PNG or JPG instead. What I’m doing is plotting 22 points on the chart, and then below the chart, I'm outputing the some additional details about the point displayed on the graph.  I can hard code the width of the table columns to align directly underneath the respective point on the chart and it looks great, almost as if it is all one image. This is when my monitor resolution is at 1200×800.  If I move the web page to my other monitor and view it at 1600x1200, the charts is small when compared to the available screen real estate.  LIkewise, if the report is viewed with a resoltuion of 800x600, scrolling is required.  I’m trying to take it a step further and make the chart width dynamic for larger/higher resolutons but still keep the tabular data inline with the points on the chart.<br>I hope this make sense and is clear…</p><p>Red</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676425">28</a> by Raymond Camden
		posted on 1/27/2010 at 4:19 AM
		</div>
		<div class="comment_text"><p>Look at the NAME attribute for CFCHART. It stores the result in binary. So if you use a PNG/JPG chart and NAME, you can then make an image object out of it. See:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2010%2F1%2F25%2FAsk-a-Jedi-Adding-additional-text-to-a-CFCHART%3AIzTIjRqqemDTtat83XrAmf7WvSI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2010/1/25/Ask-a-Jedi-Adding-additional-text-to-a-CFCHART">http://www.coldfusionjedi.c...</a></p><p>for an example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676426">29</a> by Red
		posted on 1/27/2010 at 8:23 PM
		</div>
		<div class="comment_text"><p>@Ray</p><p>That'd be too easy.  :)  I'm not using the cfchart tag though.  I'm using the java api to create the chart for me.  My code is very similar to yours except for a guage graph, I'm using the line graph (actually, four lines graphs on chart).</p><p>The image you have for the guage is named, dial.png.  I'm assuming for the purpose of the post, you hard coded the image name to be dial.png.  But if you didnt' hard code that and left it with the temp name CF would have created.  Is there a way to find out that name?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676423">30</a> by Raymond Camden
		posted on 1/27/2010 at 8:38 PM
		</div>
		<div class="comment_text"><p>Actually, I think dial.png is just the _background_, not the final image. (Not 100% sure though.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676424">31</a> by Dean Dragstedt
		posted on 7/22/2011 at 5:31 PM
		</div>
		<div class="comment_text"><p>Hello,</p><p>I am having the same problem as J Lyle, so I'm wondering, as a relative novice to this, where should that URL be pointing? What do you mean by "magic" URL? Is this something that should stay the same, or should it point to my current webpage in development?</p><p>Thanks,<br>Dean</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676428">32</a> by Raymond Camden
		posted on 7/24/2011 at 4:27 AM
		</div>
		<div class="comment_text"><p>The URL is a servlet set up by CF to help render the images. It isnt a real file. It would not stay the same between different machines, but be unique to each install. Make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676430">33</a> by Dean Dragstedt
		posted on 7/28/2011 at 8:03 PM
		</div>
		<div class="comment_text"><p>It does make sense. So I assume I need to point to wherever the CFIDE folder is? As for that, I'm working off a development server that I don't actually administer; so I'll have to contact the person who administers the server. Am I correct in my assumption above?</p><p>Thanks,<br>Dean</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676429">34</a> by Raymond Camden
		posted on 7/28/2011 at 8:12 PM
		</div>
		<div class="comment_text"><p>Well it should be just be the same host as what you are on now. You can get that via a CGI variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676431">35</a> by Mark Metcalf
		posted on 8/18/2011 at 2:41 AM
		</div>
		<div class="comment_text"><p>I'm creating a gauge in flash format using this example.  Now when the code is on an secure server (HTTPS) in IE I get the not secure content warning.  Due to the &lt;OBJECT tag that gets auto created by the server, the CODEBASE url is HTTP only.  Is there a way to change the CODEBASE url to HTTPS for the Flash &lt;OBJECT tag?  Or switch the format to PNG?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676432">36</a> by Raymond Camden
		posted on 8/18/2011 at 3:01 AM
		</div>
		<div class="comment_text"><p>Maybe wrap the output in cfsavecontent and do a regex replace on it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676433">37</a> by Lina Haddad
		posted on 8/24/2011 at 7:20 PM
		</div>
		<div class="comment_text"><p>i need to change the title style in &lt;cfchart &gt; for example make the font bigger and bold but only for the title, but how can we do that through the xml in the style?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676435">38</a> by Raymond Camden
		posted on 8/24/2011 at 7:25 PM
		</div>
		<div class="comment_text"><p>Did you try the chart editor? It's right there in the settings - Title. Click on it and you get a box of various options.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676434">39</a> by Lina Haddad
		posted on 8/24/2011 at 7:29 PM
		</div>
		<div class="comment_text"><p>what is chart editor ?i only have .cfm file i opened it as text file ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676436">40</a> by Raymond Camden
		posted on 8/24/2011 at 7:31 PM
		</div>
		<div class="comment_text"><p>I talked about it in this blog post. It's a program you run (you will find it in the charting subdirectory of your cf install) that allows you to design a chart and spit out an xml file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676437">41</a> by Varun Reddy Teeleru
		posted on 9/26/2011 at 9:05 AM
		</div>
		<div class="comment_text"><p>@Ray, can I modify the dial chart range ie from 100-200. Default is 0-100. Please let me know.</p><p>Thanks in Advance.<br>Varun Reddy Teeleru.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676438">42</a> by Raymond Camden
		posted on 9/26/2011 at 8:15 PM
		</div>
		<div class="comment_text"><p>So... did you try the Chart Editor? :) If you dig into the settings for the dial chart, you will find it under Axis Style: scaleMin and scaleMax.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676439">43</a> by Sergio
		posted on 1/14/2013 at 6:53 PM
		</div>
		<div class="comment_text"><p>I would like to get the image file for further manipulations such as watermarking etc.<br>Is it possible to obtain the image file from the applet ?<br>I would retrieve the file from the cache and then use the file for my other purposes.<br>Thanks for any help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676440">44</a> by Raymond Camden
		posted on 1/14/2013 at 7:54 PM
		</div>
		<div class="comment_text"><p>cfchart supports a PNG format. You can use that and then use cfimage functions on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676441">45</a> by Harold
		posted on 5/1/2013 at 6:13 PM
		</div>
		<div class="comment_text"><p>You may have heard about the CFIDE hack going around. Well, we had to lock down CFIDE since we are using MX7 and that shut down our cfchart function. I've tried workarounds but no luck. Upgrading Coldfusion is not economically possible so it is what it is.</p><p>I did find that the graphic for the chart is saved to cfusionmx7/charting/cache, but the graphic doesn't resolve on the chart page.</p><p>Any suggestions on how to use cfsavecontent to make it work while the main CFIDE files are locked down?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676443">46</a> by Raymond Camden
		posted on 5/1/2013 at 6:16 PM
		</div>
		<div class="comment_text"><p>This may be a silly question, but why not try one of the _many_ JavaScript-based charting solutions out there? There are a heck of a lot of them - many free.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676442">47</a> by Harold
		posted on 5/1/2013 at 6:20 PM
		</div>
		<div class="comment_text"><p>Raymond, thanks.</p><p>That was the next step. The charting queries an Access database so the search is on. Any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676444">48</a> by Raymond Camden
		posted on 5/1/2013 at 6:23 PM
		</div>
		<div class="comment_text"><p>I've played with a bunch, but none that strike me "THE BEST EVER." I'd recommend what I'd do - Google. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676447">49</a> by Raymond Camden
		posted on 5/1/2013 at 6:23 PM
		</div>
		<div class="comment_text"><p>Err, I should clarify. Google actually has a charting solution too. ;) I'd _search_ Google. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676446">50</a> by delroekid
		posted on 5/2/2013 at 2:05 AM
		</div>
		<div class="comment_text"><p>problem with cfchart is that at any time, the cache will expire and the chart in your page will output an error. i have been playing with cfchart since 2011 but i would not recommend it very much. if you are looking for free charts, there's a lot of jquery chart implementations which uses javascript . try jflot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676448">51</a> by Myron
		posted on 10/2/2014 at 10:20 PM
		</div>
		<div class="comment_text"><p>I've just moved from CF8, where this trick worked like a charm, to CF11.  I've verified that code will work up through CF10.  In CF11, when I get to the line that creates the object, I'm getting an error:<br>Object Instantiation Exception. Class not found: com.gp.api.jsp.MxServerComponent <br>The error occurred on line 395.</p><p>I'm not heavily skilled with this type of sorcery and wondered if anyone else may have run across this error after upgrading, and what might be a solution I can apply.<br>Thanks,<br>Myron</p></div>
	</div>
</div>
		