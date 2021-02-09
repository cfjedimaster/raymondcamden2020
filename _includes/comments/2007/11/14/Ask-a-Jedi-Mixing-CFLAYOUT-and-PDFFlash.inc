
<div class="comment" id="c_1713674306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674306">1</a> by Dave Ferguson
		posted on 11/14/2007 at 8:03 PM
		</div>
		<div class="comment_text"><p>Load the pdf/flash into an iframe inside the cflayout.  This should solve the problem.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674308">2</a> by Raymond Camden
		posted on 11/14/2007 at 8:09 PM
		</div>
		<div class="comment_text"><p>Not working for me. This is what I used for the CFM requested:</p><p>&lt;iframe src="test.pdf" height="100%" width="100%"&gt;&lt;/iframe&gt;</p><p>I get an empty iframe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674307">3</a> by Dave Ferguson
		posted on 11/14/2007 at 9:03 PM
		</div>
		<div class="comment_text"><p>This is what I did and it seems to work.  I also did it without an iframe by generating thumbnails at 100% from the source pdf.</p><p>---- index.cfm -----</p><p>&lt;CFSETTING SHOWDEBUGOUTPUT="NO"&gt;<br>&lt;CFLAYOUT TYPE="BORDER"&gt;<br>	&lt;CFLAYOUTAREA POSITION="LEFT" STYLE="width:300px;"&gt;<br>		&lt;a href="javaScript:ColdFusion.navigate('./loadPDF.cfm?pdf=test.pdf','vewer')"&gt;VIEW PDF&lt;/A&gt;<br>	&lt;/CFLAYOUTAREA&gt;<br>	&lt;CFLAYOUTAREA POSITION="center" NAME="vewer"&gt;</p><p>	&lt;/CFLAYOUTAREA&gt;</p><p>&lt;/CFLAYOUT&gt;</p><p>------ loadPDF.cfm -----<br>&lt;CFOUTPUT&gt;<br>&lt;iframe src="#url.pdf#" height="90%" width="90%"&gt;&lt;/iframe&gt;<br>&lt;/CFOUTPUT&gt;</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674309">4</a> by Raymond Camden
		posted on 11/14/2007 at 9:08 PM
		</div>
		<div class="comment_text"><p>Well wait - if you use thumbnails, its JPGs. I consider that cheating. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674310">5</a> by Dave Ferguson
		posted on 11/14/2007 at 9:54 PM
		</div>
		<div class="comment_text"><p>I don't call it cheating.  I call it creative problem solving. :)</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674312">6</a> by Michael Brennan-White
		posted on 11/14/2007 at 10:28 PM
		</div>
		<div class="comment_text"><p>Thanks for all the help.</p><p>I am so appreciative that I will be able to implement either solution based on user input.</p><p>FlashPaper is "different"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674311">7</a> by I Rz
		posted on 3/6/2008 at 12:02 AM
		</div>
		<div class="comment_text"><p>You can embed PDF using &lt;EMBED src="ekgbin/#PDFFileName#.pdf" width="100%" height="825px" href="ekgbin/#PDFFileName#.pdf"&gt;&lt;/EMBED&gt;.<br>Have been using that for a couple of years with a prototype.js powered Ajax site. Have not tried with cflayout though. Just FYI.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674314">8</a> by I Rz
		posted on 3/6/2008 at 1:06 AM
		</div>
		<div class="comment_text"><p>Just tested embed a pdf using cflayout and it works fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674313">9</a> by rgreen517
		posted on 5/6/2011 at 11:39 PM
		</div>
		<div class="comment_text"><p>For some reason, this is now broke with CF 9.0.1 (with hotfix installed) in IE 6,7,8, it still works fine on our CF 8, development server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674315">10</a> by rgreen517
		posted on 5/6/2011 at 11:40 PM
		</div>
		<div class="comment_text"><p>Sorry, should have mentioned, "broke" in regards to using the embed tag for the PDF, inside a cflayoutarea. The PDF doesn't show up at all. Does anyone know if there is a newer way in CF9 to accomplish this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674318">11</a> by Raymond Camden
		posted on 5/7/2011 at 12:49 AM
		</div>
		<div class="comment_text"><p>Which part is broken? You mean the embed from comment 7?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674317">12</a> by rgreen517
		posted on 5/7/2011 at 12:54 AM
		</div>
		<div class="comment_text"><p>Yes, for some reason, it will no longer show in the cflayoutarea now that we have upgraded to CF9. I found a way around it, using the &lt;object&gt; tag, and embedding that way, but I had to strip my page of all cflayout, and redo the page in a standard table layout 100% width and height, and that works. It is just odd, that in the CF8 environment, the embed tag still works fine. No changes, all we did was update the server to CF9, since then, it hasn't worked on the server. Very odd. But then again, the &lt;object&gt; embed doesn't work either. Has CFlayout changed (ie. some new required parameters, that 8 didn't need)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674321">13</a> by Raymond Camden
		posted on 5/7/2011 at 12:57 AM
		</div>
		<div class="comment_text"><p>Well, the Ajax code behind the scenes was updated significantly between 8 and 9.</p></div>
	</div>
</div>
		