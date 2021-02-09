
<div class="comment" id="c_1713721657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721657">1</a> by Nathan Mische
		posted on 1/29/2010 at 7:36 AM
		</div>
		<div class="comment_text"><p>Well, in this case DeserializationJSON was actually keeping the correct data type. This is actually an issue with how CF converts large numbers to string on output. The approach I probably take here is to use NumberFormat. NumberFormat(myArray[1].actor_id,"0") should do the trick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721655">2</a> by Nathan Mische
		posted on 1/29/2010 at 7:38 AM
		</div>
		<div class="comment_text"><p>Um, that should be DeserializeJSON, not DeserializationJSON...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721656">3</a> by Ben Nadel
		posted on 1/29/2010 at 7:57 PM
		</div>
		<div class="comment_text"><p>This is frustrating.</p></div>
	</div>
</div>
		