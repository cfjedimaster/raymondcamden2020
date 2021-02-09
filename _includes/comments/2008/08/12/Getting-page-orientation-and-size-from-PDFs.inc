
<div class="comment" id="c_1713685059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685059">1</a> by Gary Gilbert
		posted on 8/13/2008 at 12:30 PM
		</div>
		<div class="comment_text"><p>Ray,<br>I think you mean</p><p>&amp;lt;DocumentInformation result="Out1" source="doc1"&amp;gt;&amp;lt;/DocumentInformation&amp;gt;</p><p>In your example you are missing the closing &amp;gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685063">2</a> by Gary Gilbert
		posted on 8/13/2008 at 12:31 PM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>&lt;DocumentInformation result="Out1" source="doc1"&gt;&lt;/DocumentInformation&gt;</p><p>You are missing the closing &gt;</p><p>Please feel free to delete the first comment</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685064">3</a> by Raymond Camden
		posted on 8/13/2008 at 3:45 PM
		</div>
		<div class="comment_text"><p>Fixed. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685061">4</a> by phill.nacelli
		posted on 8/13/2008 at 5:50 PM
		</div>
		<div class="comment_text"><p>Another method is to use the already installed iText library that the cfpdf tag uses to get more information about your pdf file:</p><p>&lt;cfscript&gt;<br>	// pdf file path<br>	pdfFilePath = "existingPdfFile.pdf";</p><p>	// init document<br>	document = createObject("java","com.lowagie.text.Document").init();</p><p>	// init fileIO<br>	fileIO = createObject("java","java.io.FileOutputStream").init(pdfFilePath);</p><p>	// get writer<br>	pdfWriter = createObject("java","com.lowagie.text.pdf.PdfWriter").getInstance(document,fileIO);</p><p>	// output page size info; format is: baseXheight (rot: n degrees)<br>	writeOutput(pdfWriter.getPageSize());<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685062">5</a> by Josh Knutson
		posted on 8/13/2008 at 5:55 PM
		</div>
		<div class="comment_text"><p>I still can't believe how long that took to actually get it working just right to return such simple values. I am more surprised that the getInfo from cfpdf didn't return anything that would have helped out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685065">6</a> by Sam Farmer
		posted on 8/14/2008 at 1:51 AM
		</div>
		<div class="comment_text"><p>Awesome find.</p><p>Much easier than my other solution: convert first page to jpeg at 100%, read image and get image width and height!</p></div>
	</div>
</div>
		