
<div class="comment" id="c_1713710108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710108">1</a> by Dan Roberts
		posted on 11/19/2008 at 9:40 PM
		</div>
		<div class="comment_text"><p>What does the server-side actionscript run on? I don't see any mention of ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710125">2</a> by Raymond Camden
		posted on 11/19/2008 at 9:42 PM
		</div>
		<div class="comment_text"><p>No idea, Dan. Sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710128">3</a> by Wayne Pankey
		posted on 11/20/2008 at 3:59 AM
		</div>
		<div class="comment_text"><p>Ray, have you seen this: I have a cfinput type=checkbox bound to a cfgrid via the grid's bind attribute. The checkbox is supposed to limit the returned recordset via it's value (on or off). Using the ColdFusion AJAX debugger, I see that the value of the checkbox is being passed to the cfc as "on" regardless of whether it is checked or not! Is this some sort of bug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710126">4</a> by Raymond Camden
		posted on 11/20/2008 at 4:26 AM
		</div>
		<div class="comment_text"><p>When you check it off, is the value not passed? Ie, when checked, name=X is passed, when unchecked, name= doesn't exist at all?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710130">5</a> by Raymond Camden
		posted on 11/20/2008 at 4:28 AM
		</div>
		<div class="comment_text"><p>Oh I see what you mean. Let me check.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710121">6</a> by Raymond Camden
		posted on 11/20/2008 at 4:31 AM
		</div>
		<div class="comment_text"><p>Got it. You bind to the checked param:</p><p>foo={foo.checked}</p><p>This will pass foo=true or foo=false depending on if the checkbox is checked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710122">7</a> by Gary Gilbert
		posted on 11/20/2008 at 1:29 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>He is using a blogging software called coveritlive.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coveritlive.com%2F%3AYnx7ym_qB_ReTYWriDAvc5Map6w&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coveritlive.com/">http://www.coveritlive.com/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710118">8</a> by Raymond Camden
		posted on 11/20/2008 at 8:56 PM
		</div>
		<div class="comment_text"><p>Thanks for the link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710123">9</a> by Wayne Pankey
		posted on 11/20/2008 at 10:18 PM
		</div>
		<div class="comment_text"><p>Thanks Ray! Your solution: foo={foo.checked} worked like a charm!</p></div>
	</div>
</div>
		