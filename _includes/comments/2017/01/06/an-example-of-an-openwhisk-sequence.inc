
<div class="comment" id="c_4440970937">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Gj3b7txiyy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4440970937">1</a> by Raul Contreras
		posted on 4/28/2019 at 4:03 AM
		</div>
		<div class="comment_text"><p>I want to quickly share my experience with sequences. I needed to parameterize the downstream functions in the sequence, so my solution was a convention for every function to pass the initial input params to an attribute <code>_initParams</code> in the output; the initial one at the absent of the <code>_initParams </code> attribute attach all its input params to the output, and in case of existing <code>_initParams</code> just append this one to its output. This way you can pass parameters to all functions in the flow</p></div>
	</div>
</div>
		