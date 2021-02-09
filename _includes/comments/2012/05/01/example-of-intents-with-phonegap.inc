
<div class="comment" id="c_1713740816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740816">1</a> by Brian Swartzfager
		posted on 5/2/2012 at 6:34 PM
		</div>
		<div class="comment_text"><p>Intents are an important part of the Android application framework, so the fact that PhoneGap can utilize Intents is pretty cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740820">2</a> by Simon MacDonald
		posted on 5/2/2012 at 9:01 PM
		</div>
		<div class="comment_text"><p>Yeah, if you did into the PhoneGap source code you will see that Intents are used for core API calls like Camera.takePicture(), Capture.captureAudio(), Capture.captureImage() and Capture.captureVideo(). As well a number for plugins like the SpeechRecognizer and VideoPlayer also use intents to complete actions on Android.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740819">3</a> by Raymond Camden
		posted on 5/2/2012 at 10:00 PM
		</div>
		<div class="comment_text"><p>Simon, does iOS have something similar?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740817">4</a> by Simon MacDonald
		posted on 5/2/2012 at 10:16 PM
		</div>
		<div class="comment_text"><p>Um, yes and no.</p><p>WIth Android you can start an intent which is like when iOS starts another app to handle data. For instance when Dropbox fires off iBooks to handle the ePub file I just downloaded.</p><p>But you can also start an intent and wait for a result on Android. This way you can cobble together applications using already existing intents. Much in the same way you can pipe together a number of UNIX commands to make something really powerful.</p><p>I can't think of an analogy for that type of behaviour on iOS. As best I know as soon as you start a new app on iOS there is no way to pass the data back to the original app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740821">5</a> by Raymond Camden
		posted on 5/2/2012 at 10:27 PM
		</div>
		<div class="comment_text"><p>Interesting. Thanks. Can iOS also register to be the receiver of an event? Your example just mentioned broadcasting out an intent. (If I read it right.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740822">6</a> by james
		posted on 8/8/2012 at 5:07 PM
		</div>
		<div class="comment_text"><p>I dont think this works with the new phongap version. Nothing is happening and I copied everything. The download you provided looks just like my file structure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740823">7</a> by Raymond Camden
		posted on 8/9/2012 at 10:44 PM
		</div>
		<div class="comment_text"><p>It could be that the plugin has not been updated for recent PG versions. Are you using PG 2.0?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740828">8</a> by Mikey Reppy
		posted on 9/19/2012 at 6:09 AM
		</div>
		<div class="comment_text"><p>I too cannot get it working yet with PG 2.0.0.  The example as downloaded using PG 1.6.1 works as supplied, but at least my first attempt with PG 2 is not working.  I'm also trying to work it in with gwt-phonegap, but since the 1.6 example works, I'm going to work through it stepwise to see what I can find out.</p><p>I see that the intent filter is registered, the youtube link/URL gets intercepted on load and passed into my app, but the url response callback does not fire with the URL the way it does in the 1.6 example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740827">9</a> by Raymond Camden
		posted on 9/19/2012 at 6:25 AM
		</div>
		<div class="comment_text"><p>I'd get the latest WebIntent from here (<a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphonegap%2Fphonegap-plugins%2Ftree%2Fmaster%2FAndroid%2FWebIntent%29%3Aa1ccxmZnlNwXKOJ568ZaQ8naRIM&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/phonegap/phonegap-plugins/tree/master/Android/WebIntent)">https://github.com/phonegap...</a> and see if that helps. Be sure to read his <a href="http://disq.us/url?url=http%3A%2F%2Freadme.md%3AnuG2CYdJ3O4OsH-DDyRHMrLjIB4&amp;cuid=3321886" rel="nofollow noopener" title="readme.md">readme.md</a> in case the API changed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740826">10</a> by AliBhai
		posted on 10/10/2012 at 8:47 PM
		</div>
		<div class="comment_text"><p>does webintent can be used to open local pdf file packaged with android app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740825">11</a> by Mikey Reppy
		posted on 10/10/2012 at 10:58 PM
		</div>
		<div class="comment_text"><p>Getting back to this, it does work with PhoneGap 2.0.  I can post a complete solution but the last most maddening thing is that there needs to be a plugin reference in config.xml (res/xml/config.xml) for the WebIntent class, and without that you get very inscrutable class not found errors.</p><p>this stackoverflow page was the clearest answer:<br><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F9992433%2Fphonegap-1-4-1-webintent-plugin-error-class-not-found-android%3Af8K1brU4l0X5Yl9tY9xUKEs95EY&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/9992433/phonegap-1-4-1-webintent-plugin-error-class-not-found-android">http://stackoverflow.com/qu...</a></p><p>This one is also helpful: <br><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F11857958%2Fphonegap-class-not-found-at-file-android-asset-www-cordova-2-0-0-js938%3AEn6ir9TKAPvXiF9GW0VNx8Lc6QM&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/11857958/phonegap-class-not-found-at-file-android-asset-www-cordova-2-0-0-js938">http://stackoverflow.com/qu...</a></p><p>I am now going to move on and see if I can integrate this with gwt-phonegap! :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740829">12</a> by Raymond Camden
		posted on 10/10/2012 at 11:04 PM
		</div>
		<div class="comment_text"><p>@Mikey: I'm actually doing a blog post related to this in about 20 minutes. :)</p><p>@AliBhai: You don't use an Intent to open a file, rather, you broadcast the desire to open a file and apps that have said they respond to such intents ("I can open PDFs!") will respond.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740831">13</a> by ArneO
		posted on 12/27/2012 at 5:50 PM
		</div>
		<div class="comment_text"><p>What about the send event? Is phonegap able to show the URL from a browser if your app is invoked via the "share"-list (send activity)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740830">14</a> by Luca
		posted on 1/23/2013 at 2:25 PM
		</div>
		<div class="comment_text"><p>Hi, im using this page to catch the text passed throught an application that call my one.<br>For example: i open an application that has got the "share" button, i press button and there is my app in the list.<br>When i click my app, it opens and tell me the EXTRA_TEXT, used to call my app.</p><p>I did something like this, but it doesnt work :(</p><p>document.addEventListener("deviceready", onDeviceReady, false);<br>    // Cordova is ready<br>    function onDeviceReady() {<br>	console.log("Device Ready");</p><p>	window.plugins.webintent.getExtra(WebIntent.EXTRA_TEXT, <br>    function(url) {<br>        // url is the value of EXTRA_TEXT<br>        alert(url);<br>    }, function() {<br>        // There was no extra supplied.<br>    }<br>);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740832">15</a> by Raymond Camden
		posted on 1/23/2013 at 8:58 PM
		</div>
		<div class="comment_text"><p>How did it fail?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740833">16</a> by Luca
		posted on 1/23/2013 at 9:25 PM
		</div>
		<div class="comment_text"><p>i putted<br>alert("nothing"); in the<br>function() {<br>// There was no extra supplied.<br>}<br>and it everytime execute that alert, instead of alert(url).</p><p>This is in the Manifest:<br>&lt;intent-filter&gt;<br>   &lt;action android:name="android.intent.action.SEND" /&gt;<br>   &lt;category android:name="android.intent.category.DEFAULT" /&gt;              <br>   &lt;data android:host="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.youtube.com%3AkaBh6he0hawS7Br2jwu2cqjC7lI&amp;cuid=3321886" rel="nofollow noopener" title="www.youtube.com">www.youtube.com</a>" android:mimeType="text/*" /&gt;<br>&lt;/intent-filter&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740834">17</a> by Raymond Camden
		posted on 1/23/2013 at 9:51 PM
		</div>
		<div class="comment_text"><p>Not sure. I'd try the hasExtra API to see if it has something at all. Maybe try some of the other EXTRAs defined in the code - <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphonegap%2Fphonegap-plugins%2Fblob%2Fmaster%2FAndroid%2FWebIntent%2Fwebintent.js%3AARgkF-KcvQ6XgMReuEZzccchkmo&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/phonegap/phonegap-plugins/blob/master/Android/WebIntent/webintent.js">https://github.com/phonegap...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740837">18</a> by Luca
		posted on 1/24/2013 at 2:02 AM
		</div>
		<div class="comment_text"><p>im sorry but im rly noob with this things!!!<br>First of all thank you for your help!!!!<br>I tried this way:</p><p>window.plugins.webintent.hasExtra(WebIntent.EXTRA_STREAM, <br>    function(url) {<br>        // url is the value of EXTRA_TEXT<br>        alert("parametri");<br>    }, function() {<br>        // There was no extra supplied.<br>        alert("niente");<br>    }</p><p>with all EXTRA_stuff, but it still print "niente".<br>Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740838">19</a> by Raymond Camden
		posted on 1/24/2013 at 2:38 AM
		</div>
		<div class="comment_text"><p>I bet I know what it is. Check this blog entry:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F10%2F10%2FPhoneGap-Parsecom-and-Push-Notifications%3AJ6L0L3Q1QpOwIkp47GC5a0hAMG4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/10/10/PhoneGap-Parsecom-and-Push-Notifications">http://www.raymondcamden.co...</a></p><p>and note how I had to 'recognize' the data from Parse's push stuff. Specifically:</p><p>window.plugins.webintent.hasExtra("com.parse.Data"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740835">20</a> by Luca
		posted on 1/24/2013 at 11:52 PM
		</div>
		<div class="comment_text"><p>Thank you another time.<br>Based on your suggestion i tried a bit of debug:<br>private static final String TAG = "ProvaIntent";<br>Bundle extras = getIntent().getExtras();<br>        if (extras == null) {<br>        	Log.d(TAG, "error");<br>        }else{<br>        	String value1 = extras.getString(Intent.EXTRA_TEXT);<br>        	Log.d(TAG, value1);<br>        }</p><p>It works: when i call my program from Youtube Share link, it print the youtube link, when i call it from my computer (Run on Eclipse), it prints "error"!!<br>But i don't know which is the right string to catch the EXTRA_TEXT.<br>I tried with "android.intent.extra.TEXT" as seen on the Android Developers Guide, but it doesnt work!<br>So I have only to understand wich is the right string! :)</p><p>Thank you!!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740841">21</a> by Raymond Camden
		posted on 1/25/2013 at 2:05 AM
		</div>
		<div class="comment_text"><p>So.... you're good?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740840">22</a> by Luca
		posted on 1/25/2013 at 4:16 AM
		</div>
		<div class="comment_text"><p>Not rally because I catched the link in my MainActivity with Java, but i can't catch it in javascript and webintent!</p><p>Luca</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740845">23</a> by Raymond Camden
		posted on 1/25/2013 at 5:55 PM
		</div>
		<div class="comment_text"><p>Not sure what to suggest then. If you want, you could send me the code and I could try here, but that crosses the line into paid support. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740846">24</a> by Luca
		posted on 1/26/2013 at 5:14 AM
		</div>
		<div class="comment_text"><p>Thank you for your help, but i'm doing it only a diversion!!!!<br>Thank you, my friend ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740844">25</a> by Yves
		posted on 1/28/2013 at 1:39 AM
		</div>
		<div class="comment_text"><p>Unfortunately I can't get it run.<br>I added the &lt;intent-filter&gt; with an &lt;action&gt; "android.intent.category", &lt;category&gt; "android.intent.category.DEFAULT" and "android.intent.category.BROWSABLE", added the plugin as described but nothing happens if I click on the link or android is just asking for other apps to open with and not my own.</p><p>Could it be that the plug-in isn't working with cordova/phonegap 2.2.0?</p><p>Or do you know another proper way to handle this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740843">26</a> by Yves
		posted on 1/28/2013 at 1:42 AM
		</div>
		<div class="comment_text"><p>Sorry the &lt;action&gt; is "android.intent.action.VIEW" not "android.intent.category" as written.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740842">27</a> by Raymond Camden
		posted on 1/28/2013 at 4:39 PM
		</div>
		<div class="comment_text"><p>As far as I know this should work just fine with the latest, but I'll give it another try with 2.3.0 just to be sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740848">28</a> by Yves
		posted on 1/30/2013 at 1:55 AM
		</div>
		<div class="comment_text"><p>Now I get it run but just with an fictive intent-scheme like "android-intent" and a link pointing to "href='android-intent://'" with an url like youtube or wikipedia it's bizarrely still not asking for my app.<br>In general it's good because now I can change from an url to my app but unfortunately the webIntent plug-ins method "getUri(function(url)){}" is not getting fired and the url passed is always "null".<br>You have any idea?</p><p>thanks, regards<br>yves</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740849">29</a> by Raymond Camden
		posted on 1/30/2013 at 8:51 AM
		</div>
		<div class="comment_text"><p>No. As I said, I'm going to set up a new test w/ 2.3.0. I just haven't had time yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740850">30</a> by Raymond Camden
		posted on 2/8/2013 at 1:33 AM
		</div>
		<div class="comment_text"><p>So, I can confirm me that URL filtering is no longer working. Not sure why, but looking more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740852">31</a> by Raymond Camden
		posted on 2/22/2013 at 3:00 AM
		</div>
		<div class="comment_text"><p>I just tried with a virgin 2.4.0 PhoneGap project and it _did_ work ok for me. When I visited a YouTube link (like in my demo above), it asked me if I wanted to use my new app.</p><p>Want me to send you a zip of my code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740855">32</a> by Yves
		posted on 2/25/2013 at 5:27 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond.<br>It would be nice if you could send me your code. But could you grab the url as well?<br>Because I could trigger my app by using the intent Filter too.</p><p>			&lt;intent-filter&gt;<br>				&lt;data android:scheme="http" android:host="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.domain.com%3ADh3m9vGo77tocnvebZP2ZHGeXj0&amp;cuid=3321886" rel="nofollow noopener" title="www.domain.com">www.domain.com</a>" android:pathPattern=".*" /&gt;<br>				&lt;action android:name="android.intent.action.VIEW" /&gt;<br>				&lt;category android:name="android.intent.category.BROWSABLE" /&gt;<br>				&lt;category android:name="android.intent.category.DEFAULT" /&gt;<br>			&lt;/intent-filter&gt;</p><p>The important point is to add the `android:pathPattern` attribute to open your app by using the _host_ attribute together with the _scheme_ attribute.<br>That means, you could just use the _scheme_ attribute alone or you have to use all three:<br>- _scheme_<br>- _host_<br>- _path_ or _pathPattern_<br>Just for somebody who has the same issue.</p><p>Now I've the problem that I just get `null` returned as URI. Have you had the same issue?<br>There are some deprecation warnings in the _WebIntent_  Java class, maybe it could be a problem related to this warnings.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740857">33</a> by Raymond Camden
		posted on 2/25/2013 at 6:40 AM
		</div>
		<div class="comment_text"><p>Shoot, I'm sorry, I didn't test getting the url, just the intent working. Will test in the morning.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740859">34</a> by Yves
		posted on 2/25/2013 at 4:00 PM
		</div>
		<div class="comment_text"><p>Nice, you changed your design. Looks good.<br>I figured out what the problem was in my case.<br>It's not because of the cordova version or the webintent plug-in,<br>but in some kind the "nfc-plugin.js"<br>(<a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fchariotsolutions%2Fphonegap-nfc%29%3AxRONmPK1aGJyE6E8X-1nbKX6GMw&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/chariotsolutions/phonegap-nfc)">https://github.com/chariots...</a> is somehow interfering with the webintent.js. Unfortunately I need both js files, so I have to figure out what the problem exactly is.</p><p>Thanks for your time and help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740863">35</a> by Yves
		posted on 2/25/2013 at 4:00 PM
		</div>
		<div class="comment_text"><p>Nice, you changed your design. Looks good.<br>I figured out what the problem was in my case.<br>It's not because of the cordova version or the webintent plug-in,<br>but in some kind the "nfc-plugin.js"<br>(<a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fchariotsolutions%2Fphonegap-nfc%29%3AxRONmPK1aGJyE6E8X-1nbKX6GMw&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/chariotsolutions/phonegap-nfc)">https://github.com/chariots...</a> is somehow interfering with the webintent.js. Unfortunately I need both js files, so I have to figure out what the problem exactly is.</p><p>Thanks for your time and help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740856">36</a> by Yves
		posted on 2/25/2013 at 4:36 PM
		</div>
		<div class="comment_text"><p>Ok, I got it. <br>Both plugins are using the "cordova.addConstructor()" method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740860">37</a> by Yves
		posted on 2/25/2013 at 4:58 PM
		</div>
		<div class="comment_text"><p>Sorry, for my comment spamming. That will be the last one.<br>"In Cordova 2.0 the addConstructor has been removed and checking for Cordova is not necessary.." - Source: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F10587398%2Fcordova-custom-plugin-structure-w-o-callbacks%3AFEO3glCSe8Y9Z1Bhr9-VR8dM46E&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/10587398/cordova-custom-plugin-structure-w-o-callbacks">http://stackoverflow.com/qu...</a></p><p>Cheers, yves</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740861">38</a> by Raymond Camden
		posted on 2/25/2013 at 6:03 PM
		</div>
		<div class="comment_text"><p>Dude, this is not spamming at all. Thank you _so_ much for sharing this. I'd recommend filing a bug report on both plugins.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740865">39</a> by Yves
		posted on 2/28/2013 at 2:39 PM
		</div>
		<div class="comment_text"><p>You're right. I will do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740862">40</a> by Adam
		posted on 11/9/2013 at 11:34 PM
		</div>
		<div class="comment_text"><p>That old plugin is deprecated. But here is a link to a new repo that is updated to phonegap 3.x: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FInQBarna%2FWebIntent%3A3CsIGSYOd-ejrFA1E4LTZvQe9VY&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/InQBarna/WebIntent">https://github.com/InQBarna...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740858">41</a> by Raymond Camden
		posted on 11/10/2013 at 1:56 AM
		</div>
		<div class="comment_text"><p>Thanks for sharing that, Adam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740854">42</a> by metamagicson
		posted on 4/8/2014 at 9:15 PM
		</div>
		<div class="comment_text"><p>Hi Raymond.</p><p>Thank you for this explantation. But i wonder how i can catch the Intent if a running application is brought back to front on resume. I use the following listener: document.addEventListener("resume", refreshIntentReq, false); But when i try to catch the intent from within refreshIntentReq, the shared intent is empty.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740866">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740866">43</a> by Vitaly
		posted on 6/26/2014 at 6:39 AM
		</div>
		<div class="comment_text"><p>Hello all.<br>I am Vitaly.</p><p>I want to get the file absolute path from email attached file.<br>I made the phonegap app .<br>when tap attached file on mail, my app run successfully.<br>but now, I need to read the file content with my phonegap app.</p><p>so I need your help to get file path or how to read the file content?</p><p>Thanks so much<br>Look forward to your hearing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740864">44</a> by Raymond Camden
		posted on 6/26/2014 at 6:39 PM
		</div>
		<div class="comment_text"><p>Is it passed in the intent? If so - just use the File API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740867">45</a> by Vitaly
		posted on 6/26/2014 at 6:50 PM
		</div>
		<div class="comment_text"><p>thanks for your reply.<br>I used this plugin<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FInitsogar%2Fcordova-webintent%3AQMoxO19_nMuWrVrml56RejLOwT0&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/Initsogar/cordova-webintent">https://github.com/Initsoga...</a></p><p>manifest to assign our app to the file extension, we have in mind:<br><a href="https://disq.us/url?url=https%3A%2F%2Fwww.dropbox.com%2Fs%2F4c8h0y3v0jfhw1i%2FAndroidManifest.txt%3AuGAxJpfivC6d1tN6x2nzbrXoMEU&amp;cuid=3321886" rel="nofollow noopener" title="https://www.dropbox.com/s/4c8h0y3v0jfhw1i/AndroidManifest.txt">https://www.dropbox.com/s/4...</a><br>    .skt   <br>to our app.</p><p>I wrote the basic "ondeviceready" function to see, what is in the intent parameter:</p><p>    onDeviceReady: function() {<br>        window.plugins.webintent.getUri(function(url) {<br>            if(url !== "" &amp;&amp; url.length &gt; 5) {<br>                // url is the url the intent was launched with<br>                window.plugins.contentproviderplugin.query({<br>                    contentUri: url,<br>                }, function (data) {<br>                    alert(JSON.stringify(data));<br>                }, function (err) {<br>                    alert("error query");<br>                });<br>            }<br>        });</p><p>the cordova plugins added were (only the first 2 are important for that):</p><p>ralfs-air:enableJS puzzler$ cordova plugin ls</p><p>com.borismus.webintent 1.0.0 "WebIntent"<br>com.phearme.cordovaplugin.ContentProviderPlugin 0.2.6 "ContentProviderPlugin"<br><a href="http://disq.us/url?url=http%3A%2F%2Fde.appplant.cordova.plugin.email%3A1gBOlof9zWra3r07ovEV4lTvrF8&amp;cuid=3321886" rel="nofollow noopener" title="de.appplant.cordova.plugin.email">de.appplant.cordova.plugin....</a>-composer 0.8.1 "EmailComposer"<br>org.apache.cordova.console 0.2.8 "Console"<br>org.apache.cordova.device 0.2.9 "Device"<br>org.apache.cordova.dialogs 0.2.7 "Notification"<br>org.apache.cordova.inappbrowser 0.4.0 "InAppBrowser"<br>org.apache.cordova.splashscreen 0.3.0 "Splashscreen"<br>org.apache.cordova.statusbar 0.1.3 "StatusBar"</p><p>But we get the "content://blabla..." url which I can not work with... lack of brain ;-)</p><p>Regards,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740869">46</a> by Raymond Camden
		posted on 6/26/2014 at 10:20 PM
		</div>
		<div class="comment_text"><p>Ah, well then I think you may be out of luck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740868">47</a> by Vitaly
		posted on 6/26/2014 at 10:40 PM
		</div>
		<div class="comment_text"><p>Hi.<br>I can get "content://com.android.email.attachmentprovider/1/32/RAW" <br>instead of:<br>/sdcard/Download/Attachments/1.skt</p><p>so I don't have any idea to read  this.</p><p>I need your help for this.</p><p>Look forward to your hearing.<br>Regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740872">48</a> by Vitaly
		posted on 6/26/2014 at 10:42 PM
		</div>
		<div class="comment_text"><p>and I get some article from there.<br><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F15351591%2Fopening-zip-file-from-email-giving-bad-uri-path%3Ay4QHSZzUb48ElNxaQP3BxQsvXWM&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/15351591/opening-zip-file-from-email-giving-bad-uri-path">http://stackoverflow.com/qu...</a></p><p>unfortunately, this is not phonegap, so I also stopped to work.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740871">49</a> by Raymond Camden
		posted on 6/26/2014 at 10:44 PM
		</div>
		<div class="comment_text"><p>I don't know - I'd recommend asking on the Google group for PhoneGap. I'm pretty busy at the moment so I can't help you with this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740873">50</a> by Vitaly
		posted on 6/26/2014 at 10:49 PM
		</div>
		<div class="comment_text"><p>I mean I need your help if you have time.</p><p>yeah, sure I will ask on the google group.<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740875">51</a> by Aswathi
		posted on 8/18/2014 at 3:36 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>Now iam developing a phonegap appliaction which download some files from server. after download i want to open file with default application viewer in phone. I have downloaded all files and put it to a folder. But  could not open file from my folder.  I have to open different format files such as doc/xls/pdf/image etc. Could you please do help.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740874">52</a> by Raymond Camden
		posted on 8/18/2014 at 3:48 PM
		</div>
		<div class="comment_text"><p>What did you try? After the download I mean - what did you try to open the file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740877">53</a> by Aswathi
		posted on 8/18/2014 at 3:58 PM
		</div>
		<div class="comment_text"><p>I have tried to open that file using</p><p>window.plugins.webintent.startActivity({<br>	action: WebIntent.ACTION_VIEW,<br>	url:file:///sdcard/MyApp/pdffile.pdf }, <br>	function() {}, <br>	function(e) {alert('Failed to open URL via Android Intent');}<br>);<br>also tried fileopener,</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwindow.plugins.fileOpener.open%3AcAUNin6U7w-LzXQMgduIAZ18qv4&amp;cuid=3321886" rel="nofollow noopener" title="window.plugins.fileOpener.open">window.plugins.fileOpener.open</a>("file:///sdcard/MyApp/pdffile.pdf");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740878">54</a> by Raymond Camden
		posted on 8/18/2014 at 4:03 PM
		</div>
		<div class="comment_text"><p>And did you see anything in the console when you tried this?</p><p>As a general FYI, in order for me to help someone, I need to know what you tried and what was reported when you did. Using remote debugging should tell you if some error was thrown.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740881">55</a> by Aswathi
		posted on 8/18/2014 at 4:16 PM
		</div>
		<div class="comment_text"><p>I have started my phonegap application 1 month back. I did not try remote debugging yet. Now iam Building APK from adobe site(<a href="https://disq.us/url?url=https%3A%2F%2Fbuild.phonegap.com%2F%29%3A_2W1dDr32AMhnpYB2W9wSfsgVWs&amp;cuid=3321886" rel="nofollow noopener" title="https://build.phonegap.com/)">https://build.phonegap.com/)</a> by uploading Zip file not by eclipse and ADT. The issue is with i could not open the file that i have downloaded with polaris viewer or any other default application based on file format.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740883">56</a> by Raymond Camden
		posted on 8/18/2014 at 4:37 PM
		</div>
		<div class="comment_text"><p>Please test with remote debugging. If you view this site's About section you will see a list of articles I've written. There are a few articles there on that topic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740885">57</a> by Aswathi
		posted on 8/18/2014 at 4:47 PM
		</div>
		<div class="comment_text"><p>Thanks for your valuable time. I will check with remote debugging.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740886">58</a> by Aswathi
		posted on 8/19/2014 at 11:52 AM
		</div>
		<div class="comment_text"><p>hi, my application need some modification now, need to open file inside application . do you have any idea to open files inside application. Is there any API for this. Please do help.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740884">59</a> by Raymond Camden
		posted on 8/20/2014 at 4:44 AM
		</div>
		<div class="comment_text"><p>I'd try window.location = the path. To see if that forces it to try to open.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740888">60</a> by Aswathi
		posted on 8/20/2014 at 8:08 AM
		</div>
		<div class="comment_text"><p>That will open only image/pdf files. I want to view doc/xls file format also. Just like email client attachment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740891">61</a> by Raymond Camden
		posted on 8/20/2014 at 3:12 PM
		</div>
		<div class="comment_text"><p>Then you got me there. Not sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740890">62</a> by sergey m
		posted on 11/9/2014 at 7:41 AM
		</div>
		<div class="comment_text"><p>Hello,</p><p>Is it usable for WebIntent to make app phone calling strightforward? Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740889">63</a> by Raymond Camden
		posted on 11/10/2014 at 12:27 AM
		</div>
		<div class="comment_text"><p>????</p></div>
	</div>
</div>
		
<div class="comment" id="c_1799725268">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_0yiUg6DJPw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1799725268">64</a> by Peter Frazier
		posted on 1/18/2015 at 4:08 PM
		</div>
		<div class="comment_text"><p>thank you so much.  i started looking at cordova/phonegap yesterday and got all excited but hit a wall 30 min in on how to pull in shared info into my app.  I am surprised how this isn't step 2 in any of the doc's.  i've been searching for the better part of 10 hours trying to find a tutorial like yours.  I was about to give up and just go with copy/paste and shelve it until after..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1799733793">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1799733793">65</a> (In reply to <a href="#c_1799725268">#64</a>) by Raymond Camden
		posted on 1/18/2015 at 4:15 PM
		</div>
		<div class="comment_text"><p>I'm glad this almost 3 year old post is helpful. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1929697015">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1929697015">66</a> (In reply to <a href="#c_1929479166">#0</a>) by Raymond Camden
		posted on 3/26/2015 at 6:56 PM
		</div>
		<div class="comment_text"><p>Not really. If the web page was changed because of something happening on the server (imagine a web socket connection for ex), then the same thing on the server that triggered the web page change could *also* do a push notification.</p><p>Or heck - use web sockets. Looks to be supported well: <a href="http://disq.us/url?url=http%3A%2F%2Fcaniuse.com%2F%23feat%3Dwebsockets%3ADWXa_u5V94JnoWgFSf7splEs2BM&amp;cuid=3321886" rel="nofollow noopener" title="http://caniuse.com/#feat=websockets">http://caniuse.com/#feat=we...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2204537052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2204537052">67</a> by Majid
		posted on 8/20/2015 at 9:04 AM
		</div>
		<div class="comment_text"><p>Hi <br>First, very thanks for your good tutorial <br>now i want to ask, can i have this application source code? <br>attached files in that tutorial doesn't exist!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2204877610">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2204877610">68</a> (In reply to <a href="#c_2204537052">#67</a>) by Raymond Camden
		posted on 8/20/2015 at 2:00 PM
		</div>
		<div class="comment_text"><p>Fixed!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2398374702">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_RdWH33k2gO.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2398374702">69</a> by Steve Daily
		posted on 12/7/2015 at 8:23 PM
		</div>
		<div class="comment_text"><p>Thanks very much for the helpful tutorial. I am using PhoneGap Build and have tried a couple different WebIntent plugins, including Tunts' and InQBarna's. When I click on a link such as "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.youtube.com%3AkaBh6he0hawS7Br2jwu2cqjC7lI&amp;cuid=3321886" rel="nofollow noopener" title="www.youtube.com">www.youtube.com</a>" I see my app listed as an option, but selecting it causes my app to immediately crash, with nothing written to the console, so remote debugging this is very hard. I am wondering if the problem might be this part of my config.xml:</p><p>activity android:name="SomeString".</p><p>I cannot figure out what is supposed to be in that name field. When I insert my app's actual name from the config.xml name field, the PhoneGap build fails. So I am just inserting an arbitrary string, which allows the build to proceed, but perhaps is leading to these crashes. Any advice would be greatly appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2398387869">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2398387869">70</a> (In reply to <a href="#c_2398374702">#69</a>) by Raymond Camden
		posted on 12/7/2015 at 8:31 PM
		</div>
		<div class="comment_text"><p>Sorry - you got me there. I'd try *outside* of PGBuild first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2480032533">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_x3eBL7fDae.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2480032533">71</a> by Kevin Reynolds
		posted on 1/27/2016 at 2:46 AM
		</div>
		<div class="comment_text"><p>Great tutorial. Wondering whether you have a working link to the test project you have written.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2480556302">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2480556302">72</a> (In reply to <a href="#c_2480032533">#71</a>) by Raymond Camden
		posted on 1/27/2016 at 11:58 AM
		</div>
		<div class="comment_text"><p>You can now find it at: <a href="http://disq.us/url?url=http%3A%2F%2Fstatic.raymondcamden.com%2Fenclosures%2Fintenttest.zip%3A_3BEc0fuEoj0IK2rF-G7dWOYC24&amp;cuid=3321886" rel="nofollow noopener" title="http://static.raymondcamden.com/enclosures/intenttest.zip">http://static.raymondcamden...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2966011138">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_dSHmA4hOaI.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2966011138">73</a> by Emre Celik
		posted on 10/24/2016 at 8:43 AM
		</div>
		<div class="comment_text"><p>I can't get it work for skype for business uri. How can i use for ms-sfb://start  ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2966299347">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2966299347">74</a> (In reply to <a href="#c_2966011138">#73</a>) by Raymond Camden
		posted on 10/24/2016 at 1:53 PM
		</div>
		<div class="comment_text"><p>If you are using the proper intent, than I'm not sure what to suggest outside of contacting the owner of the plugin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3602949926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3602949926">75</a> by Manul King
		posted on 11/6/2017 at 4:08 PM
		</div>
		<div class="comment_text"><p>Can you redo the zip file link it is broken</p></div>
	</div>
</div>
		
<div class="comment" id="c_3602953351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3602953351">76</a> (In reply to <a href="#c_3602949926">#75</a>) by Manul King
		posted on 11/6/2017 at 4:10 PM
		</div>
		<div class="comment_text"><p>Soorry did not read down far enough I found it thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3607959990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3607959990">77</a> by MAnuel King
		posted on 11/9/2017 at 2:16 PM
		</div>
		<div class="comment_text"><p>Ray<br>When I add the &lt;application&gt; tag above to the config.xml file then attemp to generate a phonegap build the application tag cause a build error. Is there a work around?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3609611392">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3609611392">78</a> (In reply to <a href="#c_3607959990">#77</a>) by Raymond Camden
		posted on 11/10/2017 at 2:01 PM
		</div>
		<div class="comment_text"><p>Um - not sure. I'd check with the PG Build docs - support - etc. I haven't used PGB in years.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3903697357">
	<div>
		<img src="https://disqus.com/api/users/avatars/abhilash_raj_r_s.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3903697357">79</a> by Abhilash Raj R.S
		posted on 5/16/2018 at 7:03 PM
		</div>
		<div class="comment_text"><p>How can i use this tutorial with phonegap desktop build.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3903699366">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3903699366">80</a> (In reply to <a href="#c_3903697357">#79</a>) by Raymond Camden
		posted on 5/16/2018 at 7:04 PM
		</div>
		<div class="comment_text"><p>No idea on that one. Last time I checked I didn't think it supported plugins well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3903711158">
	<div>
		<img src="https://disqus.com/api/users/avatars/abhilash_raj_r_s.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3903711158">81</a> (In reply to <a href="#c_3903699366">#80</a>) by Abhilash Raj R.S
		posted on 5/16/2018 at 7:11 PM
		</div>
		<div class="comment_text"><p>wht the other option i can add Intent to my application</p></div>
	</div>
</div>
		
<div class="comment" id="c_3903713007">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3903713007">82</a> (In reply to <a href="#c_3903711158">#81</a>) by Raymond Camden
		posted on 5/16/2018 at 7:12 PM
		</div>
		<div class="comment_text"><p>I'd use the command line.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3903719467">
	<div>
		<img src="https://disqus.com/api/users/avatars/abhilash_raj_r_s.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3903719467">83</a> (In reply to <a href="#c_3903713007">#82</a>) by Abhilash Raj R.S
		posted on 5/16/2018 at 7:16 PM
		</div>
		<div class="comment_text"><p>can u suggest a tutorial so i can study the command line usage</p></div>
	</div>
</div>
		
<div class="comment" id="c_3903720830">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3903720830">84</a> (In reply to <a href="#c_3903719467">#83</a>) by Raymond Camden
		posted on 5/16/2018 at 7:17 PM
		</div>
		<div class="comment_text"><p>I'd start here: <a href="http://disq.us/url?url=http%3A%2F%2Fcordova.apache.org%2Fdocs%2Fen%2Flatest%2F%3Apz0NM3WcuDOyoyVJX1IYmZIYS7c&amp;cuid=3321886" rel="nofollow noopener" title="http://cordova.apache.org/docs/en/latest/">http://cordova.apache.org/d...</a></p><p>I have a book you can buy too (grin), but it is a few years old.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3903804108">
	<div>
		<img src="https://disqus.com/api/users/avatars/abhilash_raj_r_s.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3903804108">85</a> (In reply to <a href="#c_3903720830">#84</a>) by Abhilash Raj R.S
		posted on 5/16/2018 at 8:10 PM
		</div>
		<div class="comment_text"><p>can i import the current PGB project to CLI</p></div>
	</div>
</div>
		
<div class="comment" id="c_3903808758">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3903808758">86</a> (In reply to <a href="#c_3903804108">#85</a>) by Raymond Camden
		posted on 5/16/2018 at 8:13 PM
		</div>
		<div class="comment_text"><p>Um - I don't believe so.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3904452642">
	<div>
		<img src="https://disqus.com/api/users/avatars/abhilash_raj_r_s.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3904452642">87</a> (In reply to <a href="#c_3903808758">#86</a>) by Abhilash Raj R.S
		posted on 5/17/2018 at 5:51 AM
		</div>
		<div class="comment_text"><p>also send link to your book</p></div>
	</div>
</div>
		
<div class="comment" id="c_3904653172">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3904653172">88</a> (In reply to <a href="#c_3904452642">#87</a>) by Raymond Camden
		posted on 5/17/2018 at 11:05 AM
		</div>
		<div class="comment_text"><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.amazon.com%2Fgp%2Fproduct%2F1633430065%2Fref%3Das_li_tl%3Fie%3DUTF8%26tag%3Draymondcamd06-20%26camp%3D1789%26creative%3D9325%26linkCode%3Das2%26creativeASIN%3D1633430065%26linkId%3D77fe8ca57d4789f895c2d1f7c20d8422%3ANMLbhq7pXIgtQbTTKh2iRJ1vjRI&amp;cuid=3321886" rel="nofollow noopener" title="https://www.amazon.com/gp/product/1633430065/ref=as_li_tl?ie=UTF8&amp;tag=raymondcamd06-20&amp;camp=1789&amp;creative=9325&amp;linkCode=as2&amp;creativeASIN=1633430065&amp;linkId=77fe8ca57d4789f895c2d1f7c20d8422">https://www.amazon.com/gp/p...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3907265334">
	<div>
		<img src="https://disqus.com/api/users/avatars/abhilash_raj_r_s.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3907265334">89</a> by Abhilash Raj R.S
		posted on 5/18/2018 at 11:46 PM
		</div>
		<div class="comment_text"><p>is this i have to add on the config.xml <br>&lt;plugin name="com.qdev.webintent" spec="<a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fokwei2000%2Fwebintent.git%3A2cJ2wfpS3NVbrEVIll7WdEO0H-c&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/okwei2000/webintent.git">https://github.com/okwei200...</a>"/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_3907826841">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3907826841">90</a> (In reply to <a href="#c_3907265334">#89</a>) by Raymond Camden
		posted on 5/19/2018 at 12:51 PM
		</div>
		<div class="comment_text"><p>I honestly don't remember - this post is six years old. :) I can say plugins should be adding their own strings to config.xml as far as I know.</p></div>
	</div>
</div>
		