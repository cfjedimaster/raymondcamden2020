
<div class="comment" id="c_1713714292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714292">1</a> by Neil
		posted on 5/12/2009 at 5:00 PM
		</div>
		<div class="comment_text"><p>this appears to only work if the chartseries draws its data from a query using its query attribute.  it does not work if you try to append a string to the cfchartdata tag's value attribute.  it throws an error as coldfusion expects a number.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714294">2</a> by Monte Chan
		posted on 4/27/2010 at 6:41 PM
		</div>
		<div class="comment_text"><p>Instead of showing the labels above the markers, can it make the labels displayed below the markers?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714295">3</a> by Raymond Camden
		posted on 4/30/2010 at 7:26 AM
		</div>
		<div class="comment_text"><p>This XML will do it:</p><p> &lt;dataLabels style="Value" placement="Inside"/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714293">4</a> by Monte Chan
		posted on 5/1/2010 at 12:24 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thank you for your response.  That's exactly what I am looking for.</p><p>Oh by the way, I found a webcharts plug-in that works with CF Builder.   Go to Help&gt;Install New Software and paste in the following URL, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.gpoint.com%2Fwebsite%2FWebCharts50%2Fproducts%2Feclipse.jsp%3A7SR5A5s-6kN0ame5RpbWKet0EAk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.gpoint.com/website/WebCharts50/products/eclipse.jsp">http://www.gpoint.com/websi...</a></p><p>Follow the instructions.  After the installation, just restart the CF????????????????????????????????????????????????? Builder.</p><p>I don't know about you but my webcharts GUI messes up on me all the time.  The webcharts GUI within CF Builder is a lot more stable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714298">5</a> by Monte Chan
		posted on 5/1/2010 at 12:25 AM
		</div>
		<div class="comment_text"><p>Sorry about those question marks in my previous post.  I have no clue how those question marks got in there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714291">6</a> by Monte Chan
		posted on 5/1/2010 at 12:27 AM
		</div>
		<div class="comment_text"><p>oops, I put the wrong URL there.  That URL shows the steps on what needs to be done.  This is the URL that you put in your CF Builder. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.gpoint.com%2Fwebsite%2FWebCharts50%2Fdownload%2Feclipse_plugin%3Am0ZQhM8JJ32b2z8fxgfWdJcgVk4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.gpoint.com/website/WebCharts50/download/eclipse_plugin">http://www.gpoint.com/websi...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714297">7</a> by Raymond Camden
		posted on 5/1/2010 at 12:38 AM
		</div>
		<div class="comment_text"><p>Yep, knew about that. Pretty cool thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714299">8</a> by Kelly McIntosh
		posted on 1/31/2014 at 10:59 PM
		</div>
		<div class="comment_text"><p>Sorry, I know this is an old post, but I can't find the answer to my question anywhere.<br>I am using a query to create a stacked chart and I want to have the label to be generated dynamically and be cumulative and formatted.<br>For example:<br>Qtr   Data    Label<br>Q1    1000   $1K<br>Q2    1200   $2.2K<br>Q3     900    $3.1K<br>Q4    1500   $4.6K<br>Is this possible? Can I set the desc somehow?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714296">9</a> by Raymond Camden
		posted on 2/5/2014 at 3:48 AM
		</div>
		<div class="comment_text"><p>Labels are tied to data points typically not to the sum or anything like that. Best I can suggest is firing up the chart editor and seeing if you can find an option.</p></div>
	</div>
</div>
		