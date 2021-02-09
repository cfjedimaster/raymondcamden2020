
<div class="comment" id="c_1713742538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742538">1</a> by Akash
		posted on 3/13/2014 at 9:53 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>Did you add this code snippet to the reveal.js file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742540">2</a> by Raymond Camden
		posted on 3/13/2014 at 4:11 PM
		</div>
		<div class="comment_text"><p>No it was in my index.html file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742543">3</a> by Akash
		posted on 3/13/2014 at 4:34 PM
		</div>
		<div class="comment_text"><p>Thank you, this is extremely useful.</p><p>I have a lot of notes and for some reason notes.html isn't showing me the scrollbar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742542">4</a> by Phil Leggetter
		posted on 5/30/2014 at 12:26 AM
		</div>
		<div class="comment_text"><p>I've just tweaked the above code slightly to:</p><p>* Show the notes when the slides initially load by binding to the `ready` event<br>* Clear the console if their are no notes for the current slide</p><p>```<br>Reveal.addEventListener( 'ready', addNotesToConsole );<br>Reveal.addEventListener( 'slidechanged', addNotesToConsole );</p><p>function addNotesToConsole( event ) {<br>  // event.previousSlide, event.currentSlide, event.indexh, event.indexv<br>  var notes = event.currentSlide.querySelector(".notes");<br>  if(notes) {<br>    <a href="http://disq.us/url?url=http%3A%2F%2Fconsole.info%3A0DizfQQlkqdui-PsMuRJ22g9iqo&amp;cuid=3321886" rel="nofollow noopener" title="console.info">console.info</a>(notes.innerHTML.replace(/\n\s+/g,'\n'));<br>  }<br>  else {<br>    console.clear();<br>  }<br>}<br>```</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742541">5</a> by Raymond Camden
		posted on 5/30/2014 at 1:03 AM
		</div>
		<div class="comment_text"><p>Nice, thanks for sharing that Phil!</p></div>
	</div>
</div>
		