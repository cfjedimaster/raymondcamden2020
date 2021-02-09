
<div class="comment" id="c_1713742231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742231">1</a> by Chris Bowyer
		posted on 7/20/2012 at 3:41 AM
		</div>
		<div class="comment_text"><p>I only have IE8 on my laptop and just get a loading animation</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742235">2</a> by Raymond Camden
		posted on 7/20/2012 at 3:46 AM
		</div>
		<div class="comment_text"><p>Could be anything - I made liberal use of console messages for example. I removed them from the code sample to keep things simple. Could be "typeof" too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742234">3</a> by David Fekke
		posted on 7/25/2012 at 12:51 AM
		</div>
		<div class="comment_text"><p>That is a good example, but I would suggest not using the .live() method. It has been deprecated in JQuery. I would suggest using delegate() or the on() method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742232">4</a> by Raymond Camden
		posted on 7/25/2012 at 12:54 AM
		</div>
		<div class="comment_text"><p>I've had issues - at times - with .on in jQuery Mobile and page events. But to be fair, I didn't try terribly hard.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3117580523">
	<div>
		<img src="https://disqus.com/api/users/avatars/sarah_monksee.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3117580523">5</a> by Sarah
		posted on 1/24/2017 at 5:29 PM
		</div>
		<div class="comment_text"><p>great thank you-works perfect.. I did the following to stop the back button bringing you back to the login page in my app.</p><p>$(document).on("pagebeforechange", function(e, ob) {<br>    if (ob.toPage[0].id === "page-login" &amp;&amp; ob.options.fromPage) {<br>        console.log("blocking the back");<br>        e.preventDefault();<br>        history.go(1);<br>    }<br>});</p><p>However after adding this code I noticed that I could not change to the login page at all (for instance when the user logs out). <br>I solved it so thought i'd share in case anyone needs it.</p><p>So in my logOut() function I had to firstly remove the pagebeforechange listener on the document before "changing" to the login page, as follows<br>function logOut(){<br>     $(document).off('pagebeforechange');<br>     $("#container_wrapper").pagecontainer("change", "#page-login", {transition: 'none'});<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_3118077303">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3118077303">6</a> (In reply to <a href="#c_3117580523">#5</a>) by Raymond Camden
		posted on 1/24/2017 at 9:26 PM
		</div>
		<div class="comment_text"><p>Thank you for sharing this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3119132776">
	<div>
		<img src="https://disqus.com/api/users/avatars/sarah_monksee.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3119132776">7</a> (In reply to <a href="#c_3118077303">#6</a>) by Sarah
		posted on 1/25/2017 at 3:19 PM
		</div>
		<div class="comment_text"><p>you're welcome :)</p></div>
	</div>
</div>
		