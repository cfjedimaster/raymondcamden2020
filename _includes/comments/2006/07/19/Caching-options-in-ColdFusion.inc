
<div class="comment" id="c_1713655160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655160">1</a> by Tom Mollerus
		posted on 7/19/2006 at 4:30 PM
		</div>
		<div class="comment_text"><p>Ray, when you write that "simply dropping a cache onto a page is not the way you solve performance problems", what do you mean by "dropping a cache onto a page"?  Are you referring to the use of CFCACHE, or are you referring to all caching in general? I guess I'm wondering if you can expand on what you meant in that sentence.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655156">2</a> by Raymond Camden
		posted on 7/19/2006 at 4:55 PM
		</div>
		<div class="comment_text"><p>I meant caching in general. This is not to say it is a bad thing. The point I was trying to get across is - if you identify process X as being slow, your first thought should NOT be, "Let me cache it", but "Can I make it quicker". -Then- you add caching if need be.</p><p>There is another thing to consider as well. I recommend that you cache CFCs in the app scope. I recommend this because creating a CFC can be slow. This is kind of a "no brainer", and since I don't have much control over the creation of a CFC, it makes sense to simply create them once.</p><p>As with most things, there is no hard and fast rule that applies 100% of the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655154">3</a> by John
		posted on 7/19/2006 at 5:37 PM
		</div>
		<div class="comment_text"><p>Regarding caching CFCs in the app scope, would it be adequate to create the CFC with a cfparam or is their a prefered method for caching a CFC?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655144">4</a> by Raymond Camden
		posted on 7/19/2006 at 5:40 PM
		</div>
		<div class="comment_text"><p>I would not use cfparam. I'd just use the onApplicationStart method, or if using old school app.cfm, put it inside a block that only runs on start up (see blogcfc's application.cfm for an example).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655167">5</a> by Andy Powell
		posted on 7/21/2006 at 12:17 AM
		</div>
		<div class="comment_text"><p>I have a caching mechanism that I wrote, johnnyCache, that will actually let you check your cache, and depending on the cache's existance, skip CFC processing and output the cached content at the view.  I will be blogging about it soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655148">6</a> by Sinn
		posted on 8/10/2006 at 8:18 AM
		</div>
		<div class="comment_text"><p>ar cool.. this is solution i need. but, i wrote CFC in my life for once only. i did a few projects which enabling the clients upload the product pictures themselve though. they're freaking slow while rendering the content out from the dir or db, i realised.</p><p>but the things is, i dun understand how is Ray's code is written.</p><p>help me pls ;-(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655171">7</a> by Raymond Camden
		posted on 8/10/2006 at 5:12 PM
		</div>
		<div class="comment_text"><p>What part of my code in particular?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655170">8</a> by Sinn
		posted on 8/11/2006 at 7:56 AM
		</div>
		<div class="comment_text"><p>hi Ray thx 4 ur reply;-)<br>maybe i'll know how after i'm tk a look in your blogcfc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655169">9</a> by Jan Jannek
		posted on 11/14/2006 at 9:11 PM
		</div>
		<div class="comment_text"><p>Have you ever played with the Java Cache ehCache. It offers a really simple and nice API. I integrated it in the onAir framework to cache method call results. The integration was really easy, it performs well and there are several great feature which are a pain to implement by yourself (e.g. overflow to disk if JVM Memory full, different caching algorithms, etc.).<br>It's worth trying it!</p><p>Greetings,<br>Jan</p></div>
	</div>
</div>
		