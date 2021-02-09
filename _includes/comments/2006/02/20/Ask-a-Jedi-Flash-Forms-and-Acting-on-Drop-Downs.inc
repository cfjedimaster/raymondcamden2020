
<div class="comment" id="c_1713650366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650366">1</a> by todd
		posted on 2/20/2006 at 7:49 PM
		</div>
		<div class="comment_text"><p>Be careful...I don't think using getURL will post the form data (if that is what you're after).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650354">2</a> by David Harris
		posted on 2/21/2006 at 2:19 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I think I found the answer (I didn't want) over on ASFusion, posted by "Laura"</p><p>&lt;quote&gt;</p><p>You can have a button with onclick="getURL('your page')", appending any data that the page needs (as long as it is short, since it is a get request)<br>There is no way to change the action page after the form is loaded.</p><p>&lt;/quote&gt;</p><p>Doh!</p><p>The way I am doing it now is by passing an attribute and using a &lt;cfswitch&gt; on the action page to decide the action to be taken.</p><p>We live an learn!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650363">3</a> by PaulH
		posted on 2/21/2006 at 10:06 PM
		</div>
		<div class="comment_text"><p>well i think using a flashform &amp; then submitting it is possibly the wrong way to use flashforms. why not just send the data back via remoting?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650365">4</a> by todd
		posted on 2/21/2006 at 10:27 PM
		</div>
		<div class="comment_text"><p>That's _definitely_ my preferred way of handling it Paul, but I didn't want to open a can of worms by suggesting that!  Remoting gives you infinite possibilities of actions to take and form fields to pass...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650367">5</a> by David Harris
		posted on 2/21/2006 at 11:47 PM
		</div>
		<div class="comment_text"><p>Hey Guys,</p><p>I am in the process of learning all the remoting tricks, but keep in mind, CFForm is a form, which, by it's very nature, submits data.<br>So I don't submitting data via a flash form is "wrong".</p><p>Any way, I am learngin lots of asfusion, if you guys have any other hot links, that would be great!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650368">6</a> by todd
		posted on 2/22/2006 at 2:49 AM
		</div>
		<div class="comment_text"><p>Don't get me wrong, I'm not suggesting that posting form data "the old fashioned way" is wrong, I'm just saying that when it comes to more dynamic techniques (such as posting to a dynamic action page), maybe remoting is a cleaner option.  ASFusion is probably the best site there is out there right now for taking flash forms to the next level.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650370">7</a> by David Harris
		posted on 2/22/2006 at 2:53 AM
		</div>
		<div class="comment_text"><p>...it still blows my mind what the crew at ASFusion is doing with CFForm!<br>I have lots to learn!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650372">8</a> by PaulH
		posted on 2/22/2006 at 4:03 AM
		</div>
		<div class="comment_text"><p>well i am suggesting exactly that, don't use a flashform where it will be submitted. too much overhead, etc. unless the form is pretty complex. i think of flashforms as "flex" not so much as a "form". you can build some cool stuff right now w/a bit of AS &amp; flashforms.</p></div>
	</div>
</div>
		