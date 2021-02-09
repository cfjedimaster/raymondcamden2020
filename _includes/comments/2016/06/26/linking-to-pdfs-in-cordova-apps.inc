
<div class="comment" id="c_2753843627">
	<div>
		<img src="https://disqus.com/api/users/avatars/jacobhargrave.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2753843627">1</a> by Jacob Hargrave
		posted on 6/27/2016 at 10:11 PM
		</div>
		<div class="comment_text"><p>We ended up using PDF.js to render PDFs on Android, and the default renderer on iOS. Works well enough.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2753856516">
	<div>
		<img src="https://disqus.com/api/users/avatars/stevehusting.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2753856516">2</a> by Steve Husting
		posted on 6/27/2016 at 10:20 PM
		</div>
		<div class="comment_text"><p>Raymond, why not include PDF.js in this article as well?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2753968170">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2753968170">3</a> by Raymond Camden
		posted on 6/27/2016 at 11:46 PM
		</div>
		<div class="comment_text"><p>Hey Steven/Jacob: I knew of PDF.js, but it just felt like it wasn't appropriate for what I was trying to do. I know that sounds a bit arbitrary, but I thought rendering it *in* the app, with other UI around it, just wouldn't make sense on a mobile device. I am *very* open to be proven wrong - and would love to see some screen shots of it in action. (You can share pics on Disqus btw.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2755076223">
	<div>
		<img src="https://disqus.com/api/users/avatars/simonprickett.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2755076223">4</a> (In reply to <a href="#c_2753843627">#1</a>) by Simon Prickett
		posted on 6/28/2016 at 4:11 PM
		</div>
		<div class="comment_text"><p>Did you get pinch zooming working with PDF.js?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2755082665">
	<div>
		<img src="https://disqus.com/api/users/avatars/simonprickett.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2755082665">5</a> (In reply to <a href="#c_2753856516">#2</a>) by Simon Prickett
		posted on 6/28/2016 at 4:15 PM
		</div>
		<div class="comment_text"><p>I put together an example Cordova app that tries to render PDF using external app with the file opener plugin, PDF.js inline and also using the InAppBrowser plugin (which doesn't work on Android).  You can see the code for that here (I should also add a gif of it working in the README) <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fsimonprickett%2Fpdfjscordova%3AuKDzHjVfmqQ5jDVMaGAPjCMG5UE&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/simonprickett/pdfjscordova">https://github.com/simonpri...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2755372899">
	<div>
		<img src="https://disqus.com/api/users/avatars/simon_macdonald.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2755372899">6</a> by Simon MacDonald
		posted on 6/28/2016 at 6:51 PM
		</div>
		<div class="comment_text"><p>Hey Ray, yeah you can't use the plugin to open a file in your assets directory in another app as your app is running as a different user ID than the PDF viewing app. So the PDF viewer does not have the right privs to open the file.</p><p>The solution you have posted about copying the file to the external data directory should work but the emulator may be screwing you up. Try replacing `storage/emulated/0` with `sdcard`.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2755773542">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2755773542">7</a> (In reply to <a href="#c_2755372899">#6</a>) by Raymond Camden
		posted on 6/28/2016 at 11:05 PM
		</div>
		<div class="comment_text"><p>Oh fascinating - that makes sense. Too bad there isn't a way for App A to say that App B has permission to open one of its own resources.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2755779702">
	<div>
		<img src="https://disqus.com/api/users/avatars/simon_macdonald.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2755779702">8</a> (In reply to <a href="#c_2755773542">#7</a>) by Simon MacDonald
		posted on 6/28/2016 at 11:10 PM
		</div>
		<div class="comment_text"><p>There are, they are called [ContentProviders](<a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.android.com%2Fguide%2Ftopics%2Fproviders%2Fcontent-provider-basics.html%29%3Akr1YGCCHv_vV44wV00bxXnjselg&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.android.com/guide/topics/providers/content-provider-basics.html)">https://developer.android.c...</a>. Basically you would create a ContentProvider to give other apps access to your apps data. The assets file system is not really meant for this type of access though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2755788261">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2755788261">9</a> (In reply to <a href="#c_2755779702">#8</a>) by Raymond Camden
		posted on 6/28/2016 at 11:16 PM
		</div>
		<div class="comment_text"><p>So given your last sentence, if I were to ship an app and for whatever reason, I thought PDFs were good (maybe docs?), would you imagine the app copying the assets out on first launch to make it easier to use?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2755793527">
	<div>
		<img src="https://disqus.com/api/users/avatars/simon_macdonald.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2755793527">10</a> (In reply to <a href="#c_2755788261">#9</a>) by Simon MacDonald
		posted on 6/28/2016 at 11:20 PM
		</div>
		<div class="comment_text"><p>Yeah, I would probably copy the docs to the local file system on first launch. You can use the content-sync plugin to do that. I fact on Android you can specify a manifest that only copies the PDF files if you want. Ping me on email we'll go over it and you have another blog post :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2755797587">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2755797587">11</a> (In reply to <a href="#c_2755793527">#10</a>) by Raymond Camden
		posted on 6/28/2016 at 11:24 PM
		</div>
		<div class="comment_text"><p>Ok, I know you said 'ping me on email', but I want to do a bit more here. ;) Doesn't the content-sync plugin assume you have internet connectivity, at least once? I'm not saying that makes it a bad solution per se, but it does mean you can't ship the assets with the initial app download.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2755806264">
	<div>
		<img src="https://disqus.com/api/users/avatars/simon_macdonald.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2755806264">12</a> (In reply to <a href="#c_2755797587">#11</a>) by Simon MacDonald
		posted on 6/28/2016 at 11:30 PM
		</div>
		<div class="comment_text"><p>Whoops, I forgot content-sync copies to a directory internal to the app so it would not be accessible buy outside apps on Android. What we'd need to do is something similar to what content-sync does when you set `copyRootApp` to true. So yeah, on startup copy the PDF's to external storage on Android.</p><p>Note: the asset file system is super slow on Android so you want this to be a non-blocking call.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2757259717">
	<div>
		<img src="https://disqus.com/api/users/avatars/jacobhargrave.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2757259717">13</a> (In reply to <a href="#c_2755076223">#4</a>) by Jacob Hargrave
		posted on 6/29/2016 at 7:38 PM
		</div>
		<div class="comment_text"><p>Yes. I think we had to change the config &lt;preference name="EnableViewportScale" value="true"/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2791371202">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_zmuOnlZEDb.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2791371202">14</a> by maxx0r
		posted on 7/19/2016 at 2:33 PM
		</div>
		<div class="comment_text"><p>I once solved this by opening the PDF in the google docs viewer in the inAppBrowser. But I used a weblink for the PDF. Which is a better solution in more than one way (control over updates to the PDF, smaller package size)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2954429156">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_vjoP0CqMY6.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2954429156">15</a> by Roy
		posted on 10/17/2016 at 10:27 AM
		</div>
		<div class="comment_text"><p>Hey Raymond, nice article, I'm a web developer that is trying to make an app that can cache and view PDFs using cordova for the first time.</p><p>I had success using cordova-plugin-file-opener2 when tested it on my htc desire 728 but then fails when a remote team tested it with samsung s6 edge plus.</p><p>By using avd to simulate it, it seems that cordova.file.externalDataDirectory is missing while cordova.file.applicationDirectory is present, but I'm not sure if I'm simulating it the right way.</p><p>I tried to use PDF.js afterward and again it worked nice on my device but failed on samsung too, I'm still trying to find the reason but do you have any suggestion on what should I do to solve this phenomenon or what kind of knowledge/skill I should be after? I feel like I'm lacking something really important but I can't really tell what is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2954687261">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2954687261">16</a> (In reply to <a href="#c_2954429156">#15</a>) by Raymond Camden
		posted on 10/17/2016 at 2:21 PM
		</div>
		<div class="comment_text"><p>I'm not sure the simulator will have externalDataDirectory. Is there anyway you can get the device to test?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2954873248">
	<div>
		<img src="https://disqus.com/api/users/avatars/dsmithhfx.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2954873248">17</a> by dsmithhfx
		posted on 10/17/2016 at 4:16 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I'm trying to get this working in an Intel XDK project apk, but it's throwing an "Uncaught TypeError: Cannot read property 'applicationDirectory' of undefined", when pasting the code sample (with appropriate path/filename changes) that follows "nice solution by japostigo-atsistemas [...]" above into my custom script (so it's not one of the default cordova scripts). (-- note I'm also got jquery onboard).</p><p>I'm testing it on a 2013 Nexus 7 with Android 5.1.1 and chrome usb debugging</p><p>I've installed the cordova-plugin-file-opener2 into the project using the built-in XDK plugin manager, I've just got a feeling the syntax isn't quite right, or I've put it in the wrong script. Hope it's nothing terribly obvious!</p><p>Appreciate any pointers.</p><p>Thanks</p><p>Edit: ok, it also needs the file plugin, which I had wrongly assumed would be redundant and so deleted from my project. Got it working now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2955769785">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_vjoP0CqMY6.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2955769785">18</a> (In reply to <a href="#c_2954687261">#16</a>) by Roy
		posted on 10/18/2016 at 1:57 AM
		</div>
		<div class="comment_text"><p>That's not quite possible at moment, we are just a starter company without many resource to spend on :/, is there any way beside real device for testing? I saw some options like Xamarin Test Cloud, but I haven't look deeper into it yet so I'm not sure if they can provide the necessary test environment, what normally mobile developers do in this case? Buy the actual device?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2956521791">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2956521791">19</a> (In reply to <a href="#c_2955769785">#18</a>) by Raymond Camden
		posted on 10/18/2016 at 2:27 PM
		</div>
		<div class="comment_text"><p>Unfortunately, I'd say this is part of the price you have to pay for developing on the Android platform. There are virtual test beds (I can't comment on the Xamarin one, I haven't used it), but in the end, I think it's better to actually have the device on hand.</p><p>Just my opinion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2957707306">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_vjoP0CqMY6.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2957707306">20</a> (In reply to <a href="#c_2956521791">#19</a>) by Roy
		posted on 10/19/2016 at 2:45 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond, now I know better what we'll be facing down this road, we'll keep searching for a solution that best fit for our situation, if we do find some very interesting solution/situation, I'll report it back here, once again, thanks for your attention :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3092522970">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_oS6xnmUrBj.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3092522970">21</a> by Tony Davidson
		posted on 1/10/2017 at 4:29 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>I have used one of your posts as a basis for a Cordova app I am building using the cordova-plugin-file and cordova-plugin-file-transfer.  My app is a cross platform for ios and android.  One of the functions of the app is to download and edit pdf documents. This is where I have come unstuck on the ios side of things.  Basically I can download and save easily enough and using cordova-plugin-fileopener2 I can open the document using a pdf editor.  However the editors I have tried seem to be making copies of the original document and any changes I make are not saved to the original download which is supposed to be uploaded with changes from the app.</p><p>I suspect the problem lies not with my code on the app but with the way iOS locks everything down.  I was wondering if you had come across anything like this and what solutions you used to overcome this problem.<br>Thanks<br>Tony Davidson</p></div>
	</div>
</div>
		
<div class="comment" id="c_3094113704">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3094113704">22</a> (In reply to <a href="#c_3092522970">#21</a>) by Raymond Camden
		posted on 1/11/2017 at 3:41 PM
		</div>
		<div class="comment_text"><p>Sorry no. You may have to use a warning in iOS to tell users that they can only work on a copy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3094157734">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_oS6xnmUrBj.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3094157734">23</a> (In reply to <a href="#c_3094113704">#22</a>) by Tony Davidson
		posted on 1/11/2017 at 4:09 PM
		</div>
		<div class="comment_text"><p>I feared as much.  Thank you for getting back to me, I appreciate it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3194323579">
	<div>
		<img src="https://disqus.com/api/users/avatars/kashban.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3194323579">24</a> by Kashban
		posted on 3/9/2017 at 12:31 PM
		</div>
		<div class="comment_text"><p>I came across a much simpler solution:</p><p>this.showDocument = function(path) {<br>                var platform = WL.Client.getEnvironment();<br>                if (path &amp;&amp; path.length &gt; 0){<br>                    var ref = <a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a>(decodeURI(path), platform === WL.Environment.ANDROID ? '_system' : '_blank', 'location=yes');<br>                     });<br>                }<br>            }</p><p>WL.Client is from the IBM Mobile First Client Framework but any platform detection plugin would do.</p><p>This starts the default system browser on Android which takes the pdf behind the path and issues an intent for a pdf viewer. Path is a file:/// url pointing to the local filesystem. Tested on Android 6.0.1 (Galaxy Tab S2).</p></div>
	</div>
</div>
		
<div class="comment" id="c_3217543588">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_pSKeO2g80W.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3217543588">25</a> (In reply to <a href="#c_3194323579">#24</a>) by Avijit Sarkar
		posted on 3/22/2017 at 6:17 PM
		</div>
		<div class="comment_text"><p>@Kashban, Is it showing any back button to close the viewer and go back to the app? Do we need to use only hardware back button to close it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3404998443">
	<div>
		<img src="https://disqus.com/api/users/avatars/max_shell.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3404998443">26</a> (In reply to <a href="#c_3194323579">#24</a>) by Max Shell
		posted on 7/7/2017 at 6:27 PM
		</div>
		<div class="comment_text"><p>great, man!! thank you!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3506241737">
	<div>
		<img src="https://disqus.com/api/users/avatars/kashban.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3506241737">27</a> (In reply to <a href="#c_3217543588">#25</a>) by Kashban
		posted on 9/7/2017 at 12:29 PM
		</div>
		<div class="comment_text"><p><a data-dsq-mention="disqus_pskeo2g80w:disqus" href="https://disqus.com/by/disqus_pSKeO2g80W/" rel="nofollow noopener" title="https://disqus.com/by/disqus_pSKeO2g80W/">Avijit Sarkar</a> <br>Sorry for the late answer... Yes, you need to use the back button on the device to get back to your app. Since the PDF viewer is a whole different activity there is no way to show any additional controls there.</p><p>Which are not neede btw because the back button is the standard android way to go back ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3506241920">
	<div>
		<img src="https://disqus.com/api/users/avatars/kashban.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3506241920">28</a> (In reply to <a href="#c_3404998443">#26</a>) by Kashban
		posted on 9/7/2017 at 12:29 PM
		</div>
		<div class="comment_text"><p>You're welcome :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3720137953">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_1YdvIYahaX.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3720137953">29</a> by Liliana Stanescu
		posted on 1/22/2018 at 11:33 AM
		</div>
		<div class="comment_text"><p><a href="https://uploads.disquscdn.com/images/f14ad0d8583b0a70bc9426bc4f7640e57b3c2b66e1d66717ac200172ab5ac0a8.jpg" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/f14ad0d8583b0a70bc9426bc4f7640e57b3c2b66e1d66717ac200172ab5ac0a8.jpg">https://uploads.disquscdn.c...</a></p><p>Hello! I would like to call a variable instead of foo.pdf How can I do that?<br>Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3720247136">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_1YdvIYahaX.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3720247136">30</a> (In reply to <a href="#c_3720137953">#29</a>) by Liliana Stanescu
		posted on 1/22/2018 at 1:21 PM
		</div>
		<div class="comment_text"><p>I found the solution!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3720285963">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3720285963">31</a> (In reply to <a href="#c_3720247136">#30</a>) by Raymond Camden
		posted on 1/22/2018 at 1:51 PM
		</div>
		<div class="comment_text"><p>Cool beans. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3735235267">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Xs2GiZ0NSy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3735235267">32</a> by huseyin
		posted on 1/31/2018 at 1:29 PM
		</div>
		<div class="comment_text"><p>thanks dude :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3862362335">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_N6ilrZ6HU9.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3862362335">33</a> by John Morgan
		posted on 4/19/2018 at 11:00 AM
		</div>
		<div class="comment_text"><p>This page was a lifesaver, thanks! Yet another thing I expected to "just work" on Android :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_3979749284">
	<div>
		<img src="https://disqus.com/api/users/avatars/sher_salafi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3979749284">34</a> by Sher Salafi
		posted on 7/9/2018 at 12:40 AM
		</div>
		<div class="comment_text"><p>very good...please can you explain or give me a link about how i can place mp3 files so client can download it from internet using our hybrid app then open locally in the app...when internet is not available...i mean audio files should be available for offline.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3988505065">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3988505065">35</a> (In reply to <a href="#c_3979749284">#34</a>) by Raymond Camden
		posted on 7/14/2018 at 3:56 PM
		</div>
		<div class="comment_text"><p>That really isn't on topic for this post at all. Please post general questions like this to StackOverflow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4045228125">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ds36XpYPT3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4045228125">36</a> by sushma rani
		posted on 8/17/2018 at 12:41 PM
		</div>
		<div class="comment_text"><p>const browser = this.inAppBrowser.create(data, '_self', 'hideurlbar=yes');<br>    <a href="http://disq.us/url?url=http%3A%2F%2Fbrowser.show%3AP30VHt1x8fFAxXw26u6luSo19i0&amp;cuid=3321886" rel="nofollow noopener" title="browser.show">browser.show</a>();</p><p>i used this code in the ionic3 but it does not open the pdf,doc links only blank .<br>also tried with _blank but it only work with _system .</p></div>
	</div>
</div>
		
<div class="comment" id="c_4045911403">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4045911403">37</a> (In reply to <a href="#c_4045228125">#36</a>) by Raymond Camden
		posted on 8/17/2018 at 7:25 PM
		</div>
		<div class="comment_text"><p>So is this a question or.... ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4046688487">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ds36XpYPT3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4046688487">38</a> (In reply to <a href="#c_4045911403">#37</a>) by sushma rani
		posted on 8/18/2018 at 8:00 AM
		</div>
		<div class="comment_text"><p>Please provide me solution for this its not working for me .</p></div>
	</div>
</div>
		
<div class="comment" id="c_4048290825">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ds36XpYPT3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4048290825">39</a> (In reply to <a href="#c_4046688487">#38</a>) by sushma rani
		posted on 8/19/2018 at 8:49 AM
		</div>
		<div class="comment_text"><p>Hi raymond this is not working in the ionic 3 native in app browser plugin. Actually i have created a app in which first home page after login open in the in app browser using the _self and on home i have the many links that are downloadable links like pdf files docx when i click on them now happens nothing.If you provide me any solution so that if i click on the links then they will be start downloading i appreciate it .</p></div>
	</div>
</div>
		
<div class="comment" id="c_4049864601">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4049864601">40</a> (In reply to <a href="#c_4048290825">#39</a>) by Raymond Camden
		posted on 8/20/2018 at 1:46 PM
		</div>
		<div class="comment_text"><p>The only solution I have is the one here - sorry. I'm not doing much Cordova or Ionic these days.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4510095575">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Xp2Km40bIc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4510095575">41</a> by Derek Baker
		posted on 6/20/2019 at 9:54 PM
		</div>
		<div class="comment_text"><p><a data-dsq-mention="cfjedimaster:disqus" href="https://disqus.com/by/cfjedimaster/" rel="nofollow noopener" title="https://disqus.com/by/cfjedimaster/">Raymond Camden</a>, you're a lifesaver. Thanks for this!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4510772667">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4510772667">42</a> (In reply to <a href="#c_4510095575">#41</a>) by Raymond Camden
		posted on 6/21/2019 at 1:45 PM
		</div>
		<div class="comment_text"><p>You are most welcome.</p></div>
	</div>
</div>
		