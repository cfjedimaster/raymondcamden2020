
<div class="comment" id="c_1713664689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664689">1</a> by Damien McKenna
		posted on 5/4/2007 at 8:41 PM
		</div>
		<div class="comment_text"><p>Any thoughts on Transfer vs Reactor?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664687">2</a> by Raymond Camden
		posted on 5/4/2007 at 8:50 PM
		</div>
		<div class="comment_text"><p>In general I've had trouble with Reactor. It works nice when it works - but I've had a LOT of trouble getting it working right. Once I get it working - its ok, but it's kind of made me a bit upset from time to time. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664684">3</a> by Ken Dunnington
		posted on 5/4/2007 at 8:51 PM
		</div>
		<div class="comment_text"><p>I can attest to the goodness that is Transfer. It's a different approach than Reactor, so comparing them is a little unfair as one approach may suit you (or your project) better. Reactor is an ActiveRecord approach, where the record object contains all the CRUD functionality, while Transfer is a Business Object approach, where the BO only contains the data about itself. Having worked with both, I have to say that Transfer's approach works better for me, because it more cleanly separates the application into layers (to save a TransferObject, you pass it to Transfer, the object itself doesn't know how to do anything.) This leads to less coupling and more cohesion, which is a good thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664673">4</a> by hua
		posted on 5/4/2007 at 9:02 PM
		</div>
		<div class="comment_text"><p>Damien, Sean has a great comparison of Transfer and Reactor:<br><a href="http://disq.us/url?url=http%3A%2F%2Fcorfield.org%2Fblog%2Findex.cfm%2Fdo%2Fblog.entry%2Fentry%2FComparing_Transfer_and_Reactor%3AWlOi2VVikGFgXn8aN-RToYdYjaQ&amp;cuid=3321886" rel="nofollow noopener" title="http://corfield.org/blog/index.cfm/do/blog.entry/entry/Comparing_Transfer_and_Reactor">http://corfield.org/blog/in...</a></p></div>
	</div>
</div>
		