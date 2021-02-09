
<div class="comment" id="c_1713669195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669195">1</a> by Ahamad
		posted on 7/27/2007 at 4:32 PM
		</div>
		<div class="comment_text"><p>Can't we achive that using this code(get the particular page of a source pdf)</p><p>&lt;cfpdf action="merge" source="sourcefile1.pdf" pages="#n#" destination="destination.pdf"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669196">2</a> by Raymond Camden
		posted on 7/27/2007 at 5:07 PM
		</div>
		<div class="comment_text"><p>I'll test that. If so - my code is also one line, but your version wouldn't need the conversion done on the page numbers, and would allow folks to get N pages, not just one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669204">3</a> by Raymond Camden
		posted on 7/27/2007 at 5:19 PM
		</div>
		<div class="comment_text"><p>Ok I tried this - and it threw an error:</p><p>The attribute source specified in the CFPDF tag is either empty or invalid. &lt;br&gt;The error occurred on line 31.</p><p> I tried this line:</p><p>&lt;cfpdf action="merge" source="arguments.pdf" pages="#<a href="http://disq.us/url?url=http%3A%2F%2Farguments.page%3A0Fw4DOBsJ-BeUlWgf8cltSXNqNs&amp;cuid=3321886" rel="nofollow noopener" title="arguments.page">arguments.page</a>#" name="result"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669199">4</a> by Ahamad
		posted on 7/28/2007 at 6:22 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>   I have tested the below code. It works.</p><p>&lt;cfpdf action="merge" source="source1.pdf" pages="7" destination="desti1.pdf" overwrite="true"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669202">5</a> by Ahamad
		posted on 7/28/2007 at 6:23 AM
		</div>
		<div class="comment_text"><p>Please test the above code and let me know how it works for you.</p><p>Thanks,<br>-ahamad</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669205">6</a> by Raymond Camden
		posted on 7/28/2007 at 6:37 AM
		</div>
		<div class="comment_text"><p>Ah - I see the problem. You are writing to the file system. I don't want to do that. I want to return a PDF variable to the user. Then they can save/output/whatever.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669201">7</a> by Raymond Camden
		posted on 9/12/2007 at 6:35 AM
		</div>
		<div class="comment_text"><p>This is added to RIAForge:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpdfutils.riaforge.org%2F%3AetnjobrDVfRSgzz3v0CyAgjaGa8&amp;cuid=3321886" rel="nofollow noopener" title="http://pdfutils.riaforge.org/">http://pdfutils.riaforge.org/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669200">8</a> by Toby Dawes
		posted on 11/30/2007 at 9:30 PM
		</div>
		<div class="comment_text"><p>Ray, this is great!   I do have a question.  I have been running this against a 4399 page PDF (<a href="http://disq.us/url?url=http%3A%2F%2Fsenate.state.ny.us%2FSenateReports.nsf%2F6DD2F2819E02BB6185256EBD004E2D20%3Ay1Q7CppmwtWoW0iR1WpfAi1cfqQ&amp;cuid=3321886" rel="nofollow noopener" title="http://senate.state.ny.us/SenateReports.nsf/6DD2F2819E02BB6185256EBD004E2D20">http://senate.state.ny.us/S...</a><br>/B5A372B72DB18C75852572C3006068E2/$file/2007cpf.pdf?OpenElement) and I'm grabbing out page 5, for example.  When &lt;cfpdf&gt; writes this single page back the file size is about 381kb, but if I do this same thing directly in Acrobat 8, open full document and simply delete all pages but the one I want, the single page size is a measly 13kb.   What's with that?  An issue with the PDF write in CF8?   Very frustrating for the system I'm creating as this is a space issue on the server now.  Having 57mb of single PDF pages is much better than 1.6gb of single pages!</p><p>Any insight into this?   Cheers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669203">9</a> by Toby Dawes
		posted on 11/30/2007 at 9:35 PM
		</div>
		<div class="comment_text"><p>Sorry, I guess that link was too long, but try this one:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.ppinapod.us%2Fpdf%2F2007cpf.pdf%3AMGKw1v8WO5pHPDzwhTpEWLupR3I&amp;cuid=3321886" rel="nofollow noopener" title="http://www.ppinapod.us/pdf/2007cpf.pdf">http://www.ppinapod.us/pdf/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669207">10</a> by Raymond Camden
		posted on 11/30/2007 at 10:39 PM
		</div>
		<div class="comment_text"><p>No idea, Toby.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669210">11</a> by Paul
		posted on 1/10/2008 at 9:09 PM
		</div>
		<div class="comment_text"><p>Well Toby, I'm experiencing the same thing, starting with a 125-page pdf that is 777kb, each individual page created by cfpdf is 518kb.  I contacted Adobe, and they asked for PDFs to duplicate the issue.  Since my pdf contains payroll data that can't leave our company, I provided a link to your comment and PDF.  If I hear anything more I'll keep you in the loop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669211">12</a> by Greg
		posted on 3/7/2008 at 12:40 AM
		</div>
		<div class="comment_text"><p>Has anyone run into issues with unintended spaces showing up in the extracted text? Is there a way around this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669209">13</a> by Brett Bruschke
		posted on 3/19/2008 at 10:05 PM
		</div>
		<div class="comment_text"><p>Toby and Paul,</p><p>I was having similiar issues with the file size of the pdf being quite large.  A one page PDF was coming out as 483 kb.  In my document I was using a JPG for a header and a JPG for a footer by using the processddx command.  The header was 150 kb and the footer jpg was 180 kb.  The dimension of each of the jpg was somewhere around 2000 x 400.  (I was given these images by another employee), but in my img tag I was specifying the height as 150px.</p><p>I ended up reducing the size of the jpg images to just a little more than 150 px in height and changed the file type to gif (I have found from other posts that cfdocument does not like jpg files)  Both images combined are now under 30 kb.</p><p>The good news is that my pdf went from being 483 kb to 72 kb.  Not sure if you are using images in your pdfs, but I thought this might help someone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669213">14</a> by Toby Dawes
		posted on 4/5/2008 at 6:49 AM
		</div>
		<div class="comment_text"><p>Brett,</p><p>No images in the first PDF, but I am now working on a project for my local church district website.  This PDF does have some images, but even on pages that have no images I get this issue.</p><p>The new PDF that I'm having issues with is <a href="http://disq.us/url?url=http%3A%2F%2Fwww.enynewesleyan.org%2Fpdf%2Fjournal.pdf%3AtEYHMKachvp88EazrD49Vu1K6tE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.enynewesleyan.org/pdf/journal.pdf">http://www.enynewesleyan.or...</a>, which is 6.52MB - and I delete all pages but one which only has text and the PDF is still 6.52MB.  I then download this, open in Acrobat and re-saved as PDF Optimized and now the file is only 67KB - this is a HUGE difference.  This is a 133 page document, and 6.52MB for one page is just too big.</p><p>Paul,</p><p>who did you contact at Adobe?   This seems to be to be a major issue since.  Any additional help would be greatly appreciated.  Cheers!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669214">15</a> by Vinit Srivastva
		posted on 8/30/2010 at 7:54 AM
		</div>
		<div class="comment_text"><p>hello,</p><p>thanks for this blog...it helped me alot..just one question</p><p>is there any way we can use remote url of pdf for merge or thumbnail process..as it only works with local path..</p><p>any help would be appreciated..</p><p>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669218">16</a> by Raymond Camden
		posted on 8/30/2010 at 5:39 PM
		</div>
		<div class="comment_text"><p>Nope. They need to be local.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669223">17</a> by Bharath
		posted on 8/17/2014 at 1:18 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I tried the above logic, it seems to get the page correctly, but when I tried to display it using 	&lt;cfpdf action="read" name="myDoc" source="page.pdf" /&gt;	<br>&lt;cfcontent variable="#toBinary(myDoc)#" type="application/pdf" /&gt;</p><p>It gave a response with special chars(few lines given below) instead of just displaying the PDF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669224">18</a> by Raymond Camden
		posted on 8/17/2014 at 1:42 AM
		</div>
		<div class="comment_text"><p>@Bharath: I edited your comment to remove the binary content you posted. Please do not do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669227">19</a> by Raymond Camden
		posted on 8/18/2014 at 3:08 PM
		</div>
		<div class="comment_text"><p>If you save that data and open it via Finder/Explorer, does it work?</p></div>
	</div>
</div>
		