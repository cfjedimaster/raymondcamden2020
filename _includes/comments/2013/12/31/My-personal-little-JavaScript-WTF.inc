
<div class="comment" id="c_1714081193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081193">1</a> by Shawn Biddle
		posted on 1/1/2014 at 12:20 AM
		</div>
		<div class="comment_text"><p>I have no idea why this didn't throw an error and I'd love to know why. Ok, JavaScript gurus, can you explain this one?</p><p>Functions are objects, [] is notation to access properties of an object which is sugar'd by . notation (foo['bar'] === <a href="http://disq.us/url?url=http%3A%2F%2Ffoo.bar%3AopUE98Rht-FI89hCtymBuG3SRlM&amp;cuid=3321886" rel="nofollow noopener" title="foo.bar">foo.bar</a>) (in addition to array access), push[something] simply tries to access a key that doesn't exist, this will not throw an error, it will simply return undefined</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081194">2</a> by John C Bland II
		posted on 1/1/2014 at 12:31 AM
		</div>
		<div class="comment_text"><p>Functions have methods on them; is - array.push.apply(...).</p><p>You can dynamically access them like: array.push["apply"](...).</p><p>So by using brackets and pushing an invalid function name in there you were simply trying to access something that didn't exist. Log it and you'd get an undefined.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081195">3</a> by Raymond Camden
		posted on 1/1/2014 at 12:31 AM
		</div>
		<div class="comment_text"><p>Makes sense - thanks both of you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081199">4</a> by John C Bland II
		posted on 1/1/2014 at 12:32 AM
		</div>
		<div class="comment_text"><p>Oh, Shawn said the same thing. I didn't see his. Lol</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081201">5</a> by Raymond Camden
		posted on 1/1/2014 at 12:32 AM
		</div>
		<div class="comment_text"><p>Sad thing is - I *knew* this too - just... forgot I suppose. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081196">6</a> by John C. Bland II
		posted on 1/1/2014 at 1:09 AM
		</div>
		<div class="comment_text"><p>I figured it'd make sense once you saw it since it is the same for dynamic access in CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081197">7</a> by Axel Rauschmayer
		posted on 1/1/2014 at 7:00 AM
		</div>
		<div class="comment_text"><p>obs.push is an object and you access one of its properties via the square brackets. The WTF part of the thing is that *everything* in square brackets is converted to string, even array indices. That is, the spec (as opposed to JavaScript engines) interprets array indices as strings and has rules for their shapes [1].</p><p>You can use String() as a function to check how the conversion to string is performed.</p><p>[1] <a href="http://disq.us/url?url=http%3A%2F%2Fwww.2ality.com%2F2012%2F12%2Farrays.html%3AE9RkvSH82js6YXNxFuVkiH27kWQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.2ality.com/2012/12/arrays.html">http://www.2ality.com/2012/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081200">8</a> by Dumitru "Mitic?" UNG
		posted on 1/1/2014 at 3:43 PM
		</div>
		<div class="comment_text"><p>obs is an Array and it's also an Object.</p><p>What this means is that beside taking index values, it accepts properties like any other Object, including other Objects: push, which, in return, have properties of their own: [something].</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2Fcfjedimaster%2FSu9eh%2F1%2F%3AtoPer7mT845YspQ5NcBNza9uMnI&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/cfjedimaster/Su9eh/1/">http://jsfiddle.net/cfjedim...</a></p><p>&lt;iframe width="100%" height="300" src="<a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2Fcfjedimaster%2FSu9eh%2F1%2Fembedded%2F%3A0WNfhL-afHOmOa7ZWiHyVWaLTFY&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/cfjedimaster/Su9eh/1/embedded/">http://jsfiddle.net/cfjedim...</a>" allowfullscreen="allowfullscreen" frameborder="0"&gt;&lt;/iframe&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081202">9</a> by Dumitru "Mitic?" UNG
		posted on 1/1/2014 at 3:44 PM
		</div>
		<div class="comment_text"><p>WTF jsFiddle link :)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FSu9eh%2F2%2F%3ATPRfV-FZMpeuQpt2W_v1Eswczo0&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/Su9eh/2/">http://jsfiddle.net/Su9eh/2/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081198">10</a> by Raymond Camden
		posted on 1/1/2014 at 7:14 PM
		</div>
		<div class="comment_text"><p>Dumitru - all HTML is escaped for security reasons here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081203">11</a> by Dumitru "Mitic?" UNG
		posted on 1/1/2014 at 10:08 PM
		</div>
		<div class="comment_text"><p>OK :)</p><p>Anyway, Shawn Biddle is spot on. I just wanted to remind us about the "almost everything is an object in JavaScript".</p></div>
	</div>
</div>
		