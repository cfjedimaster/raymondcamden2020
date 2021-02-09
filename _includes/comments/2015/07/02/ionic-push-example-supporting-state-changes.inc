
<div class="comment" id="c_2229915797">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2229915797">1</a> (In reply to <a href="#c_2229863710">#0</a>) by Raymond Camden
		posted on 9/1/2015 at 2:33 PM
		</div>
		<div class="comment_text"><p>In my case I'm not, so it uses a default value. If you look at this doc, <a href="http://disq.us/url?url=http%3A%2F%2Fdocs.ionic.io%2Fdocs%2Fpush-from-scratch%3AMarxMAa9eUJtkUAbipgESwBYYCk&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.ionic.io/docs/push-from-scratch">http://docs.ionic.io/docs/p...</a>, they have a better demonstration of working with the User stuff. My post was from an earlier version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2267001814">
	<div>
		<img src="https://disqus.com/api/users/avatars/ifelere_oyetola.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2267001814">2</a> by ifelere Oyetola
		posted on 9/22/2015 at 11:04 AM
		</div>
		<div class="comment_text"><p>This has been so important to me! Thanks for sharing it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2283076352">
	<div>
		<img src="https://disqus.com/api/users/avatars/hugh_hou.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2283076352">3</a> by Hugh Hou
		posted on 10/1/2015 at 1:37 AM
		</div>
		<div class="comment_text"><p>I still can not get this to work by following your example...I have stateParam in my state tho. I wrote a stackoverflow question here: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F32878060%2Fionic-push-notification-click-go-to-special-state-in-my-app%3ATyvXOyB-dCPD8VgMDdUbULKVYYo&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/32878060/ionic-push-notification-click-go-to-special-state-in-my-app">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2284871972">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2284871972">4</a> (In reply to <a href="#c_2283076352">#3</a>) by Raymond Camden
		posted on 10/2/2015 at 1:31 AM
		</div>
		<div class="comment_text"><p>It looks like you got it working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2465446900">
	<div>
		<img src="https://disqus.com/api/users/avatars/lukehartman.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2465446900">5</a> by Luke Hartman
		posted on 1/18/2016 at 11:33 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>Thanks for this post. I got the code to work in my app but was wondering if the app can handle push notifications without user interaction. My device is receiving push notifications and will open to a state passed in the payload, but I'd like the handler to trigger whether the user interacts with the notification or not (specifically saving the notification object to localstorage and incrementing the badge number).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2466164583">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2466164583">6</a> (In reply to <a href="#c_2465446900">#5</a>) by Raymond Camden
		posted on 1/19/2016 at 11:56 AM
		</div>
		<div class="comment_text"><p>Hmm. So basically - I get a notification. I do NOT click on it. I open the app. The app acts as if I did.</p><p>As a user, I wouldn't like that normally. ;)</p><p>But no - I don't think you have *automatic* support for that, but you could build this manually.</p><p>So imagine the notification is "New Email". If you have a REST API that returns true/false based on that, you can call that on startup and then respond accordingly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2466236627">
	<div>
		<img src="https://disqus.com/api/users/avatars/lukehartman.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2466236627">7</a> (In reply to <a href="#c_2466164583">#6</a>) by Luke Hartman
		posted on 1/19/2016 at 1:07 PM
		</div>
		<div class="comment_text"><p>Gotcha. That makes sense. Thanks for the suggestion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2746342209">
	<div>
		<img src="https://disqus.com/api/users/avatars/magicbjorn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2746342209">8</a> by Bjørn Broer
		posted on 6/23/2016 at 2:13 PM
		</div>
		<div class="comment_text"><p>I want to thank you very, very much for this guide! I have been searching the official Ionic documents to lighten up this conundrum, so far unsuccessful. Thanks to you, I understood how to add custom payload, including how to use this to navigate the user to a certain page.</p><p>Thanks a thousand times!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2746378701">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2746378701">9</a> (In reply to <a href="#c_2746342209">#8</a>) by Raymond Camden
		posted on 6/23/2016 at 2:32 PM
		</div>
		<div class="comment_text"><p>You are most welcome. As a warning, the Ionic Services platform has changed quite a bit since I published this, so I don't want to promise it will work as is. Use with caution!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2746432041">
	<div>
		<img src="https://disqus.com/api/users/avatars/magicbjorn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2746432041">10</a> (In reply to <a href="#c_2746378701">#9</a>) by Bjørn Broer
		posted on 6/23/2016 at 2:55 PM
		</div>
		<div class="comment_text"><p>It still works the way you wrote it. It will probably change in the upcoming update though, when Ionic goes out of it's Alpha/Beta stage.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2788570847">
	<div>
		<img src="https://disqus.com/api/users/avatars/akashkabra.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2788570847">11</a> by akash kabra
		posted on 7/17/2016 at 10:53 PM
		</div>
		<div class="comment_text"><p>Hello thanks for your tutorial ...!! Can you help in regarding action button in ionic push notification</p></div>
	</div>
</div>
		
<div class="comment" id="c_2789260439">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2789260439">12</a> (In reply to <a href="#c_2788570847">#11</a>) by Raymond Camden
		posted on 7/18/2016 at 12:12 PM
		</div>
		<div class="comment_text"><p>Do you mean in the notification UI?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2790042426">
	<div>
		<img src="https://disqus.com/api/users/avatars/akashkabra.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2790042426">13</a> (In reply to <a href="#c_2789260439">#12</a>) by akash kabra
		posted on 7/18/2016 at 8:14 PM
		</div>
		<div class="comment_text"><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphonegap%2Fphonegap-plugin-push%2Fblob%2Fmaster%2Fdocs%2FPAYLOAD.md%23action-buttons%3A8rYiYLolwgfE4QxaTUKfd_XjeTc&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/phonegap/phonegap-plugin-push/blob/master/docs/PAYLOAD.md#action-buttons">https://github.com/phonegap...</a></p><p>Please see above your , where they have gave the example.</p><p>But i am confused where should i add "actions" in my notification variable and how to send it to the ionic push server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2790093854">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2790093854">14</a> (In reply to <a href="#c_2790042426">#13</a>) by Raymond Camden
		posted on 7/18/2016 at 8:41 PM
		</div>
		<div class="comment_text"><p>It would be done via the REST call to the Ionic server. Look in here: <a href="http://disq.us/url?url=http%3A%2F%2Fdocs.ionic.io%2Fdocs%2Fpush-sending-push%3Aw2e7JavMDV3DgeA37hV3mDCxpJM&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.ionic.io/docs/push-sending-push">http://docs.ionic.io/docs/p...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2790107157">
	<div>
		<img src="https://disqus.com/api/users/avatars/akashkabra.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2790107157">15</a> (In reply to <a href="#c_2790093854">#14</a>) by akash kabra
		posted on 7/18/2016 at 8:49 PM
		</div>
		<div class="comment_text"><p>Thanks. as the tutorial says</p><p>{<br>  "notification": {<br>    "title": "Hi",<br>    "message": "Hello world!",<br>    "android": {<br>      "data": {<br>        "image": // url<br>      }<br>    }<br>  }<br>}</p><p>So should i replace the "data" tag with "Actions":</p><p>Please let me know if i am correct.</p><p>IF you can send me one of the example with action tag it will be great</p></div>
	</div>
</div>
		
<div class="comment" id="c_2790150493">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2790150493">16</a> (In reply to <a href="#c_2790107157">#15</a>) by Raymond Camden
		posted on 7/18/2016 at 9:14 PM
		</div>
		<div class="comment_text"><p>I think it goes "under" data. You should check the docs of the Push plugin as I think it is documented there, not at Ionic. Worse comes to worse, ask on the Ionic forums.</p><p>Yes - I'm punting now. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2790159960">
	<div>
		<img src="https://disqus.com/api/users/avatars/akashkabra.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2790159960">17</a> (In reply to <a href="#c_2790150493">#16</a>) by akash kabra
		posted on 7/18/2016 at 9:20 PM
		</div>
		<div class="comment_text"><p>yes i gone through documentation.<br>I will try and let you know what is the outcome.<br>and while going through few links i saw many post regarding the "callback:" tag in actions facing issue .</p><p>Thanks for helping .. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3053180680">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_6idE2E46hU.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3053180680">18</a> by Jack
		posted on 12/15/2016 at 10:07 AM
		</div>
		<div class="comment_text"><p>So here you have used CURL , how to do this same thing with FIREBASE Cloud Messaging .</p></div>
	</div>
</div>
		
<div class="comment" id="c_3053318468">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3053318468">19</a> (In reply to <a href="#c_3053180680">#18</a>) by Raymond Camden
		posted on 12/15/2016 at 12:55 PM
		</div>
		<div class="comment_text"><p>I used Curl to fire off an API request to create a push - but I was using Ionic's Push service to actually *do* the Push. Firebase Cloud Messaging would be another service. How you use it would be in their own docs, and you could use that instead of Ionic's of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3241108220">
	<div>
		<img src="https://disqus.com/api/users/avatars/valmyroi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3241108220">20</a> by valmy roi
		posted on 4/5/2017 at 2:55 PM
		</div>
		<div class="comment_text"><p>How can i increase the badge number without forcing the user to click on the notification?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3241205518">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3241205518">21</a> (In reply to <a href="#c_3241108220">#20</a>) by Raymond Camden
		posted on 4/5/2017 at 3:47 PM
		</div>
		<div class="comment_text"><p>Are you saying that's required? I didn't think it was.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3241221716">
	<div>
		<img src="https://disqus.com/api/users/avatars/valmyroi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3241221716">22</a> (In reply to <a href="#c_3241205518">#21</a>) by valmy roi
		posted on 4/5/2017 at 3:54 PM
		</div>
		<div class="comment_text"><p>Actually in my project i'm using <a href="http://disq.us/url?url=http%3A%2F%2Fionic.io%3AnIhE5HSresQEFzdJvkZsybh6_Yg&amp;cuid=3321886" rel="nofollow noopener" title="ionic.io">ionic.io</a> for push notifictions and cordova badge plugin. What i want to do is to increse the icon badge number as the notification arrives on the phone (ios and android). Unfurtunately, all what i'm capable to do now is to increase the badge number when the user clicks on the notification message cause i don't know if there is an event or something like that to manage when the notification arrives. Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_3241230191">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3241230191">23</a> (In reply to <a href="#c_3241221716">#22</a>) by Raymond Camden
		posted on 4/5/2017 at 3:57 PM
		</div>
		<div class="comment_text"><p>That I'm not sure of - sorry.</p></div>
	</div>
</div>
		