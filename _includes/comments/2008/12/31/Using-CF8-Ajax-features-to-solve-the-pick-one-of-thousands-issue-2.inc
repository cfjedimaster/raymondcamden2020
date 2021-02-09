
<div class="comment" id="c_1713711092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711092">1</a> by Francois Levesque
		posted on 12/31/2008 at 9:17 PM
		</div>
		<div class="comment_text"><p>Were you using the packed version of jQuery? It should only be about 30k, which is even smaller!</p><p>I like how you compare both libraries. I agree that the CF8 ajaxy stuff is a little easier to use, but imo you have so much more flexibility with jQuery. Now, if only they could get done with the jQuery UI project...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711095">2</a> by Raymond Camden
		posted on 12/31/2008 at 9:18 PM
		</div>
		<div class="comment_text"><p>Nope, wasn't using the packed version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711094">3</a> by Craig Kaminsky
		posted on 12/31/2008 at 9:20 PM
		</div>
		<div class="comment_text"><p>One thing with the footprint comparison is that because you did not use the jQuery UI library, the numbers are a little skewed in jQuery's favor. When one includes all jQuery UI libraries, in it's packed format, the UI library adds 92KB to the footprint. It's still a pretty big footprint swing in favor of jQuery -- CF8: 462KB to jQuery w/ UI: 158KB.</p><p>While you don't need to include the entirety of the UI library and can pick and choose the ui actions and visual effects you want included in your project, I found that in two larger projects, I ended up including everything because I so many of the UI features and found I needed to account for that 92KB in the footprint.</p><p>The jQuery UI project is well established and now at version 1.5 (1.5.3 to be exact with 1.6 in the RC stage). I have not had any issues with it (effects are super-easy to implement, etc.) and I really like the ThemeRoller feature on the UI site. It let's me quickly get some decent-looking elements in place when reviewing early stages of Ajax work. (<a href="http://disq.us/url?url=http%3A%2F%2Fui.jquery.com%2Fthemeroller%29%3A5sxWVszQRM44qPMAal056t1pyJk&amp;cuid=3321886" rel="nofollow noopener" title="http://ui.jquery.com/themeroller)">http://ui.jquery.com/themer...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711093">4</a> by Raymond Camden
		posted on 12/31/2008 at 9:21 PM
		</div>
		<div class="comment_text"><p>Odd, I downloaded the packed version, and YSlow shows 41.6K for uncached, which IS better, but the cached version is the same size, 41.6k. It's like the packed version can't be cached.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711103">5</a> by Francois Levesque
		posted on 12/31/2008 at 9:26 PM
		</div>
		<div class="comment_text"><p>That's odd... maybe the cache is full? I don't see why your browser wouldn't cache it unless you have a nocache flag, which I doubt you have ;).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711119">6</a> by Raymond Camden
		posted on 12/31/2008 at 9:29 PM
		</div>
		<div class="comment_text"><p>Firefox is set to not cache, but yes, I'm not using nocache in meta or headers. Maybe the 'de-pack' part impacts the ability to cache.</p></div>
	</div>
</div>
		