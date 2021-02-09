
<div class="comment" id="c_1713720301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720301">1</a> by Brian Deitte
		posted on 12/1/2009 at 11:46 PM
		</div>
		<div class="comment_text"><p>Nice to see.  Note that Brightcove has media API wrappers for Java, .NET, Python, AS, PHP, and more.  See <a href="http://disq.us/url?url=http%3A%2F%2Fechove.net%3AYVftzRvIK-xpdiQ9qHHzKZx-qjM&amp;cuid=3321886" rel="nofollow noopener" title="http://echove.net">http://echove.net</a> for a good example.  If anybody creates one for ColdFusion, I'm sure Jeremy Allaire would be happy.  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720322">2</a> by Bill Davidson
		posted on 12/2/2009 at 9:51 AM
		</div>
		<div class="comment_text"><p>I'm said 'reader'. :)   I can't believe Jeremy hasn't had SOMEONE at his company do a quick CF wrapper... at least for 'old times sake'.  The PHP one is done by Brightcove employees, but not supported officially by Brightcove.</p><p>I do plan on writing a "full" API wrapper. I already have some of the read API methods done from awhile ago.  The write API uses a different endpoint and seems to be more picky.  If the client allows, I'll try to open source the API wrapper.</p><p>Thanks again to Ray for helping me out on this!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720303">3</a> by Brian Deitte
		posted on 12/2/2009 at 7:58 PM
		</div>
		<div class="comment_text"><p>The PHP one was created by the services team for a project, and I'm guessing that they were asked by the client to use PHP.  They did a similar thing for .NET with a client that I know asked to use this.  So we just need some CF clients here.  :)  I've heard of Jeremy playing around with the media APIs in CF, but no one has been asked to create any of the media API wrappers here.  I hope you do get to open source yours- let me know if you do, and I'll make sure it gets mentioned on the Brightcove site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720307">4</a> by William Haun
		posted on 12/3/2009 at 9:35 PM
		</div>
		<div class="comment_text"><p>Here's a big question I've had for a long, long time. Is there a way to read metadata from a MP4 video file with ColdFusion? Flash only plays MP4s encoded with the H.264 codec and I have users all the time encoding video with the MP4 file extension but not with the H.264 codec. What then happens is the Flash player plays the audio but not the video.</p><p>I found a way in the Flash player to read the metadata once the video is loaded (using a AS3 property called videocodecid) but I'd rather stop the video creator from uploading the poorly encoded MP4 at all.</p><p>In regards to your code above, it would be great for CF to check the MP4's codec before uploading it to BrightCove (after all their Flash video player can only play H.264 too).</p><p>Any ideas?!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720316">5</a> by Raymond Camden
		posted on 12/3/2009 at 9:44 PM
		</div>
		<div class="comment_text"><p>ffmpeg can do just about anything with video. You can use the command line via cfexecute to do it that way.</p><p>If you can find a good Java wrapper (google returned this one: <a href="https://disq.us/url?url=https%3A%2F%2Fcontributions.coremedia.com%2Fisobox4j%3AptHG4XyLPMV1itclejIno6bKMxw&amp;cuid=3321886" rel="nofollow noopener" title="https://contributions.coremedia.com/isobox4j">https://contributions.corem...</a> - but no idea how good it is) then you can use it via CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720304">6</a> by Brian Deitte
		posted on 12/3/2009 at 9:49 PM
		</div>
		<div class="comment_text"><p>The code above doesn't need to check if it's an H.264 file, as uploaded files to Brightcove will be transcoded to a playable format if needed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720308">7</a> by Bill Davidson
		posted on 12/15/2009 at 12:03 AM
		</div>
		<div class="comment_text"><p>Brian (et al)-</p><p>Version 1.0 of my Brightcove SDK is done... Waiting for approval on Riaforge and it will hopefully live there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720311">8</a> by Raymond Camden
		posted on 12/15/2009 at 12:46 AM
		</div>
		<div class="comment_text"><p>Luckily I know the guy who runs RIAForge. Project approved.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720306">9</a> by Brian Deitte
		posted on 12/15/2009 at 1:02 AM
		</div>
		<div class="comment_text"><p>Very nice!  I'm sending an email out so that the media API team and Jeremy know about this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720312">10</a> by Bill Davidson
		posted on 12/15/2009 at 1:22 AM
		</div>
		<div class="comment_text"><p>Ray - thanks.  <br>Brian - cool!</p><p>It's up now at: <a href="http://disq.us/url?url=http%3A%2F%2FcfBCove.riaforge.org%2F%3AKtQmCC6h2yPuk87UF5xp9liA2PI&amp;cuid=3321886" rel="nofollow noopener" title="http://cfBCove.riaforge.org/">http://cfBCove.riaforge.org/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720315">11</a> by Brian Deitte
		posted on 12/15/2009 at 7:51 AM
		</div>
		<div class="comment_text"><p>Jeremy replied and said he loved it.  :)</p><p>There may be a blog post on it somewhere on the site, as that often happens for things like this.  I'll post a link here if there is one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720310">12</a> by Brian Deitte
		posted on 12/15/2009 at 5:22 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.brightcove.com%2Fjeremy%2F2009%2F12%2Fbrightcove-for-coldfusion.html%3A6yGwCpf0DrHwzpyhYvqqHMd8ITs&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.brightcove.com/jeremy/2009/12/brightcove-for-coldfusion.html">http://blog.brightcove.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720318">13</a> by Bill Davidson
		posted on 12/16/2009 at 8:34 AM
		</div>
		<div class="comment_text"><p>Sweet!!!!</p></div>
	</div>
</div>
		