
<div class="comment" id="c_1714084159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084159">1</a> by Adam Tuttle
		posted on 10/10/2014 at 7:46 PM
		</div>
		<div class="comment_text"><p>Also involved: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F20638932%2Funable-to-load-image-when-selected-from-the-gallery-on-android-4-4-kitkat-usin%3AGeRgzXp6Rq4_NxJ8ARMesBPyifg&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/20638932/unable-to-load-image-when-selected-from-the-gallery-on-android-4-4-kitkat-usin">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084157">2</a> by Raymond Camden
		posted on 10/10/2014 at 7:49 PM
		</div>
		<div class="comment_text"><p>Weird - my Android VM is 4.4.2 and it worked fine once I fixed the Angular issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084160">3</a> by Raymond Camden
		posted on 10/11/2014 at 5:13 PM
		</div>
		<div class="comment_text"><p>As an FYI, you also need to add file to the list of approved schemes if you are using the camera on an Android device. Pictures selected from the camera will use file, not content.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084158">4</a> by Ankit Shandilya
		posted on 10/16/2014 at 2:13 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I've used the Google Analytics Plugin from GitHub (<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphonegap-build%2FGAPlugin%2F%29%3AT4JJ_QZHxoTMOreR2yh9ri3qfK0&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/phonegap-build/GAPlugin/)">https://github.com/phonegap...</a> to get Google Analytics to<br>work for PhoneGap. As far as I know, I installed and configured everything<br>correctly. However, I don't see any data in Google Analytics.</p><p>This is what I've done:</p><p>- created a 'HelloPhoneGap' project in Eclipse<br>- downloaded the GAPlugin and installed in 'manually' (I did not use<br>plugman): I copied GAPlugin.js, <a href="http://disq.us/url?url=http%3A%2F%2FGAPlygin.java%3AzXXEHYIieJ9d_7CHKC4i5PYNLg4&amp;cuid=3321886" rel="nofollow noopener" title="GAPlygin.java">GAPlygin.java</a>, libGoogleAnalyticsV2.jar,<br>index.html from the downloaded GAPlugin into my HelloPhoneGap project. I<br>also added the GAPlugin in the config.xml<br>- copied my own GA Account (UA-12345678-1) into the index.html<br>- run the project in an emulator. Results:<br>- in onDeviceReady it executes gaPlugin = window.plugins.gaPlugin<br>- in onDeviceReady itgives a notification asking for permission<br>- in LogCat: Need to call intilize() and be in fallback mode to start<br>diuspatch<br>- in LogCat: Thread[]: Service unavailable (code=1), will retry.<br>- in LogCat: Thread[]: No campaign data found<br>- when I click Track Event, it executes gaPlugin.trackEvent and the<br>logging from the success callback appears in LogCat: trackEvent - category<br>= Button; etc<br>- I checked Google Analytics: nothing ;- (</p><p>Did I made a mistake somewhere? Or is this plugin only suitable for<br>PhoneGap Build?</p><p>Regards, Ankit</p><p>PS. I'm using PhoneGap 2.5, on Eclipse, on Windows 7.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084163">5</a> by Raymond Camden
		posted on 10/16/2014 at 2:41 PM
		</div>
		<div class="comment_text"><p>@Ankit: This comment has absolutely nothing to do with this blog post. For general questions, I suggest you use the PhoneGap Google group, or Stack Overflow. You can email me these types of things too, but I'd hit the Google group at least first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084164">6</a> by willy
		posted on 10/17/2014 at 1:21 PM
		</div>
		<div class="comment_text"><p>hey guys, i also use cordova, angularjs and the camera plugin.<br>and when i choose a picture over camera i use the base64 data with bloburl of the file to display the image inline.<br>one think of the new android filesystem what kitkat bring on is very annoying.<br>why i can't get the real filename of choosen file?<br>my coworker found out that the file plugin makes a blob of choosen file and lost the filename,<br>and in the fileapi every file you choose is called content. <br>has anyone a solution therefor?<br>cheers dutscher</p></div>
	</div>
</div>
		