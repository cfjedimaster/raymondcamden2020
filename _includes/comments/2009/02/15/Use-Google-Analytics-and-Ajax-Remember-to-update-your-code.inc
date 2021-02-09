
<div class="comment" id="c_1713713041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713041">1</a> by Jason Klingstedt
		posted on 2/18/2009 at 6:36 AM
		</div>
		<div class="comment_text"><p>You may be fully aware of this, so forgive me if you do... There is a beta program in Google Analytics called Event Tracking and you can track, well, events just like this. Since what you describing is essentially a page view, your solution works here, but what I am using it for is tracking other little functions like posting comments (we do ours via AJAX), etc. I don't know how one goes about getting into the program (we were invited), but once  you are in, it just shows up in the content tab in the Analytics UI. Firing it off is as easy as adding this to your function that is doing the AJAX call: pageTracker._trackEvent(action, category, label);</p><p>&lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fapis%2Fanalytics%2Fdocs%2FeventTrackerOverview.html%3ALIV-2xLt5ORgYWWUs4qZBt181L0&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/apis/analytics/docs/eventTrackerOverview.html">http://code.google.com/apis...</a>"&gt;Full documentation here&lt;/a&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713042">2</a> by Raymond Camden
		posted on 2/18/2009 at 7:21 AM
		</div>
		<div class="comment_text"><p>I was _not_ aware of that. Thanks for sharing it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713039">3</a> by Jules Gravinese
		posted on 2/27/2009 at 9:29 AM
		</div>
		<div class="comment_text"><p>The problem I found with this is that it uses the current window title for the hit's name. Kinda silly for an ajax app. DOH!</p><p>I got around it by changing the window title just before making the call.<br>document.title = newTitle;<br>pageTracker._trackPageview(track);</p><p>But that depends on how much of your page is changing with the ajax data. In my case, it was a large area so it makes sense to do so. EX: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.scenicmesa.com%2Fbuffalo-leather-furniture%2F%3AAd_1xH_ASnayvbfMSVlKzLq8LkY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.scenicmesa.com/buffalo-leather-furniture/">http://www.scenicmesa.com/b...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713018">4</a> by Raymond Camden
		posted on 2/27/2009 at 9:12 PM
		</div>
		<div class="comment_text"><p>Thats not a bad tip. It probably would be a good idea, on CFBloggers, to change the title as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713037">5</a> by Jules Gravinese
		posted on 2/28/2009 at 7:25 AM
		</div>
		<div class="comment_text"><p>In the development version of that above site I am doing it like this...</p><p>// do fadeout effect<br>document.title = '...loading...';<br>// do ajax function<br>document.title = newTitle;<br>// do fadein effect<br>pageTracker._trackPageview(track);</p><p>Just a little added niceness for the viewer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713016">6</a> by Adi
		posted on 5/21/2009 at 9:59 PM
		</div>
		<div class="comment_text"><p>wow...thx for your sharing...<br>i will update at my code..<br>thx a lot</p></div>
	</div>
</div>
		