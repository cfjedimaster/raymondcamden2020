
<div class="comment" id="c_1713743059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743059">1</a> by Andy
		posted on 6/7/2013 at 8:49 PM
		</div>
		<div class="comment_text"><p>I'm making a chat program and I added in userType and status when subscribing to the chat so on the admin side, I can list out the admins and users by calling wsGetSubscribers('chat') which show my custom fields. I'm planning on using the status as an online/offline flag for admins. This flag is used on the client end for whether or not to show the "chat is available" based on if any admins are "online". Meanwhile the admin who are offline are still able to chat to existing chats or other admins. How do I update this field in javascript/jQuery when a button is clicked?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743060">2</a> by Raymond Camden
		posted on 6/8/2013 at 7:12 AM
		</div>
		<div class="comment_text"><p>I just did a test, and in beforePublish, I was able to modify subscriberinfo.connectioninfo with custom data. So you could do a publish on a client side that contains a message you pick up/recognize in beforePublish and use to set flags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743055">3</a> by Andy
		posted on 6/13/2013 at 12:59 AM
		</div>
		<div class="comment_text"><p>Thanks Ray. I'm using CFWheels and for some reason it won't reach the listener cfc that I define in the cfclistener attribute when creating the wschannels. I think it's a path issue. Anyway I posted some questions about that on CFWheels forums and hopefully that'll get resolved. In the meantime I just updated the ChannelListener.cfc and seems like the beforeSendMessage is the one I want where it passes in the subscriberInfo and not the publisherInfo but thanks for pointing me in the right direction. Also I was wondering if you know if the cfwebsocket can be used cross domain and cross server. Currently my chat is on one server and one domain but like other live help chat systems out there, I want to be able to place it on other domains/servers while the admin agents just log into a central domain to chat with users. Do you know if this is possible? If so, do you have any examples on how it can be implemented?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743058">4</a> by Raymond Camden
		posted on 6/13/2013 at 1:05 AM
		</div>
		<div class="comment_text"><p>I don't know if you can use websockets cross domain. I would imagine it follows the same rules for HTTP for security reasons.</p><p>Of course, it may be possible in general, but NOT possible w/ CF's implementation. I do not believe cfwebsocket lets you specify another server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743063">5</a> by Andy
		posted on 6/13/2013 at 8:39 PM
		</div>
		<div class="comment_text"><p>Interesting, then do you know how other live help chat providers do this? They have the live chat on various client websites and a single site for the agent to log on and chat. I'm trying to accomplish the same thing except in CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743064">6</a> by Raymond Camden
		posted on 6/13/2013 at 8:46 PM
		</div>
		<div class="comment_text"><p>Are they used WebSockets? THey could be using AJAX polls with CORS or JSON/P, or Flash even.</p></div>
	</div>
</div>
		