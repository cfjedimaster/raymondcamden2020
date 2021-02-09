
<div class="comment" id="c_1713673297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673297">1</a> by Shane Zehnder
		posted on 10/13/2007 at 4:31 PM
		</div>
		<div class="comment_text"><p>Sweet.  I will finally be able to use a recent pic instead of my gravatar image I changed months ago and it never got refreshed.</p><p>Look like you have been pretty darn busy Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673285">2</a> by Emmet
		posted on 10/13/2007 at 10:50 PM
		</div>
		<div class="comment_text"><p>Woops....</p><p>In admin_style.css around line 299 just add "z-index: 1;" to the  .top_input_misc class. Without the quotes of course.</p><p>That will solve the filter field issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673295">3</a> by Stephen Walker
		posted on 10/15/2007 at 6:27 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Using IE7, I cannot login to the admin area. Not getting any errors.  Firefox appears to be working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673298">4</a> by Raymond Camden
		posted on 10/15/2007 at 6:55 AM
		</div>
		<div class="comment_text"><p>That's odd. I wasn't able to replicate it. Try removing the style sheet (just rename it). Does that help?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673300">5</a> by Emmet
		posted on 10/15/2007 at 7:16 AM
		</div>
		<div class="comment_text"><p>It submits.  It just doesn't log in under IE.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673288">6</a> by Raymond Camden
		posted on 10/15/2007 at 3:16 PM
		</div>
		<div class="comment_text"><p>Now that is odd - I'll have to check the form fields. I remember checking with IE - I swear.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673291">7</a> by Raymond Camden
		posted on 10/15/2007 at 3:17 PM
		</div>
		<div class="comment_text"><p>Well crap on me. It isn't working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673292">8</a> by Raymond Camden
		posted on 10/15/2007 at 3:19 PM
		</div>
		<div class="comment_text"><p>Stupid IE. Change the logon line in Application.cfm to this:</p><p>	&lt;cfif isDefined("form.logon") or isDefined("form.logon.x")&gt;</p><p>This - along with the filter CSS fix, will be pushed today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673293">9</a> by Stephen Walker
		posted on 10/15/2007 at 6:03 PM
		</div>
		<div class="comment_text"><p>Thanks Ray.  Works great now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673294">10</a> by Raymond Camden
		posted on 10/15/2007 at 7:01 PM
		</div>
		<div class="comment_text"><p>Both fixes updated in SVN, and in core download. Galleon 2.001 is now released. Thanks Emmet!</p></div>
	</div>
</div>
		