
<div class="comment" id="c_1713665639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665639">1</a> by Danilo Celic
		posted on 5/23/2007 at 6:42 PM
		</div>
		<div class="comment_text"><p>Or course, if you still want to use $() syntax and you aren't working with other frameworks that use it (and do not plan to), then all you should need to do is in the global scope of your page:<br>var $ = Spry.$;</p><p>Note: I've not tested this out with Spry 1.5 so there is the possibility that is other "baggage" that comes along with the Spry object such as references to other methods hanging off the Spry object that may break this reassignment, but if it was merely namespacing the $() function, then you should be good to go.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665620">2</a> by Joshua Curtiss
		posted on 5/23/2007 at 8:56 PM
		</div>
		<div class="comment_text"><p>Wow, nice tip Danilo. That would be seriously irritating to not be able to use $().</p></div>
	</div>
</div>
		