
<div class="comment" id="c_1713665161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665161">1</a> by Brian Rinaldi
		posted on 5/14/2007 at 6:27 PM
		</div>
		<div class="comment_text"><p>Obviously what is true for that UDF is also true for a CFC method call. You can pass argumentCollection=Struct to a component call with or without the matching cfargument tags on the other end.</p><p>This is also true even if you do not use argumentCollection. You could pass arguments like ("argument1","argument2") and they will come though as an array of unnamed arguments if there are no cfargument tags. Lastly, you could do (argument1="argument1",argument2="argument2") and if there are no matching cfargument tags in the component, you will still get an arguments structure with the named keys.</p><p>Whether this is a good practice or not is an entirely seperate argument :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665162">2</a> by Brian Rinaldi
		posted on 5/14/2007 at 6:29 PM
		</div>
		<div class="comment_text"><p>Sorry that I repeated a little of what you said there, upon rereading I noticed you did cover the named arguments - though it is worth noting that it works on a CFC as well I suppose. This is what I get for speed reading blog posts ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665160">3</a> by Raymond Camden
		posted on 5/14/2007 at 6:32 PM
		</div>
		<div class="comment_text"><p>To be clear, it isn't an array of unnamed arguments. It is a struct with numerical keys.</p><p>To make matters even more confusing, you CAN treat arguments like an array too if you want.</p><p>Which you kind of say - but just adding.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665163">4</a> by Michael Long
		posted on 5/14/2007 at 7:32 PM
		</div>
		<div class="comment_text"><p>@Brain, it may or may not be "good" practice, but it's a very useful one, as the following illustrates:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfinternals.org%2Fblog%2F2007%2F05%2Fnamed_arguments.html%3AWt8Y-ELv9DThAZ12OayLf71xiqI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfinternals.org/blog/2007/05/named_arguments.html">http://www.cfinternals.org/...</a></p></div>
	</div>
</div>
		