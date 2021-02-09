
<div class="comment" id="c_1713614641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614641">1</a> by Scott Fitchet
		posted on 6/13/2003 at 1:22 AM
		</div>
		<div class="comment_text"><p>What are you using to test your concurrency solutions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614643">2</a> by Geoff Bowers
		posted on 6/13/2003 at 7:17 AM
		</div>
		<div class="comment_text"><p>Ray, I think you''ll find that the act of testing for existence is a READ and strictly speaking needs to be locked also :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614644">3</a> by Raymond Camden
		posted on 6/13/2003 at 1:28 PM
		</div>
		<div class="comment_text"><p>I disagree. I think it could be locked, but I don''t think it needs to be locked, and I don''t think it would help. Taking the example of threads A and B again, wouldn''t both be able to get past the read lock since the ob wouldn''t exist? The only reason I can see for locking here would be for CF servers that are not MX.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614647">4</a> by seancorfield
		posted on 6/13/2003 at 4:19 PM
		</div>
		<div class="comment_text"><p>I blogged something similar in January: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.corfield.org%2Fblog%2Farchives%2F2003_01.html%23000051%3A-Tuw_J-ezWXCeeKc02tOGL0WyHg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.corfield.org/blog/archives/2003_01.html#000051">http://www.corfield.org/blo...</a> and credited Marcello Frutig for the insight.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614645">5</a> by mike
		posted on 6/14/2003 at 9:29 PM
		</div>
		<div class="comment_text"><p>isnt it true that named locks and scope locks are actually the same thing?</p><p>what i mean is, if everyone used this:</p><p>cflock name="Session_Scope_Lock"</p><p>instead of this:</p><p>cflock scope="Session"</p><p>the behavior of the locking wouldnt be any different, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614648">6</a> by seancorfield
		posted on 6/14/2003 at 10:47 PM
		</div>
		<div class="comment_text"><p>A named lock applies across the whole server, a scoped lock applies only to that scope. So it would be the same as locking on server scope. If you lock on session scope, you would only block threads in your session (so multiple users, with different sessions, do not block each other).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614642">7</a> by Selene Bainum
		posted on 6/23/2003 at 7:32 PM
		</div>
		<div class="comment_text"><p>I run into this all the time with my Application variables.</p><p>This is what I do:</p><p>lock:exclusive<br>  cfparam <a href="http://disq.us/url?url=http%3A%2F%2Fserver.foo%3Aj2eYJUgzbB5pGDB1gD60cgAcohk&amp;cuid=3321886" rel="nofollow noopener" title="server.foo">server.foo</a> to ""<br>  duplicate <a href="http://disq.us/url?url=http%3A%2F%2Fserver.foo%3Aj2eYJUgzbB5pGDB1gD60cgAcohk&amp;cuid=3321886" rel="nofollow noopener" title="server.foo">server.foo</a> to <a href="http://disq.us/url?url=http%3A%2F%2Frequest.serv.foo%3Aq2vGbQ0NH3V2Qxb2esIbf6gUqxk&amp;cuid=3321886" rel="nofollow noopener" title="request.serv.foo">request.serv.foo</a><br>end the lock</p><p>if <a href="http://disq.us/url?url=http%3A%2F%2Frequest.server.foo%3Aw0QvX7I5dZFsiCKiFou2R3Q0nDI&amp;cuid=3321886" rel="nofollow noopener" title="request.server.foo">request.server.foo</a> is ""<br>  lock: exclusive <br>    update the value of <a href="http://disq.us/url?url=http%3A%2F%2Fserver.foo%3Aj2eYJUgzbB5pGDB1gD60cgAcohk&amp;cuid=3321886" rel="nofollow noopener" title="server.foo">server.foo</a><br>  end the lock<br>end if</p><p>I never even use unlocked scoped variables in cfif statments.  I duplicate everything to request scopes and work that way.</p><p>cfset Request.Ses = Duplicate(Session)<br>cfset Request.App = Duplicate(Application)</p><p>That''s at the bottom on my Application.cfm (with the appropriate locks, of course.</p></div>
	</div>
</div>
		