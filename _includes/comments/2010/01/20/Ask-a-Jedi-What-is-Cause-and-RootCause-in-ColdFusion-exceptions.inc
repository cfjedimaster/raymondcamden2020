
<div class="comment" id="c_1713721338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721338">1</a> by Scott Stroz
		posted on 1/20/2010 at 7:01 PM
		</div>
		<div class="comment_text"><p>I noticed that the &lt;cfdump&gt; example you posted does not match the code above it, was this done purposely?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721363">2</a> by Raymond Camden
		posted on 1/20/2010 at 7:04 PM
		</div>
		<div class="comment_text"><p>Yeah, sorry about that. The screen shot was sent to me by the guy who asked about the issue. It really isn't related.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721357">3</a> by Rupesh Kumar
		posted on 1/21/2010 at 4:09 PM
		</div>
		<div class="comment_text"><p>'cause' was added to java.lang.Throwable in JDK1.4, which we started to use for build from CF8. But 'rootCause' were added in CF exceptions much earlier than that. We could not have removed 'rootCause' after ''cause" was introduced :-)<br>So 'RootCause' is the *real* data and in most of the cases 'cause' will be same as "RootCause". So as Ray said, one should continue using rootCause.</p></div>
	</div>
</div>
		