
<div class="comment" id="c_1713619636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619636">1</a> by HKS
		posted on 8/5/2005 at 3:20 AM
		</div>
		<div class="comment_text"><p>With all this talk of URL Rewriting and Friendly URLs and all that, I'm surprised that no one has brought up the FrontController pattern: <a href="http://disq.us/url?url=http%3A%2F%2Fjava.sun.com%2Fblueprints%2Fcorej2eepatterns%2FPatterns%2FFrontController.html%3AmAQY0XP3tAqYjaowIkNtWQyzNnw&amp;cuid=3321886" rel="nofollow noopener" title="http://java.sun.com/blueprints/corej2eepatterns/Patterns/FrontController.html">http://java.sun.com/bluepri...</a></p><p>Granted, it might (I'm not sure) be a bit quicker to do it with mod_redirect, but the FC would be more portable, and maybe even more flexible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619639">2</a> by Davec
		posted on 8/12/2005 at 4:26 AM
		</div>
		<div class="comment_text"><p>The thing is I think you still need mod_rewrite.</p><p>I'm working on an application right now where we're trying to set up a "Front Controller" by overriding Application.cfc's onRequest  method. But since onRequest is only called when a template is found it can't be used to directly handle URLs for files that don't actually, physically exist. mod_rewrite or something similar has to point the request to a handler first.</p><p>Unless there is some other way of doing it, which I'd love to hear!</p><p>Although this project on cfopen might make something like this possible:<br><a href="http://disq.us/url?url=http%3A%2F%2Fcfopen.org%2Fprojects%2Ffuservlet%2F%3A4DJZ27Ugbj_UvavVs79o-xdD_Go&amp;cuid=3321886" rel="nofollow noopener" title="http://cfopen.org/projects/fuservlet/">http://cfopen.org/projects/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619637">3</a> by HKS
		posted on 8/12/2005 at 4:55 AM
		</div>
		<div class="comment_text"><p>You can define a servlet mapping in web.xml, so that all requests go to the cf processor servlet. (Have a look in web.xml, and you'll see what I mean).</p><p>Failing that, you can set up a custom 404 page which invokes the front controller, which in turn, throws up a real 'not found' page if needed.</p></div>
	</div>
</div>
		