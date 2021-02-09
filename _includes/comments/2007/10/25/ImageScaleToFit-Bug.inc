
<div class="comment" id="c_1713673551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673551">1</a> by James Edmunds
		posted on 10/25/2007 at 7:00 PM
		</div>
		<div class="comment_text"><p>Ray, I filed a bug report on this a couple of days ago, and I also added comments about it in the LiveDocs.</p><p>Note also that when you specify the interpolation, you must use the relative descriptors (as detailed in the error message you cited) like "highestQuality" rather than the algorithm descriptor like "lanczos," etc. (This is also noted in the Live Docs comment I had added.)</p><p>That all being said, what an extraordinarily useful tag!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673561">2</a> by Raymond Camden
		posted on 10/25/2007 at 7:04 PM
		</div>
		<div class="comment_text"><p>Hmpth. I thought cfquickdocs used to show livedocs comments. I glanced quickly and didn't see it so I didn't bother to check the real site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673563">3</a> by Mat Evans
		posted on 10/25/2007 at 7:32 PM
		</div>
		<div class="comment_text"><p>I too have seen this happen, only a couple of days ago.  Didn't really have time to investigate it a lot, but it was very random. It happened on an image I have been manipulating for thumbs etc, but it only happened once out of many processes.</p><p>Mat</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673567">4</a> by Rupesh kumar
		posted on 10/25/2007 at 10:28 PM
		</div>
		<div class="comment_text"><p>You will get this error only when the image is an 8-bit gray image. For scaleToFit, unless specified, we always try to use lanczos algorithm, as it provides the best quality but that bombs for 8-bit gray image because of a bug in Java. The only workaround is, as you said, always use the function that takes algorithm name and set the algorithm name as 'bestquality'.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673560">5</a> by Raymond Camden
		posted on 10/25/2007 at 10:32 PM
		</div>
		<div class="comment_text"><p>Rupesh: So 1) this is a doc bug, agreed? 2) I can see why you would use the 'best' by default, but it seems like it would be better to use the algorithm that works for more images. Ie, pick the one that covers the most images and has the best quality. That's just my opinion though. Do I need to file another bug for the doc issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673565">6</a> by Rupesh kumar
		posted on 10/25/2007 at 10:38 PM
		</div>
		<div class="comment_text"><p>I did not say it is not a bug :)<br>We take care of it for 'resize' but some how we missed scaleToFit. We will fix that.<br>I don't think we need a doc bug for this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673566">7</a> by Raymond Camden
		posted on 10/25/2007 at 10:42 PM
		</div>
		<div class="comment_text"><p>How is it not a doc bug though? THe docs say the default is highestquality, not lanczos. If they mean the same thing - that is fine - but the docs should still say lanczos.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673564">8</a> by John Cranston
		posted on 8/30/2008 at 7:26 AM
		</div>
		<div class="comment_text"><p>Is there a hotfix to this yet?  I just got the error message:</p><p>For gray scale images the interpolation argument must be one of <br>NEAREST|BILINEAR|BICUBIC|HIGHESTQUALITY|HIGHQUALITY|MEDIUMQUALITY|HIGHESTPERFORMANCE|HIGHPERFORMANCE|MEDIUMPERFORMANCE</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673562">9</a> by Raymond Camden
		posted on 8/30/2008 at 6:14 PM
		</div>
		<div class="comment_text"><p>Don't know - if you are running the latest Cumulative Hot Fix and still see it, the answer would be no.</p></div>
	</div>
</div>
		