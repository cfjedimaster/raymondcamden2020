
<div class="comment" id="c_1713614498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614498">1</a> by Mike Tangorre
		posted on 3/17/2003 at 7:45 PM
		</div>
		<div class="comment_text"><p>Interesting find. What might be the downsides to this? For instance, is there a time when you would want to access that function before the cflogin tag closes?</p><p>What does MM say... is this an issue that needs fixing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614497">2</a> by Raymond Camden
		posted on 3/18/2003 at 2:12 AM
		</div>
		<div class="comment_text"><p>It''s a known bug. That doesn''t mean it will be fixed, but it''s on their bug system.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614505">3</a> by PaulC
		posted on 5/10/2008 at 1:13 AM
		</div>
		<div class="comment_text"><p>5 years later this has still not been fixed, just got nailed by it in CF8.</p><p>The use case is that I want to update a database immediate when the user logs in (last login date, 3 of logins). I wanted to use GetAuthUser() in the query, which resides in the cflogin block. No dice.</p></div>
	</div>
</div>
		