
<div class="comment" id="c_1714084116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084116">1</a> by Miguel-F
		posted on 10/8/2014 at 10:45 PM
		</div>
		<div class="comment_text"><p>You might want to check the code snippets that you shared here.  They all seem exactly the same to me.  Maybe I need more caffeine...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084129">2</a> by Raymond Camden
		posted on 10/8/2014 at 10:46 PM
		</div>
		<div class="comment_text"><p>Nope, you are right! Fixing now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084132">3</a> by Raymond Camden
		posted on 10/8/2014 at 10:47 PM
		</div>
		<div class="comment_text"><p>Fixed!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084128">4</a> by Miguel-F
		posted on 10/8/2014 at 10:51 PM
		</div>
		<div class="comment_text"><p>Much better.  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084131">5</a> by Brian Lang
		posted on 10/8/2014 at 11:28 PM
		</div>
		<div class="comment_text"><p>How would you handle sessions for a site (like Facebook or Google) that has a really long session timeout - on the order of days, weeks or even months? It doesn't seem practical to use Coldfusion's sessions for this purpose.</p><p>I'm thinking that maybe if you stored an authentication token of some sort in the user's browser, that you would just create a new session based on their token information each time the user returns to your site.</p><p>Hopefully I'm making sense...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084130">6</a> by Raymond Camden
		posted on 10/8/2014 at 11:38 PM
		</div>
		<div class="comment_text"><p>You can use FB to authenticate the user, but that's done to IDENTIFY the person. Ie, "Facebook says this is Ray." On your CF side, you still use sessions, and they still timeout.</p><p>See my blog articles on OAuth w/ FB. I showed this. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084134">7</a> by Brian Lang
		posted on 10/9/2014 at 12:26 AM
		</div>
		<div class="comment_text"><p>I guess what I'm really asking is how do you handle the CF Session timeout when the user is still logged into whichever OAuth service you're using (Google, FB, LinkedIn, Twitter, etc...). <br>The OAuth service simply tells me who is (allegedly) using the computer. I still have to handle the CF Session timeout, say if they come back a week after their previous visit. The CF session will have long timed out but their OAuth service is still logged in.</p><p>Do you simply re-authenticate them against OAuth, and then re-apply permissions based on your app requirements? Seems to me that would be the best course of action but I would like your opinion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084133">8</a> by Raymond Camden
		posted on 10/9/2014 at 12:29 AM
		</div>
		<div class="comment_text"><p>I think you are overthinking it. :) When the user comes back after their session is dead and the OAuth process fires again, FB will still recognize them, it will still tell me (the server), "Yep, this is Ray!" and I mark the user as logged in on my session.</p><p>Basically it is like you are trusting FB to tell you who a person is, like your db query to check form.username and form.password and see if it returns one row. But *you* then set session.loggedin=true after that.</p><p>See my demos. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084135">9</a> by Brian Lang
		posted on 10/9/2014 at 12:31 AM
		</div>
		<div class="comment_text"><p>I'm eyeballs deep in modifying your Google OAuth demo for my purposes :)</p><p>I think I have what I need :)</p></div>
	</div>
</div>
		