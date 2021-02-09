
<div class="comment" id="c_1713721150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721150">1</a> by Scott P
		posted on 1/14/2010 at 3:48 AM
		</div>
		<div class="comment_text"><p>Google has a visualization api that will do that.  I've got an example of using cf at home that I can post later if anyone is interested.</p><p>Google Visualization API<br><a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fapis%2Fvisualization%2F%3AkYPdg85LXzHk925UaLeLfNWnZFo&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/apis/visualization/">http://code.google.com/apis...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721152">2</a> by Raymond Camden
		posted on 1/14/2010 at 3:49 AM
		</div>
		<div class="comment_text"><p>I reviewed Google Charts for... CFUNITED last year I think. It was a great service, but a royal pain in the ass. I hated how you had to encode data in such a complex manner.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721148">3</a> by Raymond Camden
		posted on 1/14/2010 at 3:57 AM
		</div>
		<div class="comment_text"><p>You know - I take it back. A super quick glance seems to show some pretty nice new stuff there, and _simpler_ stuff at that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721151">4</a> by Andy Sandefer
		posted on 1/14/2010 at 4:31 AM
		</div>
		<div class="comment_text"><p>@Ray<br>I really dig this.  I'm going to use your nifty slide show technique for an upcoming project (I'll probably throw a pause button and some forward and back controls in but you get the gist).  Very cool and easy to understand example - thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721255">5</a> by Raymond Camden
		posted on 1/14/2010 at 4:33 AM
		</div>
		<div class="comment_text"><p>Would you (or other readers) like it if I followed this up with an example that included controls?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721251">6</a> by Gary Funk
		posted on 1/14/2010 at 5:26 AM
		</div>
		<div class="comment_text"><p>Do you even have to ask? Yes.  I have a request that I will send you via email.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721254">7</a> by todd sharp
		posted on 1/14/2010 at 6:35 AM
		</div>
		<div class="comment_text"><p>I'd probably have added a class to each 'slide' and just done:</p><p>$(".slide-container").hide();</p><p>instead of looping over each child like you did.</p><p>How 'bout an example that takes each chart and makes each of them a PowerPoint slide with the new PowerPoint ability in CF9 and then calls the SlideSix API and publishes the PowerPoint to SlideSix.  Just sayin', that'd rock.... :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721253">8</a> by todd sharp
		posted on 1/14/2010 at 6:38 AM
		</div>
		<div class="comment_text"><p>Also - in your demo - the first &lt;p&gt; isn't shown right away.  Might do something like $('.slide-container:first).show() before calling the setInterval.  Or $('.slide-container).not(':first').hide();  (untested)...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721249">9</a> by Raymond Camden
		posted on 1/14/2010 at 7:07 AM
		</div>
		<div class="comment_text"><p>Todd, the issue with the first P not being shown is fixed in the second example. I specifically call out how.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721248">10</a> by Tim Brown
		posted on 1/14/2010 at 8:55 PM
		</div>
		<div class="comment_text"><p>@Scott P - I would love to see your cf and google visualization example. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721256">11</a> by James Moberg
		posted on 1/15/2010 at 2:17 AM
		</div>
		<div class="comment_text"><p>Check out the jQuery Cycle Plugin.  It is perfect for what you are trying to do and has the ability to add next/prev/pause/resume controls, tabbed navigation, multiple transitions, etc.<br><a href="http://disq.us/url?url=http%3A%2F%2Fmalsup.com%2Fjquery%2Fcycle%2F%3ArQwyRloSgBneuWUB2Sla0OSKSYA&amp;cuid=3321886" rel="nofollow noopener" title="http://malsup.com/jquery/cycle/">http://malsup.com/jquery/cy...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721250">12</a> by Michael Kane
		posted on 9/9/2010 at 1:56 AM
		</div>
		<div class="comment_text"><p>Ray, can you direct me to any material about improving the quality of the charts in JPG or PNG format? I have some projects for which using the cfcharts is required, can't use other products. The relatively poor quality of the JPG/PNG is a problem. Thanks in advance!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721257">13</a> by Raymond Camden
		posted on 9/9/2010 at 2:00 AM
		</div>
		<div class="comment_text"><p>I think you are out of luck. None of the arguments to cfchart allow you to tweak the quality.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721252">14</a> by James Moberg
		posted on 9/9/2010 at 2:09 AM
		</div>
		<div class="comment_text"><p>Michael,  I know you stated you can't use other products, but check out ChartDirector.  Very customizable and my client preferred the higher quality graphs.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.advsofteng.com%2Fproduct.html%3AmjukEhih9CBnDXcH80wIRljh1-g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.advsofteng.com/product.html">http://www.advsofteng.com/p...</a></p></div>
	</div>
</div>
		