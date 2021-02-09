
<div class="comment" id="c_1714082609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082609">1</a> by Joseph Labrecque
		posted on 4/12/2014 at 12:10 AM
		</div>
		<div class="comment_text"><p>From the perspective of someone who uses and teaches PhoneGap: I don't think Node or NPM is really what irks people. It is rather that there is so much else to configure. Let me give you n example: on my Windows machine... (hold your tongue, Macaholics!) ... I installed Node just fine... npm to bring down phonegap and ripple just fine... the problem comes into play when I need to ALSO get the Android SDK and tools... ANT... Java... change a bunch of PATH settings... set up my machine as if I were doing native Android dev, really. At that point - I may as well be doing native Android development.</p><p>Now, I understand that this isn't exactly any fault of Apache or Adobe... just saying I don't think Node/npm is he problem here.</p><p>(Am I defending Node??? OMG.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082605">2</a> by Rob Lauer
		posted on 4/12/2014 at 1:13 AM
		</div>
		<div class="comment_text"><p>It's interesting to hear that people are continually frustrated by tooling and the "on-boarding" process to get up and running with PhoneGap/Cordova. Services like Telerik AppBuilder and PhoneGap Build really have shown that you don't need to go through all of those setup routines. (Disclaimer: I am Product Manager for Telerik AppBuilder). I love Cordova and am continually impressed by its maturation over the last couple of years - but it is still young in many ways. However, people are always surprised once you show them how much you really can do (and how performant you can make hybrid apps).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082613">3</a> by Joseph Labrecque
		posted on 4/12/2014 at 1:32 AM
		</div>
		<div class="comment_text"><p>I think a lot of people coming from Adobe tooling (Flash Builder and AIR for mobile app dev) are shocked because it is so very different. With that platform you just build it and then compile for the platforms you want. Done.</p><p>Agreed that Build negates some of this - but still if you want access to dev tooling and even the phonegap stuff inherent in Node - you still need to grab and config a lot of stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082607">4</a> by Gary F
		posted on 4/12/2014 at 2:40 PM
		</div>
		<div class="comment_text"><p>I like this comment: "What the hell is Cordova anyway? Docs just start talking about it like I'm supposed to know". This is exactly what I was thinking. (I didn't write that comment BTW)</p><p>I get that node is supposed to be this foundation of development goodness(!?) but the PhoneGap docs don't explain the basics, it makes big assumptions that *all* devs are familiar with it and understand the CLI required to use Phonegap.</p><p>There are ample of tutorials to teach JavaScript and HTML5, but I have no idea how to create the phonegap.js file for PG. Why isn't this file available on their website that can be copied into my apps' folder and used without having to do anything else? Just give me that missing file so I don't have to get my head around node, please! :-)</p><p>Devs need to learn new things from somewhere and there's a lack of tutorials (or patches of mist) when it comes to getting started with PG. Ray, any tutorials you do are warmly received, as always. The remote debugging tutorial sounds good. I can't stand the slow desktop emulators, it feels quicker to user PGB with Hydration and a real mobile device.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082612">5</a> by Raymond Camden
		posted on 4/12/2014 at 5:56 PM
		</div>
		<div class="comment_text"><p>@JL: I agree that the initial install can take a little while, but I'm not sure I agree with your last statement ("I might as well be doing native..."). I view myself as an Android and iOS developer, even when I'm using Cordova. Having to have the SDKs just seems like a natural part of the process even if I'm not doing native.</p><p>@RL: I like PGB (and haven't tried your service yet - I want to) and I can see the appeal -  but as I said above - I see it as a compliment to building locally.</p><p>@JL2: Interesting point here. I don't think of Cordova as an Adobe thing. PhoneGap technically is. But I don't come to it with expectations of it being as easy a Flex, but I definitely can see how folks may do so.</p><p>@GF: "I get that node is supposed to be this foundation of development goodness(!?) but the PhoneGap docs don't explain the basics, it makes big assumptions that all devs are familiar with it and understand the CLI required to use Phonegap."</p><p>To be clear, Node is not required. You aren't learning Node. You are installing Node to just get npm, which again, is used *quite* a bit in development. Maybe we can make that more clear? As for the CLI, no one expects you to know the CLI immediately after installing - that's why we have docs. ;) And the CLI itself will print help to the screen (and again, this is pretty standard for CLI tools). If you have *0* experience with doing stuff CLI, well, this will be different, I'm not sure there is much we can do alleviate that.</p><p>"There are ample of tutorials to teach JavaScript and HTML5, but I have no idea how to create the phonegap.js file for PG. Why isn't this file available on their website that can be copied into my apps' folder and used without having to do anything else? Just give me that missing file so I don't have to get my head around node, please! :-)"</p><p>Because the JS file is going to be unique per platform. The CLI handles taking care of this for you. As for just being able to download a JS file and nothing more - it isn't that easy. There are things you *can't* do in mobile html, like vibration for example, that requires a combination of the JS file Cordova provides and the native hook in plugins. If you want to stick to mobile web, then sure, do that. But if you want the extra power that Cordova gives you, it requires more than just one file.</p><p>"I can't stand the slow desktop emulators, it feels quicker to user PGB with Hydration and a real mobile device."</p><p>You mean Android. ;) Yeah, the Android emulator is slow as crap. When I debug with it I ensure I don't shut it down so it is launched and stays launched.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082623">6</a> by Gary F
		posted on 4/12/2014 at 11:27 PM
		</div>
		<div class="comment_text"><p>Yeah, Android. :-) I'm convinced the emulator only uses 1 core on the host which doesn't help. Running jQuery Mobile on it is painful. BlueStacks performs much better but ridiculously doesn't allow you to change its screen resolution.</p><p>You said node is used by PG to create a js file that's unique per platform. Does PGB do that automatically to eliminate the need to install PG/node on my desktop? When I write some PG specific code in Dreamweaver do I need to add any PG js files into the code or does PGB add it for me? Maybe this is where I'm getting stuck?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082624">7</a> by Sheldon B
		posted on 4/14/2014 at 3:43 PM
		</div>
		<div class="comment_text"><p>With Apple moving away from apps targeted for IOS 6, what is going to be done about deprecated plugins from Cordova?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082621">8</a> by Raymond Camden
		posted on 4/14/2014 at 3:55 PM
		</div>
		<div class="comment_text"><p>What should be done? Again, these plugins (I assume you don't mean the Core plugins) are built by other people. We can't force them to upgrade. Did you have something in mind?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082625">9</a> by Raymond Camden
		posted on 4/14/2014 at 8:17 PM
		</div>
		<div class="comment_text"><p>"You said node is used by PG to create a js file that's unique per platform. Does PGB do that automatically to eliminate the need to install PG/node on my desktop? When I write some PG specific code in Dreamweaver do I need to add any PG js files into the code or does PGB add it for me? Maybe this is where I'm getting stuck?"</p><p>PGB will auto inject the proper JS file per platform, and yes, you can skip installing PG/node. I would NOT skip it, but that's just my opinion.</p><p>You do need to have this line: &lt;script src="cordova.js"&gt;&lt;/script&gt; in your code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082620">10</a> by Gary F
		posted on 4/15/2014 at 1:27 AM
		</div>
		<div class="comment_text"><p>Ray, that doesn't work. Trying a simple command like this - navigator.notification.vibrate(2000); - results in nothing happening. I've got &lt;script src="cordova.js"&gt;&lt;/script&gt; in the &lt;head&gt; and PGB created an app which I ran on my real Android phone. Similar tests for life such as navigator.notification.beep(3); don't work either. So Cordova or Phonegap js libs aren't present. Using Weinre to debug, any Cordova command is met with "Cannot call method". I know it should work but it doesn't. Something is missing. :-(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082622">11</a> by Raymond Camden
		posted on 4/15/2014 at 1:41 AM
		</div>
		<div class="comment_text"><p>Sorry Gary - I forgot - it was updated for 3.X as well. Please see this description:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F10%2F1%2FPhoneGap-Build-and-PhoneGap-30%3AYQ0BmdMKT6SQ9rKYNwFs9qiFTVU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/10/1/PhoneGap-Build-and-PhoneGap-30">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082628">12</a> by Gary F
		posted on 4/15/2014 at 5:09 AM
		</div>
		<div class="comment_text"><p>I read that post and the plugins are correctly specified in the config.xml file. PGB confirms it's added the plugins into the build. I am getting this error now when launching the app: "Error initializing Cordova: class not found". Even simple things like alert(<a href="http://disq.us/url?url=http%3A%2F%2Fdevice.name%3AzZ2_skJtEZqgH4tt_ZvqJim12G4&amp;cuid=3321886" rel="nofollow noopener" title="device.name">device.name</a>) don't work and return undefined. Ray, I'd gladly PayPal you some beer money for 5 mins of your time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082627">13</a> by Raymond Camden
		posted on 4/15/2014 at 5:17 AM
		</div>
		<div class="comment_text"><p>How about you hit me up off line. Send me a zip of your code - the simplest failing example you have.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082631">14</a> by Marcin
		posted on 4/15/2014 at 9:03 AM
		</div>
		<div class="comment_text"><p>I was the person who commented about debugability on Android - note that the Chrome Remote Debugger only applies to the new Android 4.4 KitKat webviews, which doesn't help me on my pre-Android 4.4 test devices.</p><p>Obviously I can, for example, use weinre on those other devices, but it's still not the nice integration available with Safari / iOS (and it works on both iOS6 and 7).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082632">15</a> by Raymond Camden
		posted on 4/15/2014 at 3:18 PM
		</div>
		<div class="comment_text"><p>Fair point I guess, but you could say the same about iOS. It only supported Remote Debug in ... um... ok I forget. ;) It is more common than Android now. Point is - both *current* releases support it which is a good thing I think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082633">16</a> by Rob Lauer
		posted on 4/15/2014 at 5:02 PM
		</div>
		<div class="comment_text"><p>@Marcin You should take a look at jsHybugger for debugging Android apps &lt; 4.4.</p><p>@Gary I'm not one to blatantly promote my company's product in a forum like this - but it's worth giving Telerik AppBuilder a look for your hybrid development. A lot of the pain you are seeing with getting up and running with Cordova is handled with our tools and cloud-based services.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082636">17</a> by Hatem Jaber
		posted on 4/16/2014 at 2:33 AM
		</div>
		<div class="comment_text"><p>I was just skimming the comments and someone mentioned something about the emulator. I wanted to suggest an alternative which involved downloading an ISO image from here: <a href="https://disq.us/url?url=https%3A%2F%2Fcode.google.com%2Fp%2Fandroid-x86%2Fdownloads%2Flist%3A-o0l2jrMATKWX2-lcO2aEBWuXSc&amp;cuid=3321886" rel="nofollow noopener" title="https://code.google.com/p/android-x86/downloads/list">https://code.google.com/p/a...</a> and than creating a VirtualBox or whatever virtualization software you like, and creating a virtual machine for your Android emulator. The VM's run just like a native phone/tablet setup and you can do everything the device can do. I've tried it with native Android and with Cordova/Phonegap while back. Hope that helps!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082641">18</a> by Raymond Camden
		posted on 4/16/2014 at 6:48 AM
		</div>
		<div class="comment_text"><p>Do you know if that works with "cordova emulate"? Ie will it target it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082639">19</a> by Gary F
		posted on 4/16/2014 at 6:50 AM
		</div>
		<div class="comment_text"><p>@Ray, would you believe I fixed this not by changing my code but by deleting the App from PGB and starting a new App and uploading the same zip file. I'm so annoyed I wasted 3 days when the problem was down to PGB all along. I wonder if this issue has been reported to them before? Thanks for the offer of offline help - can I bank it for next time? :-)</p><p>@Rob, I wasn't aware of Telerik. I'll check it out to see what it has over PGB.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082640">20</a> by Hatem Jaber
		posted on 4/16/2014 at 3:55 PM
		</div>
		<div class="comment_text"><p>@Ray, when you setup the VM in VirtualBox for example, you will be working over IP instead of connecting a device to your computer or using the built in emulator. You have to go the command line and do adb connect 192.168.XXX.XXX and than Eclipse will recognize the device and launch the changes etc... on that device. Or it will be in the list of available devices if you have more than one setup.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082635">21</a> by Raymond Camden
		posted on 4/16/2014 at 3:57 PM
		</div>
		<div class="comment_text"><p>I don't use Eclipse though. Have you tried to 'talk' to it via "cordova emulate android"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082638">22</a> by gautam
		posted on 6/19/2014 at 2:03 AM
		</div>
		<div class="comment_text"><p>I am getting this error now when launching the app: "Error initializing Cordova: class not found". Even simple things like alert(<a href="http://disq.us/url?url=http%3A%2F%2Fdevice.name%3AzZ2_skJtEZqgH4tt_ZvqJim12G4&amp;cuid=3321886" rel="nofollow noopener" title="device.name">device.name</a>) don't work and return undefined. Ray, I'd gladly PayPal you some beer money for 5 mins of your time like another user before me. Help</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082642">23</a> by Raymond Camden
		posted on 6/19/2014 at 2:21 AM
		</div>
		<div class="comment_text"><p>Sounds like you didn't add the device plugin.</p></div>
	</div>
</div>
		