
<div class="comment" id="c_1714082343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082343">1</a> by Rick
		posted on 3/17/2014 at 1:48 AM
		</div>
		<div class="comment_text"><p>I have not tried any of this....and I am not a CSS expert by any means, but had these sudden thoughts...</p><p>Put a &lt;div&gt; around the &lt;p&gt;&lt;/p&gt; block , and put the 'style' for the image inside the &lt;div&gt; statement. So, roughly, &lt;div style:stuff-including-image&gt;&lt;p&gt;the text goes here &lt;/p&gt;&lt;/div&gt;</p><p>Also, in your test code between the divs (or the &lt;p&gt;'s), you might need a &lt;div&gt; with a style:position:relative&lt;/div&gt;, otherwise the next  certificate image is placed on top of the previous one. You might also need a clear:left between each certificate image.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082345">2</a> by James Moberg
		posted on 3/17/2014 at 5:46 AM
		</div>
		<div class="comment_text"><p>I encountered something similar when using small GIF images that were all different. Even though the filenames were different, CF8 CFDocument would display all images using the same source image.  (I need to find the test code that I was using so I can see if this issue still exists in ColdFusion 9, 10 or 11.)</p><p>I wrote scripts to generate finisher certificates (name, age, finish time, rank, etc).  To work around multiple CSS layout limitations and eliminate possible performance issues, we started using pre-generated PDF templates with form fields. We'd use cfpdfform to populate a PDF that has named fields (the fields would be styled with embedded fonts that weren't installed on the server). After saving the updated PDF, we'd re-read it and flatten it.  Here's</p><p>&lt;cfpdfform action="POPULATE" source="C;\originalPDF.pdf" destination="C:\PopulatedPDF.pdf" overwrite="yes" overwritedata="yes"&gt;<br>	&lt;cfpdfformparam name="Name1" value="#Name1#"&gt;<br>	&lt;cfpdfformparam name="Name2" value="#Name2#"&gt;<br>	&lt;cfpdfformparam name="Name3" value="#Name3#"&gt;<br>&lt;/cfpdfform&gt;</p><p>&lt;cfpdf action="write" source="C:\PopulatedPDF.pdf" destination="C:\FinalPDF.pdf" overwrite="yes" flatten="yes"&gt;</p><p>In addition, if we want to have multiple certificates in a single PDF, we use CFPDF to merge them.  To bring the bloated filesize down to something tolerable, we use CFExecute &amp; ghostscript.  For complex placement/population, we gave up back in ColdFusion 8 and started using iText directly.</p><p>Another command line option we just started using is wkhtmltopdf.  It's PDF generation is vastly superior to the 2008 engine that CFDocument currently uses for ColdFUsion 9-11beta.  Check it out. <a href="http://disq.us/url?url=http%3A%2F%2Fwkhtmltopdf.org%2F%3Ajq38gcqC8r8OE3PdrCKObfSyMFw&amp;cuid=3321886" rel="nofollow noopener" title="http://wkhtmltopdf.org/">http://wkhtmltopdf.org/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082348">3</a> by James Moberg
		posted on 3/17/2014 at 8:56 PM
		</div>
		<div class="comment_text"><p>I just verified that the CFDocument bug I encountered exists in ColdFusion 8, 9, 10 &amp; 11 installations.</p><p>Small PNG images with transparency are duplicated.  (It may work with larger PNG images too, but I never tried.)  I created multiple unique PNG, JPG &amp; GIF images using CFImage.  Transparent PNG images were created using ImageNew("", 19, 9, 'argb'). The transparent GIF &amp; regular JPG images work fine, but all PNG images end up displaying the first image that is used in the CFDocument.</p><p>(I can't test the code &amp; images on <a href="http://disq.us/url?url=http%3A%2F%2FCFLive.net%3AyQTlgiq6hWu9XrR1nQPNsjsKlHo&amp;cuid=3321886" rel="nofollow noopener" title="CFLive.net">CFLive.net</a> or <a href="http://disq.us/url?url=http%3A%2F%2FTryCF.com%3AWFnBEWJd_EwolaJpMHlB3PAXA0k&amp;cuid=3321886" rel="nofollow noopener" title="TryCF.com">TryCF.com</a> either due to the CFDocument tag being disabled.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082346">4</a> by John
		posted on 3/17/2014 at 10:58 PM
		</div>
		<div class="comment_text"><p>Came across a similar problem. <br>I ended up creating the content inside cfsavecontent and then calling the variable inside the cfdocument.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082344">5</a> by Ty Whalin
		posted on 3/18/2014 at 6:59 PM
		</div>
		<div class="comment_text"><p>I tried using the cfsavecontent method for a pdf document created with the cfdocument tag but when it came time to output the message and attach the pdf it had difficulty doing it. The only way I could make it work was to use the name="invcontent" attribute in the cfdocument tag  and then set the file name and content with a cfmailparam tag.</p><p>Which is essentially what Ray has done in this example. But I directly hard coded the images in the tables or with image tag's vs. using any kind of cfimage resolution. I may have to take a look at James's way of doing it via cfimage and the cfpdf action. Interesting option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082347">6</a> by James Moberg
		posted on 3/19/2014 at 8:27 PM
		</div>
		<div class="comment_text"><p>I reported the ColdFusion 8, 9, 10 &amp; 11 bug here and posted sample code:<br>#3725010 "CFDocument duplicates transparent PNG images of equal dimensions"<br><a href="https://disq.us/url?url=https%3A%2F%2Fbugbase.adobe.com%2Findex.cfm%3Fevent%3Dbug%26id%3D3725010%3AoDxdr5G0Yb-WR1bfmnK8l9Pvj54&amp;cuid=3321886" rel="nofollow noopener" title="https://bugbase.adobe.com/index.cfm?event=bug&amp;id=3725010">https://bugbase.adobe.com/i...</a></p><p>Transparent PNG images look pretty amazing on PDFs (especially compared to a transparent GIF), but use any with the same dimensions and you'll encounter this bug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4974402350">
	<div>
		<img src="https://disqus.com/api/users/avatars/larry_rampenthal.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4974402350">7</a> by Larry Ramp
		posted on 6/30/2020 at 6:01 PM
		</div>
		<div class="comment_text"><p>I know this is old but this worked great for a certificate with a name, issue date, and expiration date.<br>CF 2016 Pro.<br>Win 2018 server<br>&lt;cfheader name="Content-Disposition" value="attachment;filename=#pdfFileName#-certificate.pdf"&gt;<br>&lt;cfcontent type="application/pdf"&gt;<br>&lt;cfdocument format="pdf" pagetype="custom" orientation="landscape" fontembed="true" unit="in" localurl="true" marginleft="0" margintop="0" marginright="0" marginbottom="0" backgroundvisible="true" pageheight="8.5" pagewidth="8.5"&gt;<br>&lt;cfinclude template="stylepage.cfm"&gt;</p><p>&lt;div style="position:absolute; top:318px; left:38px;font-size:20px;width:360px;height:198px;"&gt;<br> &lt;div style="text-align:center;margin-top:78px;font-size:20px;"&gt;&lt;cfoutput&gt;#name#&lt;/cfoutput&gt;&lt;/div&gt;<br> &lt;div style="position:absolute;margin-left:13px;margin-top:143px;font-size:14px;"&gt;&lt;cfoutput&gt;#cert-date#&lt;/cfoutput&gt;&lt;/div&gt;<br> &lt;div style="position:relative;margin-left:106px;margin-top:44px;font-size:14px;"&gt;&lt;cfoutput&gt;#exp-date#&lt;/cfoutput&gt;&lt;/div&gt;<br>&lt;/cfdocument&gt;</p><p>style include contained: (this is the blank certificate in the background)<br>&lt;style type="“text/css”"&gt;<br>body {<br>background-image: url("<a href="https://disq.us/url?url=https%3A%2F%2Fwww.yourimage.com%2Fcertificate-image.png%3ACmkPKXMCFF0kofqt38TgT3zBup0&amp;cuid=3321886" rel="nofollow noopener" title="https://www.yourimage.com/certificate-image.png">https://www.yourimage.com/c...</a>");<br>  background-repeat: no-repeat;<br>  background-attachment: fixed; <br>  }<br>&lt;/style&gt;</p></div>
	</div>
</div>
		