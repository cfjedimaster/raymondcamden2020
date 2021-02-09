
<div class="comment" id="c_1713619480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619480">1</a> by Ryan Guill
		posted on 8/1/2005 at 4:28 AM
		</div>
		<div class="comment_text"><p>Im not sure I follow.  I would look at those examples and say that all four should return false.  A , is not a numeric symbol.  IsNumeric("500,000") should return false as well.  Of course the  $ should work the same as well.  These would be symbols to help to describe numeric values true, but are not part of the number themselves.  But im not really sure what you were talking about with coldfusion being loose, in this case, it seems that coldfusion is being stricter than you would have expected.  But I dont think isValid("integer","500,000") == false is a bug, I think thats right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619479">2</a> by Raymond Camden
		posted on 8/1/2005 at 4:37 AM
		</div>
		<div class="comment_text"><p>Mistyped. Edited. Fixed. :) Should make sense now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619483">3</a> by Ryan Guill
		posted on 8/1/2005 at 4:40 AM
		</div>
		<div class="comment_text"><p>Ah ha, Much more sense now.  I definately concur then ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619481">4</a> by Michael Dinowitz
		posted on 8/1/2005 at 7:58 PM
		</div>
		<div class="comment_text"><p>Your regex should be<br>isValid('regex', '101', '^-?[0-9]+$')<br>This says match a string that starts with either zero or one minus signs followed by one or more numbers until the end of the string. This does the same thing<br>isValid('regex', '101', '^-?\d+$')<br>In truth, the above is not a test for numeric but a test for integer as it does not take decimals into account.</p><p>If your going to include the use of decimal or commas (used in Europe as a decimal), then this will be used<br>isValid('regex', '101', '^-?[0-9]+[.,]?[0-9]*$')<br>This matches a string with zero or one minus at the start, 1 or more digits followed by zero or one decimal or comma followed by zero or more digits.</p><p>The CF-RegEx list exists just for such nitpicking. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619486">5</a> by Raymond Camden
		posted on 8/1/2005 at 8:09 PM
		</div>
		<div class="comment_text"><p>I think your first regex is wrong. I would not consider -0 to be a valid integer. -1, yes. 0, yes. But not -1. Also, your first regex would allow for 01. Again - to me - not valid.</p><p>As for commas - no - that was part of the point. We do not want to allow "formatted" numbers. Just numbers. Period. (I do not consider the - sign to be a format.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619489">6</a> by Michael Dinowitz
		posted on 8/1/2005 at 8:13 PM
		</div>
		<div class="comment_text"><p>True. It was that -{0,1} that really grabbed my attention rather than -?.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619484">7</a> by Baz
		posted on 10/20/2005 at 3:53 AM
		</div>
		<div class="comment_text"><p>So Ray, it seems like you won - RegEx is the better way to go.</p><p>Another problem I've run into with isValid for integers is big numbers. Currently the isValid function is limited to 4 bytes or integers between -2,147,483,648 and 2,147,483,647 (like INT's in databses).</p><p>So isValid("Integer",99999999999999999) = FALSE<br>While isNumeric(99999999999999999) = TRUE</p><p>So I've even had to ditch my new preferred method of integer validation: <br>&lt;cfif isNumeric(var) AND isValid("Integer",var)&gt;</p><p>But being the stickler for clarity that I am (I like to be able to skim through a page and know what everything's doing) - and given my inability to quickly decipher what a RegEx is doing - I wasn't too quick to adopt the RegEx way and looked for other ways to validate my integers.</p><p>That brought me back to good 'ol:<br>&lt;cfif round(var) is var&gt; (like the isInt() function on <a href="http://disq.us/url?url=http%3A%2F%2FCFLIB.org%3A5eXVMG89Ja2owSKT3q6j3Ql1gqA&amp;cuid=3321886" rel="nofollow noopener" title="CFLIB.org">CFLIB.org</a>)</p><p>But you see, it turns out that that doesn't work either, because of this:<br>Round(9999999999999)=1E+013</p><p>If you try and round any number bigger than 12 digits, the result is the scientific representation of the number and will therefore not equate to the var even if its an integer.</p><p>I'm sure there are ways to fix that up, but now we're sacrificing the clarity I was striving to achieve, not mention the guilt for having to use so much overhead to do something as simple as validate an integer.</p><p>So conclusion: Ray's way's the best way - RegEx all the way.</p><p>(you may wanna update or add another isInt UDF on CFLIB)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619485">8</a> by Eric
		posted on 3/25/2008 at 5:36 PM
		</div>
		<div class="comment_text"><p>I realize that this is a really old post, but the regex you suggested does not consider zero to be a valid integer. Bit of a problem, really :)</p><p>I think this would work: /^((-[1-9])|0)\d*/</p><p>Or, isValid("regex", "101", "^((-[1-9])|0)\d*)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619490">9</a> by enigment
		posted on 2/13/2009 at 11:56 PM
		</div>
		<div class="comment_text"><p>Old, but still needed, and close, not quite. The '-' needs to be optional, and an ending "$" is needed.</p><p>Try this regex:<br>^((-?[1-9])|0)\d*$</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619491">10</a> by enigment
		posted on 2/14/2009 at 12:21 AM
		</div>
		<div class="comment_text"><p>Arrg, still not right... That version allowed "000" etc.</p><p>Try this:<br>^(0|((-?[1-9])\d*))$</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619487">11</a> by Matt Gersting
		posted on 4/19/2010 at 6:57 PM
		</div>
		<div class="comment_text"><p>Ray,<br>A fellow developer sent me a link to this post and mentioned he had tested the integer bug in CF9 and it was still there...which is....sad.  I'll go with sad.</p><p>Ever get any word from Adobe on this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619488">12</a> by Raymond Camden
		posted on 4/19/2010 at 7:01 PM
		</div>
		<div class="comment_text"><p>Not that I know of. Adobe may consider it desired behavior due to how they treat #s in general.</p></div>
	</div>
</div>
		