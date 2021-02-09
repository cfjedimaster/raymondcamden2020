
<div class="comment" id="c_1713744174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744174">1</a> by Pete
		posted on 12/18/2012 at 12:51 PM
		</div>
		<div class="comment_text"><p>Ray, when you call your webservice:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Freq.open%3AAgR2k8hsq_G68_kaWxvyGWVn_gM&amp;cuid=3321886" rel="nofollow noopener" title="req.open">req.open</a>("get","../api/service.cfc?method=getdata&amp;page="+page);</p><p>You parse it as JSON, I thought you had to specify returnFormat=JSON to get JSON back?<br>var result = JSON.parse(e.currentTarget.response);</p><p>Are you specifying the return type in side the service.cfc?</p><p>And cool demo, I really need to start using this kind of thing to handle AJAX loaded pages in my sites</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744169">2</a> by Raymond Camden
		posted on 12/18/2012 at 6:07 PM
		</div>
		<div class="comment_text"><p>I put it in the code. You can see the code for it here:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2F4327849%3AEKfyt-9yBrHCfexYASMtPyktyDY&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/4327849">https://gist.github.com/432...</a></p><p>Note, I wrote this super quick. Don't consider it best practice.</p><p>Unless it is. Then - of course - I'm brilliant.</p></div>
	</div>
</div>
		