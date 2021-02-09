
<div class="comment" id="c_1713677168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677168">1</a> by Raul Riera
		posted on 2/18/2008 at 8:13 PM
		</div>
		<div class="comment_text"><p>And that is a good thing, otherwise you could find yourself debugging that template like MAD</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677170">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677170">2</a> by Aaron Longnion
		posted on 2/18/2008 at 11:44 PM
		</div>
		<div class="comment_text"><p>Also, note that compile-time errors (such as syntax errors) will be caught by the site-wide Error Handler defined in the CF Admin.  And in that site-wide Error Handler CFM template, you have access to the Error scope, as well as CGI, URL, FORM, etc. from the page where the error originally occurred.  As Ray has pointed out in some of his posts, when you use this site-wide Error Handler, the 'normal' logging of the error in the logs doesn't take place, so you'll need roll your own and/or email it to yourself.</p><p>Again as Ray's pointed out many times, it's essential that you have good, well-thought-out error-handling strategy that handles *all* types of errors.    Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677169">3</a> by Jay Pandya
		posted on 4/4/2011 at 1:15 PM
		</div>
		<div class="comment_text"><p>I am trying to add error handling  using type="exception", but it does not work for me.When i am using type="request",it shows good page.Do i need to use any patch or fix etc..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677171">4</a> by Raymond Camden
		posted on 4/4/2011 at 2:59 PM
		</div>
		<div class="comment_text"><p>You need to say _how_ it isn't working for you.</p></div>
	</div>
</div>
		