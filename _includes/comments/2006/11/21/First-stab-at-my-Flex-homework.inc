
<div class="comment" id="c_1713659518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659518">1</a> by Josen Ruiseco
		posted on 11/22/2006 at 7:25 AM
		</div>
		<div class="comment_text"><p>I've noticed that on most Flex apps I've seen, the "submit" button at the end of the form does not respond to the return key. A point and click of the mouse is required. Could you show how to make the submit button response to the return key?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659506">2</a> by Bruce
		posted on 11/22/2006 at 7:42 AM
		</div>
		<div class="comment_text"><p>Ray - Thanks for sharing your code.  The Flex documentation Adobe has provided is good, but there are WAY too few examples of how to get stuff done.  Your blog and others are providing the key code examples and tutorials that help all of us learn how to use Flex.  I'm trying to do the same on my blog.</p><p>I look forward to following your example as it develops further.</p><p>Bruce</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659525">3</a> by todd sharp
		posted on 11/22/2006 at 7:44 AM
		</div>
		<div class="comment_text"><p>Thank you - states are starting to make more sense to me now.  Anxious to see your next post.</p><p>Josen - try a space bar on the button that has focus, that will work.  You could likely also create a key listener for the return key, but that seems like overkill to me.</p><p>Ray - I don't think your posts have been hitting MXNA today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659524">4</a> by Raymond Camden
		posted on 11/22/2006 at 7:51 AM
		</div>
		<div class="comment_text"><p>Odd. I ping MXNA when I post - so I can't see why it would fail to pick it up. I'll have to look.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659512">5</a> by Scott Stroz
		posted on 11/22/2006 at 8:25 AM
		</div>
		<div class="comment_text"><p>Josen - To get the 'Enter' key to submit the form, you merely need to add the 'defaultButton' attribute to the &lt;mx:Form&gt; tag.  Then, when an element in the form has the focus, hitting the enter key will havce the same effect as clicking the button.</p><p>An example of this would be, if you had an &lt;mx:button&gt; with an id of submitBtn, you would use &lt;mx:form ... defaultButton="{submitBtn}" ... &gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659519">6</a> by Scott Stroz
		posted on 11/22/2006 at 8:26 AM
		</div>
		<div class="comment_text"><p>Ray - Design view for Flex is the bomb.  It will become your friend...quickly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659511">7</a> by todd sharp
		posted on 11/22/2006 at 8:29 AM
		</div>
		<div class="comment_text"><p>Nice Scott - thanks for that tip!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659520">8</a> by Raymond Camden
		posted on 11/22/2006 at 9:21 AM
		</div>
		<div class="comment_text"><p>Scott, I added defaultButton to my form. Thanks for the tip.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659522">9</a> by Brian Swartzfager
		posted on 10/6/2007 at 7:19 PM
		</div>
		<div class="comment_text"><p>Just one caveat...I discovered this morning that if your last/only form field is a TextArea control, which is designed to listen for the Enter key to create line breaks, the defaultButton property will not do the job.</p><p>In that case, you'll need to create a function that takes the KeyboardEvent and program it to do your submission when the string value of the charCode equals 13.  There's a LiveDocs article about it:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fflex%2F2%2Fdocs%2Fwwhelp%2Fwwhimpl%2Fcommon%2Fhtml%2Fwwhelp.htm%3Fcontext%3DLiveDocs_Parts%26file%3D00000478.html%3AN-_IqslwBbv30amJu2i2-v-3EoU&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/flex/2/docs/wwhelp/wwhimpl/common/html/wwhelp.htm?context=LiveDocs_Parts&amp;file=00000478.html">http://livedocs.adobe.com/f...</a></p></div>
	</div>
</div>
		