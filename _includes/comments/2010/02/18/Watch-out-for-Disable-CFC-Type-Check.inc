
<div class="comment" id="c_1713722047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722047">1</a> by Daniel Budde
		posted on 2/18/2010 at 11:46 PM
		</div>
		<div class="comment_text"><p>So, why should this setting only be enabled in production?  It seems like you would want it enabled in both.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722058">2</a> by Raymond Camden
		posted on 2/18/2010 at 11:48 PM
		</div>
		<div class="comment_text"><p>You don't think this blog post is a good example of why it is bad for it to be enabled in dev? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722061">3</a> by Daniel Budde
		posted on 2/18/2010 at 11:53 PM
		</div>
		<div class="comment_text"><p>Sorry, let me clarify.  Why would you disable the type check?  Is it just resource intensive  and therefore you may not want it on in your production environment?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722055">4</a> by Raymond Camden
		posted on 2/18/2010 at 11:56 PM
		</div>
		<div class="comment_text"><p>Yes, it improves performance, but I don't have hard and fast numbers to back that up. I don't worry about it typically. Trusted Cache is what I normally use on production - that's a night and day difference typically.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722060">5</a> by Ryan McIlmoyl
		posted on 2/18/2010 at 11:59 PM
		</div>
		<div class="comment_text"><p>@Daniel,<br>That's exactly it.  There is some overhead involved in performing the type check.  I haven't actually seen anyone run any performance tests to see the actual impact though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722059">6</a> by Joe Zack
		posted on 2/18/2010 at 11:59 PM
		</div>
		<div class="comment_text"><p>I don't know if this is the reason, but type-checking happens at runtime in CF which means that that you will take a bit of a performance hit:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fsearch%3Fhl%3Den%26client%3Dfirefox-a%26rls%3Dorg.mozilla%253Aen-US%253Aofficial%26hs%3D87B%26q%3Dcoldfusion%2Btype%2Bchecking%2Bperformance%26aq%3Df%26aqi%3D%26oq%3D%3ArOmcEZFtCqdFkk6djyGdXFJf1gQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/search?hl=en&amp;client=firefox-a&amp;rls=org.mozilla%3Aen-US%3Aofficial&amp;hs=87B&amp;q=coldfusion+type+checking+performance&amp;aq=f&amp;aqi=&amp;oq=">http://www.google.com/searc...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722062">7</a> by Mike Brunt
		posted on 2/19/2010 at 12:12 AM
		</div>
		<div class="comment_text"><p>Of all the ColdFusion caching paradigms available to us Trusted Cache or Template Cache is the easiest to use and the most predictable and effective.  In CF8 and 9 it got even easier to use as we can clear it from inside CF Admin.  Thanks for the post Ray I am sure it will help many.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722063">8</a> by Devin
		posted on 2/19/2010 at 1:24 AM
		</div>
		<div class="comment_text"><p>I've definately seen some noticeable performance improvements in disabling it, specifically when testing under load. As Joe mentioned, the type checks happen at runtime, rather than compile time.</p><p>Best practice is to keep it enabled on dev environments (to catch type-related errors) and disabled in production.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722066">9</a> by Brad Wood
		posted on 2/19/2010 at 2:10 AM
		</div>
		<div class="comment_text"><p>I enable it in dev to keep development tight, but turn it off in production in performance.  If the code on dev is passing the correct data types then in theory it will continue to work in production and the check is unnecessary.  I beleive I started doing that after listening to a user group preso by Michael Dinowitz.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722064">10</a> by David McGuigan
		posted on 2/19/2010 at 3:59 AM
		</div>
		<div class="comment_text"><p>I'd love to see a blog post ( or presentation? ) on the real impact on performance using the trusted cache can make and at what scale.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722065">11</a> by Raymond Camden
		posted on 2/19/2010 at 4:01 AM
		</div>
		<div class="comment_text"><p>Most of the time it is _immediately_ visible. Try turning it on a production system and I'd be shocked if you don't see a change -a HUGE change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722067">12</a> by David McGuigan
		posted on 2/19/2010 at 4:53 AM
		</div>
		<div class="comment_text"><p>Oh my Todd in heaven. You weren't kidding.</p></div>
	</div>
</div>
		