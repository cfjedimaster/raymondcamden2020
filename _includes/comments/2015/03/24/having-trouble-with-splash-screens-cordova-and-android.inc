
<div class="comment" id="c_1929657334">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_WTsOwD9bFv.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1929657334">1</a> by Jeremy Callahan
		posted on 3/26/2015 at 6:35 PM
		</div>
		<div class="comment_text"><p>Thanks for posting this.  I wish it helped me.  I'm dying out here trying to get this same issue resolved... Well sort or the same.</p><p>I cannot get my splash screen to show up on iOS.  Its very frustrating.</p><p>I'm using PG Build and have everything correct (according to the documentation).</p><p>Not really sure where to turn at this point</p><p>I was getting the default PG splash screen with this method:</p><p>&lt;platform name="ios"&gt;<br>&lt;splash src="res/splash/ios320x480.png" width="320" height="480"/&gt;<br>&lt;/platform&gt;</p><p>PG Support told me to use this method for PG Build:</p><p>&lt;gap:splash src="res/splash/ios320x480.png" gap:platform="ios" width="320" height="480"/&gt;</p><p>But I get nothing with that method...  Let me know if you have any thoughts.  I'm using the standard other tags:</p><p>&lt;gap:plugin name="org.apache.cordova.splashscreen"/&gt;<br>&lt;preference name="AutoHideSplashScreen" value="false"/&gt;<br>    &lt;preference name="ShowSplashScreenSpinner" value="false"/&gt;<br>    &lt;preference name="SplashScreen" value="splash"/&gt;<br>    &lt;preference name="SplashScreenDelay" value="10000"/&gt;<br>&lt;gap:splash src="splash.png"/&gt;</p><p>Any help is appreciated!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1929668588">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1929668588">2</a> (In reply to <a href="#c_1929657334">#1</a>) by Raymond Camden
		posted on 3/26/2015 at 6:41 PM
		</div>
		<div class="comment_text"><p>I wonder if that last gap splash conflicts with the one for iOS? Have you tried posting back to the support forum too?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1930127151">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_WTsOwD9bFv.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1930127151">3</a> (In reply to <a href="#c_1929668588">#2</a>) by Jeremy Callahan
		posted on 3/26/2015 at 10:59 PM
		</div>
		<div class="comment_text"><p>Yeah I am working with them now.  I have the opposite problem of everyone else.  Android works but iOS will not work.  Very odd.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1930293299">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1930293299">4</a> (In reply to <a href="#c_1930127151">#3</a>) by Raymond Camden
		posted on 3/27/2015 at 12:56 AM
		</div>
		<div class="comment_text"><p>Ok. Let me know when it gets fixed? Sorry I couldn't help more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1930300650">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_WTsOwD9bFv.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1930300650">5</a> (In reply to <a href="#c_1930293299">#4</a>) by Jeremy Callahan
		posted on 3/27/2015 at 1:02 AM
		</div>
		<div class="comment_text"><p>I found this interesting thread about 5 months ago where PG Build didn't support 6 and 6+ splash pages.  At the end of the thread it was fixed.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcommunity.phonegap.com%2Fnitobi%2Ftopics%2Fapp-auto-scaling-on-iphone-6-and-6-screens%3AhdL_-dalEX9pXFmBVsPIOii1hgQ&amp;cuid=3321886" rel="nofollow noopener" title="http://community.phonegap.com/nitobi/topics/app-auto-scaling-on-iphone-6-and-6-screens">http://community.phonegap.c...</a></p><p>They just rolled to version 3.7 on PG Build this week.  I'm wondering if it was some how left out of the version.</p><p>I'll update this thread once I get it fixed. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1976977248">
	<div>
		<img src="https://disqus.com/api/users/avatars/anders_borg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1976977248">6</a> by Anders Borg
		posted on 4/20/2015 at 8:18 AM
		</div>
		<div class="comment_text"><p>The documentation is confusing and contradicting due to slightly different requirements for PhoneGap Build. I can't say I got it altogether right. E.g. I can't control the aspect ratio for Android (via 9-patch maybe?). Anywho, these are the settings I use in a project that needs splash screens for both Android and iOS (customer requirement; normally I don't use any splash for Android, as they make the app bloated for no real gain). I also list the icons I use. All created via my tool <a href="http://disq.us/url?url=http%3A%2F%2Fpgicons.abiro.com%3AY_0BDVK2XeDw6AmwRr0CakMbwlw&amp;cuid=3321886" rel="nofollow noopener" title="http://pgicons.abiro.com">http://pgicons.abiro.com</a>.</p><p>If I don't want a splash for Android, I skip splash.png and all Android settings. Works fine, even though the documentation sort of demands a splash.png.</p><p>    &lt;preference name="SplashScreen" value="screen"/&gt;<br>&lt;preference name="SplashScreenDelay" value="3000"/&gt;<br>&lt;preference name="AutoHideSplashScreen" value="false"/&gt;</p><p>    &lt;icon src="icon.png"/&gt;<br>&lt;gap:splash src="splash.png"/&gt;</p><p>    &lt;icon gap:platform="ios" src="res/icon/ios/icon-small.png" width="29" height="29"/&gt;<br>&lt;icon gap:platform="ios" src="res/icon/ios/icon-small_2x.png" width="58" height="58"/&gt;<br>&lt;icon gap:platform="ios" src="res/icon/ios/icon-40.png" width="40" height="40"/&gt;<br>&lt;icon gap:platform="ios" src="res/icon/ios/icon-40_2x.png" width="80" height="80"/&gt;<br>&lt;icon gap:platform="ios" src="res/icon/ios/icon-50.png" width="50" height="50"/&gt;<br>&lt;icon gap:platform="ios" src="res/icon/ios/icon-50_2x.png" width="100" height="100"/&gt;<br>&lt;icon gap:platform="ios" src="res/icon/ios/icon.png" width="57" height="57"/&gt;<br>&lt;icon gap:platform="ios" hsrc="res/icon/ios/icon_2x.png" width="114" eight="114"/&gt;<br>&lt;icon gap:platform="ios" src="res/icon/ios/icon-60.png" width="60" height="60"/&gt;<br>&lt;icon gap:platform="ios" src="res/icon/ios/icon-60_2x.png" width="120" height="120"/&gt;<br>&lt;icon gap:platform="ios" src="res/icon/ios/icon-60_3x.png" width="180" height="180"/&gt;<br>&lt;icon gap:platform="ios" src="res/icon/ios/icon-72.png" width="72" height="72"/&gt;<br>&lt;icon gap:platform="ios" src="res/icon/ios/icon-72_2x.png" width="144" height="144"/&gt;<br>&lt;icon gap:platform="ios" src="res/icon/ios/icon-76.png" width="76" height="76"/&gt;<br>&lt;icon gap:platform="ios" src="res/icon/ios/icon-76_2x.png" width="152" height="152"/&gt;<br>&lt;gap:splash gap:platform="ios" src="res/screen/ios/Default.png" width="320" height="480"/&gt;<br>&lt;gap:splash gap:platform="ios" src="res/screen/ios/Default_2x.png" width="640" height="960"/&gt;</p><p>    &lt;gap:splash gap:platform="ios" src="res/screen/ios/Default-568h_2x.png" width="640" height="1136"/&gt;<br>&lt;gap:splash gap:platform="ios" src="res/screen/ios/Default-667h_2x.png" width="750" height="1334"/&gt;<br>&lt;gap:splash gap:platform="ios" src="res/screen/ios/Default-Portrait-736h_3x.png" width="1242" height="2208"/&gt;<br>&lt;gap:splash gap:platform="ios" src="res/screen/ios/Default-Portrait.png" width="768" height="1024"/&gt;<br>&lt;gap:splash gap:platform="ios" src="res/screen/ios/Default-Portrait_2x.png" width="1536" height="2048"/&gt;</p><p>&lt;icon gap:platform="android" gap:qualifier="ldpi" src="res/icon/android/ldpi.png"/&gt;<br>&lt;icon gap:platform="android" gap:qualifier="mdpi" src="res/icon/android/mdpi.png"/&gt;<br>&lt;icon gap:platform="android" gap:qualifier="hdpi" src="res/icon/android/hdpi.png"/&gt;<br>&lt;icon gap:platform="android" gap:qualifier="xhdpi" src="res/icon/android/xhdpi.png"/&gt;<br>&lt;icon gap:platform="android" gap:qualifier="xxhdpi" src="res/icon/android/xxhdpi.png"/&gt;<br>&lt;icon gap:platform="android" gap:qualifier="xxxhdpi" src="res/icon/android/xxxhdpi.png"/&gt;</p><p>    &lt;gap:splash gap:platform="android" gap:qualifier="ldpi" src="res/screen/android/ldpi-portrait.png"/&gt;<br>&lt;gap:splash gap:platform="android" gap:qualifier="mdpi" src="res/screen/android/mdpi-portrait.png"/&gt;<br>&lt;gap:splash gap:platform="android" gap:qualifier="hdpi" src="res/screen/android/hdpi-portrait.png"/&gt;<br>&lt;gap:splash gap:platform="android" gap:qualifier="xhdpi" src="res/screen/android/xhdpi-portrait.png"/&gt;<br>&lt;gap:splash gap:platform="android" gap:qualifier="xxhdpi" src="res/screen/android/xxhdpi-portrait.png"/&gt;<br>&lt;gap:splash gap:platform="android" gap:qualifier="xxxhdpi" src="res/screen/android/xxxhdpi-portrait.png"/&gt;</p><p>    &lt;gap:plugin name="org.apache.cordova.splashscreen"/&gt;</p><p>(I call .hide after 3 seconds).</p><p>You also need .pgbomit under www/res to avoid bloat.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2179052031">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_w1r8wiufbe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2179052031">7</a> by Dmitry Isakov
		posted on 8/7/2015 at 7:22 AM
		</div>
		<div class="comment_text"><p>I also got my splash not working after updating to Cordova CLI 5.1.1 + Android 4.0.2<br>Tried many combinations but nothing works. I have splash.9.png in www/img folder</p></div>
	</div>
</div>
		
<div class="comment" id="c_2187866972">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ux3M968w89.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2187866972">8</a> (In reply to <a href="#c_2179052031">#7</a>) by Luciano Lima
		posted on 8/12/2015 at 2:15 AM
		</div>
		<div class="comment_text"><p>In my App with Cordova 5.1.1 + Android 4.0.2, in the first launch, the splash works nice. After the first launch, never show the splash again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2190177628">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_w1r8wiufbe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2190177628">9</a> by Dmitry Isakov
		posted on 8/13/2015 at 6:24 AM
		</div>
		<div class="comment_text"><p>&lt;preference name="splashscreen" value="splash"/&gt;<br>    &lt;preference name="splashScreenDelay" value="10000"/&gt;</p><p>this are the only options i use<br>my only splashscreen file is located at res/drawable folder and is named splash.9.png<br>my android doesnt show any splashscreen<br>what am i doing wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2190503263">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2190503263">10</a> (In reply to <a href="#c_2187866972">#8</a>) by Raymond Camden
		posted on 8/13/2015 at 12:22 PM
		</div>
		<div class="comment_text"><p>That one I'm not sure about. I'd suggest maybe filing a bug report. I swear I saw something about this on the Cordova dev list, but now I can't find it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2190505292">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2190505292">11</a> (In reply to <a href="#c_2190177628">#9</a>) by Raymond Camden
		posted on 8/13/2015 at 12:23 PM
		</div>
		<div class="comment_text"><p>Not really sure - sorry. I haven't messed w/ Android splash screens in a while.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2214427962">
	<div>
		<img src="https://disqus.com/api/users/avatars/mathieudatez.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2214427962">12</a> (In reply to <a href="#c_2187866972">#8</a>) by Mathieu Datez
		posted on 8/25/2015 at 2:20 PM
		</div>
		<div class="comment_text"><p>I have the exact same problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2214433550">
	<div>
		<img src="https://disqus.com/api/users/avatars/mathieudatez.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2214433550">13</a> (In reply to <a href="#c_2190177628">#9</a>) by Mathieu Datez
		posted on 8/25/2015 at 2:21 PM
		</div>
		<div class="comment_text"><p>Not sure but the preference names might be case sensitive?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2214993094">
	<div>
		<img src="https://disqus.com/api/users/avatars/mathieudatez.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2214993094">14</a> (In reply to <a href="#c_2214427962">#12</a>) by Mathieu Datez
		posted on 8/25/2015 at 3:50 PM
		</div>
		<div class="comment_text"><p>I just edited the <a href="http://disq.us/url?url=http%3A%2F%2Fsplashscreen.java%3ABa5fMse4gMlTOYIowjbIVnRHyZI&amp;cuid=3321886" rel="nofollow noopener" title="splashscreen.java">splashscreen.java</a> class and re-added my customized plugin instead. The <a href="http://disq.us/url?url=http%3A%2F%2Fsplashscreen.java%3ABa5fMse4gMlTOYIowjbIVnRHyZI&amp;cuid=3321886" rel="nofollow noopener" title="splashscreen.java">splashscreen.java</a> class does not get the parameter to hide the splashscreen and starts the method showSplashScreen with true instead. I changed this to false and it's working as expected now. A better fix would be to get the bool from the preferences.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2246007709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2246007709">15</a> (In reply to <a href="#c_2190177628">#9</a>) by Nivas
		posted on 9/10/2015 at 11:44 AM
		</div>
		<div class="comment_text"><p>try to use &lt;preference name="splashscreen" value="screen"/&gt; instead of &lt;preference name="splashscreen" value="splash"/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2294226855">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_vmfjjAaSKo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2294226855">16</a> by nissar
		posted on 10/7/2015 at 7:29 AM
		</div>
		<div class="comment_text"><p>I am using spalshscreen plugin for container app (loading inappbrowser url ) after complete launch of splash Screen . First time splashscreen launching as expected . But seconed ime onwards white screen displaying . If application removed from the device stack then it will display splash screen . I want to display splash screen once exit the app and relaunch it.</p><p>config.xml</p><p>   &lt;preference name="splashScreen" value="splash"/&gt;<br>    &lt;preference name="splashScreenDelay" value="6000"/&gt;<br>    (i tried without commenting also)</p><p>even i aded set timeout for odevice ready</p><p>  setTimeout(function () {<br>document.addEventListener('deviceready', onDeviceReady, false);<br>}, 6000);</p><p>please help me for this issue</p></div>
	</div>
</div>
		
<div class="comment" id="c_2294700839">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2294700839">17</a> (In reply to <a href="#c_2294226855">#16</a>) by Raymond Camden
		posted on 10/7/2015 at 2:51 PM
		</div>
		<div class="comment_text"><p>Not really sure - but I can tell you there is no reason to delay your deviceReady for 6K ms.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2510471847">
	<div>
		<img src="https://disqus.com/api/users/avatars/3jFernandoMint.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2510471847">18</a> by Fernando
		posted on 2/12/2016 at 8:05 PM
		</div>
		<div class="comment_text"><p>Gracias por compartir tus conocimientos..<br>Tengo un problema con el splash no me funciona aparece la pantalla negra al inicar la app, lugo si el index pero muestra la imagen de splash y el icono si lo muestra que puedo hacer para solucionarlo ????</p></div>
	</div>
</div>
		
<div class="comment" id="c_2548347265">
	<div>
		<img src="https://disqus.com/api/users/avatars/s1lviu.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2548347265">19</a> (In reply to <a href="#c_2246007709">#15</a>) by s1lviu
		posted on 3/2/2016 at 10:51 PM
		</div>
		<div class="comment_text"><p>Working for me!<br>Regards!</p></div>
	</div>
</div>
		