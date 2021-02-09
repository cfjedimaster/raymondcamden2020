
<div class="comment" id="c_1713721913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721913">1</a> by todd sharp
		posted on 2/10/2010 at 7:21 PM
		</div>
		<div class="comment_text"><p>Just a thought - what if you declare your shape globally?  Would that allow you to continue to work with it?  I have no experience with this either, just throwing that out there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721937">2</a> by todd sharp
		posted on 2/10/2010 at 7:24 PM
		</div>
		<div class="comment_text"><p>Another thought - try adding the button programatically with actionscript - and do it after you draw.  If I remember correctly Flex/AS does a 'top down' approach for 'z-index' (IE: the last object added is on top).</p><p>Of course I may be completely wrong... it wouldn't be the first time :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721935">3</a> by Raymond Camden
		posted on 2/10/2010 at 7:24 PM
		</div>
		<div class="comment_text"><p>I tried that.</p><p>&lt;?xml version="1.0" encoding="utf-8"?&gt;<br>&lt;mx:WindowedApplication xmlns:mx="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2F2006%2Fmxml%3A4hjhY2twhj6ocrP8KGam6QWbZyk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/2006/mxml">http://www.adobe.com/2006/mxml</a>" layout="absolute" creationComplete="init()"&gt;</p><p>	&lt;mx:Script&gt;<br>		&lt;![CDATA[</p><p>			public var myLine:Shape;<br>			public var current:int;</p><p>			public function init():void {</p><p>				current = 10</p><p>				myLine = new Shape()<br>				myLine.graphics.lineStyle(5, 0x990000, 1)</p><p>				myLine.graphics.moveTo(current, 10)<br>				myLine.graphics.lineTo(10, 50)</p><p>				this.rawChildren.addChild(myLine)</p><p>				var myTimer:Timer = new Timer(1000, 20)<br>				myTimer.addEventListener(TimerEvent.TIMER, moveLine)<br>			}</p><p>			public function moveLine(event:TimerEvent):void {<br>				current+=10<br>				myLine.moveTo(current, 10)<br>			}<br>		]]&gt;<br>	&lt;/mx:Script&gt;	<br>&lt;/mx:WindowedApplication&gt;</p><p>The issue here is that it won't compile. Gives me an error on that last moveTo:</p><p>Call to a possibly undefined method moveTo through a reference with static type flash.display:Shape.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721936">4</a> by bert buschop
		posted on 2/10/2010 at 7:41 PM
		</div>
		<div class="comment_text"><p>myLine.moveTo(current, 10)<br>must be<br>  myLine.graphics.moveTo(current, 10)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721934">5</a> by JesterXL
		posted on 2/10/2010 at 7:46 PM
		</div>
		<div class="comment_text"><p>If you're looking to hold onto the objects themselves, you'll have to draw using a Vector of IGraphicsData.  Check out flash.display.Graphics::drawGraphicsData, it'll have a good example.  Cool stuff!</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fflex%2F3%2Flangref%2Fflash%2Fdisplay%2FGraphics.html%23drawGraphicsData%28%29%3Atg57_URcPpx92nGhK3Uw39F0jFg&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/flex/3/langref/flash/display/Graphics.html#drawGraphicsData()">http://livedocs.adobe.com/f...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721914">6</a> by bert buschop
		posted on 2/10/2010 at 7:50 PM
		</div>
		<div class="comment_text"><p>I probably missunderstood the problem, with the last moveTo, do you want to reposition the line? than you should do something like this: myLine.x += 10?<br>Could you describe exactly what you want to do, then I'll probably can help you out.<br>For the button: if you add something to the stage with the addChild function you can also use the addChildAt(myLine,0).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721931">7</a> by Raymond Camden
		posted on 2/10/2010 at 7:50 PM
		</div>
		<div class="comment_text"><p>Holy crap Bert. That's so obvious. -sigh-</p><p>No error now - but no animation. I'll get that next.</p><p>@JesterXL: I'll check it out. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721940">8</a> by Raymond Camden
		posted on 2/10/2010 at 7:52 PM
		</div>
		<div class="comment_text"><p>And it helps if I _start_ my timer. ;) Timer is running -b ut the graphics aren't updated. Thinking...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721942">9</a> by Raymond Camden
		posted on 2/10/2010 at 7:53 PM
		</div>
		<div class="comment_text"><p>God I'm an idiot -helps if I _lineTo_, not just _moveTo_. Ok, will post a new demo a bit later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721941">10</a> by Ben Riordan
		posted on 2/10/2010 at 9:00 PM
		</div>
		<div class="comment_text"><p>That first design there - I remember doing that on graph paper all throughout math class when I'd get bored. Fascinating design. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721943">11</a> by Gilbert
		posted on 2/10/2010 at 9:12 PM
		</div>
		<div class="comment_text"><p>Maybe these posts at my blog can help you on your experiments:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmylinerider.com%2F2009%2F07%2F24%2Fflex-3-example-drawing-a-path-at-run-time-with-adding-and-deleting-points-capabilities%2F%3ArQHIF9SO25be6OQrvta4LsZjW4k&amp;cuid=3321886" rel="nofollow noopener" title="http://mylinerider.com/2009/07/24/flex-3-example-drawing-a-path-at-run-time-with-adding-and-deleting-points-capabilities/">http://mylinerider.com/2009...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmylinerider.com%2F2009%2F07%2F24%2Fflex-3-example-drawing-a-path-at-run-time-with-adding-and-deleting-points-capabilities%2F%3ArQHIF9SO25be6OQrvta4LsZjW4k&amp;cuid=3321886" rel="nofollow noopener" title="http://mylinerider.com/2009/07/24/flex-3-example-drawing-a-path-at-run-time-with-adding-and-deleting-points-capabilities/">http://mylinerider.com/2009...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmylinerider.com%2F2009%2F08%2F29%2Fflex-3-example-drawing-a-polygon-at-run-time-with-adding-and-deleting-points-capability%2F%3Aw3jkaSkqMyIvaa_ZBXzxOv4GgNI&amp;cuid=3321886" rel="nofollow noopener" title="http://mylinerider.com/2009/08/29/flex-3-example-drawing-a-polygon-at-run-time-with-adding-and-deleting-points-capability/">http://mylinerider.com/2009...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721944">12</a> by Raymond Camden
		posted on 2/11/2010 at 2:31 AM
		</div>
		<div class="comment_text"><p>Neat stuff Gilbert!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721945">13</a> by Gilbert
		posted on 2/11/2010 at 4:11 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond. Soon I will post an article about how to create regular polygons, stars and bursts dynamically.</p></div>
	</div>
</div>
		