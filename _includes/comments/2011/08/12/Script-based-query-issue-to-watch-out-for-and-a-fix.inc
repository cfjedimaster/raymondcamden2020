
<div class="comment" id="c_1713734651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734651">1</a> by Ryan Vikander
		posted on 8/12/2011 at 4:32 PM
		</div>
		<div class="comment_text"><p>We have seen this as well in HQL. To solve it I just hit space before entering down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734660">2</a> by Andrew Scott
		posted on 8/12/2011 at 4:36 PM
		</div>
		<div class="comment_text"><p>Another fix is to have your where clause all on the one line.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734656">3</a> by Ryan Vikander
		posted on 8/12/2011 at 4:37 PM
		</div>
		<div class="comment_text"><p>Also, the param variable is it supposed to have a space before the variable?</p><p>": mediaid" should it be ":mediaid"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734657">4</a> by Raymond Camden
		posted on 8/12/2011 at 4:45 PM
		</div>
		<div class="comment_text"><p>I saw that in Andrew's code and was convinced it was the issue, but it is not. But I do think it is bad formatting. (Well, maybe not bad, I don't like it though. :P ) Going to edit it now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734662">5</a> by Andrew Scott
		posted on 8/12/2011 at 5:06 PM
		</div>
		<div class="comment_text"><p>Agreed it is bad and it was an oversight on my part, normally I would type = :paramName</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734661">6</a> by Justin Carter
		posted on 8/13/2011 at 4:56 AM
		</div>
		<div class="comment_text"><p>I think Ben Nadel also found this bug a couple of years back :)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F1678-Learning-ColdFusion-9-Using-CFQuery-And-Other-Service-Tags-In-CFScript.htm%3ALHGEFSW4wjlaVkUupUMf-COBL0I&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/1678-Learning-ColdFusion-9-Using-CFQuery-And-Other-Service-Tags-In-CFScript.htm">http://www.bennadel.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734663">7</a> by Andrew Scott
		posted on 8/13/2011 at 5:52 AM
		</div>
		<div class="comment_text"><p>Justin I actually raised it as a bug with Adobe during the pre-release, but as I have mainly been doing ORM work on CF9 I had forgotten all about it.</p><p>I guess it was one of those things that Adobe just didn't think was important enough to fix at the time of the beta program, like another bug I am having with ORM event handlers and shared hosting that still exists.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734664">8</a> by Raymond Camden
		posted on 8/13/2011 at 5:55 AM
		</div>
		<div class="comment_text"><p>To be fair to Adobe (ok, I wear my bias proudly now ;) this is a pretty easy issue to get around. Given limited time/budget to fix bugs, I can see skipping this one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734665">9</a> by Andrew Scott
		posted on 8/13/2011 at 6:21 AM
		</div>
		<div class="comment_text"><p>Agreed Ray, even then I did what I do now and keep the where clause all on the one line. Just now and then I do forget...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734666">10</a> by Justin Carter
		posted on 8/13/2011 at 7:01 AM
		</div>
		<div class="comment_text"><p>Maybe they figured that everyone still fails to parameterise their queries so it wouldn't be much of an issue :) (Joke!)</p></div>
	</div>
</div>
		