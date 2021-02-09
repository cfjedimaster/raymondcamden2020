
<div class="comment" id="c_1713614480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614480">1</a> by Jim Biancolo
		posted on 2/20/2003 at 6:50 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I''m thrilled to see that you''ve started a blog!  I''ve always enjoyed your writing in other venues.</p><p>A question about your solution:</p><p>&amp;lt;cfmodule template="foo"&amp;gt;<br>content<br>&amp;lt;cfmodule template="bar"/&amp;gt;<br>&amp;lt;/cfmodule &amp;gt;</p><p>Won''t the inner tag ("bar") run twice, forcing you to check ExecutionMode in "bar" to prevent that?</p><p>I generally prefer what I call the "implicit" syntax of custom tag invocation (&amp;lt;cf_foo&amp;gt;) than the  "explicit" syntax (&amp;lt;cfmodule template="foo"&amp;gt;).  Unfortunately when more than one app is running on the same server (as you note) I too find CF''s search order for finding implicitly-invoked tags lacking.  I''d much rather have it search "up" from the invoking template''s directory (like how it looks for application.cfm) rather than "down" through a global directory (even better would be the ability to specify a custom tags directory in CFAPPLICATION).</p><p>So I''m usually forced to use the "explicit" syntax, but with that syntax I tend to avoid tag pairs because the only safe way to use them seems to be to *always* test ExecutionMode.  Or is that just good CF practice that I should be doing anyway?</p><p>Thanks again for blogging!</p><p>Jim</p><p>P.S.  I haven''t worked with CFMX yet, so I don''t know if it has better mechanisms for safely using the implicit syntax when multiple apps reside on the same server.  I''d happily ditch the explicit syntax entirely if I could.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614482">2</a> by Raymond Camden
		posted on 2/20/2003 at 6:53 PM
		</div>
		<div class="comment_text"><p>Yep - forgot to mention that you would need to check for executionmode - which is not a bad idea in general anyway - so even though it''s more work, I would do it (and it''s one of those things I forget to do myself).</p><p>FYI - I see your comment is majorly screwy up there. I''ll look into why things got escaped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614484">3</a> by Raymond Camden
		posted on 2/20/2003 at 7:18 PM
		</div>
		<div class="comment_text"><p>Ok, the bug with the screwy html escaping is fixed now. I also plan on adding a ''remember me'' feature to the comments here, as well as making it email everyone in the ''thread'' when a comment is added.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614490">4</a> by Aaron Johnson
		posted on 2/20/2003 at 7:24 PM
		</div>
		<div class="comment_text"><p>and you desperately need a permalink feature so you can send a direct link to a post...</p><p>:)</p><p>AJ</p></div>
	</div>
</div>
		