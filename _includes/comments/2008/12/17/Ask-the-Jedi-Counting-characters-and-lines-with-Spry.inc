
<div class="comment" id="c_1713710788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710788">1</a> by Jason Brookins
		posted on 12/17/2008 at 8:09 PM
		</div>
		<div class="comment_text"><p>Man, I hope Spry comes back strong.  I'm impressed with jQuery and all, but I do like Spry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710802">2</a> by Francois Levesque
		posted on 12/17/2008 at 9:23 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Interesting way to solve this problem! However, the question got me thinking, and I wonder if this is what the OP needed as well. When you count characters in a textarea, carriage returns are not accounted for in the length of the field. When submitting to the DB, though, these characters are part of the field and must be considered for the maxlength of the column.</p><p>ie: You have a column defined as varchar (500), and you validate via JS that your field does not go over 500 characters. By default, carriage returns will not be counted and will break the submit when it attempts to store in the database field.</p><p>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710799">3</a> by Raymond Camden
		posted on 12/17/2008 at 9:33 PM
		</div>
		<div class="comment_text"><p>Actually the carriage returns _are_ counted. You see the counter go down when you hit enter. Both the char counter and the line counter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710803">4</a> by Francois Levesque
		posted on 12/17/2008 at 11:27 PM
		</div>
		<div class="comment_text"><p>Oops, my bad. I guess I never noticed that with Spry's textarea widget, but rather with other pre-built or home grown counting solutions.</p><p>I stand corrected!</p></div>
	</div>
</div>
		