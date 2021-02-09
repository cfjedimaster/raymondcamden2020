
<div class="comment" id="c_3561340954">
	<div>
		<img src="https://disqus.com/api/users/avatars/dchamps.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3561340954">1</a> by dchamps
		posted on 10/10/2017 at 10:40 PM
		</div>
		<div class="comment_text"><p>You could give an example of how to verify that the requests came from Facebook with x-hub-signature. I am having difficulties on this issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3561408650">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3561408650">2</a> (In reply to <a href="#c_3561340954">#1</a>) by Raymond Camden
		posted on 10/10/2017 at 11:38 PM
		</div>
		<div class="comment_text"><p>I thought I did. That's the first code block. Do you see it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3561439150">
	<div>
		<img src="https://disqus.com/api/users/avatars/dchamps.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3561439150">3</a> (In reply to <a href="#c_3561408650">#2</a>) by dchamps
		posted on 10/11/2017 at 12:04 AM
		</div>
		<div class="comment_text"><p>Nice and thank you very good post, but I meant verification with x-hub-signature with sha1, as recommended by facebook: <a href="https://disq.us/url?url=https%3A%2F%2Fdevelopers.facebook.com%2Fdocs%2Fmessenger-platform%2Fwebhook%3A6T_wzgp1Vs5WF8PML5ooLjDoMVg&amp;cuid=3321886" rel="nofollow noopener" title="https://developers.facebook.com/docs/messenger-platform/webhook">https://developers.facebook...</a></p><p>I've done something, but I'm having trouble getting the request body to do the match with the facebook secret app. So I have doubts if it is possible to get the body payload with the current openwhisk architecture.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3563856558">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3563856558">4</a> (In reply to <a href="#c_3561439150">#3</a>) by Raymond Camden
		posted on 10/12/2017 at 1:20 PM
		</div>
		<div class="comment_text"><p>It was my impression that it was required only for the initial call, the GET. I wasn't even aware of this - it must be optional.</p><p>As for OpenWhisk, remember that to get the *raw* HTTP request, you have to enable a flag. This is documented here: <a href="https://disq.us/url?url=https%3A%2F%2Fconsole.bluemix.net%2Fdocs%2Fopenwhisk%2Fopenwhisk_webactions.html%23raw-http-handling%3AWgmJ_pNRHJaqiX9aOknUjarDA3I&amp;cuid=3321886" rel="nofollow noopener" title="https://console.bluemix.net/docs/openwhisk/openwhisk_webactions.html#raw-http-handling">https://console.bluemix.net...</a></p><p>I had to do this for Alexa dev.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3575726507">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_3A3eLVXtX8.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3575726507">5</a> by Eliseu Silva
		posted on 10/20/2017 at 2:15 AM
		</div>
		<div class="comment_text"><p>Hi, response for token verify is not working. Is returned 'body: ' with  when is expected only challenge value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3575739709">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_3A3eLVXtX8.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3575739709">6</a> (In reply to <a href="#c_3575726507">#5</a>) by Eliseu Silva
		posted on 10/20/2017 at 2:28 AM
		</div>
		<div class="comment_text"><p>error:   Response does not match challenge, expected value="937759710", received="{\n \"body\": \"93775..."</p></div>
	</div>
</div>
		
<div class="comment" id="c_3575746828">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3575746828">7</a> (In reply to <a href="#c_3575739709">#6</a>) by Raymond Camden
		posted on 10/20/2017 at 2:35 AM
		</div>
		<div class="comment_text"><p>What URL did you use for your action? If it was something.json, remove the .json.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3575747442">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3575747442">8</a> (In reply to <a href="#c_3575746828">#7</a>) by Raymond Camden
		posted on 10/20/2017 at 2:36 AM
		</div>
		<div class="comment_text"><p>I just realized I had a typo in my blog. It says: Do strong add JSON to the end!</p><p>But it should be: Do NOT add JSON. Fixing now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3575749196">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_3A3eLVXtX8.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3575749196">9</a> (In reply to <a href="#c_3575746828">#7</a>) by Eliseu Silva
		posted on 10/20/2017 at 2:38 AM
		</div>
		<div class="comment_text"><p>Yes. I was using ".json" I removed it and it worked. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3575752572">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_3A3eLVXtX8.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3575752572">10</a> (In reply to <a href="#c_3575747442">#8</a>) by Eliseu Silva
		posted on 10/20/2017 at 2:41 AM
		</div>
		<div class="comment_text"><p>Perfect!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3575756776">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_3A3eLVXtX8.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3575756776">11</a> by Eliseu Silva
		posted on 10/20/2017 at 2:46 AM
		</div>
		<div class="comment_text"><p>In my code I made a change in the POST session to read only the last message. Because whenever there was a problem in the bot it would return the message history. I do not know if this could occur in production and so it looks like this: <br>let msg_events = args.entry [0] .messaging;<br>            let event = msg_events [msg_events.length - 1];<br>            if (event.message &amp;&amp; event.message.text) promises.push (process(event));</p></div>
	</div>
</div>
		
<div class="comment" id="c_3576200662">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3576200662">12</a> (In reply to <a href="#c_3575756776">#11</a>) by Raymond Camden
		posted on 10/20/2017 at 12:42 PM
		</div>
		<div class="comment_text"><p>That's a great tip, thanks Eliseu. I still haven't gone past this basic little demo, but it's still on my queue to build a nicer demo.</p></div>
	</div>
</div>
		