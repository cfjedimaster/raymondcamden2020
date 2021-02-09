
<div class="comment" id="c_1713732138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732138">1</a> by Jeffry Houser
		posted on 5/6/2011 at 5:30 PM
		</div>
		<div class="comment_text"><p>Since you didn't specify explicitly; isn't cfdocument using iText under the hood for it's PDF Generation?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732147">2</a> by Raymond Camden
		posted on 5/6/2011 at 5:32 PM
		</div>
		<div class="comment_text"><p>I believe - stress - believe - that iText drives cfdocument and LCDS (or Blaze?) drives cfpdf.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732140">3</a> by Cyril Hanquez
		posted on 5/6/2011 at 5:46 PM
		</div>
		<div class="comment_text"><p>The iText library included in CF is probably an old one that's why you couldn't find anything related to "Comments pop up". Latest versions use "com.iText..." instead of "com.lowagie..."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732133">4</a> by Raymond Camden
		posted on 5/6/2011 at 5:47 PM
		</div>
		<div class="comment_text"><p>To be clear, the pop ups WERE returning in the array. I just didn't dig into how to _work_ with them. They look more complex then comments (shapes+text). I'd bet the version I have can work with them - I'd just need to know how.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732136">5</a> by Cyril Hanquez
		posted on 5/6/2011 at 5:52 PM
		</div>
		<div class="comment_text"><p>Oups sorry... didn't those type of comments exist too :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732146">6</a> by Jeff
		posted on 5/6/2011 at 6:22 PM
		</div>
		<div class="comment_text"><p>I have worked with iText for quite some time.  Since before it was in CF actually.  It is way faster than CFDOCUMENT and does better under load for me.  CFDOCUMENT always winds up locking up and not being able to resolve the local domain when it prints.  Which locks up everything CFDOCUMENT Related and requires the service to reset.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732143">7</a> by PaulH
		posted on 5/6/2011 at 6:56 PM
		</div>
		<div class="comment_text"><p>if you're serious about iText, buy brunos' book: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.manning.com%2Flowagie%2F%3AlQwva_yzxuGUbae9rny9_EBAYIY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.manning.com/lowagie/">http://www.manning.com/lowa...</a>  well worth the cost.</p><p>as an added bonus it's a damn good resource if you use the AS3 port of itext, purePDF: <a href="http://disq.us/url?url=http%3A%2F%2Fbit.ly%2Fma0Fc7%3AXUzPrDu-kOgp_uNihYEMMOTgPZo&amp;cuid=3321886" rel="nofollow noopener" title="http://bit.ly/ma0Fc7">http://bit.ly/ma0Fc7</a>  (which also works a treat).</p><p>and by far the best cf references for iText are at: <a href="http://disq.us/url?url=http%3A%2F%2Fcfsearching.blogspot.com%2Fsearch%2Flabel%2FiText%3AmM0WkD4Z9O3Gz32q7sGvKzctJSs&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsearching.blogspot.com/search/label/iText">http://cfsearching.blogspot...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732142">8</a> by Raymond Camden
		posted on 5/6/2011 at 6:58 PM
		</div>
		<div class="comment_text"><p>A pure AS3 port? Damn - that's pretty slick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732123">9</a> by Joshua Siok
		posted on 5/6/2011 at 7:51 PM
		</div>
		<div class="comment_text"><p>I've been working with iText in the past few days.  I'm using it to encrypt, modify permissions, add watermarks, and inject JavaScript into PDFs to make them "expire" at a certain date and pop up custom alerts within Acrobat.  It's only really effective for Acrobat users (w/JavaScript enabled), but it's pretty cool stuff.  I'd suggest downloading the latest version of iText (5.0.0).  CF9 comes with iText 2.x or something.  Just add the jar file to your CF9/lib directory and restart the CF app service.  Then refer to your java classes as "com.itextpdf..." to use the newer version.  You can add JavaScript to a PDF by using the "com.itextpdf.text.pdf.PdfStamper" class and calling "MyPdfStamperObject.getWriter().addJavaScript( jsCode );".</p><p>I'd definitely like to see what other cool stuff we can do with iText in ColdFusion!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732145">10</a> by Rob Brooks-Bilson
		posted on 5/6/2011 at 8:47 PM
		</div>
		<div class="comment_text"><p>In the LiveCycle world, LiveCycle PDF Generator handles PDF conversion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732137">11</a> by Adrian J. Moreno
		posted on 5/7/2011 at 1:55 AM
		</div>
		<div class="comment_text"><p>At a previous employer (insurance company), one of my coworker's used iText to generate a user's personal insurance card on the fly. Once he had a PDF template to work from, the rest was a breeze.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732134">12</a> by Craig S
		posted on 5/7/2011 at 2:31 AM
		</div>
		<div class="comment_text"><p>About a year ago I had to convert an application from using cfdocument to using iText... cfdocument did almost everything I needed it to do, but unfortunately one of the requirements was for the first page to have a larger footer than the rest of the document, and there isn't really a way to do that with cfdocument (at least, not in a way that would have been acceptable to the users).  iText can really give you some great fine-tune control over the creation of the pdf over what cfdocument can do, but you're absolutely right when you say it's surprising how complex pdfs are.  There's a pretty steep learning curve, and there aren't a whole lot of examples or tutorials out there for the latest version (at least there weren't when I was working with it).</p><p>And I agree with @PaulH, if you're using iText with ColdFusion, cfSearching's blog is a fantastic resource... I would have had a rough time without that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732148">13</a> by Craig S
		posted on 5/7/2011 at 2:34 AM
		</div>
		<div class="comment_text"><p>Incidentally, I believe under the hood cfdocument is using a discontinued product called ICEBrowser to parse and render the HTML, and iText to convert the result to PDF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732139">14</a> by PaulH
		posted on 5/7/2011 at 3:12 AM
		</div>
		<div class="comment_text"><p>ah the " LiveCycle world", cuban cigars lit with hundred dollar bills ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732144">15</a> by PaulH
		posted on 5/7/2011 at 2:43 PM
		</div>
		<div class="comment_text"><p>...and don't put too much stock in the version number differences, bruno bumped the java iText version number up to 5 to match the C# version number.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732153">16</a> by richard
		posted on 5/7/2011 at 7:32 PM
		</div>
		<div class="comment_text"><p>We're playing with iText. The rendering of CFDOCUMENT under, for example Railo and Cf9.01, are completely different and I think this is due to different implementations/versions of iText which I believe they both use under the hood.</p><p>We haven't got it sorted yet, because using iText natively is more complex than using CFDOCUMENT, but I believe the results will be worth it if only for cross-platform/engine compatibility</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732150">17</a> by Daniel Budde
		posted on 5/17/2011 at 7:04 PM
		</div>
		<div class="comment_text"><p>I know I'm a little late to the game on this post and this is a little bit of a plug for myself, but I have spent a lot of time utilizing iText in generated documents, especially where we needed to keep the document small and optimized and have very specific controls on output and encryption.  The iText library allowed us to accomplish this very well.</p><p>So, because we use iText so regularly, I created a library that is essentially a wrapper for iText, but it does a lot to make it easier to remove some of the behind the scenes management I had to do in the past.  The library is called pdfIT (<a href="http://disq.us/url?url=http%3A%2F%2Fpdfit.riaforge.org%2F%29%3AEQOG92GQboJKby7eWJx7LKNh5R4&amp;cuid=3321886" rel="nofollow noopener" title="http://pdfit.riaforge.org/)">http://pdfit.riaforge.org/)</a> and it is on Riaforge.  I think the examples I include with it go a long way to help you to learn iText should you not have access to the iText book or should you need additional assistance with examples.</p><p>I hope it is helpful to someone besides me and I could always use feedback for improvements.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732149">18</a> by Raymond Camden
		posted on 5/17/2011 at 7:07 PM
		</div>
		<div class="comment_text"><p>I never have a problem with someone plugging their own open source code. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732127">19</a> by Jim Priest
		posted on 6/28/2011 at 10:55 PM
		</div>
		<div class="comment_text"><p>Great post Ray! Quite timely! :)</p><p>I'm trying to pull annotation information as well.  In particular the 'sticky notes', and I'm curious if there is coordinate information available for each one so you know it's placement on the page.</p><p>Still digging and cfdumping but was curious if anyone has done this before...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732125">20</a> by Raymond Camden
		posted on 6/28/2011 at 11:03 PM
		</div>
		<div class="comment_text"><p>I seem to remember there being a set of data available - I bet coordinates is there. Has to be if you think about it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732124">21</a> by Jim Priest
		posted on 6/29/2011 at 12:39 AM
		</div>
		<div class="comment_text"><p>So far I've found 'rect' which I believe is what I need.</p><p>  rect = reader.getPdfObject( annot.get(PdfName.rect))</p><p>It's returning what I assume are 4 coordinates:</p><p>Rect: [61.957, 274.902, 81.957, 292.902]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732126">22</a> by Raymond Camden
		posted on 6/29/2011 at 12:40 AM
		</div>
		<div class="comment_text"><p>If I had to guess, it would be X,Y of top left and X,Y of bottom right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732132">23</a> by PaulH
		posted on 6/29/2011 at 7:22 AM
		</div>
		<div class="comment_text"><p>if i got the right class, its the other way round:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbit.ly%2Fk4Uow1%3Ava1iq9fW_qadgtrj6K0ZpHuzrMY&amp;cuid=3321886" rel="nofollow noopener" title="http://bit.ly/k4Uow1">http://bit.ly/k4Uow1</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732141">24</a> by Leigh
		posted on 6/30/2011 at 12:01 PM
		</div>
		<div class="comment_text"><p>&lt;i&gt;a user wrote in asking about how to use iText to get comments from a PDF&lt;/i&gt;<br>If it is the same guy .. I remember him from one of the mailing lists. His problem had a slightly interesting twist. His pdf had several "Stamp" annotations, with no CONTENTS, but with a SUBJECT  key he wanted to retrieve. So he tried using annot.get(PdfName.Subject). At first glance it seems right. But turns out PdfName.Subject is actually the wrong key "/Subject" versus of "/Subj". So he created a custom PdfName and it worked fine:  annot.get(PdfName.init("Subj")).  (Per the mind numbing pdf specs, the "popups" were ignored in favor of their parent annotations).</p><p>&lt;i&gt;that comments are merely one type of annotation.&lt;/i&gt;<br>Yes, I was surprised there are all kinds of annotations. The pdf specs (if you can get through it without your head exploding) list the standard ones - around 25 ("text", "popup", "stamp", "link", etcetera).  I am not familiar with all of them, but most annotations seem to store text under PdfName.CONTENTS. However some text can be found under other keys as well, like PdfName.T (Title bar text), PdfName.RC (Rich text string), "/Subj", etcetera. All depends on the annotation type.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732155">25</a> by Phillip Senn
		posted on 2/28/2013 at 1:59 AM
		</div>
		<div class="comment_text"><p>Is there the ability to add stickynotes to a pdf from ColdFusion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732156">26</a> by vijay
		posted on 7/30/2013 at 2:38 PM
		</div>
		<div class="comment_text"><p>Hello,I am working on this.can anyone tell me how to add expiry date to the pdf.I am able to set the password to it.</p></div>
	</div>
</div>
		