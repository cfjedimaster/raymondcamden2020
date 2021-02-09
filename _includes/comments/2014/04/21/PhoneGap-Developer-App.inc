
<div class="comment" id="c_1714082724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082724">1</a> by Adam Harris
		posted on 4/22/2014 at 1:45 AM
		</div>
		<div class="comment_text"><p>Thanks for explaining how the plugins work with it. I was wondering about that. Unfortunately, since I used a lot of third party plugins, I won't be able to use this...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082727">2</a> by Shazron
		posted on 4/22/2014 at 3:17 AM
		</div>
		<div class="comment_text"><p>Adam - not to worry, we'll open source the app soon enough (later today?), so the live reload functionality could be integrated into your own app...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082725">3</a> by Sebastien
		posted on 4/22/2014 at 9:50 AM
		</div>
		<div class="comment_text"><p>Hi, thanks for the blog post! You guys can also use the GapReload plugin I wrote if you enjoy a Live Reload kind of workflow. There also is a Grunt task for it.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Ffingerproof%2Fcordova-plugin-gapreload%3AioZ8znSpBbtMATb_CdlI9PZPDQQ&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/fingerproof/cordova-plugin-gapreload">https://github.com/fingerpr...</a><br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Ffingerproof%2Fgrunt-gapreload%3AGm29B2ty2hEYG1gFj_-Fbh98jiE&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/fingerproof/grunt-gapreload">https://github.com/fingerpr...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082729">4</a> by Adam Harris
		posted on 4/22/2014 at 6:46 PM
		</div>
		<div class="comment_text"><p>That's great news, Shazron! And Sebastien, your plugin looks really awesome!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082726">5</a> by Tom Wilson
		posted on 4/22/2014 at 7:38 PM
		</div>
		<div class="comment_text"><p>What happens on reload?  Does the entire app get refreshed and then you start over in the deviceready event from the first page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082737">6</a> by Raymond Camden
		posted on 4/22/2014 at 7:40 PM
		</div>
		<div class="comment_text"><p>Yes, so if you were doing something like Angular and were deep in a view, then it is going to reset. But - there is a flag to disable autoreload if you want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082742">7</a> by Sebastien
		posted on 4/22/2014 at 8:57 PM
		</div>
		<div class="comment_text"><p>@Tom: Not using GapReload, you stay right where you were :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082738">8</a> by Raymond Camden
		posted on 4/22/2014 at 10:11 PM
		</div>
		<div class="comment_text"><p>Oh? It will reload assets but keep you at the current URL?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082740">9</a> by Sebastien
		posted on 4/22/2014 at 11:31 PM
		</div>
		<div class="comment_text"><p>Yes it will as it actually is based on Live Reload (<a href="http://disq.us/url?url=http%3A%2F%2Flivereload.com%2F%29%3AD0amPROHiFjL2mZexfASIrrgEZU&amp;cuid=3321886" rel="nofollow noopener" title="http://livereload.com/)">http://livereload.com/)</a>. I did not test it with `$ phonegap serve` yet as the command is pretty new and I originally designed the plugin to work with `$ cordova serve` (but my guess is it should work the same, maybe even out of the box if I'm lucky).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082741">10</a> by Raymond Camden
		posted on 4/23/2014 at 12:12 AM
		</div>
		<div class="comment_text"><p>So wait - I can be in some particular view in Angular, edit the HTML of that partial, and your app reloads it in such a way that Angular isn't doing a complete reload, just changing the HTML?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082745">11</a> by Sebastien
		posted on 4/23/2014 at 1:10 AM
		</div>
		<div class="comment_text"><p>Live Reload won't just reload the HTML template, it will do a full page refresh, but as long as you use {insert your favorite JS MVC framework name here} routing features you will be able to stay where you were (kind of).</p><p>That said, Live Reload won't do a full page refresh if you modify a CSS file, it will inject the new rules on the fly and this is really handy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082744">12</a> by Raymond Camden
		posted on 4/23/2014 at 1:30 AM
		</div>
		<div class="comment_text"><p>... oh... so it *is* just reloading? So I should point out - I didn't test the PG thing with a URL fragment being used so it may actually work the same then. I should whip up a quick jQM app to see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082743">13</a> by Qi
		posted on 4/23/2014 at 5:23 AM
		</div>
		<div class="comment_text"><p>Hi, how's going if plugins get updated then or I want to test some specific version for a plugin?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082747">14</a> by Raymond Camden
		posted on 4/23/2014 at 5:29 AM
		</div>
		<div class="comment_text"><p>Then you probably want to do it the "hard" way - which honestly isn't that hard either.</p><p>My opinion - and this may change(!) - is that this is a *kick ass* way to quickly test things out, become introduced to the platform in general - but that you probably want to start building things locally later on. Know what I mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082746">15</a> by sime
		posted on 4/24/2014 at 5:24 AM
		</div>
		<div class="comment_text"><p>I'm using the Camera API and a standard `cordova run android` works with the Camera API, but the Developer App doesn't seem to be able to launch the Camera chrome.</p><p>I tried looking at `adb logcat`, but I'm at a loss at how to debug this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082748">16</a> by Raymond Camden
		posted on 4/24/2014 at 5:57 PM
		</div>
		<div class="comment_text"><p>I just did a test and it worked ok for me. I added a button to the home page and then a click handler. See this Gist:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fcfjedimaster%2F11255545%3AlbVwKH44VCAt9psaFQ4-ikxDieU&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/cfjedimaster/11255545">https://gist.github.com/cfj...</a></p><p>Tested with iOS though, not Android.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082750">17</a> by Shazron
		posted on 4/24/2014 at 7:47 PM
		</div>
		<div class="comment_text"><p>Adam - check out the PhoneGap Developer App post by Michael Brooks. He points to the links for the open source repos for the app itself:<br><a href="http://disq.us/url?url=http%3A%2F%2Fphonegap.com%2Fblog%2F2014%2F04%2F23%2Fphonegap-developer-app%2F%3AohAJXYv1SiTxUy2wHZhiSPtNVrY&amp;cuid=3321886" rel="nofollow noopener" title="http://phonegap.com/blog/2014/04/23/phonegap-developer-app/">http://phonegap.com/blog/20...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082749">18</a> by Matt
		posted on 4/29/2014 at 5:48 PM
		</div>
		<div class="comment_text"><p>Very nice, Raymond.  As a PG Build user, I'm equally excited about this. If you are a Build-only user, please check out my post on what that means for you!  <a href="http://disq.us/url?url=http%3A%2F%2Fnetkow.com%2Fpost%2F84176058540%2Fleveraging-phonegap-app-as-phonegap-build-user%3ANPDZwJZXIHIsCFCB0v0TKr_6Te0&amp;cuid=3321886" rel="nofollow noopener" title="http://netkow.com/post/84176058540/leveraging-phonegap-app-as-phonegap-build-user">http://netkow.com/post/8417...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082751">19</a> by Art
		posted on 5/6/2014 at 11:05 PM
		</div>
		<div class="comment_text"><p>The core-plugins loading is cool.........<br>Is it just my environment or does the file-transfer plugin not load?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082752">20</a> by Raymond Camden
		posted on 5/7/2014 at 12:50 AM
		</div>
		<div class="comment_text"><p>Best I can recommend is filing a bug report on it. You can file reports here: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphonegap%2Fphonegap-app-developer%2Fissues%3A2qQk1JWfhnTR_OTwKY9-YVeAL-Y&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/phonegap/phonegap-app-developer/issues">https://github.com/phonegap...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082753">21</a> by Shashwat Tripathi
		posted on 5/9/2014 at 1:17 AM
		</div>
		<div class="comment_text"><p>This is very nice. I am using this, it makes development so fast and easy.<br>Well but for third party plugins like social sharing or status bar it is not working. Am I doing it wrong way or is it's limitation that it only works with core plugin. <br>I am able to use these third party plugins when I run app using Xcode or build app on build.phonegap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082754">22</a> by Raymond Camden
		posted on 5/9/2014 at 1:34 AM
		</div>
		<div class="comment_text"><p>You can't use it with custom plugins. Not as far as I know. You would only be able to use it with the core plugins.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082755">23</a> by Tony OHagan
		posted on 5/13/2014 at 5:35 PM
		</div>
		<div class="comment_text"><p>So I can see a future where baking a build of this new app is rolled into Cordova/PG CLI so it pickups up all your 3rd party/custom plugins and you then only rarely need to perform prepare or compiles. You could even be serving multiple devices so a JS/HTML/CSS code change can immediately be previewed on different OS's with no recompile.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082756">24</a> by Tony OHagan
		posted on 5/13/2014 at 7:33 PM
		</div>
		<div class="comment_text"><p>Just to clarify a bit ... I think you can avoid the recompiled by performing a 'debug' build that does not compress CCS or JS files. Symlinking some folders might also avoid file copying.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082757">25</a> by Tony OHagan
		posted on 5/14/2014 at 8:39 AM
		</div>
		<div class="comment_text"><p>Posted this issue: <br>  <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphonegap%2Fphonegap-app-developer%2Fissues%2F127%3AqO09-FQlJHgzvvVK1UgivcDZoLE&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/phonegap/phonegap-app-developer/issues/127">https://github.com/phonegap...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082758">26</a> by Isaac
		posted on 5/14/2014 at 7:20 PM
		</div>
		<div class="comment_text"><p>How did you manage Weinre to work?</p><p>I set up Weinre with:<br>weinre --boundHost 192.168.100.113 -httpPort 3000</p><p>In my app's index.html:<br>&lt;script src="http://192.168.100.113:3000/target/target-script-min.js#anonymous"&gt;&lt;/script&gt;</p><p>But I can't see the device listed on Targets:<br><a href="https://disq.us/url?url=https%3A%2F%2Fwww.dropbox.com%2Fs%2Flczy8pi52clrujj%2FCaptura%2520de%2520tela%25202014-05-14%252012.16.54.png%3AYUs3l0WLxJiKnw-JKSiwd-h4Nl0&amp;cuid=3321886" rel="nofollow noopener" title="https://www.dropbox.com/s/lczy8pi52clrujj/Captura%20de%20tela%202014-05-14%2012.16.54.png">https://www.dropbox.com/s/l...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082763">27</a> by Isaac
		posted on 5/15/2014 at 1:40 AM
		</div>
		<div class="comment_text"><p>I (kind of) managed to debug with <a href="https://disq.us/url?url=https%3A%2F%2Ftrigger.io%2Fcatalyst%3AXEMd8JGH7ivA7dm7MvgeRLmz0k0&amp;cuid=3321886" rel="nofollow noopener" title="https://trigger.io/catalyst">https://trigger.io/catalyst</a><br>It is very slow, and the console shows nothing, can only debug html and css so far.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082761">28</a> by Alexandre
		posted on 5/21/2014 at 4:28 PM
		</div>
		<div class="comment_text"><p>HI, nice tool, but there is a problem with filetransfert.<br>If you make :<br>alert("1");<br>var ft = new FileTransfer();										alert("2");<br>And test it it the tool, "2" is never show.<br>But if you use build.phonegap all are ok.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082762">29</a> by Raymond Camden
		posted on 5/21/2014 at 11:21 PM
		</div>
		<div class="comment_text"><p>Alexendre, you should file a bug report: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphonegap%2Fphonegap-app-developer%2Fissues%3A2qQk1JWfhnTR_OTwKY9-YVeAL-Y&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/phonegap/phonegap-app-developer/issues">https://github.com/phonegap...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082766">30</a> by Raymond Camden
		posted on 6/10/2014 at 11:56 PM
		</div>
		<div class="comment_text"><p>@Isaac: Not sure what to say. I tested, and it just plain worked. I just confirmed w/ latest PG.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082769">31</a> by Shashwat tripathi
		posted on 7/26/2014 at 11:42 PM
		</div>
		<div class="comment_text"><p>I have hosted WCF service on amazon ec2 windows iis7 server. Everthing works well if i open my app using chrome directly on my laptop, but if i use phonegap developer app to run my app on ipad then no http POST request work</p><p>On console of phonegap serve i sometime get error <br>ECONNRESET. I have no idea what is the problem.</p><p>Though it works well with phonegap developer app as well if i host WCF service locally using visual studio publish instead pf hosting it on amazon AWS</p><p>Maybe something needs to be done AWS side...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082765">32</a> by Raymond Camden
		posted on 7/27/2014 at 8:03 PM
		</div>
		<div class="comment_text"><p>Hmm. Afaik, the PG Dev App uses a wildcard for the access config so everything should be available. Best I can suggest is filing a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082768">33</a> by sunny
		posted on 7/30/2014 at 8:47 AM
		</div>
		<div class="comment_text"><p>I use 'phonegap serve', get error</p><p>connect  ETIMEDOUT<br>listening on unkown:3000</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082767">34</a> by Math Guffens
		posted on 7/30/2014 at 10:49 AM
		</div>
		<div class="comment_text"><p>I am developing an app on Android (Phonegap) in order to capture pictures from a video.</p><p>My code below is working with a web browser on my laptop but not with Phonegap on my smartphone. I just see a black rectangle on my app, not the picture.</p><p>According to you, is it possible to take a snapshot of a video with Phonegap?</p><p>var video = document.getElementById('video');            <br>var canvas = document.getElementById('canvas');            <br>var context = canvas.getContext('2d');</p><p>function snap() {                <br>    context.fillRect(0,0,150,100);                <br>    context.drawImage(video,0,0);            <br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082771">35</a> by Raymond Camden
		posted on 7/30/2014 at 4:06 PM
		</div>
		<div class="comment_text"><p>@sunny: You may have something else listening on that port.</p><p>@Math: "According to you, is it possible to take a snapshot of a video with Phonegap?"<br>It depends. You can record video and this will be saved to the file system. But I do not think what you are doing will work properly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082770">36</a> by Math Guffens
		posted on 7/30/2014 at 11:39 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond for your quick answer.</p><p>According to you, it's not possible to "cut" this video in order to get all the frames off the video element, show each of them on a canvas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082773">37</a> by Raymond Camden
		posted on 7/30/2014 at 11:58 PM
		</div>
		<div class="comment_text"><p>The issue is working with the binary data. That's pretty hefty lifting for JS. It is possible, but I don't believe it would perform well at all.</p><p>There are services that let you send them video files and they do all kinds of stuff - thumbnail extraction, resize, etc. I'd use one of those. (ZenCoder I believe.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082774">38</a> by Tony OHagan
		posted on 8/5/2014 at 3:15 AM
		</div>
		<div class="comment_text"><p>If you're developing Sencha Touch apps with PhoneGap then you might be interested in this new open source app that builds on the work of the PhoneGap team. It employs the the same client and server components but is no longer restricted to a fixed set of plugins and ensures that both client and server plugin versions match:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Ftohagan%2Fstlive%3AVvsFoOdxvDW9SfBdg-vSQ9X1EQU&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/tohagan/stlive">https://github.com/tohagan/...</a></p><p>Install Guide ..<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Ftohagan%2Fstlive%2Fblob%2Fmaster%2FINSTALL.md%3A5aBKHosE44U8DkuqC7qnjz8zNZ8&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/tohagan/stlive/blob/master/INSTALL.md">https://github.com/tohagan/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082775">39</a> by John
		posted on 9/3/2014 at 9:54 AM
		</div>
		<div class="comment_text"><p>I am developing an app using phonegap. I have installed phone by running the command <br>npm install -g phonegap@3.4 as npm install -g phonegap was showing some error.<br>Now when i try to connect using developer at to my listening address 127.0.0.1:3000, it does not connect and shows "connection timeout".</p><p>Please can anyone tell me what is wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082772">40</a> by Raymond Camden
		posted on 9/3/2014 at 3:11 PM
		</div>
		<div class="comment_text"><p>127.0.0.1 points to your phone, not your machine. You need your real IP address.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082776">41</a> by john
		posted on 9/3/2014 at 4:12 PM
		</div>
		<div class="comment_text"><p>Thankyou Sir for replying to my question so fast !!!<br>I solved the problem by reinstalling the phonegap through $ npm install -g phonegap and now my developer app is connecting and i can see the project on my phone which is working perfectly. But, when i deploy the app to a device, its page scrolling sucks and the sliding menu also freezes sometimess.<br>Any solutions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082777">42</a> by Raymond Camden
		posted on 9/3/2014 at 6:07 PM
		</div>
		<div class="comment_text"><p>That would depend on what your doing. I don't know what CSS, JS, etc framework you have in place. For that, I'd recommend you post a detailed question to StackOverflow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082778">43</a> by Peter Watts
		posted on 9/10/2014 at 6:41 PM
		</div>
		<div class="comment_text"><p>Weinre doesn't work for me either. I can successfully load the target script in chrome, so my phone is finding my computer, but the Developer App simply isn't coming up as a target. Can you share more info about your Weinre setup? Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082779">44</a> by Raymond Camden
		posted on 9/10/2014 at 10:17 PM
		</div>
		<div class="comment_text"><p>Not sure what to suggest then. Maybe file a bug report with the PhoneGap team on it? Sorry to punt you off but I don't work on that tool itself. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082781">45</a> by Emmanuel
		posted on 10/2/2014 at 5:28 AM
		</div>
		<div class="comment_text"><p>Hello peepz, this is awesome and thanks for sharing the nicest idea behind deployment of phonegap app, but i have a problem, I have problem in capturing image using my phone camera, but work perfectly okay without using phonegap developer, any help please?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1762604609">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesblais.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1762604609">46</a> by Charles Blais
		posted on 12/29/2014 at 4:15 AM
		</div>
		<div class="comment_text"><p>Hi, I'm trying to run a basic project on an android device, but it is stock at "connecting to device"</p><p>When I lunch "phonegap serve", I have a message "deviceready has not fired after 5 seconds" ??</p><p>But if I install the application with the .apk on my android device, it's working...</p><p>Any ideas ?</p><p>I'm using phonegap 3.6.3-0.22.4</p><p>Thanks</p><p>Charles</p></div>
	</div>
</div>
		
<div class="comment" id="c_1763229890">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1763229890">47</a> (In reply to <a href="#c_1762604609">#46</a>) by Raymond Camden
		posted on 12/29/2014 at 4:54 PM
		</div>
		<div class="comment_text"><p>Are both devices on the same network? Run a web server on your machine - and make note of your IP address (not 127.0.0.1). Then on your Android device, open Chrome and try to hit that IP. If you can't, it means your device and desktop can't see each other.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1763361655">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesblais.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1763361655">48</a> (In reply to <a href="#c_1763229890">#47</a>) by Charles Blais
		posted on 12/29/2014 at 6:16 PM
		</div>
		<div class="comment_text"><p>They see each other, that's not the problem.</p><p>The problem is when I run my hello-world application on the android device by the PG-developer app, there's a problem and device ready is not fired.</p><p>The message "connecting to device" is in the app on the android device. Have a look at the attached pic.</p><p>The message "deviceready has not fired after 5 seconds" is on desktop.</p><p>If I install the app with the apk on the device, I have the message "device ready".</p><p>Thanks</p><p>Charles</p></div>
	</div>
</div>
		
<div class="comment" id="c_1763388588">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1763388588">49</a> (In reply to <a href="#c_1763361655">#48</a>) by Raymond Camden
		posted on 12/29/2014 at 6:35 PM
		</div>
		<div class="comment_text"><p>I searched for this at the GitHub repo issue tracker (<a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphonegap%2Fphonegap-app-developer%2Fissues%29%3A-9E74aCDJ2n3AN9ILz46LUJ5yb8&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/phonegap/phonegap-app-developer/issues)">https://github.com/phonegap...</a> but didn't see it. I'd suggest filing a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1763533837">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesblais.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1763533837">50</a> (In reply to <a href="#c_1763388588">#49</a>) by Charles Blais
		posted on 12/29/2014 at 8:17 PM
		</div>
		<div class="comment_text"><p>I think I have to upgrade my PG CLI</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphonegap%2Fphonegap-app-developer%2Fissues%2F244%3Aww2jvpoJQo0Fx5xMZ8Xe3dGWHUQ&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/phonegap/phonegap-app-developer/issues/244">https://github.com/phonegap...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1903299174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1903299174">51</a> by Gaurang
		posted on 3/12/2015 at 2:42 PM
		</div>
		<div class="comment_text"><p>Have you tried this app with MobileFirst environment? can i use this with Mobilefirst and AngularJS environment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1903319065">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1903319065">52</a> by Raymond Camden
		posted on 3/12/2015 at 2:53 PM
		</div>
		<div class="comment_text"><p>Not yet. To the second question, AngularJS wouldn't be an issue for sure. To your MF specific issue, I *think* it would work ok - but again - I haven't tested it yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2505794088">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_muedaPk5yq.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2505794088">53</a> by Radhika Sharma
		posted on 2/10/2016 at 9:30 AM
		</div>
		<div class="comment_text"><p>Great it was, i am also Phonegap Developer and i need a project so i can you have any project then send me details of project and contact details :- radhikaverma1225@gmail.com</p></div>
	</div>
</div>
		