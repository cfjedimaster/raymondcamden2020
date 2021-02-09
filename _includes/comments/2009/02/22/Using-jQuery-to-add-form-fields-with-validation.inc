
<div class="comment" id="c_1713713327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713327">1</a> by Matt Williams
		posted on 2/24/2009 at 8:09 PM
		</div>
		<div class="comment_text"><p>In the interest of encapsulation and DRY, I'd consider putting validation into its own function that can be called in the $(document).ready() function and also within the addPerson click function. It may have to be made a bit more dynamic to handle this, but as the form grows, it would be easier to maintain.</p><p>Also along the lines of DRY, in the initial html I would suggest not hardcoding the firstname1, etc. block in the html. Take the meat of that $("#addPerson").click function and put it into a separate function. Set var current = 0. Then document.ready could call that function to clone the first set of inputs.</p><p>One more note concerning submitting empty hidden fields (the template fields). Josh N commented in the original blog post about putting that userTemplate div outside of the form itself so they don't get submitted. Seems like a good way to go to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713330">2</a> by Ziglet
		posted on 9/18/2009 at 6:04 AM
		</div>
		<div class="comment_text"><p>Hey Raymond,</p><p>Thanks a lot for this post.  Your discussion on groups and errorPlacement helped me A TON!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713324">3</a> by Gary Funk
		posted on 10/19/2009 at 1:00 AM
		</div>
		<div class="comment_text"><p>Ray, this is a great example. Easy to follow and use.</p><p>So, one last item. How do you delete the last 'add' in case the user click on 'Add Another Person' one time too many?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713328">4</a> by Gary Funk
		posted on 10/19/2009 at 2:55 AM
		</div>
		<div class="comment_text"><p>Better yet, how would you delete any added set?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713322">5</a> by Raymond Camden
		posted on 10/19/2009 at 7:19 AM
		</div>
		<div class="comment_text"><p>You can, I believe, just use the remove() operator in jQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713321">6</a> by Gary Funk
		posted on 10/20/2009 at 7:58 PM
		</div>
		<div class="comment_text"><p>Thanks Ray,</p><p>I have it working. I will make the changes to your code and send it up to you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713320">7</a> by Gary Funk
		posted on 10/20/2009 at 9:01 PM
		</div>
		<div class="comment_text"><p>I have modified Ray's code to add a 'remove' link for each new added person.</p><p>You may find the code at : <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Ff76dd446b%3AcuSCSezE2g-y5Y4ai8AjzqeR8Ek&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/f76dd446b">http://pastebin.com/f76dd446b</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713326">8</a> by JFJ
		posted on 3/11/2010 at 11:48 PM
		</div>
		<div class="comment_text"><p>Gary your changes break the validation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713329">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713329">9</a> by Chap
		posted on 10/21/2010 at 12:39 AM
		</div>
		<div class="comment_text"><p>@jfj:  what browser did you see the break in?  I'm not seeing anything broken.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713325">10</a> by Carlos
		posted on 1/13/2012 at 12:51 AM
		</div>
		<div class="comment_text"><p>Thanks!! I was looking for this and landed right in the good spot! :)</p></div>
	</div>
</div>
		