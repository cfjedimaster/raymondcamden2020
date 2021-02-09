
<div class="comment" id="c_1713734490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734490">1</a> by John Farrar
		posted on 8/8/2011 at 7:55 PM
		</div>
		<div class="comment_text"><p>I have not tested this but does ColdFusion have a way of buffering these presentations?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734489">2</a> by Raymond Camden
		posted on 8/8/2011 at 7:58 PM
		</div>
		<div class="comment_text"><p>Why would it buffer an HTML presentation that doesn't auto forward?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734488">3</a> by John Farrar
		posted on 8/8/2011 at 8:09 PM
		</div>
		<div class="comment_text"><p>Should have said cached, not buffered. The reason is to reduce overhead of processing same data in Flash format if nothing changes from one user to the next. If the data is personalized then caching would not make sense of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734497">4</a> by Raymond Camden
		posted on 8/8/2011 at 8:16 PM
		</div>
		<div class="comment_text"><p>Ah, well the destination attribute ALSO works for the vanilla Flex output. So you could generate it once and be done with it. That's what I would do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734506">5</a> by Jewel Pajarillo
		posted on 5/22/2014 at 1:18 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I just wanna ask if you can use a powerpoint as a source for the cfpresentationslide tag?  I want to convert a powerpoint to html.  I've been trying to use ppt as a source but it will give me this error: Could not initialize class com.sun.star.lib.loader.WinRegKey</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734505">6</a> by Raymond Camden
		posted on 5/22/2014 at 1:24 AM
		</div>
		<div class="comment_text"><p>I believe you need to have OpenOffice installed on the server for that to work. Do you? And is it configured in the admin?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734509">7</a> by Shane Hahn
		posted on 10/7/2014 at 9:39 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>        I too am trying to use a ppt file as the source to create an html presentation, but am stuck with the same error as Jewel Pajarillo. (Could not initialize class com.sun.star.lib.loader.WinRegKey)</p><p>The CF9 docs say OO is only required for using doc files as the source? Any idea what else the issue could be? Unfortunately the error doesn't give any other details.</p><p>Thanks,<br>Shane</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734508">8</a> by Raymond Camden
		posted on 10/8/2014 at 2:22 PM
		</div>
		<div class="comment_text"><p>Um - no idea. Did you try adding OO even though it may says you don't need to?</p></div>
	</div>
</div>
		