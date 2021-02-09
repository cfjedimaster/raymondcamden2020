
<div class="comment" id="c_1713650169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650169">1</a> by Michael White
		posted on 2/15/2006 at 8:11 PM
		</div>
		<div class="comment_text"><p>good cookbook entry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650192">2</a> by Raymond Camden
		posted on 2/15/2006 at 8:23 PM
		</div>
		<div class="comment_text"><p>Maybe so - although I'd probably make it more general. "How can I reorder a database query?"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650184">3</a> by todd
		posted on 2/15/2006 at 9:29 PM
		</div>
		<div class="comment_text"><p>maybe another cookbook post would be a general description on the MANY different tags that return a query object (like cfdirectory, etc) - when i was a noob, i didn't quite understand the concept of anything other than the results of a cfquery being a query object...</p><p>or is this already on the cookbook?  don't remember and too lazy to go check... i swear i _have_ seen a post like this recently somewhere...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650190">4</a> by Gavy
		posted on 12/13/2007 at 11:45 AM
		</div>
		<div class="comment_text"><p>i tried it using various ways but encounter with with error:<br>The error occured when i tried something like this:</p><p>SELECT date as pdate, subject, messagenumber  <br>FROM qGetMessages <br>ORDER BY pdate DESC</p><p>and tied like this also:</p><p>SELECT qgTemessages.*,<a href="http://disq.us/url?url=http%3A%2F%2FqGetmessages.date%3Am2gku3kEIIfeVczW-RSew_z3e-s&amp;cuid=3321886" rel="nofollow noopener" title="qGetmessages.date">qGetmessages.date</a> as pdate  <br>FROM qGetMessages <br>ORDER BY pdate DESC</p><p>Error Executing Database Query. <br>Query Of Queries syntax error.<br>Encountered "date. Incorrect Select List, Incorrect select column,</p><p>my query was:</p><p>SELECT *  <br>FROM qGetMessages <br>ORDER BY date DESC</p><p>with the above once error was:</p><p>Query Of Queries syntax error.<br>Encountered "date. Incorrect ORDER BY column reference [date].<br>Only simple column reference, alias name, and integer column id are allowed. <br>Example: You can use alias to refer to a complex expression: <br>SELECT (a+b)/2 as x FROM T ORDER BY x</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650193">5</a> by Raymond Camden
		posted on 12/13/2007 at 4:58 PM
		</div>
		<div class="comment_text"><p>Escape it. Use [date].</p></div>
	</div>
</div>
		