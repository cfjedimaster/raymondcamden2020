
<div class="comment" id="c_1714080437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080437">1</a> by Martin
		posted on 11/4/2013 at 1:06 PM
		</div>
		<div class="comment_text"><p>This is why I'll stick with 2.9 for now. PG 3.x is based on a good idea but not in a productively usable state (yet). Most of the docs are outdated or spread across a dozen sites. 2.x was easy to use for people with less mobile background but with 3.x it's harder to even start.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080439">2</a> by Aric Brown
		posted on 1/3/2014 at 2:45 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>Do you know if the PhoneGap plugin for location is using the latest APIs for Android and iOS? I am specifically interested in the low power usage of Androids "Fused Location Provider" and the ability to detect "Activity Monitoring" such as walking, biking, driving, etc. I have not been able to find any documentation to indicate that the plugins where updated to include these.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080441">3</a> by Raymond Camden
		posted on 1/3/2014 at 2:59 AM
		</div>
		<div class="comment_text"><p>As far as I know, no to all of what you said. I checked the plugin registry and didn't see anything related to it. You may want to ask on the Google Group to see if anyone worked on such a plugin and maybe never got around to publishing it. If you find anything at all, I'd love to hear it.</p><p>These are the Android docs for the activity monitoring stuff: <a href="http://disq.us/url?url=http%3A%2F%2Fdeveloper.android.com%2Ftraining%2Flocation%2Factivity-recognition.html%3ABFH4YWZWtXagVeu9XgKxRhfwyFI&amp;cuid=3321886" rel="nofollow noopener" title="http://developer.android.com/training/location/activity-recognition.html">http://developer.android.co...</a></p><p>It definitely seems like this could be handled in PG.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080442">4</a> by Ryan Murphy
		posted on 1/10/2014 at 2:21 AM
		</div>
		<div class="comment_text"><p>Thanks for the hint to the plugin not being installed. <br>My case was a bit different since I had run the 'plugin add' command.</p><p>But I also needed to run 'cordova prepare' or 'cordova build'. <br>Otherwise the plugin and cordova_plugins.js don't get copied from the platforms/{platform}/.staging/www folder.</p><p>I don't remember needing to run that on CLI version 3.2, but maybe I did it inadvertently. <br>I'm on 3.3.1 now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080440">5</a> by Raymond Camden
		posted on 1/10/2014 at 2:36 AM
		</div>
		<div class="comment_text"><p>Um, weird, how did you test w/o doing prepare or build in the first place? Afaik, if you do "cordova emulate" or run, it does a prepare/build for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080443">6</a> by Ryan Murphy
		posted on 1/14/2014 at 4:34 AM
		</div>
		<div class="comment_text"><p>I always run through XCode, not with cordova emulate or run. <br>I have a symlink set up in the ios folder (and same for android) so that my shared web app is always in sync with my platform folder. <br>I know that's not how Cordova 3.0 CLI wants me to do things, and I run the risk of wiping out my www folder by running prepare, etc.. I've been resisting the change to move to CLI completely but I'll probably have to start to avoid the risk.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1752893823">
	<div>
		<img src="https://disqus.com/api/users/avatars/francescoferigo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1752893823">7</a> by Francesco Ferigo
		posted on 12/21/2014 at 3:45 PM
		</div>
		<div class="comment_text"><p>I did the same mistake ;-)</p></div>
	</div>
</div>
		