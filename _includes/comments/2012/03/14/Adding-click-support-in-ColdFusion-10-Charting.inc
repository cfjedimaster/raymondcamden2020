
<div class="comment" id="c_1713739802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739802">1</a> by Scott Stroz
		posted on 3/14/2012 at 7:14 PM
		</div>
		<div class="comment_text"><p>I know we 'discussed' this privately, but another option is to use the ZingChart events. The following code allows us to listen for when the chart is done doing its thing. We can then set handlers and such.</p><p>ColdFusion.Chart.getChartHandle("myChart").complete = function(jsonobj){}</p><p>For more on ZingChart events, check out the docs - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.zingchart.com%2Flearn%2Fapi%2Fevents.php%3Asvz14XoJTT3YAGiV2V16HWzgtmw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.zingchart.com/learn/api/events.php">http://www.zingchart.com/le...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739803">2</a> by Aaron Neff
		posted on 3/22/2012 at 4:45 PM
		</div>
		<div class="comment_text"><p>This is just too cool. Adobe should implement this, and remove that restriction :) Thanks Ray and Scott.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739804">3</a> by Jeffrey Mark Christie
		posted on 12/18/2013 at 2:18 AM
		</div>
		<div class="comment_text"><p>Please let me know if you can help. I need to be able to pass more information out of my chart than the value and node to properly redirect it to the proper detail report.</p><p>In the previous versions I used $SERIESLABEL$, $ITEMLABEL$ values to pass through the URL parameter to my handler page.</p><p>It looks like the option in this example is to be able to populate the section in the object labeled text. Do you have a suggestion as to how to dynamically per data point as my line graph is drawn to get my desired information into that part of the object?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739807">4</a> by Raymond Camden
		posted on 12/18/2013 at 3:40 AM
		</div>
		<div class="comment_text"><p>"Do you have a suggestion..."</p><p>Um, outside of what I said in the blog entry? Maybe I don't understand your question, but did you carefully read the entry and how it works?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739811">5</a> by Jitendra
		posted on 5/27/2014 at 6:13 PM
		</div>
		<div class="comment_text"><p>How can i get value of X- label value on click event. Like in your console.dir(dataOb);<br>you are getting value=109. so how can i get X label value like Donuts without using CFCASE?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739809">6</a> by Raymond Camden
		posted on 5/27/2014 at 6:17 PM
		</div>
		<div class="comment_text"><p>You can't, afaik.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739810">7</a> by Raymond Camden
		posted on 5/27/2014 at 6:25 PM
		</div>
		<div class="comment_text"><p>Actually - I could be wrong. The docs imply we can get it, but it isn't working for me, so I've asked zingcharts on Twitter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739808">8</a> by Raymond Camden
		posted on 5/29/2014 at 1:56 AM
		</div>
		<div class="comment_text"><p>So I dug into this, and I spoke w/ ZingCharts on twitter. They actually put together *3* demos for me trying to get this right. Issue ended up being that CF10 has an older version of ZingCharts. The same code in 11 will return the node title in the event handler.</p><p>So - long story short - yet another remind to skip using CF's built in UI stuff and use libraries like Zing directly.</p></div>
	</div>
</div>
		