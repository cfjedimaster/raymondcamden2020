
<div class="comment" id="c_1713614562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614562">1</a> by Rob Brooks-Bilson
		posted on 5/16/2003 at 5:27 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Back when CF 5 was out, I had a fairly lengthy discussion with some of the Macromedia engineers regarding recursionin UDFs.  At the time, they told me that the max CF 5 could handle was ~800 levels before the stack overflowed.  Depending on the type of operation you are going to do, this may or may not be a problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614560">2</a> by Brad Howerter
		posted on 5/16/2003 at 7:45 PM
		</div>
		<div class="comment_text"><p>I''ve used recursion in UDF ever since they became available.  I''ve found it to work just fine (I don''t think I''ve every gone over 100 levels of recursion, though).  It helps to keep your variables local with the var command if at all possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614558">3</a> by Sean Corfield
		posted on 5/16/2003 at 11:42 PM
		</div>
		<div class="comment_text"><p>Recursion is often the easiest and most elegant way to express a problem solution. I''ve worked in languages that have no assignment / side-effects and they rely on recursion as a substitute for iterating over lists. As with all implementation techniques, if you don''t know what you''re doing, you can end up with a runaway program!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614566">4</a> by Matt Knight
		posted on 5/20/2003 at 7:34 PM
		</div>
		<div class="comment_text"><p>I had a similar problem that I solved with a GREAT SQL query. In ORALCE 8i&lt;, not sure about SQL Server.</p><p>SELCT parentID, childID, level<br>FROM table<br>CONNECT BY parentID = PRIOR childID<br>START WITH parentID = 0</p><p>this SQL block retuns a tree structure with a built-in column called "level" for the level on the tree (starts with 1).</p><p>This eliminated me doing recursion in CF and puts all the work in the DB where it belongs.</p><p>See it in work at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.dresser.com%3A-qTnXh7x2xXFSA6JSbM_mQ6LsGE&amp;cuid=3321886" rel="nofollow noopener" title="www.dresser.com">www.dresser.com</a> (menu applet) on the left hand navigation.</p><p>Thanks</p></div>
	</div>
</div>
		