
<div class="comment" id="c_1713744491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744491">1</a> by Seth Johnson
		posted on 1/22/2013 at 8:50 PM
		</div>
		<div class="comment_text"><p>Thanks a bunch for this post Ray, will come in really handy for monitoring AWS space usage.  I tried it and it worked on Railo right out of the box too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744492">2</a> by Raymond Camden
		posted on 1/22/2013 at 8:58 PM
		</div>
		<div class="comment_text"><p>AWS brings up a good point. I was going to mention that even if used AWS for file uploads, you may still get screwed by log files (that's what screwed me), but your example is great too. This could be used to ensure your AWS store doesn't go super high and cost you a bundle.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744493">3</a> by Tarek Ezzeddine
		posted on 1/22/2013 at 9:16 PM
		</div>
		<div class="comment_text"><p>nice post, But how to apply the same in CF9? any way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744494">4</a> by Raymond Camden
		posted on 1/22/2013 at 9:21 PM
		</div>
		<div class="comment_text"><p>Try this: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.jozza.net%2Fblog%2Fmeasuring-disk-space-in-coldfusion%2F141%2F%3AQ44HBx6Ia1fvDN6rv3_zG641XVM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.jozza.net/blog/measuring-disk-space-in-coldfusion/141/">http://www.jozza.net/blog/m...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744496">5</a> by GrumpyCFer
		posted on 1/23/2013 at 5:13 AM
		</div>
		<div class="comment_text"><p>Note that with standard configurations at extremely low disk space, the email will not be sent because it can not be spooled to disk.</p><p>There are ways around that, like spooling to memory, but it's something to be aware of.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744497">6</a> by Raymond Camden
		posted on 1/23/2013 at 6:35 AM
		</div>
		<div class="comment_text"><p>Hence the minimum of 1 gig above. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744495">7</a> by GrumpyCFer
		posted on 1/23/2013 at 12:36 PM
		</div>
		<div class="comment_text"><p>We once had a rogue process on a crash/restart loop. The logs chewed up more than a few gig in the space of an hour. Just something to be aware of...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2950300174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2950300174">8</a> by alecken
		posted on 10/14/2016 at 3:02 PM
		</div>
		<div class="comment_text"><p>I don't see where is the function for getFreeSpace('./')</p></div>
	</div>
</div>
		
<div class="comment" id="c_2950303547">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2950303547">9</a> (In reply to <a href="#c_2950300174">#8</a>) by Raymond Camden
		posted on 10/14/2016 at 3:04 PM
		</div>
		<div class="comment_text"><p>It is a ColdFusion function. I'm not sure when it was added, but certainly over 3 years ago.</p></div>
	</div>
</div>
		