
<div class="comment" id="c_4985604005">
	<div>
		<img src="https://disqus.com/api/users/avatars/haroenv.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4985604005">1</a> by Haroen Viaene
		posted on 7/9/2020 at 4:09 PM
		</div>
		<div class="comment_text"><p>For indexing I notice that you’re doing a network request directly without using algoliasearch. I’d advise changing to the api client, since that will do some things for you:</p><p>- automatic splitting of big arrays, making sure you won’t get timeouts<br>- automatic retrying if one of the machines is down (we use a “raft” consensus algorithm)</p><p>Otherwise great post!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4985622205">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4985622205">2</a> (In reply to <a href="#c_4985604005">#1</a>) by Raymond Camden
		posted on 7/9/2020 at 4:23 PM
		</div>
		<div class="comment_text"><p>Would you suggest the replaceAll method?</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.algolia.com%2Fdoc%2Fapi-reference%2Fapi-methods%2Freplace-all-objects%2F%3ALQ-lAve3-JsM94BsF1xYuGwN94s&amp;cuid=3321886" rel="nofollow noopener" title="https://www.algolia.com/doc/api-reference/api-methods/replace-all-objects/">https://www.algolia.com/doc...</a></p><p>In theory that could replace my 2 calls with one.</p></div>
	</div>
</div>
		