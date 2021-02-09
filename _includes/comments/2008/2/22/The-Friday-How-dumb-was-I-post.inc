
<div class="comment" id="c_1713677349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677349">1</a> by Jay McConathy
		posted on 2/22/2008 at 8:07 PM
		</div>
		<div class="comment_text"><p>I hate it when I do that. I have found myself looking at a piece of code and looking over the fact that I left out an = or something stoopid. feel really silly when somone else points out the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677360">2</a> by David Buhler
		posted on 2/22/2008 at 8:20 PM
		</div>
		<div class="comment_text"><p>@Jay</p><p>The best thing you can do is to have a CFC that is very complex with a deep, deep problem. Then, when they point out the simple mistake, say, "No, no, no, young lad, I was talking about THIS file over here."</p><p>For maximum effect, you can rename the CFC to closely resemble the name of the REAL CFC in question.</p><p>See Celebrity Impersonators for more: <a href="http://disq.us/url?url=http%3A%2F%2Ftinyurl.com%2F2m7mqo%3A0U7udclB2e_wMX6Pfi0rzx9Oo4g&amp;cuid=3321886" rel="nofollow noopener" title="http://tinyurl.com/2m7mqo">http://tinyurl.com/2m7mqo</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677359">3</a> by Tom Chiverton
		posted on 2/22/2008 at 8:39 PM
		</div>
		<div class="comment_text"><p>"<a href="http://disq.us/url?url=http%3A%2F%2Ftinyurl.com%2F2m7mqo%3A0U7udclB2e_wMX6Pfi0rzx9Oo4g&amp;cuid=3321886" rel="nofollow noopener" title="http://tinyurl.com/2m7mqo">http://tinyurl.com/2m7mqo</a>"<br>Man, someone needs to learn how to scale while keeping the aspect ratio intact :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677357">4</a> by Jay McConathy
		posted on 2/22/2008 at 8:39 PM
		</div>
		<div class="comment_text"><p>@David</p><p>I like that idea, I will try that when it happens again, and it will.</p><p>Jay</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677362">5</a> by Martin
		posted on 2/22/2008 at 8:54 PM
		</div>
		<div class="comment_text"><p>Ray <br>Chill man - don't beat yourself up - you rock!<br>You are such a lightning fast coder / blogger that I'm sure one hour won't kill you.</p><p>Try working on cross browser CSS compatibility issues sometime and THEN see how many hours you can easily waste! Now THAT is frustrating!</p><p>Marty</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677363">6</a> by Nick Kwiatkowski
		posted on 2/22/2008 at 9:11 PM
		</div>
		<div class="comment_text"><p>Wouldn't it be cool if we had an IDE that had component introspection?  It would save me a few hours a week too!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677367">7</a> by Daryl Banttari
		posted on 2/22/2008 at 10:27 PM
		</div>
		<div class="comment_text"><p>Ah, the dangers of abbreviation.</p><p>In this case you abbreviated "return" but not "value".  I tend to err on the side of verbosity, myself; I'd probably name that method getReturnValue().  Actually, I'd probably try to find a name that was a bit more meaningful... but hopefully getReturnValue() is very meaningful in whatever context it's in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677364">8</a> by Andrew
		posted on 2/22/2008 at 11:12 PM
		</div>
		<div class="comment_text"><p>I recently did something similar but I had it in a StructKeyExists...</p><p>Something along the lines of:</p><p>&lt;cfif StructKeyExists(FORM, "retVal")&gt;</p><p>where it should have been</p><p>&lt;cfif StructKeyExists(FORM, "retValue")&gt;</p><p>I had to take a walk around the office before I found the problem :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677366">9</a> by Bradman
		posted on 2/23/2008 at 12:02 AM
		</div>
		<div class="comment_text"><p>I was calling someone else's cfc one time and for an hour I  could not figure out why:<br>getProductDefault(a,b,c) would not work..</p><p>then realized in the entire 2000 line file, the word "default" was consistently mis-spelled as "defualt" in method names, param names.....</p><p>AAArrrrggggh!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677368">10</a> by Nolan Erck
		posted on 2/23/2008 at 12:19 AM
		</div>
		<div class="comment_text"><p>It happens to all of us at one time or another.  For me, I tend to find those bugs quicker if I do one of the following:</p><p>1. turn the computer OFF and try again tomorrow.<br>2. go watch TV, walk, play a video game, or some other distraction for 20 minutes.</p><p>You get the idea. do something else, so that when you return to the code you have a fresh set of eyes.</p><p>--nolan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677365">11</a> by John C. Bland II
		posted on 2/23/2008 at 12:46 AM
		</div>
		<div class="comment_text"><p>That's why I always spell out every function name. Coding in Java erks me at times with all of the Impl's floating around. :-)</p><p>Happens to the best of us.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677369">12</a> by David Buhler
		posted on 2/23/2008 at 2:27 AM
		</div>
		<div class="comment_text"><p>I found that this happens less since I switched to longer, more descriptive method names:</p><p>valUserName()</p><p>is now...</p><p>get validate_user_name_uniqueness()</p><p>Stole it from the Martin Fowler book on refactoring.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677371">13</a> by Tony Garcia
		posted on 2/23/2008 at 4:10 AM
		</div>
		<div class="comment_text"><p>"Try working on cross browser CSS compatibility issues sometime and THEN see how many hours you can easily waste! Now THAT is frustrating!"</p><p>Hear, hear!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677370">14</a> by Louis Stowasser
		posted on 2/24/2008 at 3:51 AM
		</div>
		<div class="comment_text"><p>"Try working on cross browser CSS compatibility issues sometime and THEN see how many hours you can easily waste! Now THAT is frustrating!"</p><p>You got that right. The last time I spent hours on that I gave up. Then decided to cheat and use javascript ahaah. I'm ashamed of myself.</p></div>
	</div>
</div>
		