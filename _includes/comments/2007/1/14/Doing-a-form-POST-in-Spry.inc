
<div class="comment" id="c_1713661208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661208">1</a> by BL
		posted on 1/15/2007 at 10:38 AM
		</div>
		<div class="comment_text"><p>Ray, Can you comment on why (and maybe give an example) on when you would NOT want to do the Spry call asyncronously (async=false)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661217">2</a> by Raymond Camden
		posted on 1/15/2007 at 5:52 PM
		</div>
		<div class="comment_text"><p>Here is an example of where you would NOT want it to be asynch: You are doing an operation that changes the form. So for example, I have a subform next to a drop down. When I hit the button on the subform, it adds new data and changes the drop down. By keeping it not asynch, I can "pause" the whole form while it adds the data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661219">3</a> by Andrew Powell
		posted on 1/15/2007 at 6:17 PM
		</div>
		<div class="comment_text"><p>Another example of wanting to wait:  I've got a form that posts into a CFM page. That cfm page will generate a new graph via cfchart.  We want to wait for that process to end before, in the result function, we update the view with the updated chart.  If you have a process that other functionality is dependant upon, then you should plan to not use an async call.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661224">4</a> by BL
		posted on 1/16/2007 at 1:12 PM
		</div>
		<div class="comment_text"><p>Gotcha.  Makes good sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661223">5</a> by Mark
		posted on 1/29/2007 at 12:51 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Could you consider writing a tutorial with all the bits together for us slower learners.  I mean, make a say, 5 field form that updates to mysql, do the async call with spry post and then return the newly updated record back to the page to update a div in the page.  Would you consider doing this for a farm boy like me? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661222">6</a> by Raymond Camden
		posted on 1/29/2007 at 4:16 PM
		</div>
		<div class="comment_text"><p>Sure. I've had an idea in my head for a while now. I'll try to get it this week before I leave for the Frameworks conf.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661220">7</a> by Mark
		posted on 1/30/2007 at 12:42 AM
		</div>
		<div class="comment_text"><p>Thank you SOOOO much Ray, I really look forward to this one, I really want to get a look at how this thing works with forms.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661221">8</a> by Tim Mushen
		posted on 2/2/2007 at 11:48 AM
		</div>
		<div class="comment_text"><p>Hi Ray, <br>Yes, that would be helpful for us the remedial spry crowd.</p><p>What about a CF version of the  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.exceptionalitservices.com%2Fmedia%2F%3AqG3g6JqYqScesHuTieRUBHNe53M&amp;cuid=3321886" rel="nofollow noopener" title="http://www.exceptionalitservices.com/media/">http://www.exceptionalitser...</a>  (<a href="http://disq.us/url?url=http%3A%2F%2Fexceptionalit.com%2FMediaManager.zip%29%3AVYVZdazsS08xlbKX70id2llB8ng&amp;cuid=3321886" rel="nofollow noopener" title="http://exceptionalit.com/MediaManager.zip)">http://exceptionalit.com/Me...</a> example?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661226">9</a> by Raymond Camden
		posted on 2/2/2007 at 6:47 PM
		</div>
		<div class="comment_text"><p>I did do a follow up:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Findex.cfm%2F2007%2F1%2F29%2FDoing--form-Post-in-Spry-2%3AnH0Dct9I258ToFuQEhhskvfjtu4&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/index.cfm/2007/1/29/Doing--form-Post-in-Spry-2">http://ray.camdenfamily.com...</a></p></div>
	</div>
</div>
		