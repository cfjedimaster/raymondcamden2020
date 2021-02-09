
<div class="comment" id="c_1713614627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614627">1</a> by Hilary Bridel
		posted on 6/7/2003 at 3:57 PM
		</div>
		<div class="comment_text"><p>Ray,<br>In the cfc you refer to a function named "getDate()"</p><p>Where does this function/method reside?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614624">2</a> by Raymond Camden
		posted on 6/7/2003 at 4:33 PM
		</div>
		<div class="comment_text"><p>It''s a SQL function, not a CF function, notice there is no # around it. getDate() is the same as CF''s now() function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614628">3</a> by Hilary Bridel
		posted on 6/7/2003 at 5:15 PM
		</div>
		<div class="comment_text"><p>Ok, so by the same token, things like dateDiff() and Day() are SQL functions.</p><p>What then would be the most efficient way to handle using an MS Access db (or any other data source) that does not support some of these SQL functions?</p><p>I have a child cfc that inherits from your cfc for additional methods - would It be wise to overwrite the base methods from the child, bearing in mind that I would like to easily include any changes you make to the base cfc?</p><p>Also, I see that blog.sql has been modified. Have you changed the structure of the database since you first released the code?</p><p>Appreciate your help Ray ....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614625">4</a> by Raymond Camden
		posted on 6/8/2003 at 4:47 AM
		</div>
		<div class="comment_text"><p>Access has it''s own functions. For example, getDate() in Access is the same as CF, now(). Access also has a datediff function... and I think it''s called dateDiff. The best thing to do is just search on google.</p><p>I don''t _believe_ that I''ve modified the tables... actually, I did once, but I know that when I did it,  I updated the sql file in the zip.</p></div>
	</div>
</div>
		