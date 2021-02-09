
<div class="comment" id="c_1713660157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660157">1</a> by todd sharp
		posted on 12/12/2006 at 2:47 AM
		</div>
		<div class="comment_text"><p>Excellent - this will come in handy.  Do you know if you could pass an entire struct (object) as a var and then access it as this.parameters.keyName?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660164">2</a> by Raymond Camden
		posted on 12/12/2006 at 2:50 AM
		</div>
		<div class="comment_text"><p>My understanding is that flashvars only allow simple values, like url query strings. Even if you _could_ make it work, I would not. That level of complexity really deserves a "real" HTTP type call, not being put into the HTML, know what I mean?</p><p>That's my opinion anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660165">3</a> by todd sharp
		posted on 12/12/2006 at 2:57 AM
		</div>
		<div class="comment_text"><p>Agreed.  I was thinking more along the lines of passing in the session struct, but I see your point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660167">4</a> by JesterXL
		posted on 12/12/2006 at 4:04 AM
		</div>
		<div class="comment_text"><p>Since I'm a client guy, and usually pawn security concerns off to you server-side dudes, perhaps you could either A) determine if something like CFQueryparam is necessary in situations in this for security reasons and B) if it is, perhaps convert it to AS3?  It'd be h@wt!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660169">5</a> by Raymond Camden
		posted on 12/12/2006 at 4:06 AM
		</div>
		<div class="comment_text"><p>Jester, I'm not quite sure cfqueryparam makes sense here, unless I'm misunderstanding you. In the past, I've only used flashvars for things that are not security related.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660168">6</a> by JesterXL
		posted on 12/12/2006 at 4:20 AM
		</div>
		<div class="comment_text"><p>I've seen some pretty neat uses of FlashVars in Flex 1.5.  The problem was that it dropped those values on _level0 (main scope back then) and I never really heard of anyone doing anything to ensure that those values were valid and inspected.</p><p>Obviously, if you have that stuff on the server-side, that you can hack the client to to your heart's content, and not worry, but just curious; it seems MORE security is better than just the same.  For example, using FlashVars to show data:</p><p>somerecord=recordA</p><p>Back in 1.5, you'd have somerecord defined for you on in your main Flex Application file.  There is nothing stopping the user, at least from what I've seen, from doing the same thing they do in attempting to expose regular sites by injecting bad things into the params; the whole reason CFQueryparam (or whatever that tag is called) was invented in the first place; to ensure safe, acceptable query parameters.  Flex, in both versions, doesn't appear to make a distinction.  It just seems people would take this for granted.  The dangers of messing with Application level variables is gone now that they are sequested in the parameters property, but it still seeems pretty easy to pass whatever I want if someone takes no steps client side to project it.</p><p>Obviously, if they have the server-side portion, there isn't much I can do, but still I've never seen client side code implementations match up exactly with server-side, so seems to be to still be a valid concern.</p><p>Make sense, or still not a big deal?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660173">7</a> by Raymond Camden
		posted on 12/12/2006 at 7:28 AM
		</div>
		<div class="comment_text"><p>Ah - so if I read you right - you are saying that in the AS code, you should treat the flashvars just like you would treat a URL variable in CF. Ie - don't trust it. If you wanted a number, check to sdee that it is a number, greater than zero, etc. Are we on the same page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660159">8</a> by James Holmes
		posted on 12/12/2006 at 5:55 PM
		</div>
		<div class="comment_text"><p>The Flex-Ajax bridge is another thing you should look at:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Fwiki%2Findex.php%2FFlex_Framework%3AFABridge%3A2dlEsYRQq8R2dG4Yef10mHEg1UU&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/wiki/index.php/Flex_Framework:FABridge">http://labs.adobe.com/wiki/...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fflexapps.macromedia.com%2Fflex2beta3%2Ffabridge%2Fsamples%2FFABridgeSample.html%3AGEzWx6YX3CkqXaf5ED14QjsoxAg&amp;cuid=3321886" rel="nofollow noopener" title="http://flexapps.macromedia.com/flex2beta3/fabridge/samples/FABridgeSample.html">http://flexapps.macromedia....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660158">9</a> by JesterXL
		posted on 12/12/2006 at 10:40 PM
		</div>
		<div class="comment_text"><p>I guess.  I've just never really had to handle worrying about data integrity and security before.  Most clients I create are presentation layers that leave all the security &amp; verification to the back-end.  So, when I first started messing with FlashVars in Flex 1.5, it was the first time I had to start worrying about security, that's all.  Apparently, it seems liek a valid concern, for example inspecting that your data truly is "somewhat" valid.  Was hoping for a cop-out answer, saying that "no, you don't have to worry about it.".  Oh well!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660161">10</a> by prabaharan
		posted on 11/21/2011 at 6:59 PM
		</div>
		<div class="comment_text"><p>hi, I need to pass flashvars from parent swf to child swf. is it possible?</p></div>
	</div>
</div>
		