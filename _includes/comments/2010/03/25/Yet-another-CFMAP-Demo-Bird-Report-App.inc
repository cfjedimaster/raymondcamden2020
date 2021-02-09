
<div class="comment" id="c_1713722918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722918">1</a> by Jaana Gilbert
		posted on 4/20/2011 at 9:35 PM
		</div>
		<div class="comment_text"><p>I know this is an older demo, but how would you restrict the *report* ability to just one click? I'm going to use this for the locator you saw last week, to allow adding new retailers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722941">2</a> by Raymond Camden
		posted on 4/20/2011 at 9:38 PM
		</div>
		<div class="comment_text"><p>After the thing is added, remove the event listener.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722938">3</a> by Jaana Gilbert
		posted on 4/20/2011 at 9:57 PM
		</div>
		<div class="comment_text"><p>Can I say I'm blond when I comment that *which and where?* <br>Sorry, not that good with jQuery yet :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722925">4</a> by Raymond Camden
		posted on 4/21/2011 at 7:31 AM
		</div>
		<div class="comment_text"><p>You want to use GEvent.removeListener(...) as defined here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fapis%2Fmaps%2Fdocumentation%2Fjavascript%2Fv2%2Freference.html%23GEvent%3ABoXe10zw4wsyzSLv-W909YRKe8s&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/apis/maps/documentation/javascript/v2/reference.html#GEvent">http://code.google.com/apis...</a></p><p>You need to mod my GEvent.addListener to return a value, like so:</p><p>myListner = GEvent.addListener.....</p><p>You then use myListener in the removeListener call.</p><p>Hope that makes sense.</p></div>
	</div>
</div>
		