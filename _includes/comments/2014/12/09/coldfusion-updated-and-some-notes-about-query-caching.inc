
<div class="comment" id="c_1733910286">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_7au0JochYw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1733910286">1</a> by Mark Kruger
		posted on 12/9/2014 at 9:28 PM
		</div>
		<div class="comment_text"><p>Ray, just to be clear, you mean you can pass EITHER an object OR a string? Or has it switched from string over to object only? One would be a nice (though undocumented) plus, the other would require some refactoring wouldn't it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1733913441">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1733913441">2</a> (In reply to <a href="#c_1733910286">#1</a>) by Raymond Camden
		posted on 12/9/2014 at 9:30 PM
		</div>
		<div class="comment_text"><p>Sorry, both work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2403363065">
	<div>
		<img src="https://disqus.com/api/users/avatars/thubbard29.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2403363065">3</a> by Tom Hubbard
		posted on 12/10/2015 at 5:02 PM
		</div>
		<div class="comment_text"><p>Is there a way to get a handle on a QueryDetails object of a given so that we can remove it from the cache?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2403562369">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2403562369">4</a> (In reply to <a href="#c_2403363065">#3</a>) by Raymond Camden
		posted on 12/10/2015 at 6:57 PM
		</div>
		<div class="comment_text"><p>Not sure. Of course, the easiest solution is to just provide an ID.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2403658303">
	<div>
		<img src="https://disqus.com/api/users/avatars/thubbard29.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2403658303">5</a> (In reply to <a href="#c_2403562369">#4</a>) by Tom Hubbard
		posted on 12/10/2015 at 7:53 PM
		</div>
		<div class="comment_text"><p>The problem with using ID is that it doesn't separate the queries based on the content of the sql/parameters.</p><p>When using just just cachedwithin, a new cache entry is entered for each sql/parameter combo.</p><p>A solution is to make the ID reflect the parameters to keep it distinct but, it would be nice...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2403708743">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2403708743">6</a> (In reply to <a href="#c_2403658303">#5</a>) by Raymond Camden
		posted on 12/10/2015 at 8:22 PM
		</div>
		<div class="comment_text"><p>Oh I just figured that was assumed. :) I used to serializeJSON(arguments) as a quick and dirty way to make a hash.</p></div>
	</div>
</div>
		