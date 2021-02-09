
<div class="comment" id="c_1713615227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615227">1</a> by seancorfield
		posted on 12/5/2003 at 3:53 AM
		</div>
		<div class="comment_text"><p>If you consider that each variable holds a reference to the actual struct in memory, then the behavior you see is simple to explain and what you should expect.</p><p>If you make <a href="http://disq.us/url?url=http%3A%2F%2Fapplication.foo%3AMaP78cqL0IJIg8xJrShBhtLG58A&amp;cuid=3321886" rel="nofollow noopener" title="application.foo">application.foo</a> 'point at' var a, what it really points at is the underlying memory which won't disappear until *all* references to it disappear.</p><p>Same with the s/b example. You are simply making s point at some new object - b will continue to point at the old one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615234">2</a> by Joe Cheng
		posted on 12/5/2003 at 9:39 AM
		</div>
		<div class="comment_text"><p>+1, Sean.</p><p>The first example is explained by garbage collection (or ref counting), the second example by the fact that variables just hold references to the objects.  This is exactly consistent with what you see in Java, Ruby, and any number of other languages--though probably not C. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615228">3</a> by Raymond Camden
		posted on 12/5/2003 at 3:28 PM
		</div>
		<div class="comment_text"><p>Makes perfect sense, Sean, thanks for taking the time to explain it!</p></div>
	</div>
</div>
		