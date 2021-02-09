
<div class="comment" id="c_1713717013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717013">1</a> by James Allen
		posted on 7/15/2009 at 4:18 PM
		</div>
		<div class="comment_text"><p>Thanks for posting this Ray. I don't know if you remember but we had a brief discussion over Twitter about the image resizing problems I was getting in my app. CF8 would fail to resize certain JPG's and it appeared to be related to DPI. I.E a certain 96DPI image wouldn't resize but if it was changed to 300DPI it would.. Very weird.</p><p>Anyway, I don't know if this particular patch will fix my issue but it's worth a try.</p><p>BTW, I did find a way around it which I was thinking of implementing. The fix is to first convert the JPG to a BMP and then resize to a new JPG.</p><p>Another technique to consider if people are getting image resizing issues working on JPG's.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717014">2</a> by Benoit HEDIARD
		posted on 7/15/2009 at 4:55 PM
		</div>
		<div class="comment_text"><p>I confirm that most of cfimage resize issues can be solved by writing the JPG to BMP and then working on the BMP version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717015">3</a> by Steve Caldwell
		posted on 7/15/2009 at 5:13 PM
		</div>
		<div class="comment_text"><p>Thanks for posting this Ray. Your blog post is now the ONLY google result for this error message+cfimage.</p><p>It looks like CF9 uses the metadata-extractor-2.4.0-beta-1.jar, whereas CF8 used metadata-extractor-2.2.2.jar.</p><p>The fix called for metadata-extractor-2.3.1.jar, which I did, but maybe updating to the 2.4.0 beta is best, to avoid any other problems...since the folks at Adobe saw it stable enough to include it in CF9.</p><p>IMO, .bmp files are terrible for web use...hope this saves you from having to convert to that clunky format.</p><p>I never realized how much data is stored "behind the scenes" on a digital photo! Better stick to film for those less-than-public photos...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717016">4</a> by James Allen
		posted on 7/15/2009 at 5:25 PM
		</div>
		<div class="comment_text"><p>@Steve,<br>The bmp is only used prior to resizing to the final jpg format. It is then deleted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717017">5</a> by Steve Caldwell
		posted on 7/15/2009 at 5:27 PM
		</div>
		<div class="comment_text"><p>@James,<br>Oh ok. that makes sense...<br>Well maybe this will save you a step and half second of processing time :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717020">6</a> by James Allen
		posted on 7/15/2009 at 5:30 PM
		</div>
		<div class="comment_text"><p>@Steve,</p><p>Ah defo.. I'm hoping the fix you found will be the solution to my issues. The only reason I'm not sure is that when I got resize problems I wasn't getting any errors.</p><p>I will upgrade the extractor just for good measure though and see if the problem reoccurs before having to recode my image resizing component.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717021">7</a> by Russ
		posted on 7/15/2009 at 5:46 PM
		</div>
		<div class="comment_text"><p>For awhile I've had cfimage issues with uploading a JPG, resizing it, then re-saving it with the same name.</p><p>The fix I've been using is to upload the image to a junk folder, re-size it and save it as a new image in the actual folder, then delete the original. For some reason this works.</p><p>It seemed to be happening on all of our cfimage JPG uploads (obviously, re-using code where possible).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717019">8</a> by Daniel Budde
		posted on 7/21/2009 at 9:35 PM
		</div>
		<div class="comment_text"><p>@James &amp; Ray</p><p>Ray, when I had that issue with certain images taking an unearthly amount of time to resize, I was ultimately able to accomplish the same fix as James.  I have an Image Gallery that I create thumbnails for, so I first create a BMP version of the image and then derive my thumbnail from that.  Took my 75 second conversion time on some of these images down to 1 or 2 seconds.</p></div>
	</div>
</div>
		