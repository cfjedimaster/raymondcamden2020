
<div class="comment" id="c_1713727015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727015">1</a> by Richard Brasier
		posted on 10/20/2010 at 2:12 AM
		</div>
		<div class="comment_text"><p>Very nice.  I always wondered how to do this.</p><p>I am wondering if there is a way to tell if a user is "away" even if the window is still focused.  I know there is events for mousemove in jQuery.  Would there be away to tell if this function wasnt invoked (i.e. the mouse wasnt moved) in the last say 30 seconds?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727017">2</a> by Raymond Camden
		posted on 10/20/2010 at 2:19 AM
		</div>
		<div class="comment_text"><p>I would assume you could:</p><p>a) bind to onmouseover on window, and record the last time stamp <br>b) have an interval that checks if the last time stamp is &gt; N minutes, and if so, consider the user idle.</p><p>Let me try this tomorrow and post a follow up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727018">3</a> by jules
		posted on 10/20/2010 at 4:22 AM
		</div>
		<div class="comment_text"><p>This is also great for ajax sites. It lets the user always know the content they are looking at. Ex: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.scenicmesa.com%2Fbuffalo-chairs-ottomans%2F%3AI-pm44uMyBQg2X7kGDbyXiIub9k&amp;cuid=3321886" rel="nofollow noopener" title="http://www.scenicmesa.com/buffalo-chairs-ottomans/">http://www.scenicmesa.com/b...</a><br>(click on the products across the top)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727014">4</a> by Tom Jenkins
		posted on 10/20/2010 at 12:07 PM
		</div>
		<div class="comment_text"><p>@Richard and @Ray:</p><p>I remember looking for an idle monitor a months back and found ... <a href="http://disq.us/url?url=http%3A%2F%2Fpaulirish.com%2F2009%2Fjquery-idletimer-plugin%2F%3AQZC0uFn9eUlMiRYTKtsQcOfUtKw&amp;cuid=3321886" rel="nofollow noopener" title="http://paulirish.com/2009/jquery-idletimer-plugin/">http://paulirish.com/2009/j...</a> with demo here <a href="http://disq.us/url?url=http%3A%2F%2Fpaulirish.com%2Fdemo%2Fidle-timer%3A9Lnp3z9CRmxKXUVvJ_42slDmD_s&amp;cuid=3321886" rel="nofollow noopener" title="http://paulirish.com/demo/idle-timer">http://paulirish.com/demo/i...</a></p><p>Very cool and works very well :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727016">5</a> by Raymond Camden
		posted on 10/20/2010 at 3:47 PM
		</div>
		<div class="comment_text"><p>Well nice, now I don't have to write a demo. ;)</p></div>
	</div>
</div>
		