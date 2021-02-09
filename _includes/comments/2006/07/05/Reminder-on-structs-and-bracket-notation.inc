
<div class="comment" id="c_1713654666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654666">1</a> by Jacob
		posted on 7/6/2006 at 6:29 AM
		</div>
		<div class="comment_text"><p>I think that when using bracket notation, you'll also have to watch out for what case you're using (upper/lower).  I ran into an instance a while back where I was using bracket notation like ["firstname"] but the XML doc actually had "FIRSTNAME" as the node name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654680">2</a> by DanielD
		posted on 7/11/2006 at 6:21 AM
		</div>
		<div class="comment_text"><p>Also not that even with square brackes that is a but with Nodes that start with an underscore.  You get a java.lang.string error when trying to reference it.  I have example code on my blog - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.danield.us%2Fblog%2F%3Aqo3V5Y4nqeSJ8_D5McJ2qz_IycA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.danield.us/blog/">http://www.danield.us/blog/</a>  Along with a workaround.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654679">3</a> by Raymond Camden
		posted on 7/11/2006 at 5:26 PM
		</div>
		<div class="comment_text"><p>I posted this on Daniel's blog, but I thought I'd share here too. I've not been able to reproduce the code he had that threw an error. (This is on CF7.0.2.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654681">4</a> by DanielD
		posted on 7/24/2006 at 3:22 AM
		</div>
		<div class="comment_text"><p>Ray,  I just upgraded my dev enviroment to 7.0.2 and still seeing same error mentioned above.  Also tried a clean install of JRun and CF7.02 same thing.  What JVM are you running and what OS.  This is on Windows with  Java Version  	 1.4.2_09</p></div>
	</div>
</div>
		