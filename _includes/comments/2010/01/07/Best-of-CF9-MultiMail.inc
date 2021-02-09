
<div class="comment" id="c_1713721065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721065">1</a> by Daniel Harvey
		posted on 1/7/2010 at 7:28 PM
		</div>
		<div class="comment_text"><p>I would assume he put the onApplicationStart() info into setApplicationScope() so he could call it like he does in onRequestStart().  But can't you just call onApplicationStart() from within another function?  I haven't tried it but I would assume you can</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721078">2</a> by Daniel Harvey
		posted on 1/7/2010 at 7:31 PM
		</div>
		<div class="comment_text"><p>oh another comment, on the abort I have seen location not abort the current request.  Though it can be an extra precautionary measure to have it there as it doesn't hurt.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721084">3</a> by Raymond Camden
		posted on 1/7/2010 at 7:33 PM
		</div>
		<div class="comment_text"><p>1) Yes, you can just call onApplicationStart(). <br>2) Well, it doesn't hurt, sure, but, it is unnecessary though, and I'd argue that it shouldn't be included.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721086">4</a> by Cfer
		posted on 1/7/2010 at 7:37 PM
		</div>
		<div class="comment_text"><p>Isn't the purpose of calling setApplicationScope() from the onApplicationStart to reuse the "setApplicationScope()" like he does in onRequestStart? It could also be used elsewhere. Or can the onApplicationStart be called from other areas too?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721083">5</a> by Cfer
		posted on 1/7/2010 at 7:39 PM
		</div>
		<div class="comment_text"><p>Oh.. my question has been answered before I even posted it. I'll refresh the page before I post my question next time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721085">6</a> by Gareth Arch
		posted on 1/7/2010 at 8:48 PM
		</div>
		<div class="comment_text"><p>But isn't cflocation a client-side redirect using the browser headers?  I ran into an issue with certain users unintentionally running code that should not have been run (as the user was being relocated), but for whatever reason, it wasn't being aborted.  I altered the code to a server-side redirect in Java and the issue didn't show up again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721088">7</a> by Raymond Camden
		posted on 1/7/2010 at 8:50 PM
		</div>
		<div class="comment_text"><p>Yes, it is client side. CF will issue Headers to tell the browser where to move. But CF also aborts the current process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721089">8</a> by Guust Nieuwenhuis
		posted on 1/8/2010 at 1:42 AM
		</div>
		<div class="comment_text"><p>Many thanks to Ray for organizing this contest and to Daniel for reviewing my entry. The "Best of CF9"-contest was a great challenge for me and I've learned a lot while working on my application.</p><p>I agree on all the remarks made! Some things I didn't know (but I do now), others I didn't had the time for and the rest is my crazy, perfectionistic and slightly autistic mind. ;)</p></div>
	</div>
</div>
		