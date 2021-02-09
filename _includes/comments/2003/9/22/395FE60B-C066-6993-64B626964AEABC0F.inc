
<div class="comment" id="c_1713614968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614968">1</a> by Alex Sherwood
		posted on 9/24/2003 at 4:07 PM
		</div>
		<div class="comment_text"><p>What about using "struct" as a returnType?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614963">2</a> by Raymond Camden
		posted on 9/24/2003 at 9:31 PM
		</div>
		<div class="comment_text"><p>While I think CFCs do return true for isStruct, I would not recommned using it as a returnType. It may work, but why be vague when you can be specific. If your method is supposed to return a CFC, I'd say use the exact name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614966">3</a> by Brendan
		posted on 10/1/2003 at 10:15 PM
		</div>
		<div class="comment_text"><p>This is only available now in 6.1. 6.0 Had no such master component so during that time you would have had to use struct.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614962">4</a> by Raymond Camden
		posted on 10/1/2003 at 10:53 PM
		</div>
		<div class="comment_text"><p>There _was_ a root CFC in 6.0, but you couldn't edit it. That being said, I didn't test this in cf 6.0, so there is a chance it may not work.</p></div>
	</div>
</div>
		