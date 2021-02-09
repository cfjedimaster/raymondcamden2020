
<div class="comment" id="c_1713619046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619046">1</a> by pim
		posted on 7/14/2005 at 4:50 PM
		</div>
		<div class="comment_text"><p>the line to find and the one to replace it with don't appear on your post :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619045">2</a> by Raymond Camden
		posted on 7/14/2005 at 5:19 PM
		</div>
		<div class="comment_text"><p>Oops. Thanks. Fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619049">3</a> by Steven Erat
		posted on 7/14/2005 at 5:20 PM
		</div>
		<div class="comment_text"><p>Substituting straight brackets for angle brackets:</p><p>Open up /web-inf/exception/detail.cfm and find this line:</p><p>[cfset bIE = (cgi.user_agent contains MSIE)]</p><p>and change it to:</p><p>[cfset bIE = (cgi.user_agent contains MSIE or cgi.user_agent contains Firefox)]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619048">4</a> by Erki Esken
		posted on 7/15/2005 at 5:36 PM
		</div>
		<div class="comment_text"><p>UA name checking is a bad idea anyway. They should have done it with DOM object checking. Always outputting JS and doing runtime check if browser can handle it.</p><p>I opened a bug about this (cfdump collapse not working with Opera) for last major CF beta cycle.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619050">5</a> by Raymond Camden
		posted on 7/15/2005 at 5:54 PM
		</div>
		<div class="comment_text"><p>Your absolutely right. Such a mod would have meant a few more lines changed, but would definitely be "better".</p></div>
	</div>
</div>
		