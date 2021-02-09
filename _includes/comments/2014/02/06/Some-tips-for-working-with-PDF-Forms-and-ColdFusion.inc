
<div class="comment" id="c_1714081609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081609">1</a> by Candyce Mairs
		posted on 2/7/2014 at 9:39 PM
		</div>
		<div class="comment_text"><p>Just to clarify, Adobe Acrobat creates PDF forms that are stored as bit data. LiveCycle Designer creates PDF forms that are stored as XML. If you want to use ColdFusion to work with the form and data, you must create the form in LiveCycle Designer, or open the Acrobat form in LiveCycle Designer and modify it to suit your needs as XML.</p><p>ColdFusion could not access the Acrobat form bit data, which I think is why no error or exception was thrown.</p><p>When you Acrobat versions 7-9 or X, you get LiveCycle Designer installed in the same installation. Users of Acrobat XI do not get LIveCycle Designer installed with the Acrobat installation. It is now a separate license but does have a trial version available like all the other Adobe products.</p><p>Livecycle Designer offers much more flexibility when working with PDF forms, and is a program that many do not even know exists. As I start off saying in my PDF classes, a PDF form is not a PDF form, there are different types of PDF forms. You need to be sure your PDF form is the correct type of form for your workflow.</p><p>Thank you for posting on this. I just this morning put this same information into my blog at <a href="http://disq.us/url?url=http%3A%2F%2Fcmairscreate.com%3AdfbxkU5XISz7gxOGpOzEHrotpWw&amp;cuid=3321886" rel="nofollow noopener" title="cmairscreate.com">cmairscreate.com</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081611">2</a> by Raymond Camden
		posted on 2/8/2014 at 12:15 AM
		</div>
		<div class="comment_text"><p>Thanks for the info Candyce. One small note:</p><p>"ColdFusion could not access the Acrobat form bit data, which I think is why no error or exception was thrown."</p><p>To be clear, CF *did* throw an error when the result attribute was used, and it threw an error if you tried to parse the XML. I really think CF should be able to detect AcroForm vs LiveCycle and throw a *better* exception.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081605">3</a> by Craig Inman
		posted on 2/8/2014 at 3:40 AM
		</div>
		<div class="comment_text"><p>Ray, this is a very helpful post. I found that Google Chrome's preview of a PDF does not display the input data even though it is there. Firefox is terrible with the document and cannot even parse where the fields start and end. Internet Explorer uses Acrobat's in browser viewer. Of course opening the document in Acrobat itself works perfectly.</p><p>It would be really awesome if CF could just "print" the PDF to a flattened version that didn't have the fields anymore. Just the data in the right places. I know that this is a LiveCycle thing, but I run into formatting issues with Acrobat a lot when working with forms and non-Acrobat readers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081612">4</a> by Raymond Camden
		posted on 2/8/2014 at 3:59 AM
		</div>
		<div class="comment_text"><p>I'm on my mobile device so can't check the docs now but I'm pretty sure cfpdf has a flatten option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081614">5</a> by daniel kessler
		posted on 2/10/2014 at 8:25 PM
		</div>
		<div class="comment_text"><p>It does have a flatten option and that fixes a lot of problems.  Be sure to flatten after any merges also.</p><p>&lt;cfpdf action="write" source="#output_space#" destination="#view_file#" overwrite="yes" flatten="yes"  saveOption = "linear" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081606">6</a> by Craig Inman
		posted on 2/10/2014 at 9:54 PM
		</div>
		<div class="comment_text"><p>Thanks Daniel and Ray. Unfortunately I use LiveCycle Designer, so I cannot use the cfpdf tag on those forms.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081604">7</a> by Raymond Camden
		posted on 2/10/2014 at 10:22 PM
		</div>
		<div class="comment_text"><p>I thought we agreed that *those* were the ones that worked?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081607">8</a> by Mike Collins
		posted on 2/12/2014 at 9:06 PM
		</div>
		<div class="comment_text"><p>I've done a bunch of pdf forms that are submitted to CF for processing.  One thing that has moved me away from them is that Chrome now defaults to their PDF viewer which does not support submitting pdfs.  So you need to educate your users to go into Chrome and make sure they are using Adobe Reader.</p><p>Looking forward to CF11 and the added PDF functionality.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081608">9</a> by Mike Collins
		posted on 2/12/2014 at 9:23 PM
		</div>
		<div class="comment_text"><p>Craig - check out CF11 PDF functionality.  they are embedding many livecycle features.  I believe LC output will basically be there for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1875166456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1875166456">10</a> by Sandy
		posted on 2/25/2015 at 6:31 PM
		</div>
		<div class="comment_text"><p>Thank you so much for this.  Was trying to read a client's PDF form to see about filling it in using CF10, and getting that same error.  After reading this, opening the form in LiveCycleDesigner, and saving it from there...it works!  *whew*</p></div>
	</div>
</div>
		