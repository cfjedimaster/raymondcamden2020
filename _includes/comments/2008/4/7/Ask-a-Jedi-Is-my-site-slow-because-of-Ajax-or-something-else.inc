
<div class="comment" id="c_1713679199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679199">1</a> by Neil Middleton
		posted on 4/7/2008 at 8:10 PM
		</div>
		<div class="comment_text"><p>Doesn't look like AJAX to me, as when the response starts to load it's quite quick.  There is, however, a good 30 second lag before anything happens in Firebug, which suggests network or server-side problems.</p><p>CF Debugging being switched on on the server could kill it like this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679216">2</a> by Peter J. Farrell
		posted on 4/7/2008 at 8:13 PM
		</div>
		<div class="comment_text"><p>I suspect that the config mode for Mach-II in your Application.cfc is set to 1 (always reload) since it's taking forever on each and every request.  Set it to 0 (reload if config file changes) or -1 (never reload) for better performance.</p><p>FAQ here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fgreatbiztoolsllc-trac.cvsdude.com%2Fmach-ii%2Fwiki%2FFAQWhySlow%3AUdZmdN3xFMmkjCvn1SsO1BiFUlg&amp;cuid=3321886" rel="nofollow noopener" title="http://greatbiztoolsllc-trac.cvsdude.com/mach-ii/wiki/FAQWhySlow">http://greatbiztoolsllc-tra...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679217">3</a> by Peter J. Farrell
		posted on 4/7/2008 at 8:15 PM
		</div>
		<div class="comment_text"><p>Oh, CF debugging could be turned on with "report execution times" on the server and we might not see it because we don't have the right IP.  This is really bad for performance. Is debugging on?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679218">4</a> by DanaK
		posted on 4/7/2008 at 8:19 PM
		</div>
		<div class="comment_text"><p>I would guess its a framework setting as mentioned above. I would rule out networking problems because if you go to the base url... the current version of the site loads pretty snappy for me. My trace to fastservers had barely any latency as well.</p><p>I'd stick with the auto reload mach-ii as mentioned above as your first stopping pt.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679206">5</a> by Mike E.
		posted on 4/7/2008 at 8:40 PM
		</div>
		<div class="comment_text"><p>It does seem more like it is your server,  same as the other comments check Mach-II's reload setting.</p><p>You should also enable gzip on your webserver just to give a little extra performance.<br>looks like you are running on windows.  here is a link for how to enable that with IIS<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.microsoft.com%2Ftechnet%2Fprodtechnol%2FWindowsServer2003%2FLibrary%2FIIS%2Fd52ff289-94d3-4085-bc4e-24eb4f312e0e.mspx%3Fmfr%3Dtrue%3A8PbB7McFlIA9ipa2zYeWjPgcwDw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.microsoft.com/technet/prodtechnol/WindowsServer2003/Library/IIS/d52ff289-94d3-4085-bc4e-24eb4f312e0e.mspx?mfr=true">http://www.microsoft.com/te...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679201">6</a> by Raul Riera
		posted on 4/7/2008 at 8:44 PM
		</div>
		<div class="comment_text"><p>Yes, most likely you are calling onApplicationStart on every request (assumming your app start up code is heavy), I sometimes leave that on by mistake when developing.</p><p>Ajax is pretty lightweight, I have been using it without any problems for a while. Except for some real weird loadData issue that Im trying to figure out (another story :))</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679204">7</a> by Tom Mollerus
		posted on 4/7/2008 at 8:46 PM
		</div>
		<div class="comment_text"><p>Ray, this isn't critical, but more of a comment: this current post rates an F from my install of YSlow/Firefox. I've often thought that YSlow was built to be pretty aggressive. I guess my point is that the individual tests within YSlow may be more helpful than the grade.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679202">8</a> by Raymond Camden
		posted on 4/7/2008 at 8:52 PM
		</div>
		<div class="comment_text"><p>@Tom - good point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679207">9</a> by todd sharp
		posted on 4/7/2008 at 9:08 PM
		</div>
		<div class="comment_text"><p>One more thing - Ray mentioned the 'minified' versions of the Spry files, but the 'packed' versions are even smaller.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679200">10</a> by Adrian J. Moreno
		posted on 4/7/2008 at 9:38 PM
		</div>
		<div class="comment_text"><p>Could this be an issue with CF8 and Java 1.6? Isn't that still a problem? Can the hosting company check which JVM they're using?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679203">11</a> by Raymond Camden
		posted on 4/7/2008 at 10:05 PM
		</div>
		<div class="comment_text"><p>@Todd: Thanks. I always get those confused.</p><p>@Adrian: It could be.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679205">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679205">12</a> by Aaron Longnion
		posted on 4/7/2008 at 10:15 PM
		</div>
		<div class="comment_text"><p>1.) If this is on CF 8, can the hosting company look at the Server Monitor and give you details on what the problem might be?  (or are they that savvy?)</p><p>2.) If it's CF 6.1 - 7, can they put SeeFusion monitoring on it to see what's going on?</p><p>3.) Do you have access to the DB such that you can put traces/profiling on it to see if the DB or SQL statements need tuning?  (the usual suspects are poorly-written queries, poorly implemented table indexes, and queries that pull in much more data than they really need - too many columns or too many rows, or both)</p><p>If you can't figure out any way to get access to the info for 1-3 above, then I'm afraid you're probably just taking shots in the dark at what the problem *might* be.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679208">13</a> by Johan
		posted on 4/8/2008 at 12:13 AM
		</div>
		<div class="comment_text"><p>This is a useful online tool for getting a performance report on a site:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.websiteoptimization.com%2Fservices%2Fanalyze%2F%3A6Og6W6mXDO6lc-aAndOnnJJgatA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.websiteoptimization.com/services/analyze/">http://www.websiteoptimizat...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679209">14</a> by Paul Baylis
		posted on 4/8/2008 at 1:16 AM
		</div>
		<div class="comment_text"><p>Quite correct on the config mode. It was on "1" (oops). That takes care of subsequent loads. I'm working through the other issues. Thanks for the feedback. This should help others too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679213">15</a> by Paul Baylis
		posted on 4/8/2008 at 2:27 AM
		</div>
		<div class="comment_text"><p>I used the tool suggested by Johan. Very useful. Thanks for the link. I scored warnings on:</p><p>-------------------------------------------------<br>TOTAL_OBJECTS - The total number of objects on this page is 16 - consider reducing this to a more reasonable number. Combine, refine, and optimize your external objects. Replace graphic rollovers with CSS rollovers to speed display and minimize HTTP requests.</p><p>TOTAL_SIZE - The total size of this page is 208140 bytes, which will load in 44.68 seconds on a 56Kbps modem. Consider reducing total page size to less than 30K to achieve sub eight second response times on 56K connections. Pages over 100K exceed most attention thresholds at 56Kbps, even with feedback.</p><p>IMAGES_SIZE - The total size of your images is 114183 bytes, which is over 30K. Consider optimizing your images for size, combining them, and replacing graphic rollovers with CSS.</p><p>SCRIPT_SIZE - The total size of external your scripts is 79245 bytes, which is over 8K. Consider optimizing your scripts for size, combining them, and using compression where appropriate for any scripts placed in the HEAD of your documents.<br>-------------------------------------------------</p><p>I'm  not worried about the image sizes. But, I'll need to attend to the others.</p><p>For a pretty simple page, I'm not sure how I end up with 16 objects on there.</p><p>I'm now on the packed versions of the spry js files. They are apparently still quite large, but at least better than before.</p><p>The site is faster at least once the framework is loaded and I'll keep tweaking it.</p><p>Should I get off XML and onto JSON?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679210">16</a> by Joshua Curtiss
		posted on 4/8/2008 at 5:20 AM
		</div>
		<div class="comment_text"><p>I just dropped my hosting from ViUX due to a pretty irritating slant against ColdFusion. Even though it's offered, they're not very helpful when you start encountering problems. And expect them to pretty quickly take the "blame the developer" stance when they can't figure out why performance is so poor.</p></div>
	</div>
</div>
		