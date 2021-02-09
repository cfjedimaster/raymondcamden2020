
<div class="comment" id="c_1713710948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710948">1</a> by Tim Garver
		posted on 12/28/2008 at 3:19 AM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>Another great article!</p><p>This really helps me understand it much better than the docs.</p><p>I am wondering about stability though. In my own application I am writing, for some reason transfer seems to reload itself quite often. I have my cache setup under the Server scope and share it among 3 applications on the box.</p><p>I was also wondering about hundreds of transactions at the same time and how or if transfer uses some sort of locking mechanism? How does it handle multiple transactions on the same record?</p><p>Thanks again<br>Tim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710928">2</a> by Raymond Camden
		posted on 12/30/2008 at 8:38 PM
		</div>
		<div class="comment_text"><p>Tim, I've not done "deep" Transfer testing. CFLib uses it, although the traffic there isn't too heavy. Broadchoice uses it for the previous version of our project, and if I remember right, there was a bit of a memory leak issue. I'm going to ping Sean to see if he could please speak to this a bit more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710949">3</a> by John Whish
		posted on 12/31/2008 at 1:30 AM
		</div>
		<div class="comment_text"><p>Object proxies = awesome! I didn't know about that feature of Transfer - very useful. Thanks for posting Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710947">4</a> by Sean Corfield
		posted on 1/12/2009 at 3:53 AM
		</div>
		<div class="comment_text"><p>There definitely are some gotchas with caching. The default is to cache everything forever. Naturally, if you have a large data set, you can fill the JVM heap with cached objects. What happens at that point (as far as I can tell) is that both Java *and* Transfer both start to perform their own garbage collection processes. Java is just doing its own regular thing, trying to find unreferenced objects to throw away to get more space. Naturally, Transfer's cache is all still considered "referenced". Meanwhile Transfer is busy trying to expire items from its cache in order to make room for newly added items. The fix for this is to ensure that you specify a cache expiry time (in minutes) for the default cache behavior. We use 10 minutes. However, we override the default for all of our "lookup table" objects (such as status, state etc) and allow those to be cached forever since they are never updated.</p><p>The other big gotcha is the cross-scope issue that Ray alluded to (indeterminate behavior). What tends to happen if you have related objects cached in different scopes is that one end of the relationship expires and may be reloaded but the other end of the relationship still points to the "old" instance in memory. At that point, changes to the object will either update the old in-memory instance or the new in-cache instance depending on how you reference the object.</p><p>That's why you should never put a Transfer Object in session scope (or application scope). Put the PK in a shared scope by all means, but always get the object by fetching it via Transfer (if the object is in cache, it won't hit the database anyway).</p><p>As to the memory leak, Mark Mandel, Mike Brunt and I have been trying to track that down for a long time. We usually can't reproduce it on a test server, even under load, but we see it on our production servers. And, yes, we've tried all the obvious approaches and several non-obvious ones and we've even reconfigured a number of things that seemed to be unique to production in an effort to eliminate every possibility. It's quite intriguing (and rather annoying). It's also not clear whether Transfer is the culprit, to be honest. If we ever figure it out, we'll blog about it :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710950">5</a> by Josh Nathanson
		posted on 3/5/2009 at 4:59 AM
		</div>
		<div class="comment_text"><p>I am seeing absolutely massive memory leak issues in my local installation.  I get maybe 10 objects and I see my memory usage go up by approx. 100MB and not release on GC.  I tried setting the objects to cache in the request scope and it didn't make any difference.</p><p>What's really frustrating is my coworker has the exact same codebase and data on his sandbox and he is not seeing the same issue.  Meanwhile my stack blows up and I get "500 out of memory" errors when I try to retrieve 50 transfer objects.</p><p>Sounds a lot like the issue you guys have been seeing.  We are continuing to troubleshoot so if we find anything out I'll post back over here.</p></div>
	</div>
</div>
		