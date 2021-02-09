
<div class="comment" id="c_1713677311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677311">1</a> by dc
		posted on 2/21/2008 at 5:27 PM
		</div>
		<div class="comment_text"><p>You can omit the need for a CFIDE mapping for the Ajax scripts by using the 'scriptsrc' attribute of cfajaxproxy to specify the location, and just upload all the necessary scripts from a Dev install of CF to your own web space.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677312">2</a> by Raul Riera
		posted on 2/21/2008 at 5:38 PM
		</div>
		<div class="comment_text"><p>If indeed he is missing the CFIDE folder, an error will be displayed saying so (on JS happened to me a long while ago when I started making CF sites on shared hostings) I think his problem has to do with something else.</p><p>Perhaps he should look too see if he has the same problem as me before. Dont put your "proxy" CFC or any other remote access CFC inside a CFLOGIN restricted folder, or you wont be able to call those functions on Safari or FireFox (yup its bizzarre, but it does happens)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677310">3</a> by Tony Garcia
		posted on 2/21/2008 at 6:41 PM
		</div>
		<div class="comment_text"><p>Another thing that has tripped me up when using cfajaxproxy was using the onRequest method in my Application.cfc. It's well-known that this breaks things like flash remoting and event gateway requests. But it also breaks remote calls to CFC's by cfajaxproxy. (and this isn't particular to shared servers)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677322">4</a> by Brent
		posted on 2/21/2008 at 7:19 PM
		</div>
		<div class="comment_text"><p>@dc - That's not necessarily a best bet.  Supposed Adobe releases a hot fix that changes some of those JavaScript files for some security reason.  Then you're stuck with an old, and compromisable CFIDE folder.  The best bet is to have the web host map the directory for you.  I do it every day for our customers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677317">5</a> by Scott Reynolds
		posted on 2/22/2008 at 4:42 AM
		</div>
		<div class="comment_text"><p>Hello,</p><p>Thanks for this.  I will try out that test and let you know how it goes.</p><p>I have my CFIDE directory mapped so that's not my issue.  I did have to special request that they map this for me though.</p><p>I'm not trying to bad mouth any hosts, I didn't know the answer either.  What they told me specifically is that to call the remote function, ColdFusion's Remote Developer Services would need to be enabled.  This is what they were not willing to do in their shared environment.  If this is not the case, then whew..., I hope its just me.</p><p>Thanks again though.  Your post has given me hope again.  I'll let you know how it goes.</p><p>Regards,<br>Scott</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677305">6</a> by Raymond Camden
		posted on 2/22/2008 at 7:05 PM
		</div>
		<div class="comment_text"><p>The only way the RDS comes into play is if you _view_ the CFC in your browser. To view auto-CFC documentation, you have to enter your CF Admin or RDS password. You aren't viewing the documentation though, nor do you need to. Your host is SERIOUSLY misinformed. While I don't want to bad mouth anyone, they really need to be 'schooled' on this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677326">7</a> by Scott
		posted on 2/26/2008 at 1:25 AM
		</div>
		<div class="comment_text"><p>I finally got this issue resolved.  It turned out to be a Sandbox Security issue that was blocking access to my cfcs.</p><p>Lesson learned on all sides :).  Thanks again for your help.</p><p>Regards,<br>Scott</p></div>
	</div>
</div>
		