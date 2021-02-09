
<div class="comment" id="c_1713714314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714314">1</a> by Neil Bailey
		posted on 3/30/2009 at 9:41 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>CFChart is nice for an native CF charting package, but we made the move to BD.Net (precursor to moving to an entirely .NET platform), and the BD CFChart tag doesn't support the style attribute.</p><p>We looked at the Dundas charting package, and I have to tell you, I was both impressed beyond belief and amazed at exactly how lacking the CFChart tag is (but we never knew it).</p><p>I don't know how compatible some of the 3rd party charting packages are w/ an  Adobe CF install, but it might be worth looking into for someone who needs high quality charts, and has some requirements that aren't easily supported in the CF package.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714315">2</a> by Raymond Camden
		posted on 3/30/2009 at 9:45 PM
		</div>
		<div class="comment_text"><p>Keep in mind that CFCHART's main limitations are simply due to the tag based nature of it's implementation. There is a HECK of a lot you can do if you switch to the XML style. I can't blame Adobe for having to limit what the tags by themselves can do.</p><p>As it stands, I'm doing a CF Charting preso for CFUNITED this year. I plan on reviewing different options out there that work well with CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714316">3</a> by Sean
		posted on 4/20/2009 at 5:30 AM
		</div>
		<div class="comment_text"><p>Hi Ray, question. What if I wanted to limit the scale from .85 to .89 the Min/Max doesn't work then. I have a chart with 10 bars ranging from 1,000 to 200,000. If I change the scaleMin to 100,000 and scaleMax to 200,000 the chart utility ignores the request and the scale is automatically adjusted to display the bar with 1,000 value. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714330">4</a> by Raymond Camden
		posted on 4/20/2009 at 5:32 AM
		</div>
		<div class="comment_text"><p>Isn't that expected though? Your data is outside your scaleMin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714331">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714331">5</a> by Matt
		posted on 9/30/2009 at 1:48 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Your post was a great deal of help. Thanks for the style to get this detailed decimal scale (I've changed to scaleMin="0.95" scaleMax="1.05"). I have ran into another problem however. All the values of the data I'm charting = "1" in one of the particular case I'm charting and ignores the new scale. I've tried setting the autoAdjust="no" in the frameChart tag but still no dice. Have you ever seen this before? To recreate... You can get the same effect if you take the example you provide and change all the values of the query you are building (column YValue) equal to 1. The scale you set gets ignored.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714332">6</a> by Raymond Camden
		posted on 10/1/2009 at 5:31 AM
		</div>
		<div class="comment_text"><p>I modified the XML to</p><p>      &lt;yAxis scaleMin="0.9" scaleMax="1.6"&gt;</p><p>and it worked fine. Did you try that? Or another number?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714333">7</a> by Matt
		posted on 10/1/2009 at 7:46 AM
		</div>
		<div class="comment_text"><p>Hi Ray, I probably didn't explain my problem well enough. Right now your example file has these values set for the YValue "0.974325, 0.9533125, 0.95923728814, 0.971375, 0.96545098039, 0.96577966102, 0.9803, 0.96824074074, 0.95381818182, 0.97077777778, 0.95945454545, 0.94502631579" if you happened to change these values for YValue to "1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1" (excuse the list representation of the change but I'm trying to be brief). After changing the YValues all to "1" the yAxis scaleMin="0.9" is ignored. :( What gives? Have you ever seen this before and might know how to get around this. This is my last effort, I've played around with the WebCharts3d designer too long. Thanks again for your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714334">8</a> by Raymond Camden
		posted on 10/1/2009 at 3:41 PM
		</div>
		<div class="comment_text"><p>I did change my values to 1, but I didn't bother trying to fix the _first_ chart, only the second chart, and it worked fine. Did you try that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714335">9</a> by Matt
		posted on 10/1/2009 at 6:34 PM
		</div>
		<div class="comment_text"><p>Is there a possibility that with our installs of CF that the webcharts3d charting engine is different? When I change all the values to “1” the yAxis scaleMin attribute is completely ignored and is 0 instead. However the yAxis scaleMax attribute stays correct. I have had some other people test this as well and none of us have been able to get any thing to work. Hmm? Thanks for your help again. I think I might just throw the towel in and go with just displaying the values in a table.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714336">10</a> by Raymond Camden
		posted on 10/2/2009 at 3:26 AM
		</div>
		<div class="comment_text"><p>Well heck - you are right. I didn't notice the _bottom_ one had reset to 0. I had just tweaked the _top_ one, which did work.</p><p>Ugh. :) Well, there are definitely other charting options out there if this is a deal breaker for you. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714337">11</a> by Matt
		posted on 10/5/2009 at 8:23 PM
		</div>
		<div class="comment_text"><p>Hi Ray, Do you have recommendations on other charting packages (if you are able to comment on it). I have a love hate relationship with the webcharts3d. Its so simple, but then you try to get it to do what you want and it just won't let me at times. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714340">12</a> by Raymond Camden
		posted on 10/6/2009 at 9:27 AM
		</div>
		<div class="comment_text"><p>Check my preso on charting in CF - I mention a few other packages.</p></div>
	</div>
</div>
		