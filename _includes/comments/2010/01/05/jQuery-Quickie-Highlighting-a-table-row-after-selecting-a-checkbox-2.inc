
<div class="comment" id="c_1713721050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721050">1</a> by Bob
		posted on 1/5/2010 at 8:57 PM
		</div>
		<div class="comment_text"><p>How would I go about using a Reset button to clear the checkboxes and remove the highlights?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721049">2</a> by Raymond Camden
		posted on 1/5/2010 at 9:01 PM
		</div>
		<div class="comment_text"><p>Reset can mean two things. Return to the original status (some highlighted possibly), or remove all. To me, it means the first normally. But you want to clear them all?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721052">3</a> by BinaryKitten
		posted on 1/5/2010 at 9:20 PM
		</div>
		<div class="comment_text"><p>if this was to be used in an actual form .. as in the checkboxes usable then using the value would break this.. what about using the rel attribute?   where the rel="idOfRow" alternatively  $(this).closest('tr').toggleClass('highlight'); which is the smallest code for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721051">4</a> by Raymond Camden
		posted on 1/5/2010 at 9:28 PM
		</div>
		<div class="comment_text"><p>How so? They all have the same name. On submit, you would have a list of checked rows.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721053">5</a> by BinaryKitten
		posted on 1/5/2010 at 9:33 PM
		</div>
		<div class="comment_text"><p>if the value was a value for the row. and not a rowID then value wouldn't work when it comes back to the server properly would it not?    I've always ascribed to the idea using the right attribute for the right task.. since rel is for Relationship .. the checkbox is related to the Row  rel for me would be the better option.    Though i would probably go with .closest('tr') as that would be cleaner.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721054">6</a> by Raymond Camden
		posted on 1/5/2010 at 9:38 PM
		</div>
		<div class="comment_text"><p>Errr, I don't think I'm reading you. The value is the primary key of the piece of art. I'm not arguing with you in terms of if rel= would be a better solution, but I don't agree that it is broken now - if that makes sense.</p><p>Definitely with you on closest('tr'). I believe someone mentioned that on the first post - but I didn't update to that.</p></div>
	</div>
</div>
		