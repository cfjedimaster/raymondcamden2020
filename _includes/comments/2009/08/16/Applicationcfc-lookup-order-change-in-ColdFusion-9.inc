
<div class="comment" id="c_1713717689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717689">1</a> by Sean Corfield
		posted on 8/18/2009 at 11:17 AM
		</div>
		<div class="comment_text"><p>Railo has had similar functionality for quite a while. I wonder if Adobe have implemented the same way (good) or differently? I haven't tested the Railo options in depth but now seems like a good time to do so...!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717691">2</a> by Raymond Camden
		posted on 8/18/2009 at 3:35 PM
		</div>
		<div class="comment_text"><p>I'm curious though - do you think the third option makes sense? I don't think it is a bad option per se... just... weird I guess.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717692">3</a> by Gary Funk
		posted on 8/18/2009 at 4:48 PM
		</div>
		<div class="comment_text"><p>I am a little confused. What is the difference between Default Order and Until webroot?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717753">4</a> by Raymond Camden
		posted on 8/18/2009 at 5:20 PM
		</div>
		<div class="comment_text"><p>Default means to look until the root of the file system.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717752">5</a> by Gary Funk
		posted on 8/18/2009 at 5:45 PM
		</div>
		<div class="comment_text"><p>So default goes past the webroot?  I never knew that .</p><p>So if my webtoot is c:\www\fsoft and I don't have anApplication.cfc there, it will keep looking and if it finds Applicatin.cfc in c:\, it will use that one. That could get quite nasty if one were to not know this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717754">6</a> by Raymond Camden
		posted on 8/18/2009 at 7:36 PM
		</div>
		<div class="comment_text"><p>Yes - the default behavior is to go to web root.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717755">7</a> by Sean Corfield
		posted on 8/18/2009 at 8:12 PM
		</div>
		<div class="comment_text"><p>I think most ppl put Application.cfc in the web root or in their application root so the third option is for performance (since it means "Only look in these two places"). The Application.cfc lookup is done on every request so if you have either a deeply nested application or you don't have Application.cfc/.cfm at all (unlikely, but I've seen it happen), then the engine has to look in a lot of directories. Nearly all of the Railo Administrator settings like this have to do with performance, offering compatibility with Adobe in one setting but the option to be less compatible in exchange for better performance in other settings.</p></div>
	</div>
</div>
		