
<div class="comment" id="c_3117777654">
	<div>
		<img src="https://disqus.com/api/users/avatars/antoniogallo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3117777654">1</a> by Antonio Gallo
		posted on 1/24/2017 at 6:42 PM
		</div>
		<div class="comment_text"><p>do i need a PolyFill for ImageCapture?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3117820150">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3117820150">2</a> (In reply to <a href="#c_3117777654">#1</a>) by Raymond Camden
		posted on 1/24/2017 at 6:53 PM
		</div>
		<div class="comment_text"><p>You would not be able to polyfill for the parts that get capabilities (or set them). You can still access the camera using &lt;input type="file"&gt; with the capture attribute - see my link to that i the article. That would give you similar functionality.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3117899215">
	<div>
		<img src="https://disqus.com/api/users/avatars/antoniogallo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3117899215">3</a> (In reply to <a href="#c_3117820150">#2</a>) by Antonio Gallo
		posted on 1/24/2017 at 7:37 PM
		</div>
		<div class="comment_text"><p>thanks :) helpfull as usually :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3117900567">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_2TIruW0y3N.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3117900567">4</a> by Justin Willis
		posted on 1/24/2017 at 7:37 PM
		</div>
		<div class="comment_text"><p>Figured id share this little Ionic PWA im building with the Image Capture api. <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fjgw96%2FIonicCamera%3AeChBqid3GcsvaJxcAvy8amqveFs&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/jgw96/IonicCamera">https://github.com/jgw96/Io...</a> Basically building a camera app with many of the same features as the native camera app on android but all in a PWA.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3127807939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3127807939">5</a> by Lucas
		posted on 1/30/2017 at 10:00 AM
		</div>
		<div class="comment_text"><p>Hey !<br>You could use requestAnimationFrame to get your frames instead of a fixed value (300ms in your case), that way, you could just be at max framerate instead of estimating it - which isn't really accurate across devices. Using a webgl canvas instead of a 2d one (with a 2d fallback) could also increase performance by using shaders to paint the frames.<br>Otherwise, nice article :) !</p></div>
	</div>
</div>
		
<div class="comment" id="c_3128209322">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3128209322">6</a> (In reply to <a href="#c_3127807939">#5</a>) by Raymond Camden
		posted on 1/30/2017 at 3:40 PM
		</div>
		<div class="comment_text"><p>I always forget about rAF, thanks. :)</p></div>
	</div>
</div>
		