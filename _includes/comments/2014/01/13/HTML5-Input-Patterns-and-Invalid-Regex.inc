
<div class="comment" id="c_1714081442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081442">1</a> by Randy Edmunds
		posted on 1/13/2014 at 10:13 PM
		</div>
		<div class="comment_text"><p>Brackets has an Inline Regex Editor extension that can also help with this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081439">2</a> by Raymond Camden
		posted on 1/13/2014 at 10:28 PM
		</div>
		<div class="comment_text"><p>An update: In Firefox, as soon as you type into the field, you get this:</p><p>SyntaxError: invalid range in character class</p><p>in the console. It isn't terribly obvious to me, but, it is *something* at least. I double checked Chrome - no message. I also checked Safari, but apparently Safari isn't working with validation at all. CanIUse says (<a href="http://disq.us/url?url=http%3A%2F%2Fcaniuse.com%2F%23feat%3Dform-validation%29%3AXoXKBHvfY1Vis49CbJdgngIyj8w&amp;cuid=3321886" rel="nofollow noopener" title="http://caniuse.com/#feat=form-validation)">http://caniuse.com/#feat=fo...</a> that it should do something on blur (my reading of the note) but I couldn't see any validation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081440">3</a> by Raymond Camden
		posted on 1/13/2014 at 10:32 PM
		</div>
		<div class="comment_text"><p>Randy: I just tried Peter's extension - that's pretty darn slick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081444">4</a> by Mathias Bynens
		posted on 1/14/2014 at 2:42 AM
		</div>
		<div class="comment_text"><p>The spec says the following about the `pattern` attribute: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.whatwg.org%2Fspecs%2Fweb-apps%2Fcurrent-work%2Fmultipage%2Fcommon-input-element-attributes.html%23the-pattern-attribute%3A8_6xdZ4PHJffY_nrjOo7pIPreFM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.whatwg.org/specs/web-apps/current-work/multipage/common-input-element-attributes.html#the-pattern-attribute">http://www.whatwg.org/specs...</a></p><p>Note: This implies that the regular expression language used for this attribute is the same as that used in JavaScript, except that the pattern attribute is matched against the entire value, not just any subset (somewhat as if it implied a `^(?:` at the start of the pattern and a `)$` at the end).</p><p>So, to properly test the regular expression in JavaScript before using it as a `pattern` attribute value, prepend `^(?:` and append `)$` to the regex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081445">5</a> by Raymond Camden
		posted on 1/14/2014 at 3:54 AM
		</div>
		<div class="comment_text"><p>Good reminder there, Mathias, thank you.</p></div>
	</div>
</div>
		