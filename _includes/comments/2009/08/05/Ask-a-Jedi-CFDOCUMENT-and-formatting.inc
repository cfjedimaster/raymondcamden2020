
<div class="comment" id="c_1713717532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717532">1</a> by Tom Chiverton
		posted on 8/6/2009 at 2:37 PM
		</div>
		<div class="comment_text"><p>Could you use rereplace() and '\n' as the pattern, to save to weird cases for different operating systems ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717533">2</a> by Raymond Camden
		posted on 8/6/2009 at 3:21 PM
		</div>
		<div class="comment_text"><p>This UDF _should_ work well cross-OS, at least as far as I know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717536">3</a> by Gary Fenton
		posted on 8/6/2009 at 4:45 PM
		</div>
		<div class="comment_text"><p>What if the user types in a few paragraphs of text and we need to text-align:justify it so it looks neat and tidy in the PDF? How can that be done with ColdFusion 7, 8 or 9? &gt;:-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717538">4</a> by Raymond Camden
		posted on 8/6/2009 at 4:59 PM
		</div>
		<div class="comment_text"><p>No comment. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717534">5</a> by Danny
		posted on 10/27/2009 at 10:20 PM
		</div>
		<div class="comment_text"><p>I'd really like to see a CFDocument and Styling article.</p><p>I ran an into a nasty bug with using font-family. It tries the first family in the list and goes no further. If you happen to not have that font installed, but you do have the second font available, you still get the wrong output.</p><p>How many other oddities are there like this with cfdocument?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717535">6</a> by Danny
		posted on 10/27/2009 at 10:23 PM
		</div>
		<div class="comment_text"><p>Oh, and font-family names are case-sensitive (on linux at least). So that font-family: Helvetica, Arial ... example you see in every font-family example on the internet doesn't work in cfdocument. It must be helvetica, arial ....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717537">7</a> by JT
		posted on 10/6/2011 at 2:57 AM
		</div>
		<div class="comment_text"><p>The submitted text needs to be run through the 'HTMLEditFormat' function as well, lest HTML entered is rendered in the PDF output.</p></div>
	</div>
</div>
		