
<div class="comment" id="c_1713746126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746126">1</a> by andy matthews
		posted on 4/25/2013 at 7:55 PM
		</div>
		<div class="comment_text"><p>This is a pretty handy option. You should tidy this up and submit it to Hakim. Perhaps you add it as an option in the config or something:</p><p>autoEscapeHTMLCodeBlocks = true/false</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746125">2</a> by Raymond Camden
		posted on 4/25/2013 at 7:59 PM
		</div>
		<div class="comment_text"><p>Tidy it up? What's messy about it? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746127">3</a> by Dan G. Switzer, II
		posted on 4/25/2013 at 10:37 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>Since you're technically rendering that code you could end up running into issues. Why do what a lot of the JS-based templating engines do and use a script element instead. You could just take script tag and replace it with the correct DOM elements.</p><p>That way the code isn't rendered before writing the source code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746130">4</a> by Raymond Camden
		posted on 4/25/2013 at 10:42 PM
		</div>
		<div class="comment_text"><p>I was looking for a solution with minimal work for the writer (in this case, me ;). That's interesting though - the script tag would ensure EVERYTHING is cool. Like, I could do a &lt;/section&gt; and it wouldn't break the layout.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746131">5</a> by Dan G. Switzer, II
		posted on 4/26/2013 at 8:18 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>It would still be minimal work for the writer--just replace &lt;pre&gt;&lt;code&gt; with something like &lt;script type="text/x-reveal-code"&gt;. It's a little more typing, but would be safer in the long run and you just replace the &lt;script&gt; tag with the &lt;pre&gt;&lt;code&gt;.</p><p>That's actually how I'd submit a patch to Reveal.js. That way you've got a solution that extends the current functionality, but doesn't break anything. People could just start using that syntax for code samples.</p><p>Just a thought.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746129">6</a> by Raymond Camden
		posted on 4/26/2013 at 10:44 PM
		</div>
		<div class="comment_text"><p>Let me ping Hakim to see which he prefers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746132">7</a> by Hakim El Hattab
		posted on 4/27/2013 at 1:40 AM
		</div>
		<div class="comment_text"><p>First off: this would be a very welcome improvement to reveal.js and I appreciate you taking the time.</p><p>I prefer the original idea with string replacement better than using a &lt;script&gt; wrapper since:<br>- highlight.js automatically picks up &lt;pre&gt;&lt;code&gt; elements, with a script wrapper there would need to be more custom integration <br>- it doesn't require any change in workflow, &lt;pre&gt;&lt;code&gt; would still be used for all code</p></div>
	</div>
</div>
		