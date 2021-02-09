
<div class="comment" id="c_1714083390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083390">1</a> by Sebastian T.
		posted on 7/17/2014 at 1:43 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>do you know what is the difference between that and the adb logcat for Android purpose?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083399">2</a> by Raymond Camden
		posted on 7/17/2014 at 7:04 AM
		</div>
		<div class="comment_text"><p>Nope, sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083392">3</a> by Steven Benjamin
		posted on 7/21/2014 at 4:42 AM
		</div>
		<div class="comment_text"><p>Ray, the most useful snippet I found for debugging phonegap is:<br>window.onerror = function(msg,url,line){<br>    console.log('window.onerror :',msg,url,line);<br>};</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083403">4</a> by Raymond Camden
		posted on 7/21/2014 at 5:57 PM
		</div>
		<div class="comment_text"><p>Nice one. If you do use remote debugging, errors show up in the console already, but this would work for the log based console.</p><p>Actually - let me confirm errors don't automatically log.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083402">5</a> by Raymond Camden
		posted on 7/21/2014 at 6:01 PM
		</div>
		<div class="comment_text"><p>Ok, so yes, errors are NOT reported to the console log. As an interesting side note, in my first test I added an error to the event handler run by deviceready. I had,</p><p>console.log('pre bug');<br>doX();<br>console.log('post bug');</p><p>I assumed I'd see pre bug, and MAYBE an error. But I saw *nothing*. I had to move my code to another function called after the event handler to confirm what I found above.</p><p>So it seems like if something goes wrong in the eventhandler for deviceready, nothing is logged. May be worth my time to blog that just as an FYI.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083404">6</a> by Tony OHagan
		posted on 8/8/2014 at 8:49 AM
		</div>
		<div class="comment_text"><p>The latest PG Developer App includes a feature to remotely log calls to console.log()/.warn()/.error() etc to the 'phonegap serve' server  via <a href="http://disq.us/url?url=http%3A%2F%2Fsocket.io%3AM3FP3PGtXig-LQK-qDOn96eFdQs&amp;cuid=3321886" rel="nofollow noopener" title="socket.io">socket.io</a> .</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphonegap%2Fconnect-phonegap%2Fcommit%2Fe8dff0927a3bf98ee3440a9bac4e0e6d1aeb4ce7%3ACpQqNIh5LsS_rNOdb-WDZLIGngE&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/phonegap/connect-phonegap/commit/e8dff0927a3bf98ee3440a9bac4e0e6d1aeb4ce7">https://github.com/phonegap...</a></p><p>I had some pain getting this to install on Windows as you need a version of Visual Studio installed to make <a href="http://disq.us/url?url=http%3A%2F%2Fsocket.io%3AM3FP3PGtXig-LQK-qDOn96eFdQs&amp;cuid=3321886" rel="nofollow noopener" title="socket.io">socket.io</a> work. Here's one place that I posted some help with this ...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F15502945%2Fsocket-io-package-not-installing-in-window-7-node-js%2F25071659%2325071659%3AZlDQVKvaIDjHkwiGMEBSBp8gZdg&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/15502945/socket-io-package-not-installing-in-window-7-node-js/25071659#25071659">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083401">7</a> by Slava Kim
		posted on 8/12/2014 at 8:33 AM
		</div>
		<div class="comment_text"><p>Thank you very much for posting this very useful tip! It came quite in handy in my day work!</p></div>
	</div>
</div>
		