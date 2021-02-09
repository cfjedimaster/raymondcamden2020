
<div class="comment" id="c_1713745382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745382">1</a> by Nikolay
		posted on 3/30/2013 at 5:11 PM
		</div>
		<div class="comment_text"><p>Hi Raymond! Thanks for your article. According JSON error in android. I get same error in trackEvent when don't set last eventValue parameter. When I set it to any number - all work fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745380">2</a> by Raymond Camden
		posted on 3/30/2013 at 5:13 PM
		</div>
		<div class="comment_text"><p>Oh thank you - I didn't get a chance to try with DDMS and Android. So - now I'm curious. If you look at my code, I do send an event. As I said in the notes at the end, I should not have used new Date(), but it is still a value. Is that what you changed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745383">3</a> by Nikolay
		posted on 3/30/2013 at 5:35 PM
		</div>
		<div class="comment_text"><p>I don't change your code. After reading article, I add gaplugin in my sencha phonegap app and receive same error in android when use trackEvent without last param - trackEvent( success, failure, "load", "data", "test"). When change to  trackEvent( success, failure, "load", "data", "test", 1) error disappear and I see this event in realtime analytics.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745386">4</a> by Raymond Camden
		posted on 3/30/2013 at 5:49 PM
		</div>
		<div class="comment_text"><p>But, I didn't forget the last one. Unless new Date() is screwing things up. Monday I'll try with 1 and see if it works better in Android.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745384">5</a> by Nikhil
		posted on 4/1/2013 at 6:10 PM
		</div>
		<div class="comment_text"><p>I have successfully implemented GA plugin for iOS for Cordova 2.2, but unable to do so for the Android.</p><p>I know this blog is for phonegap Build, but I would appreciate any heads up or direction for the same.</p><p>Many Thanks<br>Nikhil</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745381">6</a> by Raymond Camden
		posted on 4/1/2013 at 6:11 PM
		</div>
		<div class="comment_text"><p>Did you use this one (<a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphonegap-build%2FGAPlugin%29%3AEM3ENi2cH9ZRW5epMqN9Qd5VpXo&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/phonegap-build/GAPlugin)">https://github.com/phonegap...</a> instead of the one linked to from the docs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745387">7</a> by Sathvik
		posted on 4/5/2013 at 7:30 PM
		</div>
		<div class="comment_text"><p>Hey Raymond,</p><p>Interesting post.<br>I maintain an Android version of the GA plugin (<a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FDoersGuild%2FCordova-Android-Analytics%29%3AA10xBRTOFV0VXnZhKH6zEG0uj5w&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/DoersGuild/Cordova-Android-Analytics)">https://github.com/DoersGui...</a>, and I thought you might want to give it a try. <br>I've built this one based on the documentation for GA "App" SDK, so I'm not sure if it'll work with your "site" account. Do let me know if it does.</p><p>Thanks and Regards,</p><p>Sathvik</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745392">8</a> by Michael
		posted on 4/8/2013 at 9:33 PM
		</div>
		<div class="comment_text"><p>I didn't set up my analytics as a website. I set it up as an app which is how you are supposed to do it according to Google. I have real time analytics showing up. However, I didn't use Build.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745396">9</a> by Tri Noensie
		posted on 5/8/2013 at 12:46 AM
		</div>
		<div class="comment_text"><p>In <a href="http://disq.us/url?url=http%3A%2F%2FGAPlugin.java%3ALKHwF6pV0DUPwdetdG2ddRcPRuY&amp;cuid=3321886" rel="nofollow noopener" title="GAPlugin.java">GAPlugin.java</a>, trackEvent requires the last value to be an int type. If not, it throws JSON_EXCEPTION: line 39. Thus 1 works, and not new Date(). That param refers to: <a href="https://disq.us/url?url=https%3A%2F%2Fdevelopers.google.com%2Fanalytics%2Fdevguides%2Fcollection%2Fgajs%2FeventTrackerGuide%3Fhl%3Den%23Values%3ASUT_w9eWtTY6gZuGUbXOzqQurQE&amp;cuid=3321886" rel="nofollow noopener" title="https://developers.google.com/analytics/devguides/collection/gajs/eventTrackerGuide?hl=en#Values">https://developers.google.c...</a></p><p>Thanks a lot for this article. The setup with web instead of app in GA saved our ass.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745393">10</a> by kim
		posted on 5/13/2013 at 5:04 PM
		</div>
		<div class="comment_text"><p>Hi Raymond. Thank you for documenting this. Do you have any experience with using GA with Phonegap in offline mode? So data is only registered on your GA account once you go online?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745395">11</a> by Raymond Camden
		posted on 5/13/2013 at 6:23 PM
		</div>
		<div class="comment_text"><p>Good question, Kim. Off the top of my head, I'd say you would want to create a queue of events. When you detect you are back online, fire them. Unfortunately, the dates will be incorrect for the events, but they will be in the right order chronologically. I'd also maybe check their (Google) API to see if they support overriding the timestamp. You would think they would for offline apps.</p><p>I'd like to build a demo of this so I'll keep this comment around but I won't have free time till next week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745394">12</a> by Kim
		posted on 5/21/2013 at 6:24 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Following up on my initial question: I am in need of making offline tracking happen using Phonegap and iOS. We have tried around a bit, but are not able to find a solution. Any help would be very appreciated.</p><p>HAve you had the chance to try this out?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745397">13</a> by Raymond Camden
		posted on 5/21/2013 at 9:27 PM
		</div>
		<div class="comment_text"><p>Not yet. It is still in my queue to look at, but, I'm in the middle of a huge set of conferences. I'm on the road quite a bit. Sorry. I still want to do this, but can't promise it soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745399">14</a> by Anna Mund
		posted on 5/28/2013 at 3:59 PM
		</div>
		<div class="comment_text"><p>According to this blog post from Phonegap Build (<a href="https://disq.us/url?url=https%3A%2F%2Fbuild.phonegap.com%2Fblog%2Fimportant-update-to-Google-Analytics-Plugin%29%3AO7L0BeY8q_0gN2h4PwoDwSQrbw0&amp;cuid=3321886" rel="nofollow noopener" title="https://build.phonegap.com/blog/important-update-to-Google-Analytics-Plugin)">https://build.phonegap.com/...</a>, Google has updated the Analytics SDK recently and there are some minor changes in using the GAPlugin. <br>What also did change is that when you are creating a site on Google Analytics to track Events or Pages on a mobile application, you now have to choose 'App' and not 'Website' anymore..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745406">15</a> by Raymond Camden
		posted on 5/28/2013 at 4:07 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing this Anna. I'm still planning an update, and this will help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745407">16</a> by Javito Hertfy
		posted on 8/8/2013 at 7:18 PM
		</div>
		<div class="comment_text"><p>Hi Raymon,</p><p>We have followed your steps and it didn't work, then we realized that actually we had to create an Google Analytics App not a WebSite.. it is quite strange that for you didn't work but it worked for us.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745409">17</a> by Raymond Camden
		posted on 8/8/2013 at 8:53 PM
		</div>
		<div class="comment_text"><p>Yep, see the comment 2 above yours. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745411">18</a> by David
		posted on 1/14/2014 at 10:20 PM
		</div>
		<div class="comment_text"><p>Hi, I've been able to make it run on Phonegap 3.1, but just on iOS, no way to make it work on Android...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745413">19</a> by David
		posted on 1/14/2014 at 10:32 PM
		</div>
		<div class="comment_text"><p>Me again.</p><p>I've got it modifying AndroidManifest.xml and adding</p><p>&lt;uses-permission android:name="android.permission.ACCESS_NETWORK_STATE" /&gt;</p><p>I show through adb logcat that this was missing...</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745414">20</a> by Christopher G Johnson
		posted on 1/27/2014 at 12:07 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, I know you're a Ripple fan, but that Ripple does not support GAPlugin.  Do you have any tips to at least make Ripple not complain when you're running GAPlugin?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745412">21</a> by Raymond Camden
		posted on 1/27/2014 at 7:24 AM
		</div>
		<div class="comment_text"><p>I don't think you can tell Ripple to ignore it. You could wrap your GA plugin code in something that checks for Ripple (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2014%2F1%2F22%2FQuick-Ripple-Tip--Detecting-Ripple%29%3AOZ9TKmgRBghaTdBGnXjxObQMajo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2014/1/22/Quick-Ripple-Tip--Detecting-Ripple)">http://www.raymondcamden.co...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745416">22</a> by Kb
		posted on 3/11/2014 at 6:45 AM
		</div>
		<div class="comment_text"><p>I believe David meant:<br>&lt;uses-permission android:name="android.permission.ACCESS_NETWORK_STATE" /&gt;<br>with the underscores. That or it's changed since his comment.</p><p>Good article.. wish I knew if it were still relevant with all the phonegap &amp; universal analytics changes, etc.</p><p>Is it?</p><p>Subscribed</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745415">23</a> by Kb
		posted on 3/11/2014 at 6:45 AM
		</div>
		<div class="comment_text"><p>Nevermind your comment form is removing the underscores.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745418">24</a> by Raymond Camden
		posted on 3/11/2014 at 2:15 PM
		</div>
		<div class="comment_text"><p>Yeah, sorry - I use it for italics. In the future, you could just use a URL for to a Gist. (Or pastebin.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745417">25</a> by Kyle B
		posted on 3/11/2014 at 9:46 PM
		</div>
		<div class="comment_text"><p>No worries. Though you should look into your subscribe to comments plugin, as it wasn't an email that brought me back here but rather problems with this plugin.</p><p>Noticed you're from Lafayette. I actually grew up in Thibodaux though now reside in Baton Rouge. Oddly enough I only noticed that in your source code while checking to see if you really had a 5 digit analytics ID haha. That has to be pretty close to the urchin days.</p><p>Thanks for the post. New to JS and jQm, so any info to help avoid tracking exclusively with events is helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745421">26</a> by Raymond Camden
		posted on 3/11/2014 at 9:55 PM
		</div>
		<div class="comment_text"><p>Thanks for the warning about the subscribe. It does work in general, afaik, but sometimes emails get stuck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745420">27</a> by Pete Williamson
		posted on 7/3/2014 at 11:09 AM
		</div>
		<div class="comment_text"><p>Just what I needed, was using a different plugin that wasn't reporting any data.<br>Switched to this one and all working fine, real time data showing straight away.</p><p>I'm also using an App not a Website in GA, as pointed out by Anna</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745422">28</a> by Mohammad Umer Ashraf
		posted on 10/1/2014 at 2:25 PM
		</div>
		<div class="comment_text"><p>I'm a newbie to GA. I've created an account for GA, afterwards, I've created a Mobile App property and then used <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fdanwilson%2Fgoogle-analytics-plugin%3Ae0kAxKj6b_qvNAaFlmm99IgSQXc&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/danwilson/google-analytics-plugin">https://github.com/danwilso...</a> Cordova plugin to integrate GA for my Phonegap app, I can now see all screen-views, events in my Real-Time preview but not sure how to track things when app is offline, I heard that Universal analytics will help us to track activities when app is offline, but don't know how to do this, can you please elaborate the steps of how I can achieve this using GAPlugin plugin ?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745423">29</a> by Vincent Row
		posted on 10/24/2014 at 12:59 PM
		</div>
		<div class="comment_text"><p>Hi, Raymond,</p><p>I'm using cordova 3.5. I installed the gaplugin last night. I followed instruction on the github page, but couldn't get ga to work.</p><p>I've installed all the plugins ga needs, network-info, geolocation...,<br>and when I see your post today, I try to create a "site" account(previously is "app"), and switch the tracking id in my code, but still, cannot see anything in the real-time panel. So I just wait, wait, search, wait, and just to see nothing changes.</p><p>and my network is on.</p><p>Hope you could give me a reply if you got the answer. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745425">30</a> by Vincent Row
		posted on 10/24/2014 at 1:57 PM
		</div>
		<div class="comment_text"><p>Finally get this problem soved!</p><p>For short: include GAPlugin.js after cordova.js . This is the answer to my specific issue.<br>(my gaplugin version is 2.3.1, "site' account will not work, "app" does)</p><p>info:<br>Normally when I install a phonegap plugin, I would type</p><p>"phonegap plugin add <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fxxxxxx.git%3AWN4_IjQ7MDio1RJSTWQh1Crqi1Q&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/xxxxxx.git">https://github.com/xxxxxx.git</a>"</p><p> in my command line then hit enter and do nothing else, and, normally, the plugin I installed this way would work just fine. But this time,when  I do the same thing with gaPlugin, it never works however I configure my app or google account. When I saw this post and example.html here("<a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fbobeast%2FGAPlugin%2F%3AptSk-IkLpNHYFuqZrU3bQQog7zg&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/bobeast/GAPlugin/">https://github.com/bobeast/...</a>"). I found that they both include the GAPlugin.js after cordova.js. I saw(and ignored) this before, but this time, I decided to give it a try. And it excited me when I switch to my google real-time panel--"big green".</p><p>What's more, (cordova 3.5, android) I've tried to create a "site" account to test this functionality, it doesn't seem to work. So you might need to create "app" account to use this plugin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745424">31</a> by Raymond Camden
		posted on 10/25/2014 at 1:33 AM
		</div>
		<div class="comment_text"><p>Vincent, thank you for sharing what solved your problem!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745426">32</a> by Chris
		posted on 11/17/2014 at 11:29 PM
		</div>
		<div class="comment_text"><p>Thanks Vincent ... switching GA back to "app" got GA working for me too - using [<a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphonegap-build%2FGAPlugin%3Af9-nl9x2x8HrQ9hLF6hLj5ecqec&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/phonegap-build/GAPlugin">https://github.com/phonegap...</a>].</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745428">33</a> by Raymond Camden
		posted on 11/18/2014 at 4:56 PM
		</div>
		<div class="comment_text"><p>I'm going to edit the entry now so folks don't miss this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745427">34</a> by Chris
		posted on 11/19/2014 at 1:48 AM
		</div>
		<div class="comment_text"><p>Any chance anyone has an idea when the GAplugin will support arm64? Kind of painful atm because you can't build to device with GAplugin right now.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcommunity.phonegap.com%2Fnitobi%2Ftopics%2Fgaplugin-for-arm64%3Frfm%3D1%3A_M8boRevjwZxE3aFnMFj6A9KMvA&amp;cuid=3321886" rel="nofollow noopener" title="http://community.phonegap.com/nitobi/topics/gaplugin-for-arm64?rfm=1">http://community.phonegap.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1842858281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1842858281">35</a> by Kong
		posted on 2/9/2015 at 1:39 AM
		</div>
		<div class="comment_text"><p>hi, any idea to make it work with phonegap build? none i've tried is working</p></div>
	</div>
</div>
		
<div class="comment" id="c_1845342856">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1845342856">36</a> (In reply to <a href="#c_1842858281">#35</a>) by Raymond Camden
		posted on 2/10/2015 at 11:32 AM
		</div>
		<div class="comment_text"><p>*How* is it not working, you didn't say?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2122370956">
	<div>
		<img src="https://disqus.com/api/users/avatars/antoniogallo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2122370956">37</a> (In reply to <a href="#c_1713745393">#10</a>) by Antonio Gallo
		posted on 7/7/2015 at 10:26 PM
		</div>
		<div class="comment_text"><p>put events in a queue (array) of yours and then fire them on "online" event?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2122372339">
	<div>
		<img src="https://disqus.com/api/users/avatars/antoniogallo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2122372339">38</a> (In reply to <a href="#c_1713745414">#20</a>) by Antonio Gallo
		posted on 7/7/2015 at 10:27 PM
		</div>
		<div class="comment_text"><p>don't think so, i detect ripple:<br>window.has_ripple = true &amp;&amp; window.parent &amp;&amp; window.parent.ripple;<br>and if found i don't start any GA calls using a semaphore: windows.has_GA</p></div>
	</div>
</div>
		
<div class="comment" id="c_2649347829">
	<div>
		<img src="https://disqus.com/api/users/avatars/itzikelyahou.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2649347829">39</a> by Itzik Elyahou
		posted on 4/29/2016 at 3:51 PM
		</div>
		<div class="comment_text"><p>Hi Raymond. Thank you very much for the thorough explanation<br>When i load the app i get alert: "value &lt;time&gt; at 3 of type java.lang.string cannot be converted to long"<br>same happens when i click test.<br>GA doesnt track my usage unless i press the fake page button. when i press it, it shows fake page event ok and GA shows me as an active user. can you suggest what i should do?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2649823613">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2649823613">40</a> (In reply to <a href="#c_2649347829">#39</a>) by Raymond Camden
		posted on 4/29/2016 at 8:29 PM
		</div>
		<div class="comment_text"><p>Best I can suggest is to file a bug report on the plugin. It looks like an issue at that level, and not in my code. (I could be wrong though!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2653661887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2653661887">41</a> by Harpi
		posted on 5/2/2016 at 1:03 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I have a question - Since we are choosing the website option and putting in a fake URL, how do we handle the in-page analytics? I am not sure but it does not come up if we choose App option - comments?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2653667215">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2653667215">42</a> (In reply to <a href="#c_2653661887">#41</a>) by Raymond Camden
		posted on 5/2/2016 at 1:07 PM
		</div>
		<div class="comment_text"><p>You should be using the *App* option, not Website.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2678065888">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2678065888">43</a> by Akash Pal
		posted on 5/16/2016 at 9:23 AM
		</div>
		<div class="comment_text"><p>Is there a way to display all these charts within the app using google analytic embedded api?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2678110086">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2678110086">44</a> (In reply to <a href="#c_2678065888">#43</a>) by Raymond Camden
		posted on 5/16/2016 at 10:22 AM
		</div>
		<div class="comment_text"><p>Did you try? :) I don't know how well their Embedded API works on mobile.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2678300696">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2678300696">45</a> (In reply to <a href="#c_2678110086">#44</a>) by Akash Pal
		posted on 5/16/2016 at 1:27 PM
		</div>
		<div class="comment_text"><p>I have been looking at this <br><a href="https://disq.us/url?url=https%3A%2F%2Fga-dev-tools.appspot.com%2Fembed-api%2Fthird-party-visualizations%2F%3AEF-I0NDR6yCANbpr483Bu6-sOKs&amp;cuid=3321886" rel="nofollow noopener" title="https://ga-dev-tools.appspot.com/embed-api/third-party-visualizations/">https://ga-dev-tools.appspo...</a><br>and there are many issues ; such as<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fgoogleanalytics%2Fga-dev-tools%2Fissues%2F122%3A4K-NFx88sNFc3oAn0LMSnNapNi4&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/googleanalytics/ga-dev-tools/issues/122">https://github.com/googlean...</a><br>So I had to use rectify a lot of things. Thought still not over.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2678376232">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2678376232">46</a> (In reply to <a href="#c_2678300696">#45</a>) by Raymond Camden
		posted on 5/16/2016 at 2:21 PM
		</div>
		<div class="comment_text"><p>Cool - well - let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2702469381">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2702469381">47</a> by Akash Pal
		posted on 5/30/2016 at 6:02 AM
		</div>
		<div class="comment_text"><p>Whats the best plugin for google analytic in cordova?<br>I found the following three; have you implemented any one successfully:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphonegap-build%2FGAPlugin%3Af9-nl9x2x8HrQ9hLF6hLj5ecqec&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/phonegap-build/GAPlugin">https://github.com/phonegap...</a></p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcmackay%2Fgoogle-analytics-plugin%23module_analytics%3ACB0d38NARC45IZoR1I0bf5T4V44&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cmackay/google-analytics-plugin#module_analytics">https://github.com/cmackay/...</a></p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fdanwilson%2Fgoogle-analytics-plugin%3Ae0kAxKj6b_qvNAaFlmm99IgSQXc&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/danwilson/google-analytics-plugin">https://github.com/danwilso...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2703242567">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2703242567">48</a> (In reply to <a href="#c_2702469381">#47</a>) by Raymond Camden
		posted on 5/30/2016 at 6:06 PM
		</div>
		<div class="comment_text"><p>Sorry - I haven't used any of them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3497238749">
	<div>
		<img src="https://disqus.com/api/users/avatars/ask2guruji.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3497238749">49</a> by ASK2GURUJI
		posted on 9/1/2017 at 11:24 AM
		</div>
		<div class="comment_text"><p>sir can you send project zip file on ashokpunethaa@gmail.com</p></div>
	</div>
</div>
		
<div class="comment" id="c_3497412842">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3497412842">50</a> (In reply to <a href="#c_3497238749">#49</a>) by Raymond Camden
		posted on 9/1/2017 at 1:52 PM
		</div>
		<div class="comment_text"><p>No - I've included the code above - that should be all you need.</p></div>
	</div>
</div>
		