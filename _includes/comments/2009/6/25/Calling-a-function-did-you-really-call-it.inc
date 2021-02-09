
<div class="comment" id="c_1713716377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716377">1</a> by Jonathan
		posted on 6/25/2009 at 10:07 PM
		</div>
		<div class="comment_text"><p>actually, I haven't! I have just made every other mistake in the book besides this one</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716378">2</a> by Adam Ness
		posted on 6/25/2009 at 10:15 PM
		</div>
		<div class="comment_text"><p>Yeah, the fact that functions are objects in ColdFusion is the source of many little errors that I've made over the years.  Sometimes very subtle ones too...</p><p>I wonder what the same code returns in Railo though..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716371">3</a> by TJ Downes
		posted on 6/25/2009 at 10:30 PM
		</div>
		<div class="comment_text"><p>I'm sure I have made the same mistake in the past, but it was refreshing to know I spotted the error first time reading the code :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716379">4</a> by Damon Gentry
		posted on 6/25/2009 at 10:48 PM
		</div>
		<div class="comment_text"><p>I, for one, have never made that mistake.  And for the record, "I'm shocked, shocked to find that gambling is going on in here!"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716380">5</a> by Jose Galdamez
		posted on 6/25/2009 at 11:01 PM
		</div>
		<div class="comment_text"><p>I'll admit I've done this before, but probably more so in JavaScript than in CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716381">6</a> by Brian Swartzfager
		posted on 6/25/2009 at 11:37 PM
		</div>
		<div class="comment_text"><p>I was just muttering to myself the other day that I have to stop forgetting to leave the "()" off the end of my Transfer function calls ("user.getFirstName" instead of "user.getLastName()").  :)</p><p>I think it's because in my mind I associate those ORM functions with the query-based variables I still use when looping through query results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716384">7</a> by Raymond Camden
		posted on 6/25/2009 at 11:38 PM
		</div>
		<div class="comment_text"><p>The code in question actually _was_ a Transfer-based call.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716383">8</a> by Sean in CT
		posted on 6/25/2009 at 11:47 PM
		</div>
		<div class="comment_text"><p>Interesting - would never have thought to do it that way to begin with.  Great question/example!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716382">9</a> by Tom McNeer
		posted on 6/26/2009 at 12:13 AM
		</div>
		<div class="comment_text"><p>Transfer calls are where I always make that mistake, too, especially when chaining composed objects:</p><p>&lt;cfreturn user.getRole().getRoleName() and such.</p><p>It's really easy to leave one out in the middle somewhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716387">10</a> by Nathan Kondra
		posted on 6/26/2009 at 10:36 PM
		</div>
		<div class="comment_text"><p>Oh most certainly. Back in the day I don't think there was a ColdFusion mistake that I have written.</p><p>This also reminds me of another issue I found just recently while reviewing someone code. Going to use the same example above to illustrate.</p><p>&lt;cfif len("returnNothing")&gt;<br>   Yes, this ran, and it never should!<br>&lt;cfelse&gt;<br>   Perfect - I got nothing back. As I expected.<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716388">11</a> by Frank
		posted on 6/30/2009 at 3:52 PM
		</div>
		<div class="comment_text"><p>Nope. Never done that.</p></div>
	</div>
</div>
		