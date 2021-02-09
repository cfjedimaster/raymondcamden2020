
<div class="comment" id="c_1713724143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724143">1</a> by Simon
		posted on 5/5/2010 at 6:55 PM
		</div>
		<div class="comment_text"><p>Just out of interest Ray how are you putting video out on your pages ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724144">2</a> by Raymond Camden
		posted on 5/5/2010 at 6:59 PM
		</div>
		<div class="comment_text"><p>I rarely use video in my apps, but when I do, it is YouTube. SoI just use their Flash embed. I've done some Jing embeds as well, and for that I use Flash embeds for their SWFs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724145">3</a> by Misty
		posted on 8/25/2012 at 10:53 PM
		</div>
		<div class="comment_text"><p>Hi ray, Can't I run m3u files with cfmediaplayer</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724152">4</a> by Raymond Camden
		posted on 8/26/2012 at 2:06 AM
		</div>
		<div class="comment_text"><p>A m3u is a playlist. I can see that being supported. File a Enhancement Request for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724154">5</a> by Raymond Camden
		posted on 8/26/2012 at 2:07 AM
		</div>
		<div class="comment_text"><p>Heck, you could easily read the m3u with CF and use the result file list with my demo above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724155">6</a> by misty
		posted on 8/26/2012 at 1:24 PM
		</div>
		<div class="comment_text"><p>Hi Ray, can you show a bit of code, i am trying like this and it is not working:</p><p>&lt;cfajaximport tags="cfmediaplayer"/&gt;<br>  	&lt;cfmediaplayer<br>    name="Myvideo"<br>    source="video/myplaylist.m3u" <br>  	bgcolor="ffffff"<br>  	width="195"<br>  	height="242"<br>  	type="html"<br>  	align="center"<br>  	autoPlay="false"<br>  	controlbar="false"<br>  	/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724158">7</a> by Raymond Camden
		posted on 8/26/2012 at 6:57 PM
		</div>
		<div class="comment_text"><p>Did you read my comment? Use CF to read the file - ie, cffile, or fileRead. Then parse it to get the links out (m3u files also support comments).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724156">8</a> by Raymond Camden
		posted on 8/27/2012 at 7:32 PM
		</div>
		<div class="comment_text"><p>Misty, see this blog entry I did: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F8%2F27%2FExample-of-M3U-Support-for-CFMEDIAPLAYER%3AIYb3rIzDOoGgAcCiu9j6VZ7UkeM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/8/27/Example-of-M3U-Support-for-CFMEDIAPLAYER">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724157">9</a> by Simon
		posted on 8/6/2013 at 1:23 PM
		</div>
		<div class="comment_text"><p>Hi all, is there any way of using percentages for height and width so the  video player will fit the parent div ?</p><p>thanks,</p><p>Simon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724159">10</a> by Raymond Camden
		posted on 8/6/2013 at 5:19 PM
		</div>
		<div class="comment_text"><p>Well, the obvious answer is - when you tried using a percentage did it work?</p></div>
	</div>
</div>
		