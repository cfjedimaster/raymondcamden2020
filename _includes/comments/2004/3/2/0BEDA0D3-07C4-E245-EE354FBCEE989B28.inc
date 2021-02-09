
<div class="comment" id="c_1713615448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615448">1</a> by dave ross
		posted on 3/2/2004 at 8:31 PM
		</div>
		<div class="comment_text"><p>cool until you need to return more than one of anything... most languages don't like CF's inability to specify the type of an array. I think this is a feature that is needed badly. The syntax could be someting like returns="arrayOf(path.to.my.cfc)"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615454">2</a> by seancorfield
		posted on 3/2/2004 at 10:32 PM
		</div>
		<div class="comment_text"><p>Since Web Services are essentially stateless, the lack of use of 'var' is not important here - each web service call creates a new instance of the CFC to interact with (and then throws it away after the call completes).</p><p>I won't deny that it would be better style to use 'var'...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615445">3</a> by Raymond Camden
		posted on 3/2/2004 at 10:36 PM
		</div>
		<div class="comment_text"><p>Even though WS are stateless, you can still have var issues. What if you call method Foo(), which makes use of X as a loop iterator. Inside that method you call another method, goo(), which also uses X. Both are not var scoped. Would this not be an issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615451">4</a> by seancorfield
		posted on 3/2/2004 at 10:44 PM
		</div>
		<div class="comment_text"><p>Yes, but the example code doesn't do that...</p><p>If you call multiple methods that access the same (variables scope) variable then it will do what you have programmed it to do... If you need X to be a different variable in both Foo() and Goo() you need to program accordingly.</p><p>Most folks don't write code that complex so they'll get away with not using 'var' in a web service.</p><p>I'm not recommending that style, just pointing out that there's nothing inherently wrong with the example code in the article...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615452">5</a> by Raymond Camden
		posted on 3/2/2004 at 10:47 PM
		</div>
		<div class="comment_text"><p>Ah, I guess we will have to agree to disagree. While I agree that the code will work, I would never recommend someone not use the var keyword. It would seem like very bad practice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615453">6</a> by seancorfield
		posted on 3/2/2004 at 10:52 PM
		</div>
		<div class="comment_text"><p>I think we're in agreement on the style - as I said "I'm not recommending that style [not using 'var']"...</p></div>
	</div>
</div>
		