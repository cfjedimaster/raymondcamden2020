
<div class="comment" id="c_1714080106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080106">1</a> by Patrick Heppler
		posted on 9/18/2013 at 11:23 AM
		</div>
		<div class="comment_text"><p>I use summary/details in a real world website to markup events.<br><a href="https://disq.us/url?url=https%3A%2F%2Fwww.southside-crew.com%2Fseite%2Ftermine%2F%3AQ0my7Zci9UKR3eKXAJ9KDXkuwHo&amp;cuid=3321886" rel="nofollow noopener" title="https://www.southside-crew.com/seite/termine/">https://www.southside-crew....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080114">2</a> by Šime Vidas
		posted on 9/19/2013 at 8:52 AM
		</div>
		<div class="comment_text"><p>Those global variables have to go. Short, generic names like "loaded" can can easily become a problem if the browser environment happens to define a built-in with such a name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080113">3</a> by Šime Vidas
		posted on 9/19/2013 at 9:16 AM
		</div>
		<div class="comment_text"><p>Consider inline demos via jsFiddle or codepen. People could then fork those demos to improve the code, and then, if you liked the changes, you would just have to replace the demo URL in your blog post text source to insert the improved demo. #easy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080117">4</a> by Raymond Camden
		posted on 9/19/2013 at 5:59 PM
		</div>
		<div class="comment_text"><p>Sime... I agree in general but in practical terms I want my demo to be short and simple.</p><p>As for your second comment - I was using Gists for my code blocks, but didn't like the external dependency. When github went down (not very often of course), it broke my site completely. And in all the time I used them, no one ever (afaik) forked the code to do anything with it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080116">5</a> by Šime Vidas
		posted on 9/21/2013 at 7:35 PM
		</div>
		<div class="comment_text"><p>I've re-factored the JavaScript code here: <a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fsimevidas%2F6640655%3ADtykkyjx55YmP4nC6JOHon5yVL8&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/simevidas/6640655">https://gist.github.com/sim...</a></p><p>I'd like to emphasize these two key changes:<br>1. Using local variables instead of global variables, in order to avoid name collisions in the global namespace<br>2. Performing local DOM queries instead of global ones, for performance reasons</p><p>Note that your "It was just a quick demo" argument (<a href="https://disq.us/url?url=https%3A%2F%2Ftwitter.com%2Fcfjedimaster%2Fstatus%2F381108879696089088%29%3AU7S3uKZj9K-NKBSDpJPYsN1i_ck&amp;cuid=3321886" rel="nofollow noopener" title="https://twitter.com/cfjedimaster/status/381108879696089088)">https://twitter.com/cfjedim...</a> is not valid here as performing the above mentioned changes does not require extra work (which you *do* want to avoid when creating quick demos). Instead, it's about choosing the right pattern: You need variables, so you have to make a choice of either creating global or local variables. Likewise, you need to perform DOM queries, so you, again, have to make a choice of either performing global or local queries (where possible). In both cases, doing it local it the better choice. In the first case, your demo is more robust, and in the second case it performs better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080119">6</a> by Raymond Camden
		posted on 9/21/2013 at 9:17 PM
		</div>
		<div class="comment_text"><p>Simi, I definitely appreciate the time you took to update the code and comment. I have to say that I try my best here to share the best code possible in the most approachable manner possible. It is a hard balance sometimes. When I'm focused on particular aspect in a demo I may not always spend time thinking about the other aspects. As an example, if I'm demonstrating an AJAX call to some cool new service, I may forget to add in basic error support or detection if the user is offline. Those things are important, of course, but I'm not sure it is always practical here on the blog.</p><p>As to my comment about it being just a quick demo, well, the time it takes to write better code isn't just a case of the # of letters typed per se. I don't write my best code on first draft. I'm still learning how to write *better* JavaScript and it doesn't come naturally all the time. In this blog post, I really felt the focus was on the tags and the JS example was really just an offhand "gee whiz" type thing.</p><p>I never want to lead people astray or promote bad practices, but at the same time, the blog is a living document. So I think it is fair to say that what I do here would be (possibly) pretty different from what I'd do in more of a real application.</p><p>I can't disagree with any point you've made here, but I hope you understand my view here as the author. I really do need to think a bit more about my code though and will definitely endeavor to do, and as always, I'd definitely appreciate your comments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080118">7</a> by Christian Kirsch
		posted on 9/24/2013 at 11:45 AM
		</div>
		<div class="comment_text"><p>I'm wondering why you are speaking of "tags" instead of "elements". Or rather, why you're treating the two expressions as similar. In my opinion, an element is the syntactical unit that's relevant here – a tag (or rather the start and end tags) is only its "physical" representation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080120">8</a> by Raymond Camden
		posted on 9/24/2013 at 2:18 PM
		</div>
		<div class="comment_text"><p>@Christian: I guess I didn't really consider it that important of a difference. Do you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080108">9</a> by Albert
		posted on 9/24/2013 at 4:21 PM
		</div>
		<div class="comment_text"><p>Great article. Thanks!</p><p>Hope to see the tags implemented in IE11 and FF ... 27?</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080115">10</a> by Chris Coyier
		posted on 9/25/2013 at 5:40 PM
		</div>
		<div class="comment_text"><p>I think we'll see a big uptick in usage after Firefox implements it. I'm curious if we'll see a lot of "abuse." Like a login link that reveals a login form. Or would that be a valid use? It probably is legit - since the spec says "additional controls." Perhaps there is no wrong way to use it semantically.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080107">11</a> by Raymond Camden
		posted on 9/25/2013 at 5:43 PM
		</div>
		<div class="comment_text"><p>Chris, I could imagine a login and registration form using a separate details block to make it a bit slimmer, but that may be overkill. I do not pretend to be a UX/UI guy at all, so take my opinion with a huge grain of salt.</p><p>Maybe the login form would be normal, and the registration form collapsed since it is bigger.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080111">12</a> by Raymond Camden
		posted on 9/25/2013 at 5:47 PM
		</div>
		<div class="comment_text"><p>My ugly example: <a href="http://disq.us/url?url=http%3A%2F%2Fcodepen.io%2Fcfjedimaster%2Fpen%2FgzBtA%3AHDl_3HmwyWT1RXdvQfhRZZtOjBc&amp;cuid=3321886" rel="nofollow noopener" title="http://codepen.io/cfjedimaster/pen/gzBtA">http://codepen.io/cfjedimas...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080110">13</a> by Gavin
		posted on 9/26/2013 at 2:32 AM
		</div>
		<div class="comment_text"><p>I found this link about how to handle it in js,  if its not supported. <br><a href="http://disq.us/url?url=http%3A%2F%2Ftyleruebele.com%2Fweblog%2Fdetails-shim%3AyF7UHMhLd3aKkTzgfcho9cfoGl0&amp;cuid=3321886" rel="nofollow noopener" title="http://tyleruebele.com/weblog/details-shim">http://tyleruebele.com/webl...</a></p><p>Interesting.<br>its so easy to use Ray, I had to find a way to work around those other browsers... pretty slick simple, and self coding, I like it.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080109">14</a> by Raymond Camden
		posted on 9/27/2013 at 2:32 AM
		</div>
		<div class="comment_text"><p>Oh yeah, definitely possible with JS. But I love that we can skip it. :)</p></div>
	</div>
</div>
		