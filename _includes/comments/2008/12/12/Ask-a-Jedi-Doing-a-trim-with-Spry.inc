
<div class="comment" id="c_1713710651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710651">1</a> by Neil Bailey
		posted on 12/12/2008 at 11:49 PM
		</div>
		<div class="comment_text"><p>I would probably shorten up the function a bit:</p><p>function formatDescription(region,lookupFunc){<br>   return (lookupFunc("{description}").length&lt;100)?lookupFunc("{description}"):lookupFunc("{description}").substring(0,100);<br>}</p><p>if then blocks are much slower than a turnary.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710647">2</a> by OJ
		posted on 12/13/2008 at 1:25 AM
		</div>
		<div class="comment_text"><p>Thanks this was very helpful. Also, one must have Sprydata.js from at least 1.6.1. It took me a while to figure that out :)</p><p>thanks</p></div>
	</div>
</div>
		