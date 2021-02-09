
<div class="comment" id="c_1713617915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617915">1</a> by Peter J. Farrell
		posted on 4/8/2005 at 7:59 PM
		</div>
		<div class="comment_text"><p>Err, Ray...<br>Don't you still need the () as &lt;cfset foo = someMethod() /&gt;?</p><p>By the way:<br>Bonne Fete A Toi,<br>Bonne Fete A Toi,<br>Bonne Fete A Ray...<br>Bonne Fete A Toi.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617919">2</a> by Ray Camden
		posted on 4/8/2005 at 8:06 PM
		</div>
		<div class="comment_text"><p>It was a test to see if you were paying attention - I swear! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617914">3</a> by Nathan Strutz
		posted on 4/8/2005 at 9:28 PM
		</div>
		<div class="comment_text"><p>Yeah, the "this" scope is basically what external objects see, as in &lt;cfreturn this&gt; on an init() method. It's the same object you get when you just create the object, so you won't see any private methods in "this".</p><p>If you feel the need to scope your local method calls, use the variables scope.</p></div>
	</div>
</div>
		