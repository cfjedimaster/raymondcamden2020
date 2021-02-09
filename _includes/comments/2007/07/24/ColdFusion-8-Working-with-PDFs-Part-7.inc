
<div class="comment" id="c_1713669050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669050">1</a> by RobW
		posted on 7/25/2007 at 5:20 PM
		</div>
		<div class="comment_text"><p>Ray,<br>Do you know, are the CF8 PDF functions still using iText at all, or is it all Adobe technology now?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669057">2</a> by Raymond Camden
		posted on 7/25/2007 at 5:25 PM
		</div>
		<div class="comment_text"><p>Sorry, I don't. Hopefully an Adobe reader can chime in here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669058">3</a> by Daniel Budde II
		posted on 7/26/2007 at 8:56 AM
		</div>
		<div class="comment_text"><p>Is it possible to use this to enter positioned text into an existing PDF document or tabular data?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669069">4</a> by Raymond Camden
		posted on 7/26/2007 at 5:14 PM
		</div>
		<div class="comment_text"><p>I'm not sure. I'd check the DDX docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669066">5</a> by Dave Hoff
		posted on 7/27/2007 at 8:46 PM
		</div>
		<div class="comment_text"><p>Great series Ray. I've scoured the documentation and for the life of me can't see how I can read a pdf file's table of contents. The ddx documentation appears to only show how to inject ddx info and not how to extract it from an existing pdf file. Am I just missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669067">6</a> by Raymond Camden
		posted on 7/27/2007 at 8:49 PM
		</div>
		<div class="comment_text"><p>Well I know DDX can do extractions as that I how I got the text out. In theory you could get the text from the page that had the TOC. This text wouldn't be structured though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669068">7</a> by Dave Hoff
		posted on 7/28/2007 at 12:26 AM
		</div>
		<div class="comment_text"><p>It appears that CF8 does not support the Bookmarks DDX element that allows you to extract bookmarks from a pdf. In the CF8 docs, it lists the restricted DDX elements but "Bookmarks" is not in the list.</p><p>Too bad, I was really hoping for this functionality.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669073">8</a> by Raymond Camden
		posted on 7/28/2007 at 1:05 AM
		</div>
		<div class="comment_text"><p>If it isn't listed in the restricted list, can you please file a bug report?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669072">9</a> by Brian
		posted on 8/8/2007 at 11:17 PM
		</div>
		<div class="comment_text"><p>Anyone ever seen this error message:</p><p>failed: DDXM_S18005: An error occurred in the PrepareTOC phase while building &lt;TableOfContents&gt;. Cause given.</p><p>I only get this error when using the TableOfContents element in the DDX:</p><p>&lt;TableOfContents maxBookmarkLevel="infinite" bookmarkTitle="Table of Contents" includeInTOC="false"&gt;<br>  &lt;Footer styleReference="CatalogueFooter" /&gt;<br>&lt;/TableOfContents&gt;</p><p>Any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669078">10</a> by Martin
		posted on 2/11/2008 at 8:42 PM
		</div>
		<div class="comment_text"><p>Reading through the livecycle docs I found a neat little parameter that can be added to the &lt;header&gt; and &lt;footer&gt; tags called replaceExisting=true SEE: <a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Flivecycle%2Fes%2FsdkHelp%2Fprogrammer%2FsdkHelp%2FddxRefMain.163.35.html%3AgsA9JfB2Z8FgXujuSNOb7uo7Jg8&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/livecycle/es/sdkHelp/programmer/sdkHelp/ddxRefMain.163.35.html">http://livedocs.adobe.com/l...</a></p><p>Unfortunately I have been able to get it to work yet. I have added a comment to the CF8 docs but would also love to hear if anybody else has used this successfully.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669075">11</a> by -paul
		posted on 3/20/2008 at 6:28 PM
		</div>
		<div class="comment_text"><p>do most people use verity on cf8 to search though pdf's?<br>or do they parse out pdf's into text files and search through those?</p><p>what are the differences in on resources?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669079">12</a> by Raymond Camden
		posted on 3/20/2008 at 7:23 PM
		</div>
		<div class="comment_text"><p>I don't know if there is a right answer to that. I don't think a lot of people use Verity in CF, even though they should.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669074">13</a> by Martin
		posted on 3/20/2008 at 7:58 PM
		</div>
		<div class="comment_text"><p>@my own comment about replaceExisting="true"<br>I HAVE been able to use this with the pdf's I have created with ColFusion8. My initial confusion was dealing with (existing) pdf's that "looked" as if they had a header and footer BUT when I converted those pdf's to text I found that it was actually body text stretched out the edge of the page.</p><p>@Verity<br>I have been reluctant to use Verity because a) it does consume quite a bit of RAM and b)Databases like MySql come with Full Text Searching built in. Fair enough MySql doesn't search pdf documents though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669081">14</a> by Daniel Budde II
		posted on 3/20/2008 at 8:18 PM
		</div>
		<div class="comment_text"><p>I agree with Ray, I would really like to use Verity more, but I also agree with Martin and I tend to shy away from it when it comes to the resources used.  I tend to use it more when I absolutely need full search capabilities with document context and scoring.</p><p>I tried using the Adobe docs to split Verity off onto its own server, but I was never able to make it work successfully on CF7 or CF8.  If anyone has ever completed it successfully, I certainly would be interested.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669080">15</a> by Matt MacDougall
		posted on 5/27/2008 at 9:27 PM
		</div>
		<div class="comment_text"><p>I've got an odd   error when running this ddx watermark example.  The text "FINAL" sometimes appears as random nonsense characters like #&amp;$&amp;^%*.  This happens maybe 1 out of 5 times I run the code.  I'm using CF8 on OS X Leopard and opening the files in Apple's Preview program.  I have not seen this problem with PDF's generated from my OS X server and viewing on Windows.  Have any other Mac users out there noticed this intermittent watermark text problem?  Has anyone solved the issue?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669082">16</a> by Raymond Camden
		posted on 5/27/2008 at 9:56 PM
		</div>
		<div class="comment_text"><p>Did you change the hard coded font to something else?</p><p>Also - note that in 8.0.1, you can now supply HTML for watermarks. This means you don't need to use DDX for it anymore.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669083">17</a> by Matt MacDougall
		posted on 5/27/2008 at 10:39 PM
		</div>
		<div class="comment_text"><p>Thanks Ray.  I used your <a href="http://disq.us/url?url=http%3A%2F%2Fddxpdf.zip%3ACQQGvjiq7c8g7fJvqdYC6tUHp-0&amp;cuid=3321886" rel="nofollow noopener" title="ddxpdf.zip">ddxpdf.zip</a> example as is.  In my last test I generated one copy of output2.pdf from ddx3.cfm.  When I browse to the ddxpdf folder to open and close output2.pdf, at least 1 in 5 times, Preview renders FINAL as junk text.</p><p>I've confirmed this same behavior on another Mac running Leopard too.  You've got a Mac right?  You don't see this behavior?</p><p>I appreciate the heads up on 8.0.1 allowing watermark text outside of ddx, I'll give that a shot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669085">18</a> by Raymond Camden
		posted on 5/27/2008 at 10:48 PM
		</div>
		<div class="comment_text"><p>Tell me this - in the other 4 times, do you see font changes? I mean - still readable, but random fonts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669084">19</a> by Matt MacDougall
		posted on 5/27/2008 at 10:51 PM
		</div>
		<div class="comment_text"><p>When I see the word FINAL, it's always Arial.  In fact when it doesn't read FINAL but something like &amp;^&amp;*%&amp;* it looks like Arial as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669086">20</a> by Raymond Camden
		posted on 5/27/2008 at 10:55 PM
		</div>
		<div class="comment_text"><p>You got me on that one. _Are_ you using 8.0.1 yet?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669087">21</a> by Matt MacDougall
		posted on 5/27/2008 at 11:38 PM
		</div>
		<div class="comment_text"><p>Thanks for bouncing around some ideas Ray.  I am using 8.0.1.  I tried using the new addwatermark text functionality and ran into the same problem.  It looks like the problem though is with the Arial font.  I don't see an issue on my main machine or others when using Verdana or Courier.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669088">22</a> by Raymond Camden
		posted on 5/27/2008 at 11:43 PM
		</div>
		<div class="comment_text"><p>Looks like it's time to log a bug. :)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Fwish%3AeVByS_kB5f-F_Xb5m4vrRNXZtoA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/go/wish">http://www.adobe.com/go/wish</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669091">23</a> by Sid Maestre
		posted on 6/11/2008 at 8:13 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I'm running your example code for pdf generation using a DDX files.  Specifically, the ddx2.cfm</p><p>I'm getting the same error as Brian above.</p><p>failed: DDXM_S18005: An error occurred in the PrepareTOC phase while building &lt;TableOfContents&gt;. Cause given.</p><p>I've narrowed it down.  When you add bookmark="true" to cfdocument you get the error.  If you don't have bookmark="true" it works but no TOC.  But I saw your output2.pdf HAS a TOC.  Any idea why your code won't run on my copy of CF8?  I've tried it on the developer edition and a standard version.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669090">24</a> by Raymond Camden
		posted on 6/11/2008 at 5:18 PM
		</div>
		<div class="comment_text"><p>Are you running 801 along with the cumulative hot fix?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669093">25</a> by Sid Maestre
		posted on 6/12/2008 at 4:40 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Installing the 8.01 update solved the problem.  That will teach me to not run the latest version of CF.</p><p>Did a &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.designovermatter.com%2Fblog%2Findex.cfm%2F2008%2F6%2F12%2Ffailed-DDXMS18005-An-error-occurred-in-the-PrepareTOC-phase-while-building-TableOfContents-Cau%3AVfeZPTv0-0DG8gzGhAlqyTP0aco&amp;cuid=3321886" rel="nofollow noopener" title="http://www.designovermatter.com/blog/index.cfm/2008/6/12/failed-DDXMS18005-An-error-occurred-in-the-PrepareTOC-phase-while-building-TableOfContents-Cau">http://www.designovermatter...</a>"&gt;short post&lt;/a&gt; for anyone who does a google search on the error message. (Which is what I did).</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669095">26</a> by Terry Collinson
		posted on 8/14/2008 at 2:44 PM
		</div>
		<div class="comment_text"><p>Hi Ray, Obviously being a bit stupid here but it appears the only way I can create a List of Contents is by setting the bookmark is true and giving the bookmark a name using the &lt;cfdocument&gt; tag. Is there no other way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669094">27</a> by Raymond Camden
		posted on 8/14/2008 at 5:18 PM
		</div>
		<div class="comment_text"><p>Terry - the short answer is yes. The long answer is that it appears, MAYBE, that you can do it via DDX as well:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Flivecycle%2F8.2%2FddxRef%2Fwwhelp%2Fwwhimpl%2Fjs%2Fhtml%2Fwwhelp.htm%3F%26accessible%3Dtrue%3Az7V3UlDTCcdrttJe60BlK1W9kPU&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/livecycle/8.2/ddxRef/wwhelp/wwhimpl/js/html/wwhelp.htm?&amp;accessible=true">http://livedocs.adobe.com/l...</a></p><p>But certainly it's easier doing it in CFML (imho).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669098">28</a> by Evan
		posted on 3/3/2009 at 11:47 PM
		</div>
		<div class="comment_text"><p>Thanks.  I've been trying to use processddx to grab the text of a PDF which is set up in a 2 column display format.<br>The OutXML seems like it's reading across the lines instead of down the columns.<br>The docs (<a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Flivecycle%2Fes%2FsdkHelp%2Fprogrammer%2FsdkHelp%2Fwwhelp%2Fwwhimpl%2Fcommon%2Fhtml%2Fwwhelp.htm%3Fcontext%3DsdkHelp%26file%3DddxRefDocText.167.1.html%29%3A3zGSnSUsbpo50eoxjQWnri92BZE&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/livecycle/es/sdkHelp/programmer/sdkHelp/wwhelp/wwhimpl/common/html/wwhelp.htm?context=sdkHelp&amp;file=ddxRefDocText.167.1.html)">http://livedocs.adobe.com/l...</a> say "the order in which the words are listed is not guaranteed to be the reading order."  I've also tried mode="WithQuads", but it seems like it would be really tough to reconstruct the text from the coordinates.</p><p>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669100">29</a> by Raymond Camden
		posted on 3/3/2009 at 11:56 PM
		</div>
		<div class="comment_text"><p>Well, if you  knew your pdfs were 2 columns, then you could expect certain types of results when using WithQuads. That would make reconstructing the text a bit simpler. That's all I can suggest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669099">30</a> by meowo
		posted on 3/11/2009 at 1:47 PM
		</div>
		<div class="comment_text"><p>is it possible to create a dynamic watermark? i was looking for ways to pass a variable to the ddx file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669101">31</a> by Raymond Camden
		posted on 3/11/2009 at 3:26 PM
		</div>
		<div class="comment_text"><p>This article is a bit outdated. CF801 added support for creating watermarks from simple HTML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669104">32</a> by Hassan Ellis
		posted on 12/9/2009 at 2:07 AM
		</div>
		<div class="comment_text"><p>I have a quick question.  I have developed an app that captures info from a web form and injects that information into a PDF.  Everything works there.  I have done tons of research and I'm trying to find a solution to the electronic signature capture portion.  Seems that you would have a java applet to write the signature and you could draw that with an interpreter CGI or PERL script or with one of Coldfusion's imagedraw functions.  Is there a way to inject that image drawn onto a PDF where the signature line would be or place that image into signature field?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669102">33</a> by Armando Portales
		posted on 10/14/2010 at 9:22 PM
		</div>
		<div class="comment_text"><p>There is a way to get the summary attribute of PDF for example, and split the output result to insert an paragraph caracter foe each paragraph?</p><p>When you get this field attribute for searching and print the result, you get an large paragraph that contain a lot of sentance from diferent position of the pdf, but nothing is seaparte these sentance. you know what i mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669103">34</a> by Raymond Camden
		posted on 10/14/2010 at 9:58 PM
		</div>
		<div class="comment_text"><p>Not quite sure I get what you mean, but if the summary has line breaks in between stuff then obviously - in html - it would all run together. You can use ColdFusion's paragraphFormat function to add in paragraphs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669105">35</a> by Bryn Parrott
		posted on 1/13/2012 at 8:00 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>In the text the your article about ColdFusion8 and DDX; you include a lnk to some documentation on LiveCycle DDX 'language' in depth.  In fortunately the link is now broken.</p><p>Is there any chance that you might be able to inform me of the current link to the same information.</p><p>You see, I am implementing some code to create a compound PDF document that could do with a Tablee of Contents; (which I have working in a basic sense) however the formatting could do with some tweaking.  Someone elses Blog mentioned how to do it, but their code gives up some errors; so I want to check all of the syntax.</p><p>Thanks,<br>Bryn Parrott</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669107">36</a> by Raymond Camden
		posted on 1/13/2012 at 8:04 PM
		</div>
		<div class="comment_text"><p>Google is your friend. ;)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2Flivecycle%2F9.0%2FddxRef.pdf%3A5rmaxkVIVtAvcOH5zFOk0no1SCg&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/livecycle/9.0/ddxRef.pdf">http://help.adobe.com/en_US...</a> (PDF obviously)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669108">37</a> by Jasper Grannetia
		posted on 2/19/2012 at 12:38 AM
		</div>
		<div class="comment_text"><p>Great article. I was looking at adding a TOC dynamically and your example was spot on. :-)</p><p>Just wondering if CF(9) will let us set multiple levels in the TOC. It appears that DDX would have nog problem with that (maxBookmarkLevel="infinite"), but the CF documentation explicitly states that all bookmarks are placed directly under the root.</p><p>Any ideas on how to get this done?</p><p>Thnx in advance!</p><p>Jasper</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669109">38</a> by Raymond Camden
		posted on 2/19/2012 at 12:40 AM
		</div>
		<div class="comment_text"><p>No idea... but give it a try and let us know. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669111">39</a> by Jasper Grannetia
		posted on 2/19/2012 at 1:32 AM
		</div>
		<div class="comment_text"><p>Ok, will do. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669110">40</a> by Bryn Parrott
		posted on 2/19/2012 at 3:00 PM
		</div>
		<div class="comment_text"><p>I went down this path a few weeks ago.  I also wanted to produce multiple levels of bookmarks. I acheived a modicum of success, but spent way too much time doing it.    Best I could manage was 2 levels of bookmarks.  Basic problem was that CF would not allow nested cfdocumentsections and that is the only way they provide to create them.</p><p>Now if you were to consolidate documents that were created some other way then it might work.  PDFLib perhaps.</p><p>To be honest it would have been far better had Adobe provided the capability to create bookmarks based on HTML H tags e.g. h1, h2, h3 etc. or even something like &lt;cfdocumentbookmark /&gt; perhaps !!.   Far more intuitive, flexible and easy to work with than documentsections.<br>Don't get me started on DDX by the way. No fun at all.</p></div>
	</div>
</div>
		