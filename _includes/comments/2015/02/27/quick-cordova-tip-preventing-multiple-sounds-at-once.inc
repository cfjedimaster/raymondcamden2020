
<div class="comment" id="c_1931766385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1931766385">1</a> by Guest
		posted on 3/27/2015 at 6:27 PM
		</div>
		<div class="comment_text"><p>Hey I working on a music app using cordova and I think before stopping the media object you should check the status of the media  you want to stop(on android at least) . If the status of the media object is not 1, 2 ,3 or 4 . The stop call will fail. You have to wait for the status to change to one those value before you can stop it . Just something to keep in mind :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1931816341">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1931816341">2</a> (In reply to <a href="#c_1931766385">#1</a>) by Raymond Camden
		posted on 3/27/2015 at 6:55 PM
		</div>
		<div class="comment_text"><p>But how does it fail? Is an exception logged or does nothing happen?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1935858434">
	<div>
		<img src="https://disqus.com/api/users/avatars/armelkembe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1935858434">3</a> (In reply to <a href="#c_1931816341">#2</a>) by Armel Kembe
		posted on 3/30/2015 at 1:03 PM
		</div>
		<div class="comment_text"><p>Hey Raymond, I did some testing over the weekend and It looks like the error was showing because I was calling the stop before coming play which sounds like the expected behavior. My bad . I will just delete my comment then :)</p></div>
	</div>
</div>
		