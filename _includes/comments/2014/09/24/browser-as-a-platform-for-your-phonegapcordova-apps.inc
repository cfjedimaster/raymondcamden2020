
<div class="comment" id="c_1714083964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083964">1</a> by Martin Cisneros
		posted on 9/25/2014 at 2:54 AM
		</div>
		<div class="comment_text"><p>"I should point out that the PhoneGap CLI does not support this platform yet". Maybe this is the line to separate Phonegap and continue just with Cordova</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083959">2</a> by Martin Cisneros
		posted on 9/25/2014 at 3:18 AM
		</div>
		<div class="comment_text"><p>I got cordova 3.6.3-0.2.13 and when i try cordova platform add browser it send me this message:</p><p>Unable to fetch platform browser: Error: No compatible version found: cordova-broser@'master'<br>Valid install tarjets: <br>3.5.0,3.5.1,3.5.2</p><p>Just waiting for an update :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083955">3</a> by Raymond Camden
		posted on 9/25/2014 at 4:08 AM
		</div>
		<div class="comment_text"><p>Martin - read my blog post again. I explain how to get around that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083950">4</a> by Trev
		posted on 9/25/2014 at 5:42 AM
		</div>
		<div class="comment_text"><p>This will save a lot of time and mocking.<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083960">5</a> by Michal Mocny
		posted on 9/25/2014 at 7:19 PM
		</div>
		<div class="comment_text"><p>Great article Ray, I have fallen behind tracking progress on browser platform.</p><p>In case you are working on it, or know who is, you can fix the "need to shut down chrome" problem by passing --user-data-dir=some_temp_dir.  Chrome process is a singleton only per user profile, so by creating a new profile you can start with new command line flags applied.  (This strategy is often also used by chrome devs to make sure the browser is in a clean state.)</p><p>I tried to write a patch for the cordova-browser run script, but someone its use of "open -a" is making the user-data-dir argument not apply.  I think perhaps open command using its own internal magic to bring the process into the foreground if its already running..  If I instead run "Applications/Google\ <a href="http://disq.us/url?url=http%3A%2F%2FChrome.app%2FContents%2FMacOS%2FGoogle%3Ax6B-b7CsQwiRDIUZ9bBbeNwIE3s&amp;cuid=3321886" rel="nofollow noopener" title="Chrome.app/Contents/MacOS/Google">Chrome.app/Contents/MacOS/G...</a>\ Chrome --user-data-dir=test --disable-web-security" it works.</p><p>If you aren't working on this, let me know and I'll just open PR for the repo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083952">6</a> by Raymond Camden
		posted on 9/25/2014 at 7:23 PM
		</div>
		<div class="comment_text"><p>When you say pass so and so (and my blog auto formats comments a bit so I apologize it munged it a bit) are you saying pass it to the cordova run message?</p><p>And no - I'm a Cordova user and pretend evangelist, I don't hack on the source itself. I'm sure they would love a PR. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083963">7</a> by Michal Mocny
		posted on 9/25/2014 at 7:32 PM
		</div>
		<div class="comment_text"><p>Some more details..</p><p>Seems open has a '-n' which will open a fresh application instead of bringing to front, resolving the previous issue.  However now I get auth errors with my user-data-dir (perhaps open runs commands under a different user?), and /dev/null is apparently no longer a valid user-data-dir and silently fails.</p><p>If I pre-create a user-dir with chmod 1777, then it works fine.  Likely there is an even easier alternative by just modifying the flags to open command, but I cannot find it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083968">8</a> by Michal Mocny
		posted on 9/25/2014 at 7:43 PM
		</div>
		<div class="comment_text"><p>Ray, I meant we should update the run script within the cordova-browser repo so that users don't have to kill Chrome first.</p><p>I've resolved the permissions issue by just hardcoding to use a profile in /tmp/ and opened a PR for it here: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fapache%2Fcordova-browser%2Fpull%2F1%3AeNeZOTShSINIMUZZ1DcNRID93-U&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/apache/cordova-browser/pull/1">https://github.com/apache/c...</a></p><p>Only tested on Mac, but I think that is true for the current run script, too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083958">9</a> by Joe Dev
		posted on 9/25/2014 at 7:44 PM
		</div>
		<div class="comment_text"><p>Out of curiosity, how does this compare with ripple-emulator that I am using currently?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083970">10</a> by Raymond Camden
		posted on 9/25/2014 at 7:49 PM
		</div>
		<div class="comment_text"><p>@Michal: Got ya.</p><p>@Joe: Good question. So - Ripple has been a bit quiet lately. I'm on the dev list (and a contributor), and there was some recent activity around Cordova 3.6.3, but in general, not much is going on. I'd like to spend more time on it, but honestly, I just don't have it. It does have the advantage of creating a visual wrapper around your web view, and while it is fake, it makes it feel a bit more real. You can fake the accelerometer a bit better (with data you specify I mean). It also has better localization support (you can switch to French I believe). Also, you could test changing network stuff via the UI.</p><p>In general, Ripple has some nicer controls on top of the mocking - if that makes sense. As a project though I don't know how much further it will be developed.</p><p>The *ideal* solution, maybe, would be for Ripple to remove it's own mocking stuff and make use of the mocking here, and just provide the nice UI/control type stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083972">11</a> by Michal Mocny
		posted on 9/25/2014 at 7:54 PM
		</div>
		<div class="comment_text"><p>Ray, have you tried Chrome Dev Tools mobile emulation for the UI stuff? <a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.chrome.com%2Fdevtools%2Fdocs%2Fdevice-mode%3A9XWdc37XxenC4dIG5CGL922BVgQ&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.chrome.com/devtools/docs/device-mode">https://developer.chrome.co...</a></p><p>Not sure that it replaces everything ripple did, but it also adds a lot of new awesome.  Combined with browser-platform polyfills, I think we are pretty set..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083985">12</a> by Raymond Camden
		posted on 9/25/2014 at 7:56 PM
		</div>
		<div class="comment_text"><p>I have. I think I mentioned it above in terms of the accelerometer. It's nice. Ripple is a bit better - especially for GPS. (They let you select from a map instead of just entering long/lat points which no one really knows off the top of their head. :)</p><p>As a completely OT note - their network emulation is bad though. If you try to use it to change network conditions or go offline, they don't fire the appropriate offline/online events. I need to blog about that bug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083995">13</a> by Raymond Camden
		posted on 9/25/2014 at 8:11 PM
		</div>
		<div class="comment_text"><p>More on that bug: <a href="https://disq.us/url?url=https%3A%2F%2Fcode.google.com%2Fp%2Fchromium%2Fissues%2Fdetail%3Fid%3D417747%3Abze4W5UTTe78IR_n-yYmSYYGa5I&amp;cuid=3321886" rel="nofollow noopener" title="https://code.google.com/p/chromium/issues/detail?id=417747">https://code.google.com/p/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084000">14</a> by Martin Cisneros
		posted on 9/26/2014 at 10:47 AM
		</div>
		<div class="comment_text"><p>Thank you Raymond!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083997">15</a> by Michal Mocny
		posted on 9/26/2014 at 9:21 PM
		</div>
		<div class="comment_text"><p>Ray, cordova-browser run script has been updated.  If you re-add the browser platform from git, you should not need to kill your primary chrome instance any more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083983">16</a> by Raymond Camden
		posted on 9/26/2014 at 10:18 PM
		</div>
		<div class="comment_text"><p>I normally just update my main cordova CLI. Is this something I'd do separate w/ npm?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083986">17</a> by Daniel G
		posted on 9/26/2014 at 11:03 PM
		</div>
		<div class="comment_text"><p>I updated cordova and added the browser platform.  It builds fine, but when I run `cordova run browser` I get a cryptic fail error: ENOENT.  Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083988">18</a> by Raymond Camden
		posted on 9/26/2014 at 11:34 PM
		</div>
		<div class="comment_text"><p>@Daniel: Sorry, no. Sounds familiar. Maybe remove/add it back?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083994">19</a> by Daniel G
		posted on 9/26/2014 at 11:43 PM
		</div>
		<div class="comment_text"><p>I tried that already, it did nothing.  I guess I'll just use Weinre.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084001">20</a> by Raymond Camden
		posted on 9/26/2014 at 11:55 PM
		</div>
		<div class="comment_text"><p>Oh lord no - if you want to debug, use Chrome Remote Debug or Safari Remote Debug. Or see my article on GapDebug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083992">21</a> by Ilya Buziuk
		posted on 10/3/2014 at 4:18 PM
		</div>
		<div class="comment_text"><p>Hello, Raymond.<br>What do you think about "Ripple as a platform" idea? Ripple has almost all core plugin functionality + sexy UI. <br>P.S I also faced ENOENT error on windows</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083987">22</a> by Raymond Camden
		posted on 10/5/2014 at 12:39 AM
		</div>
		<div class="comment_text"><p>I like Ripple and used to use it a lot. I'm even a contributor. But this feels like a better approach. This also doesn't make Ripple obsolete. In my mind, I think Ripple provides a cooler UI and could be modified to use plugins like this does.</p><p>Basically - what i said to Michal above. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083984">23</a> by Levi L
		posted on 10/9/2014 at 7:25 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I might be missing a step in your post, but when I try to run the command: _cordova platform add browser --usegit_, I get a _TypeError: Cannot read property 'text' of null_ error. I made sure that Chrome was not running and readding/removing the platform does not seem to fix the issue. Any ideas why this is happening?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083996">24</a> by Raymond Camden
		posted on 10/9/2014 at 7:27 PM
		</div>
		<div class="comment_text"><p>Hmm, no, sorry, I don't. Best I can suggest is to file a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083990">25</a> by Levi L
		posted on 10/9/2014 at 8:02 PM
		</div>
		<div class="comment_text"><p>Figured out the issue. Our config.xml file was missing the description tag, which was causing the cli to crash. After adding that in it worked fine. Thanks for posting this, excited to use this in our development process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084003">26</a> by Eliot Sykes
		posted on 10/20/2014 at 1:44 PM
		</div>
		<div class="comment_text"><p>Hi Raymond - Thank you for this, this is good news. How's support for other browsers?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083991">27</a> by Mte90
		posted on 10/20/2014 at 5:05 PM
		</div>
		<div class="comment_text"><p>Any news for support for other browser?<br>Support for generate an Open Web App (<a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen-US%2FApps%2FQuickstart%29%3AmYHIXDDm8E_yQ0vNwc-WccVDM70&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en-US/Apps/Quickstart)">https://developer.mozilla.o...</a> for Firefox/Firefox for Android?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083999">28</a> by Babak
		posted on 10/20/2014 at 10:44 PM
		</div>
		<div class="comment_text"><p>I'm running Cordova on Windows 7 with Chrome 38.0.2125.101 m.<br>Android version works fine but I got following error on Browser.<br>Any idea?</p><p>&gt;*cordova run browser*<br>Running command: cmd "/s /c ""d:\..\platforms\browser\cordova\run.bat"""</p><p>*events.js:72*<br>        throw er; // Unhandled 'error' event<br>              ^<br>Error: spawn ENOENT<br>    at errnoException (child_process.js:1001:11)<br>    at Process.ChildProcess._handle.onexit (child_process.js:792:34)<br>Error: cmd: Command failed with exit code 8<br>    at ChildProcess.whenDone (C:\...\AppData\Roaming\npm\node_modules\cordova\node_modules\cordova-lib\src\cordova\superspawn.js:135:23)<br>    at ChildProcess.emit (events.js:98:17)<br>    at maybeClose (child_process.js:756:16)<br>    at Process.ChildProcess._handle.onexit (child_process.js:823:5)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084004">29</a> by Raymond Camden
		posted on 10/22/2014 at 1:03 AM
		</div>
		<div class="comment_text"><p>@eliot/@mte90 - I only tested in Chrome, but honestly I don't think the code is Chrome specific in terms of the mock portion. I think it's just Chrome specific in how it *launches*. I wrote brwoser support for the Barcode Scanner plugin and my code just uses a simple prompt/confirm. Unfortunately the other hasn't approved it yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083989">30</a> by Raymond Camden
		posted on 10/22/2014 at 1:04 AM
		</div>
		<div class="comment_text"><p>@babak: I can't fire up a VM at the moment. Ensure you are updated to latest (4.0) and if you still see it, file a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083998">31</a> by Alan Zhu
		posted on 10/22/2014 at 9:27 PM
		</div>
		<div class="comment_text"><p>Hi Raymond and babak,</p><p>I got the same error as you.  "Error: spawn ENOENT".<br>After checking codes, I found the root cause and the temp solution.</p><p>Root cause: The javascript file “run” in &lt;project&gt;/platforms/browser/ hardcodes the path of “chrome.exe”.</p><p>Solution:  run chrome.exe directly or change the above file to include the correct path.</p><p>&gt;chrome.exe --user-data-dir="C:/Chromedevsession  --disable-web-security</p><p>then open file &lt;project_path&gt;/platforms/browser/www/index.html directly.</p><p>for details, please refer to <a href="http://disq.us/url?url=http%3A%2F%2Falanzhu.cn%2Fblog%2F%3Fp%3D64%3AQdkk6HMLvmr7jNQ7gpWgq4h74fk&amp;cuid=3321886" rel="nofollow noopener" title="http://alanzhu.cn/blog/?p=64">http://alanzhu.cn/blog/?p=64</a></p><p>BTW: up to now, I only run the basic example without camera etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084006">32</a> by Raymond Camden
		posted on 10/23/2014 at 12:46 AM
		</div>
		<div class="comment_text"><p>Alan, thank you very much for sharing that!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084002">33</a> by Babak
		posted on 10/23/2014 at 9:53 AM
		</div>
		<div class="comment_text"><p>Thanks to Alan my problem has been solved. Thank you to you, too, Raymond.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713371859">
	<div>
		<img src="https://disqus.com/api/users/avatars/marcluria.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713371859">34</a> by Marc Luria
		posted on 11/26/2014 at 10:01 AM
		</div>
		<div class="comment_text"><p>After I do cordova run browser it opens up a new browser window in chrome.  However, localstorage doesn't seem to work, i.e. it forgot everything from the last time.  Sort of like incongnito mode.</p><p>Any fix to this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714249174">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714249174">35</a> (In reply to <a href="#c_1713371859">#34</a>) by Raymond Camden
		posted on 11/26/2014 at 8:18 PM
		</div>
		<div class="comment_text"><p>On OSX I'm not able to replicate this. I just did a quick test and LS persisted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1716923700">
	<div>
		<img src="https://disqus.com/api/users/avatars/marek_d_browski.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1716923700">36</a> by Marek Dąbrowski
		posted on 11/28/2014 at 7:51 PM
		</div>
		<div class="comment_text"><p>Just a note. I had to change the command slightly to make it work on the linux box:<br>cordova platform add browser@master --usegit</p></div>
	</div>
</div>
		
<div class="comment" id="c_1726932112">
	<div>
		<img src="https://disqus.com/api/users/avatars/colinbowern.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1726932112">37</a> by Colin Bowern
		posted on 12/5/2014 at 11:01 AM
		</div>
		<div class="comment_text"><p>Any plans to update "phonegap serve" and the underlying cordova piece to serve up the browser version of cordova.js file instead of android cordova.js when using Google Chrome over HTTP? I am trying to use protractor to drive system tests using an http location instead of having to mash together a file path is a lot cleaner.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1727632225">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1727632225">38</a> (In reply to <a href="#c_1726932112">#37</a>) by Raymond Camden
		posted on 12/5/2014 at 7:15 PM
		</div>
		<div class="comment_text"><p>Are you sure it isn't using the cordova.js from platforms/browser/www?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1758026395">
	<div>
		<img src="https://disqus.com/api/users/avatars/om23.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1758026395">39</a> by om23
		posted on 12/24/2014 at 8:11 PM
		</div>
		<div class="comment_text"><p>Hi I've been developing on Ubuntu 14.04. I was able to add the browser platform in my phonegap app however when I try 'cordova run browser' nothing happens. Chrome does not open up. I looked at /platforms/ browser/cordova/run script that 'cordova run browser' initiates and it seems to be build for Windows. I'm just wondering if someone has been using this functionality in an Linux development evironment and running into the same issue. The fix would be for the script to recognize that its in a Linux environment and execute Chrome that way. Correct me if I'm wrong and let me know if there's a fix.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1758323167">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1758323167">40</a> (In reply to <a href="#c_1758026395">#39</a>) by Raymond Camden
		posted on 12/25/2014 at 2:16 AM
		</div>
		<div class="comment_text"><p>I'd file a ticket w/ the CLI project that way you would know yourself when it is corrected. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1760752562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1760752562">41</a> by fatih
		posted on 12/27/2014 at 3:45 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Thanks for the blog. Browser platform is really useful. I did not achieve to capture an image with browser. Could you please share your code?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1760754663">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1760754663">42</a> (In reply to <a href="#c_1760752562">#41</a>) by Raymond Camden
		posted on 12/27/2014 at 3:47 PM
		</div>
		<div class="comment_text"><p>Sorry, what? Can you rephrase what you asked?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1762904056">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_lxjzSNampE.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1762904056">43</a> (In reply to <a href="#c_1714083970">#10</a>) by Ryan Archer
		posted on 12/29/2014 at 12:11 PM
		</div>
		<div class="comment_text"><p>I have used Ripple emulator in the past too. It's great but like i said, it is still in the PAST. I think last time I looked it was supporting PhoneGap 2.0 or something. Has anyone had a chance to put Adobe Edge Inspect up to the task yet? I have tested it when building responsive website design against my iPhone and iPad.</p><p>I have not tested it on any new Cordova applications yet but I'd bet that it would definitely be handy for testing. Just not sure about the API working and all. Can anyone confirm this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1763070360">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1763070360">44</a> (In reply to <a href="#c_1762904056">#43</a>) by Raymond Camden
		posted on 12/29/2014 at 2:48 PM
		</div>
		<div class="comment_text"><p>Edge Inspect lets you inspect running web pages, but will not work with PhoneGap/Cordova apps. You can use Remote Debugging (Android, iOS) instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1765318489">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_lxjzSNampE.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1765318489">45</a> (In reply to <a href="#c_1763070360">#44</a>) by Ryan Archer
		posted on 12/30/2014 at 11:59 PM
		</div>
		<div class="comment_text"><p>Not too sure what Remote Debugging is. In the past I have just connected Android/iOS devices and ran them through code in Terminal with Node.JS. Are you referring to the Phonegap developer app? <a href="http://disq.us/url?url=http%3A%2F%2Fapp.phonegap.com%2F%3AkYQuXs4c-UAPJnvW8jvPZuh0d4Q&amp;cuid=3321886" rel="nofollow noopener" title="http://app.phonegap.com/">http://app.phonegap.com/</a>. Sorry I have just been away from PhoneGap and Apache Cordova for a while...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1765359540">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1765359540">46</a> (In reply to <a href="#c_1765318489">#45</a>) by Raymond Camden
		posted on 12/31/2014 at 12:34 AM
		</div>
		<div class="comment_text"><p>Go to my About Me page (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fabout-me%29%3AABGEccG1_ZB76folS0c4yyltnio&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/about-me)">http://www.raymondcamden.co...</a> and see my two articles on mobile debugging.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1812619089">
	<div>
		<img src="https://disqus.com/api/users/avatars/markoraatikka.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1812619089">47</a> by Marko Raatikka
		posted on 1/23/2015 at 10:01 AM
		</div>
		<div class="comment_text"><p>FWIW, I'm finding <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fpbernasconi%2Fchrome-cordova%3AswZEXjZwLJefFfnCRwImQRxZwSE&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/pbernasconi/chrome-cordova">Cordova Mocks</a> Chrome Plugin a fairly useful extension for mocking plugins for the browser. Avoids going through some of the hoops of <i>cordova run browser</i> :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1824531273">
	<div>
		<img src="https://disqus.com/api/users/avatars/davidwesst.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1824531273">48</a> by David Wesst
		posted on 1/29/2015 at 10:19 PM
		</div>
		<div class="comment_text"><p>Thanks for this post Raymond! Great stuff many months after the release. :)</p><p>Just a quick question: I've noticed that when I take a picture using the Camera plugin, the datauri that comes back and is set to an IMG element ends up not being the full picture that was displayed in the injected video element.</p><p>Any ideas on this? It looks like the same behaviour you received in the post (video element is bigger than the actual picture saved).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1824578730">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1824578730">49</a> (In reply to <a href="#c_1824531273">#48</a>) by Raymond Camden
		posted on 1/29/2015 at 10:51 PM
		</div>
		<div class="comment_text"><p>If I had to guess, I'd say the developers probably didn't care since the video was just meant to represent the camera temporarily - not actually be what is displayed after the picture is taken - if that makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1826314726">
	<div>
		<img src="https://disqus.com/api/users/avatars/davidwesst.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1826314726">50</a> (In reply to <a href="#c_1824578730">#49</a>) by David Wesst
		posted on 1/30/2015 at 9:43 PM
		</div>
		<div class="comment_text"><p>It does make sense. I suppose it's meant to wire in the core functionality rather than a refined UX. You need to start somewhere.<br>Thanks for the reply!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1874882728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1874882728">51</a> by KuRi
		posted on 2/25/2015 at 3:52 PM
		</div>
		<div class="comment_text"><p>I am using:</p><p>navigator.camera.getPicture(uploadPhoto,errorPhoto,{sourceType:1,destinationType:0,quality:60});</p><p>But when clicking on the button than launches this method nothing happens, no error, no webcam prompt... any idea?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1874886693">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1874886693">52</a> (In reply to <a href="#c_1874882728">#51</a>) by Raymond Camden
		posted on 2/25/2015 at 3:55 PM
		</div>
		<div class="comment_text"><p>Do you see anything in the console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1876465684">
	<div>
		<img src="https://disqus.com/api/users/avatars/mvzn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1876465684">53</a> by Movizen
		posted on 2/26/2015 at 11:57 AM
		</div>
		<div class="comment_text"><p>Very good post!<br>In the new platform "Browser", you can use the plugin for file transfer? File and File Transfer.</p><p>Thank you..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1876745650">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1876745650">54</a> (In reply to <a href="#c_1876465684">#53</a>) by Raymond Camden
		posted on 2/26/2015 at 3:11 PM
		</div>
		<div class="comment_text"><p>I haven't checked in a while. Go to the git repo for those plugins and check - then let us know. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2084857558">
	<div>
		<img src="https://disqus.com/api/users/avatars/armelkembe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2084857558">55</a> by Armel Kembe
		posted on 6/17/2015 at 11:44 PM
		</div>
		<div class="comment_text"><p>Is there any plan to have the browser as  a supported platforn by Cordova in the near future? I am asking because I would like to have a subset on my Cordova application to run in the browser and I was wondering If I should wait for Cordova to do more progress on the Browser platform support or I should just go a head an create my own version of the cordova.js for the browser...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2091183572">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2091183572">56</a> (In reply to <a href="#c_2084857558">#55</a>) by Raymond Camden
		posted on 6/21/2015 at 12:45 PM
		</div>
		<div class="comment_text"><p>The best thing I can suggest for checking on "support for x" is to sign up for the developer list and ask there - that's where all plans/etc are discussed: <a href="http://disq.us/url?url=http%3A%2F%2Fcordova.apache.org%2F%23mailing-list%3AWuAc0gHPxAyr8Q068zcQY81IHOM&amp;cuid=3321886" rel="nofollow noopener" title="http://cordova.apache.org/#mailing-list">http://cordova.apache.org/#...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2092750214">
	<div>
		<img src="https://disqus.com/api/users/avatars/armelkembe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2092750214">57</a> (In reply to <a href="#c_2091183572">#56</a>) by Armel Kembe
		posted on 6/22/2015 at 1:55 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond. I will  go there :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2316443667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2316443667">58</a> by Piyush Muthal
		posted on 10/20/2015 at 9:17 AM
		</div>
		<div class="comment_text"><p>Hi , I am using barcode scanner plugin for browser platform . The scanner is not opening it is just prompting me for the barcode number and nothing else. Please tell me how barcode scanner can open in browser platform ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2316512813">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2316512813">59</a> (In reply to <a href="#c_2316443667">#58</a>) by Raymond Camden
		posted on 10/20/2015 at 10:37 AM
		</div>
		<div class="comment_text"><p>You can't do a barcode scan on desktop. The prompt you are seeing is how the browser platform handles it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2316568474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2316568474">60</a> (In reply to <a href="#c_2316512813">#59</a>) by Piyush Muthal
		posted on 10/20/2015 at 11:30 AM
		</div>
		<div class="comment_text"><p>Thank you Raymond for your quick response . :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2316582254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2316582254">61</a> (In reply to <a href="#c_2316512813">#59</a>) by Piyush Muthal
		posted on 10/20/2015 at 11:43 AM
		</div>
		<div class="comment_text"><p>Raymond can you please suggest me any other alternative to run barcode scanner in web application ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2316673237">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2316673237">62</a> (In reply to <a href="#c_2316582254">#61</a>) by Raymond Camden
		posted on 10/20/2015 at 12:59 PM
		</div>
		<div class="comment_text"><p>Not really. Some barcode scanners will automatically fill in a selected form field. You can try that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2322516632">
	<div>
		<img src="https://disqus.com/api/users/avatars/robcaldecott.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2322516632">63</a> by Rob Caldecott
		posted on 10/23/2015 at 9:00 AM
		</div>
		<div class="comment_text"><p>I cannot get a file picker to appear at all, in either Chrome or Firefox. The following code does nothing at all. If I change the sourceType to CAMERA then I can access my web cam OK. Any ideas?</p><p>navigator.camera.getPicture(<br>  function(data) {<br>    console.log(data);<br>  },<br>  function(message) {<br>   console.log(message);<br>  }, {<br>  destinationType: Camera.DestinationType.DATA_URL,<br>  sourceType: Camera.PictureSourceType.SAVEDPHOTOALBUM<br>  }<br>            );</p></div>
	</div>
</div>
		
<div class="comment" id="c_2322712728">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2322712728">64</a> (In reply to <a href="#c_2322516632">#63</a>) by Raymond Camden
		posted on 10/23/2015 at 12:24 PM
		</div>
		<div class="comment_text"><p>Does the same code work in Chrome?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2324419398">
	<div>
		<img src="https://disqus.com/api/users/avatars/robcaldecott.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2324419398">65</a> (In reply to <a href="#c_2322712728">#64</a>) by Rob Caldecott
		posted on 10/24/2015 at 1:10 PM
		</div>
		<div class="comment_text"><p>It doesn't work on any desktop browser I've tried (Windows). Each time you call getPicture a new file input as added to the DOM but nothing else happens. I guess it should simulate a click on the input but it seems to be broken. I've opened an issue on the official tracker.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2324755102">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2324755102">66</a> (In reply to <a href="#c_2324419398">#65</a>) by Raymond Camden
		posted on 10/24/2015 at 4:40 PM
		</div>
		<div class="comment_text"><p>Oh, I think you are wrong. I believe the idea of the file input is to let you select an image and then it is added. In that way, it kind of acts like the device mechanism of selecting an image from the gallery.</p><p>Remember, the idea here isn't to 100% mimic what you get on device, but to let you test functionality.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2332878222">
	<div>
		<img src="https://disqus.com/api/users/avatars/robcaldecott.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2332878222">67</a> (In reply to <a href="#c_2324755102">#66</a>) by Rob Caldecott
		posted on 10/29/2015 at 12:15 PM
		</div>
		<div class="comment_text"><p>OK. Not particularly elegant, but fair enough. Your article is really all people have to go on regarding the browser platform, and it's not at all clear from the official site where it fits. I was hoping we might see it become something more than a test bed...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2333030896">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2333030896">68</a> (In reply to <a href="#c_2332878222">#67</a>) by Raymond Camden
		posted on 10/29/2015 at 2:02 PM
		</div>
		<div class="comment_text"><p>Speaking for myself, and NOT for the Cordova team, I still stand by my original assertion that this is only appropriate for testing, and *not* for having a web based version of a Cordova app. I don't believe the Cordova team (which technically I'm part of :) agrees with me there, but that's my opinion.</p><p>That doesn't make this feature any less useful of course. I still like it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2333039419">
	<div>
		<img src="https://disqus.com/api/users/avatars/robcaldecott.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2333039419">69</a> (In reply to <a href="#c_2333030896">#68</a>) by Rob Caldecott
		posted on 10/29/2015 at 2:07 PM
		</div>
		<div class="comment_text"><p>I'm looking at building both web apps and hybrid mobile apps from the same source, so having the browser as a platform is a big deal. Even if it is not fully functional, it could make life a lot easier. Just being able to rely on little things like window.cordova.platformId being present can simplify my development. My next challenge is to try and find a way to get "cordova prepare browser" to run when any of my source files change. Any ideas? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2333042272">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2333042272">70</a> (In reply to <a href="#c_2333039419">#69</a>) by Raymond Camden
		posted on 10/29/2015 at 2:09 PM
		</div>
		<div class="comment_text"><p>Use gulp or grunt. Will take you five minutes. I've got a blog post showing an example of this. One sec.</p><p>This is old, but may help: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2F2013%2F11%2F07%2FUsing-Grunt-to-automatically-build-your-PhoneGapCordova-projects%3A3aVFmaPdi7lfqaI8L9O4FKdvUJg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/2013/11/07/Using-Grunt-to-automatically-build-your-PhoneGapCordova-projects">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2333053651">
	<div>
		<img src="https://disqus.com/api/users/avatars/robcaldecott.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2333053651">71</a> (In reply to <a href="#c_2333042272">#70</a>) by Rob Caldecott
		posted on 10/29/2015 at 2:16 PM
		</div>
		<div class="comment_text"><p>Ha! I knew it would be simple. This is excellent. You're a star.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2363032059">
	<div>
		<img src="https://disqus.com/api/users/avatars/ijemofili.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2363032059">72</a> by Ijem Ofili
		posted on 11/16/2015 at 8:08 PM
		</div>
		<div class="comment_text"><p>Hi all, thanks for helping out with questions as these. I have been trying to get Cordova to add the browser platform but keep getting this error-- <a href="https://uploads.disquscdn.com/images/7eab6b3a62e5d8255f4dc9e907e591f444aa10ddd903b86449daa272ef957a61.png" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/7eab6b3a62e5d8255f4dc9e907e591f444aa10ddd903b86449daa272ef957a61.png">https://uploads.disquscdn.c...</a></p><p>I'd mighty appreciate any help on this. Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2363068074">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2363068074">73</a> (In reply to <a href="#c_2363032059">#72</a>) by Raymond Camden
		posted on 11/16/2015 at 8:29 PM
		</div>
		<div class="comment_text"><p>Is your CLI 100% up to date?<br>Can you add any other platform, like Android?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2363077502">
	<div>
		<img src="https://disqus.com/api/users/avatars/ijemofili.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2363077502">74</a> (In reply to <a href="#c_2363068074">#73</a>) by Ijem Ofili
		posted on 11/16/2015 at 8:35 PM
		</div>
		<div class="comment_text"><p>My CLI is up to date, and I get the same message when I try to add Android as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2363086532">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2363086532">75</a> (In reply to <a href="#c_2363077502">#74</a>) by Raymond Camden
		posted on 11/16/2015 at 8:40 PM
		</div>
		<div class="comment_text"><p>I assumed you Googled, right? This help any? <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F22395736%2Fcordova-error-enoent%3ApB0Jk-F0JquuuyVLjJdphe1crkI&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/22395736/cordova-error-enoent">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2363096138">
	<div>
		<img src="https://disqus.com/api/users/avatars/ijemofili.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2363096138">76</a> (In reply to <a href="#c_2363086532">#75</a>) by Ijem Ofili
		posted on 11/16/2015 at 8:46 PM
		</div>
		<div class="comment_text"><p>*smiles. I did google but could not find my specific case as per the screengrab. I'll use the SO link you provided and post back when the issue goes away. Thanks again.</p><p>UPDATE: I'm simply trying to add the browser platform on my main work laptop, most of the guides point to adding android. I tried the process on a virgin windows laptop and it worked just fine. So I'm thinking maybe my node file structure got 'baggage' needs sorting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2438253044">
	<div>
		<img src="https://disqus.com/api/users/avatars/ronakkosamia.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2438253044">77</a> by Ronak kosamia
		posted on 1/4/2016 at 1:50 AM
		</div>
		<div class="comment_text"><p>Can i Have a your code of this example ??</p></div>
	</div>
</div>
		
<div class="comment" id="c_2438658626">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2438658626">78</a> (In reply to <a href="#c_2438253044">#77</a>) by Raymond Camden
		posted on 1/4/2016 at 11:12 AM
		</div>
		<div class="comment_text"><p>All the code did was test the various APIs. It is nothing special.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2619077128">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_kPf7VQW38X.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2619077128">79</a> by Robert Owen
		posted on 4/12/2016 at 3:17 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, was there a solution or workaround to the microphone being included in the camera access? Seems like chrome ties mic and camera together for the access. Couldn't find your bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2619466342">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2619466342">80</a> (In reply to <a href="#c_2619077128">#79</a>) by Raymond Camden
		posted on 4/12/2016 at 11:19 AM
		</div>
		<div class="comment_text"><p>Sorry, no, I don't think I filed a bug report for it. Since (imo) this is mainly for testing, it seems harmless. But I'd encourage you to file a bug report for it. :) (Yes, I'm being lazy.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2629325339">
	<div>
		<img src="https://disqus.com/api/users/avatars/farskid.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2629325339">81</a> by Farzad YZ
		posted on 4/18/2016 at 5:29 AM
		</div>
		<div class="comment_text"><p>This was a relief! I'm using Cordova 5.4 and still did not know there is a platform named browser. Thanks for the Info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2926973326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2926973326">82</a> by Ravi
		posted on 9/30/2016 at 7:16 PM
		</div>
		<div class="comment_text"><p>I want to use barcode scanner plugin for browser(mobile browser) platform , will it possible.?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2926977519">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2926977519">83</a> (In reply to <a href="#c_2926973326">#82</a>) by Raymond Camden
		posted on 9/30/2016 at 7:19 PM
		</div>
		<div class="comment_text"><p>If I remember right, on the browser, the barcode scanner just prompts you to enter the number. So technically, it works, but it isn't what you want probably.</p></div>
	</div>
</div>
		