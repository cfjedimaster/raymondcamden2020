
<div class="comment" id="c_1713676986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676986">1</a> by Will B.
		posted on 2/8/2008 at 8:47 PM
		</div>
		<div class="comment_text"><p>Ray -- are you an Anne Rice fan?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676980">2</a> by Andrew
		posted on 2/8/2008 at 8:56 PM
		</div>
		<div class="comment_text"><p>It may be easier to figure out if Magnus could provide an example of what a completed chart would look like.  I'm having trouble "visualizing" what the end result should be.  I used cfchart extensively while building a dashboard site so I can understand some of the challenges using the tag.  Once people started showing me what they want the chart to look like, it became much easier to code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676991">3</a> by Raymond Camden
		posted on 2/8/2008 at 9:09 PM
		</div>
		<div class="comment_text"><p>Heck no. My dog writes better than her. I'll give her props for bringing something new to the genre, but still. Ick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676988">4</a> by Richard Dillman
		posted on 2/9/2008 at 2:18 AM
		</div>
		<div class="comment_text"><p>I think you will get what your after if you change your yAxis to<br>&lt;yAxis scaleMin="0" scaleMax="10" labelCount="11" isReversed="true"/&gt;</p><p>and remove  gridlines="5" from the cfchart tag.</p><p>Gridlines is definately overriding your XML style.<br>Also dont forget that zero is a marker too so label count is always 1 more than the number of markers you want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676990">5</a> by Raymond Camden
		posted on 2/9/2008 at 2:23 AM
		</div>
		<div class="comment_text"><p>That's better - and it follows the range I want. But when I try to get rid of the 0 I get odd results. I'd like 1 to be the top of the chart. Possible?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676989">6</a> by Magnus
		posted on 2/10/2008 at 7:56 AM
		</div>
		<div class="comment_text"><p>Basically, what Ray is aiming at is what I am after.</p><p>I actually think that the chart 2 in Ray's post would look ideal if you hide the '0' in the y-axis. It looks a little funny when the data points bump against the top of the chart.</p><p>Also, can you manipulate the chart style details in Bluedragon?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676987">7</a> by Raymond Camden
		posted on 2/10/2008 at 6:54 PM
		</div>
		<div class="comment_text"><p>Magnus - I don't think so. But as I've blogged here recently, there are quite a few nice alternatives to cfchart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676985">8</a> by Dylan
		posted on 11/4/2009 at 8:32 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Any chance the new CF9 has an updated WebCharts3D engine that resolves this?  Or should we start exploring alternatives?</p><p>Regards,</p><p>Dylan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676983">9</a> by Raymond Camden
		posted on 11/4/2009 at 8:57 PM
		</div>
		<div class="comment_text"><p>As far as I know (no proof of this), the charting engine did NOT change in any way in ColdFusion 9.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676984">10</a> by Dylan
		posted on 11/4/2009 at 10:19 PM
		</div>
		<div class="comment_text"><p>Yep, just downloaded CF9 to confirm.  CF9 is still using WebCharts3D 5.1.</p></div>
	</div>
</div>
		