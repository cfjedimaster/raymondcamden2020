
<div class="comment" id="c_1713677540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677540">1</a> by John C. Bland II
		posted on 2/28/2008 at 9:28 PM
		</div>
		<div class="comment_text"><p>Can I put the cache in the application scope but in my cache struct inside of that scope?</p><p>ie - application.cache.mycodeisntslow vs application.mycodeisntslow</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677543">2</a> by Raymond Camden
		posted on 2/28/2008 at 9:31 PM
		</div>
		<div class="comment_text"><p>John, I read your question twice - and I still don't get it. What are you asking?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677542">3</a> by Aaron Lynch
		posted on 2/29/2008 at 3:16 AM
		</div>
		<div class="comment_text"><p>I think he is asking if he can store the cached data in a struct of his own choosing.</p><p>In other words, instead of just scope="Application", there could be an optional attribute of structName...</p><p>scope="Application" structName="cache"</p><p>That is my take on it at least.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677601">4</a> by Raymond Camden
		posted on 2/29/2008 at 4:28 AM
		</div>
		<div class="comment_text"><p>Well, if so, the answer is no. ;) You can't dictate _where_ in the scope stuff is cached.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677602">5</a> by Charlie Arehart
		posted on 3/1/2008 at 1:21 PM
		</div>
		<div class="comment_text"><p>Thanks for posting it, Ray. I've now updated my pointer to it (along with many other CF-based caching solutions--and several dozen other CF tools) at:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.carehart.org%2Fresourcelists%2Ftools_to_consider%2Findex.cfm%23cache%3A7GpQbDxt5vElSL0EKaaQBQmQPhU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.carehart.org/resourcelists/tools_to_consider/index.cfm#cache">http://www.carehart.org/res...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677595">6</a> by Nate
		posted on 5/23/2008 at 2:56 AM
		</div>
		<div class="comment_text"><p>I just learned about this custom tag today and it's really helped me out in a big way.  Many thanks for this great work of yours.  I've got a question.  When would you want to use this with the request scope.  I can understand how this is used in the application of server scope, but I can't imagine how it's useful in the request scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677604">7</a> by Raymond Camden
		posted on 5/23/2008 at 4:55 AM
		</div>
		<div class="comment_text"><p>I honestly can't think of a great reason to use the Request scope for the cache, but since it was so easy to add support, I figured what the hey.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677597">8</a> by Nate
		posted on 6/2/2008 at 8:42 PM
		</div>
		<div class="comment_text"><p>Can you think of a reason why some code fragments inside a cf_scopecache tag might randomly get repeated when first cached?  Clearing the cache seems to correct this problem most of the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677599">9</a> by Raymond Camden
		posted on 6/2/2008 at 10:51 PM
		</div>
		<div class="comment_text"><p>Yes, I can think of a way. Maybe the tag gets confused and both caches and lets the original output through.</p><p>I don't see this here, but if you can try to make a reproducible case, I'd definitely appreciate it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677598">10</a> by Nate
		posted on 6/4/2008 at 1:49 AM
		</div>
		<div class="comment_text"><p>It turns out that my problem had absolutely nothing to do with  Scopecache.  It was a problem in a SQL query and I was simply confused because I made that change at the same time that I added your Scopecache.</p><p>I have a new question for you / feature request. <br>Let's say Scopecache caches 10000 code fragments and the memory/size of those variables starts taking up too much RAM.  Might it be a nice feature to automically clear 2000 or so variables(those variables with the smallest hit count) when that happens?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677603">11</a> by Raymond Camden
		posted on 6/4/2008 at 5:39 PM
		</div>
		<div class="comment_text"><p>Yeah, that would be nice. I'd like to have a optimize type action that takes a 'strength' (ie, how much to clean) and the tag will clear out based on hitcount/last used type values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677600">12</a> by Nate
		posted on 8/8/2008 at 9:50 PM
		</div>
		<div class="comment_text"><p>Here's another feature request if you ever find the time for it...</p><p>How about a way to save the cache and restore it at a later time after a server is shutdown and restarted?  Keeping a history of the cache on a daily or weekly basis would be a very nice feature.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677596">13</a> by Raymond Camden
		posted on 8/9/2008 at 12:00 AM
		</div>
		<div class="comment_text"><p>Ah, so basically, cache to the file system. In theory, you could do expires="never" then.</p><p>Log a bug request for this at RIAForge. (If I didn't turn it on, bribe me with a beer and I'll do so.)</p></div>
	</div>
</div>
		