
<div class="comment" id="c_1713673428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673428">1</a> by existdissolve
		posted on 10/20/2007 at 8:47 PM
		</div>
		<div class="comment_text"><p>One of the Spry widgets I've really come to like is the Password feature set.  Spry makes it incredibly easy to place custom rules (such as length, special characters, number of particular value types, etc.) on password fields.</p><p>Obviously, server-side checking is still necessary; however, it is nice to be able to provide a more user-friendly and alert-as-you-go experience for those who aren't trying to break things just for the heck of it.  Spry enables the addition of an entire second layer and requires very little time above and beyond what one should already be doing.</p><p>Very cool stuff!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673434">2</a> by Raymond Camden
		posted on 10/20/2007 at 8:55 PM
		</div>
		<div class="comment_text"><p>Cool. I'll take a look at - and blog on - the password one next.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673435">3</a> by DK
		posted on 10/20/2007 at 10:19 PM
		</div>
		<div class="comment_text"><p>I had turned most of the spry form validation widgets into custom tags awhile back. I had added opt. attributes for help and debugging at one point. Recently I've been trying to do something similar with jQuery though (smaller footprint).</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfspryforms.riaforge.org%2F%3AKelwzisVAPR7BRH5-IXx8UXd2s0&amp;cuid=3321886" rel="nofollow noopener" title="http://cfspryforms.riaforge.org/">http://cfspryforms.riaforge...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673433">4</a> by David Herman
		posted on 10/21/2007 at 12:56 AM
		</div>
		<div class="comment_text"><p>I've actually come to dislike purely clientside validation.  Since you still need server side validation it means your business validation logic exists in two places,  and then needs to be maintained in two places.  What I've done in the past is use my server side validation to validate my client side data through ajax.  It sounds kind of hokey, but it lets you share your validation with the serverside.  It's especially usefull when you're doing ajax validation anyway (user name already exists).  I'm curious if spry has anyway to hand off the validation to a boolean method that you can then do whatever you want (ie: send to the server)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673500">5</a> by Raymond Camden
		posted on 10/21/2007 at 3:26 AM
		</div>
		<div class="comment_text"><p>David, in the past I've definitely felt the same - but with Spry making it so easy - I'm reconsidering.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673499">6</a> by existdissolve
		posted on 10/21/2007 at 2:41 PM
		</div>
		<div class="comment_text"><p>David--</p><p>I agree that it can be a pain.  However, I think it is becoming increasingly necessary.</p><p>For example, I personally give sites very few chances with user interfaces.  If I have to correct errors AFTER filling out forms AND submitting them, I lose patience very quickly and am less likely to bother continuing with it.</p><p>In the past, people may have been accustomed to this kind of "go-back-and-correct-the-errors" kind of workflow, but with the incredible proliferation of AJAX across the web, newer users are probably endowed with a significantly smaller toleration for such processes, expecting live notifications of potential problems.</p><p>This is one of the reasons I love Spry so much.  Whether one is looking for pure client-side validation, or a fusion of the two like you have suggested (and which I use for the very example you cited), Spry makes the addition of this second "layer" very intuitive and coding-time-friendly.  It is so easy to implement that one can still concentrate on the still extremely important server-side validations without consuming a lot of precious coding time on wrangling with Javascript.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673497">7</a> by David Herman
		posted on 10/21/2007 at 5:26 PM
		</div>
		<div class="comment_text"><p>I'm a big believer of the DRY (don't repeat yourself) concept.  And yes spry makes it easy to validate things on the client side but in experience, people change their minds about as often as Ray says that he loves CF. <br>So now we have to go change the code on the client side and then go change the validation on the server side, if we remember. The problem then(when we forget) is that your client side validation checks to see that 2 fields are required and your serverside says that 3 are required, and now your validation doesn't match.</p><p>One could argue that testing could and should catch that, but we all know how much people love to test.</p><p>In reality I love client side validation, I just want the logic for it on the server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673501">8</a> by O?uz Demirkap?
		posted on 10/22/2007 at 4:43 AM
		</div>
		<div class="comment_text"><p>jQuery rulez! :)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjquery.bassistance.de%2Fvalidate%2Fdemo-test%2F%3AFgi7_lDZ-08hcEFY26E9A08utas&amp;cuid=3321886" rel="nofollow noopener" title="http://jquery.bassistance.de/validate/demo-test/">http://jquery.bassistance.d...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673498">9</a> by Jeff Self
		posted on 10/22/2007 at 4:59 PM
		</div>
		<div class="comment_text"><p>Anybody been able to get Spry validation to work inside a cfwindow?  I've converted some forms to run inside of a cfwindow and now the Spry validation doesn't work.  It runs fine when I call the form itself.  I've tried calling the spry validation from the page containing the cfwindow.  I've tried calling the spry validation from the page containing the form and it doesn't work in either one.  But like I said, if I can the page containing the form as a standalone page rather than from within the cfwindow, the spry validation works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673502">10</a> by Raymond Camden
		posted on 10/22/2007 at 5:25 PM
		</div>
		<div class="comment_text"><p>Jeff - all JS in cf8 UI stuff has to be of the form, foo = function(), not function foo. I'd be willing to bet that is why Spry won't work.</p></div>
	</div>
</div>
		