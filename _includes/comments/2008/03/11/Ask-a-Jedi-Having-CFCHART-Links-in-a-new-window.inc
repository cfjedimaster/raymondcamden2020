
<div class="comment" id="c_1713678056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678056">1</a> by Andrew
		posted on 3/12/2008 at 2:28 AM
		</div>
		<div class="comment_text"><p>I've done this a lot in one of my dashboard apps where users would drill from a chart to more detailed data.  Here's the JavaScript function is used:</p><p>&lt;script language="javascript1.1" type="text/javascript"&gt;</p><p>function drillDown(var) {</p><p>  // Build the url for the detail pop-up page</p><p>var baseUrl = "MyCFM_Page.cfm";</p><p>var url = baseUrl + "?URL_Parameter=" + (var);</p><p>  // Navigate to the URL</p><p>window.location = url;</p><p>url.focus();</p><p>}</p><p>&lt;/script&gt;</p><p>Here's how I called the JavaScript function from my chart:</p><p>&lt;cfchart format="flash" chartheight="400" chartwidth="750"</p><p>yaxistitle="AVG SCORE" show3d="no" showlegend="yes"</p><p>// Pass the ITEMLABEL to the JavaScript function</p><p>url="JavaScript:drillDown ('$ITEMLABEL$')"</p><p>style="XML/ctech.xml" scalefrom="0" scaleto="6"&gt;</p><p>I got the idea from the CFWACK (6 &amp; 7) and it worked well for me.  The "style" attribute points to an xml file that let's me set custom styles for the chart (a coworker of mine created the template that we all used).</p><p>I'm sure there's probably a better way of doing this but it worked well for me and the users were ecstatic about the functionality.</p><p>Hope this helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678058">2</a> by Michael R. Azar
		posted on 5/12/2009 at 7:01 PM
		</div>
		<div class="comment_text"><p>this is great. Since i am using serieslabel and itemlabel already, i was wondering if there is there a way to use query field values as url var's?  such as...</p><p>&lt;cfchart url="/index.cfm?il=$ITEMLABEL$&amp;flid=$QUERY.groupFLID$"&gt;<br>     &lt;cfchartseries type="line" query="q1" serieslabel="#q1.descr#" itemColumn="day" valueColumn="calls"/&gt;<br>&lt;/cfchart&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678061">3</a> by Raymond Camden
		posted on 5/12/2009 at 7:03 PM
		</div>
		<div class="comment_text"><p>The short answer is no, but you can work around it.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F4%2F24%2FHandling-additional-non-charted-values-in-CFCHART%3A_QhdE74neEO-X3CDCbJfj06O9Dg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/4/24/Handling-additional-non-charted-values-in-CFCHART">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678062">4</a> by Michael R. Azar
		posted on 5/12/2009 at 8:17 PM
		</div>
		<div class="comment_text"><p>That works great! i have never used toScript() before, but i know it will come in handy,thanks a lot!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678060">5</a> by John Longo
		posted on 7/10/2009 at 3:00 AM
		</div>
		<div class="comment_text"><p>I trying to do something similar with what I think is a simple script. I want to open a new window with more detailed information about the graph.</p><p>My Code is: <br>&lt;cfchart seriesplacement="cluster" yaxistitle="Value ($M)" xaxistitle="Funding Client Clustered by Year" showlegend="yes" chartheight="300" chartwidth="700" url="<a href="http://disq.us/url?url=javascript%3Awindow.open%3AfZYufhJ8_2arE_DRDTRkYmqLilI&amp;cuid=3321886" rel="nofollow noopener" title="javascript:window.open">javascript:window.open</a>('MyNewWindow.cfm?Item=$ITEMLABEL$');"&gt;</p><p>The new window opens fine, but the original window goes blank and either shows the text: '[object]' (ie) or '[object Window]' (firefox)</p><p>I want the referring page to stay put, any ideas where I went wrong?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678065">6</a> by Steve Caldwell
		posted on 7/21/2009 at 8:35 PM
		</div>
		<div class="comment_text"><p>@John:</p><p>You have to write your <a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a> in a function and then call it as shown in the example. It won't work if you try to call it direct.</p><p>Example:</p><p>&lt;script&gt;<br>function popup(itemlabel) {<br><a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a>('MyNewWindow.cfm?Item=' + ITEMLABEL');<br>}<br>&lt;/script&gt;</p><p>And in your chart:</p><p>&lt;cfchart ... url="javascript:popup('$ITEMLABEL$')"&gt;</p><p>Hope that helps</p><p>Steve</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678067">7</a> by Vargas
		posted on 5/26/2010 at 11:29 PM
		</div>
		<div class="comment_text"><p>Is there a way to bind a cfchart to the itemvalue of another cfchart</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678064">8</a> by Raymond Camden
		posted on 5/27/2010 at 3:18 AM
		</div>
		<div class="comment_text"><p>You can run JavaScript code when you click an item, so yes. Search my blog for cfchart - one of the entries demonstrates this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678071">9</a> by conanbarb
		posted on 5/10/2012 at 1:56 AM
		</div>
		<div class="comment_text"><p>The javascript call fails if the $ITEMLABEL$ variable has an apostrophe in it.  Is there a way around this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678070">10</a> by Raymond Camden
		posted on 5/10/2012 at 2:05 AM
		</div>
		<div class="comment_text"><p>Well, you could try:</p><p>&lt;cfchart url='javascript:newWin("$ITEMLABEL$","$SERIESLABEL$","$VALUE$")'&gt;</p><p>I basically reversed them. Outside of that I do not know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678069">11</a> by conanbarb
		posted on 5/10/2012 at 2:17 AM
		</div>
		<div class="comment_text"><p>Thanks for the reply.  Unfortunately reversing the single quotes behaved the same way.  I've also tried jsStringFormat, but that didn't work either.  I'll keep dinking with it, but as a last resort, I can probably just strip out the apostrophe in the resultset so it doesn't even get passed.  Not ideal, but at least it's something</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678068">12</a> by CFChris
		posted on 2/27/2014 at 12:52 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I was wondering if the url attribute works with cfchart when format="html"?  I have tried on 3 different browsers and nothing seems to work.</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678066">13</a> by Raymond Camden
		posted on 2/27/2014 at 12:57 AM
		</div>
		<div class="comment_text"><p>The HTML charts are *totally* new. I think I may have blogged about this though - just try searching for cfchart.</p></div>
	</div>
</div>
		