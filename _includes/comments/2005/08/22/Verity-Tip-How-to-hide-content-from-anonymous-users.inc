
<div class="comment" id="c_1713620169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620169">1</a> by Geoff Bowers
		posted on 8/23/2005 at 6:58 AM
		</div>
		<div class="comment_text"><p>Wouldn't articles.cfm rely on the framework to secure the content in any event?  The Verity solution is a nice one for restricting results.  But what about if I want to show the search result with a lock icon or similar visual cue to indicate that only authorised users can proceed -- with maybe a link to register or login?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620167">2</a> by Raymond Camden
		posted on 8/23/2005 at 7:09 AM
		</div>
		<div class="comment_text"><p>Finally, someone answered it. :) Yes and no, Geoff. My point, and the focus of my presentation in a few weeks, is that you can't trust URL variables. So if your list of articles is 'secure', don't forget to make your detail page also check security. I know it's obvious - but I'm sure you would agree that many people would forget this step. They would say, well, if <a href="http://disq.us/url?url=http%3A%2F%2FURL.id%3AxuIu8lBXFPFeUwiz8LJLXlbvQnM&amp;cuid=3321886" rel="nofollow noopener" title="URL.id">URL.id</a> is 10, I know 10 is ok for the current user. They wouldn't expect someone changing the ID.</p><p>As for your second thing - if you don't restrict your search, you can check the category field when you run over the results. Based on the category value you can show a lock icon if you want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620165">3</a> by Geoff Bowers
		posted on 8/23/2005 at 7:17 AM
		</div>
		<div class="comment_text"><p>Ok so it was a leading question on the visual cue -- more people need to know about the extra detail in Verity result sets in CF7 :)</p><p>In fact the whole Verity caper in CF7 is marvellous, if only the options for exceeding the document count were more clearly outlined.</p></div>
	</div>
</div>
		