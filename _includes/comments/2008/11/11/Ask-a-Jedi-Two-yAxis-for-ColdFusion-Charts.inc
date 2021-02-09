
<div class="comment" id="c_1713709846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709846">1</a> by Brad Wood
		posted on 11/12/2008 at 11:05 AM
		</div>
		<div class="comment_text"><p>Well, whadduya know... I knew you could do this in Flex, but I never knew it was possible with CF charts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709847">2</a> by Jeremy Larter
		posted on 11/13/2008 at 11:11 AM
		</div>
		<div class="comment_text"><p>Nice example. I thought the random graph (now static) deserves some explanatory remarks:</p><p>Company X (withheld) started with 6 people in 1994 and had sales of $150k. There were a few bad eggs not carrying their weight that were summarily dismissed. As expected, profits rose to a record high of $200k in 1995 with only two remaining people. The bad eggs, after begging for their jobs back, were re-hired in 1996 (along with some clerical support). Company X's sales then plummeted as the bad eggs insulted customers. The clerical staff had to be let go in 1997 and then the rest of the bad eggs were fired by 1998. Sales started to increase with the two original people in Company X but it was not good enough. The company declared bankruptsy in 1998 after only having sales of just over $100k.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709845">3</a> by Raymond Camden
		posted on 11/13/2008 at 8:06 PM
		</div>
		<div class="comment_text"><p>@Jeremy: Awesome. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709849">4</a> by Asaf
		posted on 2/26/2009 at 2:49 AM
		</div>
		<div class="comment_text"><p>I'm wondering is there an XSD file for this style xml?</p><p>I'm trying to create a graph with two axises but it's more complicated than the examples above and having an XSD file that would show me what attributes and elements I can place in a "Style.XML" would be really helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709848">5</a> by Raymond Camden
		posted on 2/26/2009 at 3:01 AM
		</div>
		<div class="comment_text"><p>Why not use the chart editor?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709850">6</a> by Asaf
		posted on 2/26/2009 at 4:11 AM
		</div>
		<div class="comment_text"><p>Wow, I just opened the chart editor for the first time...that's another world of its own.  I'm now planning to invest some time reading the documentation on this stuff.</p><p>With that said I'm not going to ask "how do you do this?" without putting in the time myself to learn how to use the chart editor but I do want to share what I'm trying to do just to see if you think it is hypothetically possible (I believe it should be after checking out the chart editor).</p><p>I'm creating a CFChart with a variable number of series.  Based on a users input I use a CFLoop/query that creates CFChartSeries on the fly.  My chart also has line and bar graphs; I want the bar graphs to use the left axis and the line charts to use the right.</p><p>I realize that my style also has to be created on the fly to account for each additional series created in the chart but this led to strange behavior.  The series using bar charts became stacked even when I specified that the CFChart placement parameter as "default" or "cluster".</p><p>Obviously, this is why I will have to play around with the chart editor.  Like I said I'm not looking for a "how to guide" but rather I'd like to know for sanity/encouragement if it is possible to achieve my desired results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709851">7</a> by Raymond Camden
		posted on 2/27/2009 at 1:58 AM
		</div>
		<div class="comment_text"><p>One thing I have found is that - sometimes - there are some odd collisions between attributes sent via the tag and stuff sent in via XML. You may want to remove the stacked attribute and try to set it in XML instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709856">8</a> by Ken
		posted on 4/13/2009 at 8:23 AM
		</div>
		<div class="comment_text"><p>This is exactly what I need. But instead of line, I want two bars side by side and a line for the second y axis. But the bars are stacked instead of next to each other. Is there a way in xml to get the bars side by side ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709858">9</a> by Raymond Camden
		posted on 4/13/2009 at 3:39 PM
		</div>
		<div class="comment_text"><p>Did you try the seriesPlacement argument?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709857">10</a> by Will T
		posted on 4/23/2009 at 11:39 PM
		</div>
		<div class="comment_text"><p>This tip has been very useful to me, but I'm still having problems with the placement argument. My chart is similar to what Asaf was working on, it has two bar series using the left axis and two line series using the right. Got that to work, but unfortunately the bars are stacked instead of clustered. Tried doing the placement in the xml file as well as back in the cfchart definition, but can't get it to cooperate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709852">11</a> by Raymond Camden
		posted on 4/23/2009 at 11:42 PM
		</div>
		<div class="comment_text"><p>Will, I went into the chart editor, found a stacked chart, switched to clustered, and back and forth. This XML was used for stacked:</p><p>    &lt;elements place="Stacked" drawShadow="true"&gt;<br>               &lt;morph morph="Grow"/&gt;<br>          &lt;/elements&gt;</p><p>This for clustered</p><p> &lt;elements drawShadow="true"&gt;<br>               &lt;morph morph="Grow"/&gt;<br>          &lt;/elements&gt;</p><p>Notice no place attribute. Try the XML above. (You should be able to leave off morph and dropShadow I think.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709854">12</a> by Will
		posted on 4/24/2009 at 8:06 PM
		</div>
		<div class="comment_text"><p>Thanks, that helped as well. If anyone else runs into this problem, note that in the XML attributes for place are a little different than cfchart seriesPlacement, (i.e. elements place="clustered" , as oppose to using the cfchart seriesPlacement="cluster").</p><p>Got one more issue to resolve and I think I'll be done messing with this chart for a while. Is there a way to get a "title" on the secondary (right) axis?</p><p>Sure wish I had access to that/any web chart editor.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709861">13</a> by Raymond Camden
		posted on 4/24/2009 at 8:08 PM
		</div>
		<div class="comment_text"><p>You do have access. It comes with ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709859">14</a> by Will T
		posted on 4/24/2009 at 8:15 PM
		</div>
		<div class="comment_text"><p>I'm using Eclipse to code, I've searched high and low and it can't be found on my pc. I think  my organization has Coldfusion on a server, but I think it's locked down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709863">15</a> by Raymond Camden
		posted on 4/24/2009 at 8:24 PM
		</div>
		<div class="comment_text"><p>You do know you can run CF for free on your own machine, right? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709862">16</a> by Will T
		posted on 5/26/2009 at 5:46 PM
		</div>
		<div class="comment_text"><p>I'm back. I did find where my company was hiding CF/webcharts3d editor, and it has helped some but it'seems a little buggy.  I'm having 2 format/style issues.</p><p>1. The title labels for my 2 y-scales are appearing different even though I haven't specified any style for either of them (i.e. the left axis title appears to be in plain text, while the right axis tile is bold and possible a little bigger in size).</p><p>2. I haven't set any scale max or min values for either y-axis, so they should default to the max/min of chartdata values (respectively) with a default rounding depending on the data values. Unfortunately, when the data values pulled have min of 0, yaxis2 (right axis) is rounding down into negative values instead of min'ing out at 0.</p><p>Has anyone else encountered these issues?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709864">17</a> by Will T
		posted on 5/26/2009 at 5:59 PM
		</div>
		<div class="comment_text"><p>Found a work around for my first issue. I set a style for both axis titles and had to code the size of yaxis2 smaller than yaxis so that they would appear the same in an IE browser.</p><p>   &lt;yAxis&gt;<br>      &lt;titleStyle font="Arial Narrow-14"&gt;Monthly&lt;/titleStyle&gt;<br>   &lt;/yAxis&gt;<br>   &lt;yAxis2&gt;<br>      &lt;titleStyle font="Arial Narrow-11"&gt;Cumulative&lt;/titleStyle&gt;<br>   &lt;/yAxis2&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709865">18</a> by Maramandan
		posted on 2/11/2010 at 11:55 AM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>I have a normal chart ( type="horizontalbar") Is there any way by which I could put the X axis on the top ? Sort of like primaryXAxisplacement = Top|Bottom. I didn't find this setting in CF 8 / WebCharts3D 5.1. Any Idea how this could be done? Please help me</p><p>Thanks in Advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709873">19</a> by Raymond Camden
		posted on 2/11/2010 at 9:07 PM
		</div>
		<div class="comment_text"><p>Like you, I checked the charts editor. From what I see, there is no way of doing this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709871">20</a> by Sateesh
		posted on 8/24/2011 at 9:03 AM
		</div>
		<div class="comment_text"><p>Please can you guide to generate dual axis cf graph with stacked type. I need the xml style code for that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709868">21</a> by Raymond Camden
		posted on 8/24/2011 at 5:12 PM
		</div>
		<div class="comment_text"><p>I don't think it makes sense for a stack type - does it? Since the values are the same index, hence the stack.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709872">22</a> by Chris
		posted on 3/13/2012 at 4:58 PM
		</div>
		<div class="comment_text"><p>Good stuff here. My issue is that I want my money data stacked on the first axis (several series of these), and my people data clustered on the second axis (several series of these, also). Anyone else find a solution for this one?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709869">23</a> by Tony
		posted on 6/28/2014 at 5:03 PM
		</div>
		<div class="comment_text"><p>Thanks for great example Raymond.  I did notice that some folks were having issues with bars getting stacked.  Could it be that the need to specify the second series for the line.  I noticed that you did mention to use series=1 for the second line but the example did not have it in the code.  I ran into similar problem and once I specified series=0 and series=1 it fixed the problem (the bars being stacked problem).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709874">24</a> by Tony
		posted on 6/28/2014 at 5:07 PM
		</div>
		<div class="comment_text"><p>Correction on my previous post.  Series index="0" and series index="1".  I had left the word index out.  Sorry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709870">25</a> by Raymond Camden
		posted on 6/28/2014 at 8:55 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing. Honestly I don't do anything anymore with these old charts. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709876">26</a> by Richard Davies
		posted on 9/12/2014 at 7:53 PM
		</div>
		<div class="comment_text"><p>Ray, I can understand migrating to the newer SVG/Canvas charting libraries for general web usage, but do you have an alternative or other suggestions for creating charts inside PDFs generated with cfdocument?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709875">27</a> by Raymond Camden
		posted on 9/12/2014 at 9:54 PM
		</div>
		<div class="comment_text"><p>@Richard: No idea really. I haven't looked at server-side charting engines in a while.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1848051236">
	<div>
		<img src="https://disqus.com/api/users/avatars/thomasoecknick.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1848051236">28</a> by Thomas Oecknick
		posted on 2/11/2015 at 5:28 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>did not work the second axis in Railo.<br>Can you help with that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1848079678">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1848079678">29</a> (In reply to <a href="#c_1848051236">#28</a>) by Raymond Camden
		posted on 2/11/2015 at 5:42 PM
		</div>
		<div class="comment_text"><p>Sorry - I don't use Railo, can't really help. Also, I don't recommend using cfchart anymore.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1848090934">
	<div>
		<img src="https://disqus.com/api/users/avatars/thomasoecknick.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1848090934">30</a> (In reply to <a href="#c_1848079678">#29</a>) by Thomas Oecknick
		posted on 2/11/2015 at 5:48 PM
		</div>
		<div class="comment_text"><p>argh... thanks anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2576155309">
	<div>
		<img src="https://disqus.com/api/users/avatars/adamcockman.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2576155309">31</a> by Adam Cockman
		posted on 3/18/2016 at 9:07 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, use your site quite a bit for tips hints and generally saving my job ;) I was wondering if you could help, how do I force the range of the second y-axis, I need to make it start at 0 (zero) but whatever I try it always starts at -10. This Minimum value in my data is 0. Thanks Ads</p></div>
	</div>
</div>
		
<div class="comment" id="c_2576413688">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2576413688">32</a> (In reply to <a href="#c_2576155309">#31</a>) by Raymond Camden
		posted on 3/18/2016 at 1:20 PM
		</div>
		<div class="comment_text"><p>If you are using the old style charts, you would need to open up the editor and play around a bit. I honestly don't know. I strongly recommend you move away from cfchart though.</p></div>
	</div>
</div>
		