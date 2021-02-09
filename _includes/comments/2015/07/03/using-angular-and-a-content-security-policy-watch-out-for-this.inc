
<div class="comment" id="c_2119449380">
	<div>
		<img src="https://disqus.com/api/users/avatars/jimthedev.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2119449380">1</a> by Jim Cummins
		posted on 7/6/2015 at 2:18 PM
		</div>
		<div class="comment_text"><p>Good to see you figured it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2119646305">
	<div>
		<img src="https://disqus.com/api/users/avatars/pete_freitag.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2119646305">2</a> by Pete Freitag
		posted on 7/6/2015 at 4:16 PM
		</div>
		<div class="comment_text"><p>FYI FireFox does indeed support CSP via the Content-Security-Policy header, but it does not appear to support it via the meta tag yet, bug: <a href="https://disq.us/url?url=https%3A%2F%2Fbugzilla.mozilla.org%2Fshow_bug.cgi%3Fid%3D663570%3A2XPeSB-JEK86QmUrgdUdJwxFv_o&amp;cuid=3321886" rel="nofollow noopener" title="https://bugzilla.mozilla.org/show_bug.cgi?id=663570">https://bugzilla.mozilla.or...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2119679526">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2119679526">3</a> (In reply to <a href="#c_2119646305">#2</a>) by Raymond Camden
		posted on 7/6/2015 at 4:30 PM
		</div>
		<div class="comment_text"><p>Ah, thanks Pete, I didn't know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2119725129">
	<div>
		<img src="https://disqus.com/api/users/avatars/kevinhakanson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2119725129">4</a> by Kevin Hakanson
		posted on 7/6/2015 at 4:54 PM
		</div>
		<div class="comment_text"><p>Hidden in the ngShow docs is "For CSP mode please add angular-csp.css to your html file (see ngCsp)."  <a href="https://disq.us/url?url=https%3A%2F%2Fdocs.angularjs.org%2Fapi%2Fng%2Fdirective%2FngShow%3AFISEZJaMkWXCltGvS54StfJBAqc&amp;cuid=3321886" rel="nofollow noopener" title="https://docs.angularjs.org/api/ng/directive/ngShow">https://docs.angularjs.org/...</a></p><p>I forked the Plunker (<a href="http://disq.us/url?url=http%3A%2F%2Fplnkr.co%2Fedit%2Fq3tsI1JOlFxcYLPQhlet%3Fp%3Dpreview%29%3AZKRdINNgVqdBLgVlAVlVaBEgGbQ&amp;cuid=3321886" rel="nofollow noopener" title="http://plnkr.co/edit/q3tsI1JOlFxcYLPQhlet?p=preview)">http://plnkr.co/edit/q3tsI1...</a> and added a link to angular-csp.css and it appears to work as designed now.</p><p>Does that fix your example?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2119771071">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2119771071">5</a> (In reply to <a href="#c_2119725129">#4</a>) by Raymond Camden
		posted on 7/6/2015 at 5:20 PM
		</div>
		<div class="comment_text"><p>It sure does. I wouldn't call it hidden really - but honestly - I never would have thought to have associated one with the other, know what I mean? I'm going to update the blog entry to point this out more clearly since people don't always read the comments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3702993215">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_H4D4n1xvNc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3702993215">6</a> by Woodwolf
		posted on 1/11/2018 at 6:22 PM
		</div>
		<div class="comment_text"><p>This is a few years later, and I'm working on something similar. For those that stumble on this... just adding 'unsafe-eval' here may work, but it really weakens your security and is not a recommended resolution. Our use was caught in a security review (Enterprise stuff).</p><p>Angular CSP mode (see above comments) may help out, but if you are using full JQuery or some other bad practice it may not be sufficient.  Better to keep doing some more research on how to properly code JS for security, without using features that require eval or new Function... there are workarounds in most cases. hth.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3703015648">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3703015648">7</a> (In reply to <a href="#c_3702993215">#6</a>) by Raymond Camden
		posted on 1/11/2018 at 6:35 PM
		</div>
		<div class="comment_text"><p>Thanks Woodwolf. But what do you mean by "if you are using full jQuery or some other bad practice" - using jQuery is bad practice?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3711906157">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_H4D4n1xvNc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3711906157">8</a> (In reply to <a href="#c_3703015648">#7</a>) by Woodwolf
		posted on 1/17/2018 at 6:33 AM
		</div>
		<div class="comment_text"><p>Hi Raymond.. JQuery is notorious for security holes when you start looking at security from the level of Content Security Policy.  By just adding 'unsafe-eval' you make the errors go away, but clever hackers can use JQuery's use of eval against you, because you have opened the doors.  There are ways to disable this, function in JQuery (just look up JQuery CSP eval and you'll find them), and there are recommended ways to code JS to avoid the security holes that force you to use 'unsafe-eval' or 'unsafe-inline' (that's the 'some other bad practice' to which I was referring).  It's a really huge subject so interested readers will just have to keep googling.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3712361635">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3712361635">9</a> (In reply to <a href="#c_3711906157">#8</a>) by Raymond Camden
		posted on 1/17/2018 at 2:34 PM
		</div>
		<div class="comment_text"><p>Ah - ok - thanks for the clarification!</p></div>
	</div>
</div>
		