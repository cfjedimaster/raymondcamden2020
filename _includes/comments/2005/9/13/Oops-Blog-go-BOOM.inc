
<div class="comment" id="c_1713620787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620787">1</a> by Pete Freitag
		posted on 9/13/2005 at 6:54 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>It might make more sense to just include a file in your blog CFC dist that generates a google sitemap using their schema. That way you can also add category pages, and other pages that might not show up in your RSS feed.</p><p>Just a thought.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620784">2</a> by Mark Kruger
		posted on 9/13/2005 at 6:56 PM
		</div>
		<div class="comment_text"><p>Well - it's nice to know you are human after all Ray (ha).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620785">3</a> by Raymond Camden
		posted on 9/13/2005 at 6:57 PM
		</div>
		<div class="comment_text"><p>Pete - yea - I was just hoping for an easy way out, know what I mean? I don't think I want to add the code to the core BlogCFC since a) not everyone will use it and b) it will be a slow process. I don't mind a slow process when I add an entry, but I don't want everyone to have to sit through it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620791">4</a> by Pete Freitag
		posted on 9/13/2005 at 7:30 PM
		</div>
		<div class="comment_text"><p>Yeah I understand there are different considerations when you add stuff to a product, vs to your own site.</p><p>It sounds like your generating the sitemap statically after you post each entry then right? The way I have done it, is just create a dynamic sitemap, Google will only hit it once a day.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620788">5</a> by Raymond Camden
		posted on 9/13/2005 at 7:35 PM
		</div>
		<div class="comment_text"><p>It's not being generated each time now, it's just being uncached each time. Ie, the process to make the giant RSS2 packet was slow, so I cached it, and made sure the cache was removed when I added a new entry. So in theory, it wouldn't be slow I guess. Right now though, Google is complaining that my RSS isn't working right, so I'm going to have to write a new template that does it the "right" way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620789">6</a> by Roger Benningfield
		posted on 9/14/2005 at 6:02 PM
		</div>
		<div class="comment_text"><p>::So, for those on my RSS feed, sorry!</p><p>Ray: I doubt you caused problems for much of anyone. Now, if you had fiddled with your permalinks *and* dumped 700 entries into the feed... *that* might have been a touch annoying. :D</p></div>
	</div>
</div>
		