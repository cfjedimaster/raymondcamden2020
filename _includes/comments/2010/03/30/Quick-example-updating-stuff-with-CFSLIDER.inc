
<div class="comment" id="c_1713723165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723165">1</a> by SuperAlly
		posted on 3/30/2010 at 8:48 PM
		</div>
		<div class="comment_text"><p>That's cool Ray.  I was looking into the slider the other week but didn't really get anywhere with it, this should help.  Only problem I see with your example is that I can't set my actual coolness high enough :)<br>Yeah, okay, I'll leave now...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723166">2</a> by Raymond Camden
		posted on 3/30/2010 at 8:50 PM
		</div>
		<div class="comment_text"><p>I can always add a second slider for PHP devs with max=5. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723169">3</a> by Daniel Budde
		posted on 3/30/2010 at 9:20 PM
		</div>
		<div class="comment_text"><p>Brutal.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723170">4</a> by Jura Khrapunov
		posted on 3/30/2010 at 9:38 PM
		</div>
		<div class="comment_text"><p>I had a look at the source code of the example  and "oooh myyy gooodness" - Ext + YUI + jQuery for such a simple widget. ColdFusion should get on diet for its UI elements implementation. It works, which is enough in some cases, but ~1Mb of external libraries is way too much IMHO for such stuff</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723172">5</a> by Raymond Camden
		posted on 3/30/2010 at 9:58 PM
		</div>
		<div class="comment_text"><p>@Jura: Yep, it does a lot - but of course, all of that will be cached on the client after the first hit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723167">6</a> by Josh Knutson
		posted on 3/31/2010 at 5:40 AM
		</div>
		<div class="comment_text"><p>I would rather create a custom tag or helper that would just do the slider for me that uses the jquery-ui library, but I like jQuery more then ext. Too many files get included with ext,  and they will only cache on the client if you tell the client to cache them, with apache or iis. Well sometimes the browser will cache files that it wants to, but it can be unexpected to what files it does cache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723173">7</a> by Andy Sandefer
		posted on 3/31/2010 at 6:45 AM
		</div>
		<div class="comment_text"><p>@Ray - first off thanks for showing the slider.  On the db update end of things I would've probably handled it with something like...</p><p>function sliderChange(ob, value) {<br>  var myCFCmethodToUpdate = new myCFC();<br>      myCFCmethodToUpdate.setCallbackHandler(sliderChangeCallback);<br>myCFCmethodToUpdate.setErrorHandler(errorHandler);<br>myCFCmethodToUpdate.updaterMethodName(ob, value);<br>}</p><p>Were you just trying to show a jQuery only solution?  I think that the cfajaxproxy stuff is by far the most useful enhancement since cfSlicedBread!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723168">8</a> by Raymond Camden
		posted on 3/31/2010 at 7:25 AM
		</div>
		<div class="comment_text"><p>No particular reason - just figured a simple CFM to process the save would be enough, but your solution makes sense as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723174">9</a> by Budd Wright
		posted on 3/31/2010 at 9:13 AM
		</div>
		<div class="comment_text"><p>Ray, if you changed the onChange to onDrag, would your slider change its label more "real time", instead of just at the end when you release the slider?  That'd be a bit cooler...  ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723171">10</a> by Raymond Camden
		posted on 3/31/2010 at 9:16 AM
		</div>
		<div class="comment_text"><p>I disagree - you wouldn't want a buttload of XHR requests being fired as you drag back and forth.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723176">11</a> by Budd Wright
		posted on 3/31/2010 at 7:18 PM
		</div>
		<div class="comment_text"><p>Ahh- very true, and a "duh" moment on my part!  That'll teach me to reply late in the AM.  ;)</p><p>However, if you wanted the same effect as I'm describing without all the requests, couldn't you setup a separate onDrag event handler to do just the local updating? Something like:</p><p>function sliderDrag(ob, value) {<br>      $("#sliderValue").html(value)<br>}</p><p>That should give it that real time "application-like" feel, right?  ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723178">12</a> by Raymond Camden
		posted on 3/31/2010 at 7:21 PM
		</div>
		<div class="comment_text"><p>Good point - ondrag would be better for the label doohicky, and onchange for the update portion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723177">13</a> by Raymond Camden
		posted on 3/31/2010 at 7:24 PM
		</div>
		<div class="comment_text"><p>Ugh - the method signature is different. :( Testing now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723179">14</a> by Raymond Camden
		posted on 3/31/2010 at 7:26 PM
		</div>
		<div class="comment_text"><p>Ok, I'll post a comment to LiveDocs. The signature is: object,event.</p><p>See here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fmarch302010%2Ftest5.cfm%3Acm8xsmT1C-z2IgmzxkbcuTMQ5oY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/march302010/test5.cfm">http://www.coldfusionjedi.c...</a></p><p>My code now does:</p><p>&lt;script type="text/javascript" src="<a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1%2Fjquery.min.js%3AmyXuj5h8gP7HzSEw76YxIcay7LQ&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js">http://ajax.googleapis.com/...</a>"&gt;&lt;/script&gt;<br>&lt;cfparam name="session.slider" default="50"&gt;</p><p>&lt;script&gt;<br>function sliderDrag(ob, event) {<br>	console.dir(arguments)<br>	$("#sliderValue").html(ob.value)<br>}</p><p>function sliderChange(ob, value) {<br>	$.get("updateslider.cfm",{newvalue:value})<br>}</p><p>&lt;/script&gt;</p><p>&lt;b&gt;Your Coolness:&lt;/b&gt;<br>&lt;cfslider format="html"  min="1" max="100" value="#session.slider#" name="coolness" ondrag="sliderDrag" onchange="sliderChange" tip="false"&gt;<br>&lt;cfoutput&gt;&lt;b id="sliderValue"&gt;#session.slider#&lt;/b&gt;&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723180">15</a> by Budd Wright
		posted on 3/31/2010 at 8:33 PM
		</div>
		<div class="comment_text"><p>Ahh, better!  ;)</p></div>
	</div>
</div>
		