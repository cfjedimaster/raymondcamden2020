
<div class="comment" id="c_2100947531">
	<div>
		<img src="https://disqus.com/api/users/avatars/simonreimler.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2100947531">1</a> by Simon Grimm
		posted on 6/26/2015 at 6:47 AM
		</div>
		<div class="comment_text"><p>First, very good idea to wrap the complete RSS loading logic into a service, that's what they are made for. <br>Additional one question/hint: As you are using the ui-router, why not use $state.go('') for your route changes? I think state.go also feels better when you have already defined states in your config! SO link to this topic: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F23454799%2Fwhat-is-the-difference-between-state-goapp-location-and-location-pathapp-l%3AsBjLqH2V4NteusflF7ytulWunsQ&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/23454799/what-is-the-difference-between-state-goapp-location-and-location-pathapp-l">http://stackoverflow.com/qu...</a></p><p>Anyway, great read!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2101359487">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2101359487">2</a> (In reply to <a href="#c_2100947531">#1</a>) by Raymond Camden
		posted on 6/26/2015 at 1:50 PM
		</div>
		<div class="comment_text"><p>Why? Because I didn't know better. :) Thanks for sharing that!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2106160699">
	<div>
		<img src="https://disqus.com/api/users/avatars/emindedic.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2106160699">3</a> by Emin Dedic
		posted on 6/29/2015 at 8:50 AM
		</div>
		<div class="comment_text"><p>Is it possible to pull images as well and place them on the left of the content?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2106416026">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_t8y5WeAYzB.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2106416026">4</a> by max
		posted on 6/29/2015 at 1:15 PM
		</div>
		<div class="comment_text"><p>hello,<br> I'm trying to run this new ionic example, but it does not work properly.<br> I have a ubuntu 14.04 + a ionic working environment.<br>(your previous rssreader works fine in my system under phonegap)</p><p> now I created an empty project with inic</p><p>$ ionic start e-rssreader-ionic blanck<br>$ ionic  platform add android<br>$ cordova plugin add cordova-plugin-inappbrowser<br>$ cordova plugin add cordova-plugin-network-information</p><p> Then I replaced the www folder with yours, just downloaded from github.</p><p> launched the preview with</p><p> $ ionic serve</p><p> ... but the browser (Chrome) load only the header and remains with the message "loading ..."<br>(please have a look to the picture in attachment)</p><p> Here the errors in the console:</p><p>-------------<br>ionic $ c<br>Console log output: enabled<br>Loading: /?restart=605278<br>ionic $ 0     723850   log      Started up!!<br>1     723867   error    TypeError: Cannot read property 'type' of undefined<br>    at Object.isOnline (http://localhost:8100/lib/ng-cordova.js:46:48)<br>    at http://localhost:8100/js/controllers.js:17:23<br>    at http://localhost:8100/lib/ionic/js/ionic.bundle.js:44815:19<br>    at Object.ionic.Platform.ready (http://localhost:8100/lib/ionic/js/ionic.bundle.js:2120:9)<br>    at Object.self.ready (http://localhost:8100/lib/ionic/js/ionic.bundle.js:44813:26)<br>    at new &lt;anonymous&gt; (http://localhost:8100/js/controllers.js:13:18)<br>    at invoke (http://localhost:8100/lib/ionic/js/ionic.bundle.js:12884:17)<br>    at Object.instantiate (http://localhost:8100/lib/ionic/js/ionic.bundle.js:12892:27)<br>    at http://localhost:8100/lib/ionic/js/ionic.bundle.js:17161:28<br>    at self.appendViewElement (http://localhost:8100/lib/ionic/js/ionic.bundle.js:48253:24)</p><p>-------------</p><p> can you help me to understand where is my error, please?<br>MaX</p></div>
	</div>
</div>
		
<div class="comment" id="c_2106435469">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2106435469">5</a> (In reply to <a href="#c_2106160699">#3</a>) by Raymond Camden
		posted on 6/29/2015 at 1:29 PM
		</div>
		<div class="comment_text"><p>I *think* I remember looking into this before and the Google API did not return Media properties from a RSS feed. The best thing to do is just try it and see. If their API returns it, then you would just look for it in the results and display it. Please let me know what you find.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2106436817">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2106436817">6</a> (In reply to <a href="#c_2106416026">#4</a>) by Raymond Camden
		posted on 6/29/2015 at 1:30 PM
		</div>
		<div class="comment_text"><p>You can't use the offline/online detection while running in a browser. You'll need to test in an emulator or a device.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2106484559">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2106484559">7</a> (In reply to <a href="#c_2100947531">#1</a>) by Raymond Camden
		posted on 6/29/2015 at 2:00 PM
		</div>
		<div class="comment_text"><p>Thanks for the tip - I've switched my code to use state.go.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2106493068">
	<div>
		<img src="https://disqus.com/api/users/avatars/rodolphocaires.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2106493068">8</a> by Rodolpho Caires
		posted on 6/29/2015 at 2:01 PM
		</div>
		<div class="comment_text"><p>Hello Raymond,</p><p>Does cordova things like "cordova.plugins.Keyboard.hideKeyboardAccessoryBar(true);" works in a MobileFirst application?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2106494229">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2106494229">9</a> (In reply to <a href="#c_2106493068">#8</a>) by Raymond Camden
		posted on 6/29/2015 at 2:02 PM
		</div>
		<div class="comment_text"><p>Right now - no - not as far as I know. I've been disabling them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2106506188">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_t8y5WeAYzB.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2106506188">10</a> (In reply to <a href="#c_2106436817">#6</a>) by max
		posted on 6/29/2015 at 2:10 PM
		</div>
		<div class="comment_text"><p>sorry, but it do not works. I have built it, and both emulator and my motoG phone have the same problem.<br>There is something that i'm make wrong in the setup of this project.<br>Are you using a no standart ionic blank proj?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2106508252">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2106508252">11</a> (In reply to <a href="#c_2106506188">#10</a>) by Raymond Camden
		posted on 6/29/2015 at 2:12 PM
		</div>
		<div class="comment_text"><p>Can you confirm the plugins exist? Can you confirm you have the same error in console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2106725978">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_t8y5WeAYzB.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2106725978">12</a> (In reply to <a href="#c_2106508252">#11</a>) by max
		posted on 6/29/2015 at 4:16 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>below you can found the console log from emulator (it's large):</p><p>and the plugins exists</p><p>max@u9200:~/ionic/e-rssreader-ionic$ ls plugins  <br>android.json <br>cordova-plugin-network-information<br>cordova-plugin-inappbrowser <br>fetch.json</p><p>max@u9200:~/ionic/e-rssreader-ionic$ cat plugins/android.json | grep -A6 "installed_plugins"<br>"installed_plugins": {<br>        "cordova-plugin-inappbrowser": {<br>            "PACKAGE_NAME": "com.ionicframework.starter"<br>        },<br>        "cordova-plugin-network-information": {<br>            "PACKAGE_NAME": "com.ionicframework.starter"<br>        }<br>max@u9200:~/ionic/e-rssreader-ionic$</p><p>Here the log when I start the app Hellocordova (containing your rss-reader), but I can't interpretate it,<br>-------------<br>Console Log<br>--------------</p><p>W/AudioTrack( 1220): AUDIO_OUTPUT_FLAG_FAST denied by client<br>I/art     ( 2126): Not late-enabling -Xcheck:jni (already on)<br>I/WebViewFactory( 2126): Loading com.android.webview version 39 (1737576-x86) (code 300007)<br>I/LibraryLoader( 2126): Time to load native libraries: 27 ms (timestamps 2192-2219)<br>I/LibraryLoader( 2126): Expected native library version number "",actual native library version number ""<br>V/WebViewChromiumFactoryProvider( 2126): Binding Chromium to main looper Looper (main, tid 1) {1a465765}<br>I/LibraryLoader( 2126): Expected native library version number "",actual native library version number ""<br>I/chromium( 2126): [<a href="http://disq.us/url?url=INFO%3Alibrary_loader_hooks.cc%3ADBriJiAYTkPoe1Snf_LGvO0e20U&amp;cuid=3321886" rel="nofollow noopener" title="INFO:library_loader_hooks.cc">INFO:library_loader_hooks.cc</a>(104)] Chromium logging enabled: level = 0, default verbosity = 0<br>I/BrowserStartupController( 2126): Initializing chromium process, singleProcess=true<br>W/art     ( 2126): Attempt to remove local handle scope entry from IRT, ignoring<br>W/chromium( 2126): [<a href="http://disq.us/url?url=WARNING%3Aresource_bundle.cc%3ABHzIKIPoFRRXeiaJ6MNKtmDgjXo&amp;cuid=3321886" rel="nofollow noopener" title="WARNING:resource_bundle.cc">WARNING:resource_bundle.cc</a>(304)] locale_file_path.empty()<br>I/chromium( 2126): [<a href="http://disq.us/url?url=INFO%3Aaw_browser_main_parts.cc%3AJiy-SBgQ-lvbJFAfIx-hE1grLok&amp;cuid=3321886" rel="nofollow noopener" title="INFO:aw_browser_main_parts.cc">INFO:aw_browser_main_parts.cc</a>(65)] Load from apk succesful, fd=30 off=46184 len=3037<br>I/chromium( 2126): [<a href="http://disq.us/url?url=INFO%3Aaw_browser_main_parts.cc%3AJiy-SBgQ-lvbJFAfIx-hE1grLok&amp;cuid=3321886" rel="nofollow noopener" title="INFO:aw_browser_main_parts.cc">INFO:aw_browser_main_parts.cc</a>(78)] Loading webviewchromium.pak from, fd:31 off:229484 len:1089587<br>W/AudioManagerAndroid( 2126): Requires BLUETOOTH permission<br>D/        ( 2126): HostConnection::get() New Host Connection established 0xb3fb9460, tid 2126<br>W/chromium( 2126): [<a href="http://disq.us/url?url=WARNING%3Amailbox_synchronizer.cc%3AySQoITX11-sSfFYAAhObgYZ0__s&amp;cuid=3321886" rel="nofollow noopener" title="WARNING:mailbox_synchronizer.cc">WARNING:mailbox_synchronize...</a>(41)] MailboxSync not supported due to missing EGL image/fence support<br>W/chromium( 2126): [<a href="http://disq.us/url?url=WARNING%3Adata_reduction_proxy_settings.cc%3AA2Nd8mYELu5TbkrmX68QcGwGtdc&amp;cuid=3321886" rel="nofollow noopener" title="WARNING:data_reduction_proxy_settings.cc">WARNING:data_reduction_prox...</a>(331)] SPDY proxy OFF at startup<br>W/art     ( 2126): Attempt to remove local handle scope entry from IRT, ignoring<br>W/AwContents( 2126): onDetachedFromWindow called when already detached. Ignoring<br>D/SystemWebViewEngine( 2126): CordovaWebView is running on device made by: unknown<br>W/art     ( 2126): Attempt to remove local handle scope entry from IRT, ignoring<br>W/art     ( 2126): Attempt to remove local handle scope entry from IRT, ignoring<br>D/OpenGLRenderer( 2126): Use EGL_SWAP_BEHAVIOR_PRESERVED: true<br>D/Atlas   ( 2126): Validating map...<br>V/WindowManager( 1220): Adding window Window{2c1b28d7 u0 com.ionicframework.starter/com.ionicframework.starter.MainActivity} at 5 of 9 (before Window{2f9eaf01 u0 Starting com.ionicframework.starter})<br>I/OpenGLRenderer( 2126): Initialized EGL, version 1.4<br>D/        ( 2126): HostConnection::get() New Host Connection established 0xa54578a0, tid 2166<br>D/OpenGLRenderer( 2126): Enabling debug mode 0<br>W/EGL_emulation( 2126): eglSurfaceAttrib not implemented<br>W/OpenGLRenderer( 2126): Failed to set EGL_SWAP_BEHAVIOR on surface 0xa5528ec0, error=EGL_SUCCESS<br>I/ActivityManager( 1220): Displayed com.ionicframework.starter/.MainActivity: +982ms<br>D/JsMessageQueue( 2126): Set native-&gt;JS mode to OnlineEventsBridgeMode<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>D/CordovaNetworkManager( 2126): Connection Type: 3g<br>D/CordovaNetworkManager( 2126): Connection Extra Info: <a href="http://disq.us/url?url=http%3A%2F%2Fepc.tmobile.com%3A2HXA0ryeXMZtiR0tyTtcXl_VE6M&amp;cuid=3321886" rel="nofollow noopener" title="epc.tmobile.com">epc.tmobile.com</a><br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>D/CordovaNetworkManager( 2126): Connection Type: 3g<br>D/CordovaNetworkManager( 2126): Connection Extra Info: <a href="http://disq.us/url?url=http%3A%2F%2Fepc.tmobile.com%3A2HXA0ryeXMZtiR0tyTtcXl_VE6M&amp;cuid=3321886" rel="nofollow noopener" title="epc.tmobile.com">epc.tmobile.com</a><br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>I/chromium( 2126): [INFO:CONSOLE(43)] "Uncaught TypeError: Cannot read property 'Keyboard' of undefined", source: file:///android_asset/www/js/app.js (43)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000b44<br>E/eglCodecCommon( 2126): glUtilsParamSize: unknow param 0x00000bd0<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>E/eglCodecCommon( 2126): **** ERROR unknown type 0x0 (glSizeof,72)<br>D/TaskPersister( 1220): removeObsoleteFile: deleting file=14_task.xml<br>D/TaskPersister( 1220): removeObsoleteFile: deleting file=14_task_thumbnail.png<br>^AI/UsageStatsService( 1220): User[0] Flushing usage stats to disk</p><p>------------</p></div>
	</div>
</div>
		
<div class="comment" id="c_2106729993">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2106729993">13</a> (In reply to <a href="#c_2106725978">#12</a>) by Raymond Camden
		posted on 6/29/2015 at 4:19 PM
		</div>
		<div class="comment_text"><p>Do not use the log from the emulator - rather - connect to the emulator with Chrome Remote Debugging. That will give you a much smaller log to work with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2106736665">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2106736665">14</a> (In reply to <a href="#c_2106725978">#12</a>) by Raymond Camden
		posted on 6/29/2015 at 4:20 PM
		</div>
		<div class="comment_text"><p>Ok, it looks to be this: 'Keyboard' of undefined. Ensure you have the Ionic Keyboard plugin. It is supposed to be added by default.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2106848890">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_t8y5WeAYzB.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2106848890">15</a> (In reply to <a href="#c_2106736665">#14</a>) by max
		posted on 6/29/2015 at 5:17 PM
		</div>
		<div class="comment_text"><p>I have installed the keyboard plugins  with:</p><p>$ cordova plugin add <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fdriftyco%2Fionic-plugins-keyboard.git%3AVpp1Le9bjMEX1gDauI0YxFmARy8&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/driftyco/ionic-plugins-keyboard.git">https://github.com/driftyco...</a></p><p>...but the app still not working, and the chrome log is telling me something strange:<br>----------------------------<br><a href="https://disq.us/url?url=https%3A%2F%2Fwww.google.com%2Fjsapi%3A8npz2UZ_USPqssRjTMU5L74kaj0&amp;cuid=3321886" rel="nofollow noopener" title="https://www.google.com/jsapi">https://www.google.com/jsapi</a> Failed to load resource: the server responded with a status of 404 (Not Found)<br>controllers.js:15 Started up!!<br>services.js:13 getEntries for <a href="http://disq.us/url?url=http%3A%2F%2Ffeeds.feedburner.com%2Fraymondcamdensblog%3AwqSBOqr9nXgJfCCd_HhhdGsevaw&amp;cuid=3321886" rel="nofollow noopener" title="http://feeds.feedburner.com/raymondcamdensblog">http://feeds.feedburner.com...</a><br>services.js:18 Uncaught ReferenceError: google is not defined</p><p>---------------------------</p><p>404 from <a href="https://disq.us/url?url=https%3A%2F%2Fwww.google.com%2Fjsapi%3F%3F%3AXXa-lrGyiUhoFTA2dp3LQ-P9FpA&amp;cuid=3321886" rel="nofollow noopener" title="https://www.google.com/jsapi??">https://www.google.com/jsapi??</a></p><p>...but as you can see in the picture in attachment, the emulator can found this javascript in internet</p><p>...and the error "google is not defined" ?</p><p>Just in case... you can found the project in my drive.</p><p>It's your rss-reader in a blank ionic projet with the plugins and android platform.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fdrive.google.com%2Ffile%2Fd%2F0B8sk-7K8X3Y1VzNlekVwYnMzeXc%2Fview%3Fusp%3Dsharing%3AMs4TaUyahy0V7AEOJk89CXC61a8&amp;cuid=3321886" rel="nofollow noopener" title="https://drive.google.com/file/d/0B8sk-7K8X3Y1VzNlekVwYnMzeXc/view?usp=sharing">https://drive.google.com/fi...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2108238351">
	<div>
		<img src="https://disqus.com/api/users/avatars/emindedic.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2108238351">16</a> (In reply to <a href="#c_2106435469">#5</a>) by Emin Dedic
		posted on 6/30/2015 at 10:31 AM
		</div>
		<div class="comment_text"><p>I founded this <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F25693258%2Fusing-angular-to-get-image-from-google-feed-api%3A0EIbqSyF_fqCvaMxhcd__MJMPAc&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/25693258/using-angular-to-get-image-from-google-feed-api">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2108421311">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2108421311">17</a> (In reply to <a href="#c_2108238351">#16</a>) by Raymond Camden
		posted on 6/30/2015 at 12:58 PM
		</div>
		<div class="comment_text"><p>Oh.... that's different. So sure, you can search the content for an image. But the RSS spec itself supports an image property. That's what I thought you meant.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2110811806">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_t8y5WeAYzB.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2110811806">18</a> (In reply to <a href="#c_2106736665">#14</a>) by max
		posted on 7/1/2015 at 5:04 PM
		</div>
		<div class="comment_text"><p>Hi<br>could tell me please, witch version of cordova-plugin-network-information are using you?</p><p>and witch ionic-cli version?  (i'm using the 1.5.5 and it don't install the keyboard plugins as default)</p><p>with your app freezing in "loading", in the chrome console log I have this error:</p><p>TypeError: Cannot read property 'type' of undefined  -  ionic.bundle.js:20306 <br>    at Object.isOnline (ng-cordova.js:46)<br>    at controllers.js:17<br>    at ionic.bundle.js:44815<br>    at Object.ionic.Platform.ready (ionic.bundle.js:2120)<br>    at Object.IonicModule.constant.provider.$get.self.ready (ionic.bundle.js:44813)<br>    at new &lt;anonymous&gt; (controllers.js:13)<br>    at invoke (ionic.bundle.js:12884)<br>    at Object.instantiate (ionic.bundle.js:12892)<br>    at ionic.bundle.js:17161<br>    at IonicModule.controller.self.appendViewElement (ionic.bundle.js:48253)</p><p>ionic.bundle.js:20306</p></div>
	</div>
</div>
		
<div class="comment" id="c_2111365007">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2111365007">19</a> (In reply to <a href="#c_2110811806">#18</a>) by Raymond Camden
		posted on 7/1/2015 at 9:27 PM
		</div>
		<div class="comment_text"><p>I'm using the most recent network plugin and the most recent ionic (1.5.5). You are testing on a device or the emulator, right? For me, new Ionic projects add the keyboard plugin by default.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2138972720">
	<div>
		<img src="https://disqus.com/api/users/avatars/onigetoc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2138972720">20</a> (In reply to <a href="#c_2106160699">#3</a>) by onigetoc
		posted on 7/16/2015 at 3:08 AM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.zazar.net%2Fdevelopers%2Fjquery%2Fzrssfeed%2F%3AY40lMpo_sq1RabbC7z-7VPweGIc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.zazar.net/developers/jquery/zrssfeed/">http://www.zazar.net/develo...</a><br>zrss feed do this, it mean you should load the json/XML to find all media and other stuff, enclosure, ect. in the rss.<br>i tested it here to load media enclosure with some modification in zrss to show it the way i wanted.<br><a href="http://disq.us/url?url=http%3A%2F%2Fscripts.toolurl.com%2Frss%2Fzrssfeed-114%2F1-example-add-feed-Zepto.html%3ArR0HD_94Xyk94SdhH0Qt0G-C3ek&amp;cuid=3321886" rel="nofollow noopener" title="http://scripts.toolurl.com/rss/zrssfeed-114/1-example-add-feed-Zepto.html">http://scripts.toolurl.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2395295146">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_t8y5WeAYzB.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2395295146">21</a> by max
		posted on 12/5/2015 at 10:36 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, Google has closed the google.feed api, so we can't use:</p><p>var feed = new google.feeds.Feed(url);</p><p>...anymore... do you know an alternative?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2396297159">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2396297159">22</a> (In reply to <a href="#c_2395295146">#21</a>) by Raymond Camden
		posted on 12/6/2015 at 4:02 PM
		</div>
		<div class="comment_text"><p>Unfortunately no. I'm going to start looking and worse comes to worse, start building my own.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2396627314">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_t8y5WeAYzB.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2396627314">23</a> (In reply to <a href="#c_2396297159">#22</a>) by max
		posted on 12/6/2015 at 8:05 PM
		</div>
		<div class="comment_text"><p>diving into the sea of google, i have found this code, that is no using google.feeds, and is simple to run and fast to use.</p><p>If you publish a Entry  in your blog, the feed will be displayed immediatly on the rss client. (with google.feeds, after 1 hours)</p><p>here the zip.<br><a href="http://disq.us/url?url=http%3A%2F%2Fopenaccess.uoc.edu%2Fwebapps%2Fo2%2Fbitstream%2F10609%2F28322%2F3%2FjlillodTFC0114codigo.zip%3APEMUMBNezLts8zcMeN7zdt1iROM&amp;cuid=3321886" rel="nofollow noopener" title="http://openaccess.uoc.edu/webapps/o2/bitstream/10609/28322/3/jlillodTFC0114codigo.zip">http://openaccess.uoc.edu/w...</a></p><p>I think that the code came from an university of spain and it's free.</p><p>The problem: It's in spanish  but is quite simple to translate.</p><p>If you change the comments in js/presentacion.js, of the following lines:</p><p>                //description:$.trim($(v).find("description").text()),<br>                description:$.trim($(v).find("encoded").text()),</p><p>you can read the entire Entry of a Wordpress feed.</p><p>I hope that you can help and you can adapt it to your ionic proj,</p><p>regards<br>MaX</p></div>
	</div>
</div>
		
<div class="comment" id="c_2397961327">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2397961327">24</a> (In reply to <a href="#c_2396627314">#23</a>) by Raymond Camden
		posted on 12/7/2015 at 4:26 PM
		</div>
		<div class="comment_text"><p>I've done a bit of research and I plan on blogging some options this week. I will probably forget to comment back, so please subscribe to the blog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2431787310">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_pdwharIjtX.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2431787310">25</a> by min ho
		posted on 12/30/2015 at 7:47 AM
		</div>
		<div class="comment_text"><p>haw can i get get enclosure url  like audio file</p></div>
	</div>
</div>
		
<div class="comment" id="c_2432273296">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2432273296">26</a> (In reply to <a href="#c_2431787310">#25</a>) by Raymond Camden
		posted on 12/30/2015 at 4:27 PM
		</div>
		<div class="comment_text"><p>Did you look at the data returned by Google's Feeds API? It should be in there. If not, you need to parse the RSS yourself. You should also see this: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2F2015%2F12%2F08%2Fparsing-rss-feeds-in-javascript-options%3ADPYgCBWTh9CBUW00IWtDqsgN4zE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/2015/12/08/parsing-rss-feeds-in-javascript-options">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2718939423">
	<div>
		<img src="https://disqus.com/api/users/avatars/onigetoc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2718939423">27</a> by onigetoc
		posted on 6/8/2016 at 3:48 PM
		</div>
		<div class="comment_text"><p>I just found this api for converting RSS to JSON. <a href="http://disq.us/url?url=http%3A%2F%2Frss2json.com%3ACY4S1l0ld-Rj_u7bAO4C6I7bcI0&amp;cuid=3321886" rel="nofollow noopener" title="http://rss2json.com">http://rss2json.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2919146801">
	<div>
		<img src="https://disqus.com/api/users/avatars/aggreymarsh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2919146801">28</a> (In reply to <a href="#c_2106729993">#13</a>) by Dillion Amazon
		posted on 9/26/2016 at 2:54 PM
		</div>
		<div class="comment_text"><p>i am running the latest version of IONIC V2 and i am still geting the loading screen like the the other person</p></div>
	</div>
</div>
		
<div class="comment" id="c_2919153142">
	<div>
		<img src="https://disqus.com/api/users/avatars/aggreymarsh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2919153142">29</a> (In reply to <a href="#c_2106508252">#11</a>) by Dillion Amazon
		posted on 9/26/2016 at 2:58 PM
		</div>
		<div class="comment_text"><p>both plug-ins are in for me also ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2919183094">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2919183094">30</a> (In reply to <a href="#c_2919146801">#28</a>) by Raymond Camden
		posted on 9/26/2016 at 3:17 PM
		</div>
		<div class="comment_text"><p>What do you see when you remote debug?</p></div>
	</div>
</div>
		