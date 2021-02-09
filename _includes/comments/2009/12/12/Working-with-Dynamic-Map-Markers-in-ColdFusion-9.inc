
<div class="comment" id="c_1713720461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720461">1</a> by Marko Simic
		posted on 12/13/2009 at 3:29 AM
		</div>
		<div class="comment_text"><p>To realize full potential of Google Map implementation, you need to look outside of ColdFusion boundaries.<br>Check Google Map API docs: <a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fintl%2Fsr-RS%2Fapis%2Fmaps%2Fdocumentation%2Freference.html%3A881sncAATXUdv3xMcBmKHOtZ_RE&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/intl/sr-RS/apis/maps/documentation/reference.html">http://code.google.com/intl...</a>.<br>Considering this example check for GEventListener -&gt; GEvent.addListener and Events list.<br>Possibilities are endless and I plan to use them :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720458">2</a> by John Allen
		posted on 12/13/2009 at 6:23 AM
		</div>
		<div class="comment_text"><p>Ray Camden Rocks.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720459">3</a> by Raymond Camden
		posted on 12/13/2009 at 6:27 AM
		</div>
		<div class="comment_text"><p>@Marko: For all my talk of the API, I didn't link to it. Thanks. :)</p><p>@John: Heh, thanks. This was fun.</p><p>One point I should have made. If I had done the maps 100% 'by hand' (by hand I mean w/o cfmap), it probably would have been a bit easier. Maybe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720462">4</a> by Nick Iles
		posted on 12/20/2009 at 5:04 PM
		</div>
		<div class="comment_text"><p>Just been looking at this with great interest - as this looks realy good. A question though - is there a way of dynamically adding markers to the map itself with a user click, and then recalling the location?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720464">5</a> by Raymond Camden
		posted on 12/20/2009 at 8:33 PM
		</div>
		<div class="comment_text"><p>I'm sure. I've added it to my list of things to try (which means, no promises, but I may try to get it working at lunch),</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720466">6</a> by Nick Iles
		posted on 12/24/2009 at 3:29 AM
		</div>
		<div class="comment_text"><p>Ray, had a look at the API, what I suggest seems possible, but not had chance to try it yet on our CF development box. let me know if you got anywhere at lunch!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720463">7</a> by Dave Ferguson
		posted on 9/14/2011 at 12:39 AM
		</div>
		<div class="comment_text"><p>I know this post is a couple years old but it is actually relevant to something I am working on.</p><p>When using ColdFusion.Map.setCenter a marker is created at the new center and all previous markers are still there.</p><p>Do you know if there is a way to remove all markers on a map?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720468">8</a> by Raymond Camden
		posted on 9/14/2011 at 1:32 AM
		</div>
		<div class="comment_text"><p>If I remember right, the answer is no. I seem to remember writing a demo once where I stored the markers in an array. I could then remove them all by going through the array. In fact, the more I say this, the more I bet I blogged it. Try doing a search for all the cfmap posts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720467">9</a> by Marko Simic
		posted on 9/14/2011 at 1:33 PM
		</div>
		<div class="comment_text"><p>Dave. Unless you dont insist on CF implementaion, recently I used goMap jQuery plugin <a href="http://disq.us/url?url=http%3A%2F%2Fwww.pittss.lv%2Fjquery%2Fgomap%2F%3AIdZORiJh8zM-hmnA9kp8khNKcZc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.pittss.lv/jquery/gomap/">http://www.pittss.lv/jquery...</a> which can do that (at least I remember so)...among all other nice things</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720470">10</a> by jeg
		posted on 12/14/2011 at 11:32 AM
		</div>
		<div class="comment_text"><p>Glad I found this blog. I'm not sure where to post and seek help. Hoping you can help me out for my future project.</p><p>I was trying to find a way to automatically show the markerwindowcontent when the map has loaded. It would be nice if &lt;CFMAP&gt; would have added an attribute for this functionality like: ShowMarkerWindowContentOnLoad="true/false".</p><p>Also, assuming having two column page i.e. &lt;div id="lefnav"&gt;&lt;/div&gt; &lt;div id="map"&gt;&lt;/div&gt;, there are times that MarkerWindowContent is pretty limited to show detailed information about the marker. I'm trying to show the detailed information in id="leftnav" container instead in markerwindowcontent. When map marker is click, run a query, then show the resultset on leftnav container.</p><p>Lastly, say the map has a dozen markers or more shown. The leftnav shows all the corresponding record for each marker on the map. Clicking a record on the leftnav will zoom the map to that marker location WITHOUT losing all the markers which of course some has gone out of boundary as a result of zooming in but they are still there so that when panning they still shows.</p><p>Thanks for your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720471">11</a> by Raymond Camden
		posted on 12/14/2011 at 7:27 PM
		</div>
		<div class="comment_text"><p>Wow, that's lots of questions. I'll try to address them all.</p><p>1) Have a marker shown on load.<br>Should be possible via Google's JS API. I'd suggest looking it over - and remember CFMAP uses v2, not v3.</p><p>2) You want to listen for a click event on the marker. Again, that's possible via the API. You should take a look at it first. I know they support listening for click events.</p><p>3) Hmm. You want to zoom and focus on a marker w/o losing the others. Well, that I'm not sure of. There is support for what Google calls bounding boxes - ie, I have a box of crap and I want to ensure it's shown. Normally it uses the 'best' zoom to show all the items as nicely as possible. I don't think you can do that AND zoom in too. But, you may want to give it a shot. Again, check the docs. It works rather nicely actually.</p></div>
	</div>
</div>
		