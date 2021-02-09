
<div class="comment" id="c_1713731860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731860">1</a> by Robert Zehnder
		posted on 4/26/2011 at 4:51 PM
		</div>
		<div class="comment_text"><p>I looked at them a while back because I have a client that wanted to be able to upload any format of video and have it converted into FLV for display on their site, but for their needs (a non-profit) it was a little cost prohibitive.</p><p>It would be really cool to see a similar service written in CF though. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731862">2</a> by Robert Reinhardt
		posted on 4/27/2011 at 2:14 AM
		</div>
		<div class="comment_text"><p>How well does Zencoder create adaptive streaming output for Flash and iOS? I'm starting to compare offerings against my own video encoding / hosting service at <a href="http://disq.us/url?url=http%3A%2F%2FvideoRx.com%3AqEAidvjAJgqGQwT-x_9eSSdpF9c&amp;cuid=3321886" rel="nofollow noopener" title="videoRx.com">videoRx.com</a>, but most online encoding services have simply "announced" forthcoming support for adaptive streaming presets.</p><p>RE: non-profits @ Robert Zehnder, I've provided one non-profit with pro-bono hosting and encoding (site will launch soon) specially for adaptive streaming deployment. I'm still working on the public API for <a href="http://disq.us/url?url=http%3A%2F%2FvideoRx.com%3AqEAidvjAJgqGQwT-x_9eSSdpF9c&amp;cuid=3321886" rel="nofollow noopener" title="videoRx.com">videoRx.com</a>, but there will be AMF remoting support in addition to other data xfer formats.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731863">3</a> by Jon Dahl
		posted on 4/27/2011 at 2:28 AM
		</div>
		<div class="comment_text"><p>Great article, and thanks for the writeup of Zencoder. We have a number of ColdFusion customers and are happy to support customers who use CF (or any language).</p><p>@Robert R: not sure what adaptive streaming has to do with this post, but Zencoder has done adaptive streaming for iOS for quite a while, and have a number of customers using it. We create segmented TS with perfect keyframe placement and let you control the segment length. We can create m3u8 playlists for a single stream and for multiple streams (adaptive bitrate). You can also add an image (like album art) for an audio-only stream, or even automatically take one thumbnail for every segment of an audio-only stream.</p><p>But Flash (HDS) is still forthcoming.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731861">4</a> by Robert Reinhardt
		posted on 4/27/2011 at 8:08 AM
		</div>
		<div class="comment_text"><p>@Jon Dahl, you're right--I was a bit presumptuous. I mentioned adaptive streaming because Ray didn't say either way if <a href="http://disq.us/url?url=http%3A%2F%2Fzencoder.com%3ApwTpW0xZjl7PHHd9Ef9x9TZSeFA&amp;cuid=3321886" rel="nofollow noopener" title="zencoder.com">zencoder.com</a> supported adaptive streaming, and if so, for which players/browser/etc. It's my opinion that online encoding services should not only mimic desktop encoders, but provide services that desktop can't/doesn't provide (e.g. my work on my motion analysis procedures and predictive bitrates, as an example). I have a recent blog post outlining the case for why more developers, designers, integrators, etc, need to be more aware of adaptive streaming and its benefits, which requires the cooperation of proper encoding and proper deployment across all adaptive streaming types.</p></div>
	</div>
</div>
		