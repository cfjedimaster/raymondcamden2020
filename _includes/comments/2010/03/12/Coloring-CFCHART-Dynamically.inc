
<div class="comment" id="c_1713722607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722607">1</a> by Jody Fitzpatrick
		posted on 3/13/2010 at 5:49 PM
		</div>
		<div class="comment_text"><p>I don't use CFCHART anymore. I have found out that it slows down my application quite considerably I switched to jQuery to render my charts.</p><p>But great post... I have always wondered how to do this. I was also wondering if coldfusion could have to sets of data points on the same chart data point a on the left defined by a bar ( or whatever ) and datapoint b defined on the right side with a line chart. I'm sure you have seen something similar to what I'm referring to Ray, well at least I hope so.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722609">2</a> by Raymond Camden
		posted on 3/14/2010 at 3:50 AM
		</div>
		<div class="comment_text"><p>All you need is two cfchartseries tags. One for the bar chart, one for the line chart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722610">3</a> by Larry C. Lyons
		posted on 3/18/2010 at 9:21 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, that cfchart suggestion you gave me a couple of days ago worked out very well. Looks like it turned into a nice blog post as well.</p><p>larry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722608">4</a> by Thrifte
		posted on 7/28/2010 at 7:17 PM
		</div>
		<div class="comment_text"><p>This was very useful. Couldn't figure out how to apply dynamic colors to CFChart... this is probably why you are famous :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722616">5</a> by Raymond Camden
		posted on 7/28/2010 at 10:08 PM
		</div>
		<div class="comment_text"><p>Actually it's my singing ability.... not. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722619">6</a> by Dan Murphy
		posted on 5/14/2013 at 8:07 PM
		</div>
		<div class="comment_text"><p>I know this is old, but google (thankfully) lead me here.  I love this tip, but any idea on why it doesn't work with multiple cfchartseries tags on the same chart?  It seems like no matter what I do, the colorlist attribute gets ignored once there are multiple series.  As an easy test, you could just use the example above but copy the cfchartseries to create the second one.  Colorlist gets ignored.  Seriescolor still works, but not colorlist.  Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722617">7</a> by Raymond Camden
		posted on 5/14/2013 at 8:14 PM
		</div>
		<div class="comment_text"><p>Confirmed. I'm guessing it is a bug. You could try to work around it using the chart editor.</p><p>However.</p><p>I no longer recommend using the older cfchart engine. There are a multitude of charting options available today that would work well with CF. Some free, some not, some open source, some not. But the point is - you have options. The old cfchart is near 10 years old I think. I suggest moving on from it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722618">8</a> by Misty
		posted on 5/20/2013 at 12:55 PM
		</div>
		<div class="comment_text"><p>Hi ray, How to dynamically change the type of the chartseries from pie, to cone, to area using jquery</p><p>Any Idea</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722620">9</a> by Raymond Camden
		posted on 5/20/2013 at 2:35 PM
		</div>
		<div class="comment_text"><p>Well, if you are using the new charting in CF10, it is trivial. You get a chart handle and reset the settings. In CF9 (or CF10 STD), you would use an iframe that calls the CFM. Make the CFM accept URL params for the type. jQuery can then 'drive' that iframe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722622">10</a> by Misty
		posted on 5/20/2013 at 5:09 PM
		</div>
		<div class="comment_text"><p>Hi ray, Actually Solved with iframe, Few issues i cam across IN IE 7 or 8, due to jquery permission denied. I am not sure what was causing it, then i reverted the code to iframe and loaded contents inside that and now it is working flawlessly</p><p>btw i am using cf10, you said "Well, if you are using the new charting in CF10, it is trivial.", can you show how?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722623">11</a> by Raymond Camden
		posted on 5/20/2013 at 6:12 PM
		</div>
		<div class="comment_text"><p>Um, ok, maybe not *trivial*. ;) Zingchart has an API that allows you to completely change the model/UI of a chart on the fly. CF gives you a handle to the chart object. You would then do what I would do - go to the Zingchart docs. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722621">12</a> by Lakshmi
		posted on 7/22/2014 at 9:42 AM
		</div>
		<div class="comment_text"><p>I am creating a bar graph in CF11 .i tried this in cf7 ad it worked but CF11 it didnt.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722624">13</a> by Raymond Camden
		posted on 7/22/2014 at 6:53 PM
		</div>
		<div class="comment_text"><p>CF11 has a new charting engine, so my code here isn't guaranteed to work anymore.</p></div>
	</div>
</div>
		