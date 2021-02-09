
<div class="comment" id="c_1713712065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712065">1</a> by Richard D. Worth
		posted on 2/3/2009 at 11:05 PM
		</div>
		<div class="comment_text"><p>Thanks for all of these informative posts. Just a quick note: the syntax you used</p><p>$("#example").data("title.dialog", "Definition of "+term)</p><p>is correct for UI 1.5 but in later versions has been deprecated. The new API for getting and setting plugin options after init is</p><p>$("#example").dialog("option", "title", "Definition of "+term)</p><p>So each jQuery UI plugin has an option method. You pass the name of the option as the first argument. If you pass a second argument it's a setter. Otherwise it's a getter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712077">2</a> by Raymond Camden
		posted on 2/3/2009 at 11:14 PM
		</div>
		<div class="comment_text"><p>Ah thanks. I noticed this isn't documented yet. Will it be when 1.6 is released?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712078">3</a> by Richard D. Worth
		posted on 2/3/2009 at 11:16 PM
		</div>
		<div class="comment_text"><p>I appreciate the reminder. I'll make sure it is :)</p></div>
	</div>
</div>
		