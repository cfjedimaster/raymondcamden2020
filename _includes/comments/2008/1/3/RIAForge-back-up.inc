
<div class="comment" id="c_1713675870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675870">1</a> by Ken Ford
		posted on 1/3/2008 at 6:49 PM
		</div>
		<div class="comment_text"><p>Here is a way to rotate the log files.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fhttpd.apache.org%2Fdocs%2F1.3%2Flogs.html%23rotation%3AWhRg4yhHcuPAylqO0bKH4Z82u4U&amp;cuid=3321886" rel="nofollow noopener" title="http://httpd.apache.org/docs/1.3/logs.html#rotation">http://httpd.apache.org/doc...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675888">2</a> by Raymond Camden
		posted on 1/3/2008 at 7:21 PM
		</div>
		<div class="comment_text"><p>Nice - but can you also find the docs to just make it use daily logs? Please and thank you. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675883">3</a> by Ken Ford
		posted on 1/3/2008 at 8:03 PM
		</div>
		<div class="comment_text"><p>You don't ask for much :-)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fhttpd.apache.org%2Fdocs%2F2.2%2Fprograms%2Frotatelogs.html%3Anyu4Nh7sLBvEIlCllmYQG-cmbzw&amp;cuid=3321886" rel="nofollow noopener" title="http://httpd.apache.org/docs/2.2/programs/rotatelogs.html">http://httpd.apache.org/doc...</a></p><p>CustomLog "|bin/rotatelogs -l /var/logs/logfile.%Y.%m.%d 86400" common</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675885">4</a> by Raymond Camden
		posted on 1/3/2008 at 8:40 PM
		</div>
		<div class="comment_text"><p>Didn't work too well for me. I checked syntax from the command line - and it was ok. But when I would restart it would fail, and no details were logged. :( For now I've turned off the access log.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675884">5</a> by Mo Barger
		posted on 1/3/2008 at 9:36 PM
		</div>
		<div class="comment_text"><p>If you bump up your error log to debug, you should be able to do an apachectl graceful with your rotatelog line active and see what gets thrown.</p><p>FWIW we use cronolog here.</p></div>
	</div>
</div>
		