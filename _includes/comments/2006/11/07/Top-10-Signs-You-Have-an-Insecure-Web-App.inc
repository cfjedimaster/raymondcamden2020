
<div class="comment" id="c_1713658979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658979">1</a> by Stefan Richter
		posted on 11/7/2006 at 5:59 PM
		</div>
		<div class="comment_text"><p>thanks, I'm interested in this topic, especially if it covers how to prevent this sort of thing in CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658980">2</a> by Sam
		posted on 11/8/2006 at 5:33 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for the pointer.  I see a good opportunity for an open source app that would utilize some of the searches he performed in the article and give a simply security report for all the websites under one's control.  Automated testing = good!</p><p>Perhaps, I'll start one in December (when school's out) =).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658965">3</a> by tof
		posted on 11/9/2006 at 11:42 AM
		</div>
		<div class="comment_text"><p>I'm not sure I agree with point 9. the guy tells you to remove comments from your live code in case you use google code.</p><p>seriously, who in the world removes their comments from their code before deploying?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658968">4</a> by Sam
		posted on 11/9/2006 at 4:46 PM
		</div>
		<div class="comment_text"><p>tof-</p><p>When I read that, I was thinking more along the lines of "comment in the server side language you are using so it doesn't show up"  rather than "remove all your comments"</p><p>But, he mentions things like "todo" and "fixme."  I would hope every developer removes those before it goes into production - or else, it doesn't seem like it should be in production (or rather, if it no longer needs to be done or fixed, why keep the comment as clutter?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658966">5</a> by Raymond Camden
		posted on 11/9/2006 at 5:16 PM
		</div>
		<div class="comment_text"><p>tof: Sam has it right, the TODO and FIXME could reveal problems. And while you say CF strips all comments - what if an error occurs and you forgot to turn off robust exception handling? Than you can potentially see the comments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658978">6</a> by Sam
		posted on 11/9/2006 at 8:47 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>In that case, I'd be more worried about them seeing the code than the comments I think.  I mean, &lt;!--- to do: fix this error ---&gt; to me, is far less worrisome than &lt;cfif form.password is "knockknock"&gt; ... let them in &lt;/cfif&gt;</p><p>...</p><p>But, I may very well be overlooking something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658957">7</a> by Raymond Camden
		posted on 11/9/2006 at 8:51 PM
		</div>
		<div class="comment_text"><p>Oh no - you are right - I think the idea was you MAY think comments are harmless, and they certainly COULD end up being harmful if you aren't careful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658969">8</a> by tof
		posted on 11/10/2006 at 4:01 AM
		</div>
		<div class="comment_text"><p>I still think it's overkill, and not worth being in a "top 10 security issues". but that's just me.</p></div>
	</div>
</div>
		