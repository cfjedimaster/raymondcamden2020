
<div class="comment" id="c_1713653840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653840">1</a> by raZorTT
		posted on 2/26/2009 at 8:16 AM
		</div>
		<div class="comment_text"><p>G'day Ray,</p><p>I found this blog post after a quick search on google for reserved words in model-glue. I came across an issue with a form field named "version" in on of my apps.</p><p>Do you know if there is a more extensive list of reserved words anywhere?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.constantconfusion.com%2F2009%2F02%2F26%2Freserved-words%2F%3Aa3SpebxymGHXpsAM8qito_Auo4Y&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.constantconfusion.com/2009/02/26/reserved-words/">http://blog.constantconfusi...</a></p><p>Cheers,<br>Simon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653847">2</a> by Raymond Camden
		posted on 2/26/2009 at 8:39 AM
		</div>
		<div class="comment_text"><p>Version shouldn't be reserved. Was this with MG3?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653846">3</a> by raZorTT
		posted on 2/26/2009 at 8:47 AM
		</div>
		<div class="comment_text"><p>I think we have version 2.0.304</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653844">4</a> by Raymond Camden
		posted on 2/26/2009 at 8:49 AM
		</div>
		<div class="comment_text"><p>Looking at your blog post - I'm not so sure this is a conflict w/ the core MG files. I think it might be something else. Maybe try some intensive logging?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653843">5</a> by raZorTT
		posted on 2/26/2009 at 9:43 AM
		</div>
		<div class="comment_text"><p>MG wouldn't modify the form struct after a submission would it?</p><p>I dumped out form as well as the event struct and both had been changed. It is looking like something else might be the culprit.</p><p>Cheers,<br>Simon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653845">6</a> by Raymond Camden
		posted on 2/26/2009 at 5:15 PM
		</div>
		<div class="comment_text"><p>Try adding some debugging to your Application.cfm file. Ie, log form.version. This will be run before MG does anything.</p></div>
	</div>
</div>
		