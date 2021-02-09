
<div class="comment" id="c_1713614660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614660">1</a> by Darryl Lyons
		posted on 6/18/2003 at 1:06 AM
		</div>
		<div class="comment_text"><p>Yeah, I''ve been using the N syntax for quite some time now, after myself finding out the same information. It doesn''t make much sense to me either why you would need the N..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614664">2</a> by Jon
		posted on 6/18/2003 at 1:41 AM
		</div>
		<div class="comment_text"><p>Its a guess, but I think if you pass SQL a unicode string ( be it UTF-8 or otherwise ) it will convert it to its internal unicode format ( presumably UTF-16 ). If you pass it some crazy string in another encoding ( eg: SHIFT_JIS ) then it has no way of knowing what encoding it is, and so should leave it alone ( unicode encoding it will cause issues ). The N just tells it whether or not it can convert the string.</p><p>Personally, I want to be able to just set everything to UTF-8 and continue on my merry way.</p><p>I think if you just pass UTF-8 strings to SQL everything would be alright ( except for string functions in SQL ).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614661">3</a> by paulH
		posted on 6/18/2003 at 4:14 AM
		</div>
		<div class="comment_text"><p>jon''s hit it though to nit pick, sql server like java, etc. use ucs-2 internally. utf-16 is "extended" ucs-2.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614662">4</a> by Aaron West
		posted on 6/18/2003 at 8:57 PM
		</div>
		<div class="comment_text"><p>I wrote a lengthy blog on this subject recently.  It''s the third most recent entry as of today.  You can use this link..</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.trajiklyhip.com%2Fblog%2Farchives%2F00000042.htm%3AMhNtU4vwHoVqltF5UbbEoZ-1tw8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.trajiklyhip.com/blog/archives/00000042.htm">http://www.trajiklyhip.com/...</a></p><p>..to view the blog but beware you''ll lose the site navigation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614663">5</a> by Tom Dyson
		posted on 6/19/2003 at 6:39 PM
		</div>
		<div class="comment_text"><p>Try PostgreSQL (<a href="http://disq.us/url?url=http%3A%2F%2Fpostgresql.org%3As0eljxS6hvUr3MCMRh08pTD0bg0&amp;cuid=3321886" rel="nofollow noopener" title="postgresql.org">postgresql.org</a>): it''s free, fast, UNICODE-compliant, and doesn''t need any funny N syntax.</p></div>
	</div>
</div>
		