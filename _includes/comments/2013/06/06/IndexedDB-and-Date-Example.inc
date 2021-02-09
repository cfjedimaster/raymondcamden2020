
<div class="comment" id="c_1713746971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746971">1</a> by Ty Whalin
		posted on 6/7/2013 at 1:03 AM
		</div>
		<div class="comment_text"><p>Why just not use the BETWEEN function in SQL to accomplish the same thing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746978">2</a> by Raymond Camden
		posted on 6/7/2013 at 1:17 AM
		</div>
		<div class="comment_text"><p>Um... you know this is IndexedDB, right? I'm talking about client-side storage of data, not server-side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746968">3</a> by Ty Whalin
		posted on 6/7/2013 at 1:24 AM
		</div>
		<div class="comment_text"><p>Well by golly you are correct. Has been a long day. Been working on a lighted sign at a Hilton all day. Good ole' JavaScript above, if I would pay attention to it. CreateStoreData... Clicking now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746972">4</a> by Raymond Camden
		posted on 6/7/2013 at 10:59 AM
		</div>
		<div class="comment_text"><p>"Has been a long day." It happens. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746979">5</a> by Ahmed Kotb
		posted on 8/23/2013 at 3:43 PM
		</div>
		<div class="comment_text"><p>Thanks for the tutorial, here is a question<br>Why do you store the date as Date Object ?<br>isn't saving the date as a number (date.getTime()) would be faster ?<br>and we will still be able to search for a date between two dates ?<br>am i missing something ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746977">6</a> by Raymond Camden
		posted on 8/23/2013 at 3:55 PM
		</div>
		<div class="comment_text"><p>Um, I don't quite get your question. I stored it as a date object because thats what my data was, and it worked just fine (also allowing for searches). Now - to your question of performance, I don't know if converting it to numbers would be faster or not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746980">7</a> by Ahmed Kotb
		posted on 8/23/2013 at 11:16 PM
		</div>
		<div class="comment_text"><p>I have noticed that storing date as a key converts it to a string, and generally as far as i know working with numbers is faster than strings (at least it will save storage), so we can store the epoch time (date.getTime()) and use the index bound functions on that number...</p><p>any way, this is just a performance thing, thanks again for the tutorial</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746985">8</a> by Raymond Camden
		posted on 8/23/2013 at 11:29 PM
		</div>
		<div class="comment_text"><p>No problem, and thanks for commenting.</p></div>
	</div>
</div>
		