
<div class="comment" id="c_1713616522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616522">1</a> by Tim Blair
		posted on 11/11/2004 at 2:52 PM
		</div>
		<div class="comment_text"><p>One thing I've noticed is that the CFAdmin often pads values with spaces either side when displaying.  For example, if you go into "custom tag paths" then the actual path is linked so you can edit it.  But the link actually includes whitespace either side of the path.</p><p>In the past I have fallen into the trap of usind the good old "copy and paste" method of creating a new custom tag path and have accidentally copied the spaces along too.  Like you said -- one little trim() call could have saved a lot of hassle!</p><p>But it also makes me wonder why MM decided to use the "space padding" rather than just doing the job properly wil CSS...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616524">2</a> by Simon Horwith
		posted on 11/16/2004 at 7:18 PM
		</div>
		<div class="comment_text"><p>though it'd probably save headaches, I don't think CFModule should trim things for you, and neither should the admin, when it comes to directory paths. It's probably possible in some OS's to have leading or trailing directory spaces... I wouldn't recommend it, but if it's possible then I wouldn't fault Macromedia for allowing it.  It's the resposibility of the administrator, after all, to ensure that all configuration settings are entered accurately... just like it's the responsibility of developers to ensure they pass them correctly.</p><p>It's not an easy mis-configuration or parameter typo to catch, I agree.  I've had similar things happen in J2EE configuration files.... not very fun to debug at all.  Chalk it up as just being part of the joy of software development, I suppose ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616521">3</a> by Raymond Camden
		posted on 11/16/2004 at 8:12 PM
		</div>
		<div class="comment_text"><p>I wouldn't make cfmodule do an auto trim, it should respect what you pass in, but I disagree about the cf admin. Windows seems to ignore spaces. I don't have a linux box to test on. But there aren't -that- many OSes that CF supports, so it would easy enough to test I'd think. Anyway, we will agree to disagree.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616523">4</a> by Tim Blair
		posted on 11/16/2004 at 8:17 PM
		</div>
		<div class="comment_text"><p>It is possible to create directories or files with leading/trailing spaces in both windows (via the command prompt) and linux.  As to why on earth you'd want to do that, I have no idea...  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616526">5</a> by Raymond Camden
		posted on 11/16/2004 at 10:02 PM
		</div>
		<div class="comment_text"><p>Hmm, Tim, when I tried it in XP it stripped it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616527">6</a> by Tim Blair
		posted on 11/18/2004 at 3:59 PM
		</div>
		<div class="comment_text"><p>Try going to a command prompt and do:</p><p>mkdir "     test     "</p><p>But my apologies: it does still strip out training spaces.</p></div>
	</div>
</div>
		