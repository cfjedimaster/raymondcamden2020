
<div class="comment" id="c_1713733830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733830">1</a> by Dan G. Switzer, II
		posted on 6/27/2011 at 11:47 PM
		</div>
		<div class="comment_text"><p>One thing that can be done is to use AJAX to load the chart fragment into the DOM. This allows you to pass in width/height based dynamic natures of your HTML, so that you can render the image to the specific width/height you've reserved on your page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733832">2</a> by Raymond Camden
		posted on 6/27/2011 at 11:50 PM
		</div>
		<div class="comment_text"><p>But even with a fragment, the chart will be X wide. Increasing the size of the fragment won't make the chart wider. I don't believe this will work - but if you try it and see otherwise, let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733833">3</a> by John Jarrard
		posted on 11/13/2012 at 2:04 AM
		</div>
		<div class="comment_text"><p>In case this ever comes up again, for the CFChart image output, to scale it, just wrap it in a div and use CSS to scale the internal image.</p><p>Example:</p><p>&lt;div id="imageDiv"&gt;<br>   &lt;cfchart yaddy yaddy format="png"&gt;<br>&lt;/div&gt;</p><p>Then:<br>&lt;style&gt;<br>#imageDiv img {width: 100%}<br>&lt;/style&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733852">4</a> by Raymond Camden
		posted on 11/13/2012 at 2:28 AM
		</div>
		<div class="comment_text"><p>Slick. Thanks John!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733851">5</a> by Mike
		posted on 2/27/2014 at 10:19 PM
		</div>
		<div class="comment_text"><p>You don't even have to mess with the generated image at all if the chart format is "png".  Simply wrap the chart in the div with the style (class or id).</p><p>Example:<br>&lt;div class="imageDiv"&gt;<br>&lt;cfchart format="png"...&gt;<br>  &lt;cfchartseries<br>      type="bar"...&gt;<br>    &lt;cfchartdata items...&gt;<br>      &lt;/cfchartseries&gt;<br>&lt;/cfchart&gt;<br>&lt;/div&gt;</p><p>&lt;style&gt;<br>.imageDiv img {width: 100%}<br>&lt;/style&gt;</p></div>
	</div>
</div>
		