
<div class="comment" id="c_2985442144">
	<div>
		<img src="https://disqus.com/api/users/avatars/bobclingan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2985442144">1</a> by Bob Clingan
		posted on 11/4/2016 at 11:21 PM
		</div>
		<div class="comment_text"><p>Any advice on installing ionic? I've spent a few hours installing and reinstalling node, npm, and XCode just trying to the the iOS simulator working...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2986044612">
	<div>
		<img src="https://disqus.com/api/users/avatars/gabi_medina.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2986044612">2</a> (In reply to <a href="#c_2985442144">#1</a>) by Gabi Medina
		posted on 11/5/2016 at 12:47 PM
		</div>
		<div class="comment_text"><p>Are you having EACCES errors AKA permission errors? I was having the same yesterday and managed to fix them all by setting the permissions to the parent folder of every file that threw that error:</p><p>sudo chown -R $USER:$GROUP /path-to-directory</p></div>
	</div>
</div>
		
<div class="comment" id="c_2986058022">
	<div>
		<img src="https://disqus.com/api/users/avatars/bobclingan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2986058022">3</a> (In reply to <a href="#c_2986044612">#2</a>) by Bob Clingan
		posted on 11/5/2016 at 1:01 PM
		</div>
		<div class="comment_text"><p>Yep- did all that. Error I left off on last time was:</p><p>Error: Error code 65 for command: xcodebuild with args: -xcconfig</p></div>
	</div>
</div>
		
<div class="comment" id="c_2986079462">
	<div>
		<img src="https://disqus.com/api/users/avatars/bobclingan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2986079462">4</a> (In reply to <a href="#c_2986058022">#3</a>) by Bob Clingan
		posted on 11/5/2016 at 1:22 PM
		</div>
		<div class="comment_text"><p>Leaving off on today's attempt with:</p><p>** BUILD SUCCEEDED **</p><p>No target specified for emulator. Deploying to iPhone-SE, 10.1 simulator</p><p>An error was encountered processing the command (domain=com.apple.CoreSimulator.SimError, code=163):<br>Invalid device state</p><p>An error was encountered processing the command (domain=com.apple.CoreSimulator.SimError, code=163):<br>Invalid device state</p><p>Error: ENOENT: no such file or directory, stat '/Users/bclingan/Library/Logs/CoreSimulator/7F5B5E56-8BA6-490C-81E0-CC5B655590BC/system.log'</p></div>
	</div>
</div>
		
<div class="comment" id="c_2986165823">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2986165823">5</a> (In reply to <a href="#c_2986079462">#4</a>) by Raymond Camden
		posted on 11/5/2016 at 2:36 PM
		</div>
		<div class="comment_text"><p>You got me there. I've had issues with the ios simulator before, but not this one in particular. However, since this really isn't on topic for this blog post, would you mind posting it to StackOverflow?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2986273682">
	<div>
		<img src="https://disqus.com/api/users/avatars/bobclingan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2986273682">6</a> (In reply to <a href="#c_2986165823">#5</a>) by Bob Clingan
		posted on 11/5/2016 at 4:01 PM
		</div>
		<div class="comment_text"><p>Will do - sorry for going off topic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2986303039">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2986303039">7</a> (In reply to <a href="#c_2986273682">#6</a>) by Raymond Camden
		posted on 11/5/2016 at 4:24 PM
		</div>
		<div class="comment_text"><p>No worries. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2998936585">
	<div>
		<img src="https://disqus.com/api/users/avatars/rezarahmati.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2998936585">8</a> by Reza Rahmati
		posted on 11/12/2016 at 6:32 PM
		</div>
		<div class="comment_text"><p>Thanks, it is great, <br>Just one issue, in doLogin after console.log('Login OK'); we need to add</p><p>loader.dismissAll(); to it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2998937694">
	<div>
		<img src="https://disqus.com/api/users/avatars/rezarahmati.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2998937694">9</a> by Reza Rahmati
		posted on 11/12/2016 at 6:33 PM
		</div>
		<div class="comment_text"><p>It would be great if you add an article for auth with LinkedIn, Google, Facebok (or atleast one of them)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2998965845">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2998965845">10</a> (In reply to <a href="#c_2998936585">#8</a>) by Raymond Camden
		posted on 11/12/2016 at 6:54 PM
		</div>
		<div class="comment_text"><p>I'll edit that - thanks (may be a day or two).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2998966130">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2998966130">11</a> (In reply to <a href="#c_2998937694">#9</a>) by Raymond Camden
		posted on 11/12/2016 at 6:54 PM
		</div>
		<div class="comment_text"><p>Sure thing - again - may be a day or two- got a busy week next week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2999452793">
	<div>
		<img src="https://disqus.com/api/users/avatars/rezarahmati.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2999452793">12</a> by Reza Rahmati
		posted on 11/13/2016 at 2:00 AM
		</div>
		<div class="comment_text"><p>Hi again<br>I used your article to create login page, but in SideMenu template,<br>Then I put the name of user in menu which is in app.component, <br>everything is fine except when user logout and login again with another user, menu doesn't refresh, it seems it doesn't understand that instance of user is changed</p></div>
	</div>
</div>
		
<div class="comment" id="c_3000334711">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3000334711">13</a> (In reply to <a href="#c_2999452793">#12</a>) by Raymond Camden
		posted on 11/13/2016 at 6:43 PM
		</div>
		<div class="comment_text"><p>You got me on that. For something that specific, I'd suggest asking on Slack. (But let us know what you find.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3005150806">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3005150806">14</a> (In reply to <a href="#c_2998936585">#8</a>) by Raymond Camden
		posted on 11/16/2016 at 4:49 PM
		</div>
		<div class="comment_text"><p>I also forgot to navigate the user - fixed that too. (Will be up here in 2 minutes.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3005638288">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3005638288">15</a> (In reply to <a href="#c_2998937694">#9</a>) by Raymond Camden
		posted on 11/16/2016 at 9:27 PM
		</div>
		<div class="comment_text"><p>I'm done. I will blog it tonight or later this week - at a conference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3005657457">
	<div>
		<img src="https://disqus.com/api/users/avatars/rezarahmati.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3005657457">16</a> (In reply to <a href="#c_3005638288">#15</a>) by Reza Rahmati
		posted on 11/16/2016 at 9:40 PM
		</div>
		<div class="comment_text"><p>That is great man, thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_3028058199">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_mIcoMs99TP.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3028058199">17</a> (In reply to <a href="#c_2986303039">#7</a>) by José Ortega
		posted on 11/30/2016 at 5:32 PM
		</div>
		<div class="comment_text"><p><a data-dsq-mention="bobclingan:disqus" href="https://disqus.com/by/bobclingan/" rel="nofollow noopener" title="https://disqus.com/by/bobclingan/">Bob Clingan</a>, Were you able to solve the error?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3092291091">
	<div>
		<img src="https://disqus.com/api/users/avatars/pauloruca.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3092291091">18</a> by Paulo Ruca
		posted on 1/10/2017 at 1:53 PM
		</div>
		<div class="comment_text"><p>When i register a new user, where the user is stored ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3092401216">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3092401216">19</a> (In reply to <a href="#c_3092291091">#18</a>) by Raymond Camden
		posted on 1/10/2017 at 3:10 PM
		</div>
		<div class="comment_text"><p>It's stored at Ionic as a service (hence the cost).</p></div>
	</div>
</div>
		
<div class="comment" id="c_3093863311">
	<div>
		<img src="https://disqus.com/api/users/avatars/pauloruca.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3093863311">20</a> (In reply to <a href="#c_3092401216">#19</a>) by Paulo Ruca
		posted on 1/11/2017 at 12:43 PM
		</div>
		<div class="comment_text"><p>Thanks.<br>But i upload the project into <a href="http://disq.us/url?url=http%3A%2F%2Fapps.ionic.io%3ACXuCl47NrprmZDymFo9EXs4kmTU&amp;cuid=3321886" rel="nofollow noopener" title="apps.ionic.io">apps.ionic.io</a>, when i register a new user the user is stored on the web.<br>sudo ionic login<br>sudo ionic upload</p><p>Just a simple tip  ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3094101939">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3094101939">21</a> (In reply to <a href="#c_3093863311">#20</a>) by Raymond Camden
		posted on 1/11/2017 at 3:34 PM
		</div>
		<div class="comment_text"><p>To be clear, ionic login is a *different* login system. It is for Ionic developers. The user system I'm showing off here is for app users, the general public. Not related in any way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3113681457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3113681457">22</a> by Abdo
		posted on 1/22/2017 at 11:04 PM
		</div>
		<div class="comment_text"><p>You sir, are my hero!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3114483585">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3114483585">23</a> (In reply to <a href="#c_3113681457">#22</a>) by Raymond Camden
		posted on 1/23/2017 at 12:31 PM
		</div>
		<div class="comment_text"><p>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3174753866">
	<div>
		<img src="https://disqus.com/api/users/avatars/robrechtvanmelckebeke.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3174753866">24</a> by Robrecht Van Melckebeke
		posted on 2/25/2017 at 6:56 PM
		</div>
		<div class="comment_text"><p>Thank you so much !! This is by far the most comprehensive tutorial about ionic 2 I read today..!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3192349177">
	<div>
		<img src="https://disqus.com/api/users/avatars/nesrinebelguith.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3192349177">25</a> (In reply to <a href="#c_3028058199">#17</a>) by Nesrine Belguith
		posted on 3/8/2017 at 10:32 AM
		</div>
		<div class="comment_text"><p>hi,  <a href="https://uploads.disquscdn.com/images/7b932613f06f67e584a6c492a9922175ff34e029f2e7f570048c0cafb89c4c9e.png" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/7b932613f06f67e584a6c492a9922175ff34e029f2e7f570048c0cafb89c4c9e.png">https://uploads.disquscdn.c...</a> <br>can you help me please i have this error when i add this code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3192785682">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3192785682">26</a> (In reply to <a href="#c_3192349177">#25</a>) by Raymond Camden
		posted on 3/8/2017 at 4:15 PM
		</div>
		<div class="comment_text"><p>Double check you added the packages and imported everything correctly. The docs tell you to do this, just double check.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3192880449">
	<div>
		<img src="https://disqus.com/api/users/avatars/nesrinebelguith.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3192880449">27</a> (In reply to <a href="#c_3192785682">#26</a>) by Nesrine Belguith
		posted on 3/8/2017 at 5:10 PM
		</div>
		<div class="comment_text"><p>packages with  npm install ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3192892928">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3192892928">28</a> (In reply to <a href="#c_3192880449">#27</a>) by Raymond Camden
		posted on 3/8/2017 at 5:18 PM
		</div>
		<div class="comment_text"><p>No, I think you forgot to modify the app component file. Again - I hate to be brief, but be _sure_ you read the docs correctly and modified everything you need to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3193015366">
	<div>
		<img src="https://disqus.com/api/users/avatars/nesrinebelguith.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3193015366">29</a> (In reply to <a href="#c_3192892928">#28</a>) by Nesrine Belguith
		posted on 3/8/2017 at 6:26 PM
		</div>
		<div class="comment_text"><p>thanks raymond it worked :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3193145338">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3193145338">30</a> (In reply to <a href="#c_3193015366">#29</a>) by Raymond Camden
		posted on 3/8/2017 at 7:15 PM
		</div>
		<div class="comment_text"><p>Cool beans!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3301739803">
	<div>
		<img src="https://disqus.com/api/users/avatars/morinyves.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3301739803">31</a> by Morin yves
		posted on 5/12/2017 at 9:02 AM
		</div>
		<div class="comment_text"><p>When I compile your example it  displays the error below <br>I can not find the way of the solution on the web<br>I checked that the files are identical as your<br>I am a little novice in ionic2<br>Excuse me from my english i am french<br>thank you for helping me</p><p>Runtime Error<br>Cannot find module "./app.module."</p><p>http://localhost:8102/build/main.js:24942:16<br>__webpack_require__@http://localhost:8102/build/main.js:20:34<br>http://localhost:8102/build/main.js:66:37<br>global code@http://localhost:8102/build/main.js:67:12<br>Ionic Framework: 3.2.0<br>Ionic App Scripts: 1.3.7<br>Angular Core: 4.1.0<br>Angular Compiler CLI: 4.1.0<br>Node: 6.10.3<br>OS Platform: macOS Sierra<br>Navigator Platform: MacIntel<br>User Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_12_4) AppleWebKit/603.1.30 (KHTML, like Gecko) Version/10.1 Safari/603.1.30</p></div>
	</div>
</div>
		
<div class="comment" id="c_3302042707">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3302042707">32</a> (In reply to <a href="#c_3301739803">#31</a>) by Raymond Camden
		posted on 5/12/2017 at 1:34 PM
		</div>
		<div class="comment_text"><p>Unfortunately it is probably a RC-&gt;Ionic3 issue. I'd suggest starting new, and using my code as a general guide, but be aware it probably doesn't work 100% as is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3312911896">
	<div>
		<img src="https://disqus.com/api/users/avatars/oludice.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3312911896">33</a> by Olu Dice
		posted on 5/18/2017 at 6:24 PM
		</div>
		<div class="comment_text"><p>Im getting this error.... Please help!</p><p>main.js:39339 Uncaught Error: Cannot find module "../pages/login/login"<br>    at Object.&lt;anonymous&gt; (main.js:39339)<br>    at __webpack_require__ (bootstrap 08ca007…:47)<br>    at Object.&lt;anonymous&gt; (main.js:59707)<br>    at __webpack_require__ (bootstrap 08ca007…:47)<br>    at Object.&lt;anonymous&gt; (platform-browser-dynamic.es5.js:170)<br>    at __webpack_require__ (bootstrap 08ca007…:47)<br>    at Object.&lt;anonymous&gt; (src async:18)<br>    at __webpack_require__ (bootstrap 08ca007…:47)<br>    at Object.&lt;anonymous&gt; (main.js:159999)<br>    at __webpack_require__ (bootstrap 08ca007…:47)<br>﻿</p><p>​</p></div>
	</div>
</div>
		
<div class="comment" id="c_3312915707">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3312915707">34</a> (In reply to <a href="#c_3312911896">#33</a>) by Raymond Camden
		posted on 5/18/2017 at 6:26 PM
		</div>
		<div class="comment_text"><p>If you generated a *new* Ionic app, most likely my code here will not work with it. It was written with an earlier version of v2.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3346413186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3346413186">35</a> by ANuj
		posted on 6/7/2017 at 1:56 PM
		</div>
		<div class="comment_text"><p>Hi , Thanks for the post . I am facing one issue when i am using this in my app . When  i am adding constructor(public user:User, public auth:Auth)  then it is showing error : -  Uncaught Error: Cannot find module "ionic-native"   .. please give me idea what am i missing ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3346440361">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3346440361">36</a> (In reply to <a href="#c_3346413186">#35</a>) by Raymond Camden
		posted on 6/7/2017 at 2:13 PM
		</div>
		<div class="comment_text"><p>You may need to npm install on my directory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3361025290">
	<div>
		<img src="https://disqus.com/api/users/avatars/emilianoricciaparicio.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3361025290">37</a> (In reply to <a href="#c_3092401216">#19</a>) by Emiliano Ricci Aparicio
		posted on 6/14/2017 at 7:37 PM
		</div>
		<div class="comment_text"><p>Cost?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3361060005">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3361060005">38</a> (In reply to <a href="#c_3361025290">#37</a>) by Raymond Camden
		posted on 6/14/2017 at 7:50 PM
		</div>
		<div class="comment_text"><p>Looks to be free - <a href="http://disq.us/url?url=http%3A%2F%2Fionicframework.com%2Fpricing%3Aw7yTusvLbikx7AnUj-1IFPTgf_w&amp;cuid=3321886" rel="nofollow noopener" title="http://ionicframework.com/pricing">http://ionicframework.com/p...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3383832762">
	<div>
		<img src="https://disqus.com/api/users/avatars/oludice.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3383832762">39</a> (In reply to <a href="#c_3312915707">#34</a>) by Olu Dice
		posted on 6/24/2017 at 3:54 PM
		</div>
		<div class="comment_text"><p>You are right Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_3392877419">
	<div>
		<img src="https://disqus.com/api/users/avatars/sharanagoudak.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3392877419">40</a> by Sharanagouda K
		posted on 6/30/2017 at 7:39 AM
		</div>
		<div class="comment_text"><p>could you please post Linkedin login using ionic 2,angular 2</p></div>
	</div>
</div>
		
<div class="comment" id="c_3393193024">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3393193024">41</a> (In reply to <a href="#c_3392877419">#40</a>) by Raymond Camden
		posted on 6/30/2017 at 1:17 PM
		</div>
		<div class="comment_text"><p>I believe folks have done so - or at least shown other social logins.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3397099264">
	<div>
		<img src="https://disqus.com/api/users/avatars/sharanagoudak.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3397099264">42</a> (In reply to <a href="#c_3393193024">#41</a>) by Sharanagouda K
		posted on 7/3/2017 at 3:43 AM
		</div>
		<div class="comment_text"><p>other social logins I have done but linkedin only I am not able to do, I am not getting how to return the data from inappbrowser to app, redirect_uri http://localhost will work on laptop or browser not in app so please help me to solve this</p></div>
	</div>
</div>
		
<div class="comment" id="c_3397477837">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3397477837">43</a> (In reply to <a href="#c_3397099264">#42</a>) by Raymond Camden
		posted on 7/3/2017 at 12:22 PM
		</div>
		<div class="comment_text"><p>Sorry - I don't have plans on working with LI and Ionic any time soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3403071884">
	<div>
		<img src="https://disqus.com/api/users/avatars/schiffbruechige.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3403071884">44</a> by schiffbruechige
		posted on 7/6/2017 at 3:44 PM
		</div>
		<div class="comment_text"><p>Just coming to try this mid-2017 - it looks like now in order to use the auth service, you need to also setup the Cloud Client first.. not sure if you left this out on purpose..</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdocs.ionic.io%2Fsetup.html%3AHt7TPTr85LWlR0mz2IcKZCWxh48&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.ionic.io/setup.html">http://docs.ionic.io/setup....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3403075276">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3403075276">45</a> (In reply to <a href="#c_3403071884">#44</a>) by Raymond Camden
		posted on 7/6/2017 at 3:46 PM
		</div>
		<div class="comment_text"><p>Either a change or an accident on my part. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3494500032">
	<div>
		<img src="https://disqus.com/api/users/avatars/knightsjoker.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3494500032">46</a> by knightsjoker
		posted on 8/30/2017 at 6:24 PM
		</div>
		<div class="comment_text"><p>*hugs Raymond* thank you thank you thank you. I've been banging my head with the validation. I went about the complicated ways.  And finally I found your blog.  Just simple few lines... I went about the php ways, js, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3494666789">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3494666789">47</a> (In reply to <a href="#c_3494500032">#46</a>) by Raymond Camden
		posted on 8/30/2017 at 8:03 PM
		</div>
		<div class="comment_text"><p>Hey - I'm sorry to say, but Ionic Auth is dead. :(</p><p>See: <a href="http://disq.us/url?url=http%3A%2F%2Fblog.ionic.io%2Fsunsetting-ionic-cloud-push-and-auth%2F%3A10NpgjfdtkZ0fSnXHygHxfpKOc0&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.ionic.io/sunsetting-ionic-cloud-push-and-auth/">http://blog.ionic.io/sunset...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3495110661">
	<div>
		<img src="https://disqus.com/api/users/avatars/knightsjoker.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3495110661">48</a> (In reply to <a href="#c_3494666789">#47</a>) by knightsjoker
		posted on 8/31/2017 at 2:03 AM
		</div>
		<div class="comment_text"><p>Oh i'm not using the Auth ... it's these logic that I use :D   if(this.data.username === '' || this.data.password === '') <br>I have my own auth-service</p><p>the validation .. I went about the long way ..using JS, even writing api php on the server side..cause i retrieve the data from mysql... It didn't even occur to me that the validation is that simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3495667956">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3495667956">49</a> (In reply to <a href="#c_3495110661">#48</a>) by Raymond Camden
		posted on 8/31/2017 at 1:15 PM
		</div>
		<div class="comment_text"><p>Ah - well it was just a way to short circuit checking the auth. No need to if no values. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3499091472">
	<div>
		<img src="https://disqus.com/api/users/avatars/renecsarpereira.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3499091472">50</a> by Rene César Pereira
		posted on 9/2/2017 at 5:03 PM
		</div>
		<div class="comment_text"><p>Very GOOD!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3538268411">
	<div>
		<img src="https://disqus.com/api/users/avatars/sanchitmahajan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3538268411">51</a> by Sanchit Mahajan
		posted on 9/27/2017 at 10:40 AM
		</div>
		<div class="comment_text"><p>After login....  I need some help... after login I have to get the all user details using token value.. pls help... i am really stuck here... thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3538449983">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3538449983">52</a> (In reply to <a href="#c_3538268411">#51</a>) by Raymond Camden
		posted on 9/27/2017 at 1:25 PM
		</div>
		<div class="comment_text"><p>Please do not use this anymore - the Auth service is deprecated and will be shut down in January 2018.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3538641147">
	<div>
		<img src="https://disqus.com/api/users/avatars/sanchitmahajan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3538641147">53</a> (In reply to <a href="#c_3538449983">#52</a>) by Sanchit Mahajan
		posted on 9/27/2017 at 3:26 PM
		</div>
		<div class="comment_text"><p>ohh... thanks..... But now I am taking users token value to get user details.. so in this case if i want to get users details and store users post with users id ... what process I have to use... pls guide sir... really thanking you sir...</p></div>
	</div>
</div>
		
<div class="comment" id="c_3538657835">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3538657835">54</a> (In reply to <a href="#c_3538641147">#53</a>) by Raymond Camden
		posted on 9/27/2017 at 3:36 PM
		</div>
		<div class="comment_text"><p>I don't have an example of setting up a user system with Ionic outside of this. I believe other's exist and the best I can suggest is Googling for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3538678235">
	<div>
		<img src="https://disqus.com/api/users/avatars/sanchitmahajan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3538678235">55</a> (In reply to <a href="#c_3538657835">#54</a>) by Sanchit Mahajan
		posted on 9/27/2017 at 3:49 PM
		</div>
		<div class="comment_text"><p>thanks.. But normally to get users details what I have to do? Is there any no use of token authentication in future?.. Pls guide Sir...Thanking You.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3538681792">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3538681792">56</a> (In reply to <a href="#c_3538678235">#55</a>) by Raymond Camden
		posted on 9/27/2017 at 3:50 PM
		</div>
		<div class="comment_text"><p>You're basically asking - how would I create a user system from scratch and use it with Ionic. I can't help you with that. It's definitely doable - it's just not something I can describe in a blog comment. I'd suggest Googling as there are a number of other bloggers out there demonstrating stuff with Ionic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3538816305">
	<div>
		<img src="https://disqus.com/api/users/avatars/sanchitmahajan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3538816305">57</a> (In reply to <a href="#c_3538681792">#56</a>) by Sanchit Mahajan
		posted on 9/27/2017 at 4:47 PM
		</div>
		<div class="comment_text"><p>Thanks sir.. I want just some guidelines to succeed..what to do.?... thanks..</p></div>
	</div>
</div>
		
<div class="comment" id="c_3538900495">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3538900495">58</a> (In reply to <a href="#c_3538816305">#57</a>) by Raymond Camden
		posted on 9/27/2017 at 5:35 PM
		</div>
		<div class="comment_text"><p>Your question is so open ended there is no way I could answer it here. Sorry - but I really can't help more on this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3582679095">
	<div>
		<img src="https://disqus.com/api/users/avatars/sanchitmahajan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3582679095">59</a> by Sanchit Mahajan
		posted on 10/24/2017 at 6:11 PM
		</div>
		<div class="comment_text"><p>How to use contact number instead email.. thank you..</p></div>
	</div>
</div>
		
<div class="comment" id="c_3582791233">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3582791233">60</a> (In reply to <a href="#c_3582679095">#59</a>) by Raymond Camden
		posted on 10/24/2017 at 7:14 PM
		</div>
		<div class="comment_text"><p>The Ionic User service is deprecated and will be shut down next year.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3584117948">
	<div>
		<img src="https://disqus.com/api/users/avatars/sanchitmahajan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3584117948">61</a> (In reply to <a href="#c_3582791233">#60</a>) by Sanchit Mahajan
		posted on 10/25/2017 at 3:35 PM
		</div>
		<div class="comment_text"><p>k. Thank You Sir.. Is any other way to succeed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3585558945">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3585558945">62</a> (In reply to <a href="#c_3584117948">#61</a>) by Raymond Camden
		posted on 10/26/2017 at 1:03 PM
		</div>
		<div class="comment_text"><p>Use another service. :) There are others out there - I'd suggest what I'd do - Google.</p></div>
	</div>
</div>
		