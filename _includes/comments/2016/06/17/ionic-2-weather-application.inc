
<div class="comment" id="c_2741235874">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2741235874">1</a> by Raymond Camden
		posted on 6/20/2016 at 7:37 PM
		</div>
		<div class="comment_text"><p>As an FYI, I heard back from Forecast folks. I had used the general support and not dev support email address for my request. This is what they had to say about storms:</p><p>It should be noted that "nearestStormBearing" refers to where the storm is (relative to the requested location), not where it's heading. So it's possible to know roughly where the nearest storm is, but not where it is moving to.</p><p>Ok, fair enough. It would be cool if they supported a direction too so you can tell if it is heading your way though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2773931968">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_L53j9P9kcE.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2773931968">2</a> by iqbal muhammad
		posted on 7/9/2016 at 1:30 PM
		</div>
		<div class="comment_text"><p>Hi, Raymond.<br>I am starting to learn Ionic 2. When I built/serve your sample, error occurs with message "Error TS2339: Property 'location' does not exist on type 'Storage'. <br>What am I missing here? Thanks for your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2773973514">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2773973514">3</a> (In reply to <a href="#c_2773931968">#2</a>) by Raymond Camden
		posted on 7/9/2016 at 2:02 PM
		</div>
		<div class="comment_text"><p>Was there a line number?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2774007946">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_L53j9P9kcE.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2774007946">4</a> (In reply to <a href="#c_2773973514">#3</a>) by iqbal muhammad
		posted on 7/9/2016 at 2:30 PM
		</div>
		<div class="comment_text"><p>Thanks for your quick reply. :D<br>Here are the line numbers</p><p>D:\ionic\Weather&gt;ionic --version<br>2.0.0-beta.32<br>D:\ionic\Weather&gt;ionic build<br>Running 'build:before' gulp task before build<br>[21:27:36] Starting 'clean'...<br>[21:27:36] Finished 'clean' after 33 ms<br>[21:27:36] Starting 'build'...<br>[21:27:36] Starting 'sass'...<br>[21:27:36] Starting 'html'...<br>[21:27:36] Starting 'fonts'...<br>[21:27:36] Starting 'scripts'...<br>[21:27:36] Finished 'html' after 139 ms<br>[21:27:37] Finished 'scripts' after 333 ms<br>[21:27:37] Finished 'fonts' after 398 ms<br>[21:27:39] Finished 'sass' after 2.9 s<br>TypeScript error: D:/ionic/Weather/app/pages/home/home.ts(32,34): Error TS2339: Property 'location' does not exist on type 'Object'.<br>TypeScript error: D:/ionic/Weather/app/pages/home/home.ts(32,57): Error TS2339: Property 'location' does not exist on type 'Object'.<br>TypeScript error: D:/ionic/Weather/app/pages/home/home.ts(35,76): Error TS2339: Property 'icon' does not exist on type 'Object'.<br>TypeScript error: D:/ionic/Weather/app/pages/home/home.ts(58,37): Error TS2339: Property 'location' does not exist on type 'Object'.<br>TypeScript error: D:/ionic/Weather/app/pages/home/home.ts(58,65): Error TS2339: Property 'location' does not exist on type 'Object'.<br>TypeScript error: D:/ionic/Weather/app/pages/home/home.ts(60,78): Error TS2339: Property 'icon' does not exist on type 'Object'.<br>TypeScript error: D:/ionic/Weather/app/pages/home/home.ts(64,16): Error TS2339: Property 'locations' does not exist on type 'Storage'.<br>TypeScript error: D:/ionic/Weather/app/pages/home/home.ts(68,19): Error TS2339: Property 'locations' does not exist on type 'Storage'.<br>TypeScript error: D:/ionic/Weather/app/pages/home/home.ts(68,61): Error TS2339: Property 'locations' does not exist on type 'Storage'.<br>TypeScript error: D:/ionic/Weather/app/pages/home/home.ts(74,71): Error TS2339: Property 'icon' does not exist on type 'Object'.<br>[21:27:45] Finished 'build' after 9.26 s<br>[21:27:45] Starting 'build:before'...<br>[21:27:45] Finished 'build:before' after 6.37 μs<br>Caught exception:<br> undefined</p><p>Mind letting us know? <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fdriftyco%2Fionic-cli%2Fissues%3APE_cSqS1CdWRSQ7F1C2SfbpxRqA&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/driftyco/ionic-cli/issues">https://github.com/driftyco...</a><br>D:\ionic\Weather&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2774024386">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2774024386">5</a> (In reply to <a href="#c_2774007946">#4</a>) by Raymond Camden
		posted on 7/9/2016 at 2:44 PM
		</div>
		<div class="comment_text"><p>I'm seeing it too - but as far as I can tell - they are errors you can ignore. For me, it keeps building.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3098823013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3098823013">6</a> by VirtualCT
		posted on 1/14/2017 at 12:03 PM
		</div>
		<div class="comment_text"><p>to me by the iqbal muhammad errors.<br>and the app does not work</p></div>
	</div>
</div>
		
<div class="comment" id="c_3099163291">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3099163291">7</a> (In reply to <a href="#c_3098823013">#6</a>) by Raymond Camden
		posted on 1/14/2017 at 5:01 PM
		</div>
		<div class="comment_text"><p>"the app does not work" isn't helpful. How doesn't it work? Tell me what you did, and what you see, specifically in DevTools, and we can figure it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3101911745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3101911745">8</a> (In reply to <a href="#c_3099163291">#7</a>) by VirtualCT
		posted on 1/16/2017 at 8:40 AM
		</div>
		<div class="comment_text"><p>I tried it in 2 ways:<br>1) "npm install" and "ionic serves"<br>2) I copied the folder "app" in an ionic blank app.<br>I always see the blank page<br>and you get the same errors iqbal Muhammad</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fimagizer.imageshack.us%2Fa%2Fimg921%2F3937%2FMPjTTl.jpg%3APBQx6_9bbBeDBDcvwqybA7W-r5o&amp;cuid=3321886" rel="nofollow noopener" title="http://imagizer.imageshack.us/a/img921/3937/MPjTTl.jpg">http://imagizer.imageshack....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3101926659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3101926659">9</a> (In reply to <a href="#c_3101911745">#8</a>) by VirtualCT
		posted on 1/16/2017 at 9:03 AM
		</div>
		<div class="comment_text"><p>Failed to load resource: the server responded with a status of 404 (Not Found) http://localhost:8100/build/js/app.bundle.js</p></div>
	</div>
</div>
		
<div class="comment" id="c_3102207396">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3102207396">10</a> (In reply to <a href="#c_3101911745">#8</a>) by Raymond Camden
		posted on 1/16/2017 at 1:59 PM
		</div>
		<div class="comment_text"><p>If you copy into app and then "ionic serve", what do you get?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3102284588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3102284588">11</a> (In reply to <a href="#c_3102207396">#10</a>) by VirtualCT
		posted on 1/16/2017 at 2:58 PM
		</div>
		<div class="comment_text"><p>you see what I put in the screen shot</p></div>
	</div>
</div>
		
<div class="comment" id="c_3102351820">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3102351820">12</a> (In reply to <a href="#c_3102284588">#11</a>) by Raymond Camden
		posted on 1/16/2017 at 3:44 PM
		</div>
		<div class="comment_text"><p>When you did #2 above, did you also npm install first?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3102405354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3102405354">13</a> (In reply to <a href="#c_3102351820">#12</a>) by VirtualCT
		posted on 1/16/2017 at 4:18 PM
		</div>
		<div class="comment_text"><p>of course</p></div>
	</div>
</div>
		
<div class="comment" id="c_3102409071">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3102409071">14</a> (In reply to <a href="#c_3102405354">#13</a>) by Raymond Camden
		posted on 1/16/2017 at 4:21 PM
		</div>
		<div class="comment_text"><p>And you see the 404 error when you open up dev console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3102410249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3102410249">15</a> (In reply to <a href="#c_3102409071">#14</a>) by VirtualCT
		posted on 1/16/2017 at 4:21 PM
		</div>
		<div class="comment_text"><p>no, only blank page</p></div>
	</div>
</div>
		
<div class="comment" id="c_3102414610">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3102414610">16</a> (In reply to <a href="#c_3102410249">#15</a>) by Raymond Camden
		posted on 1/16/2017 at 4:24 PM
		</div>
		<div class="comment_text"><p>Open the Dev Console and tell me what you see there. Check both the Network tab and the console tab.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3102418289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3102418289">17</a> (In reply to <a href="#c_3102414610">#16</a>) by VirtualCT
		posted on 1/16/2017 at 4:26 PM
		</div>
		<div class="comment_text"><p>all my other apps work properly</p><p>"Failed to load resource: the server responded with a status of 404 (Not Found) http://localhost:8100/build/js/app.bundle.js"</p></div>
	</div>
</div>
		
<div class="comment" id="c_3102420204">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3102420204">18</a> (In reply to <a href="#c_3101926659">#9</a>) by Raymond Camden
		posted on 1/16/2017 at 4:28 PM
		</div>
		<div class="comment_text"><p>This seems to imply that IOnic isn't building right. You are using the latest version of the CLI, right? What do you see when you do "ionic -v"</p></div>
	</div>
</div>
		
<div class="comment" id="c_3102427886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3102427886">19</a> (In reply to <a href="#c_3102420204">#18</a>) by VirtualCT
		posted on 1/16/2017 at 4:32 PM
		</div>
		<div class="comment_text"><p>2.2.1</p></div>
	</div>
</div>
		
<div class="comment" id="c_3102440212">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3102440212">20</a> (In reply to <a href="#c_3102427886">#19</a>) by Raymond Camden
		posted on 1/16/2017 at 4:40 PM
		</div>
		<div class="comment_text"><p>Ah ok - so the issue is that my app was made in a much earlier version of Ionic 2. It won't work "as is". That's unfortunate, but the *gist* of what this app does is still something you can use to build your code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3102444317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3102444317">21</a> (In reply to <a href="#c_3102440212">#20</a>) by VirtualCT
		posted on 1/16/2017 at 4:43 PM
		</div>
		<div class="comment_text"><p>OK thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_3102853366">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3102853366">22</a> (In reply to <a href="#c_3102444317">#21</a>) by Raymond Camden
		posted on 1/16/2017 at 8:23 PM
		</div>
		<div class="comment_text"><p>While not heavily tested, I built a new version: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfjedimaster%2FCordova-Examples%2Ftree%2Fmaster%2Fionicweatherv3%3AXarqSO4E2nphA6oKgZm7JDuMDGA&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfjedimaster/Cordova-Examples/tree/master/ionicweatherv3">https://github.com/cfjedima...</a></p></div>
	</div>
</div>
		