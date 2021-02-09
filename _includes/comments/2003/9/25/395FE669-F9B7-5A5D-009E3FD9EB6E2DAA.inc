
<div class="comment" id="c_1713614965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614965">1</a> by Mark W. Breneman
		posted on 9/25/2003 at 6:17 PM
		</div>
		<div class="comment_text"><p>Holy cow!</p><p>Why didn’t someone tell me this was possible before? ?  I don’t know how I missed that my beloved Cold fusion Studio was able to be extended this way. I took Raymond Camden's “now” script and made it into the super comment maker I have always wanted CFS to do.</p><p>It now outputs:<br>&lt;!--- Comment by your name here on 9/25/2003:   ---&gt;</p><p>The one question I have is why do I have to add 1 to the month to get it to be correct?  Is it my PC?</p><p>function Main() {<br>var date;<br>var str;<br>var app;<br>var doc;</p><p>	date = new Date();<br>	str = "&lt;!--- Comment by Me on " + (date.getMonth()+1) + "/" + date.getDate() + "/" + date.getYear() + ":   ---&gt;";<br>	app = Application;<br>//	app.MessageBox(str,'Current Date',0);<br>	doc = app.ActiveDocument;<br>	doc.InsertText(str, true);<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614969">2</a> by Raymond Camden
		posted on 9/25/2003 at 7:56 PM
		</div>
		<div class="comment_text"><p>Arrays start with 0, so if the month is 0, it's the same as the 1st month, which is January.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614964">3</a> by ErikG
		posted on 9/27/2003 at 9:55 AM
		</div>
		<div class="comment_text"><p>DWMX is *really* a bad code editor.  I know a lot of people complain about it's speed, and I have some issues with that, but mainly its just the lack of general features that you take for granted.  I posted &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fmx.blogs.com%2Fblog%2F2003%2F09%2Fmy_beef_with_dw.html%3AUWarf6eqA3llkCUGiCjtVwgIohI&amp;cuid=3321886" rel="nofollow noopener" title="http://mx.blogs.com/blog/2003/09/my_beef_with_dw.html">http://mx.blogs.com/blog/20...</a>"&gt;my beef&lt;/a&gt; already.  I still open DWMX2004 every so often (I have a week or so left in my trial) just to get the CFMX tag support.</p><p>I wish Macromedia would let you trial HS+.  Does it support CFMX 6.1 tags the same as DWMX2004?</p><p>And thanks for CFS tools, I was clueless about these as well.  I want to try and get something to remove the characters that MS Word adds for ... and -- and begining and end "; I get text sent to me all the time with these items.</p><p>Completely off topic: Looking forward to taking your class at MAX this year, I also attended your Security session last year in FL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614970">4</a> by Raymond Camden
		posted on 10/7/2003 at 3:44 PM
		</div>
		<div class="comment_text"><p>Sorry for the delay in responding. I'm finding DW to be an ok editor. I'm kinda liking it. Not sure if I'll make the switch though. HS+ does support the 6.1 tags/functions.</p><p>Glad you enjoyed my security session. At MAX, be sure to come up and say (and remind me who you are, I'm horrible with names. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614967">5</a> by Jeff Wilkinson
		posted on 12/2/2003 at 11:52 PM
		</div>
		<div class="comment_text"><p>ErikG, macromedia does have trial downloads of HomeSite, and it does support CFMX tags, though it may be a separate download to add them... (don't recall at the moment)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614972">6</a> by Jeff Wilkinson
		posted on 1/16/2004 at 9:05 PM
		</div>
		<div class="comment_text"><p>BTW, there are more HS/CFS scripts and extensions at:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.wilk4.com%2Fasp4hs%2F%3AMcTCDbVYsLfe_aA_UINz-Ijxovg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.wilk4.com/asp4hs/">http://www.wilk4.com/asp4hs/</a></p></div>
	</div>
</div>
		