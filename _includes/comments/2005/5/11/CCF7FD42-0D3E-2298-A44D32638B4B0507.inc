
<div class="comment" id="c_1713618331">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618331">1</a> by Steven Erat
		posted on 5/12/2005 at 2:55 AM
		</div>
		<div class="comment_text"><p>The developer's edition is supposed to have a watermark stating:</p><p>"ColdFusion MX 7 Developer Edition Not for Production Use"</p><p>The text's  alpha is faded and superimposed on output from CFDOCUMENT, CFCHART, and reports and only serve requests to localhost and 2 other IPs.</p><p>I tried to reproduce this and found that when requesting the charts from a new client where the license limit will be exceeded, the chart is never even attempted to be loaded so the flash player was never loaded.</p><p>The only page output is a CF error stating:</p><p>"A License Exception has been thrown.  <br>You tried to access the developer edition from a disallowed IP"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618329">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618329">2</a> by Raymond Camden
		posted on 5/12/2005 at 8:28 PM
		</div>
		<div class="comment_text"><p>For me, the Flash Player was definitely loading (hence the crash). Let me ask you this. When you tested, and the server "expired", did you restart the server _before_ you tested? In my case, it was a "good" server that expired during the day.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618330">3</a> by Todd
		posted on 5/12/2005 at 10:35 PM
		</div>
		<div class="comment_text"><p>Speaking of CFChart - any idea why the fontsize attribute does absolutely nothing to the data labels in the chart?  My labels are huge - so huge that in a cluster bar graph they overlap each other and look horrible...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618442">4</a> by Raymond Camden
		posted on 5/18/2005 at 6:15 PM
		</div>
		<div class="comment_text"><p>Hey Steven - I think I see the problem. You need to test with this scenario. CF server is in trial mode. You hit /foo.cfm where foo.cfm has a cfchart in it. Let CF expire. Hit the server with two DIFFERENT boxes, so that now the box is "tied" up license wise. With the ORIGINAL browser, hit the same page again. The page must load from the browser cache. So you actually see page content, NOT the license warning. However, the FLash chart will attempt to load fro the server - and this is where the crash comes in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618443">5</a> by Mitch Miller
		posted on 7/13/2006 at 1:31 AM
		</div>
		<div class="comment_text"><p>Thanks man this worked perfectly. Surprised the hell out of us when it started giving us the exception thrown. Also you should mention that the file where they put the key in is <a href="http://disq.us/url?url=http%3A%2F%2FLicense.properties%3AtrpDUl412t0RwwM5thUppRXmUhs&amp;cuid=3321886" rel="nofollow noopener" title="License.properties">License.properties</a> open that in notepad, the file speaks for itself and boom all done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618441">6</a> by Austin Miles
		posted on 5/26/2008 at 11:45 AM
		</div>
		<div class="comment_text"><p>Note: I am still using a developer edition license</p><p>I am querying a list of values with pre calculated percents, and a corresponding list of value names, which get turned into arrays, the cfchartseries tagg is cflooped through so that it will work with the arrays, but when I try to get the chart to render in the browser, it gives me values like 4,400% when the percent label format is selected. But other wise if it is left as the default it says 44(a pre calculated percent)</p><p>Why???</p></div>
	</div>
</div>
		