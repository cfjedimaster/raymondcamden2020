
<div class="comment" id="c_2048088825">
	<div>
		<img src="https://disqus.com/api/users/avatars/Dencity.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2048088825">1</a> by Stephen Rodriguez
		posted on 5/27/2015 at 2:14 PM
		</div>
		<div class="comment_text"><p>It doesn't really work well with other terms like "Thor" or "Spiderman". I actually get a hang up (infinite loading) when searching on Thor</p></div>
	</div>
</div>
		
<div class="comment" id="c_2048332969">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2048332969">2</a> (In reply to <a href="#c_2048088825">#1</a>) by Raymond Camden
		posted on 5/27/2015 at 4:40 PM
		</div>
		<div class="comment_text"><p>Thor worked for me, Spiderman did not, but neither did it work on their docs either (you can test API calls there).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2048334024">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2048334024">3</a> (In reply to <a href="#c_2048332969">#2</a>) by Raymond Camden
		posted on 5/27/2015 at 4:40 PM
		</div>
		<div class="comment_text"><p>Ahah, spider-man works, but I'm not encoding the string. Fixing now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2048353778">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2048353778">4</a> (In reply to <a href="#c_2048334024">#3</a>) by Raymond Camden
		posted on 5/27/2015 at 4:52 PM
		</div>
		<div class="comment_text"><p>Nope, that wasn't the issue. I mean, I should be encoding, but the issue is that the results for Spider-Man were all "image not available" from the API. So I don't return them.</p></div>
	</div>
</div>
		