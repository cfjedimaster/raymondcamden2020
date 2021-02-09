
<div class="comment" id="c_1713728938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728938">1</a> by db
		posted on 1/13/2011 at 7:29 PM
		</div>
		<div class="comment_text"><p>if you're using tinymce, you might like this:<br><a href="http://disq.us/url?url=http%3A%2F%2Ftinymce.moxiecode.com%2Ftryit%2Fjquery_plugin.php%3AII5erghJFRz_5syuYMXIVHRFgyQ&amp;cuid=3321886" rel="nofollow noopener" title="http://tinymce.moxiecode.com/tryit/jquery_plugin.php">http://tinymce.moxiecode.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728939">2</a> by Mihai Baboi
		posted on 1/14/2011 at 1:48 AM
		</div>
		<div class="comment_text"><p>Thanks for your help, Ray. While I was waiting for your answer, I did some more research. It turns out, tinyMce offers a convenient function in it's API. if you call tinyMCE.triggerSave(); it populates the textarea as it would on submit, and then you can read the contents of it as you normally would. Just thought I'd drop this tip. Needles to say, this only works with tinyMce. Any other editor, that doesn't offer this kind of function would have to be read as you described in the article.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728941">3</a> by Dave Hoff
		posted on 1/14/2011 at 2:41 AM
		</div>
		<div class="comment_text"><p>Just wanted to note that this will only work if the URL loaded in the iFrame resides on the same domain or else XSS rules apply</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728942">4</a> by Raymond Camden
		posted on 1/14/2011 at 2:52 AM
		</div>
		<div class="comment_text"><p>Good point - thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728940">5</a> by Phillip Senn
		posted on 1/14/2011 at 9:52 PM
		</div>
		<div class="comment_text"><p>In the jQuery cookbook, they suggest putting the JavaScript code just before the /body.  That way you don't have to call $(document).ready. <br>At first I thought this was a nit-pick, but I find myself doing it more and more.<br>It helps me feel like I have more control for some reason - like I understand what in the h I'm doing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728945">6</a> by Raymond Camden
		posted on 1/14/2011 at 9:56 PM
		</div>
		<div class="comment_text"><p>I prefer $(document).ready as it just feels much more obvious.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728946">7</a> by MIhai Baboi
		posted on 1/14/2011 at 10:06 PM
		</div>
		<div class="comment_text"><p>Your probably right, but what do you do when your working via templates? You need a bit of jquery in a page, and it doesn't make sense to go into the layout page and write the code before the body...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728947">8</a> by Raymond Camden
		posted on 1/14/2011 at 10:08 PM
		</div>
		<div class="comment_text"><p>THe thing is - you can put $(document).ready _anywhere_. So given foo.cfm is some view I just put it on top. So it "feels" right even though in the final HTML output it is within a DIV perhaps. It still works fine too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728937">9</a> by Dave Hoff
		posted on 1/14/2011 at 11:06 PM
		</div>
		<div class="comment_text"><p>Yeah, I think its really just a matter of coding style. Personally I like the consistency in using $(document).ready and it's very literal in describing what your doing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728943">10</a> by JP
		posted on 1/21/2011 at 1:03 AM
		</div>
		<div class="comment_text"><p>Can you have multiple $(document).ready function calls on a page? Just wondering because I've got a page with a couple different jquery plugins, each requiring code to be added in $(document).ready ()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728944">11</a> by Raymond Camden
		posted on 1/21/2011 at 1:04 AM
		</div>
		<div class="comment_text"><p>Yes, whic is one more reason I love the feature.</p></div>
	</div>
</div>
		