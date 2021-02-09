
<div class="comment" id="c_1713744116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744116">1</a> by Adam Finch
		posted on 1/11/2013 at 7:52 AM
		</div>
		<div class="comment_text"><p>Hey Raymond, Great blog.</p><p>You mention that you don't have to skip to the end--how might you do that? I've tried play(label) in skipping part of my animation with no success. Could you elaborate on how to skip to a specific time or label?</p><p>Thanks,<br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744119">2</a> by Raymond Camden
		posted on 1/11/2013 at 4:46 PM
		</div>
		<div class="comment_text"><p>Check out the code in background.js, specifically fireScrubTo. Notice how it works with the duration of the animation? You have access to it, so a method to go to the end would just use that. *But* please note you can't scrub to duration, but only duration-1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744118">3</a> by Adam Finch
		posted on 1/11/2013 at 9:17 PM
		</div>
		<div class="comment_text"><p>thanks for getting back to me. For some reason the creationComplete event handler never worked for me the way I wanted (it would play the first time, but wouldn't play or skip to the end after that), but I figured out another way.</p><p>Instead of turning off autoplay and using creationComplete I left autoplay on and set a trigger action at 0ms.  The rest of it was the same.</p><p>cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744117">4</a> by Raymond Camden
		posted on 1/11/2013 at 9:19 PM
		</div>
		<div class="comment_text"><p>Glad you got it, because my comment, while technically right, was in context of a completely different blog post I did. I blame the pain meds.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744121">5</a> by Steve
		posted on 11/5/2013 at 8:47 PM
		</div>
		<div class="comment_text"><p>Is there any way you could make the edge project file available?  I'm relatively new to javascript and edge animate, but if I could see how you setup your elements it would make my year.  I tried adding the script above to my stage as a creationComplete and I turned off autoplay, but now I'm not getting any animation whatsoever when I preview it in my browser.  Awesome post, I appreciate any help you can provide!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744122">6</a> by Raymond Camden
		posted on 11/6/2013 at 3:47 AM
		</div>
		<div class="comment_text"><p>When I did my upload I uploaded everything, but obviously you can't see that. I just zipped up the entire folder. You can find it here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2012%2Fdec%2F4%2F4.zip%3Aj6AeN7vR4xnAdlKT7bfz3i93XNg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2012/dec/4/4.zip">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744129">7</a> by Michael M
		posted on 10/30/2014 at 4:44 AM
		</div>
		<div class="comment_text"><p>This seems to be broken in the latest version of Muse. At least from Muse it throws an error when creating an action.</p><p>"There are JavaScript syntax errors in this Edge Animate composition's actions.</p><p>Event Handlers cannot be created until these problems are fixed."</p><p>Thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744128">8</a> by Raymond Camden
		posted on 10/30/2014 at 4:56 AM
		</div>
		<div class="comment_text"><p>See my post here, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2F2014%2F10%2F14%2FDelaying-an-Edge-Animate-asset-until-visible--Part-6%3Apa4HfFM6PDRqyjtHfF70uyW-yUM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/2014/10/14/Delaying-an-Edge-Animate-asset-until-visible--Part-6">http://www.raymondcamden.co...</a>. EA changed some stuff recently and most of my demos no longer work (but are easily fixable).</p></div>
	</div>
</div>
		