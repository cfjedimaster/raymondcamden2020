
<div class="comment" id="c_1713714927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714927">1</a> by Jason
		posted on 4/24/2009 at 12:46 AM
		</div>
		<div class="comment_text"><p>We implemented this about a month ago to mixed reaction from our customers. The problem we've found is CFTOOLTIP will sometimes render the pop-up at the bottom of the screen instead of next to the image. Another common issue is the CFTOOLTIP image flickering off and on. This will happen on smaller screens where the pop-up image is forced to render on top of the original image.</p><p>You can see our implementation on a demo site. We have the pop-ups on all product images: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.ourspecialties.com%2F%3ARsAgpMiGqvrYZRulItWyk3S7fWA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.ourspecialties.com/">http://www.ourspecialties.com/</a>. Many customers have turned it off on their sites.</p><p>Any ideas on how to improve the experience are welcome. It was very easy to implement so I'm not really interested in writing my own JavaScript. I'd prefer Adobe tweak the source code so all we have to use is CFTOOLTIP.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714926">2</a> by Raymond Camden
		posted on 4/24/2009 at 1:37 AM
		</div>
		<div class="comment_text"><p>_Wow_. It is seriously fubared on your site. Are you running the latest CF8? (Ie 801 with hotfixes?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714928">3</a> by Jason
		posted on 4/24/2009 at 1:45 AM
		</div>
		<div class="comment_text"><p>Yes, we're at 8,0,1,195765. See, it looks and works fine for me on my computer at work and at home. On my laptop it doesn't work as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714930">4</a> by Raymond Camden
		posted on 4/24/2009 at 1:56 AM
		</div>
		<div class="comment_text"><p>Weird. Sorry - you got me. I don't use cftooltip that much. I'm almost entirely jQuery now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714929">5</a> by Sam Farmer
		posted on 4/24/2009 at 2:16 AM
		</div>
		<div class="comment_text"><p>@Jason</p><p>You brought back the blink tag! Awesome ;)</p><p>It looks great on a big monitor but when I made the browser smaller I see the problems.  Not sure how to solve it unless you provide smaller images? From the source code I see that you specify the width and height of the images.  Perhaps you can use css styles to do a percent of the window?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714931">6</a> by Peter Tilbrook
		posted on 4/24/2009 at 9:14 AM
		</div>
		<div class="comment_text"><p>What about embedded (malicious) script say in the tooltip code? How is that handled?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714932">7</a> by Yaron Kohn
		posted on 4/24/2009 at 3:34 PM
		</div>
		<div class="comment_text"><p>what about a jQuery Demo...(BTW, I'm a jQuery fanatic as well now)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714935">8</a> by Raymond Camden
		posted on 4/24/2009 at 3:56 PM
		</div>
		<div class="comment_text"><p>Sure, and I could do it 'proper' (with caching of the resizing).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714933">9</a> by Raymond Camden
		posted on 4/24/2009 at 4:03 PM
		</div>
		<div class="comment_text"><p>@Peter: What do you mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714937">10</a> by Brian FitzGerald
		posted on 4/24/2009 at 6:41 PM
		</div>
		<div class="comment_text"><p>I've been using a jQuery plugin called qTip I've been rather pleased with - available here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcraigsworks.com%2Fprojects%2Fqtip%2F%3AczN2wDKGvqohdQTTcJ4STI282YM&amp;cuid=3321886" rel="nofollow noopener" title="http://craigsworks.com/projects/qtip/">http://craigsworks.com/proj...</a></p><p>Plenty of ways to customize the look and feel.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714936">11</a> by s23yen
		posted on 4/28/2009 at 6:18 PM
		</div>
		<div class="comment_text"><p>Really cool, i prefer using good CF instead of all other available .js libs (even if some are more powerful indeed, but for a small gallery without any pretention, great!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714934">12</a> by Chad Stinner
		posted on 4/30/2009 at 7:57 PM
		</div>
		<div class="comment_text"><p>Question though, how does one make the tooltip stay indefinitely until the user moves off the image? I've found that changing the autodismissdelay does nothing. Even when I close all browsers and come back. It never changes from 5 seconds.</p><p>I even set it to 500000 just to see. Restarted the CF Dev server and nothing. Still... 5 seconds.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714938">13</a> by Raymond Camden
		posted on 4/30/2009 at 7:59 PM
		</div>
		<div class="comment_text"><p>I seem to remember a bug report on the autodismissdelay. YOu running the latest rev of CF8?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714940">14</a> by Chad Stinner
		posted on 5/1/2009 at 3:32 PM
		</div>
		<div class="comment_text"><p>Sure am.<br>Server Product  ColdFusion<br>Version 	8,0,1,195765  <br>Edition 	Enterprise</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714939">15</a> by Raymond Camden
		posted on 5/1/2009 at 5:21 PM
		</div>
		<div class="comment_text"><p>It may _not_ be fixed then. Sorry - might need to raise it w/ Adobe support.</p></div>
	</div>
</div>
		