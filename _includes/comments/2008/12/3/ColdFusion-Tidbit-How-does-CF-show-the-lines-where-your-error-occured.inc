
<div class="comment" id="c_1713710331">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710331">1</a> by Barney
		posted on 12/3/2008 at 11:04 PM
		</div>
		<div class="comment_text"><p>One thing to watch out for, however, is that you're reading the file from disk at error time, which may or may not have the same content as the source file for the currently executing code.  Particularly with shared-scope singleton CFCs, you can instantiate them, change the CFC on disk, find an error, and then the error message will be showing the wrong file content for the actual error scenario.</p><p>Not really any good solution for that, unfortunately.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710413">2</a> by Wade
		posted on 12/3/2008 at 11:05 PM
		</div>
		<div class="comment_text"><p>I agree that working with those templates can be scary, especially since I had only been working with this particular company for about a month. I wanted an error output in e-mail that gave me more than the standard information, so about a year ago I jumped in and played with all the coding on those templates. I wanted all the information I could get about an error and who the user was and what they were doing. In the end, I didn't use those templates, but I found out how CF handled errors. I created a page that the application.cfc calls when there is an error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710422">3</a> by Edward Smith
		posted on 12/4/2008 at 2:41 AM
		</div>
		<div class="comment_text"><p>I was hoping that this was going to be about how one can get the translation between CF code location and java code location - as that would open the doors to a code coverage tool for Coldfusion - which would be nice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710421">4</a> by Barney
		posted on 12/4/2008 at 2:44 AM
		</div>
		<div class="comment_text"><p>@Edward</p><p>CF compiles directly to bytecode, it doesn't go through an interim Java step.  It used to, much like many Servlet containers do for JSP, but no longer.</p></div>
	</div>
</div>
		