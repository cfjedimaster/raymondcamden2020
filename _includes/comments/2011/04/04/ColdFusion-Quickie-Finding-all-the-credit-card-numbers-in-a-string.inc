
<div class="comment" id="c_1713731418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731418">1</a> by Lance
		posted on 4/4/2011 at 8:01 PM
		</div>
		<div class="comment_text"><p>The regex lines up pretty closely with another source over here.  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.regular-expressions.info%2Fcreditcard.html%3AE8oX9rAiPv4Q_Qi8r0l_HU3tvg4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.regular-expressions.info/creditcard.html">http://www.regular-expressi...</a>   Their version looks like this \b(?:\d[ -]*?){13,16}\b   The only real difference is their version is a little less strict to account for different cc number lengths and ways people may choose to format the cc number.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731420">2</a> by Peter Boughton
		posted on 4/4/2011 at 8:17 PM
		</div>
		<div class="comment_text"><p>You don't need {16,16} - just {16} works, and is simpler.<br>And instead of [[:digit:]] why not just use \d which is far easier to read.</p><p>So, your expressions would end up as:</p><p>    \b\d{16}\b</p><p>and:</p><p>    \b\d{4} \d{4} \d{4} \d{4}\b</p><p>Except unfortunately it's not that simple. :(<br>Not all credit card numbers are 16 digits long.</p><p>Amex cards are 15, Diners Club is 14, Maestro varies from 13..19 digits</p><p>Which might makes things look like this:</p><p>   \b[3-6]\d{15}\b     ## standard<br>   \b3[47]\d{13}\b      ## amex<br>   \b30[0-5]\d{11}\b    ## diners<br>   \b36\d{12}\b         ## diners<br>   \b50[123]\d{10,16}\b ## maestro<br>   \b6\d{12,18}\b       ## maestro</p><p>Without even getting into how they'd be written with spaces involved.</p><p>I think for that I'd probably be tempted to something like do \b[\d ]{13,23}\b to extract possible candidates, then do further filtering to remove false positives.</p><p>Although I can't actually think of a situation where I might want to extract card numbers from a string... what's your co-worker trying to do? Why does he have a bunch of credit card numbers? :S</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731419">3</a> by David Hammond
		posted on 4/4/2011 at 9:01 PM
		</div>
		<div class="comment_text"><p>To extend a little bit on Peter's response, I think I would come up with something like this:</p><p>\b\d{4}[ -]?\d{4}[ -]?\d{4}[ -]?\d{4}\b</p><p>This should match 16 straight digits or numbers separated by spaces or hyphens (which I think is pretty common).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731421">4</a> by Raymond Camden
		posted on 4/4/2011 at 9:43 PM
		</div>
		<div class="comment_text"><p>Thanks Peter - I knew my {N,N} was off but had a total brain fart. As for reasons - the coworker is Lance above - I'll let him comment if he can share the reason, but one might imagine a basic "does this document contain sensitive material" type check.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731423">5</a> by Lance
		posted on 4/4/2011 at 10:29 PM
		</div>
		<div class="comment_text"><p>@Peter- Ray pretty much summed up the reason.  We needed to check a particular database column to determine if any of our users were passing along cc info as part of a more generic data entry UI.  Which.... is something we don't recommend doing for all of the obvious reasons.</p><p>Not our use case, but the same Regex is useful if you are doing OCR on scanned documents and need to screen for sensitive info .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731422">6</a> by Peter Boughton
		posted on 4/4/2011 at 10:38 PM
		</div>
		<div class="comment_text"><p>Ah cool, that makes sense.</p><p>Ray - the mobile view doesn't appear to have a way to add a comment? Did I miss it, or is that not added yet?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731427">7</a> by Raymond Camden
		posted on 4/4/2011 at 10:56 PM
		</div>
		<div class="comment_text"><p>@Peter: No, it will not be supported in the next version either. You will be able to switch to the 'real' version easier though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731425">8</a> by Ray V
		posted on 4/5/2011 at 5:10 PM
		</div>
		<div class="comment_text"><p>This works for me. Four consecutive numbers with a space in between or 16 consecutive numbers:</p><p>\b((\d{4}\s?){4}|\d{16})\b</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmyregexp.com%2F%3AruiKuaCnB8P_rEm1qE8zn14CFb0&amp;cuid=3321886" rel="nofollow noopener" title="http://myregexp.com/">http://myregexp.com/</a> - regex plugin for eclipse and online tester.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731428">9</a> by Raymond Camden
		posted on 4/5/2011 at 5:14 PM
		</div>
		<div class="comment_text"><p>In the second part of your regex, did you mean \d in front or \b?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731426">10</a> by Peter Boughton
		posted on 4/5/2011 at 5:17 PM
		</div>
		<div class="comment_text"><p>Ray V, the \s will match *any* whitespace character (including tab and newline), not just a regular space. It'll work, but might bring false positives.</p><p>Ray C - he's got a | for alternation so doesn't need any \b inside, just one at each end - i.e. \b(...|...)\b</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731429">11</a> by Raymond Camden
		posted on 4/5/2011 at 5:26 PM
		</div>
		<div class="comment_text"><p>Ohh - ok - I read \d as another boundry, not as a digit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731430">12</a> by Ray V
		posted on 4/5/2011 at 7:00 PM
		</div>
		<div class="comment_text"><p>Good catch Peter! I substituted the \s with the unicode space character \u0020</p><p>\b((\d{4}\u0020?){4}|\d{16})\b</p><p>My favorite reference: Regular Expressions in 10 Minutes - Ben Forta - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.forta.com%2Fbooks%2F0672325667%2F%3Af53CITg8FwwfKblCLEpgpxbb9CM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.forta.com/books/0672325667/">http://www.forta.com/books/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731432">13</a> by Robert Zehnder
		posted on 4/5/2011 at 10:41 PM
		</div>
		<div class="comment_text"><p>This might not be really topical, but I work on large scale e-commerce systems so I find some funky stuff.  Older Visa's can have 13 digits so they need to be taken into account.  Searching through doc it may not be as important as in your shopping cart, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731434">14</a> by Edward - Florida SEO
		posted on 4/6/2011 at 1:31 AM
		</div>
		<div class="comment_text"><p>Every major credit card ...</p><p>&lt;pre class="code"&gt;<br>^(?:4[0-9]{12}(?:[0-9]{3})?|5[1-5][0-9]{14}|6(?:011|5[0-9][0-9])[0-9]{12}|3[47][0-9]{13}|3(?:0[0-5]|[68][0-9])[0-9]{11}|(?:2131|1800|35\d{3})\d{11})$<br>&lt;/pre&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731433">15</a> by Raymond Camden
		posted on 4/6/2011 at 1:53 AM
		</div>
		<div class="comment_text"><p>Wow - that regex made my nose bleed. ;)</p></div>
	</div>
</div>
		