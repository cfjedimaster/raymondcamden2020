
<div class="comment" id="c_1714083443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083443">1</a> by Michal Mocny
		posted on 7/22/2014 at 7:43 PM
		</div>
		<div class="comment_text"><p>One tip: I use --device flag to say "run this only on device, and do *not* start emulator as fallback automatically".  This way, I get a cordova launch error early on if device isn't properly attached / connected.</p><p>Launching the android emulator from scratch can take a while, so its otherwise a costly mistake to make!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083444">2</a> by Raymond Camden
		posted on 7/22/2014 at 8:53 PM
		</div>
		<div class="comment_text"><p>Oh nice, yeah, I can see that being a good idea.</p><p>Checkout Genymotion. I plan on never running the Android emulator again (except for the times I accidentally open it).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083445">3</a> by Gregory Besson
		posted on 7/23/2014 at 2:20 PM
		</div>
		<div class="comment_text"><p>Dear Raymond,</p><p>Thanks for the tip. What would have been great is the possibility to also choose the orientation of the device when I emulate.</p><p>Any clue ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083576">4</a> by Raymond Camden
		posted on 7/23/2014 at 4:34 PM
		</div>
		<div class="comment_text"><p>I don't believe so. I checked ios-sim, the CLI used by Cordova when it does emulation, and I don't see an option there. One may exist for Android. (But again, don't emulate Android. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083580">5</a> by Gregory Besson
		posted on 7/23/2014 at 5:41 PM
		</div>
		<div class="comment_text"><p>Thank you Raymond,</p><p>We've had the exact same conclusion. This is why we've created this project : Cordova Fuse (<a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FAdFabConnect%2FcordovaFuse%29%3A2Q6J9ZgXACXgIjEMSg4yDM39o0E&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/AdFabConnect/cordovaFuse)">https://github.com/AdFabCon...</a>.</p><p>It's based mainly on great work from Cordova fans and we've gathered the tips and ideas into this Fuse. <br>One of its features is the capability of dynamically change this variable for iOS during dev.</p><p>If you find time to review it, let me know if you think it could be interseting to go on this way.</p><p>Kind regards,<br>Greg</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083578">6</a> by Raymond Camden
		posted on 7/23/2014 at 7:50 PM
		</div>
		<div class="comment_text"><p>I'm still reading, but I have to be honest. After the "intro" in the readme, I have *no* idea what your project does. Like - seriously - it makes no sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083581">7</a> by gregory besson
		posted on 7/23/2014 at 9:51 PM
		</div>
		<div class="comment_text"><p>Thanks for your answer Raymond,</p><p>We'll try to be more descriptive in the readme. In 1 short sentence, this project aims to gather interesting hooks into one repository and make them work the same way (based on the same configuration file).</p><p>Anyway, it's maybe not that interesting... Sorry for that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083579">8</a> by Raymond Camden
		posted on 7/23/2014 at 9:53 PM
		</div>
		<div class="comment_text"><p>No no, that *is* interesting, and a good idea I think. Your docs just need some improvement I guess. ;) Please keep me informed on this project as you make progress.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083582">9</a> by Gregory Besson
		posted on 7/23/2014 at 9:59 PM
		</div>
		<div class="comment_text"><p>I have been afraid we were not on the right way.<br>I must admit that our doc is not very relevant. I'll review it.<br>And I stop polluting your blog and will keep you informed of our progress.<br>Thank you very much for your time Raymond.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083577">10</a> by Matheus Rocha
		posted on 7/28/2014 at 5:07 AM
		</div>
		<div class="comment_text"><p>Nice tip Raymond, if you allow me I want to publish a post about this too in portuguese for the readers of phonegap brazilian community. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083584">11</a> by Raymond Camden
		posted on 7/28/2014 at 6:08 AM
		</div>
		<div class="comment_text"><p>That's fine, just include a link back.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083583">12</a> by Matheus Rocha
		posted on 7/28/2014 at 9:45 PM
		</div>
		<div class="comment_text"><p>Sure, I will do that. Thanks Ray. I will send you the link later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083614">13</a> by Matheus Rocha
		posted on 7/30/2014 at 7:27 AM
		</div>
		<div class="comment_text"><p>Hey Ray, I posted on the blog I told you before and put the link for your page. Thanks :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083615">14</a> by Matheus Rocha
		posted on 7/30/2014 at 7:28 AM
		</div>
		<div class="comment_text"><p>I forgot, here is the link for the post: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.phonegapbrasil.com.br%2Fescolhendo-target-para-rodar-os-emuladores%2F%3AGbnSww5xy75HIKDdf7hnjlysNmk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.phonegapbrasil.com.br/escolhendo-target-para-rodar-os-emuladores/">http://www.phonegapbrasil.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2918938614">
	<div>
		<img src="https://disqus.com/api/users/avatars/eekayonline.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2918938614">15</a> by Edwin Klesman
		posted on 9/26/2016 at 12:28 PM
		</div>
		<div class="comment_text"><p>In the latest cordova ios version this has moved one dir further:</p><p>projectroot/platforms/ios/cordova/lib/run.js #line 443 to 45 ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2918993109">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2918993109">16</a> (In reply to <a href="#c_2918938614">#15</a>) by Raymond Camden
		posted on 9/26/2016 at 1:14 PM
		</div>
		<div class="comment_text"><p>Thanks!</p></div>
	</div>
</div>
		