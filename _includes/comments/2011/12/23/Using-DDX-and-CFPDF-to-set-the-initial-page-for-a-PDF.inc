
<div class="comment" id="c_1713737683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737683">1</a> by Eric Davis
		posted on 1/18/2012 at 3:49 AM
		</div>
		<div class="comment_text"><p>Thanks Ray, this example works like a charm.  I was wondering if its possible to use the same technique to open a pdf to a specific 'Destination' within the PDF.  I've looked at the documentation, and don't see how to do this using the openToPage value.  The CoverPage attribute looks like it maybe a way to open to a destination.  Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737684">2</a> by Eric Davis
		posted on 1/18/2012 at 4:16 AM
		</div>
		<div class="comment_text"><p>Actually it looks like the destination can be accessed by simpy adding #destinationName to the end of the URL.  This works even when the document is returned using cfcontent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737686">3</a> by Raymond Camden
		posted on 1/18/2012 at 4:22 AM
		</div>
		<div class="comment_text"><p>Glad you figured it out. My job here is done. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737685">4</a> by Susan Bethel
		posted on 1/23/2012 at 10:00 PM
		</div>
		<div class="comment_text"><p>Trying this out, but the DDXis not valid because the schema, coldfusion_ddx.xsd, can't be located.  Am I missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737688">5</a> by Raymond Camden
		posted on 1/23/2012 at 10:05 PM
		</div>
		<div class="comment_text"><p>You get that error? Where? While the xsd does not exist, I'm able to run the code just fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737689">6</a> by Susan Bethel
		posted on 1/23/2012 at 11:18 PM
		</div>
		<div class="comment_text"><p>Thanks for the response.  I am a newbie so I assumed I must have missed some important detail. I created the DDX file in Visual Studio assuming since it is an xml file the editor would work out. After posting here, I re-created it in notepad and now it is working fine -- go figure!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737687">7</a> by dehian
		posted on 4/27/2012 at 1:19 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Thanks for this post.<br>I managed to set magnification level using your sample code.<br>I only had a problem with the ddx which was not valid unless i wrote it all in a single line into the cfsavecontent tag.<br>It also doesn't work when you open the pdf in Chrome but that's a problem with Chrome, not with cf, i guess.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737690">8</a> by Raymond Camden
		posted on 4/27/2012 at 1:21 AM
		</div>
		<div class="comment_text"><p>How does it fail in Chrome? I generate PDFs w/ Chrome via CF all the time. (Ok, not all the time, but I have in the past.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737691">9</a> by dehian
		posted on 4/30/2012 at 5:50 PM
		</div>
		<div class="comment_text"><p>Ok sorry it seems it was some cache issue, it opens now correctly to the specified magnification percentage.<br>Thanks again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737694">10</a> by Paul
		posted on 5/16/2012 at 9:57 PM
		</div>
		<div class="comment_text"><p>Great post!<br>When I open the file created, you can open "print dialog" on pdf merged immediately? If possible, how do I change the DDX?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737693">11</a> by Paul
		posted on 5/17/2012 at 5:52 PM
		</div>
		<div class="comment_text"><p>I found the solution:<br>&lt;PDF result="output1"&gt;<br>  &lt;PDF source="doc1"/&gt;<br>  &lt;PDF source="doc2"/&gt;<br>  &lt;JavaScript source="js1" name="openPrintDialog"/&gt;<br>&lt;/PDF&gt;</p><p>"js1" is a file .js with this code:<br>this.print({<br>  bUI: true<br>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737697">12</a> by Jeff
		posted on 7/19/2012 at 1:34 AM
		</div>
		<div class="comment_text"><p>I was trying to use this to override the size that the pdf is opened up as. I am creating a dynamic report that is in PDF format and I was wondering if I have to save this as a pdf and read from that or if I can pass the cfdocument pdf variable to the input structure. I'm getting errors trying to do so and don't know if is my code or the functionality.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737695">13</a> by Raymond Camden
		posted on 7/19/2012 at 2:39 AM
		</div>
		<div class="comment_text"><p>It's been a while for me, but I'm pretty darn sure you have to save it to the file system first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737696">14</a> by Lisa Walker
		posted on 10/15/2012 at 10:38 PM
		</div>
		<div class="comment_text"><p>Hi Ray, follow your blogs constantly.  <br>I'm having an error follow up on this line.<br>&lt;cfset input = {"In1" = pdfFile}&gt;</p><p>Invalid CFML construct found on line 13 at column 16.  <br>ColdFusion was looking at the following text:<br>{</p><p>The CFML compiler was processing:</p><p>A cfset tag beginning on line 13, column 2.</p><p>Running cf8.0.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737701">15</a> by Raymond Camden
		posted on 10/16/2012 at 12:38 AM
		</div>
		<div class="comment_text"><p>I don't remember when implicit struct notation came in, but it must have been CF9, not 8. So translate it so:</p><p>&lt;cfset input = structNew()&gt;<br>&lt;cfset input["In1"] = pdfile&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737702">16</a> by Colin G
		posted on 3/5/2013 at 11:57 PM
		</div>
		<div class="comment_text"><p>Sorry for lateness.<br>Paul's comment from 5-17-12 blew open automatic printing in ColdFusion for me. Something that threw me though: the "source" attribute in the JavaScript tag needs to be in the input structure you send to &lt;cfpdf&gt; via the "inputfiles" attribute. The struct key corresponds to the value you use for "source". Its value is the full path of the file. According to the Adobe docs, you can even use a URL.<br>Hope that helps someone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737700">17</a> by Samish Kumar
		posted on 4/29/2013 at 5:35 PM
		</div>
		<div class="comment_text"><p>Hi,<br>It seems like your above code might help me in splitting my pdf into multiple pdf files. i dont know what DDX and coldfusion is. can anybody tell me where i can start from, i mean i need assistance from scratch. i dont know if any third party software is required, so please help me out.</p><p>thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737703">18</a> by Raymond Camden
		posted on 4/29/2013 at 5:44 PM
		</div>
		<div class="comment_text"><p>You don't need DDX. CFPDF allows you to extract pages from a PDF. You could use that to 'split' a PDF doc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737705">19</a> by Samish Kumar
		posted on 4/30/2013 at 9:38 AM
		</div>
		<div class="comment_text"><p>Actually i want split pdf through javascript so if you can help me in this, it will be very appreciable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737704">20</a> by Raymond Camden
		posted on 4/30/2013 at 3:02 PM
		</div>
		<div class="comment_text"><p>Check out pdfjs then: <a href="http://disq.us/url?url=http%3A%2F%2Fmozilla.github.io%2Fpdf.js%2F%3A9Sb0FUde5569JtSbXtVhJXYaPDs&amp;cuid=3321886" rel="nofollow noopener" title="http://mozilla.github.io/pdf.js/">http://mozilla.github.io/pd...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737706">21</a> by Samish Kumar
		posted on 4/30/2013 at 4:19 PM
		</div>
		<div class="comment_text"><p>Thanx Raymond, for the link. I will have a look into that code.</p></div>
	</div>
</div>
		