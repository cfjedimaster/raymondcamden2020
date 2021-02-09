
<div class="comment" id="c_1713651882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651882">1</a> by Michael White
		posted on 4/17/2006 at 5:58 PM
		</div>
		<div class="comment_text"><p>that is ANOTHER tag I have never used... Thanks Ray, I can be more introspective now</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651896">2</a> by Justice
		posted on 4/17/2006 at 9:17 PM
		</div>
		<div class="comment_text"><p>Wow, thanks Ray, I never knew there was a tag to do that either!  This worked great, and my little testing template helps a ton while developing.  Now I can dig into my cfc's private methods and see the results in jig time!  =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651899">3</a> by Jeff Anderson
		posted on 4/18/2006 at 3:54 AM
		</div>
		<div class="comment_text"><p>There is another way to call CFC methods dynamically.<br>(I realized this after dumping the variables scope inside of a CFC.)</p><p>&lt;cfset methodName = "foo" /&gt;<br>&lt;cfset f = myCFC[methodName] /&gt;<br>&lt;cfdump var="#f()#" /&gt;</p><p>That will act as if you calling <a href="http://disq.us/url?url=http%3A%2F%2FmyCFC.foo%3ArKIhNIwCAWo0rUmdVJbCZuVklpk&amp;cuid=3321886" rel="nofollow noopener" title="myCFC.foo">myCFC.foo</a>() directly.</p></div>
	</div>
</div>
		