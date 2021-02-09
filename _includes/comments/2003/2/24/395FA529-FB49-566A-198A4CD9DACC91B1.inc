
<div class="comment" id="c_1713614477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614477">1</a> by Nathan Dintenfass
		posted on 2/27/2003 at 10:37 PM
		</div>
		<div class="comment_text"><p>Just to be formal, you are creating a "reference" not a "pointer" -- it doesn''t really matter, but people who use compiled languages might not like you confusing the two.  The main thing is that if you say FOO = BAR and bar is a struct, you now have a reference to BAR called FOO.  But if you then do FOO = 0 you don''t actually change BAR by doing that.  Also, objects (including component instances) and queries copy by reference as well.  Unfortunately, duplicate() won''t work on object instances.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614479">2</a> by Raymond Camden
		posted on 2/27/2003 at 10:48 PM
		</div>
		<div class="comment_text"><p>Good point Nathan! By the way - when you say object instances, you are speaking specifically about CFC instances, right? Do you know offhand if duplicate works on Java/COM objects?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614478">3</a> by Nathan Dintenfass
		posted on 2/28/2003 at 2:11 AM
		</div>
		<div class="comment_text"><p>No, as far as I know it does not work on java or COM objects.  At least, I''ve seen it not work on Java.  I never use COM, so I wouldn''t know there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614485">4</a> by Raymond Camden
		posted on 2/28/2003 at 2:15 AM
		</div>
		<div class="comment_text"><p>One way to get around it, for CFCs at least, would be to produce a clone() method for your CFC. Sure, it makes you do the work, but it would be handy. Another handy method (and kinda Java like) would be a toString() method.</p><p>Just rambling now. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614483">5</a> by Mike Tangorre
		posted on 3/17/2003 at 7:53 PM
		</div>
		<div class="comment_text"><p>The clone() is a nifty idea! I might try that out. :-) BTW, nice blog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614494">6</a> by Rob
		posted on 4/11/2003 at 8:10 PM
		</div>
		<div class="comment_text"><p>This is a test.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614488">7</a> by test
		posted on 4/11/2003 at 8:12 PM
		</div>
		<div class="comment_text"><p>This is a test.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614481">8</a> by Rob
		posted on 4/11/2003 at 8:16 PM
		</div>
		<div class="comment_text"><p>This is a test.</p></div>
	</div>
</div>
		