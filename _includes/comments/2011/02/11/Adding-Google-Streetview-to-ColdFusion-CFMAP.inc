
<div class="comment" id="c_1713729711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729711">1</a> by Robb Hartzog
		posted on 2/16/2011 at 4:17 AM
		</div>
		<div class="comment_text"><p>ColdFusion never stops amazing me with how it makes things so simple, great example.</p><p>Only thing I ran into is not knowing about the Google Map API Key.  A search turned up that you had to register for one at <a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fapis%2Fmaps%2Fsignup.html%3A6dGUwJckO9r2RN7VhALS0Lxy9Uc&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/apis/maps/signup.html">http://code.google.com/apis...</a> and then stick the key in the Settings section of the CF Administrator.  Thought i'd point it out just in case anyone else hasn't used this before.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729700">2</a> by Misty
		posted on 2/20/2011 at 9:17 AM
		</div>
		<div class="comment_text"><p>Hi Ray! Does this StreetView Works Only for US and Canada and No Other Country</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729689">3</a> by Raymond Camden
		posted on 2/20/2011 at 9:58 AM
		</div>
		<div class="comment_text"><p>I'm not aware of any such restrictions. Did you check the docs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729694">4</a> by Misty
		posted on 2/20/2011 at 9:40 PM
		</div>
		<div class="comment_text"><p>Hi, There in the docs there is no such information provided about country restrictions</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729714">5</a> by Raymond Camden
		posted on 2/20/2011 at 9:43 PM
		</div>
		<div class="comment_text"><p>Then ... I guess it's ok? Not quite sure what you are asking now. :) If the docs don't say there is a country restriction, then there probably is not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729716">6</a> by ja
		posted on 8/6/2011 at 1:01 AM
		</div>
		<div class="comment_text"><p>Ray, I'm really making good use of all your varied code examples..<br>Currently I'm wanting to add this google map/streetview to my jQM site:<br>- I'm using the "Collaspible Block" on page two of my site to show a Customers Details<br>- Here is a picture of my page 2 (details) <a href="http://disq.us/url?url=http%3A%2F%2Fcerberus.clearwave.com%2Fjerry%2FjQM_App_Page2.jpg%3AYXsRROR8orbgKirQt82IUZ437lM&amp;cuid=3321886" rel="nofollow noopener" title="http://cerberus.clearwave.com/jerry/jQM_App_Page2.jpg">http://cerberus.clearwave.c...</a><br>- I named one of the blocks "Map", and added your code to the block (see below)<br>- I also added your javascript to the top of the page, but unsure where to place the "&lt;cfset ajaxOnLoad("init")&gt;" part?<br>-----------------------------------<br>&lt;div data-role="collapsible" data-collapsed="true"&gt;<br>         &lt;h3&gt;Map&lt;/h3&gt;<br>	&lt;cfoutput&gt;#rsTicketDetail.custAddress#<br>&lt;cfmap centeraddress="&gt;#rsTicketDetail.custZip#" zoomlevel="15" name="mainMap"&gt;&lt;/cfoutput&gt;<br>&lt;div id="streetDiv" style="width:350px;height:250px"&gt; &lt;/div&gt;<br>		      &lt;/div&gt; <br>--------------------------------------<br>Can you give some tips on using Maps (cfmap or just google) in jQuery Mobile (jQM).. such as..<br>- Where is the best place to place the cfquery? (At the top of the page, or right before the data-role?<br>- When does jQM run the query? During page load, or when the element is clicked on? (wondering about performance)</p><p>Thanks, ja</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729692">7</a> by Raymond Camden
		posted on 8/6/2011 at 5:33 PM
		</div>
		<div class="comment_text"><p>Well you've got a few things going on here. But - I'd recommend NOT using cfmap with JQM. You probably can do it, but cfmap spits out it's own JS and when you are using any other JS, you may get conflicts. Not saying you will, but in general, I don't recommend using any of CF's front end stuff with other, very customized, JS.</p><p>So that being said, I'd switch to using Google Maps natively. I've got a few blog posts on it here. It's not hard at all. (More work than just "cfmap" of course, but easily doable.)</p><p>Get it running that way.</p><p>As to your specific question about ajaxOnLoad, while I don't recommend using it, there is something similar for JQM, and that's the various page loading events.</p><p>Hope this helps a bit.</p><p>I've done posts on Google's Static Map API and JQM before, but not one on the "real" Map API and JQM. (Well, 'real' isn't a fair thing to say - the static map api is pretty darn nice.) I'll see if I can write something up.</p><p>You know, the more I think about it, the more I think the static API is better for mobile anyway. But - this gives me a reason to play with the full API and JQM.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729709">8</a> by Raymond Camden
		posted on 8/6/2011 at 7:18 PM
		</div>
		<div class="comment_text"><p>Lots of examples: <a href="http://disq.us/url?url=http%3A%2F%2Fjquery-ui-map.googlecode.com%2Fsvn%2Ftrunk%2Fdemos%2Fjquery-mobile-example.html%3AFlUs8DPy8LjqT3iOyMF41D7_Kl8&amp;cuid=3321886" rel="nofollow noopener" title="http://jquery-ui-map.googlecode.com/svn/trunk/demos/jquery-mobile-example.html">http://jquery-ui-map.google...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729693">9</a> by ja
		posted on 8/8/2011 at 1:33 AM
		</div>
		<div class="comment_text"><p>Thanks for the post(s)..<br>Ofcourse, as most of us here have, we (I) have been making "full-use" of your "google map code" examples with CF. And ofcourse you make me look better than I really am as always..</p><p>but anyway in my particular app I need to make full use of google map v3 so a dispatch tech can 1) view the address, 2) see directions to the address from his geolocation, 3) see streetview if available, etc.. I did find this link that really looks good, plan to give it a whirl.. <a href="http://disq.us/url?url=http%3A%2F%2Fjquery-ui-map.googlecode.com%2Fsvn%2Ftrunk%2Fdemos%2Fjquery-mobile-example.html%23jquery-mobile-example-3.html%3Ai0cBFMRJKFoAqAaBxI6MaySgi4U&amp;cuid=3321886" rel="nofollow noopener" title="http://jquery-ui-map.googlecode.com/svn/trunk/demos/jquery-mobile-example.html#jquery-mobile-example-3.html">http://jquery-ui-map.google...</a></p><p>Your examples are priceless to me in that you always show both the CF query interaction ("how" you got there..) as well as the resulting page(s).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729715">10</a> by Raymond Camden
		posted on 8/9/2011 at 1:23 AM
		</div>
		<div class="comment_text"><p>Thanks for the kind words. I did another example here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2011%2F8%2F6%2FQuick-demo-of-jQuery-and-Google-Maps%3AGYLYSUXhKOJgwl18zU_fkVvsuIk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2011/8/6/Quick-demo-of-jQuery-and-Google-Maps">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729696">11</a> by ja
		posted on 8/9/2011 at 1:51 AM
		</div>
		<div class="comment_text"><p>I have taken your example (on another page), and the sample at googlecode, and customized them to my application..<br>- My page displays and the To &amp; From fields are filled out fine..<br>- But the Map display is blank<br>- And the Get Directions button does nothing at all?</p><p>Here are links to my page image sample and code text:<br>- <a href="http://disq.us/url?url=http%3A%2F%2Fcerberus.clearwave.com%2Fjerry%2FSample_Using_googlecode.jpg%3ALmkxYByi7Sjq5ghJ0ofZZLj6OdI&amp;cuid=3321886" rel="nofollow noopener" title="http://cerberus.clearwave.com/jerry/Sample_Using_googlecode.jpg">http://cerberus.clearwave.c...</a> (their code works fine!)<br>- <a href="http://disq.us/url?url=http%3A%2F%2Fcerberus.clearwave.com%2Fjerry%2FSample_Using_my_code_below.jpg%3AfenHrqmktifuI9IRU3Zzsce5id8&amp;cuid=3321886" rel="nofollow noopener" title="http://cerberus.clearwave.com/jerry/Sample_Using_my_code_below.jpg">http://cerberus.clearwave.c...</a> (their code w/my changes won't work?)<br>- <a href="http://disq.us/url?url=http%3A%2F%2Fcerberus.clearwave.com%2Fjerry%2Fpage5.txt%3AG_qlgFhH_0-_WQQNC9i1E_yfc00&amp;cuid=3321886" rel="nofollow noopener" title="http://cerberus.clearwave.com/jerry/page5.txt">http://cerberus.clearwave.c...</a> (here is my code)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729710">12</a> by Raymond Camden
		posted on 8/9/2011 at 2:01 AM
		</div>
		<div class="comment_text"><p>Well you want to work on one issue at a time - the map display.  Is this online where we can run it? Seeing the code isn't quite enough.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729708">13</a> by ja
		posted on 8/9/2011 at 2:09 AM
		</div>
		<div class="comment_text"><p>sadly, no.. What's interesting is I can make their From &amp; To boxes "Dynamic" using cfquery, and the page works fine..</p><p>If you compare the two, I did delete out all of their "meta tags, links to more samples, etc"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729703">14</a> by Raymond Camden
		posted on 8/9/2011 at 2:09 AM
		</div>
		<div class="comment_text"><p>Can you post the changes then perhaps?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729712">15</a> by Raymond Camden
		posted on 8/9/2011 at 2:12 AM
		</div>
		<div class="comment_text"><p>I'd also recommend making use of console.log to debug stuff.</p><p>For example, right after the pageshow line:</p><p>$('#gmap-3').live("pageshow", function() {<br>console.log("in pageshow for my thing");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729707">16</a> by ja
		posted on 8/9/2011 at 2:18 AM
		</div>
		<div class="comment_text"><p>Here is the original demo page from googlecoder:<br>- <a href="http://disq.us/url?url=http%3A%2F%2Fcerberus.clearwave.com%2Fjerry%2Fjquery-mobile-example-3.html%3AZdFvm_OUMygf9_QkBq3FVnAstTE&amp;cuid=3321886" rel="nofollow noopener" title="http://cerberus.clearwave.com/jerry/jquery-mobile-example-3.html">http://cerberus.clearwave.c...</a></p><p>Notice the following changes:<br>- Line 47 : added in my cfquery<br>- Line 97 : added in my dynamic To: value</p><p>This page runs fine displaying both the Map &amp; the Directions</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729706">17</a> by ja
		posted on 8/9/2011 at 6:31 PM
		</div>
		<div class="comment_text"><p>Ray, Here is my console.log results when I click the "Get Directions" button:<br>- <a href="http://disq.us/url?url=http%3A%2F%2Fcerberus.clearwave.com%2Fjerry%2Fconsole_Log.jpg%3Aq0jCmfxYHnLFWeRKtgHtBY39ebc&amp;cuid=3321886" rel="nofollow noopener" title="http://cerberus.clearwave.com/jerry/console_Log.jpg">http://cerberus.clearwave.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729701">18</a> by Raymond Camden
		posted on 8/9/2011 at 6:40 PM
		</div>
		<div class="comment_text"><p>Looks like Google's libraries are not loading. Switch to your net panel and see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729705">19</a> by Raymond Camden
		posted on 8/9/2011 at 6:41 PM
		</div>
		<div class="comment_text"><p>Specifically, your issue is in this block I believe:</p><p>&lt;script src="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fjsapi%3Fkey%3DABQIAAAAahcO7noe62FuOIQacCQQ7RTHkUDJMJAZieEeKAqNDtpKxMhoFxQsdtJdv3FJ1dT3WugUNJb7xD-jsQ%3A4FAV9jgyQBarLQSPJDNGoRsX1jM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/jsapi?key=ABQIAAAAahcO7noe62FuOIQacCQQ7RTHkUDJMJAZieEeKAqNDtpKxMhoFxQsdtJdv3FJ1dT3WugUNJb7xD-jsQ">http://www.google.com/jsapi...</a>" type="text/javascript"&gt;&lt;/script&gt;        <br>        &lt;script type="text/javascript"&gt;<br>			google.load("maps", "3", {'other_params':'sensor=true'});<br>			google.load("jquery", "1.5");<br>		&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729713">20</a> by ja
		posted on 8/9/2011 at 6:47 PM
		</div>
		<div class="comment_text"><p>Here is my console.log2 Network results Tab when I click the "Get Directions" button:<br>- <a href="http://disq.us/url?url=http%3A%2F%2Fcerberus.clearwave.com%2Fjerry%2Fconsole_Log.jpg%3Aq0jCmfxYHnLFWeRKtgHtBY39ebc&amp;cuid=3321886" rel="nofollow noopener" title="http://cerberus.clearwave.com/jerry/console_Log.jpg">http://cerberus.clearwave.c...</a><br>- Should there be more listed here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729688">21</a> by Raymond Camden
		posted on 8/9/2011 at 6:49 PM
		</div>
		<div class="comment_text"><p>That's the same URL.</p><p>It would be a _lot_ easier if I could run this. I know you didn't want to post the URL here, but if you want to privately share the site with me, I'd be willing to check there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729695">22</a> by ja
		posted on 8/9/2011 at 7:00 PM
		</div>
		<div class="comment_text"><p>Ray, That link should have been: <a href="http://disq.us/url?url=http%3A%2F%2Fcerberus.clearwave.com%2Fjerry%2Fconsole_Log2.jpg%3A5bmSubaX92jnHUfXZQoKkchfewk&amp;cuid=3321886" rel="nofollow noopener" title="http://cerberus.clearwave.com/jerry/console_Log2.jpg">http://cerberus.clearwave.c...</a><br>-	Currently the site is on a VM Server via a local IP, behind our FW..<br>-	I’d love to let you take a look if I knew of a way to allow it..<br>-	One thing that still bugs me is that the actual Demo here: <a href="http://disq.us/url?url=http%3A%2F%2Fjquery-ui-map.googlecode.com%2Fsvn%2Ftrunk%2Fdemos%2Fjquery-mobile-example.html%23jquery-mobile-example-3.html%3Ai0cBFMRJKFoAqAaBxI6MaySgi4U&amp;cuid=3321886" rel="nofollow noopener" title="http://jquery-ui-map.googlecode.com/svn/trunk/demos/jquery-mobile-example.html#jquery-mobile-example-3.html">http://jquery-ui-map.google...</a> works fine with my cfquery &amp; dynamic “To: value?<br>-	If you look at their demo and notice the link that shows up for their “Get Directions” button? (<a href="http://disq.us/url?url=http%3A%2F%2Fjquery-ui-map.googlecode.com%2Fsvn%2Ftrunk%2Fdemos%2F%23%29%3Aq1KcCk_8kSAYSxRGuylRKMfdQDU&amp;cuid=3321886" rel="nofollow noopener" title="http://jquery-ui-map.googlecode.com/svn/trunk/demos/#)">http://jquery-ui-map.google...</a> Maybe this is part of the issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729698">23</a> by Raymond Camden
		posted on 8/9/2011 at 7:06 PM
		</div>
		<div class="comment_text"><p>In the network tab, you want to look at Scripts, or Other. Google's library uses DOM injection (I believe) to dynamically load other scripts. Check em both - look for errors.</p><p>Sorry - your last two bullets don't make sense to me. Your 3rd bullet says the actual demo works, then you say "works fine with my cfquery ..." - can you rewrite that? I can't parse what you are saying exactly.</p><p>As for directions - again - let's ignore that till we get the map to show up at all. I truly think your issue is with the google.load comments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729697">24</a> by ja
		posted on 8/9/2011 at 7:59 PM
		</div>
		<div class="comment_text"><p>Sorry about the confusion here..</p><p>- Here is the correct link to googles Demo: <a href="http://disq.us/url?url=http%3A%2F%2Fjquery-ui-map.googlecode.com%2Fsvn%2Ftrunk%2Fdemos%2Fjquery-mobile-example.html%23jquery-mobile-example-3.html%3Ai0cBFMRJKFoAqAaBxI6MaySgi4U&amp;cuid=3321886" rel="nofollow noopener" title="http://jquery-ui-map.googlecode.com/svn/trunk/demos/jquery-mobile-example.html#jquery-mobile-example-3.html">http://jquery-ui-map.google...</a> (works fine ofcourse)<br>- I can then copy that sample demo into my Dreamweaver site, add in my "cfquery statement", and replace the Static "To box" value with my Dynamic data, preview the page in Chrome, and the Map will display just fine using my values from my cfquery!</p><p>The console is now hanging at: <a href="http://disq.us/url?url=http%3A%2F%2Fcerberus.clearwave.com%2Fjerry%2Fconsole_Log3.jpg%3AwxKNv2wDeSq-ZbcnH8EsAguJkd4&amp;cuid=3321886" rel="nofollow noopener" title="http://cerberus.clearwave.com/jerry/console_Log3.jpg">http://cerberus.clearwave.c...</a> (when I click on the Map link?) can't get to the other tabs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729702">25</a> by ja
		posted on 8/11/2011 at 12:18 AM
		</div>
		<div class="comment_text"><p>Ray, I'm ashamed to admit that I found the trouble and it was fairly simple..<br>- I needed to add the data-ajax="false" attribute to my href (since I'm calling a new page)<br>- Now that the JQM code is not interfering, the "acctNum" is passed to the p6.cfm map page displaying the map with the dynamic data. Even the Directions work!</p><p>- Here's my updated code on my p2.cfm page..<br>- &lt;div data-role="collapsible" data-collapsed="true"&gt;<br>			    &lt;h3&gt;Map&lt;/h3&gt;<br>			    &lt;cfoutput&gt;&lt;p&gt;#rsTicketDetail.mapAddress#&lt;/p&gt;&lt;/cfoutput&gt;<br>&lt;cfoutput&gt;&lt;a data-ajax="false" href="p6.cfm?id2=#rsTicketDetail.acctNum#"&gt;Map&lt;/a&gt;&lt;/cfoutput&gt;<br> 		      &lt;/div&gt;</p><p>Thanks again for the help.. <br>ps: note to self: "what other cool CF application/tools/training/code snippets can I pilfer from planet-ray.."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729704">26</a> by Raymond Camden
		posted on 8/11/2011 at 1:03 AM
		</div>
		<div class="comment_text"><p>Very happy it worked out for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729717">27</a> by Rookie
		posted on 9/7/2011 at 2:57 PM
		</div>
		<div class="comment_text"><p>I think the Google guys must have changed something cause it is not working any more.. Unless, it is just a temporary thing, but the main street view site seems to work.. The coldfusion example was working fine until a few days ago, but today I am getting a black square box every time I try it. Any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729718">28</a> by Raymond Camden
		posted on 9/8/2011 at 5:57 AM
		</div>
		<div class="comment_text"><p>I think I found out why.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgroups.google.com%2Fforum%2F%23%21msg%2Fgoogle-maps-api%2FbV0uKjKW-mA%2FkpcxcjGr4HEJ%3A2mZwOuG69RMuVjlw4h3J01Oh7-A&amp;cuid=3321886" rel="nofollow noopener" title="https://groups.google.com/forum/#!msg/google-maps-api/bV0uKjKW-mA/kpcxcjGr4HEJ">https://groups.google.com/f...</a></p><p>Notice they talk about version 2.s. If you look at the scripts output by CF, we are using 2.x, which folks specifically say is still broken.</p><p>I'd just switch to using Google Maps natively. I've got a few blog posts on that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729719">29</a> by rookie
		posted on 9/8/2011 at 1:51 PM
		</div>
		<div class="comment_text"><p>the google forum guys have the following suggestion: "please use 2 or 2.s for your production sites, and not 2.x".</p><p> How do we set this up in our coldfusion examples?</p><p>Also, I will check out the native option you suggested.</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729720">30</a> by Raymond Camden
		posted on 9/8/2011 at 2:50 PM
		</div>
		<div class="comment_text"><p>That's the thing - you can't. CF spits out the JS libraries itself. You can't control it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729723">31</a> by rookie
		posted on 9/9/2011 at 4:35 PM
		</div>
		<div class="comment_text"><p>Well I didn't do anything and both my code and your demo are working fine again. The Google guys must have fixed the bug! The good thing that came out of this, is that now I also know how to use the maps natively. Keep up the good work, love your blog. May the Flex be with you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729721">32</a> by Mike
		posted on 9/16/2011 at 3:16 AM
		</div>
		<div class="comment_text"><p>is this broken again - streetview doesnt seem to show when i run the code her :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729727">33</a> by Raymond Camden
		posted on 9/16/2011 at 6:03 AM
		</div>
		<div class="comment_text"><p>Working for me.</p></div>
	</div>
</div>
		