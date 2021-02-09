
<div class="comment" id="c_1714081112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081112">1</a> by John Waddell
		posted on 12/11/2013 at 11:07 PM
		</div>
		<div class="comment_text"><p>Wouldn't it be a little less code to just use the CGI Query_String?  I use this all the time...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081116">2</a> by Raymond Camden
		posted on 12/11/2013 at 11:40 PM
		</div>
		<div class="comment_text"><p>@John: Because this isn't ColdFusion. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081115">3</a> by Max Moore
		posted on 12/12/2013 at 12:30 AM
		</div>
		<div class="comment_text"><p>If they have the flexibility to edit the HTML, they could also just add the hidden input there. If they are populating any fields at load, might be easier to populate the hidden at the same time and skip trapping submit event.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081117">4</a> by Raymond Camden
		posted on 12/12/2013 at 12:34 AM
		</div>
		<div class="comment_text"><p>@Max: Even with the hidden field, they need a submit handler to capture the query string. That's just my option 1 above, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081118">5</a> by Michael Schmidt
		posted on 12/12/2013 at 2:25 AM
		</div>
		<div class="comment_text"><p>You might want to unescape the query string elements after splitting on the "=" sign.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081119">6</a> by Raymond Camden
		posted on 12/12/2013 at 3:07 AM
		</div>
		<div class="comment_text"><p>Oops, good point. Added. Editing the blog post right now but the demo is updated. Thanks Michael!</p></div>
	</div>
</div>
		