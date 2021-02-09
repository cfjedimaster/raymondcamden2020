
<div class="comment" id="c_4138409151">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9Z8J2Fq0yY.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4138409151">1</a> by James Parson, CA Islander
		posted on 10/10/2018 at 3:21 PM
		</div>
		<div class="comment_text"><p>I am having trouble understanding</p><p>${encodeURIComponent(this.user)}</p><p>Is this VueJS or just plain Javascript? Whenever I see a $, I start thinking of jQuery. Is this jQuery?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4138470124">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4138470124">2</a> (In reply to <a href="#c_4138409151">#1</a>) by Raymond Camden
		posted on 10/10/2018 at 3:56 PM
		</div>
		<div class="comment_text"><p>This is a great question! The use of ${x} is part of the new Template Strings (Template Literal) feature of JavaScript. You can see more here: <a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen-US%2Fdocs%2FWeb%2FJavaScript%2FReference%2FTemplate_literals%3A1WvgfP-091DClm81XWmI_oYAAHQ&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Template_literals">https://developer.mozilla.o...</a></p><p>Basically, instead of:</p><p>let name ="Ray";<br>let greeting = "Hi, "+name+", how are you?"</p><p>We can embed the variable in a string:</p><p>let name = "Ray";<br>let greeting = `Hi, ${name}, how are you?`;</p><p>Another cool feature of template literals is that you can add line breaks:</p><p>let greeting = `&lt;div&gt;<br></p><p>lots of html crap<br>and variables: ${name}<br>more html<br>&lt;/div&gt;`;</p><p>Note that you use a back tick instead of a double or single quote.</p></div>
	</div>
</div>
		