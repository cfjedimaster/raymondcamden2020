
<div class="comment" id="c_3932500088">
	<div>
		<img src="https://disqus.com/api/users/avatars/koramvenkateswarlu.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3932500088">1</a> by Koram Venkateswarlu
		posted on 6/6/2018 at 6:28 AM
		</div>
		<div class="comment_text"><p>var optionsget = <br>{     <br>    host:'xyz.......' ,<br>    port: xxxxyyy,<br>    method: 'GET',<br>    path: '/api/computers',<br>    headers:   {authorization: 'Basic QWRtaW5pc3RyYXRvcjpBZG1pbjA5OA==' },<br>    rejectUnauthorized: false</p><p>}</p><p>how can i pass  above object values in url format.</p><p>example :var getCatsURL = '<a href="http://disq.us/url?url=http%3A%2F%2Fthecatapi.com%2Fapi%2Fimages%2Fget%3Fformat%3Dxml%26image_id%3D%27%2Bparams.id%2B%27%26size%3Dlarge%26api_key%3Dmymilkshake%27%3B%3ALIbGtXtN3AFo3EgzUv-Hl_FmTVA&amp;cuid=3321886" rel="nofollow noopener" title="http://thecatapi.com/api/images/get?format=xml&amp;image_id='+params.id+'&amp;size=large&amp;api_key=mymilkshake';">http://thecatapi.com/api/im...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3932620554">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3932620554">2</a> (In reply to <a href="#c_3932500088">#1</a>) by Raymond Camden
		posted on 6/6/2018 at 9:40 AM
		</div>
		<div class="comment_text"><p>You could convert it to JSON which would remove the line breaks and then use encodeURIComponent (<a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen-US%2Fdocs%2FWeb%2FJavaScript%2FReference%2FGlobal_Objects%2FencodeURIComponent%29%3AunbZ07TcJiB-umt4x3hsa0ek5IM&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/encodeURIComponent)">https://developer.mozilla.o...</a> to make it URL safe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3932620876">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3932620876">3</a> (In reply to <a href="#c_3932620554">#2</a>) by Raymond Camden
		posted on 6/6/2018 at 9:40 AM
		</div>
		<div class="comment_text"><p>Or wait - are you saying those are the options for your request? That's different then literally passing them _to_ the URL.</p></div>
	</div>
</div>
		