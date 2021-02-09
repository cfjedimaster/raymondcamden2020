
<div class="comment" id="c_4554278038">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4554278038">1</a> (In reply to <a href="#c_4554263551">#0</a>) by Raymond Camden
		posted on 7/26/2019 at 12:35 PM
		</div>
		<div class="comment_text"><p>I'll reply to your last point first - thanks. I noticed it too and literally was wrapping up the fix as your comment came in. It should be corrected in about 10 minutes.</p><p>1) If you have an API that can be called anonymously, then no, there is no real solution. You can check the referrer to see if it's from your host, but that can be spoofed. To be honest I wouldn't worry about it. If your data has commercial value, then it shouldn't be available via an anonymous API. If you are ok with me going to site and seeing the data without logging in, then you have to be ok with me using code to potentially scrap/use your data. You could use copyright rules if someone uses your data, but technically you're stuck. (afaik)</p><p>2) I've not noticed any real issue. My second example seems to take about 1/3rd of a second. I did *not* add code to do a "Loading" type indicator. Normally I would. But the speed feels about right to me. I know Netlify spends a *lot* of time on performance stuff, so if you are seeing something that seems too slow, I'd look at your code, and also see if the slow down is your serverless function to the API. Ie, time the different parts. It could also be slowdown on rendering of the HTML on the client side. Lots of places for there to be a culprit. ;)</p><p>3) "My next project" - this feels similar to your initial question. If you are exposing a way to *add* or *edit* data, then you really need to secure it someway. Netlify functions can be integrated with their Identity feature. I've only just begun looking at that, but I'd suggest taking a quick look.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4554368412">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_QETW8Pfo8V.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4554368412">2</a> (In reply to <a href="#c_4554278038">#1</a>) by Richard Herbert
		posted on 7/26/2019 at 1:59 PM
		</div>
		<div class="comment_text"><p>Yep, that code sample looks good now.</p><p>1) You're right of course. I just wanted to test against you that I hadn't missed some kool trick to stop spoofing.</p><p>2) I guess I should do some more digging and testing to see where the lag is happening. Once again I was just seeing if you felt it could be a drawback of this type of multi-hop solution.</p><p>3) Yes, I'm looking for the way to secure access to my API. I'm thinking that JSON Web Tokens (JWT) might be something worth researching as it's more generic and not tied into the Netlify ecosystem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4554375615">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4554375615">3</a> (In reply to <a href="#c_4554368412">#2</a>) by Raymond Camden
		posted on 7/26/2019 at 2:05 PM
		</div>
		<div class="comment_text"><p>2) Yeah I'd focus on checking each 'leg' to see if one stands out. Also, if it's the last leg (from serverless to remote API), you can look at caching locally (local being the serverless provider).</p></div>
	</div>
</div>
		
<div class="comment" id="c_4666294018">
	<div>
		<img src="https://disqus.com/api/users/avatars/dizid.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4666294018">4</a> by Marc de Ruyter
		posted on 10/26/2019 at 6:25 AM
		</div>
		<div class="comment_text"><p>On my  Vue / Firstore URL shortener i am showing an (on-the-fly generated) preview screenshot before someone 'accidentally' ends up in a big erotic casino in an unnamed cold country. <br>I started with apiflash screenshot api but ran into serious CORS problems. <br>Changed approach to an api proxy serverless function on Netlify, but...they have a 10 second max running time for functions. Sometimes taking a screenshot can take &gt; 10s probably depending on the speed of the site in question. I am hitting the thum api from the vue client now, still have to find a proper solution. It is not a big deal though, the URL shortener is for portfolio and learning purposes only, not promoted at all and gets only 1 hit a day or so - mainly urls for said casino's etc :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4666509346">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4666509346">5</a> (In reply to <a href="#c_4666294018">#4</a>) by Raymond Camden
		posted on 10/26/2019 at 1:45 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing your use case!</p></div>
	</div>
</div>
		