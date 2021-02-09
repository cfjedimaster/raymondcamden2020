
<div class="comment" id="c_1713614999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614999">1</a> by Daniel D
		posted on 10/3/2003 at 2:17 AM
		</div>
		<div class="comment_text"><p>Usual when you see numbers roll over like this it is because the they are using a signed integer.  With a signed interger the last bit is used to hold the sign. And when that bit gets flipped by an overflow that is not caught then then the number wraps back around to being neg.  Signed 4 bit int 0 value could be 1000.  1 would be 1001 and -1 would be 0111. 7 would be 1111 and -7 would be 0000.  So when you add 1 to 7 and the addition is done by adding 1 to 1111 you get 0000 or -8.  This example should give you and understanding of why this happens.  The code being used does not have a overflow check in it for max int.  It has been to long since I have done any C programming to remember if this is default behavior for most C compilers or not.  I know that it is default if you are doing strait binary bit minipulation on most compilers.  There is a similar bug in MX (not sure about 6.1) where the get tickcount loops to be a neg number when it hits max int.  CF4.5sp2 returns a "string" that looks like a number but is above CF's max int so you cannot do math on it.  Oh the fun you can have with binary.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614997">2</a> by PaulH
		posted on 10/3/2003 at 2:38 AM
		</div>
		<div class="comment_text"><p>yes, its there in 6.1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614995">3</a> by ???
		posted on 10/27/2003 at 8:41 AM
		</div>
		<div class="comment_text"><p>????????</p><p>?????</p></div>
	</div>
</div>
		