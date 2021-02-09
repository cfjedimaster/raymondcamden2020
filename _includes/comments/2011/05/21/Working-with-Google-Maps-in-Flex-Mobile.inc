
<div class="comment" id="c_1713732465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732465">1</a> by Ben Dalton
		posted on 5/21/2011 at 11:50 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Other people have been having similar problems. It looks as though there's a workaround: <a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fp%2Fgmaps-api-issues%2Fissues%2Fdetail%3Fid%3D2750%23c57%3AZrQHYRNHgeiOB06rNPXzU6a8KUw&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/p/gmaps-api-issues/issues/detail?id=2750#c57">http://code.google.com/p/gm...</a></p><p>It stems from google maps calculating a SHA1 on some large bytearray. This is an intensive/blocking operation. The workaround simply prevents the calculation from being performed.</p><p>If there weren't enough reasons already, this is another example of how Flash could benefit from some form of multithreading.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732466">2</a> by Chris Griffith
		posted on 5/22/2011 at 2:08 AM
		</div>
		<div class="comment_text"><p>Here was my solution: <a href="http://disq.us/url?url=http%3A%2F%2Fchrisgriffith.wordpress.com%2F2011%2F01%2F04%2Fintegrating-maps-into-your-mobile-application%2F%3AVdFCKyy7yeXGceCDrl7Rq7tL--E&amp;cuid=3321886" rel="nofollow noopener" title="http://chrisgriffith.wordpress.com/2011/01/04/integrating-maps-into-your-mobile-application/">http://chrisgriffith.wordpr...</a></p><p>In a nutshell, I used an instance of StageWebView and loaded a web version of the Google Map.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732464">3</a> by Raymond Camden
		posted on 5/23/2011 at 8:18 PM
		</div>
		<div class="comment_text"><p>@Ben: I'll take a look at your link a bit later.</p><p>@Chris: The issue I have with StageWebView is that I don't know how to put it in a view and have it be part of a page. What I mean is - it's simple enough to just put it at 0,0. But then that covers the view's header. So I can probably guess at the right Y value, but then what if I want some label above it? Can you put a SWV in a page so that it lays out with the other items?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732468">4</a> by Ed
		posted on 5/23/2011 at 8:46 PM
		</div>
		<div class="comment_text"><p>Have a look at Igor Costa's blog - he mentions a similar issue and a workaround (it's linked from Fullasagoog: my message is being 'flagged as spam' if I include the link?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732471">5</a> by Raymond Camden
		posted on 5/23/2011 at 8:54 PM
		</div>
		<div class="comment_text"><p>My spam checker can be a bit over the top sometimes - can you post a <a href="http://disq.us/url?url=http%3A%2F%2Fgoo.gl%3AFuz9J5gHmkVP1DQ24xVJuIzYbkU&amp;cuid=3321886" rel="nofollow noopener" title="goo.gl">goo.gl</a> version?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732492">6</a> by Raymond Camden
		posted on 5/24/2011 at 2:04 AM
		</div>
		<div class="comment_text"><p>Holy crap Ben. I just tried the fix, and it worked perfectly. Scary perfectly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732493">7</a> by Nepol
		posted on 10/3/2011 at 11:16 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Is there a link where I can download the .fxp project with this Get Directions update?</p><p>Thanks a lot for all your post I've learned a lot!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732495">8</a> by Raymond Camden
		posted on 10/4/2011 at 5:41 PM
		</div>
		<div class="comment_text"><p>There is a Download link at the end of the entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732489">9</a> by Brian Reed
		posted on 11/4/2011 at 6:58 AM
		</div>
		<div class="comment_text"><p>MapQuest has an API for Flex that is optimized for mobile. I've used it before and it works really well, if you can get past the part that it's MapQuest. <a href="http://disq.us/url?url=http%3A%2F%2Fdeveloper.mapquest.com%2Fweb%2Fproducts%2Ffeatured%2Fas3-flex-flash-mobile%3AVnKFFD8VQJDyvW794b9ZM42-zBQ&amp;cuid=3321886" rel="nofollow noopener" title="http://developer.mapquest.com/web/products/featured/as3-flex-flash-mobile">http://developer.mapquest.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732491">10</a> by xhe
		posted on 11/12/2011 at 8:41 PM
		</div>
		<div class="comment_text"><p>For mapQuest, I found it is slow and response is also slow. I used ios to test, the want the marker to be clickable. In my ipod touch, it is so difficult to click the marker. so I decided to remove it from mobile app.<br>For the google map api heck, also it does not work in ios. Works in desktop simulator. Maybe IOs is not providing AIR environment? Someone said android is ok, I will test it later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732490">11</a> by Fher
		posted on 12/30/2011 at 9:21 AM
		</div>
		<div class="comment_text"><p>I have the same problem of Xhe. I cant run the google map app in my ipod i have everyting. But on my Sony tabblet the same code works perfect. Someone have any idea????....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732494">12</a> by Raymond Camden
		posted on 12/30/2011 at 9:46 AM
		</div>
		<div class="comment_text"><p>ios definitely supports AIR. Not sure what to recommend though. Google is no longer supporting Flex for maps.</p></div>
	</div>
</div>
		