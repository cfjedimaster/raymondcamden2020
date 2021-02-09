
<div class="comment" id="c_1878693032">
	<div>
		<img src="https://disqus.com/api/users/avatars/dawsonloudon.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1878693032">1</a> by Dawson Loudon
		posted on 2/27/2015 at 3:04 PM
		</div>
		<div class="comment_text"><p>PREACH! I see far too many people out there asking about loading an external site and then using appcache because they 1) don't understand the concept described above or 2) think that they should be able to update their `app` without using the proper channels for an update.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1878731603">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1878731603">2</a> (In reply to <a href="#c_1878693032">#1</a>) by Raymond Camden
		posted on 2/27/2015 at 3:27 PM
		</div>
		<div class="comment_text"><p>To be fair - I can see some need for updating parts of the app via network stuff. Things like core data for example. But not functionality. That's my opinion fwiw. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1979185846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1979185846">3</a> by Sahkan
		posted on 4/21/2015 at 1:24 PM
		</div>
		<div class="comment_text"><p>What if i want to use an app i already have on desktop and get updates using the appcache ( use phonegap to port it to IPAD ), do i need to write an other code to do that separately for phonegap ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1985760322">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1985760322">4</a> (In reply to <a href="#c_1979185846">#3</a>) by Raymond Camden
		posted on 4/24/2015 at 8:52 PM
		</div>
		<div class="comment_text"><p>If you want a web site, then use a web site. DOn't just 'wrap' it in PhoneGap. While you *can*, it almost never makes sense to do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2073522376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2073522376">5</a> by Newbie Mobile Dev
		posted on 6/11/2015 at 12:04 PM
		</div>
		<div class="comment_text"><p>I have a similar question.  I'm building a phonegap app using phonegap build, and I tried Googling, but can't find an example of how to update a mobile app, or any explanation of the concept of sending updates to mobile apps.  I need help with this, please!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2073616837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2073616837">6</a> (In reply to <a href="#c_2073522376">#5</a>) by Newbie Mobile Dev
		posted on 6/11/2015 at 1:07 PM
		</div>
		<div class="comment_text"><p>Nevermind, I just read your blog on ContentSync for Phonegap, but I might have a question about the HEAD method in your Javascript example.  I'll do some Googling first, before I ask the question on your ContentSync blog.  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2440301841">
	<div>
		<img src="https://disqus.com/api/users/avatars/jesse_monroy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2440301841">7</a> by Jesse Monroy
		posted on 1/5/2016 at 6:00 AM
		</div>
		<div class="comment_text"><p>AWESOME I added it to my FAQ!! See the end of the first paragraph!<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fjessemonroy650%2Ftop-phonegap-mistakes%2Fblob%2Fmaster%2Fnew-to-Phonegap.md%23005%3ABoZd66NHk4NiSNxkOR2p554ehPw&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/jessemonroy650/top-phonegap-mistakes/blob/master/new-to-Phonegap.md#005">https://github.com/jessemon...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2540620776">
	<div>
		<img src="https://disqus.com/api/users/avatars/chadananda.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2540620776">8</a> by chadananda
		posted on 2/27/2016 at 10:08 PM
		</div>
		<div class="comment_text"><p>Unless you want your app to be able to update itself. Seems like that would be a pretty killer combination. You package up an initial state but let it update using something like appcache nanny. Anyone doing this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2540687095">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2540687095">9</a> (In reply to <a href="#c_2540620776">#8</a>) by Raymond Camden
		posted on 2/27/2016 at 11:09 PM
		</div>
		<div class="comment_text"><p>Eh? AppCache doesn't have anything at all to do with that. AppCache lets a browser cache items locally when loading requests from a server. It also lets you provide a fallback if there isn't a network.</p><p>That is 100% not the case for a hybrid mobile application. You aren't using a server. You are loading your HTML/etc from the local file system in the app itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2540926563">
	<div>
		<img src="https://disqus.com/api/users/avatars/chadananda.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2540926563">10</a> (In reply to <a href="#c_2540687095">#9</a>) by chadananda
		posted on 2/28/2016 at 2:59 AM
		</div>
		<div class="comment_text"><p>But you don't have to. Why not load the files from a remote server and use AppCache. Then check for updates once a day (instead of every 30 seconds). That's a pretty neat way of pushing app updates. Otherwise, re-deploying to app stores is a major pain in the keister. Am I missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2540982284">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2540982284">11</a> (In reply to <a href="#c_2540926563">#10</a>) by Raymond Camden
		posted on 2/28/2016 at 4:07 AM
		</div>
		<div class="comment_text"><p>What happens when your app is offline and you haven't been able to cache anything? Or what happens when network conditions are flakey? While you *can* do what you suggest, I strongly recommend against it. App store updates aren't necessarily a pain - every day people do them. Also, you can push some updates via services like Ionic Deploy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2541015538">
	<div>
		<img src="https://disqus.com/api/users/avatars/chadananda.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2541015538">12</a> (In reply to <a href="#c_2540982284">#11</a>) by chadananda
		posted on 2/28/2016 at 4:47 AM
		</div>
		<div class="comment_text"><p>The user is typically online after having just downloaded the app so the initial app cache should be fine. Subsequent app updates would come whenever the app is able to fetch them. The cache is permanent so it doesn't matter if the user is offline for long periods or not. <br>And deployment is a major pain. That's why tools like Phonegap Build Hydration exist. Using the Appcache seems like it could be another way to accomplish the same thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2541556877">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2541556877">13</a> (In reply to <a href="#c_2541015538">#12</a>) by Raymond Camden
		posted on 2/28/2016 at 3:46 PM
		</div>
		<div class="comment_text"><p>Hydration wasn't built for this. It was built for the development/testing phase of your application, not for post-release updates.</p><p>Listen - you are correct in that you *can* do what you are suggesting. I absolutely do not recommend it and strongly urge you against doing it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2542531398">
	<div>
		<img src="https://disqus.com/api/users/avatars/chadananda.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2542531398">14</a> (In reply to <a href="#c_2541556877">#13</a>) by chadananda
		posted on 2/29/2016 at 2:12 AM
		</div>
		<div class="comment_text"><p>I don't want to be disrespectful of your advice, but it would help me if you would give some of the reasons why you don't think cache-based application updating is a good idea. Making apps as easy to update as a web site still sounds pretty compelling to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2543021832">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2543021832">15</a> (In reply to <a href="#c_2542531398">#14</a>) by Raymond Camden
		posted on 2/29/2016 at 11:27 AM
		</div>
		<div class="comment_text"><p>It isn't "cache-based apps", but an app that is still on a web server that bothers me. You're not building a mobile app really but just a shell for your web server. Even with the cache in place, you'll still be doing a network request for things that should served from the device itself. And as I said, if you do not want to do updates via the app store, you have other alternatives like Ionic Deploy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2689876786">
	<div>
		<img src="https://disqus.com/api/users/avatars/judenaveenraj.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2689876786">16</a> (In reply to <a href="#c_1985760322">#4</a>) by Jude Naveen Raj
		posted on 5/22/2016 at 9:39 PM
		</div>
		<div class="comment_text"><p>That depends. There will always be reasons to use phonegap, for example, to obtain unlimited app storage through the use of cordova-sqlite-plugin, or maybe you need to utilize wkwebviews instead of uiwebviews (which cordova again helps with)... and a lot more reason probably.</p><p>And if you ever are involved in creating a project that demands the complexity, using appcache to auto-update your app seems like a very wise thing to do. However im expecting people to soon move to things like service worker, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2690032147">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2690032147">17</a> (In reply to <a href="#c_2689876786">#16</a>) by Raymond Camden
		posted on 5/23/2016 at 12:01 AM
		</div>
		<div class="comment_text"><p>To your first paragraph, right away you're going beyond just 'wrapping', which means you aren't disagreeing with my comment at all. ;)</p><p>As for your second para, appcache isn't used to auto-update. It's used to help serve assets when your offline.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2820922568">
	<div>
		<img src="https://disqus.com/api/users/avatars/jamesisbell.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2820922568">18</a> (In reply to <a href="#c_2543021832">#15</a>) by Jam
		posted on 8/4/2016 at 6:49 PM
		</div>
		<div class="comment_text"><p>I think if you are using a javascript framework you could easily bundle your whole application into one .js file that includes the app shell and any pages needed. If there is a need for data storage as well one could use pouchDB to store data on the device for offline usage and sync that with a CouchDB database on the remote server.</p><p>Meteor does something similar to this when building its mobile applications with mongo, minimongo and a package called GroundDB. It also uses Appcaching and uses the cached files by default.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2820960486">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2820960486">19</a> (In reply to <a href="#c_2820922568">#18</a>) by Raymond Camden
		posted on 8/4/2016 at 7:14 PM
		</div>
		<div class="comment_text"><p>So everything you say here is true, but I don't see how it applies to the point of this article - that AppCache isn't needed (and doesn't make sense!) for PhoneGap/Cordova apps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2848986787">
	<div>
		<img src="https://disqus.com/api/users/avatars/Pier25.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2848986787">20</a> by Pier
		posted on 8/21/2016 at 12:11 AM
		</div>
		<div class="comment_text"><p>The problem with the network information plugin is that it doesn't tell you whether the device is online, it tells you if it's connected to a network. You could be connected to a Wifi network and be offline for example.</p><p>To really know if you are online the best way is to simply XHR or fetch() some small JSON on your server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3852167136">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_50YSFS7Fpr.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3852167136">21</a> (In reply to <a href="#c_2820960486">#19</a>) by Dave B
		posted on 4/12/2018 at 6:14 PM
		</div>
		<div class="comment_text"><p>Raymond, thank you for taking the time to share.</p><p>I also like the concept of simply posting a new application to the server and having all mobile applications automatically update to it.  That being said, the real driving factor for us considering this pattern is for security reasons.</p><p>We have observed that a Cordova application that redirects to pages served from a server allows using httponly cookies even with a Cordova application.  All other attempts to use cookies with Cordova have failed miserably.  This is probably because the origin sent to the server is "file://", which I suspect the standards would never allow supporting cookies because of how insecure it would be.  This leaves the only way to cache a security token is to either use local storage OR a Cordova extension, which has the exact same security limitation as local storage.  That being your security token is exposed to XSS attacks and the WebView cannot offer a reliable origin to the web server.</p><p>Of course our goal is still to have an offline application/UI that presents well to a user if they cannot connect to the server.  Having this setup on the first run and an entry/splash screen deployed local to cordova that makes it clear seems reasonable to me.</p><p>However, your insistence on this being a very bad idea is troubling, especially with the inability of Cordova to provide a secure origin.</p><p>I know this thread is over 2 years old, but I am curious if you still feel the same way and perhaps know of something we are missing.  Perhaps our initial tests did not tell the entire story and we are asking for trouble.  We do not yet have a full proof of concept working with this yet as we are evaluating all options in order create an application that can be easily updated, secure, and support both Android and IOS devices.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3852308412">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3852308412">22</a> (In reply to <a href="#c_3852167136">#21</a>) by Raymond Camden
		posted on 4/12/2018 at 7:41 PM
		</div>
		<div class="comment_text"><p>Honestly, I see little use for Cordova anymore with how strong the web is now (see PWA). To be clear, that isn't a slight on Cordova. Since day one it's mission was to help the web come to a point where it wouldn't be needed. I don't think we are 100% of the way there, but we're a heck of a lot closer now in 2018 than we were in 2015.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3852582093">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_50YSFS7Fpr.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3852582093">23</a> (In reply to <a href="#c_3852308412">#22</a>) by Dave B
		posted on 4/12/2018 at 10:35 PM
		</div>
		<div class="comment_text"><p>That is very helpful.  Thank you.</p></div>
	</div>
</div>
		