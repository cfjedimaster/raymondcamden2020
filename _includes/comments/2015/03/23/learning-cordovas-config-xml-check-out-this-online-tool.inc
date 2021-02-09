
<div class="comment" id="c_1930808284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1930808284">1</a> by Atte
		posted on 3/27/2015 at 6:57 AM
		</div>
		<div class="comment_text"><p>I succesfully build the app for ios in phonegap. But when I try to send the app to itunes (with Application Loader 3.0 on a mac) I get this two errors. Does anyone know what I have done wrong?</p><p>ERROR ITMS-90125: "The binary is invalid. The encryption info in the LC_ENCRYPTION_INFO load command is either missing or invalid, or the binary is already encrypted. This binary does not seem to have been built with Apple's linker."</p><p>ERROR ITMS-90208: "Invalid Bundle. The bundle <a href="http://disq.us/url?url=http%3A%2F%2FDiziMap.app%3ALJOlU65C2wLxiArXN6mT0U4Xv-8&amp;cuid=3321886" rel="nofollow noopener" title="DiziMap.app">DiziMap.app</a> does not support the minimum OS Version specified in the Info.plist."</p><p>My config.xml:</p><p>&lt;widget id="net.ionicframework.myapp" xmlns:gap="<a href="http://disq.us/url?url=http%3A%2F%2Fphonegap.com%2Fns%2F1.0%3ArGhMg6lWaDHTWuxdL2I7p9NsCqU&amp;cuid=3321886" rel="nofollow noopener" title="http://phonegap.com/ns/1.0">http://phonegap.com/ns/1.0</a>" version="0.0.2" xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2Fns%2Fwidgets%3AMx2Q6mlsaVXFcKRQbK6r_lqjmP8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/ns/widgets">http://www.w3.org/ns/widgets</a>" xmlns:cdv="<a href="http://disq.us/url?url=http%3A%2F%2Fcordova.apache.org%2Fns%2F1.0%3AfuOtokFLUKvADTbTOzfmxJuFjEY&amp;cuid=3321886" rel="nofollow noopener" title="http://cordova.apache.org/ns/1.0">http://cordova.apache.org/n...</a>"&gt;</p><p>  &lt;name&gt;Myapp&lt;/name&gt;</p><p>  &lt;description&gt;</p><p>        A discr</p><p>    &lt;/description&gt;</p><p>  &lt;author email="info@asdfasdf.net" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.dfasdfsdf.net%2F%3A8tfUxuKZe49RPibN9Uq8u_NaGCo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.dfasdfsdf.net/">http://www.dfasdfsdf.net/</a>"&gt;</p><p>  &lt;/author&gt;</p><p>  &lt;content src="index.html"/&gt;</p><p>  &lt;access origin="*"/&gt;</p><p>  &lt;preference name="webviewbounce" value="false"/&gt;</p><p>  &lt;preference name="UIWebViewBounce" value="false"/&gt;</p><p>  &lt;preference name="DisallowOverscroll" value="true"/&gt;</p><p>  &lt;preference name="BackupWebStorage" value="none"/&gt;</p><p>  &lt;preference name="SplashScreen" value="screen"/&gt;</p><p>  &lt;preference name="SplashScreenDelay" value="3000"/&gt;</p><p>  &lt;feature name="StatusBar"&gt;</p><p>    &lt;param name="ios-package" value="CDVStatusBar" onload="true"/&gt;</p><p>  &lt;/feature&gt;</p><p>  &lt;icon src="res/ios/icon.png" gap:platform="ios" width="57" height="57"/&gt;</p><p>  &lt;icon src="res/ios/icon-76.png" gap:platform="ios" width="76" height="76"/&gt;</p><p>  &lt;icon src="res/ios/icon-72.png" width="72" height="72"/&gt;</p><p>  &lt;icon src="res/ios/icon-60@2x.png" gap:platform="ios" width="120" height="120"/&gt;</p><p>  &lt;icon src="res/ios/icon-76@2x.png" gap:platform="ios" width="152" height="152"/&gt;</p><p>  &lt;preference name="deployment-target" value="8.0"/&gt;</p><p>  &lt;gap:plugin name="com.ionic.keyboard"/&gt;</p><p>  &lt;gap:plugin name="org.apache.cordova.device" source="<a href="http://disq.us/url?url=http%3A%2F%2Fplugins.cordova.io%3ANpyS05i7d7DYoF5XTn5OcoL74io&amp;cuid=3321886" rel="nofollow noopener" title="plugins.cordova.io">plugins.cordova.io</a>"/&gt;</p><p>  &lt;gap:plugin name="org.apache.cordova.geolocation" source="<a href="http://disq.us/url?url=http%3A%2F%2Fplugins.cordova.io%3ANpyS05i7d7DYoF5XTn5OcoL74io&amp;cuid=3321886" rel="nofollow noopener" title="plugins.cordova.io">plugins.cordova.io</a>"/&gt;</p><p>  &lt;gap:plugin name="org.apache.cordova.inappbrowser" source="<a href="http://disq.us/url?url=http%3A%2F%2Fplugins.cordova.io%3ANpyS05i7d7DYoF5XTn5OcoL74io&amp;cuid=3321886" rel="nofollow noopener" title="plugins.cordova.io">plugins.cordova.io</a>"/&gt;</p><p>  &lt;gap:plugin name="org.apache.cordova.splashscreen" source="<a href="http://disq.us/url?url=http%3A%2F%2Fplugins.cordova.io%3ANpyS05i7d7DYoF5XTn5OcoL74io&amp;cuid=3321886" rel="nofollow noopener" title="plugins.cordova.io">plugins.cordova.io</a>"/&gt;</p><p>  &lt;gap:plugin name="<a href="http://disq.us/url?url=http%3A%2F%2Fcom.microsoft.azure%3AJxZvYstkBn827wYel0gCI8Q6qh0&amp;cuid=3321886" rel="nofollow noopener" title="com.microsoft.azure">com.microsoft.azure</a>-mobile-services" source="<a href="http://disq.us/url?url=http%3A%2F%2Fplugins.cordova.io%3ANpyS05i7d7DYoF5XTn5OcoL74io&amp;cuid=3321886" rel="nofollow noopener" title="plugins.cordova.io">plugins.cordova.io</a>"/&gt;</p><p>&lt;/widget&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1930977682">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1930977682">2</a> (In reply to <a href="#c_1930808284">#1</a>) by Raymond Camden
		posted on 3/27/2015 at 10:44 AM
		</div>
		<div class="comment_text"><p>Your comment is not really on topic for this blog post. Please post your question to StackOverflow, or the PhoneGap Google Group.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1984554880">
	<div>
		<img src="https://disqus.com/api/users/avatars/parthiban_s.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1984554880">3</a> by Parthiban S
		posted on 4/24/2015 at 5:46 AM
		</div>
		<div class="comment_text"><p>I need to create a custom error page in Cordova project. I successfully created custom error page in simple cordova project. But when i implement the same procedure in Application. It is display web page not unavailable instead of custom error page. So it is possible to implement in custom error in tab bar?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1984788885">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1984788885">4</a> (In reply to <a href="#c_1984554880">#3</a>) by Raymond Camden
		posted on 4/24/2015 at 10:47 AM
		</div>
		<div class="comment_text"><p>I'm afraid I don't quite understand what you are asking. How exactly ddi you implement a custom error page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4993993379">
	<div>
		<img src="https://disqus.com/api/users/avatars/apollyonyagami.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4993993379">5</a> by Apollyon Yagami
		posted on 7/16/2020 at 12:24 PM
		</div>
		<div class="comment_text"><p>link is broken</p></div>
	</div>
</div>
		
<div class="comment" id="c_4994090268">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4994090268">6</a> (In reply to <a href="#c_4993993379">#5</a>) by Raymond Camden
		posted on 7/16/2020 at 1:57 PM
		</div>
		<div class="comment_text"><p>Sorry. Maybe reach out to Holly on Twitter.</p></div>
	</div>
</div>
		