
<div class="comment" id="c_4016683175">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_SJbcsSijrO.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4016683175">1</a> by toddsharp
		posted on 8/1/2018 at 2:57 PM
		</div>
		<div class="comment_text"><p>Why not add some caching to localstorage?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4016698450">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4016698450">2</a> (In reply to <a href="#c_4016683175">#1</a>) by Raymond Camden
		posted on 8/1/2018 at 3:06 PM
		</div>
		<div class="comment_text"><p>That would definitely add a bit more performance, but you would need to also add some logic to invalidate the cache (ie, kill it after X days or some such). In my mind though this would have minimal impact on the actual performance. Then again, using localStorage would add maybe 5 lines of code. ;) But in general I'd say not worth it.</p></div>
	</div>
</div>
		