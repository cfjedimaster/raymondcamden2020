
<div class="comment" id="c_1714084150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084150">1</a> by Sean Coyne
		posted on 10/9/2014 at 7:54 PM
		</div>
		<div class="comment_text"><p>have you tried without the var keyword?  ie: instead of "var result = queryExecute" try "result = queryexecute"?  Can you use the var keyword outside of functions now?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084149">2</a> by Sean Coyne
		posted on 10/9/2014 at 7:56 PM
		</div>
		<div class="comment_text"><p>Oh, wait in the first example you assign it directly to the thread scoped variable and it still doesn't work.  Never mind.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084151">3</a> by Raymond Camden
		posted on 10/9/2014 at 8:04 PM
		</div>
		<div class="comment_text"><p>The thread block can use var scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084155">4</a> by Michael Zock
		posted on 10/9/2014 at 9:08 PM
		</div>
		<div class="comment_text"><p>Have you tried whether it'll work if you pass the base query to the thread explicitly or through a tunnel (e.g., <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F2215-an-experiment-in-passing-variables-into-a-cfthread-tag-by-reference.htm%3ADGPxp7hh4XTdfGdhVKW7WlNO0EQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/2215-an-experiment-in-passing-variables-into-a-cfthread-tag-by-reference.htm">http://www.bennadel.com/blo...</a> )? <br>Maybe it's the way the QoQ tries to find and reference the base query that runs into problems after the code was changed to accommodate the new function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084152">5</a> by Raymond Camden
		posted on 10/9/2014 at 9:16 PM
		</div>
		<div class="comment_text"><p>To your second part, it isn't a QofQ issue. I tried w/a QofQ and a 'real' query- same issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084153">6</a> by Scott Jibben
		posted on 10/10/2014 at 2:04 PM
		</div>
		<div class="comment_text"><p>Could this go back to the internal query name (_queryname_var0) being the same for every call to queryExecute()?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084154">7</a> by Raymond Camden
		posted on 10/10/2014 at 2:49 PM
		</div>
		<div class="comment_text"><p>Well, that's what I was initially trying to see. I had looked up how to do a 'pause' in a query (MySQL makes this easy). I was trying to see if I had 2 queries running at once if it was possible for the result set to overwrite another one. I never got that far because of this bug.</p></div>
	</div>
</div>
		