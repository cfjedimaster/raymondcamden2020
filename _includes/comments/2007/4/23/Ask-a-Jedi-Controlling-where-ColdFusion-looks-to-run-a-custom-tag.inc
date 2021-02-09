
<div class="comment" id="c_1713664335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664335">1</a> by Jeremy French
		posted on 4/23/2007 at 4:53 PM
		</div>
		<div class="comment_text"><p>Another possibility would be to use the &lt;cfimport&gt; method.  You can call &lt;cfimport&gt; twice with the same prefix, but from different directories.  e.g.</p><p>&lt;cfimport taglib="/" prefix="tags&gt;<br>&lt;cfimport tablib="/#language/" prefix="tags"&gt;</p><p>&lt;tags:login&gt;</p><p>This would allow the sub-directory tag to override the root tag if there was one, I believe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664348">2</a> by Raymond Camden
		posted on 4/23/2007 at 5:10 PM
		</div>
		<div class="comment_text"><p>No - I wouldn't do this. TO me this would add confusion. If you aren't sure which folder would "win", why even risk it? I stand by my original recommendation - specify a full path. It is more typing, but worth the safety.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664349">3</a> by Tom Mollerus
		posted on 4/23/2007 at 6:01 PM
		</div>
		<div class="comment_text"><p>I'd suggest to Eric that he definitely use the template attribute of cfmodule as Ray suggests. The ability to pass in variables to specify the exact path you want to use means that your application will be much, much more portable. I even pass in the mapping as a variable, myself:</p><p>&lt;cfmodule template="#REQUEST.mapping#/CustomTags/tag.cfm"...</p></div>
	</div>
</div>
		