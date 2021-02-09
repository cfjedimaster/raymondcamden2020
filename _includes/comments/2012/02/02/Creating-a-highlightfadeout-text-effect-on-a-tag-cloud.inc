
<div class="comment" id="c_1713738906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738906">1</a> by JP
		posted on 2/3/2012 at 3:48 AM
		</div>
		<div class="comment_text"><p>The opacity animation is nice, but to complete the coolness factor of the cloud on:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.amivitale.com%2F%3AjN8Qh1PiZmuLbUvOjAQ7H2c6XiU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.amivitale.com/">http://www.amivitale.com/</a></p><p>You would also need to overlap the words, and justify them within a rectangle (span to left/right edges). I think the trick is to somehow randomly overlap the words with CSS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738907">2</a> by Kevin Hoyt
		posted on 2/3/2012 at 4:25 AM
		</div>
		<div class="comment_text"><p>I think it is an interesting choice to use jQuery for this.  Seems like a great use-case for a :hover pseudo selector with a CSS animation hook in it.  Then there's no need for JavaScript at all, and you get hardware acceleration where available.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738904">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738904">3</a> by Raymond Camden
		posted on 2/3/2012 at 4:28 AM
		</div>
		<div class="comment_text"><p>Well, looks like I have something to try tomorrow morning then. :) Last time I looked an animation in CSS it confused the heck out of me - but this would be a good excuse to try to finally grok it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738908">4</a> by Raymond Camden
		posted on 2/3/2012 at 7:41 AM
		</div>
		<div class="comment_text"><p>For a good example, see this:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen%2FCSS%2FCSS_animations%3ALQntWiB7P2pgI-rKXWsmF8Bz0DY&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en/CSS/CSS_animations">https://developer.mozilla.o...</a></p><p>I'm still a bit confused - but I feel closer to groking it now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738914">5</a> by Nathan D
		posted on 2/3/2012 at 10:24 AM
		</div>
		<div class="comment_text"><p>One of the examples on that CSS animations page made my browser crash. Pretty good reason to use jQuery for now, if you ask me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738930">6</a> by Raymond Camden
		posted on 2/3/2012 at 4:38 PM
		</div>
		<div class="comment_text"><p>What browser was it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738931">7</a> by Terry Sampson
		posted on 2/3/2012 at 5:28 PM
		</div>
		<div class="comment_text"><p>Wouldn't you need something that works in all browsers as well as Mozilla?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738927">8</a> by Raymond Camden
		posted on 2/3/2012 at 7:37 PM
		</div>
		<div class="comment_text"><p>Why Terry? What you need to support depends on your audience. While it is clear that my code here probably works better than pure CSS animations, there's no reason not to try. As long as we only build for the lowest common denominator, we will never push the web forward.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738929">9</a> by Kevin Hoyt
		posted on 2/3/2012 at 7:56 PM
		</div>
		<div class="comment_text"><p>@Nathan,</p><p>Not trying to sound snarky here, but I've been to lots of sites where poor JavaScript has locked a browser tab or crashed my browser altogether.  CSS Animation declarations can be complicated to get to get right.  I don't think it's fair to blame an overall technology based on a bad examples.  That's how we got to "Flash is evil" in the past.</p><p>@Terry,</p><p>CSS Animations are supported in Firefox 7 - 10, Chrome 13 - 16, Safari 4 -5.1, iOS 3.2 - 5.  On Android, CSS Animations have been partially supported (enough to cover this use-case) from 2.1 - 3 and is fully supported in 4.  CSS Animations work fully in preview releases of IE 10.</p><p>Point being that there's really pretty solid coverage.  You definitely have to gauge your users before dismissing features that move all of us forward.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738928">10</a> by Terry Sampson
		posted on 2/3/2012 at 8:02 PM
		</div>
		<div class="comment_text"><p>I agree.</p><p>Wasn't trying to be snarky.</p><p>You guys are the best.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738932">11</a> by blackjk
		posted on 2/3/2012 at 8:46 PM
		</div>
		<div class="comment_text"><p>I don't understand the confusion with CSS transitions here.</p><p>.tagcloudword { <br>opacity: 0.5;</p><p>/* Removed other prefixes for simplicity */<br>transition: all 0.3s ease-out;<br>}<br>.tagcloudword:hover { opacity: 1.0; }</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738934">12</a> by Raymond Camden
		posted on 2/3/2012 at 8:49 PM
		</div>
		<div class="comment_text"><p>Blackjk:</p><p>It was confusing to me. I didn't say it was confusing to all. ;)</p><p>I'm writing my blog post right now actually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738933">13</a> by Raymond Camden
		posted on 2/3/2012 at 8:51 PM
		</div>
		<div class="comment_text"><p>Posted an update here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F2%2F3%2FUpdate-to-my-highlightfadeout-example--now-with-CSS-hotness%3A67WvGF2Rl7g9crWLhdANag7PbNI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/2/3/Update-to-my-highlightfadeout-example--now-with-CSS-hotness">http://www.raymondcamden.co...</a></p><p>This is certainly not rocket science - but I'm glad I was finally pushed to look into it. Far simpler than I expected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738926">14</a> by Nathan D
		posted on 2/3/2012 at 10:38 PM
		</div>
		<div class="comment_text"><p>@Kevin - Flash IS evil ;)</p><p>Of course javascript CAN also kill a browser, but that's WAY less common a problem than Flash killing a browser. By a couple orders of magnitude in my experience.  But, in this case the issue is that CSS animations are pretty cutting edge and have uneven support (even the solution in Ray's follow up post shows the complications of doing this TODAY for anything other than a very controlled audience). Great to play with on a blog, but worth noting for developers of things real humans use that it's not a no-brainer by any stretch.</p><p>@Ray it was Safari 5 that crashed on that site.</p></div>
	</div>
</div>
		