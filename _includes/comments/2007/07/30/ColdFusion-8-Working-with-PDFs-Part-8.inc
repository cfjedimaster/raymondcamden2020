
<div class="comment" id="c_1713669383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669383">1</a> by duncan
		posted on 7/31/2007 at 12:32 PM
		</div>
		<div class="comment_text"><p>This is a very neat feature.  If you don't pass in the page attribute, does it create thumbnails of all the pages in the PDF?  I think the imagePrefix attribute could be essential where you're doing this for many pdfs; you don't want to create a new folder for each pdf (or do you?), so you could use the original filename for the prefix to differentiate them all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669393">2</a> by Raymond Camden
		posted on 7/31/2007 at 4:27 PM
		</div>
		<div class="comment_text"><p>Yes, if you don't specify pages, it does them all. If I were doing thumbnails for random PDFs, imagePrefix could be used to help keep them separate. But don't forget that if you keep it blank and use a source that points to a filename, CFPDF will use the name for a prefix.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669391">3</a> by duncan
		posted on 7/31/2007 at 6:31 PM
		</div>
		<div class="comment_text"><p>aha, that's handy.  I hadn't noticed the line "unless your source is a PDF file. In that case the filename is used instead."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669384">4</a> by Raymond Camden
		posted on 7/31/2007 at 10:48 PM
		</div>
		<div class="comment_text"><p>I have to say I'm surprised no one commented on my Top 10 List. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669388">5</a> by PP
		posted on 9/28/2007 at 1:48 PM
		</div>
		<div class="comment_text"><p>I have some question<br>May you can help me<br>1 auto print pdf by user don't click printer icon<br>2 how to use parmision for print copy (i try permision auttibue some time but don't work)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669385">6</a> by Raymond Camden
		posted on 9/28/2007 at 6:56 PM
		</div>
		<div class="comment_text"><p>1) As far as I know, you can't do this. You can't force something to print on the client's machine. You _can_ use JS to show the Print dialog, but it won't auto print. I don't think the JS trick will work for a PDF though.</p><p>2) Yes, you can use CFPDF to set permissions on a PDF, including the ability to print.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669390">7</a> by duncan
		posted on 9/28/2007 at 7:17 PM
		</div>
		<div class="comment_text"><p>The first method can be done using javascript in Acrobat.  Here's an example of how to do it silently using itext, so the user doesn't see the print dialogue:<br><a href="http://disq.us/url?url=http%3A%2F%2Fprinceoflightning.blogspot.com%2F2006%2F01%2Fsilent-print-pdf-file-in-acrobat.html%3Au3vlM0rxW5govCq96EKXNZm_aII&amp;cuid=3321886" rel="nofollow noopener" title="http://princeoflightning.blogspot.com/2006/01/silent-print-pdf-file-in-acrobat.html">http://princeoflightning.bl...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669386">8</a> by Raymond Camden
		posted on 9/28/2007 at 7:31 PM
		</div>
		<div class="comment_text"><p>That's pretty interesting. I'm trying now to see if I can do this JS in cfdocument. So far I've not been successful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669387">9</a> by Michael White
		posted on 10/1/2007 at 7:49 PM
		</div>
		<div class="comment_text"><p>Ray, have you done anything with PDF forms yet? You hinted at it in the beginning of the entry... I'm only now learning my way around the new PDF features and I have to learn how to create PDF forms, convert html to PDF forms and populate and read data from existing PDF forms.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669389">10</a> by Raymond Camden
		posted on 10/1/2007 at 11:30 PM
		</div>
		<div class="comment_text"><p>Not yet. The books kinda kicked my butt. Now that they are done I'm hoping to get more articles like this out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669392">11</a> by Mike
		posted on 3/18/2008 at 4:23 AM
		</div>
		<div class="comment_text"><p>Thanks for posting the new PDF features in Coldfusion 8. I've learned a lot. If I may, I have a dumb question that I would like to ask because I can't find any help with this...To view the PDF you create with the CFPDF tag does Coldfusion forms have a control available for viewing or will Acrobat Reader always execute when the PDF is called?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669394">12</a> by Raymond Camden
		posted on 3/18/2008 at 8:18 PM
		</div>
		<div class="comment_text"><p>If I read you right, my understanding is that you can't control what plugin is used - the browser (user) controls that. You can give a hint by using cfcontent, but at the end of the day, the end user decides what to do with your binary data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669397">13</a> by Michael Jones
		posted on 10/1/2008 at 1:45 AM
		</div>
		<div class="comment_text"><p>"Interaces"???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669395">14</a> by Collectonian
		posted on 3/13/2009 at 7:58 PM
		</div>
		<div class="comment_text"><p>I'm trying to generate a thumbnail of the first page of a PDF using the CFPDF tag, however the thumbnails all come up blank except for a gray line. The code isn't throwing any errors and the PDFs do have content. Any ideas? (this is on ColdFusion 8 on Linux, if that might be the problem)</p><p>&lt;cfpdf action = "thumbnail" <br>	source="#application.basedirectory#/pdfs/#ArticleDetails.FileName#"<br>	destination = "#application.basedirectory#/thumbnails/"<br>	format = "jpeg"<br>	imagePrefix = "thumbnail_#whicharticle#"<br>	overwrite = "yes"<br>	pages = "1" &gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669396">15</a> by Raymond Camden
		posted on 3/14/2009 at 2:39 AM
		</div>
		<div class="comment_text"><p>Hmm. If you get rid of pages=1 and do all the pages of the pdf, does it show anything different?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669398">16</a> by Collectonian
		posted on 3/14/2009 at 4:29 AM
		</div>
		<div class="comment_text"><p>Nope. The remaining thumbnails generated are also all blank except for a small grey line at the bottom (which isn't in the PDFs).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669399">17</a> by Raymond Camden
		posted on 3/15/2009 at 5:01 AM
		</div>
		<div class="comment_text"><p>Sorrr tyen - you got me. Make sure you patched up I guess.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669411">18</a> by John Manoah
		posted on 4/2/2009 at 11:46 AM
		</div>
		<div class="comment_text"><p>Great post Ray. It was very useful.</p><p>In the current application I'm creating, I tried using cfdocument to create a PDF of any file type (word, ppt, excel etc). Your solution seems to work only for PDFs and URLs. The thumbnail generated for images,word etc was hazy.</p><p>Do you have a solution to create thumbnails for any file format?</p><p>thanks in advance!<br>John</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669405">19</a> by Raymond Camden
		posted on 4/2/2009 at 3:19 PM
		</div>
		<div class="comment_text"><p>Nope, no solution for other formats. I mean I don't know of any - I'm sure they exist.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669414">20</a> by Candice
		posted on 5/7/2009 at 10:23 PM
		</div>
		<div class="comment_text"><p>Thanks for the post Ray. Is there a way to specify the UNIX permissions (mode?) of the image that gets created?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669406">21</a> by Raymond Camden
		posted on 5/8/2009 at 2:12 AM
		</div>
		<div class="comment_text"><p>fileSetAccessMode?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669403">22</a> by Dominic O&amp;aposConnor
		posted on 6/29/2009 at 10:12 PM
		</div>
		<div class="comment_text"><p>Has anyone had any issue with image sizes using action="thumbnail"?  If I set scale="100" the image I get back is about 75% of the PDF size.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669412">23</a> by Terry
		posted on 9/2/2009 at 11:35 PM
		</div>
		<div class="comment_text"><p>Just something else to put throw out there.</p><p>I started messing with pdf and cfdocument and came across these blogs.  Awesome job Ray.</p><p>I noticed that when I started using cfpdf and throwing the output threw cfcontent that the saveAsName attribute in cfdocument becomes worthless and that instead had to revert back to putting the name back to cfheader.</p><p>Btw, miss the meetings up at langley with the user group.  Glad to see you are making it big time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669415">24</a> by Geoffrey C Barth
		posted on 10/22/2009 at 10:12 PM
		</div>
		<div class="comment_text"><p>Anyone have any trouble taking a PDF file and using acrobat 9 standard to reduce file size?  When doing so this prevents cfpdf from reading the image when using action "thumbnail".  I kept doing this until reduce (make compaible with) ver 4 and they CFPDF would then again beable to return an image.  Similar things happen with pages that have been rotated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669417">25</a> by Mike Demahy
		posted on 4/23/2010 at 11:14 PM
		</div>
		<div class="comment_text"><p>I want ot merge a pdf file and change the size from a custom size to legal. any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669407">26</a> by Raymond Camden
		posted on 4/24/2010 at 12:46 AM
		</div>
		<div class="comment_text"><p>I haven't tested this, but what if you make an empty/virgin PDF in the right size, and then merge your other ones into it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669409">27</a> by Mike Demahy
		posted on 4/24/2010 at 1:30 AM
		</div>
		<div class="comment_text"><p>I am merging a receipt that is 5.25 x 6.30 with several other pages that are all legal.  the receipt is added as another page with the original page size</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669408">28</a> by Raymond Camden
		posted on 4/24/2010 at 1:31 AM
		</div>
		<div class="comment_text"><p>How about the transform action? With hscale/vscale?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669410">29</a> by Sam
		posted on 5/14/2010 at 8:39 AM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>Love the PDF articles... Thanks!</p><p>Now, I was wondering if there is any way to make higher resolution JPG images from a PDF? I am using scale="100" and  resolution="high" but the images are just not quite high enough rez for what I need.</p><p>Is it possible?</p><p>Also, what IS the file size going to be at scale="100" in pixles... will it always be the same max width or height no matter what PDF you use? Or is it relative to the pagesize of the PDF file you use?</p><p>One more thing... I am seeing some pretty serious color swings when using CMYK PDF files. Is the only way around this to create an RGB version of the PDF file?</p><p>Thanks again mate!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669413">30</a> by Raymond Camden
		posted on 5/14/2010 at 3:11 PM
		</div>
		<div class="comment_text"><p>As far as I know, scale=100/res=high is as good as your going to get.</p><p>Size: Honestly don't quite get you there. I believe it is the same size as the page.</p><p>Color: Definitely no idea on that one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669420">31</a> by Ranga
		posted on 5/20/2010 at 2:45 AM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>I have the same problem as Sam. The thumbnails created from CMYK PDF files are very dark and very contrasty. There is no problem when I create thumbnails of RGB PDF file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669416">32</a> by Ron Rattie
		posted on 12/6/2011 at 6:38 AM
		</div>
		<div class="comment_text"><p>Just thought I'd add what I did with this.</p><p>Using what is above, I put:</p><p> &lt;cfpdf action="thumbnail" source="orgchart"  resolution="high" scale="100"  overwrite="true" format="png" hires="yes"&gt;<br> &lt;cflocation url="thumbnails/slide_image.cfm" addtoken="no"&gt;</p><p>at the bottom of the cfdocument page and for slide_image.cfm<br>it's just a simple cfm page with:</p><p>&lt;body&gt;<br>&lt;img src="thumbnail_page_1.png" alt="this is the png file, if you can't see it your browser doesn't support png files."  /&gt;<br>&lt;/body&gt;</p><p>So, a link on a page takes you to the page that generates the PDF, then the thumbnail and then immediately takes you to another page with the image. This is so that users could have a high quality image of the dynamic PDF in question to use in a PowerPoint slide show.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669419">33</a> by Raymond Camden
		posted on 12/6/2011 at 6:58 AM
		</div>
		<div class="comment_text"><p>You probably want to add some form of caching to that. PDF (and file ops in general) are a bit slow.</p></div>
	</div>
</div>
		