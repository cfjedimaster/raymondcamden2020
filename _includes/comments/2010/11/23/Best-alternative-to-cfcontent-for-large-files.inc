
<div class="comment" id="c_1713727808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727808">1</a> by Drew
		posted on 11/23/2010 at 7:49 PM
		</div>
		<div class="comment_text"><p>I once worked on a project where I was building a coldfusion based cheap image resizer.  Think amazon: <a href="http://disq.us/url?url=http%3A%2F%2Fecx.images-amazon.com%2Fimages%2FI%2F11pl59fDubL._SL235_.jpg%3ATywPvyxWj7CccFTGu7DQPFcQ5jg&amp;cuid=3321886" rel="nofollow noopener" title="http://ecx.images-amazon.com/images/I/11pl59fDubL._SL235_.jpg">http://ecx.images-amazon.co...</a> vs <a href="http://disq.us/url?url=http%3A%2F%2Fecx.images-amazon.com%2Fimages%2FI%2F11pl59fDubL._SL135_.jpg%3A4MPeg2x8Q8BluhJUWFZZLnJT37w&amp;cuid=3321886" rel="nofollow noopener" title="http://ecx.images-amazon.com/images/I/11pl59fDubL._SL135_.jpg">http://ecx.images-amazon.co...</a></p><p>The problem was cfcontent creates tons of overhead for something that should be very fast.  So I rewrote this to use native Java.  Now granted, much of the overhead was with CFImage vs Java image libraries.  The final bit that made it just that much faster was removing cfcontent for something using java io buffers.  I don't have access to my code right now, it'd require a series of blog posts to explain.</p><p>I don't have performance numbers, but it got down to something you'd expect from native disk io (milliseconds) instead of hundreds of milliseconds.  It also has the benefit of not loading the entire file in memory before flushing it.  You can start with something Ben Nadel put up: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F1227-Using-ColdFusion-To-Stream-Files-To-The-Client-Without-Loading-The-Entire-File-Into-Memory.htm%3AT-R-O8_SkbmvgtmwxcBB68J5jTA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/1227-Using-ColdFusion-To-Stream-Files-To-The-Client-Without-Loading-The-Entire-File-Into-Memory.htm">http://www.bennadel.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727809">2</a> by James Moberg
		posted on 11/23/2010 at 8:41 PM
		</div>
		<div class="comment_text"><p>I'm currently using ProFlashDownload on a project.  I copy all of the files to be downloaded to a publicly accessible sub-directory (named with a hash) and then launch this app to allow download.  (NOTE:  I don't link directly to the files... I use a session-restricted CF redirection script.)<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cftagstore.com%2Ftags%2Fproflashdownload.cfm%3AmHmvbmYTt-eKyKXtk-oxHzdtEfs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cftagstore.com/tags/proflashdownload.cfm">http://www.cftagstore.com/t...</a></p><p>I've added some additional features like allowing the customer to zip all of the files prior to downloading.  The Flash widget performs a background call to a server-side API and the files are deleted after being successfully downloaded.  We added a scheduled process to clean up sub-directories when all the files aren't downloaded.</p><p>Another method I've used is FTP.  This takes all of the load off of the application &amp; web servers and allows for multiple and/or throttled connections.  There are some programs available that will allow you to use a database for authentication... this allows you to create accounts on-the-fly and disable access after x hours or so much bandwidth has occurred.  I haven't tried this program yet, but I highly recommend their other products:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.surgemail.com%2Fsurgeftp%2F%3ALAoUNwkPT2Svbpr1jryUWVUKEp4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.surgemail.com/surgeftp/">http://www.surgemail.com/su...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727810">3</a> by Stefan
		posted on 11/23/2010 at 8:49 PM
		</div>
		<div class="comment_text"><p>we are doing something similar to Ray, buy using rewriter to create "token"-URLs to files outside the webroot for a certain period of time. This is particular useful because the (large) file downloads can benefit from resumed downloads as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727811">4</a> by John Ramon
		posted on 11/23/2010 at 9:30 PM
		</div>
		<div class="comment_text"><p>Does anyone know if Amazon S3 or Microsoft Azure can generate temp links that expire once content has been downloaded?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727812">5</a> by Raymond Camden
		posted on 11/23/2010 at 9:33 PM
		</div>
		<div class="comment_text"><p>You can easily generate a timed link, but it can't be "goes away when downloaded."  But that's a good option for sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727813">6</a> by Grant Eagon
		posted on 11/23/2010 at 10:22 PM
		</div>
		<div class="comment_text"><p>Why not just alias a directory in apache and don't allow indexing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727815">7</a> by Raymond Camden
		posted on 11/23/2010 at 10:35 PM
		</div>
		<div class="comment_text"><p>Because once you have the URL you would always have access.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727828">8</a> by Grant Eagon
		posted on 11/23/2010 at 10:43 PM
		</div>
		<div class="comment_text"><p>Interesting.  Don't have that problem myself, but I would think that your solution of a symlink and maybe adding a cron or cf scheduled task to clean them up might be the easiest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727827">9</a> by Dan Parker
		posted on 11/23/2010 at 11:44 PM
		</div>
		<div class="comment_text"><p>I used something from:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adrianwalker.org%2F2009%2F09%2Fcoldfusion-file-streaming-stream.html%3AOG02L24jN1LhtDqg2t3jXBLT-_4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adrianwalker.org/2009/09/coldfusion-file-streaming-stream.html">http://www.adrianwalker.org...</a></p><p>Serve up  some 200+mb files from a non-web-accessible directory, after I make sure users are allowed to access that file. Streaming rather than opening the file entirely seemed to work much better mem usage wise on the server.</p><p>I push mimetype using setContentType, and a setHeader("Content-Disposition"..) since IE likes attachment, while other browsers seem to prefer inline.<br>Works for us anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727824">10</a> by Josh Knutson
		posted on 11/24/2010 at 1:10 AM
		</div>
		<div class="comment_text"><p>Try to avoid cfcontent, stream the content to help keep the memory impact lower as it will flush to the request buffer as it reads the file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727825">11</a> by CJ
		posted on 11/24/2010 at 12:04 PM
		</div>
		<div class="comment_text"><p>Could something like this be done to help improve security on progressive download based videos?  I understand you would still be able to capture the content via the symlink but it could throw a little twist into it.  Maybe I'm just being hopeful! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727826">12</a> by David Boyer
		posted on 11/29/2010 at 2:44 PM
		</div>
		<div class="comment_text"><p>The best solution I've seen is using mod_xsendfile.  ColdFusion can then simply set a header (x-sendfile) that contains the full path to the download.  The module would then catch the header, remove it (we don't want the client seeing paths) and then have Apache send the file instead of tying up ColdFusion.</p><p>There is a port of this available for IIS too from Helicon (APE) but it only works on the newer versions.</p><p>Other alternatives I've looked at include using URL rewrite rules based on Cookie values set by CF or using symlinks (*nix), junctions (Windows) or dynamic virtual directories (IIS) that you expire and remove with a schedule task.</p><p>I think this is one of those problems that web servers have to solve and not leave it up to our server side technologies.  Apache should bring in mod_xsendfile as an official module and IIS should support it natively.  It'd save everyone a lot of time and effort.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727829">13</a> by Henry Ho
		posted on 3/22/2013 at 2:21 AM
		</div>
		<div class="comment_text"><p>Bad news: Helicon APE does NOT work with CF.  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.helicontech.com%2Fcommunity%2Fmod_xsendfile_problems-8-1090.html%3A5XkKZ2-JFPKlbme3exEsLpl-nI0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.helicontech.com/community/mod_xsendfile_problems-8-1090.html">http://www.helicontech.com/...</a></p></div>
	</div>
</div>
		