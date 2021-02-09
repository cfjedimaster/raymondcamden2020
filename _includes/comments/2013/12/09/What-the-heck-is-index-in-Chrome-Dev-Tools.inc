
<div class="comment" id="c_1714081097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081097">1</a> by Todd Sharp
		posted on 12/10/2013 at 12:04 AM
		</div>
		<div class="comment_text"><p>Somewhat related:  Did you know that there is a trick to get inline javascript to show up in the 'scripts' tab in DevTools (I believe it works for FireFox too)?  Just add a comment at the end of your inline block like so:</p><p>//@ sourceURL=whateverfilenameyouwanttouse.js</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081101">2</a> by Raymond Camden
		posted on 12/10/2013 at 12:05 AM
		</div>
		<div class="comment_text"><p>Geeze no - I didn't know that. How did you figure that out?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081103">3</a> by Dan G. Switzer, II
		posted on 12/10/2013 at 5:58 AM
		</div>
		<div class="comment_text"><p>Another good console trick. If you want to put a break on a specific line in a programmatic way, add the line:</p><p>debugger;</p><p>Firebug and Chrome will both break on that line. I often find this faster in development when tracking down a problem. It's especially useful when needing to step debug in multiple browsers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081107">4</a> by Raymond Camden
		posted on 12/10/2013 at 5:50 PM
		</div>
		<div class="comment_text"><p>Todd's comment comes from source map support. See <a href="https://disq.us/url?url=https%3A%2F%2Fdevelopers.google.com%2Fchrome-developer-tools%2Fdocs%2Fjavascript-debugging%3ABEWkGHEek8r9P8JIk1YaqF5a7Uo&amp;cuid=3321886" rel="nofollow noopener" title="https://developers.google.com/chrome-developer-tools/docs/javascript-debugging">https://developers.google.c...</a> and scroll down to @sourceurl.</p><p>Thanks to @edyionescu for pointing this out on Twitter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081105">5</a> by Edy Ionescu
		posted on 12/10/2013 at 6:29 PM
		</div>
		<div class="comment_text"><p>... or you could use Chrome DevTools Workspaces: <a href="https://disq.us/url?url=https%3A%2F%2Fplus.google.com%2F%2BEdyIonescu%2Fposts%2FWkXeGdFeVFZ%3AQwSwcFmyy60EEKRx7iHg3x-Mgik&amp;cuid=3321886" rel="nofollow noopener" title="https://plus.google.com/+EdyIonescu/posts/WkXeGdFeVFZ">https://plus.google.com/+Ed...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081106">6</a> by Raymond Camden
		posted on 12/10/2013 at 8:10 PM
		</div>
		<div class="comment_text"><p>@Edy: I'm just not a fan of editing in the browser. For live JS debugging i can see it being useful, but for "real" development, I'd rather use my editor than the dev tools.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081109">7</a> by Edy Ionescu
		posted on 12/10/2013 at 8:32 PM
		</div>
		<div class="comment_text"><p>@Raymond: Couldn't agree more. But, because workspaces deal with mapped system resources, you'll no longer see (index) in the console.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081110">8</a> by Raymond Camden
		posted on 12/10/2013 at 8:36 PM
		</div>
		<div class="comment_text"><p>Fair enough. Although in my case, I was debugging someone else's web site - not a local app. :)</p></div>
	</div>
</div>
		