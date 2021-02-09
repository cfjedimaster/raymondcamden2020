
<div class="comment" id="c_1713655140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655140">1</a> by doug Sims
		posted on 7/18/2006 at 6:06 PM
		</div>
		<div class="comment_text"><p>Ray or anyone,<br>I am using unity for rapid prototyping and often need to update multiple object with one form post. Is there a best way to chain two generic Commits to fire on one form submit besides chaining the events?<br>I blogged about how I am doing it at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.evenamonkey.com%3A8EwR7hdRI4W7_2vVhcUFVz1NYeM&amp;cuid=3321886" rel="nofollow noopener" title="www.evenamonkey.com">www.evenamonkey.com</a>, and have been hoping to get some comments/feedback on best practice and update the post.</p><p>Thanks,<br>Doug S</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655152">2</a> by Raymond Camden
		posted on 7/18/2006 at 6:12 PM
		</div>
		<div class="comment_text"><p>Not quite sure what you mean by chaning the events. You can do N commits by just using N messages. As long as the right data was in the event it should work ok.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655149">3</a> by doug Sims
		posted on 7/18/2006 at 6:18 PM
		</div>
		<div class="comment_text"><p>I'll have to try again, when I had 2 messages, only one was actually updating in the database.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655158">4</a> by Raymond Camden
		posted on 7/18/2006 at 6:23 PM
		</div>
		<div class="comment_text"><p>If I'm wrong, and I may be, I didn't try this part actually, don't forget there is a bug tracker for MG at:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftrac.model-glue.com%2Fmodel-glue%2Ftrac.cgi%3AALEXFKiYOMCZ6I7v7GUM2DKsUFs&amp;cuid=3321886" rel="nofollow noopener" title="http://trac.model-glue.com/model-glue/trac.cgi">http://trac.model-glue.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655155">5</a> by Guybrush
		posted on 7/19/2006 at 6:15 PM
		</div>
		<div class="comment_text"><p>Does this handle SQL injection?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655150">6</a> by Danny Jung
		posted on 7/19/2006 at 6:16 PM
		</div>
		<div class="comment_text"><p>Joe would have to confirm, but I believe there is a bug in the documentation for GenericDelete:</p><p>&lt;message name="modelglue.GenericDelete"&gt;<br>  &lt;argument name="object" value="Contact" /&gt;<br>  &lt;argument name="contactId" value="Contact" /&gt;<br>&lt;/message&gt;</p><p>should be:</p><p>&lt;message name="modelglue.GenericDelete"&gt;<br>  &lt;argument name="object" value="Contact" /&gt;<br>  &lt;argument name="criteria" value="contactID" /&gt;<br>&lt;/message&gt;</p></div>
	</div>
</div>
		