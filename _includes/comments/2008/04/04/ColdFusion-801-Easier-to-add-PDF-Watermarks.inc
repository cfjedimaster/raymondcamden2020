
<div class="comment" id="c_1713679186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679186">1</a> by David Buhler
		posted on 4/4/2008 at 8:59 PM
		</div>
		<div class="comment_text"><p>Interesting.</p><p>I wasn't aware of the toBinary() method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679194">2</a> by Anthony Webb
		posted on 4/4/2008 at 10:09 PM
		</div>
		<div class="comment_text"><p>Thanks for the example Ray, can't wait to try it out.</p><p>One question though, the whole cfheader thing, is that file "test.pdf" an actual file placeholder that I should place in my webroot?</p><p>I've been using the following to show PDF's:<br>&lt;cfcontent type="application/pdf"&gt;<br>&lt;cfoutput&gt;#pdfContent#&lt;/cfoutput&gt;</p><p>Which works great in al browsers on windows, and mac safari is fine, but in mac firefox for some reason it will actually try to kick off a download?</p><p>I've been looking for a solution for some time now, and thought I'd try your code from the example above, but was a little confused about the whole "test.pdf" thing.</p><p>Thanks again Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679185">3</a> by Raymond Camden
		posted on 4/4/2008 at 10:13 PM
		</div>
		<div class="comment_text"><p>No, you dont make test.pdf. This tells the code to serve the file up with a name already (test.pdf).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679187">4</a> by Anthony Webb
		posted on 4/4/2008 at 10:23 PM
		</div>
		<div class="comment_text"><p>Thanks for the clarification Ray. I'll give it a shot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679191">5</a> by Joshua Curtiss
		posted on 4/4/2008 at 10:35 PM
		</div>
		<div class="comment_text"><p>Oh yes!! BSG, can't wait!! :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679195">6</a> by Gary Funk
		posted on 4/5/2008 at 2:14 AM
		</div>
		<div class="comment_text"><p>@Ray. Are you readfy to order your BSGF pizza tonight?</p><p>Just call up and say "I want to order a fracking pizza." They will ask "How long has Starbuck been gone?" and you say "Just over two months."</p><p>Yes, I know you think it's a prank.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679189">7</a> by t b
		posted on 4/5/2008 at 1:51 PM
		</div>
		<div class="comment_text"><p>Regarding Anthony Webbs firefox issue could it be the download pdf extension running. This extension causes firefox to offer to download the file rather than open a pdf that is clicked on. Just a thought,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679190">8</a> by microgluf
		posted on 9/14/2008 at 7:31 PM
		</div>
		<div class="comment_text"><p>I know it's an old post, but I thought I would comment on Anthony's issue anyway :-)</p><p>I found the cfcontent method to be more accurate across browsers/os<br>I'm on OSX and I found that safari &amp; ff have sometimes odd behaviours, being a bit more anal on the quality and proper syntax of the header response.</p><p>I use <br>&lt;cfheader name="Content-Disposition"  value="inline; filename=#outFilename#" /&gt;<br>or<br>&lt;cfheader name="Content-Disposition"  value="attachment; filename=#outFilename#" /&gt;<br>then<br>&lt;cfcontent type="application/pdf" file="#ExpandPath( outFilename )#" deletefile="yes" /&gt;</p><p>This allows you to control the way you like your delivery to be.<br>** note this example already uses a temporary disk file,</p><p>The drawback is that cfcontent uses a CF process for the delivery rather than leaving that task to the frontend.<br>So you can use the cflocation delivery instead.<br>&lt;cflocation url="./#outFilename#" addtoken="no" /&gt;</p><p>** each case is different, just a thougth</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679188">9</a> by Kurt
		posted on 7/23/2009 at 9:33 PM
		</div>
		<div class="comment_text"><p>You know what? <br>That binary trick worked for me, but the watermark doesn't print.<br>Isn't it supposed to print?<br>If so, how do you make it print?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679184">10</a> by Raymond Camden
		posted on 7/23/2009 at 9:40 PM
		</div>
		<div class="comment_text"><p>So you see the watermark in Acrobat, but not on print?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679193">11</a> by Kurt
		posted on 7/24/2009 at 2:03 AM
		</div>
		<div class="comment_text"><p>Here's how you make it print (with a few more options added):<br>&lt;cfpdf action="addWatermark" text="&lt;b&gt;SAMPLE COPY&lt;/b&gt;" source="printOnDemand" foreground="true" showonprint = "yes" rotation = "45" position = "50,30" opacity = "1"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679192">12</a> by Grant Powell
		posted on 12/6/2013 at 7:19 PM
		</div>
		<div class="comment_text"><p>Anyone know how to stylize the text?  I've researched half a dozen demos using DDX and not one single one them works.  Has anyone successfully manipulated text in PDF?  I have not yet found a successful implementation.</p></div>
	</div>
</div>
		