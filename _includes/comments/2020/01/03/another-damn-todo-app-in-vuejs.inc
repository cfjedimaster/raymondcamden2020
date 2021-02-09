
<div class="comment" id="c_4748188484">
	<div>
		<img src="https://disqus.com/api/users/avatars/luminarious.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4748188484">1</a> by luminarious
		posted on 1/7/2020 at 12:55 PM
		</div>
		<div class="comment_text"><p>Try to avoid using sort method in computed properties. It's a common gotcha, but Javascript sort sorts the original array AND returns the sorted array. So if something else is using this.todos array, it will also be re-rendered, not only the views using this.sortedTodos.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4748190821">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4748190821">2</a> (In reply to <a href="#c_4748188484">#1</a>) by Raymond Camden
		posted on 1/7/2020 at 12:58 PM
		</div>
		<div class="comment_text"><p>Good point - I always forget that. I'm going to work on the second one this week and will fix it then!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4748303023">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4748303023">3</a> (In reply to <a href="#c_4748188484">#1</a>) by Raymond Camden
		posted on 1/7/2020 at 2:52 PM
		</div>
		<div class="comment_text"><p>I don't want to muck with my original version, but check out the update here: <a href="https://disq.us/url?url=https%3A%2F%2Fcodepen.io%2Fcfjedimaster%2Fpen%2FOJPQMyW%3ABf80EATPi-C3Yqr7cbCcwLdUR8w&amp;cuid=3321886" rel="nofollow noopener" title="https://codepen.io/cfjedimaster/pen/OJPQMyW">https://codepen.io/cfjedima...</a>. I know slice is a shallow copy, but knowing my data it seems safe to use.</p></div>
	</div>
</div>
		