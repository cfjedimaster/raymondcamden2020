
<div class="comment" id="c_1713718547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718547">1</a> by Gareth Arch
		posted on 9/22/2009 at 6:38 PM
		</div>
		<div class="comment_text"><p>Couldn't you just check the "failedAttempts" and dateDiff before performing the login functionality?  This would appear to the user to be automatically unblocking the user and not need to worry about any scheduled tasks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718546">2</a> by Raymond Camden
		posted on 9/22/2009 at 6:39 PM
		</div>
		<div class="comment_text"><p>My code does that - but Omer specifically said he wanted it automatic - ie even if the user doesn't try to login.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718535">3</a> by Gareth Arch
		posted on 9/22/2009 at 6:46 PM
		</div>
		<div class="comment_text"><p>Yeah, that's what confused me a little.  I saw that bit in your code and figured it was (probably) being run prior to login, I just didn't understand the logic behind needing the scheduled task (other than making it "automatic") :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718542">4</a> by Jeff
		posted on 9/22/2009 at 7:10 PM
		</div>
		<div class="comment_text"><p>Gareth, the difference is subtle but there. With a scheduled cleaning of the blocked users you will always have a list of the users that are currently being blocked.</p><p>Of course, it's not hard to take the list, clean it and then show the current blocked users.</p><p>I guess it depends if you like lazy or proactive operations on stuff like this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718551">5</a> by Gareth Arch
		posted on 9/22/2009 at 7:13 PM
		</div>
		<div class="comment_text"><p>I guess with a scheduled task you could also audit the blocked users before scrubbing for security purposes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718553">6</a> by brian
		posted on 9/22/2009 at 7:55 PM
		</div>
		<div class="comment_text"><p>missing quotes in 4th code block?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718549">7</a> by Raymond Camden
		posted on 9/22/2009 at 7:57 PM
		</div>
		<div class="comment_text"><p>That was a test. You passed. Thanks. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718548">8</a> by kevin penny
		posted on 9/22/2009 at 9:43 PM
		</div>
		<div class="comment_text"><p>&lt;cfset application.failedAttempts[username].cout = 0&gt; ~ &lt;cfset application.failedAttempts[username].count = 0&gt; as well right??</p><p>Thanks RC</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718554">9</a> by Raymond Camden
		posted on 9/22/2009 at 9:44 PM
		</div>
		<div class="comment_text"><p>Yep, and fixed.</p></div>
	</div>
</div>
		