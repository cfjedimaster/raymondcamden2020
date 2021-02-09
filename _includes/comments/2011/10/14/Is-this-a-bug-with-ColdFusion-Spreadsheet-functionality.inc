
<div class="comment" id="c_1713735760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735760">1</a> by Adam Cameron
		posted on 10/16/2011 at 1:31 AM
		</div>
		<div class="comment_text"><p>Hi Ray<br>Yeah, this is a bug in spreadsheetRead(), I reckon.  It should do what it says in the docs.</p><p>To solve your problem you can use spreadsheetRemoveSheet() to ditch the sheets you don't want.</p><p>I think there's a shortfall in spreadsheetRemoveSheet(), though: spreadsheetRead() allows one to specify a sheet name or sheet number to identify the sheet to read (even though it reads all of 'em ;-).  spreadsheetRemoveSheet() only permits sheet name.  These two functions should conform in what arguments they accept, I reckon.</p><p>It you... err... raise an issue for this... I'll vote for it...</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735762">2</a> by Raymond Camden
		posted on 10/16/2011 at 3:12 PM
		</div>
		<div class="comment_text"><p>Would you believe I did not think there was a remotesheet function? Why? Because I forgot to double check my CF901 PDF. -sigh- Thanks Adam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735763">3</a> by Raymond Camden
		posted on 10/19/2011 at 6:34 PM
		</div>
		<div class="comment_text"><p>Logged: <a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D87146%3ABze0pzOCNIIuR2hjCUduKgJWeME&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=87146">http://cfbugs.adobe.com/cfb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735764">4</a> by Ken Caldwell
		posted on 10/24/2011 at 7:42 AM
		</div>
		<div class="comment_text"><p>Ray,<br>Thanks for this.  I will add my name to the bug fix.<br>The need to remove sheets has made for a bit more work.<br>As I give my users the ability to indicate which sheets are to be included, I then need to loop all the sheets to determine which ones are not included so that I can then delete those.</p><p>again, Thank you.<br>Ken</p></div>
	</div>
</div>
		