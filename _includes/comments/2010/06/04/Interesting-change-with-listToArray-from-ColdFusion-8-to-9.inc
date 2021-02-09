
<div class="comment" id="c_1713724672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724672">1</a> by Rick O
		posted on 6/5/2010 at 12:32 AM
		</div>
		<div class="comment_text"><p>Halle-frickin-lujia.  I, for one, welcome our new finally-working-right-screw-compatibility listToArray overlords.</p><p>I rewrote my own listToArray workaround for more projects than I want to think about.  I have yet to work on a project where the old "silently drop empty elements" mis-feature would have been useful.  If some later commenter would care to enlighten me as to why the old way was A Good Thing, I'd be happy to listen.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724673">2</a> by Adam Cameron
		posted on 6/5/2010 at 12:36 AM
		</div>
		<div class="comment_text"><p>Interesting... I agree CF8's behaviour makes the most sense.  So CF9 should be doing the same both for the sake of "most sense" and "backwards compat".</p><p>Maybe there's a fix on the horizon though... I see there's an issue covering this in the bug tracker - <a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D82194%3AWshUE-Rru2erkTlrjvvwqTzMSqg&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=82194">http://cfbugs.adobe.com/cfb...</a> - which is marked as verified &amp; closed.  Whilst there's no way to interpret what "closed" means, hopefully it's closed because it's been fixed in 9.0.1, which - according to the Adobe bods who were in London for Scotch on the Rocks recently - is due out in the latter part of this year.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724675">3</a> by Raymond Camden
		posted on 6/5/2010 at 12:51 AM
		</div>
		<div class="comment_text"><p>I can confirm - fixed in 901. (Just asked permission to 'leak' this so please don't consider it a NDA breach. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724674">4</a> by Rick O
		posted on 6/5/2010 at 12:57 AM
		</div>
		<div class="comment_text"><p>Oh.  Ack.  Arg.  I misread your post.  I retract my celebration.</p><p>I didn't realize they'd fixed it in CF8, then reverted the fix in CF9.</p><p>sane: arrayLen(listToArray("1, ,3")) eq 3</p><p>Silently eliminating elements is scary nuts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724660">5</a> by Mihai Baboi
		posted on 6/5/2010 at 4:58 PM
		</div>
		<div class="comment_text"><p>I love the way you digg deep in the ColdFusion core and explain functions that I just take for granted. Thanks for the heads-up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724670">6</a> by Ben Riordan
		posted on 6/6/2010 at 7:11 AM
		</div>
		<div class="comment_text"><p>@Ray If you can "leak" 9.0.1 details do you have any permission to "leak" 9.0.1 release time frame? ;-D (can't hurt to ask can it?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724671">7</a> by Raymond Camden
		posted on 6/6/2010 at 7:41 PM
		</div>
		<div class="comment_text"><p>CF901 will be released on a day that ends with "y".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724676">8</a> by Ben Riordan
		posted on 6/6/2010 at 7:58 PM
		</div>
		<div class="comment_text"><p>Yes! Awesome intel. Thanks ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724678">9</a> by Ben Riordan
		posted on 6/6/2010 at 7:59 PM
		</div>
		<div class="comment_text"><p>*Ray - You get capital R.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724664">10</a> by James Edmunds
		posted on 6/6/2010 at 8:12 PM
		</div>
		<div class="comment_text"><p>A day that ends in "y"? Aw, shucks, I was hoping for tomorrow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724663">11</a> by Jeff
		posted on 6/7/2010 at 7:07 PM
		</div>
		<div class="comment_text"><p>James,</p><p>It's even better news...today ends in a Y!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724661">12</a> by Joshua Belliveau
		posted on 7/20/2010 at 5:37 AM
		</div>
		<div class="comment_text"><p>Thanks for the heads-up Ray.</p><p>FYI, you reference "includeEmptyFields" in your first paragraph and "ignoreEmptyFields" in your last.  Was that intentional?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724662">13</a> by Raymond Camden
		posted on 7/20/2010 at 5:57 AM
		</div>
		<div class="comment_text"><p>It's definitely includeEmptyFields.  Pardon the brain fart. :)</p></div>
	</div>
</div>
		