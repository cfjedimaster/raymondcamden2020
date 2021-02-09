
<div class="comment" id="c_1713709428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709428">1</a> by Martijn van der Woud
		posted on 10/28/2008 at 12:26 PM
		</div>
		<div class="comment_text"><p>Thanks very much for blogging about my question Ray, this is really useful for me (and probably for many others)!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709440">2</a> by Joel Cox
		posted on 10/28/2008 at 6:31 PM
		</div>
		<div class="comment_text"><p>Another way to deal with a slow process that doesn't require a response to the user is to use a CFML Event Gateway. Just fire off an asynchronous event and be on your merry way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709444">3</a> by Raymond Camden
		posted on 10/28/2008 at 6:37 PM
		</div>
		<div class="comment_text"><p>@Joel - thank you for bringing up the EG. I completely forgot that!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709452">4</a> by Marf
		posted on 11/5/2008 at 2:31 AM
		</div>
		<div class="comment_text"><p>Thank You!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709451">5</a> by Don
		posted on 5/20/2009 at 11:16 PM
		</div>
		<div class="comment_text"><p>Now I have to sort this out for old fusebox. I wonder if this can be done in the onRequestStart and onRequestEnd functions of application.cfc</p><p>In your example, where would you put the "doitslow" function?</p><p>My thinking on this is that with fusebox using cfincludes, that I will have to include a template that starts the "LOADING" view and then includes the slow process itself.  I'm leaning towards an iFrame tho.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709435">6</a> by Raymond Camden
		posted on 5/21/2009 at 12:15 AM
		</div>
		<div class="comment_text"><p>doItSlow is a controller method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709436">7</a> by Don
		posted on 5/21/2009 at 12:30 AM
		</div>
		<div class="comment_text"><p>So that is specific to Model-Glue? I've never used that one but it sounds similar to Mach II.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709438">8</a> by Raymond Camden
		posted on 5/21/2009 at 12:32 AM
		</div>
		<div class="comment_text"><p>All MVC-styled applications should have simularities.</p></div>
	</div>
</div>
		