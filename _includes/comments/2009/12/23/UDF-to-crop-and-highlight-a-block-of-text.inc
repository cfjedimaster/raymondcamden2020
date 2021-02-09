
<div class="comment" id="c_1713720801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720801">1</a> by shag
		posted on 12/24/2009 at 3:16 AM
		</div>
		<div class="comment_text"><p>just curious, why wouldn't you use one of the many jquery plugins out there to do this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720812">2</a> by Chuck Savage
		posted on 12/24/2009 at 3:19 AM
		</div>
		<div class="comment_text"><p>I'd say you should go with the two parts to begin and end of markup, for a couple of reasons.  You have hard coded in the &gt; to determine the end of the first tag, then you couldn't use this in say you WIKI where you use '''bold statement''' for bold.  Also, with two you could add colors or any other markup you wanted around the text, make it blink, whatever.</p><p>Otherwise cool idea.</p><p>ps I think your wiki bold is three ', it may be 2, one is italics other is bold... I forget.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720820">3</a> by Raymond Camden
		posted on 12/24/2009 at 3:22 AM
		</div>
		<div class="comment_text"><p>@shag: On a page with a lot of text, I'd rather do the cutting client side. As it stands, the initial string could be pretty large, multiply that by 10 results per page, and it's a lot of stuff to go back and forth. :) That being said, I _did_ think about also writing a jQuery version just to see how difficult it would be.</p><p>@chuck: Yeah, good point there.</p></div>
	</div>
</div>
		