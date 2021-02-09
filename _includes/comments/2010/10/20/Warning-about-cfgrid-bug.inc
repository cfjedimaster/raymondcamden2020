
<div class="comment" id="c_1713727023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727023">1</a> by Ahsan
		posted on 10/20/2010 at 6:10 PM
		</div>
		<div class="comment_text"><p>This happens because cfgrid which is inside cffrom uses aynchronous call ; internally using flash remoting. Depending on the frequency of click or edite or delete you are expected to see varying result because data may still be on the netowork pipeline.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727028">2</a> by Raymond Camden
		posted on 10/20/2010 at 6:14 PM
		</div>
		<div class="comment_text"><p>I don't believe you are right. As far as I know it isn't doing any posts at all to the server, not till I hit submit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727031">3</a> by Raymond Camden
		posted on 10/20/2010 at 6:44 PM
		</div>
		<div class="comment_text"><p>Just tested with Charles and there were no Flash Remoting requests done in the background. To be clear, this is the Ajax grid, not the older Flash Form cfgrid.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727030">4</a> by Ahsan
		posted on 10/20/2010 at 6:53 PM
		</div>
		<div class="comment_text"><p>You got me if you are using Ajax grid :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727032">5</a> by JP
		posted on 10/20/2010 at 10:23 PM
		</div>
		<div class="comment_text"><p>There's also a bug in older versions of safari... trapping for double click events doesn't work. I haven't found a work-around yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727027">6</a> by Dale Fraser
		posted on 10/21/2010 at 6:08 AM
		</div>
		<div class="comment_text"><p>Can't tell you how disapointed with CGGRID we are, simple stuff just doesn't even with CF9.</p><p>Try doing a right aligned column that sorts numerically, one of the most common things you might do in a grid.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727025">7</a> by Raymond Camden
		posted on 10/21/2010 at 3:53 PM
		</div>
		<div class="comment_text"><p>That's unfortunate. All I can recommend is jqGrid again - but I tend to go jQuery in almost every case. ;)</p></div>
	</div>
</div>
		