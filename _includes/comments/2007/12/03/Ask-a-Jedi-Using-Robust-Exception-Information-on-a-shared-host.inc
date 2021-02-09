
<div class="comment" id="c_1713674895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674895">1</a> by David Buhler
		posted on 12/3/2007 at 8:46 PM
		</div>
		<div class="comment_text"><p>This may be a good post to demonstrate error handling (granularly or in application.cfc's onError) ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674894">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674894">2</a> by Raymond Camden
		posted on 12/3/2007 at 8:49 PM
		</div>
		<div class="comment_text"><p>I've done so before (I'm pretty sure), but I can do another one later today, perhaps focusing on the 'super quick at least hide the crap' solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674887">3</a> by David Buhler
		posted on 12/3/2007 at 9:25 PM
		</div>
		<div class="comment_text"><p>I haven't seen it mentioned before, but I think most developers have the same problem when it comes to error handling:</p><p>1) I need a verbose, 'show me everything that went wrong' PDF (or FlashPaper (for speed)) file, saved to the server. Something I can look at when I get home.</p><p>2) I need some basic information to 'get me thinking', sent to my phone (I have a Sprint Mogul that has weak HTML support).</p><p>The Coldfusion error types are conditional upon the type, and I found the docs and possibilities for error handling to be pretty complex.</p><p>Googling around, I did not see any detailed error handling functions out there. I'm sure someone has written one as part of a larger blog post on a separate problem, but I couldn't find this kind of handy "Util" when searching.</p><p>For reference, below are the CFCatch/CFTry docs (Note that the docs didn't even work when I tried 'em, per the comment):</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F8%2Fhtmldocs%2Fhelp.html%3Fcontent%3DErrors_13.html%3AOl1cIh-fKsRU1sPl5xFl9Rca-j4&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/8/htmldocs/help.html?content=Errors_13.html">http://livedocs.adobe.com/c...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F8%2Fhtmldocs%2Fhelp.html%3Fcontent%3DTags_c_04.html%3AhM-Ur3zJdmOXfvuhEXv4BD6KU8o&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/8/htmldocs/help.html?content=Tags_c_04.html">http://livedocs.adobe.com/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674891">4</a> by Shaji
		posted on 12/4/2007 at 2:39 AM
		</div>
		<div class="comment_text"><p>Depend on edition of CF server.</p><p>If you use CF Enterprise edition with sandbox security, you would not worry about security problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674897">5</a> by Raymond Camden
		posted on 12/4/2007 at 2:44 AM
		</div>
		<div class="comment_text"><p>Shaji - can you clarify your comment please? How does being on a cf server w/ sandbox security make 'Show Robust Exception Info' more secure?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674899">6</a> by Matt Ford
		posted on 12/4/2007 at 3:26 AM
		</div>
		<div class="comment_text"><p>FYI, Leaving robust exception on a production system to "help clients debug their sites", while helpful, is a massive security hole.  Even if they are limiting the visibility to client's static IPs, the fact that said clients would easily see debugging info on all other clients on the same server is chilling and unacceptable.  If you stick with this hosting provider, I would suggest putting &lt;CFSETTING SHOWDEBUGOUTPUT="No"&gt; in your application framework to provide a bit of protection for your site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674896">7</a> by Raymond Camden
		posted on 12/4/2007 at 3:31 AM
		</div>
		<div class="comment_text"><p>Matt, this isn't about debug info. This is about error info. It is not the same. You can, and should, restrict debug info to a particular IP. But the 'robust exception info' is NOT IP restricted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674901">8</a> by Matt Ford
		posted on 12/4/2007 at 3:42 AM
		</div>
		<div class="comment_text"><p>Oops...apologies...I misread the post and assumed we were talking about the debugging setting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674902">9</a> by Shaji
		posted on 12/4/2007 at 7:50 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Sorry for not clarifying my previous comment. You mentioned "... site was throwing errors with the full path information revealed. .... always recommend you turn off Show Robust Exception Information on a production machine.".</p><p>If using CF Enterprise edition with enabled sandbox security, do not bother to turn off 'Show Robust...' on the live production server.</p><p>Keep it in mind that some of people (e.g. inexperienced developer or newbie) do not use an error handling at all time. This is one of reasons that some hosting providers won't turn it off and they allow their clients to debug their sites.</p><p>For CF Standard edition, 'Show Robust...' should be turned off. Worst part is that SQL error with the sql code information revealed even datasource name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674905">10</a> by Raymond Camden
		posted on 12/4/2007 at 8:52 AM
		</div>
		<div class="comment_text"><p>Eh? You say:</p><p>"If using CF Enterprise edition with enabled sandbox security, do not bother to turn off 'Show Robust...' on the live production server."</p><p>Why? Why is it less secure? Why is it less bad? As far as I know, the server edition desn't make it any less secure.</p></div>
	</div>
</div>
		