
<div class="comment" id="c_4451777604">
	<div>
		<img src="https://disqus.com/api/users/avatars/sitesbyjoe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4451777604">1</a> by Joseph R. B. Taylor
		posted on 5/6/2019 at 5:00 PM
		</div>
		<div class="comment_text"><p>Thanks for writing on this often overlooked subject.  Definitely plan on picking out some of your examples to add a global error handling function for my apps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4451876047">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4451876047">2</a> (In reply to <a href="#c_4451777604">#1</a>) by Raymond Camden
		posted on 5/6/2019 at 6:12 PM
		</div>
		<div class="comment_text"><p>You are most welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4461983695">
	<div>
		<img src="https://disqus.com/api/users/avatars/markusoberlehner.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4461983695">3</a> by Markus Oberlehner
		posted on 5/14/2019 at 1:32 PM
		</div>
		<div class="comment_text"><p>Thanks for this great article! I wrote about a similar topic in my own blog: <a href="https://disq.us/url?url=https%3A%2F%2Fmarkus.oberlehner.net%2Fblog%2Fvue-error-handling-with-renderless-components%2F%3AIAX8iNure0yqrs9_r-hU2TnEzNE&amp;cuid=3321886" rel="nofollow noopener" title="https://markus.oberlehner.net/blog/vue-error-handling-with-renderless-components/">https://markus.oberlehner.n...</a> The article is about one possible approach how the `errorCaptured` hook can be used for implementing a generic error reporting solution in your app using the concept of renderless components.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4463953051">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4463953051">4</a> (In reply to <a href="#c_4461983695">#3</a>) by Raymond Camden
		posted on 5/15/2019 at 8:32 PM
		</div>
		<div class="comment_text"><p>This was really neat - thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4518908616">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_VGZnB4gxzT.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4518908616">5</a> by James Thomson
		posted on 6/27/2019 at 11:56 PM
		</div>
		<div class="comment_text"><p>Thanks for the write up. It was interesting seeing these handlers explored. I have always just used the default settings. One thing I noticed is by combining the errors into one log you miss out on some critical stack trace information. By logging the error on its own you can take advantage of this: <a href="https://disq.us/url?url=https%3A%2F%2Fcodepen.io%2Fgetreworked%2Fpen%2FjjadQe%3A0xArQsa5CbAeVmJg-FMei7e2cm0&amp;cuid=3321886" rel="nofollow noopener" title="https://codepen.io/getreworked/pen/jjadQe">https://codepen.io/getrewor...</a></p><p>After playing around a bit, personally, I think the default error handling is better as is provides you with a more concise stack trace.</p><p>For example in this screenshot the first set of errors (in white) are from your custom handler, whereas the second set (in red) are from the default handling.</p><p> <a href="https://uploads.disquscdn.com/images/a4037143b462eb52ea98657a7e10bc6e0cf15afe3f5c895729cef10a87a846fa.png" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/a4037143b462eb52ea98657a7e10bc6e0cf15afe3f5c895729cef10a87a846fa.png">https://uploads.disquscdn.c...</a></p><p>Here I can see exactly what method caused the issue, what type of error it is, and in which js file the it occurs. Perhaps these error handlers are more useful when used in production along with tracking services such as Sentry or Bugsnag.</p></div>
	</div>
</div>
		