
<div class="comment" id="c_1713734952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734952">1</a> by Kevin Schmidt
		posted on 9/3/2011 at 1:59 AM
		</div>
		<div class="comment_text"><p>BlazeDS?  What's that? You should have used ADEP Data Services! :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734956">2</a> by Raymond Camden
		posted on 9/3/2011 at 6:53 AM
		</div>
		<div class="comment_text"><p>I know I know. :) It's not my fault BlazeDS ships with CF. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734963">3</a> by Michael Seid
		posted on 9/6/2011 at 6:30 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>By any chance have you tried to subscribe with a client id(like consumer.subscribe(id)).  I am working on a web app and am using BlazeDS for longpolling.  Every time I try to subscribe, I get a DuplicateSessionError.  <br>I tracked down the point of error, and found it to be when I subscribe the consumer.  Looking deeper, I found that when the flex app subscribes, it sends a clientId of null, which(I think) creates the duplicate session.  There is an argument of clientId(defualts to null) in the function subscribe, but I tried entering what I think was the client ID and get a out of channels error.<br>Here is the general workflow of the application: sign in through RemoteObject, then subscribe the consumer with the appropriate subtopic.  In your app the subscribe comes first, which creates the clientId for the rest of your session.  There must be a way to subscribe with a specified session.</p><p>Let me know if you have any ideas on a way to approach this.  Thanks for the help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734959">4</a> by Raymond Camden
		posted on 9/7/2011 at 1:09 AM
		</div>
		<div class="comment_text"><p>No sorry I have not seen this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734960">5</a> by Michael Seid
		posted on 9/8/2011 at 4:28 AM
		</div>
		<div class="comment_text"><p>So just as an update.  I figured it out.  When I first set up the connection of Flex and BlazeDS, I used the project setting &gt; Flex Server to set the location of my Server Configuration.  This added the flag to the  compiler, and I figured it would only use the setting on compile time. But in fact some of it is used at runtime as well.</p><p>When I changed the location of the server when I deployed to my production machine, it couldn't find the .xml files.  And that caused the channelset to be set as null.  It connected at without it being set.  Anyways, I added the channel set like the example above and everything seems to be working.</p><p>Thanks for the example above.  Compared everything and it helped me find my answer.  Cheers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734958">6</a> by Raymond Camden
		posted on 9/8/2011 at 4:40 AM
		</div>
		<div class="comment_text"><p>Darn good find there - thanks for posting back.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734962">7</a> by Tomas Sancio
		posted on 10/19/2011 at 4:10 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>Sorry for asking this here, but is there a place I can look for answers regarding a CF to AIR connection error:</p><p>Send Failed<br>Channel.Connect.Failed error<br>NetConnection.Call.Failed: HTTP: Status 500<br>url: '[url]/flex2gateway/'</p><p>It only happens on occasion &amp; the info I've found on the web leads to nowhere.</p><p>Many thanks for any clue,</p><p>Tomas</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734965">8</a> by Raymond Camden
		posted on 10/19/2011 at 5:53 AM
		</div>
		<div class="comment_text"><p>All I can recommend is checking the logs. 500 implies an error of some sort and something should be logged.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734957">9</a> by Tomas Sancio
		posted on 10/19/2011 at 4:39 PM
		</div>
		<div class="comment_text"><p>Hey, thanks. That has given me a new path to work in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734961">10</a> by Alexander Smith
		posted on 3/22/2013 at 10:20 PM
		</div>
		<div class="comment_text"><p>You know Raymond if you don't post the xml config files it"s of no use but your own. Seems nice but as you said setting up a messaging channel is no as easy as it sounds however it is not all that complicated neither the logic is to diagram the channels the names get confusing because it is always a combination my,cf,amf and polling spread across the 4 messaging,services,proxy and remotting config files. A few lines of code will get it working. Nice article but without the config files it's kinda  useless really unless you want to spend one afternoon on this witch defeats the purpose of putting it out there...Thanks anyway</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734964">11</a> by Raymond Camden
		posted on 3/22/2013 at 10:32 PM
		</div>
		<div class="comment_text"><p>Sorry to disappoint you, Alexander. This post is almost 2 years old, so I don't exactly remember everything about it, but I *believe* I used the default settings for Blaze inside of CF. In other words, I don't think I edited any XML files. So be my guest to try it w/ the defaults and let us know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734966">12</a> by Jason Dean
		posted on 3/22/2013 at 10:47 PM
		</div>
		<div class="comment_text"><p>Alexander, it is nice that you tried to comment, but without proper spelling, grammar, and punctuation, it's really kind of useless; because I cannot understand a thing you meant, which defeats the purpose of putting it out there.  Thanks anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734967">13</a> by Alexander Smith
		posted on 3/23/2013 at 12:39 AM
		</div>
		<div class="comment_text"><p>@Jason Nice pretty funny. XD</p><p>Don`t worry not offended I have a sense of humor...</p><p>@Raymond   Let me ask you, do you do consulting work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734969">14</a> by Raymond Camden
		posted on 3/23/2013 at 1:21 AM
		</div>
		<div class="comment_text"><p>I do a bit of side work, but I've got a full time gig with Adobe. I definitely don't do any Flex work though.</p></div>
	</div>
</div>
		