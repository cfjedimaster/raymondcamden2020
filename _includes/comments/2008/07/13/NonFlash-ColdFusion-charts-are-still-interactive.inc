
<div class="comment" id="c_1713684339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684339">1</a> by Brad Wood
		posted on 7/14/2008 at 8:10 AM
		</div>
		<div class="comment_text"><p>That's good info.  I can't wait to see the results.  The suspense is killing me!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684353">2</a> by Raul Riera
		posted on 7/14/2008 at 12:37 PM
		</div>
		<div class="comment_text"><p>They can, but when you have fancy CSS on your page the tooltips go all crazy on you, if there was a way to control de CSS of the tooltip it would be nice.</p><p>(I get the width of the tooltop to be LOOOOOONG so I see a huge box and no text)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684358">3</a> by Raymond Camden
		posted on 7/14/2008 at 3:24 PM
		</div>
		<div class="comment_text"><p>I wonder if maybe you could edit the stuff cfchart spits out. Before Adobe released an Active Content fix for IE and cfcharts, folks would wrap the cfchart with cfsavecontent and just modify the HTML there before outputting it to the browser.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684360">4</a> by JC
		posted on 7/15/2008 at 1:06 AM
		</div>
		<div class="comment_text"><p>Pretty sure that's all editable via XML files.<br>JRun4\servers\cfusion\cfusion-ear\cfusion-war\WEB-INF\cfusion\charting</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684357">5</a> by Raymond Camden
		posted on 7/15/2008 at 1:19 AM
		</div>
		<div class="comment_text"><p>I'd still probably recommend the cfsavecontent approach. If it does work, it will be better than modifying server files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684359">6</a> by JC
		posted on 7/15/2008 at 3:32 AM
		</div>
		<div class="comment_text"><p>The server files are &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F8%2Fhtmldocs%2Fhelp.html%3Fcontent%3Dgraphing_06.html%3Altu81vvS-fhxNrS6k3fUO6xYBqU&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/8/htmldocs/help.html?content=graphing_06.html">http://livedocs.adobe.com/c...</a>"&gt;intended to be modified&lt;/a&gt;. Or rather, copied and customized. It's not actually an Adobe product, it's a third party tool they integrated pretty nicely, but not completely, into CF (and CF8 has a more recent version, too... CF7's was a few years old).</p><p>If you've never played with the WebCharts interface, it's worth giving it a look, it's kinda fun:<br>JRun4\servers\cfusion\cfusion-ear\cfusion-war\WEB-INF\cfusion\charting\webcharts.bat<br>JRun4\servers\cfusion\cfusion-ear\cfusion-war\WEB-INF\cfusion\charting\userguide.pdf</p><p>I haven't played with it lately, but a couple of years ago someone read something in a glossy magazine on an airplane and I spent a month doing all sorts of junk in preparation for a request for executive dashboards, with gauges, which the CFChart tag doesn't support, but which you can actually do &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.intersuite.com%2Fclient%2Findex.cfm%2F2005%2F11%2F15%2FColdFusion-Tip-Using-the-included-webcharts3d-engine-in-CFMX-7%3A6r0SvvDPQK9vamNWh-kcrgInXi4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.intersuite.com/client/index.cfm/2005/11/15/ColdFusion-Tip-Using-the-included-webcharts3d-engine-in-CFMX-7">http://www.intersuite.com/c...</a>"&gt;with the right code snippet&lt;/a&gt;.</p><p>Of course, you probably already know all this.. but maybe someone else doesn't. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684361">7</a> by JC
		posted on 7/15/2008 at 3:32 AM
		</div>
		<div class="comment_text"><p>oops. :( can you fix that html mess, please? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684365">8</a> by Raymond Camden
		posted on 7/15/2008 at 4:23 AM
		</div>
		<div class="comment_text"><p>@JC - Yep, I'm well aware of the charting engine. I've written a few blog posts on using the bat files. What I had meant was that you probably should not edit the server files as it would impact ALL charts, but if you can copy them then never mind then. ;)</p><p>I really need to add a note to tell folks not to use HTML since I 'auto link' urls. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684362">9</a> by Franz Rinkleff
		posted on 12/1/2009 at 8:27 AM
		</div>
		<div class="comment_text"><p>I just loaded a jpg cfchart via ajax.  The tool tips do not appear to work when the jpg cfchart is loaded via ajax.  Anyone experience this problem or know of a work around.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684363">10</a> by Raymond Camden
		posted on 12/1/2009 at 9:29 AM
		</div>
		<div class="comment_text"><p>Did you save the binary data of the chart and serve that up, or the normal output which includes the image map?</p></div>
	</div>
</div>
		