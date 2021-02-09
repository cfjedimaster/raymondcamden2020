
<div class="comment" id="c_1714080448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080448">1</a> by damo
		posted on 11/6/2013 at 7:06 PM
		</div>
		<div class="comment_text"><p>I am using Eclipse IDE to created the phonegap app. I installed the Ripple plugin for my chrome browser. Inside the Ripple I tried to run my application using  URL (my 192.168.1.22/myproj/myapp.html)  like to that  path. I can not able to run got the  dialog by means of using the coradova.js inside that file .. how can i run ??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080447">2</a> by Raymond Camden
		posted on 11/6/2013 at 7:43 PM
		</div>
		<div class="comment_text"><p>Damo, please read the blog entry. I'm sorry if this sounds rude, but it sounds like you may have completely missed the point of this article where I describe how Ripple has changed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080450">3</a> by Tien Do
		posted on 11/7/2013 at 6:50 AM
		</div>
		<div class="comment_text"><p>It's too complicated to run Ripple that way, Ripple as Chrome extension is very useful for quick tests, if you need more, nothing can beat simulators.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080445">4</a> by Manuel
		posted on 11/7/2013 at 9:54 AM
		</div>
		<div class="comment_text"><p>I am sorry but I will have to agree with Tien Do. The main advantage of Ripple as a Chrome extension was the simplicity and not having to run it like that. For that we can use netbeans which is much better, also free and now supports cordova.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080455">5</a> by Raymond Camden
		posted on 11/7/2013 at 4:53 PM
		</div>
		<div class="comment_text"><p>Manuel, I guess we will have to agree to disagree. It's one command via your terminal versus a button in the UI. The only real issue is the need to re-prepare your Cordova project on file editing, which as I mentioned, can be automated as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080452">6</a> by Alper
		posted on 11/7/2013 at 8:18 PM
		</div>
		<div class="comment_text"><p>Please excuse my ignorance but if I'm developing a cross platform PhoneGap application on a Windows machine and using PhoneGap build what does the cli buy me? Currently, I don't have to download any SDKs etc. I just build my app in the www folder, zip it up and upload to PhoneGap build. I don't have any platform specific dependencies. Is there a way to improve this workflow without adding platform specific dependencies?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080454">7</a> by Raymond Camden
		posted on 11/7/2013 at 8:20 PM
		</div>
		<div class="comment_text"><p>Not as far as I know. I love the PhoneGap Build service, and still use it even though I have the local SDKs, but at the end of the day, if you are planning on developing for mobile platforms, it makes sense to have the SDKs. Period. Just do it. It's a one time deal (ignoring updates) so there is no reason why you should avoid doing it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080453">8</a> by Alper
		posted on 11/7/2013 at 8:49 PM
		</div>
		<div class="comment_text"><p>Thanks for the response. I have a Windows machine and a great majority of the users of my mobile app are on ios. I use a friend's Mac to submit to app store via application loader. It feels like overkill to buy a Mac just to use the Application Loader.</p><p>The PhoneGap docs read:<br>To add support or rebuild a project for any platform, you need to run the command-line interface from the same machine that supports the platform's SDK. The CLI supports the following combinations:</p><p>    iOS (Mac)</p><p>If I'm building on a Windows machine and targeting iOS, iOS SDK will not work which in turn means I cannot use the PhoneGap cli. Is that correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080457">9</a> by Raymond Camden
		posted on 11/7/2013 at 9:45 PM
		</div>
		<div class="comment_text"><p>Hmm, so in your case, it is going to be difficult. So you can definitely use PGB from your Windows machine to create an iOS build. But for quick turn around, that's going to be difficult. As long as you add one platform, you can use Ripple. You can add Android, and do your testing with Ripple. This will NOT be the same as iOS, obviously, but, you can at least do some of your development - and do it quickly as well. You can test out your JS, CSS, etc. Make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080456">10</a> by Manuel
		posted on 11/8/2013 at 6:29 AM
		</div>
		<div class="comment_text"><p>Excuse me, but it is not "just" a command line! It is not easy if the developer has only used Adobe's Build and has never installed and configured all the Android SDK developer tools including node.js and cordova. It will face for sure, at least one of the most common errors, either android.bat,java,ant path issues, different SDK versions... in my case, after 4 errors fixed, I almost gave up on this gem:</p><p>Checking Android requirements...<br>Creating android project...<br>[Error: An error occured during creation of android sub-project. Creating Cordova project for the Android platform:]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080459">11</a> by Raymond Camden
		posted on 11/8/2013 at 6:40 AM
		</div>
		<div class="comment_text"><p>I guess I'm just used to the command line now. As far as your issue, to be clear, this is with using cordova platform add, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080460">12</a> by Alper
		posted on 11/8/2013 at 9:46 AM
		</div>
		<div class="comment_text"><p>Yes, thanks for the info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080461">13</a> by Jonathan Bossenger
		posted on 11/9/2013 at 3:49 PM
		</div>
		<div class="comment_text"><p>Just wanted to say thanks for this article, it changed my life. I wasn't aware that the Ripple extension was no more, and I couldn't figure out why it wasn't working the way it used to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080463">14</a> by Raymond Camden
		posted on 11/9/2013 at 6:25 PM
		</div>
		<div class="comment_text"><p>"changed my life" - I don't hear that often. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080464">15</a> by Damo k
		posted on 11/11/2013 at 3:37 PM
		</div>
		<div class="comment_text"><p>Thank you Raymond Camden  &amp;, Tien Do . about article is fine. But my doubt is I run my local host with WWW files. Use that path in Google chrome like http://localhost/myphonegapapp/index.html. with out include the phonegap.js as a normal web page it's working. As am try to use ripple tool to test my phonegap functionality . so that i enabled the ripple in my chrome.  that time also phonegap features not working .. how to test the phonegap functionality in browser .. But the same working in emulator or real devices. That's No issue. Only question is with out emulator or device possible to test the phonegap  app??</p><p>Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080465">16</a> by Raymond Camden
		posted on 11/11/2013 at 8:13 PM
		</div>
		<div class="comment_text"><p>"so that i enabled the ripple in my chrome"</p><p>Again - if you are using the extension you are not reading the article. I told you this before. If the language barrier is an issue than I don't know what else to tell you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080466">17</a> by David Hogg
		posted on 11/14/2013 at 1:26 AM
		</div>
		<div class="comment_text"><p>Thanks for the post Raymond. I can reproduce your steps with a cordova project. However, I can't do the same with a phonegap project. Nevermind that I am still confused about the difference (which I know you have addressed before - but still confusing to me).</p><p>Anyway, what I did manage to do was the following steps (using PG cli 3.1)</p><p>phonegap create foo<br>cd foo<br>phonegap build android<br>&gt;&gt; THEN, edit the created index.html under www and change the include from phonegap.js to cordova.js.<br>ripple emulate</p><p>Seems to work! However, if I don't manually change the phonegap.js to cordova.js the deviceReady event is never fired in the emulator. If you were to try manually to fire the deviceReady event in the ripple emulator it says you need to include cordova.js. Note that I never use a separate "prepare" step in the phonegap-cli version.</p><p>Is this the right way to do this for those of us who are using phonegap-cli rather than cordova-cli?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080468">18</a> by Raymond Camden
		posted on 11/14/2013 at 1:47 AM
		</div>
		<div class="comment_text"><p>Not sure - I've switched back to the Cordova CLI as it seemed a bit more stable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080473">19</a> by Sergio Morstabilini
		posted on 12/10/2013 at 9:55 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond for this excellent article.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080469">20</a> by Raymond Camden
		posted on 12/10/2013 at 9:58 PM
		</div>
		<div class="comment_text"><p>np</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080470">21</a> by Teario
		posted on 12/25/2013 at 10:54 PM
		</div>
		<div class="comment_text"><p>Thanks, this really helped me get the emulator working. Before this I was using Coda 2 as it works for a majority of my app. The geolocation wasn't working when testing via Coda nor on my actual device and I really needed the emulator to help me figure out the problem.</p><p>One this I've found with Ripple is that a service which requires specific request headers to be set may not work correctly. In my case this was an issue as I retrieve some user data from <a href="http://disq.us/url?url=http%3A%2F%2FParse.com%3AHOqUIwVjL-3eSnTAceIxxeYWB48&amp;cuid=3321886" rel="nofollow noopener" title="Parse.com">Parse.com</a>. I'm using their Javascript library (<a href="https://disq.us/url?url=https%3A%2F%2Fparse.com%2Fdocs%2Fapi_libraries%29%3Aj3oZna1_Lq-ba1P4Z6gfF0jCVZQ&amp;cuid=3321886" rel="nofollow noopener" title="https://parse.com/docs/api_libraries)">https://parse.com/docs/api_...</a> but when I make a request I get this in the console:</p><p>Failed to load resource: the server responded with a status of 401 (Unauthorized) <a href="https://disq.us/url?url=https%3A%2F%2Frippleapi.herokuapp.com%2Fxhr_proxy%3Ftinyhippos_apikey%3DABC%26tinyhippos_rurl%3Dhttps%253A%2F%2Fapi.parse.com%2F1%2Fclasses%2FUser%3A-3KsxrJWR18jZa9RRH4cFZvPDGs&amp;cuid=3321886" rel="nofollow noopener" title="https://rippleapi.herokuapp.com/xhr_proxy?tinyhippos_apikey=ABC&amp;tinyhippos_rurl=https%3A//api.parse.com/1/classes/User">https://rippleapi.herokuapp...</a></p><p>Some of the auth data for Parse requests is set in the request header, but I believe since the request is routed through Heroku these headers are being lost in the process. Something worth keeping in mind I suppose. Fortunately in my case this data was easy to fake locally as a workaround.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080471">22</a> by Raymond Camden
		posted on 12/26/2013 at 8:41 PM
		</div>
		<div class="comment_text"><p>I love Parse myself - and I ran into the same issue. There is an easier workaround. Ripple lets you turn off the XHR mirroring feature. Just turn it off when using Parse. Since Parse supports CORS, it will work with Chrome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080472">23</a> by Raymond Camden
		posted on 1/2/2014 at 8:57 PM
		</div>
		<div class="comment_text"><p>FYI (for those who subscribed), I just added a small note to the end of the blog entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080474">24</a> by Marc
		posted on 1/2/2014 at 9:10 PM
		</div>
		<div class="comment_text"><p>Why do you suggest using:<br>ripple emulate --path platforms/android/assets/www</p><p>Why not:<br>ripple emulate --path www</p><p>The problem with the first one, is one should really make changes to the www directory during the ripple debugging stage.  After that, once you move on to making the ios or android testing change using the prepare/compile command.</p><p>In the past, when ripple wasn't working for me, I made the mistake of making changes in the platforms/android/assets/www directory.  The problem is that if you use the prepare command, these changes are wiped away.  Not fun.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080478">25</a> by Raymond Camden
		posted on 1/2/2014 at 9:17 PM
		</div>
		<div class="comment_text"><p>Marc, ensure you've read the *entire* blog entry. It was pointed out that I can leave off the path argument. You still need to use prepare though so it copies the right files over. What I'd do is:</p><p>write html<br>run prepare<br>rerun ripple emulate</p><p>as a way of getting things done. You can use a Grunt task to automate the prepare calls for you (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F11%2F7%2FUsing-Grunt-to-automatically-build-your-PhoneGapCordova-projects%29%3A6KewXPUVzinYZwe4tcNH9SdoH6s&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/11/7/Using-Grunt-to-automatically-build-your-PhoneGapCordova-projects)">http://www.raymondcamden.co...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080479">26</a> by Marc
		posted on 1/3/2014 at 7:50 PM
		</div>
		<div class="comment_text"><p>I saw that before:</p><p>You do not need to specify a path. If you do "ripple emulate" in the root, it just plain works.</p><p>But I assume it just runs the android www directory.  The point of my comment was not that it runs I need to add the android www path or not, the point was that using the android path seems like the wrong this, because then everytime I change one line of code, I need to rerun prepare.</p><p>I've tried running it from the www directory, and it works, though the debugger does complain that it can't find phonegap.js.  (does ripple actually need this?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080477">27</a> by Raymond Camden
		posted on 1/3/2014 at 7:54 PM
		</div>
		<div class="comment_text"><p>Afaik, yes, it does need cordova.js. Let me do a quick test though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080481">28</a> by Raymond Camden
		posted on 1/3/2014 at 7:58 PM
		</div>
		<div class="comment_text"><p>So yes - this doesn't work well at all. First, you *can* tell Ripple to use the www path and it will load it, but w/o cordova.js, it won't fire anything. If you try to fake it using the Event firing UI in Ripple, even it recognizes there is no cordova.js.</p><p>Could you copy cordova.js from an existing Android project and make it work? Probably. But when you do eventually run cordova prepare, it will copy over cordova.js into other platforms, and that won't be good.</p><p>I get that having to do the prepare on file editing is a pain, but you can use Grunt to automate it. See my last comment - I linked to an article on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080480">29</a> by Raymond Camden
		posted on 1/3/2014 at 8:50 PM
		</div>
		<div class="comment_text"><p>Actually - and I believe someone commented on this already (a bit too busy to scroll up right now), you do *not* have to run cordova prepare. ripple emulate will do this for you. So all you have to do is rerun ripple emulate. Unfortunately you get new tabs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080483">30</a> by Emilio Janzen
		posted on 1/5/2014 at 5:40 PM
		</div>
		<div class="comment_text"><p>I find it hard to use this new ripple plugin. For some use-cases it may be nice that is starts its own webserver and serves a directory, but for me it is useless this way :(<br>I am writing an application with coffeescript and compass by using a yeoman angular scaffolding. It generates a nice Gruntfile which compiles my coffee and scss into a .tmp - Folder, starts a webserver and mounts the app/ and .tmp/ folders into the webserver, because both folders contain files needed to preview the application (js/css in tmp/, images, fonts etc. stay in app/). But this means I cannot use this ripple plugin because I see no way to tell it to mount two folders.<br>The Gruntfile can of course compile the application into www/, but this includes compile, concatenation, minification, tests... pretty much everything. After that, the www/-Folder contains a ready-to-ship application. This compilation takes about XXX seconds, which means it is a far too long cycle to be used in development.</p><p>I am sad that the ripple-plugin cannot be told to focus on its primary task - to run an emulator. I would very much like it to be able to tell it "Look, at localhost:9000 is a webserver running. Go ahead and wrap your emulator around it". That was, in my opinion, the main benefit of the Chrome Plugin - it was just an emulator, nothing more. I could point it at whatever I wanted to, no matter where it came from, and it would just work. The new Ripple, in my opinion, tries to do too much and does not leave me the option to do it in a different way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080482">31</a> by Emilio Janzen
		posted on 1/5/2014 at 5:41 PM
		</div>
		<div class="comment_text"><p>Sorry, I forgot to replace the XXX in my previous post with a number. FYI, a complete compile-run with tests takes about 25 sec atm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080485">32</a> by Raymond Camden
		posted on 1/6/2014 at 3:41 AM
		</div>
		<div class="comment_text"><p>@Emilio: I definitely see your point here. Best I can suggest is to maybe post it to the listserv (see "Mailing List" here: <a href="http://disq.us/url?url=http%3A%2F%2Fripple.incubator.apache.org%2F%29%3AFXI-UwqMEA0edXuA-qjUgLitDQw&amp;cuid=3321886" rel="nofollow noopener" title="http://ripple.incubator.apache.org/)">http://ripple.incubator.apa...</a> and see if there are any plans for this).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080484">33</a> by javier
		posted on 1/6/2014 at 4:29 AM
		</div>
		<div class="comment_text"><p>Man, this post saved my life, thanks so much<br>I was going nuts using the broken Chrome extension</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080488">34</a> by Iuri DiniZ
		posted on 1/11/2014 at 9:57 PM
		</div>
		<div class="comment_text"><p>hello Camden,</p><p>my version of ripple (0.9.19) does 'android prepare' when I save any file on assets</p><p>I called it by using:<br>cd my-project-root<br>ripple emulate platforms/android/assets/www/</p><p>also, ripple says this on log:<br>refreshing project (platform: android) ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080486">35</a> by Raymond Camden
		posted on 1/11/2014 at 9:59 PM
		</div>
		<div class="comment_text"><p>Nod - see my comment a few notes above - Ripple seems to be doing the prepare for us - which is nice. I should maybe add that as a note to the blog entry. I'm going to do that now actually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080489">36</a> by Raymond Camden
		posted on 1/11/2014 at 10:02 PM
		</div>
		<div class="comment_text"><p>So I added yet another note - hopefully it makes it clear. You may still want to run "cordova prepare" as it would let you reload your current Ripple tab.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080487">37</a> by Iuri Diniz
		posted on 1/11/2014 at 11:09 PM
		</div>
		<div class="comment_text"><p>Camden,</p><p>Just a reload in the brower is working for me! I don't need to rerun ripple simulate</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080491">38</a> by Raymond Camden
		posted on 1/11/2014 at 11:14 PM
		</div>
		<div class="comment_text"><p>Yeah, but if you modify www/, you will not see changes (afaik). You need to cordova prepare (or use Grunt). Agree? Or are you seeing differently?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080490">39</a> by Iuri Diniz
		posted on 1/11/2014 at 11:16 PM
		</div>
		<div class="comment_text"><p>each time I issue a F5 on chrome ripple logs:</p><p>refreshing project (platform: android) ...<br>INFO: Using Browser User Agent (String)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080492">40</a> by Iuri Diniz
		posted on 1/11/2014 at 11:19 PM
		</div>
		<div class="comment_text"><p>Excuse me, not always. Maybe a bug or a feature, I don't know, I wiil see the ripple code</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080493">41</a> by Iuri Diniz
		posted on 1/11/2014 at 11:45 PM
		</div>
		<div class="comment_text"><p>Looking at the code, every request with '?enableripple=something' will run 'cordova prepare' (if platform is already setted on cookies<br>============<br>       if (req.query.enableripple &amp;&amp; req.staticPlatform) {<br>            console.log('refreshing project (platform: ' + req.staticPlatform + ') ...');<br>            exec('cordova prepare ' + req.staticPlatform, function () {<br>                handle(req, res, next);<br>            });<br>        }<br>        else {<br>            handle(req, res, next);<br>        }<br>==========<br>When I issue a F5 seems that not always chrome sends the query string (chrome bug?), but when I press the reload button chrome sends the query string (chrome bug?)</p><p>Could you test?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080494">42</a> by Raymond Camden
		posted on 1/12/2014 at 1:33 AM
		</div>
		<div class="comment_text"><p>Holy smokes - you're right. cmd+r (same as F5) does a visible reload, but it doesn't *really* reload. If I click the reload button in the UI, it *does* reload. (I mean prepare/reload.)</p><p>So this is cool and all - but very unintuitive. I'm going to ping Ripple mailing list to see if this makes sense to anyone.</p><p>But - all in all - it is good to know. I'm going to add yet another note to the blog entry (since I assume folks don't read all the comments).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080496">43</a> by Sukhbir Mehla
		posted on 1/14/2014 at 5:25 AM
		</div>
		<div class="comment_text"><p>Thank you for writing this article - it was extremely helpful to us!</p><p>It's a shame that the original Ripple is no more, as I found it extremely useful and easy to use. Oh well, I fear I shall have to get used to this 'new' way of doing things and hope that I find 'Ripple Reborn' just as useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080495">44</a> by Raymond Camden
		posted on 1/14/2014 at 7:49 AM
		</div>
		<div class="comment_text"><p>Well, be sure to read the comments. It looks like it is nearly as easy as before - just be sure to click the Circle/Refresh/icon thingy in Chrome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080500">45</a> by Sebastian
		posted on 1/15/2014 at 4:46 AM
		</div>
		<div class="comment_text"><p>I observed that after closing the tab with the ripple emulator the ripple emulate process keeps going. How do I close it? Ctrl+C or Z do not seem to work. I am on Windows 8.1 using Console2, a wrapper for the classical windows console that allow multiple tabs etc.</p><p>I also wanted to say thank you for the knowledge added here in this article. I have wasted 2 days trying to get ripple to work with phonegap 3.3.0. If it wasn't for you I would have never found out that the ripple extension doesn't work with phonegap newer than 3.0. It simply failed a $.ajax() silently. No way I would have realized that it was because of ripple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080498">46</a> by Sukhbir Mehla
		posted on 1/15/2014 at 5:08 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond, I've gone back and read all of the comments now and am looking forward to trying it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080499">47</a> by Sebastian
		posted on 1/15/2014 at 5:12 AM
		</div>
		<div class="comment_text"><p>Ok figured out. I had Ctrl-C assigned as copy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080497">48</a> by Matt Flinn
		posted on 1/25/2014 at 1:20 AM
		</div>
		<div class="comment_text"><p>@Teario Hey, if you're interested...I've modified the source for the Ripple Emulator to allow you to specify a list of hostnames/urls that shouldn't be proxied by the internal proxy. This allows you to use the proxy for all routes that you'd normally want it for, but also let's you get JS SDK's like Parse to work that would otherwise be #$^&amp;ed by the proxy settings that Ripple uses.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080503">49</a> by Raymond Camden
		posted on 1/25/2014 at 1:26 AM
		</div>
		<div class="comment_text"><p>@Matt: You going to submit a pull request for that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080502">50</a> by Raymond Camden
		posted on 2/5/2014 at 8:53 PM
		</div>
		<div class="comment_text"><p>An important update folks.</p><p>If you are using the VERY latest Cordova, Ripple will fail to see your project as a valid PG project. I looked into the source code and I see that Ripple is looking for a folder called .cordova in your project. This is no longer there. Instead, config.xml is placed in the root. Solutions are:</p><p>1) Just make an empty .cordova folder.<br>2) Use the argument that lets you pick a path and point directly to the platform code.<br>3) Edit the source code of Ripple like I did to look for config.xml. ;)</p><p>For now I'd probably just use 1. I've reached out to the project admin about how I can submit my fix and hopefully we will get this corrected soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080501">51</a> by Cesidio DiBenedetto
		posted on 2/5/2014 at 8:57 PM
		</div>
		<div class="comment_text"><p>I also noticed that if you use the npm ripple-emulator package to load your app, make sure to remove and/or disable the ripple chrome extension(if you have it).  It will just hang on you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080504">52</a> by Raymond Camden
		posted on 2/5/2014 at 9:16 PM
		</div>
		<div class="comment_text"><p>Ahem - I mention that rather strongly in the post above. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080505">53</a> by Cesidio DiBenedetto
		posted on 2/5/2014 at 10:15 PM
		</div>
		<div class="comment_text"><p>Oh snap!  Honestly just raced through the post and replies.  Didn't even pick up on it.  My apologies.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080509">54</a> by Raymond Camden
		posted on 2/5/2014 at 11:24 PM
		</div>
		<div class="comment_text"><p>You should feel bad. I never skim tech docs. Ahem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080507">55</a> by Alex Stanese
		posted on 2/8/2014 at 4:52 PM
		</div>
		<div class="comment_text"><p>I created a default project with phonegap. I entered the project and after I installed ripple I ran ripple emulate. At that point it entered in chrome in ripple emulator but instead the app I got:</p><p> Cannot GET /<br>Why is that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080506">56</a> by Raymond Camden
		posted on 2/8/2014 at 6:31 PM
		</div>
		<div class="comment_text"><p>Look up - about 5 comments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080508">57</a> by Alex Stanese
		posted on 2/9/2014 at 4:04 AM
		</div>
		<div class="comment_text"><p>Thank You! Now its working for a few seconds...<br>It enters now in chrome in the ripple emulator and it shows the first page but after a few seconds the screen turn red and this message is displayed:<br>"Looks like what we have here is a failure to... emulate<br>You're seeing this window because it looks like the zombie apocalypse has started.<br>For some strange reason it looks like we are unable to load. This could be a problem <br>with your application, with ours or that you may require more time to finish loading."</p><p>Is there any way to also resolve this issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080511">58</a> by Raymond Camden
		posted on 2/10/2014 at 12:31 AM
		</div>
		<div class="comment_text"><p>Do you get this with the virgin (default) Cordova project?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080512">59</a> by Alex Stanese
		posted on 2/10/2014 at 3:43 PM
		</div>
		<div class="comment_text"><p>Yes... And I also noticed that I cannot go to the second page... As if the whole application is blocked on the first page... Why is that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080513">60</a> by Raymond Camden
		posted on 2/10/2014 at 6:36 PM
		</div>
		<div class="comment_text"><p>Do you see anything in the console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080514">61</a> by Alex Stanese
		posted on 2/11/2014 at 12:19 PM
		</div>
		<div class="comment_text"><p>No.. just the regular stuff:</p><p>INFO: Server instance running on: http://localhost:4400<br>INFO: CORS XHR proxy service on: http://localhost:4400/ripple/xhr_proxy<br>INFO: JSONP XHR proxy service on: http://localhost:4400/ripple/jsonp_xhr_proxy<br>Cordova 3.0 Project detected...<br>refreshing project (platform: android) ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080515">62</a> by Raymond Camden
		posted on 2/11/2014 at 10:47 PM
		</div>
		<div class="comment_text"><p>Unfortunately I don't know what to suggest. I'm running the latest Cordova and made a virgin project. I then added a .cordova folder to trick Ripple, started it, and just waited. No error.</p><p>Running in latest Chrome too.</p><p>At this point your best bet may be to ping the Ripple dev listserv and ask for help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080516">63</a> by Lucas Arruda
		posted on 2/12/2014 at 6:03 AM
		</div>
		<div class="comment_text"><p>Hi there. First I'd like to thank you for explaining all this on details. Second what do you mean by "if you want to use plugins (i.e. any core feature), you still have to install them the normal way even if you are using Ripple."? I don't get what's the "normal way" to do so. Could you please tell me? Thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080517">64</a> by Raymond Camden
		posted on 2/12/2014 at 6:11 AM
		</div>
		<div class="comment_text"><p>All features (camera, etc) are built as plugins now and you have to install them. See: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F7%2F19%2FPhoneGap-30-Released--Things-You-Should-Know%3A6Ud7p3nuTutcZtRWDHmq1J28erg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/7/19/PhoneGap-30-Released--Things-You-Should-Know">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080518">65</a> by Peter Rolfman
		posted on 2/21/2014 at 2:57 PM
		</div>
		<div class="comment_text"><p>Some strange behavior on debian wheezy, google-chrome 33, cordova 3.3.1, ripple 0.9.20.<br>I follow your steps but when I do ripple emulate, it opens 3 tabs ("http://http/", "file:///localhost", "http://0.0.17.48/?enableripple=cordova-3.0.0")</p><p>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080519">66</a> by Raymond Camden
		posted on 2/21/2014 at 5:24 PM
		</div>
		<div class="comment_text"><p>I've never tested it on a Linux machine. All I can suggest is posting to the dev forums.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080521">67</a> by Kent Tracy
		posted on 2/22/2014 at 1:15 AM
		</div>
		<div class="comment_text"><p>Can you tell me what value does <a href="http://disq.us/url?url=http%3A%2F%2Femulate.phonegap.com%3AG6kWICTktB71F21XQvSPR_lhr5s&amp;cuid=3321886" rel="nofollow noopener" title="emulate.phonegap.com">emulate.phonegap.com</a> provide in addition to this, if any? That site is unusable without the Ripple plugin. I am confused by what degree of plugin emulation I should expect in either or both. Equivalent?</p><p>Oh, and thank you. This article has been invaluable in getting up and running with Ripple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080523">68</a> by Raymond Camden
		posted on 2/22/2014 at 1:17 AM
		</div>
		<div class="comment_text"><p>Speaking as Ray the Web Dude not an employee of Adobe, that site is dead, abandoned. Ignore it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080520">69</a> by Oscar
		posted on 2/24/2014 at 11:28 PM
		</div>
		<div class="comment_text"><p>My android device is broken :( so I was lost trying to test my cordova app using the native sdk emulator -actually, that emulator really sucks-. Then I found your article, I have to do a lot of work: re-install some nodejs extensions or looking for upgrades, add last android version 4.4.* to sdk, edit the PATH windows environment variable, read your directives and try then re-read and try again but finally it works like a charm!<br>Such a sunday morning! Half time of my work time is left, but it worth the fight</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080526">70</a> by chad
		posted on 3/4/2014 at 8:28 PM
		</div>
		<div class="comment_text"><p>this is great, thank you. Ripple fits in perfectly between basic unit testing and UA testing on a real physical device. I wish the android emulator had the hard menu and back buttons on the emulator itself vs having to fire the events from the drop down. Oh well, gives me something to work on while at sxsw :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080522">71</a> by gin
		posted on 3/12/2014 at 6:03 PM
		</div>
		<div class="comment_text"><p>great article saved my life :))</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080525">72</a> by mraak
		posted on 3/12/2014 at 10:51 PM
		</div>
		<div class="comment_text"><p>After 5 seconds I got the screen where it says the zombie apocalypse has started and I can  either WAIT or FIRE. Both options result in the same screen happening again after a reload.</p><p>Also on the same screen, the github link is giving 404.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080524">73</a> by Raymond Camden
		posted on 3/12/2014 at 10:56 PM
		</div>
		<div class="comment_text"><p>Do you see anything in the console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080527">74</a> by Emanuel
		posted on 3/16/2014 at 2:52 AM
		</div>
		<div class="comment_text"><p>I just start ripple and after 5 seconds it throw the infamous "zombie apocalypse". Is a virgin cordova project and also have the ".cordova" folder, running at Windows 7 Ultimate 64bits with lastest updates. Console doesn't give any error, just "refreshing  project (android)"...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080528">75</a> by Emanuel
		posted on 3/16/2014 at 2:55 AM
		</div>
		<div class="comment_text"><p>A i forget! The Chrome javascript console throws this:</p><p>TypeError: Cannot call method 'call' of undefined<br><a href="http://disq.us/url?url=http%3A%2F%2Fdebug.phonegap.com%2Ftarget%2Ftarget-script-min.js%3A1053%26host%3Dlocalhost%3A4400%3ASjDccmtiSvg-IBkK5oGAvnOk25E&amp;cuid=3321886" rel="nofollow noopener" title="http://debug.phonegap.com/target/target-script-min.js:1053&amp;host=localhost:4400">http://debug.phonegap.com/t...</a></p><p>Maybe is related to this issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080530">76</a> by Raymond Camden
		posted on 3/16/2014 at 7:00 AM
		</div>
		<div class="comment_text"><p>Hmm, where did the <a href="http://disq.us/url?url=http%3A%2F%2Fdebug.phonegap.com%3AvHTed7hZX_FTLUczcbSwjjgSWNM&amp;cuid=3321886" rel="nofollow noopener" title="debug.phonegap.com">debug.phonegap.com</a> come from? Are you using that in your code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080531">77</a> by Emanuel
		posted on 3/17/2014 at 3:57 AM
		</div>
		<div class="comment_text"><p>@Raymond Camden: I forgot remove the script line from phonegap debug, i'm sorry hehe.. But it still doesn't work. It opens normally and 5 seconds later bang! The red screen.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080533">78</a> by Raymond Camden
		posted on 3/17/2014 at 4:21 AM
		</div>
		<div class="comment_text"><p>Ok but what do you see in the console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080535">79</a> by Michael
		posted on 3/18/2014 at 11:47 PM
		</div>
		<div class="comment_text"><p>Got things set up (installing with npm) and it looks good.  However, according to the error dialog I see, "We seem to be missing some stuff", particularly the App.overrideBackbutton.  Any wisdom?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080534">80</a> by Raymond Camden
		posted on 3/19/2014 at 1:01 AM
		</div>
		<div class="comment_text"><p>Sorry, no, that's not an error I've ever seen. You can post to the dev list.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080536">81</a> by Stjepan
		posted on 3/25/2014 at 2:52 AM
		</div>
		<div class="comment_text"><p>Hi,<br> do you know perhaps where are js files are copied. Concretly i'm interest in camera.js file. there is an error in line capture.setAttribute("controls"); ripple.js:49275</p><p>regards,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080538">82</a> by Raymond Camden
		posted on 3/25/2014 at 2:58 PM
		</div>
		<div class="comment_text"><p>That is a known error. I've file a PR to correct it, but I guess it hasn't been accepted yet. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080537">83</a> by Stjepan
		posted on 3/25/2014 at 5:41 PM
		</div>
		<div class="comment_text"><p>Yes it is an open issue in Jira also (without release date:), but I'm trying to found workaround how to put this fix..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080545">84</a> by Raymond Camden
		posted on 3/25/2014 at 6:25 PM
		</div>
		<div class="comment_text"><p>You can run from source - thats how I test when doing fixes. I do a build and then use the command line from the repo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080543">85</a> by Stjepan
		posted on 3/26/2014 at 1:14 AM
		</div>
		<div class="comment_text"><p>Yes, that was my intention to, take it from git and build it with jake, but I did't have luck with this approach. I can't install jake cause of instlation bug in jsdom module (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.steveworkman.com%2Fnode-js%2F2012%2Finstalling-jsdom-on-windows%2F%3AWKdB2iwlH2Whz6Jzo-B4voLIcgQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.steveworkman.com/node-js/2012/installing-jsdom-on-windows/">http://www.steveworkman.com...</a> doesn't helps). I don't know another approach do you have some other steps how can I do it ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080542">86</a> by Raymond Camden
		posted on 3/26/2014 at 1:17 AM
		</div>
		<div class="comment_text"><p>Sorry no - if Jake isn't working then I wouldn't know what else to do. Really hope my PR is taken soon. On the dev list today I sent a reminder and mentioned that someone else had run into it so I hope they take the time.</p><p>Also - the Preview function is broken as well. Previously after you selected the image it gave you a preview. I was going to fix that after this PR was taken in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080548">87</a> by Stjepan
		posted on 3/26/2014 at 2:05 AM
		</div>
		<div class="comment_text"><p>I saw your posts to the ripple team, I hope they will confirm your PR soon... Thanks for the information's anyway..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080549">88</a> by Jarryd
		posted on 3/27/2014 at 9:08 PM
		</div>
		<div class="comment_text"><p>Raymond Camden , i want to test phonegap apps without having any native  mobile SDK's installed. I just wana install nodejs and npm, then install ripple then insert a command in terminal and let ripple run my chosen platform with the app. Is this possible ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080604">89</a> by Raymond Camden
		posted on 3/27/2014 at 9:38 PM
		</div>
		<div class="comment_text"><p>Unfortunately, Ripple requires the project folders for iOS/Android. It uses the www source from the respective folders for the web pages displayed. I could see a use case for Ripple just using the core www, but afaik you can't do that with the tool as it stands now.</p><p>I'd just install the Android SDK. I mean, at the end of the day, if you are going to be a PG developer, you *need* to get the SDKs. I can totally see avoiding them for most of your dev work, but you *do* need them and I'd just bite the bullet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080623">90</a> by Jarryd
		posted on 3/27/2014 at 9:50 PM
		</div>
		<div class="comment_text"><p>Raymond Camden, i will get the various SDK's then and use ripple with them, instead of the cpu hungry emulators they ship with. Thanks for the helpful information!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080633">91</a> by Raymond Camden
		posted on 3/27/2014 at 9:52 PM
		</div>
		<div class="comment_text"><p>As just an FYI, the iOS Simulator is *much* quicker. To be fair it isn't doing as much as the Android emulator, but I don't care. It's lightning fast.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080627">92</a> by Arindam Biswas
		posted on 3/31/2014 at 11:02 AM
		</div>
		<div class="comment_text"><p>@Michael For the "We seem to be missing some stuff", particularly the App.overrideBackbutton" you might want to look into <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F17250796%2Fphonegap-2-8-0-raising-no-method-overridebackbutton-with-angular-mobile-nav%3AxCvrpef2U8Jy-nEh3XuiC0_BzhI&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/17250796/phonegap-2-8-0-raising-no-method-overridebackbutton-with-angular-mobile-nav">http://stackoverflow.com/qu...</a></p><p>Starting out with ionic framework and that was helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080625">93</a> by Francisco Alonso
		posted on 4/3/2014 at 3:29 PM
		</div>
		<div class="comment_text"><p>Hello! When I read this tutorial It seemed to be the perfect solution for me, but sadly I had a problem in the very first step. When I run "npm install -g ripple-emulator", I get this error: <br>[Error: EACCES, mkdir '/usr/local/lib/node_modules/ripple-emulator'<br>(complicated stuff) <br>Please try running this command again as root/Administrator.]</p><p>Of course I know you know what the problem is, so I'm not asking that. My question is: How can I fix this??.</p><p>This would not the first time you help me, so thanks again!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080636">94</a> by Raymond Camden
		posted on 4/3/2014 at 4:02 PM
		</div>
		<div class="comment_text"><p>Run it with sudo?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080639">95</a> by Francisco Alonso
		posted on 4/3/2014 at 7:05 PM
		</div>
		<div class="comment_text"><p>I knew you'd help. It worked great in PhoneGap, and now it's my turn to work.<br>Thanks!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080621">96</a> by rick
		posted on 4/9/2014 at 8:21 PM
		</div>
		<div class="comment_text"><p>hey ray - regarding the "Cannot GET /" comment from Alex, and your response to look up 5 comments.... apparently I need to create a ".cordova" folder in the project root, however when i try to create a folder of that name OSX tells me that the leading "." is reserved for system stuff - so how exactly would i go about doing that on OSX? I just downloaded phonegap &amp; ripple today so I've got the latest vesions. Am a windows guy so OSX sometimes throws wrenches at me ~ Rick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080626">97</a> by Raymond Camden
		posted on 4/9/2014 at 8:24 PM
		</div>
		<div class="comment_text"><p>You can tell OSX to let you create the folder anyway if I remember right - or make it in terminal.</p><p>As it stands, making the .cordova folder was a temp work around until my fix had gone live. If you are running the latest, you shouldn't need to do this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080631">98</a> by rick
		posted on 4/9/2014 at 10:03 PM
		</div>
		<div class="comment_text"><p>mkdir .cordova reveals that the folder exists, OSX was just hiding it from me.... [edit]delete a lot of text[/edit]</p><p>its working now... i'm not sure where I went wrong, i think though i was not in my project root.</p><p>Thanks for taking a moment ray!  ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080618">99</a> by John
		posted on 4/15/2014 at 8:27 PM
		</div>
		<div class="comment_text"><p>Ripple is too complicated for me :) any thoughts on where to get started?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080622">100</a> by Raymond Camden
		posted on 4/15/2014 at 8:28 PM
		</div>
		<div class="comment_text"><p>Did you follow my guide here? Also try my video - <a href="https://disq.us/url?url=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3DDouZL1uIOu4%3A8Bq2KrLwdVW7a69oRYrLJ8SXExo&amp;cuid=3321886" rel="nofollow noopener" title="https://www.youtube.com/watch?v=DouZL1uIOu4">https://www.youtube.com/wat...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080634">101</a> by Martin
		posted on 4/17/2014 at 1:32 PM
		</div>
		<div class="comment_text"><p>Hmm, and why no Windows Phone support? It seems, I need to add Android as a platform although I'm developing in Visual Studio and mostly testing on Windows Phone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080620">102</a> by Raymond Camden
		posted on 4/17/2014 at 7:40 PM
		</div>
		<div class="comment_text"><p>I think it just wasn't a priority due to the # of people who needed it. That being said - this *is* an open source project. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080638">103</a> by Sara
		posted on 4/22/2014 at 1:44 AM
		</div>
		<div class="comment_text"><p>Great post !  Saved me a lot of time. Thanks Raymond :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080635">104</a> by Christophe
		posted on 4/29/2014 at 12:11 AM
		</div>
		<div class="comment_text"><p>Greatest post I've seen for a long time.<br>Very helpful.</p><p>Worked like a charm. I'm impressed</p><p>One quick question, btw. How difficult is it to add more devices? I'm thinking about a Galaxy S4 or a Nexus 5...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080619">105</a> by Raymond Camden
		posted on 4/29/2014 at 7:56 PM
		</div>
		<div class="comment_text"><p>Probably pretty easy - I'd look at the code and submit a PR.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080632">106</a> by Martin
		posted on 5/8/2014 at 11:56 AM
		</div>
		<div class="comment_text"><p>overrideBackbutton issue is fixed since Ripple version 0.9.22</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080637">107</a> by Raymond Camden
		posted on 5/8/2014 at 3:56 PM
		</div>
		<div class="comment_text"><p>Cool. I'm hoping to get some work done on the Ripple site to help improve documentation so fixes like this are more readily seen.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080641">108</a> by Stefano
		posted on 5/14/2014 at 8:26 PM
		</div>
		<div class="comment_text"><p>Hello, when I try to emulate, ripple open browser but appeae an alert with strange code and ripple tells me that has failed and there are apocalypse zombie.Plus consolo show error config.xml not found</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080624">109</a> by Raymond Camden
		posted on 5/14/2014 at 8:29 PM
		</div>
		<div class="comment_text"><p>Latest ripple? Latest Cordova or PhoneGap version?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080630">110</a> by asking
		posted on 5/26/2014 at 7:25 AM
		</div>
		<div class="comment_text"><p>Umm... how do you shut the emulator down?  Seems if I kill the Chrome window, the service is still running in node, even if I've killed the shell.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080629">111</a> by asking
		posted on 5/26/2014 at 7:28 AM
		</div>
		<div class="comment_text"><p>...and... after editing the index.html file, the grunt task to refresh kicked in, but then I received</p><p>Bus error: 10</p><p>Any advice there?</p><p>Thanks again for the great posts!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080628">112</a> by Raymond Camden
		posted on 5/26/2014 at 6:12 PM
		</div>
		<div class="comment_text"><p>If you ctrl/cmd-c in Terminal it kills it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080640">113</a> by Pierre Ghislain
		posted on 5/30/2014 at 4:34 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond, it work fine with cordova 3.x. Good tool save me a lot of time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080651">114</a> by Guilherme Caeiro de Mattos
		posted on 6/9/2014 at 7:27 AM
		</div>
		<div class="comment_text"><p>This may be a stupid question, but does it work for other platforms supported by Phonegap/Cordova, like Windows Phone, FireFox OS and Ubuntu?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080649">115</a> by Raymond Camden
		posted on 6/10/2014 at 6:47 PM
		</div>
		<div class="comment_text"><p>Not yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080700">116</a> by Jan Guichelaar
		posted on 6/16/2014 at 4:34 PM
		</div>
		<div class="comment_text"><p>RIpple tells me the config.xml could not be found.<br>Also in the console there is a 404 on the config.xml<br>i am using:<br>ripple v 0.9.22<br>cordova 3.5.0-0.2.4</p><p>Cant figure out how to fix this</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080655">117</a> by Raymond Camden
		posted on 6/16/2014 at 4:37 PM
		</div>
		<div class="comment_text"><p>Don't. Ie, just ignore it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080654">118</a> by Costa
		posted on 6/16/2014 at 8:17 PM
		</div>
		<div class="comment_text"><p>I have a few errors after following your tutorial. First ripple reports a malformed config.xml doc, even though it's just a plain cordova create application. Second, it's just stuck on <br>"connecting to device."</p><p>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080659">119</a> by Costa
		posted on 6/16/2014 at 8:26 PM
		</div>
		<div class="comment_text"><p>Nevermind, got it working! Just did ripple emulate (was doing ripple emulate www/ earlier) My mistake.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080652">120</a> by Costa
		posted on 6/16/2014 at 10:46 PM
		</div>
		<div class="comment_text"><p>Strange, it seems ripple doesn't recognize the config.xml file. Here's the error:</p><p>config.xml file could not be found in the application's root or is malformed XML</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080656">121</a> by Raymond Camden
		posted on 6/17/2014 at 4:59 AM
		</div>
		<div class="comment_text"><p>That's because config.xml *used* to be in www, now it isn't anymore. This is something Ripple needs to be updated for.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080653">122</a> by Kerry Young
		posted on 7/19/2014 at 6:10 PM
		</div>
		<div class="comment_text"><p>Hello Raymond</p><p>Do you have any beginner tutorials for phonegap and ripple. Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080650">123</a> by Raymond Camden
		posted on 7/20/2014 at 1:51 AM
		</div>
		<div class="comment_text"><p>Please see this video: <a href="https://disq.us/url?url=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3DDouZL1uIOu4%26list%3DUU8KROrnEHSnnV3z5J_FoSIg%3AtyfA_9lWRm-S8EDJ0B0QexGO6LI&amp;cuid=3321886" rel="nofollow noopener" title="https://www.youtube.com/watch?v=DouZL1uIOu4&amp;list=UU8KROrnEHSnnV3z5J_FoSIg">https://www.youtube.com/wat...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080658">124</a> by nroo
		posted on 8/16/2014 at 5:00 AM
		</div>
		<div class="comment_text"><p>About the "Cannot GET /" issue.<br>I do the ripple emulate like this now and I don't get the error anymore:<br>sencha -sdk &lt;Path&gt;\touch-2.3.1 generate app RippleDemo01 RippleDemo01<br>cd RippleDemo01<br>sencha cordova init com.example.RippleDemo01 RippleDemo01<br>#Edit <a href="http://disq.us/url?url=http%3A%2F%2Fcordova.local.properties%3Acr-QC3D3W9Pv_u6pRK75rl7QHDA&amp;cuid=3321886" rel="nofollow noopener" title="cordova.local.properties">cordova.local.properties</a> and Change platform to android (in this case)<br>sencha app build native<br>cd cordova<br>cordova prepare android<br>ripple emulate</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080661">125</a> by gil
		posted on 8/17/2014 at 3:58 PM
		</div>
		<div class="comment_text"><p>Does ripple support Cors?<br>I have a website on my computer, that does support Cors as far as I understand.<br>I run it from IISExpress (<a href="http://disq.us/url?url=http%3A%2F%2Fasp.net%3AUNuNRjBScd2oG1vMxpbXVtVI7Ig&amp;cuid=3321886" rel="nofollow noopener" title="asp.net">asp.net</a> MVC web api services)</p><p>I do manage to make calls from the Android virtaul simulator.</p><p>From ripple I get:</p><p>XMLHttpRequest cannot load <a href="https://disq.us/url?url=https%3A%2F%2Frippleapi.herokuapp.com%2Fxhr_proxy%3Ftinyhippos_apikey%3DABC%26tinyhippos_rurl%3Dhttp%253A%2F%2F192.168.1.132%253A58547%2Fapi%2Fuser%2FLogin%3ABDf19f7oq2Ic66xV6yiNL9rY25I&amp;cuid=3321886" rel="nofollow noopener" title="https://rippleapi.herokuapp.com/xhr_proxy?tinyhippos_apikey=ABC&amp;tinyhippos_rurl=http%3A//192.168.1.132%3A58547/api/user/Login">https://rippleapi.herokuapp...</a>. No 'Access-Control-Allow-Origin' header is present on the requested resource. Origin 'http://localhost:4400' is therefore not allowed access.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080663">126</a> by Raymond Camden
		posted on 8/18/2014 at 12:00 AM
		</div>
		<div class="comment_text"><p>Ripple tries to take over all XHR requests and proxy them so that CORS isnt required, but if it gets in the way, just disable it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080657">127</a> by gil
		posted on 8/18/2014 at 11:35 AM
		</div>
		<div class="comment_text"><p>I try disable CORS on server side, and it didn't work.<br>You mean disable CORS from ripple? How to do?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080662">128</a> by gil
		posted on 8/18/2014 at 11:40 AM
		</div>
		<div class="comment_text"><p>You suggest to put empty .cordova folder in order to stop config.xml not found.<br>Where exactly to put? I put it in platforms\android\assets\www, and still get erro.<br>I also tried to put inside the folder config.xml, but then ripple emulate gives error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080664">129</a> by Raymond Camden
		posted on 8/18/2014 at 3:06 PM
		</div>
		<div class="comment_text"><p>@git: I didn't say to disable CORs, but to do disable the proxy. The option is in the upper right side.</p><p>@git: I meant in the root folder. Not platforms\etc, the root folder of your project. But if you are running the latest Ripple then you shouldn't need that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080668">130</a> by gil
		posted on 8/18/2014 at 3:43 PM
		</div>
		<div class="comment_text"><p>Excellent!!!<br>This works with CORS!!<br>Thanks a lot for the post, and the reply.<br>This will help me work with phonegap in a sane way and not be exhausted by the AVD.<br>Really a life saver post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080665">131</a> by David
		posted on 8/18/2014 at 5:19 PM
		</div>
		<div class="comment_text"><p>Hi, thanks for this great news. I followed this tutorial and it works. Just wondering how I can get this to work with Blackberry esp for BB Os 6 and 7<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080666">132</a> by Raymond Camden
		posted on 8/18/2014 at 6:44 PM
		</div>
		<div class="comment_text"><p>Sorry David, I haven't done any BB testing in a long time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080667">133</a> by gil
		posted on 8/19/2014 at 1:04 PM
		</div>
		<div class="comment_text"><p>Ripple emulate fires index.html by default.<br>Is it possible to specify  another html file to fire?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080669">134</a> by Raymond Camden
		posted on 8/19/2014 at 6:15 PM
		</div>
		<div class="comment_text"><p>Not sure. Most PG apps use index.html by default. Is there a specific reason you don't want to use that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080670">135</a> by gil
		posted on 8/20/2014 at 9:20 AM
		</div>
		<div class="comment_text"><p>This way for example I can have a few varieties of the same page and compare between them, for debugging purpose.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080677">136</a> by Raymond Camden
		posted on 8/20/2014 at 3:09 PM
		</div>
		<div class="comment_text"><p>I'd probably use different projects. But - no - I don't think Ripple supports this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080676">137</a> by Erazem
		posted on 8/20/2014 at 3:30 PM
		</div>
		<div class="comment_text"><p>Great job on posting this tutorial. <br>I was working with Ripple extension support version 2.0.0 but I got sick from implementing all workarounds just to make it work in Ripple. What made me move was support for version 3.0.0. and would probably spent most of the day trying to make it work without your tutorial.</p><p>Maybe just a few notes:<br>1. Ajax works fine for me with Cross Domain Proxy disabled<br>2. "Cannot GET" still appears from time to time. To make it work initially I had to disable Ripple Extension<br>3. How do you set what browser is started in "ripple emulate" if you don't want to use the default one?<br>4. "cordova prepare" fails from time to time when refreshing by clicking refresh button in Chrome browser (it is logged in red). At the moment I don't remember the exact error but it is something about cordova not being installed, strange anyhow.</p><p>Great job, saved me a lot of time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080675">138</a> by Raymond Camden
		posted on 8/20/2014 at 3:47 PM
		</div>
		<div class="comment_text"><p>3) It remembers the last - so if you pick phone X, the next time you fire up it should use that one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080679">139</a> by Atul
		posted on 8/26/2014 at 8:30 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond Camden. You saved my day. i was just about to pull out my hairs and then I found your blog. I am using VS2013 professional with CTP tool installed and I was expecting them to set up my environment without me doing anything but I was wrong and so wrong that I ended up installing each module manually via npm and installed ripple the way you have mentioned and got it working all together.</p><p>Thanks once again for your contribution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080678">140</a> by gil
		posted on 9/1/2014 at 10:49 AM
		</div>
		<div class="comment_text"><p>Does ripple support plugins?<br>I tried to use file transfer, and got error.<br>Camera did work.<br>This discussion also says it does't support file transfer: <br><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F13990816%2Fphonegap-filetransfer-download-ripple-chrome%3Ap7y7q4R3nQhFakSEYJDEQd0xDHw&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/13990816/phonegap-filetransfer-download-ripple-chrome">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080681">141</a> by Raymond Camden
		posted on 9/1/2014 at 9:20 PM
		</div>
		<div class="comment_text"><p>I haven't tried it under Ripple. Best I can suggest is filing a bug report for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080685">142</a> by jeanPokou
		posted on 10/27/2014 at 11:05 PM
		</div>
		<div class="comment_text"><p>Great tutorial hands Ups<br>I was using ripple emulator as an extension until I noticed it was not anymore working!, left It for phonegap serve and live reload using Phonegap Appon a device.but wasnt quite satisfy and  I especially  like Ripple because of the GPS routing Simlutor very accurate and with custom GPSX file.<br> Then I found your article and I came back on Ripple , I also found their go major updates and now it is possible to test plugins like camera , InAppBrowser and others that previously was only possible on  the devices.<br>Great everything is moving on Node with the magic npm.</p><p>For me I am using all debugging tools out there for making good apps.</p><p>Thanks again from a follower sharing same passion (Ionic,phonegap ,angular and...)<br>@jeanPokou</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080682">143</a> by Sebastian Mach
		posted on 11/6/2014 at 11:45 AM
		</div>
		<div class="comment_text"><p>Hey,</p><p>you wrote that running `ripple emulate` will fire up chrome. It actually doesn't, it fires up the default browser, which makes it a little more inconvenient.</p><p>Otherwise great stuff; I love the sensor emulation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080683">144</a> by Jeremy
		posted on 11/13/2014 at 8:00 PM
		</div>
		<div class="comment_text"><p>The original chrome ripple extension provided a 'ripple' variable which = true when your .js is running in Ripple.  This allowed for some alternate code between running your app in the browser and on a phone.  Is there an equivalent variable in this re-vamped version of Ripple, I can't find it?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080684">145</a> by Raymond Camden
		posted on 11/13/2014 at 8:02 PM
		</div>
		<div class="comment_text"><p>Hmm, I didn't know that. Best I can suggest is that if you don't see it, take a stab at adding it back in (remember Ripple is open source). Or ask on the dev list, maybe it was removed by accident.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080687">146</a> by Jeremy
		posted on 11/13/2014 at 8:22 PM
		</div>
		<div class="comment_text"><p>Oops, it's an object called 'tinyHippos' which is defined in Ripple and absent on a mobile device.  It's still there!  Great way to avoid running mobile-only plugin code!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080686">147</a> by Raymond Camden
		posted on 11/13/2014 at 8:27 PM
		</div>
		<div class="comment_text"><p>Or use the Browser platform. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080689">148</a> by Jeremy
		posted on 11/13/2014 at 9:31 PM
		</div>
		<div class="comment_text"><p>Thanks for the fast reply!...I have noticed that Ripple seems to be loading all my plugin .js files and erroring since their native counterpart code is obiviously missing:</p><p>eg in the Chrome debug console I see:<br>missing exec: StatusBar._ready<br>missing exec: Console.logLevel</p><p>Is this intended functionality or am I missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080691">149</a> by Raymond Camden
		posted on 11/13/2014 at 9:32 PM
		</div>
		<div class="comment_text"><p>Honestly I don't know - best bet is to hit that dev list. Sorry I keep saying that, but it is the best place for technical questions about Ripple. Lately I haven't really used Ripple that much.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080688">150</a> by Dave
		posted on 11/17/2014 at 5:42 AM
		</div>
		<div class="comment_text"><p>Thanks again for an informative post Raymond. I was merrily plugging away on the Chrome extension without realising there was a newer option.</p><p>I gave the new version a try but to be honest I decided against it. The Chrome extension is easier for me and still works pretty well for basic debugging and using the tinyHippos variable mentioned in an earlier comment lets me work around one or two minor issues.</p><p>Now that Chrome supports remote debugging on the android emulator/ devices I think I dont need this.</p><p>You mentioned you havent used Ripple for a while. Is there something else you are using?</p><p>Cheers, and thanks for the posts!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714080690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714080690">151</a> by Raymond Camden
		posted on 11/17/2014 at 4:29 PM
		</div>
		<div class="comment_text"><p>I'm doing more w/ Chrome/Safari Remote debug, especially via GapDebug. When doing Ionic I'll use their console to terminal thing since it is so darn convenient. And now Cordova supports a "Browser" platform which is like Ripple light, but gets the job done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1911268700">
	<div>
		<img src="https://disqus.com/api/users/avatars/badrudeen.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1911268700">152</a> by Badru
		posted on 3/17/2015 at 6:47 AM
		</div>
		<div class="comment_text"><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2121219424">
	<div>
		<img src="https://disqus.com/api/users/avatars/antoniogallo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2121219424">153</a> by Antonio Gallo
		posted on 7/7/2015 at 11:58 AM
		</div>
		<div class="comment_text"><p>Any idea how to make the network plugin works? Its not loaded by ripple so i cannot test what happen to the application if network is down. Any idea?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2121239795">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2121239795">154</a> (In reply to <a href="#c_2121219424">#153</a>) by Raymond Camden
		posted on 7/7/2015 at 12:15 PM
		</div>
		<div class="comment_text"><p>You got me - haven't used Ripple in ages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2122362648">
	<div>
		<img src="https://disqus.com/api/users/avatars/antoniogallo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2122362648">155</a> (In reply to <a href="#c_2121239795">#154</a>) by Antonio Gallo
		posted on 7/7/2015 at 10:21 PM
		</div>
		<div class="comment_text"><p>what are you using now?</p><p>anyway i found a solution. upgraded from cordova 5.x to 5.1.1 and did cordova platform update now i've the network plugin working... and maybe the google analytics one too :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2122420753">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2122420753">156</a> (In reply to <a href="#c_2122362648">#155</a>) by Raymond Camden
		posted on 7/7/2015 at 11:00 PM
		</div>
		<div class="comment_text"><p>Either ionic serve or I just use the ios emulator since it is so fast.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2175009199">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_qiPgcBRAAn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2175009199">157</a> by Quyen Nguyen Van
		posted on 8/5/2015 at 3:12 AM
		</div>
		<div class="comment_text"><p>I cannot  install add on Ripple Emulator on chrome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2175544307">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2175544307">158</a> (In reply to <a href="#c_2175009199">#157</a>) by Raymond Camden
		posted on 8/5/2015 at 1:02 PM
		</div>
		<div class="comment_text"><p>Please see here: <a href="http://disq.us/url?url=http%3A%2F%2Fripple.incubator.apache.org%2F%3AO9qyW9nytPsy9KQNjEh-o5fkYxc&amp;cuid=3321886" rel="nofollow noopener" title="http://ripple.incubator.apache.org/">http://ripple.incubator.apa...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2186379772">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Iz9PBctvNQ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2186379772">159</a> (In reply to <a href="#c_1714080456">#10</a>) by AbdullahNauman
		posted on 8/11/2015 at 1:22 PM
		</div>
		<div class="comment_text"><p>You might want to look in to Visual Studio Tools for Apache Cordova. It sets up the whole thing for you. There s more info here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fvisualstudio.com%2Fen-us%2Ffeatures%2Fcordova-vs.aspx%3AdgStqmFJYy9GZnlN93EMoBFkmvY&amp;cuid=3321886" rel="nofollow noopener" title="visualstudio.com/en-us/features/cordova-vs.aspx">visualstudio.com/en-us/feat...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2444054899">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cW1azPTtqe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2444054899">160</a> by Vikramjit
		posted on 1/7/2016 at 7:20 AM
		</div>
		<div class="comment_text"><p>hi,</p><p>i am trying to run project on ripple emulator in osx but it seems to be not working getting this error :Cannot GET /platforms/ios/www/index.html and i am using this url :http://localhost:4400/platforms/ios/www/index.html?enableripple=cordova-3.0.0</p></div>
	</div>
</div>
		
<div class="comment" id="c_2444459308">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2444459308">161</a> (In reply to <a href="#c_2444054899">#160</a>) by Raymond Camden
		posted on 1/7/2016 at 2:26 PM
		</div>
		<div class="comment_text"><p>You using the latest?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2448043243">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cW1azPTtqe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2448043243">162</a> (In reply to <a href="#c_2444459308">#161</a>) by Vikramjit
		posted on 1/9/2016 at 7:19 AM
		</div>
		<div class="comment_text"><p>cordova v5.4.1 and ripple v0.9.32</p></div>
	</div>
</div>
		
<div class="comment" id="c_2453608148">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2453608148">163</a> (In reply to <a href="#c_2448043243">#162</a>) by Raymond Camden
		posted on 1/12/2016 at 4:06 PM
		</div>
		<div class="comment_text"><p>Sorry for the delay in responding - unfortunately I do not have much to suggest now. Did you add the ios platform? If not - add it. If you are Windows getting this - try switching Ripple to use Android.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2488355100">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ep4p6sKHE5.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2488355100">164</a> by Henrique Fernandes
		posted on 1/31/2016 at 8:02 PM
		</div>
		<div class="comment_text"><p>I'm using Ubuntu 15.10 and the latest version of NodeJs and NPM. <br>If I type this [ ripple emulate --path stringPath ] it doesn't work and the ripple device shows this message [ Cannot GET ]. But when I type just [ ripple emulate ] it works perfectly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2489633913">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2489633913">165</a> (In reply to <a href="#c_2488355100">#164</a>) by Raymond Camden
		posted on 2/1/2016 at 3:36 PM
		</div>
		<div class="comment_text"><p>Sorry - not sure what to say about that. I haven't used Ripple in about a year.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2491849095">
	<div>
		<img src="https://disqus.com/api/users/avatars/Nyluje.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2491849095">166</a> by Julien Castrie
		posted on 2/2/2016 at 1:04 PM
		</div>
		<div class="comment_text"><p>Hi, I ran into some trouble from one day to another: "Ripple Cordova Chrome “aw snap” message when plugin Media is part of the project".</p><p>Here are the details of my analysis regarding that topic: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F35152196%2Fripple-cordova-chrome-aw-snap-message-when-plugin-media-is-part-of-the-project%3AlzfkzEVd9a1-l4i1q7pFORw8zgM&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/35152196/ripple-cordova-chrome-aw-snap-message-when-plugin-media-is-part-of-the-project">http://stackoverflow.com/qu...</a></p><p>If you have a better solution to propose, I'd be grateful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2491911007">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2491911007">167</a> (In reply to <a href="#c_2491849095">#166</a>) by Raymond Camden
		posted on 2/2/2016 at 1:52 PM
		</div>
		<div class="comment_text"><p>I'd try the Browser platform for testing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2520905084">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cW1azPTtqe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2520905084">168</a> (In reply to <a href="#c_2453608148">#163</a>) by Vikramjit
		posted on 2/18/2016 at 8:55 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond, but have already running app on ripple in windows OS in android platform, now i want to run it on MAC OS in ios platform.Now i am first developing in android and at last will copy code to ios platform.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2521103376">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2521103376">169</a> (In reply to <a href="#c_2520905084">#168</a>) by Raymond Camden
		posted on 2/18/2016 at 12:28 PM
		</div>
		<div class="comment_text"><p>Not quite sure what your saying here. Sounds like maybe you are ok? If there is a question, please rephrase it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2527847728">
	<div>
		<img src="https://disqus.com/api/users/avatars/n2lose.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2527847728">170</a> (In reply to <a href="#c_2521103376">#169</a>) by Lam Nguyen
		posted on 2/22/2016 at 7:24 AM
		</div>
		<div class="comment_text"><p>in your console on root app folder, try to run this line:<br>ripple emulate android<br>I guess the cordova change structure when you create a new app.</p><p>There is a folder www/ in the root app directory and there is a folder platforms/android/assets/www. <br>I have tested something in index.html from platforms/android/assets/www/  , but when i change to other devices, the index.html reset same the index.html in root www/ directory.<br>So, we should run command : ripple emulate android/ios instead of.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3297627395">
	<div>
		<img src="https://disqus.com/api/users/avatars/yusufogundiji.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3297627395">171</a> by yusuf ogundiji
		posted on 5/10/2017 at 4:39 AM
		</div>
		<div class="comment_text"><p>my ripple is not showing my index.html dont no the problem</p></div>
	</div>
</div>
		
<div class="comment" id="c_3298031936">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3298031936">172</a> (In reply to <a href="#c_3297627395">#171</a>) by Raymond Camden
		posted on 5/10/2017 at 12:30 PM
		</div>
		<div class="comment_text"><p>Sorry - I haven't used this in years.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4701627064">
	<div>
		<img src="https://disqus.com/api/users/avatars/kimbualain.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4701627064">173</a> by Kimbu Alain
		posted on 11/25/2019 at 4:58 AM
		</div>
		<div class="comment_text"><p>Hi Please can I know the size in mb ofripple</p></div>
	</div>
</div>
		
<div class="comment" id="c_4702334694">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4702334694">174</a> (In reply to <a href="#c_4701627064">#173</a>) by Raymond Camden
		posted on 11/25/2019 at 8:02 PM
		</div>
		<div class="comment_text"><p>No idea - haven't used this since 2013.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4702335294">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4702335294">175</a> (In reply to <a href="#c_4701627064">#173</a>) by Raymond Camden
		posted on 11/25/2019 at 8:02 PM
		</div>
		<div class="comment_text"><p>According to the Apache site, it was retired in 2015. Don't use it.</p></div>
	</div>
</div>
		