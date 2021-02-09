
<div class="comment" id="c_3508703440">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_SJbcsSijrO.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3508703440">1</a> by toddsharp
		posted on 9/8/2017 at 10:32 PM
		</div>
		<div class="comment_text"><p>/* why doesn't this work?...</p><p>Maybe because you already have 'item' in scope?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3509438638">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3509438638">2</a> (In reply to <a href="#c_3508703440">#1</a>) by Raymond Camden
		posted on 9/9/2017 at 1:38 PM
		</div>
		<div class="comment_text"><p>WOW. Yeah, I bet that's it - I'll test later.</p><p>Wow that was dumb. Thank you. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3509453915">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_SJbcsSijrO.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3509453915">3</a> (In reply to <a href="#c_3509438638">#2</a>) by toddsharp
		posted on 9/9/2017 at 1:53 PM
		</div>
		<div class="comment_text"><p>Nah, not dumb. Happens to everyone. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3510040128">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3510040128">4</a> (In reply to <a href="#c_3509453915">#3</a>) by Raymond Camden
		posted on 9/9/2017 at 9:44 PM
		</div>
		<div class="comment_text"><p>Oh - it's not that. I mean the variable is definitely bad, but even with this:</p><p>let existing = this.items.findIndex((itemob) =&gt; {<br>  return itemob.title === item;<br>});</p><p>This returns itemob as something - an observer of some sort - where title isn't a property. I think it's cuz Vue is wrapping arrays in it's own object?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3510042072">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3510042072">5</a> (In reply to <a href="#c_3510040128">#4</a>) by Raymond Camden
		posted on 9/9/2017 at 9:46 PM
		</div>
		<div class="comment_text"><p>This seems to be a way, but it seems overkill:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fstackoverflow.com%2Fa%2F42023504%2F52160%3AJoqqqItq-f2Cp_bA-IC0XKE1qi0&amp;cuid=3321886" rel="nofollow noopener" title="https://stackoverflow.com/a/42023504/52160">https://stackoverflow.com/a...</a></p></div>
	</div>
</div>
		