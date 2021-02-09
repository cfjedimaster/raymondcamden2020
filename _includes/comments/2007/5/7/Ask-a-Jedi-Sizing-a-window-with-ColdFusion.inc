
<div class="comment" id="c_1713664897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664897">1</a> by Andy Matthews
		posted on 5/8/2007 at 7:52 AM
		</div>
		<div class="comment_text"><p>Just to clarify, there's no reason that you couldn't use AJAX to pass in the window dimensions to Coldfusion, or a self-posting form for that matter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664884">2</a> by Raymond Camden
		posted on 5/8/2007 at 7:57 AM
		</div>
		<div class="comment_text"><p>Correct, but you would need that initial request to load first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664887">3</a> by Erik Yowell
		posted on 5/8/2007 at 3:53 PM
		</div>
		<div class="comment_text"><p>There's also the technique of creating a web bug: passing url parameters to an image tag/ColdFusion template via document.write that returns a 1x1.gif to the browser. (What we all used to do before the XmlHttpRequest object.) From there you can store the window dimension values as cookie, client, or session vars to pick up later. Granted, once again, you're still limited to some sort of event (like body onLoad or user action) to trigger the window change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664896">4</a> by David Herman
		posted on 5/8/2007 at 5:14 PM
		</div>
		<div class="comment_text"><p>It should also be pointed out that with so many people using firefox and opening windows in tabs, when you resize a window, it will just resize the whole browser.  Window resizing is so 2001 :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664894">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664894">5</a> by Tom K
		posted on 5/8/2007 at 5:18 PM
		</div>
		<div class="comment_text"><p>It's also a bit of an useability no-no (and accessibility etc.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664895">6</a> by Raymond Camden
		posted on 5/8/2007 at 5:24 PM
		</div>
		<div class="comment_text"><p>I agree with you guys - but I believe the original poster was talking about a popup, not the main window.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664876">7</a> by David Herman
		posted on 5/8/2007 at 6:08 PM
		</div>
		<div class="comment_text"><p>He probably was, but I don't do popups, I have firefox open them all in new tabs, which then resized the whole browser...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664899">8</a> by James Edmunds
		posted on 5/8/2007 at 6:09 PM
		</div>
		<div class="comment_text"><p>This information could also be useful in some AJAX or plain old CSS "popup" situations (where a behavior turns a loaded but invisible div visible), by letting you know how much space to give the popup or where / how to place it.</p><p>For instance, if I had an invisible div with Ray's picture and bio that showed visible when the mouse hovered over his name, I could put the photo side by side with the bio on a wider browser window, and skip the photo and just have the bio on a smaller window.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664889">9</a> by Jay McConathy
		posted on 5/8/2007 at 6:28 PM
		</div>
		<div class="comment_text"><p>I appreciate all your thoughts. there are many different options we could use and we are about to embark on a rewrite of the entire site, however until that time comes I am applyiong bandages to problems that I inherited. Thanks again for the help here.</p></div>
	</div>
</div>
		