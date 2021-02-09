
<div class="comment" id="c_1713716206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716206">1</a> by Josh Knutson
		posted on 6/18/2009 at 8:08 AM
		</div>
		<div class="comment_text"><p>I was surprised at how close I was to getting this right, but their were a few hiccups in it. This will come in handy when having to generate large pdf documents. Thanks again Ray for some of the pointers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716219">2</a> by chris hough
		posted on 9/13/2009 at 10:38 AM
		</div>
		<div class="comment_text"><p>excellent walk through, thank you for outlining this, it really helped me correct a problem where we need to dynamically generate a pdf and merge it with an existing pdf on the server.</p><p>i have 1 question though, have u seen any performance issues with the merge functionality slowing down the server? just curious.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716218">3</a> by Raymond Camden
		posted on 9/13/2009 at 6:27 PM
		</div>
		<div class="comment_text"><p>No, but I have not done anything intensive with it. The closest "intense" PDF thing I've done is generating PDFs at ColdFusionCookBook, and I ensured I cached that as much as possible so I rarely actually ever generated it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716220">4</a> by Sanjeev
		posted on 10/8/2009 at 8:34 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>How can i modify this to use for a cfpdfform tag ? I have a bunch of pdf's with form in side then and based on condition i have to fill those forms[pdf] and merge all of them together.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716222">5</a> by Raymond Camden
		posted on 10/13/2009 at 7:21 AM
		</div>
		<div class="comment_text"><p>Well, it would be the same principal. Put the code in the &lt;cfthread&gt; block that you want threaded. Have you tried writing it yourself yet?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716221">6</a> by Sanjeev
		posted on 10/20/2009 at 6:30 PM
		</div>
		<div class="comment_text"><p>@ Ray,<br>Yeah, I tried the code writing in myself. But am facing a weird problem. I was trying to place the 'populated' pdfform inside the document tag to generate a 'merged' pdf.this whole thing is threaded.</p><p>I followed the help docs and placed the documentsection also at the same level as pdfform. But the resultant pdf is empty!!</p><p>&lt;cfdocument format="pdf"&gt;<br>    &lt;cfpdfform source="mypdf.pdf" action="populate"&gt;<br>        &lt;cfpdfsubform name="myform"&gt;<br>            &lt;cfpdfformparam name="feild1" value="value1"&gt;<br>            &lt;cfpdfformparam name="field2" value="value2"&gt;<br>        &lt;/cfpdfsubform&gt;<br>    &lt;/cfpdfform&gt;<br>    &lt;cfdocumentsection/&gt;<br>&lt;/cfdocument&gt;</p><p>Just beating the head. I think I may be doing something  basic wrong. But as of now.. I'm in the darkness still.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716224">7</a> by Raymond Camden
		posted on 10/20/2009 at 8:06 PM
		</div>
		<div class="comment_text"><p>cfdocument, w/o a name, tries to render to the screen. If you want to _save_ the PDF, you need to add the name attribute to cfdocument, take that result and save it to the file system.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716225">8</a> by Sanjeev
		posted on 10/21/2009 at 4:10 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>I did that. But all i see is a empty pdf. Just for me the driving Question is how do I save a populated pdf form into a variable, so that i can use it later.</p><p>Also Ray,<br>Is there a way to find what is the 'form name' present inside the interactive pdf? I tried DDX DocumentInformation Tag and found it to be a 'AcroForm' formtype, but could not see any promising result info about form name. Any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716226">9</a> by Raymond Camden
		posted on 10/21/2009 at 5:08 PM
		</div>
		<div class="comment_text"><p>Well to save it you do what I said, use name="...", which stores the binary into a variable, and then fileWrite it.</p><p>As to your part 2 - check out the docs on cfpdfform. It may be your answer. I've not played with that so I can't help you there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716209">10</a> by Sanjeev
		posted on 10/22/2009 at 9:17 AM
		</div>
		<div class="comment_text"><p>Thanks Ray. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716211">11</a> by Naveen
		posted on 2/11/2010 at 6:38 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I tried this code sample and it gives me an error.<br>Element PDF is undefined in a Java object of type class coldfusion.thread.ThreadScope.</p><p>on line &lt;cfset tempCopy = cfthread[i].pdf&gt;</p><p>Any idea?</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716210">12</a> by Raymond Camden
		posted on 2/11/2010 at 6:55 AM
		</div>
		<div class="comment_text"><p>It means that the variable, PDF, wasn't created inside the thread. Do a cfdump on the cfthread scope to see what is there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716212">13</a> by Naveen
		posted on 2/11/2010 at 11:24 PM
		</div>
		<div class="comment_text"><p>Thanks, there was a logical error in my code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716213">14</a> by Clay
		posted on 8/9/2010 at 8:20 AM
		</div>
		<div class="comment_text"><p>Ray...have you ever done something like this with cfimage? I have a client who is a photographer and I am running into performance issues. I have never used cfthread before so I thought it might help. I would appreciate your thoughts. Here is my code...</p><p>&lt;!--- Read in the Stark Images watermark. ---&gt;<br>&lt;cfset objWatermark = ImageNew( "./images/logoMain.png"	) /&gt;</p><p>&lt;!---Resize watermark image---&gt;<br>&lt;cfimage action = "resize" height = "75%" source = "#objWatermark#" width = "75%" overwrite = "no" name = "objWatermarkresize"&gt;</p><p>&lt;!---Rotate watermark---&gt;<br>&lt;cfimage action = "rotate" angle = "-35" source="#objWatermarkresize#" overwrite="no" name="objWatermarkrotate"&gt;</p><p>&lt;cfoutput query="rsProofs" startrow="#StartRow_rsProofs#" maxrows="#MaxRows_rsProofs#"&gt;</p><p>	&lt;!--- Read in the original image. ---&gt;<br>    &lt;cfset objImage = ImageRead( "./proof/#rsProofs.FILENAME#" ) /&gt;</p><p>    &lt;!---Resize main image---&gt;<br>    &lt;cfimage action = "resize" height = "10%" source = "#objImage#" width = "10%" overwrite = "no" name = "objImageresize"&gt;</p><p>    &lt;!---<br>        Turn on antialiasing on the existing image<br>        for the pasting to render nicely.<br>    ---&gt;<br>    &lt;cfset ImageSetAntialiasing( objImageresize, "on"	) /&gt;</p><p>    &lt;!---<br>        When we paste the watermark onto the photo, we don't<br>        want it to be fully visible. Therefore, let's set the<br>        drawing transparency to 50% before we paste.<br>    ---&gt;<br>    &lt;cfset ImageSetDrawingTransparency(	objImageresize, 60 ) /&gt;</p><p>    &lt;!---<br>        Paste the watermark on to the image. We are going<br>        to paste this into the bottom, right corner.<br>    ---&gt;<br>    &lt;cfset ImagePaste( objImageresize, objWatermarkrotate, 30, 0 ) /&gt;</p><p>			&lt;!--- Write it to the browser. ---&gt;<br>    		&lt;p&gt;&lt;cfimage action="writetobrowser" source="#objImageresize#" quality="0.10" /&gt;&lt;/p&gt;<br>            &lt;hr /&gt;</p><p>&lt;/cfoutput&gt;</p><p>&lt;a href="&lt;cfoutput&gt;#CurrentPage#?PageNum_rsProofs=#Min(IncrementValue(PageNum_rsProofs),TotalPages_rsProofs)##QueryString_rsProofs#&lt;/cfoutput&gt;"&gt;Next&lt;/a&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716216">15</a> by Raymond Camden
		posted on 8/10/2010 at 7:25 AM
		</div>
		<div class="comment_text"><p>Sure, it could help. Also, if you are shrinking/rotating that watermark all the time, I'd consider just saving the shrunk/rotated one to the file system and just using that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3945840176">
	<div>
		<img src="https://disqus.com/api/users/avatars/jpmyob.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3945840176">16</a> by jpmyob
		posted on 6/15/2018 at 3:21 PM
		</div>
		<div class="comment_text"><p>I know this is an old post - but this doesn't work with images in the document...<br>The text changes for each PDF enerated and merged - but if you add an image(s) - <br>Such as cycling thru 5 images, o 1 each for the PDF - the image never changes on the resulting merged PDF. - if you do it outside the thread - it behaves as you'd expect...</p></div>
	</div>
</div>
		
<div class="comment" id="c_3945913966">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3945913966">17</a> (In reply to <a href="#c_3945840176">#16</a>) by Raymond Camden
		posted on 6/15/2018 at 4:11 PM
		</div>
		<div class="comment_text"><p>Thanks. I haven't used CF's PDF stuff in nearly a decade.</p></div>
	</div>
</div>
		