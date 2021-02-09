
<div class="comment" id="c_1713615643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615643">1</a> by stylo~
		posted on 5/18/2004 at 6:50 AM
		</div>
		<div class="comment_text"><p>&gt;&gt;With ColdFusion MX, there is only one reason to lock application, session, or server variables, and that is the danger of a race condition. For this application, it is not a concern.</p><p>Why not? I have an old application I need to rewrite for cfmx, but you make it sound like cflock isn't needed any more. Can you clarify? I was under the impression cflock was needed to protect variables from being overwritten by another call at the same time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615645">2</a> by Andy Allan
		posted on 5/18/2004 at 10:11 AM
		</div>
		<div class="comment_text"><p>Read Ben Forta's comment on the subject here.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.forta.com%2Fblog%2Findex.cfm%3Fmode%3De%26entry%3D1139%3Ax6aQve8UGi2lbzHdhHXnDdraPpo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.forta.com/blog/index.cfm?mode=e&amp;entry=1139">http://www.forta.com/blog/i...</a></p><p>Andy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615644">3</a> by Raymond Camden
		posted on 5/18/2004 at 3:20 PM
		</div>
		<div class="comment_text"><p>stylo, if Andy's link doesn't help, let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615650">4</a> by Charlie Griefer
		posted on 5/18/2004 at 5:27 PM
		</div>
		<div class="comment_text"><p>is it just me (likely), or do the contents of the zip file not extract to proper subdirectories?</p><p>i've tried twice, and both times they just all get extracted to the web root.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615646">5</a> by Raymond Camden
		posted on 5/18/2004 at 5:30 PM
		</div>
		<div class="comment_text"><p>Yep, zip got messed up. I'm pinging them now. I'll post the zip on my blog as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615649">6</a> by Raymond Camden
		posted on 5/18/2004 at 5:36 PM
		</div>
		<div class="comment_text"><p>Posted. See main blog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615651">7</a> by stylo~
		posted on 5/19/2004 at 6:27 AM
		</div>
		<div class="comment_text"><p>Thanks for the link.</p><p>One simple question:</p><p>In the MM page they talk about a possible race condition with</p><p> cfset session.cartTotal = session.cartTotal + currentPrice</p><p>I'm correct in thinking, am I not, that the possible session race would be per user session, not all sessions combined? Only if a single user loaded two pages together at the same time could there be a race condition here, not two different users on the same page (because they each have their own session variables).</p><p>If correct, then given that a user could always have two windows open at the same time, there would always be a race possiblity with session variables then, no? And always a need to lock them then, no?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615653">8</a> by Raymond Camden
		posted on 5/20/2004 at 3:14 PM
		</div>
		<div class="comment_text"><p>Correct stylo - the issue in that case would be for the user himself.</p><p>But do you always need to lock them? No. In the specific example given, it was critical that you access the data in a single thread manner. There are many cases where it is not critical. So, for example, accessing <a href="http://disq.us/url?url=http%3A%2F%2Fsession.name%3AZwb-hLe-wEBzsm3ETsHiiwbl77s&amp;cuid=3321886" rel="nofollow noopener" title="session.name">session.name</a>, to simply print out your name, has no need to be locked. Any type of simple display of a session var would _normally_ not be locked. The thing is to just think about how you are using the variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615648">9</a> by steve ray
		posted on 5/21/2004 at 5:30 AM
		</div>
		<div class="comment_text"><p>ray, dude, get a new picture. ;)</p></div>
	</div>
</div>
		