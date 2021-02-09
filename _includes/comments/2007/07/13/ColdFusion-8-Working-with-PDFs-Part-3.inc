
<div class="comment" id="c_1713668414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668414">1</a> by Hugo Sombreireiro
		posted on 7/13/2007 at 8:41 PM
		</div>
		<div class="comment_text"><p>I didn't do much research on this but I keep getting this error while trying out the code:</p><p>The parameter 1 of function ToBinary, which is now coldfusion.pdf.PDFDocWrapper@11bb202 must be a Base-64 encoded string.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668412">2</a> by Raymond Camden
		posted on 7/13/2007 at 8:48 PM
		</div>
		<div class="comment_text"><p>Can you paste in the entire code? Or did you run it exactly as I did?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668415">3</a> by Hugo Sombreireiro
		posted on 7/13/2007 at 8:58 PM
		</div>
		<div class="comment_text"><p>Exactly as you did. Cut and paste from your code</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668416">4</a> by Hugo Sombreireiro
		posted on 7/13/2007 at 9:00 PM
		</div>
		<div class="comment_text"><p>Obviously I meant copy/paste :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668417">5</a> by Scott P
		posted on 7/14/2007 at 3:37 AM
		</div>
		<div class="comment_text"><p>you forgot spoiler alert in the title for the entourage leak...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668419">6</a> by Raymond Camden
		posted on 7/14/2007 at 5:12 AM
		</div>
		<div class="comment_text"><p>Ack - sorry!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668418">7</a> by ck
		posted on 7/16/2007 at 5:11 PM
		</div>
		<div class="comment_text"><p>@Hugo Support of converting pdfVar into byte[] through toBinary(#pdfVar#) was added after rc1. In case you are using a build of RC1 or before that wont work!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668420">8</a> by Raymond Camden
		posted on 7/16/2007 at 5:20 PM
		</div>
		<div class="comment_text"><p>If folks keep running into this - just save your pdf to the file system first and modify the cfcontent. Just remember that tobinary will work for you in the final release.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668423">9</a> by Charlie Arehart
		posted on 7/24/2007 at 5:21 AM
		</div>
		<div class="comment_text"><p>Seems a shame that the watermark options are only a PDF or image. Would be nice to have a simple text attribute, given the availability of the rotation attribute on the CFPDF. Of course, you've shown how one can create an image pretty easily in CFML in 8. Still, if all we want to do is add some text, it should be easier. Just filed a feature request, though I know it's too late for this release.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668424">10</a> by Raymond Camden
		posted on 7/24/2007 at 8:01 AM
		</div>
		<div class="comment_text"><p>Charlie - I'm doing research on DDX for my next blog article. Turns out - you can do text base watermarks if you do it via DDX. While now _simple_, I may be able to write up a nice UDF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668425">11</a> by AndyC
		posted on 12/21/2007 at 1:01 AM
		</div>
		<div class="comment_text"><p>Did you ever cover removing a watermark?<br>I am getting this error</p><p> Check the page numbers 1 in the source.</p><p>&lt;cfpdf action="removeWatermark"  source="my.pdf" destination="myNew.pdf" pages="1" &gt;</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668427">12</a> by Raymond Camden
		posted on 12/21/2007 at 1:41 AM
		</div>
		<div class="comment_text"><p>Nope, I didn't play with it. All I can recommend is filing a bug report on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668426">13</a> by AndyC
		posted on 12/21/2007 at 3:11 AM
		</div>
		<div class="comment_text"><p>I think it may be down to attempting to remove a watermark from a page written by a commercial program in trial mode</p><p>When I create my own watermark in CF and then attempt to remove it, everything works fine</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668428">14</a> by Kevin Hall
		posted on 3/4/2008 at 9:13 PM
		</div>
		<div class="comment_text"><p>Ray, I swear that every time I think "How could this be done in ColdFusion?" I visit your site and you have an article written about it. You appear to be some sort of future version of my coding self, doing all of my work a few days or weeks ahead of me. It's really quite eerie.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668429">15</a> by Raymond Camden
		posted on 3/4/2008 at 9:23 PM
		</div>
		<div class="comment_text"><p>It's called "Not knowing when to shut up and not blog." ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668433">16</a> by Charlie Arehart
		posted on 3/4/2008 at 9:38 PM
		</div>
		<div class="comment_text"><p>Kevin, you're not the first to experience that feeling. I've had others ask me (seriously) if Ray's a real person. :-) He's just that prolific!</p><p>But maybe instead he really IS going ahead in time--or it's you who's stuck in the middle. Before the confusion makes you lose your mind, I can give you this advice: when you see Ray next, tell him to "set the device to 2.342 and oscillating at 11 hertz".  That's for Ray and all the other Lost fans. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668436">17</a> by Raymond Camden
		posted on 3/4/2008 at 9:43 PM
		</div>
		<div class="comment_text"><p>Heh, or even better...</p><p>"1.21 gigawatts? 1.21 gigawatts? Great Scott!"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668437">18</a> by Charlie Arehart
		posted on 3/4/2008 at 10:02 PM
		</div>
		<div class="comment_text"><p>"What the hell is a gigawatt?"</p><p>(For those not following, he was quoting Dr Emmet Brown in "Back to the Future". Mine is the reply that George McFly said to him next.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668434">19</a> by Marty McFly
		posted on 4/3/2008 at 7:32 PM
		</div>
		<div class="comment_text"><p>I believe you are quoting Marty McFly, not George... no?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668430">20</a> by Raymond Camden
		posted on 4/3/2008 at 7:39 PM
		</div>
		<div class="comment_text"><p>Good catch there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668431">21</a> by Dave
		posted on 9/18/2008 at 2:41 AM
		</div>
		<div class="comment_text"><p>Is it possible to overlay text and a single image to an exisitng pdf document created by CF?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668432">22</a> by Raymond Camden
		posted on 9/18/2008 at 4:51 AM
		</div>
		<div class="comment_text"><p>Um, that's what I did above. I used an image, and drew text on it. My image was just text, but you could use another picture.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668435">23</a> by Damo
		posted on 8/24/2009 at 6:15 PM
		</div>
		<div class="comment_text"><p>Hi<br>Im trying to get a picture attached as a watermark, instead of text and its not working out as I expected, any tips</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668440">24</a> by Raymond Camden
		posted on 8/25/2009 at 2:34 AM
		</div>
		<div class="comment_text"><p>I guess I'd say - how exactly is it not working for you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668438">25</a> by Damo
		posted on 8/25/2009 at 11:37 AM
		</div>
		<div class="comment_text"><p>Well im using your code only amending it so it will put a image in the background of a PDF (which is a text document)<br>all im getting is one error after another, but when i copy your code exactly like it is, it works fine</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668439">26</a> by Raymond Camden
		posted on 8/25/2009 at 4:48 PM
		</div>
		<div class="comment_text"><p>Well what error though? Also, what if you try making one change at a time - ie, take baby steps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668441">27</a> by Damo
		posted on 8/26/2009 at 11:59 AM
		</div>
		<div class="comment_text"><p>Well ive now managed to get half of it working with just the 1 error message,<br>(Attribute validation error for the CFPDF tag.  <br>When the value of the ACTION attribute is ADDWATERMARK, the tag requires the attribute(s): SOURCE.)</p><p>heres the code as I have it now<br>&lt;cfpdf action="Addwatermark"<br>        destination="#request.maindrivePath#temppdf\#pdfname#"<br>        overwrite="yes"&gt;<br>  &lt;cfpdfparam source="#request.maindrivePath#testfiles\#qgetinvoice.INVOICE_PDFFile#"&gt;<br>  &lt;cfpdfparam source="#request.maindrivePath#templates\#qgettemplate.COMPANY_Template#"&gt;<br> &lt;/cfpdf&gt;</p><p>&lt;cflocation url="temppdf/#pdfname#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668442">28</a> by Raymond Camden
		posted on 8/26/2009 at 5:37 PM
		</div>
		<div class="comment_text"><p>In your code below, what are you trying to use as the watermark? I don't believe you can use cfpdfparam that way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668443">29</a> by Damo
		posted on 8/26/2009 at 5:47 PM
		</div>
		<div class="comment_text"><p>Im trying to use an Image as a watermark saved as a JPG. This is where my Image is located<br>#request.maindrivePath#templates\#qgettemplate.COMPANY_Template#</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668444">30</a> by Raymond Camden
		posted on 8/26/2009 at 5:50 PM
		</div>
		<div class="comment_text"><p>So the source attribute is the PDF you want to use - that needs to be in the tag. And Image="" should point to your JPG. Review the docs for cfpdf (that's where I got this info :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668445">31</a> by Damo
		posted on 8/26/2009 at 6:13 PM
		</div>
		<div class="comment_text"><p>Thanks for that<br>ive tried it and now i get this wonderful error message:</p><p>The pdf image format is not supported on this operating system.  <br>Use GetReadableImageFormats() and GetWriteableImageFormats() to see which image formats are supported.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668446">32</a> by Raymond Camden
		posted on 8/26/2009 at 6:21 PM
		</div>
		<div class="comment_text"><p>It sounds like you used the PDF for the image though and not the JPG. Care to share the code again?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668447">33</a> by Damo
		posted on 8/26/2009 at 6:24 PM
		</div>
		<div class="comment_text"><p>The code as it is now</p><p>&lt;cfpdf<br>    action = "addwatermark"<br>     source = "#request.maindrivePath#testfiles\#qgetinvoice.INVOICE_PDFFile#"<br>    image = "#request.maindrivePath#templates\#qgettemplate.COMPANY_Template#"<br>    foreground = "No"<br>    overwrite = "yes"<br>    pages = "1"<br>    rotation = "45"<br>     showonprint = "yes"&gt;<br>    destination = "#request.maindrivePath#temppdf\#pdfname#"<br>&lt;cflocation url="temppdf/#pdfname#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668448">34</a> by Raymond Camden
		posted on 8/26/2009 at 6:25 PM
		</div>
		<div class="comment_text"><p>So are you sure this:</p><p>image = "#request.maindrivePath#templates\#qgettemplate.COMPANY_Template#"</p><p>points to a valid image? How about hard coding that to a jpg temporarily.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668449">35</a> by Damo
		posted on 8/26/2009 at 6:50 PM
		</div>
		<div class="comment_text"><p>Now The page cannot be found<br>The page you are looking for might have been removed, had its name changed, or is temporarily unavailable.</p><p>I dont know what im doing wrong with it now</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668451">36</a> by Raymond Camden
		posted on 8/26/2009 at 6:51 PM
		</div>
		<div class="comment_text"><p>Remove your cflocation.</p><p>Biggest tip I can tell folks when debugging is to run the LEAST amount of code possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668450">37</a> by Damo
		posted on 8/26/2009 at 6:58 PM
		</div>
		<div class="comment_text"><p>This is now posting on the screen</p><p>destination = "#request.maindrivePath#temppdf\#pdfname#"</p><p>but when i go to this location its not there ;-(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668452">38</a> by Raymond Camden
		posted on 8/26/2009 at 6:59 PM
		</div>
		<div class="comment_text"><p>You left the destination out of the tag. See the &gt; ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668455">39</a> by Damo
		posted on 8/26/2009 at 7:03 PM
		</div>
		<div class="comment_text"><p>What do you mean by that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668453">40</a> by Raymond Camden
		posted on 8/26/2009 at 7:07 PM
		</div>
		<div class="comment_text"><p>Look at your code:</p><p> avatar<br>The code as it is now</p><p>&lt;cfpdf<br>action = "addwatermark"<br>source = "#request.maindrivePath#testfiles\#qgetinvoice.INVOICE_PDFFile#"<br>image = "#request.maindrivePath#templates\#qgettemplate.COMPANY_Template#"<br>foreground = "No"<br>overwrite = "yes"<br>pages = "1"<br>rotation = "45"<br>showonprint = "yes"&gt;<br>destination = "#request.maindrivePath#temppdf\#pdfname#</p><p>See the &gt; after showonprint?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668454">41</a> by Damo
		posted on 8/26/2009 at 7:35 PM
		</div>
		<div class="comment_text"><p>Perfect job Raymond, that was the problem, so when i put it in the correct place and put back in my &lt;cflocation url="temppdf/#pdfname#"&gt; all is working fine now, <br>all I have to do now is make the image smaller to fit on the screen</p><p>Thanks for all your help</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668456">42</a> by Pushpendra
		posted on 11/13/2009 at 5:59 PM
		</div>
		<div class="comment_text"><p>Is it possible to read the content of pdf file and print it or store it to database table.<br>&lt;cfpdf action = "read" name = "test" source = "D:\Dummy.pdf" &gt;<br>&lt;cfoutput&gt;#test#&lt;/cfoutput&gt;<br>The above lines of code on execution returns coldfusion.pdf.PDFDocWrapper@3c4c33<br>I assume this is some sort of wrapper, but then how can i get the text written in pdf?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668458">43</a> by Raymond Camden
		posted on 11/13/2009 at 6:48 PM
		</div>
		<div class="comment_text"><p>To get the text from a PDF...</p><p>In CF8, you have to use DDX, or use my pdfutils CFC (<a href="http://disq.us/url?url=http%3A%2F%2Fpdfutils.riaforge.org%3AjEMmFtMjKDU5mpLI4VSgD25fKO8&amp;cuid=3321886" rel="nofollow noopener" title="http://pdfutils.riaforge.org">http://pdfutils.riaforge.org</a>)</p><p>In CF9, Adobe added it as a feature to the cfpdf tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668457">44</a> by Rawdyn
		posted on 9/5/2011 at 10:19 AM
		</div>
		<div class="comment_text"><p>Thanks again for another great article Ray.<br>I used the watermark tecnique to create several templates containing logos, background and some text common to a range of certificates our system produces.<br>The system just adds that template to the individual cert data (pdf of the students info and cert uniqueID etc). <br>Doing it this way changed the processing time from 17 seconds (it was getting hung up on a tiled background image) to less that 400 ms.<br>The certificates look a million times better too as I created the source PDF directly from illustrator so they now print in HD.<br>Awesome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668459">45</a> by LAKSHMI
		posted on 10/11/2011 at 5:50 PM
		</div>
		<div class="comment_text"><p>While searching<br>Existing system: contains PDFs which consists of statistical data in Tabular format when i search for a particular Criteria it displays the contents of the statistical data(i.e; numbers).</p><p>what i want / Proposed system: same pdfs (consists of description in their properties) when i search for particular criteria it must show the summary/contents in the form of characters (reason is it will be helpful to the users to choose among the selected topics)given in the metadata or properties .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668460">46</a> by Raymond Camden
		posted on 10/11/2011 at 5:51 PM
		</div>
		<div class="comment_text"><p>You do not get to control the summary/context. It's driven by SOLR. If you want to display something in particular, you would need to supply that yourself when indexing the PDFs. We provide 4 custom columns you can use for this purpose.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668461">47</a> by LAKSHMI
		posted on 10/11/2011 at 6:23 PM
		</div>
		<div class="comment_text"><p>I will explain the Something particular that i want<br>when we do searching we will see the list of search results along with some little description(the description must contain the "CRITERIA" such that i can understand whether the search item is useful to me or not)<br>regarding indexing i had done it using the admin page can u please tell me how to get to my requirement using the 4 custom column and where can i get it</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668462">48</a> by Raymond Camden
		posted on 10/11/2011 at 6:57 PM
		</div>
		<div class="comment_text"><p>Well the context _should_ contain the criteria.</p><p>As for how to use custom fields, please read the documentation on cfindex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668466">49</a> by LAKSHMI
		posted on 10/11/2011 at 7:31 PM
		</div>
		<div class="comment_text"><p>on your previous comment u mentioned about the 4 custom column what is it? and how can it will be useful to me?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668463">50</a> by Raymond Camden
		posted on 10/11/2011 at 7:35 PM
		</div>
		<div class="comment_text"><p>When you index data, you have the ability to supply 4 separate custom fields. The data there can be whatever you want.</p><p>Please. Read. The. Docs. Seriously - look at cfindex. Also, I have a presentation you can watch on using Solr in CF in general.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668465">51</a> by LAKSHMI
		posted on 10/11/2011 at 9:34 PM
		</div>
		<div class="comment_text"><p>please update the links of the presentation and where can i find those docs</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668468">52</a> by LAKSHMI
		posted on 10/11/2011 at 10:17 PM
		</div>
		<div class="comment_text"><p>what about this idea <br>1.i will search in the collection and get the set of pdfs containing CRITERIA<br><a href="http://disq.us/url?url=http%3A%2F%2F2.now%3Amdj6i2QLFVUcuI77YQQjoOubmVU&amp;cuid=3321886" rel="nofollow noopener" title="2.now">2.now</a> script for accessing PDF by PDF and reading the lines that contains CRITERIA<br>But it looks complicated can u suggest whether its worthdoing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668471">53</a> by Raymond Camden
		posted on 10/11/2011 at 10:38 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fslidesix.com%2Fview%2FColdFusion-and-Solr%3AtG85oET08JwAQTYfUo0fY6nWSfc&amp;cuid=3321886" rel="nofollow noopener" title="http://slidesix.com/view/ColdFusion-and-Solr">http://slidesix.com/view/Co...</a></p><p>As to the docs, they are in the Adobe CF docs.</p><p>As to your second comment, I do not understand what you are saying unfortunately.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668467">54</a> by LAKSHMI
		posted on 10/11/2011 at 11:32 PM
		</div>
		<div class="comment_text"><p>how can we get the Additional properties of the Pdf file. i know upto properties.please help me in this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668469">55</a> by Raymond Camden
		posted on 10/11/2011 at 11:33 PM
		</div>
		<div class="comment_text"><p>Look at CFPDF. It gets info about PDFs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668473">56</a> by LAKSHMI
		posted on 10/12/2011 at 6:09 PM
		</div>
		<div class="comment_text"><p>I am unable to get those Additional metadata of a document i am accessing the MetaData only.<br>so please give me the information or where can i get the information.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668472">57</a> by Raymond Camden
		posted on 10/12/2011 at 8:57 PM
		</div>
		<div class="comment_text"><p>I'm sorry, but I do not know what you mean by "Additional" metadata. I can tell you that there is an open source project called pdfutils (<a href="http://disq.us/url?url=http%3A%2F%2Fpdfutils.riaforge.org%3AjEMmFtMjKDU5mpLI4VSgD25fKO8&amp;cuid=3321886" rel="nofollow noopener" title="http://pdfutils.riaforge.org">http://pdfutils.riaforge.org</a>) that has a utility to get additional info (I forget the type) from PDFs, so you can try that as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668475">58</a> by LAKSHMI
		posted on 10/12/2011 at 11:57 PM
		</div>
		<div class="comment_text"><p>Thanks alot for your support.</p></div>
	</div>
</div>
		