
<div class="comment" id="c_1714083088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083088">1</a> by Jack
		posted on 6/10/2014 at 5:55 PM
		</div>
		<div class="comment_text"><p>Is there a difference between "template cache" and "trusted cache"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083089">2</a> by Raymond Camden
		posted on 6/10/2014 at 6:07 PM
		</div>
		<div class="comment_text"><p>I assume you mean, "Cache template in request" ? If so, that refers to how often CF will check a template during one request. Imagine a CFM does a cfinclude of foo.cfm a few times in one file. (Seems silly, but there are reasons why you may do that.) If this setting is on, CF will only load/parse the file once during the request. To be clear, it still executes the code right, but it doesn't re-check/parse the CFM after the first time.</p></div>
	</div>
</div>
		