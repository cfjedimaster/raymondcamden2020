
<div class="comment" id="c_1714082637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082637">1</a> by Henry Ho
		posted on 4/11/2014 at 2:18 AM
		</div>
		<div class="comment_text"><p>Awesome talk, thanks Ray.</p><p>One comment, I think your arrayReduce demo (reduce.cfm @ 36min mark) should make use of the optional `initialValue` attribute instead of using the elvis operator for testing null on every iteration?</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fwikidocs.adobe.com%2Fwiki%2Fdisplay%2Fcoldfusionen%2FArrayReduce%3As0OVKVAbrh2AevF5bNOeaujkePU&amp;cuid=3321886" rel="nofollow noopener" title="https://wikidocs.adobe.com/wiki/display/coldfusionen/ArrayReduce">https://wikidocs.adobe.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082617">2</a> by Raymond Camden
		posted on 4/11/2014 at 2:24 AM
		</div>
		<div class="comment_text"><p>Yes, that is nicer. Here is the version that does that.</p><p>result2 = arr.reduce(function(value, element) {<br>	value += element;<br>    return value;<br>},0);</p></div>
	</div>
</div>
		