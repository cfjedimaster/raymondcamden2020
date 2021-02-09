
<div class="comment" id="c_3274540247">
	<div>
		<img src="https://disqus.com/api/users/avatars/simevidas.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3274540247">1</a> by Šime Vidas
		posted on 4/26/2017 at 2:25 AM
		</div>
		<div class="comment_text"><p>I tried the demo on my Moto G4 and got reminded that shaking the phone toggles the flashlight, by default :) Consider logging into the page instead of the console, so that folks can easily check if it works on their phones.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3274975417">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3274975417">2</a> (In reply to <a href="#c_3274540247">#1</a>) by Raymond Camden
		posted on 4/26/2017 at 11:28 AM
		</div>
		<div class="comment_text"><p>Heh - that's actually kind of a cool feature.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3275982021">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_uC8iW86l6S.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3275982021">3</a> by Gary F
		posted on 4/26/2017 at 9:11 PM
		</div>
		<div class="comment_text"><p>Presumably the web page must be in the foreground for the event to trigger? I know this is only an example, but a shake is really useful when you can't easily access a button. e.g. a panic alarm, a trigger to send a pre-written message, etc. In such cases the browser is unlikely to be active and the phone probably on standby. Or have browsers now got the ability to detect events while in a background or standby state? Just wondering.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3275986120">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3275986120">4</a> (In reply to <a href="#c_3275982021">#3</a>) by Raymond Camden
		posted on 4/26/2017 at 9:14 PM
		</div>
		<div class="comment_text"><p>I'm honestly not sure. Obviously on desktop the events would still fire. I'd need to connect my device and check. One moment while I try.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3275997579">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3275997579">5</a> (In reply to <a href="#c_3275986120">#4</a>) by Raymond Camden
		posted on 4/26/2017 at 9:22 PM
		</div>
		<div class="comment_text"><p>In Android, as I expected, when the web page wasn't focused, it does not report. I think this is fair for a web thing though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3276237177">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_uC8iW86l6S.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3276237177">6</a> (In reply to <a href="#c_3275997579">#5</a>) by Gary F
		posted on 4/27/2017 at 12:04 AM
		</div>
		<div class="comment_text"><p>Thanks for confirming that, Ray. Hmm, what if motion is used in a Cordova app. Same result because it's a browser wrapper?. No need to check, I will get on your nerves! I'm assuming it won't work either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3277072926">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3277072926">7</a> (In reply to <a href="#c_3276237177">#6</a>) by Raymond Camden
		posted on 4/27/2017 at 2:38 PM
		</div>
		<div class="comment_text"><p>There is a background process plugin for Cordova that _may_ allow you to notice this, and then you can respond to it. Maybe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3277073849">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3277073849">8</a> (In reply to <a href="#c_3277072926">#7</a>) by Raymond Camden
		posted on 4/27/2017 at 2:39 PM
		</div>
		<div class="comment_text"><p>But obviously, before you even go that route, test to see if the event fires in a Cordova app in the background. I don't think it will - but test.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3288283059">
	<div>
		<img src="https://disqus.com/api/users/avatars/stephencunliffe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3288283059">9</a> by Stephen Cunliffe
		posted on 5/4/2017 at 12:40 PM
		</div>
		<div class="comment_text"><p>Is this line a typo? "lastY = acc.z;" inside your motion function? e.g. shouldn't it be lastZ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3288390121">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3288390121">10</a> (In reply to <a href="#c_3288283059">#9</a>) by Raymond Camden
		posted on 5/4/2017 at 2:00 PM
		</div>
		<div class="comment_text"><p>Yep, thanks, fixed here and in source. (The fix here will take about five minutes to show up.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3289790518">
	<div>
		<img src="https://disqus.com/api/users/avatars/awebdeveloper.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3289790518">11</a> by awebdeveloper
		posted on 5/5/2017 at 10:21 AM
		</div>
		<div class="comment_text"><p>did you write that article for TDN</p></div>
	</div>
</div>
		
<div class="comment" id="c_3289860508">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3289860508">12</a> (In reply to <a href="#c_3289790518">#11</a>) by Raymond Camden
		posted on 5/5/2017 at 11:41 AM
		</div>
		<div class="comment_text"><p>Yes - it should be live Monday.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3290052203">
	<div>
		<img src="https://disqus.com/api/users/avatars/awebdeveloper.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3290052203">13</a> (In reply to <a href="#c_3289860508">#12</a>) by awebdeveloper
		posted on 5/5/2017 at 1:59 PM
		</div>
		<div class="comment_text"><p>Can't wait to read it</p></div>
	</div>
</div>
		