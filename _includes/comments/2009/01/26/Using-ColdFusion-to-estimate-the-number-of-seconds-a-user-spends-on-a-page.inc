
<div class="comment" id="c_1713711797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711797">1</a> by Jules Gravinese
		posted on 1/26/2009 at 11:51 PM
		</div>
		<div class="comment_text"><p>That's a good server only solution. Another way would be to go with javascript/ajax. There would be an Onload event which pings a cf page to register the start time for that page, then an Unload event to stop the timer for that page. This way, you always capture that last page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711799">2</a> by Phillip Senn
		posted on 1/27/2009 at 2:45 AM
		</div>
		<div class="comment_text"><p>I use this in my Turing test.<br>If someone has submitted a comment in less than a few seconds, I send them an error message instead of processing it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711795">3</a> by Yaron Kohn
		posted on 1/27/2009 at 9:16 PM
		</div>
		<div class="comment_text"><p>One of my side projects require students to spend time on our website studying. As with Jules I use Javascript &amp; Ajax to determine time spent in study mode.  As for the Alt-tab to World of Warcraft session scenario, with both CF only or Javascript\Ajax solutions you can use the good old body onBlur &amp; onFocus attributes (e.g. &lt;body onblur="pauseTimer()" onFocus="startTimer()") to pause &amp; restart your page timers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711798">4</a> by JC
		posted on 1/28/2009 at 2:57 AM
		</div>
		<div class="comment_text"><p>Yaron beat me to the onblur/onfocus suggestion.</p><p>We use Gomez performance monitoring services, including among other things their "Actual XF" (no clue what the hell XF means, they just renamed a bunch of their products to use it recently) product, which sticks a bit of javascript on the page and tracks "Load Time, Perceived Render Time, DOM Ready Time, Response Time, Page Views, Satisfaction Index, Visitor Satisfaction, Visitor Satisfaction and Conversion, Custom Event Timings, Abandonment, Object Errors, and Cache Level" (swiping that from my "create a chart" page) as well as the usual stuff like browser, OS, color depth, ISP, etc.</p></div>
	</div>
</div>
		