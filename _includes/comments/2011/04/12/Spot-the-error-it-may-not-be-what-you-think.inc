
<div class="comment" id="c_1713731591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731591">1</a> by todd sharp
		posted on 4/12/2011 at 9:09 PM
		</div>
		<div class="comment_text"><p>Wow - I'd have never spotted that.  I mean, I noticed the src attribute, but I'd not have known it submits the form.</p><p>Side note - instead of e.preventDefault() could you not just return false in the click handler?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731595">2</a> by Jeremy Battle
		posted on 4/12/2011 at 9:25 PM
		</div>
		<div class="comment_text"><p>I guessed right!</p><p>@todd - I think the general reason to e.preventDefault(); instead of return false; is that e.preventDefault() will not stop event propagation where as returning false will.</p><p>I might be wrong, but that is my understanding. In this situation though returning false would work just the same (no other events to propagate)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731598">3</a> by Raymond Camden
		posted on 4/12/2011 at 9:28 PM
		</div>
		<div class="comment_text"><p>@Jeremy - that's my understanding too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731603">4</a> by todd sharp
		posted on 4/12/2011 at 9:30 PM
		</div>
		<div class="comment_text"><p>Ahh... fantastic - did not know that.  Thanks guys.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731601">5</a> by Mihai Baboi
		posted on 4/12/2011 at 10:36 PM
		</div>
		<div class="comment_text"><p>I've had something that's a bit like this. I was firing a .click() function on a check box and it was conflicting with the native click event in the browser. Had a bit of a headache before figuring it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731604">6</a> by Peter Boughton
		posted on 4/13/2011 at 1:44 AM
		</div>
		<div class="comment_text"><p>There's another similar problem, if you use the button tag.</p><p>Change this code:<br>    &lt;input type="button" id="myButton" value="Click me like you mean it."&gt;</p><p>To this:<br>    &lt;button id="myButton"&gt;Click me like you mean it.&lt;/button&gt;</p><p>And you have the same issue.</p><p>For some stupid reason, the idiots at the W3C defined the default type for button tag as submit, so to get a non-submitting button you need to specify the type:</p><p>    &lt;button type="button" id="myButton"&gt;Click me like you mean it.&lt;/button&gt;</p><p>Which is annoyingly repetitive.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731606">7</a> by Mike
		posted on 4/13/2011 at 7:00 PM
		</div>
		<div class="comment_text"><p>Couldn't you also just remove the input type and just have an image with that ID, of course you would have to style it for the pointer but I think it would work the same wouldn't it ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731607">8</a> by Peter Boughton
		posted on 4/13/2011 at 7:04 PM
		</div>
		<div class="comment_text"><p>It wont work if JS is disabled, whereas with input type=image you can put fallback functionality behind the form submission.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731608">9</a> by Rodion Bykov
		posted on 4/13/2011 at 9:34 PM
		</div>
		<div class="comment_text"><p>Interesting what statistic there is on 'JS disabled'. To me it has no sense in year 201x. I also agree on simpler &lt;img onclick=""&gt; solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731599">10</a> by Raymond Camden
		posted on 4/13/2011 at 9:36 PM
		</div>
		<div class="comment_text"><p>Just to be clear - it wasn't so much that there was an easy work around - but that the initial issue was easy to miss. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731600">11</a> by Edward - Florida SEO
		posted on 4/15/2011 at 4:06 AM
		</div>
		<div class="comment_text"><p>Here's an apropos link to a great post on event.preventDefault() vs return false ... it simply supports what Jeremy stated and even goes a bit further to show how return false actually fires three bubbling events in it's wake ...</p><p>   1. event.preventDefault();<br>   2. event.stopPropagation();<br>   3. Stops callback execution and returns immediately when called.</p><p>Here's the link for more FYI ...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ffuelyourcoding.com%2Fjquery-events-stop-misusing-return-false%2F%3A_Zfm9xSJtkhobpDncPX4-I0WRd0&amp;cuid=3321886" rel="nofollow noopener" title="http://fuelyourcoding.com/jquery-events-stop-misusing-return-false/">http://fuelyourcoding.com/j...</a></p></div>
	</div>
</div>
		