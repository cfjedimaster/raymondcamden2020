
<div class="comment" id="c_1713748011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748011">1</a> by dan
		posted on 7/27/2013 at 4:33 AM
		</div>
		<div class="comment_text"><p>On your start screen the words Phonegap and device is running are in uppercase characters. this is not the case in the html file.</p><p>When I made an app every word displayed on the screen was uppercase, none should have been. What do I change to remave this feature.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748012">2</a> by Raymond Camden
		posted on 7/27/2013 at 4:40 AM
		</div>
		<div class="comment_text"><p>I believe it is just the CSS doing that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748009">3</a> by Raymond Camden
		posted on 7/27/2013 at 4:41 AM
		</div>
		<div class="comment_text"><p>Yeah I just checked, the CSS from index.css is doing that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748013">4</a> by dan
		posted on 7/27/2013 at 6:15 AM
		</div>
		<div class="comment_text"><p>thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748017">5</a> by dan
		posted on 8/20/2013 at 2:18 PM
		</div>
		<div class="comment_text"><p>Raymond, I have managed to get a basic Phonegap 3 app running on an iPad and I would like to try adding plugins such as the accelerometer. Unfortunately I have not had any success. It is not that I have made a mistake but simply I have no idea of what I am doing.  I have not been able to find a simple tutorial explaining the first five basic starting steps when using Phonegap 3.</p><p>I have used the command line to add the accelerometer to a project and the plugin directory was populated but I have no idea of how to make it all work together.</p><p> I am also confused by the way references refer to Cordova and Phonegap  - they seem to be different things which are not interchangeable but references seem to do that.</p><p>I would appreciate it if you can direct me to a simple example which I can use as a starting point .</p><p>thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748015">6</a> by Raymond Camden
		posted on 8/20/2013 at 2:53 PM
		</div>
		<div class="comment_text"><p>"I have used the command line to add the accelerometer to a project and the plugin directory was populated but I have no idea of how to make it all work together."</p><p>Once you add the plugin, you then follow the API for the accelerometer docs. Have you read them yet?</p><p>"I am also confused by the way references refer to Cordova and Phonegap - they seem to be different things which are not interchangeable but references seem to do that."</p><p>Can you give a specific example of where this is holding you up now?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748018">7</a> by dan
		posted on 8/21/2013 at 1:26 PM
		</div>
		<div class="comment_text"><p>thanks for the reply.</p><p>with reference to "you then follow the API for the accelerometer docs"are these at   ..... plugins/org.apache.cordova.core.device-motion/docs/   or are you referring to another set of documents.</p><p>When I open README files that have gone into the plugins folder</p><p>I find mainly references to cordova  , such as</p><p>cordova-plugin-device-motion  README file</p><p>“Standalone plugin to be used together with cordova-pluman, to install into cordova native projects.”</p><p>It then Talks about cordova native projects.</p><p>When I open the docs/acceleration/<a href="http://disq.us/url?url=http%3A%2F%2Facceleration.md%3AxDdC-fGgepVR4BN1luSoT4PQpTI&amp;cuid=3321886" rel="nofollow noopener" title="acceleration.md">acceleration.md</a> file it talks about cordova as follows:-</p><p>Full Example<br>------------</p><p>    &lt;!DOCTYPE html&gt;<br>    &lt;html&gt;<br>      &lt;head&gt;<br>        &lt;title&gt;Acceleration Example&lt;/title&gt;</p><p>        &lt;script type="text/javascript" charset="utf-8" src="cordova-2.6.0.js"&gt;&lt;/script&gt;<br>        &lt;script type="text/javascript" charset="utf-8"&gt;</p><p>        // Wait for Cordova to load<br>        //<br>        document.addEventListener("deviceready", onDeviceReady, false);</p><p>        // Cordova is ready<br>        //</p><p>my     platform/ios/www   contains   both cordova.js and phonegap.js</p><p>while the   index.html  file only mentions  phonegap.js</p><p>When I try to open the plugin ….  /test/index.html  in safari I get the error message:-  Apache Cordova did not initialise.</p><p>I hope this gives some insight about my confusion (or ignorance)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748016">8</a> by Raymond Camden
		posted on 8/21/2013 at 2:45 PM
		</div>
		<div class="comment_text"><p>"with reference to "you then follow the API for the accelerometer docs"are these at ..... plugins/org.apache.cordova.core.device-motion/docs/ or are you referring to another set of documents.<br>"</p><p>I'm talking about the PhoneGap Docs - <a href="http://disq.us/url?url=http%3A%2F%2Fdocs.phonegap.com%2Fen%2F3.0.0%2Fcordova_accelerometer_accelerometer.md.html%23Accelerometer%3AfHNuAfRq508vDx_XHMw0zEtoGNg&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.phonegap.com/en/3.0.0/cordova_accelerometer_accelerometer.md.html#Accelerometer">http://docs.phonegap.com/en...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748019">9</a> by dan
		posted on 8/21/2013 at 3:06 PM
		</div>
		<div class="comment_text"><p>Thanks for that.<br>I had found a similar set of docs but they were .../2.0.0/... <br>I had not seen this one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748021">10</a> by dan
		posted on 8/23/2013 at 3:01 PM
		</div>
		<div class="comment_text"><p>Hello again Raymond, I used to docs you referred to and got the plugin working on an iPad</p><p>BUT</p><p>the plugin app replaced one already on the iPad. The icon for the older app disappeared and the plugin test app icon appeared in its place.</p><p>The same thing happens when I run the two apps in the Xcode simulator.</p><p>when i reinstalled the original app on the iPad it replaced the plugin test app.</p><p>I could not put both on the iPad at the same time. Their files are in different directories on the mac.</p><p>The first time I run either app it crashes. When I retry to run it everything works OK.</p><p>Any clues?   Dan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748020">11</a> by dan
		posted on 8/23/2013 at 3:18 PM
		</div>
		<div class="comment_text"><p>Sorry</p><p>I think I have found my error</p><p>Dan</p></div>
	</div>
</div>
		