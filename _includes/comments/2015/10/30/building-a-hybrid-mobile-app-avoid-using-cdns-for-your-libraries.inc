
<div class="comment" id="c_2335016445">
	<div>
		<img src="https://disqus.com/api/users/avatars/rogertubby.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2335016445">1</a> by roger tubby
		posted on 10/30/2015 at 4:57 PM
		</div>
		<div class="comment_text"><p>These external libraries should only be used for initial testing, not in production. For the reason you state but also because the CDNs (or external resource) can disappear or be unavailable; but also because of the overhead of going to multiple sources to pull in JS libraries (and other stuff).</p><p>I use the excellent uMatrix blocker to track requests made by web pages and selectively enable the ones I trust. It is not unusual on heavy media sites to see 20-40 separate libraries being pulled in. Even worse is the use of dynamic library loading where there are continued new libraries added to the mix as the page is being built.</p><p>The best sites seem to have almost all resources coming from their own domains (and I trust them more.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2335176217">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2335176217">2</a> (In reply to <a href="#c_2335016445">#1</a>) by Raymond Camden
		posted on 10/30/2015 at 6:21 PM
		</div>
		<div class="comment_text"><p>I'm not sure I agree with you that CDNs shouldn't be used in production. I think the benefit of them possibly being cached on the user's machine already is helpful, and a good CDN can return a resource that is closer to the user geographically. Yes, a CDN can go down, but I think the benefits outweigh that.</p><p>There's going to be trade offs no matter what you do. :\</p></div>
	</div>
</div>
		
<div class="comment" id="c_2336858568">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_79wF9K2oGE.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2336858568">3</a> by jcesar
		posted on 10/31/2015 at 8:03 PM
		</div>
		<div class="comment_text"><p>Using a CDN without http on the url will fail on cordova apps, it will try to load file://cdnurl.<br>Using a CDN even with http will fail if you don't configure the whitelist/CSP/ATS properly.<br>And even with all this configured properly, the load will be slower as you have to dowload the code, at least the first time.</p><p>So, don't use CDNs on hybrid apps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2338220420">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2338220420">4</a> (In reply to <a href="#c_2336858568">#3</a>) by Raymond Camden
		posted on 11/1/2015 at 11:03 PM
		</div>
		<div class="comment_text"><p>Good points. I ran into #1 about a week or so ago and had meant to blog it but never got around to it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2339140297">
	<div>
		<img src="https://disqus.com/api/users/avatars/phillipsenn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2339140297">5</a> by Phillip Senn
		posted on 11/2/2015 at 4:51 PM
		</div>
		<div class="comment_text"><p>Wait: can't you put //<a href="http://disq.us/url?url=http%3A%2F%2Fcode.angularjs.org%2F1.4.3%2Fangular.js%3AnBJHndXHN0y1oZThbWbddHU2rZ4&amp;cuid=3321886" rel="nofollow noopener" title="code.angularjs.org/1.4.3/angular.js">code.angularjs.org/1.4.3/an...</a> inside your cache.manifest file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2339144820">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2339144820">6</a> (In reply to <a href="#c_2339140297">#5</a>) by Raymond Camden
		posted on 11/2/2015 at 4:54 PM
		</div>
		<div class="comment_text"><p>Are you joking or serious? (I don't mean that offensively - just curious.)</p></div>
	</div>
</div>
		