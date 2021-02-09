
<div class="comment" id="c_1713614987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614987">1</a> by David Ringley
		posted on 10/2/2003 at 2:43 PM
		</div>
		<div class="comment_text"><p>Thank you for providing solutions, not just pointing out others' mistakes.  I am tired of others' rants without being gracious enough to suggest answers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614985">2</a> by seancorfield
		posted on 10/2/2003 at 7:58 PM
		</div>
		<div class="comment_text"><p>Error handling is a topic worthy of several books tho' so folks often omit error handling code when they're trying to show an example of something else - but your point is a good one.</p><p>I'd use structKeyExists(URL,'id') rather than isDefined('<a href="http://disq.us/url?url=http%3A%2F%2FURL.id%3AxuIu8lBXFPFeUwiz8LJLXlbvQnM&amp;cuid=3321886" rel="nofollow noopener" title="URL.id">URL.id</a>') for a number of reasons (including performance).</p><p>I'm curious as to why you didn't recommend cfparam which many people seem to be inordinately fond of?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614988">3</a> by Raymond Camden
		posted on 10/2/2003 at 8:10 PM
		</div>
		<div class="comment_text"><p>I prefer cfparam myself, but to properly handle errors, you need to use try/catch. I figured most people use isDefined (or SKE), and that would be the simpler solution. I should probably blog about error handling more and show an example using cfparam wrapped in try/catch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614986">4</a> by charlie
		posted on 10/2/2003 at 9:23 PM
		</div>
		<div class="comment_text"><p>(raising hand as one who, without any 'formal' programming background, would love to read more about proper error handling in CF)</p><p>i do generally do the if NOT structKeyExists()...but don't generally do &lt;cftry&gt;&lt;cfcatch&gt;.  do you (by 'you', i mean anybody who cares to answer) use try/catch blocks around all queries?</p><p>i think where i get hung up is trying to plan for any possible way the user can break my page(s) (and of course, the users manage to be more creative than I)...but i'm too focused on each possible breakpoint, and don't feel that i use (or rely on) sitewide error handling enough.</p><p>i think my inane rambling demonstrates the fact that i would get quite a bit out of some entries on proper error handling :)</p></div>
	</div>
</div>
		