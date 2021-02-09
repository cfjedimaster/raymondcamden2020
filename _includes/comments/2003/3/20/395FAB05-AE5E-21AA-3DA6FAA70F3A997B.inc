
<div class="comment" id="c_1713614509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614509">1</a> by Nathan Dintenfass
		posted on 3/21/2003 at 5:49 AM
		</div>
		<div class="comment_text"><p>Hmm, turns out it has nothing to do with any scope -- this works for any struct:</p><p>&lt;cfset foo.y = structNew()&gt;</p><p>&lt;cfset foo.y.z = "foo"&gt;</p><p>&lt;cfoutput&gt;#foo.y.zz#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614508">2</a> by Raymond Camden
		posted on 3/21/2003 at 7:18 AM
		</div>
		<div class="comment_text"><p>Are you sure? When I tested, I got a proper msg (zz doesn''t exist) when I used a non ''special'' struct as the top level structure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614529">3</a> by Raymond Camden
		posted on 3/21/2003 at 7:20 AM
		</div>
		<div class="comment_text"><p>Just to be clear. The error message I get says that y.zz doesn''t exist in Foo. This is better than the error message received when session/app/server is used for the root.</p></div>
	</div>
</div>
		