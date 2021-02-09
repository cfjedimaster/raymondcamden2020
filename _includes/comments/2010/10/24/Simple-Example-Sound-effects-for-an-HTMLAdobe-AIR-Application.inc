
<div class="comment" id="c_1713727044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727044">1</a> by Phillip Senn
		posted on 10/25/2010 at 1:43 AM
		</div>
		<div class="comment_text"><p>This is great Ray.<br>I'm a part time teacher and two of the things we discuss during the semester is morse code and semaphores.<br>With semaphores, I bring in two flags and have each student do a semaphore 'circle'.  It's always fun to watch the students waiving their arms in the air with all their classmates giggling.<br>With morse code, I've always thought of writing a morse code "quiz" where it plays a random letter and asks them "what letter was that?"<br>I've already done it using the printed dots and dashses, but that's not really morse code.  That's just a representation of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727045">2</a> by andy matthews
		posted on 10/26/2010 at 3:08 AM
		</div>
		<div class="comment_text"><p>Phillip, this wouldn't be too hard actually. I might approach it in the following way. If I remember correctly, morse code consists of only two types of sounds, long and short.</p><p>If you created a JSON structure that comprised each letter you could load the sounds on demand:</p><p>var morse = {<br>'a': '.-..--'<br>}</p><p>Then, when you output a letter, you simply call the sound file associated with each character in the letter. This is oversimplified, but it's a good place to start.</p></div>
	</div>
</div>
		