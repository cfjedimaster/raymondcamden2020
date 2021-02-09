
<div class="comment" id="c_1713732160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732160">1</a> by Brian Panulla
		posted on 5/7/2011 at 3:24 AM
		</div>
		<div class="comment_text"><p>This restriction actually isn't a hard and fast rule any more. Newer browsers can get around this if you use the Cross-Origin Resource Sharing standard:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.nczonline.net%2Fblog%2F2010%2F05%2F25%2Fcross-domain-ajax-with-cross-origin-resource-sharing%2F%3Anc10yVDroPJ_XL_Gg_clh1LQU8o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.nczonline.net/blog/2010/05/25/cross-domain-ajax-with-cross-origin-resource-sharing/">http://www.nczonline.net/bl...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732164">2</a> by Raymond Camden
		posted on 5/7/2011 at 3:45 AM
		</div>
		<div class="comment_text"><p>Interesting - and surprising how wide it is supported.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732163">3</a> by Usman Ghani
		posted on 8/16/2011 at 5:30 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, this trick is very useful thanks for sharing your knowledge but i have a question how to get dynamic urls like if i want to get the href from &lt;a&gt; tag i tried $(this).attr("href")); insted your given url. but it's not working thanks in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732159">4</a> by Raymond Camden
		posted on 8/16/2011 at 5:33 AM
		</div>
		<div class="comment_text"><p>Well that should work, but it depends on the context. If you are using a click handler on the link, then THIS will refer to it. If you are using something else, then you need a different reference. If you are using my code, that should have worked though. Maybe share your code via pastebin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732161">5</a> by Alessio
		posted on 10/18/2011 at 1:02 PM
		</div>
		<div class="comment_text"><p>Hello when i try it i receive a 200 error, is any solution?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732162">6</a> by Raymond Camden
		posted on 10/18/2011 at 2:52 PM
		</div>
		<div class="comment_text"><p>200 isn't an error. It means OK.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732167">7</a> by TJ
		posted on 10/22/2011 at 6:08 AM
		</div>
		<div class="comment_text"><p>when i try and build in xcode, the ajax is not working, where it used to in DreamWeaver :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732166">8</a> by TJ
		posted on 10/22/2011 at 6:34 AM
		</div>
		<div class="comment_text"><p>Sorry, I guess I don't understand, it doesn't seem to actually make it into the final app.  My app just sits there and does nothing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732165">9</a> by TJ
		posted on 10/22/2011 at 7:39 AM
		</div>
		<div class="comment_text"><p>Apologies, I was missing this at the top of my php file:</p><p>	header('Access-Control-Allow-Origin: *');</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732169">10</a> by Nik
		posted on 2/17/2012 at 11:04 AM
		</div>
		<div class="comment_text"><p>Ray, thanks for this post! However, I am wondering what options do we have to "Secure" the cfc's that I make ajax calls to. Say we want to restrict only this app to call the cfc. The general public should not be able to call the cfc directly from their browsers or other applications. Any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732168">11</a> by Raymond Camden
		posted on 2/17/2012 at 4:12 PM
		</div>
		<div class="comment_text"><p>None, because you can't. A CFC with remote methods can be called from anywhere. You could do a check on the remote IP of the caller, but since you are supporting mobile, you don't know what any of the IPs will be.</p><p>Basically, don't even think about this route.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732170">12</a> by mike
		posted on 11/1/2012 at 3:58 PM
		</div>
		<div class="comment_text"><p>The downloadable APK does not work. Upon launch, it just sits there in fact, the status message doesn't even update so I don't think its even trying.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732172">13</a> by Raymond Camden
		posted on 11/1/2012 at 4:05 PM
		</div>
		<div class="comment_text"><p>It may be your Android version. This APK is over a year old - I'd recommend building a new version using PhoneGap Build.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732171">14</a> by Okokoh Benjamin
		posted on 11/24/2013 at 1:12 AM
		</div>
		<div class="comment_text"><p>oh, I love this blog, how can I get a blog that will display formatted code of html and css. thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732173">15</a> by Raymond Camden
		posted on 11/24/2013 at 1:22 AM
		</div>
		<div class="comment_text"><p>I've used 3 different code formatters (maybe more) over the history of this blog. What you see above is ColdFish (<a href="http://disq.us/url?url=http%3A%2F%2Fcoldfish.riaforge.org%2F%29%3A6BOljLRPWH20rWYVmETsxwtwHIU&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfish.riaforge.org/)">http://coldfish.riaforge.org/)</a>. I've also used Gists and PrismJS most recently.</p></div>
	</div>
</div>
		