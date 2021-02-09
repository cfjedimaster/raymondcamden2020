
<div class="comment" id="c_1713718537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718537">1</a> by Jason Dean
		posted on 9/23/2009 at 6:05 PM
		</div>
		<div class="comment_text"><p>Ray,  When I try the same thing using:</p><p>document.addEventListener('keypress', function(e) {<br>		air.Introspector.Console.log(e);<br>		var c = String.fromCharCode(e.which)<br>		handleGuess(c)<br>	})</p><p>The same problem occurs. So it does not appear to be jQuery causing the issue. I also tried it in Firefox, which I'm sure you also did, and the problem did not show up. So it seems like a good guess that it must be something in AIR that is causing it.</p></div>
	</div>
</div>
		