
<div class="comment" id="c_1713722071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722071">1</a> by Mike Collins
		posted on 4/11/2011 at 5:02 PM
		</div>
		<div class="comment_text"><p>This works great, but does not work with XFA pdfs.  So if you created the pdf via LC Designer you will need to find another way, or transform them if you own LC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722053">2</a> by Mike Collins
		posted on 4/12/2011 at 5:01 PM
		</div>
		<div class="comment_text"><p>Commented to soon,  <br>&lt;cfpdf action="write" source="pdetail_static.pdf" destination="pdetail_flat.pdf" flatten="yes" overwrite="true"&gt;</p><p>However - I also needed to save the PDF from inside LC Designer as a PDF Static and not dynamic.</p><p>Check out this doc for more on the difference:<br><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2Flivecycle%2F8.2%2Fstatic_dynamic_diffs.pdf%3A6fRnFODdpD94KFUP_Ni_wtlQV6E&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/livecycle/8.2/static_dynamic_diffs.pdf">http://help.adobe.com/en_US...</a></p><p>I am now also getting a popup when I opened the PDF telling me a need a newer version of Acrobat.  Not sure how to get around that one yet.</p><p>Also check out <a href="http://disq.us/url?url=http%3A%2F%2Fold.nabble.com%2FCFPDF-Merge-Page-numbers-tt30125132.html%3AfmKCZqCyBRqh-g6xZEFFBgJru4s&amp;cuid=3321886" rel="nofollow noopener" title="http://old.nabble.com/CFPDF-Merge-Page-numbers-tt30125132.html">http://old.nabble.com/CFPDF...</a></p><p>for a workaround for page numbering after a merge.  Fix is due for CF10.<br>Using the flatten prior to the merge works!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722073">3</a> by Raymond Camden
		posted on 4/12/2011 at 5:03 PM
		</div>
		<div class="comment_text"><p>Thanks for the updates Mike!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722072">4</a> by Reuben Brown
		posted on 4/15/2011 at 6:26 PM
		</div>
		<div class="comment_text"><p>Ray - Great work on putting these guides together for PDF creation and manipulation.  It helped me get a project working with a full ToC and nested bookmarks.  I so wish that ACF had a create ToC function for CFPDF, or even an option when merging documents to create it.  Maybe in the next version?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722077">5</a> by Raymond Camden
		posted on 4/19/2011 at 3:15 PM
		</div>
		<div class="comment_text"><p>@Reuben: Remember you can always make a request like this here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23%3A1a92kAPX9m5k_dh7XG1xD-Z5zww&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#">http://cfbugs.adobe.com/cfb...</a></p><p>No guarantee Adobe will add it - but you should at least request it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722075">6</a> by Reuben Brown
		posted on 4/19/2011 at 5:19 PM
		</div>
		<div class="comment_text"><p>Maybe I should help the Railo and OpenBD guys implement it in their CFPDF implementations ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722076">7</a> by Michael Cummins
		posted on 11/19/2013 at 11:12 PM
		</div>
		<div class="comment_text"><p>Some PDFs I download open the bookmark toolbar by default, while the PDFs I create in ColdFusion do not.  Is there a way to force open the bookmark toolbar when I create my PDF from ColdFusion?  It's apparently a property of the document.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722074">8</a> by Raymond Camden
		posted on 11/20/2013 at 1:54 AM
		</div>
		<div class="comment_text"><p>Going by memory here as I'm on the road-  but I believe this can be done via DDX. There is a way to set the opening state of the PDF. Do some research into CF and DDX (I have some posts here) and you may have success.</p></div>
	</div>
</div>
		