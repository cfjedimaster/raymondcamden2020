
<div class="comment" id="c_1772565987">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_G4gmHcHDeM.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1772565987">1</a> by Filipe Silva
		posted on 1/5/2015 at 1:28 PM
		</div>
		<div class="comment_text"><p>One tip that I'd like to add is that if you're getting app crashes on search, try adding the contactFindOptions.desiredFields option to retrieve only the fields you really need.</p><p>I had some trouble with a client on iOS crashing, and after quite a bit of work ended up figuring out that the OS silently kills apps using too much RAM, and that somehow his contacts had something really odd there (the app functioned just fine with over 5k contacts on other devices).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1772688759">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1772688759">2</a> (In reply to <a href="#c_1772565987">#1</a>) by Raymond Camden
		posted on 1/5/2015 at 2:59 PM
		</div>
		<div class="comment_text"><p>I did mention this, but only in regards of "return what you need", I didn't go into detail about why, so thank you, Filipe. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2089502352">
	<div>
		<img src="https://disqus.com/api/users/avatars/rajeshkg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2089502352">3</a> (In reply to <a href="#c_1772688759">#2</a>) by Rajesh K G
		posted on 6/20/2015 at 11:50 AM
		</div>
		<div class="comment_text"><p>hi Raymond, I am quite happy to connect with you. I am seeing you on many Cordova mails threads. I have a similar problem that Cordova Contacts plugin is not able get me quick results, though i just give very limited 1 or 2 desiredFields and Fetch fields (say 1 or 2). I have close to 700 contacts in my 2 Year old Android phone. It takes close to 4 mins for fetching. Sometimes, it doesn't even return succ / fail. Would there be any other quick Contact Cordova plugin ? i see many posts talk about this slowness.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2090678675">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2090678675">4</a> (In reply to <a href="#c_2089502352">#3</a>) by Raymond Camden
		posted on 6/21/2015 at 2:19 AM
		</div>
		<div class="comment_text"><p>I'm not aware of any offhand - but did you search <a href="http://disq.us/url?url=http%3A%2F%2Fplugins.cordova.io%3F%3ABq4qdZZzHJse9rrb-6_bTxRBUBw&amp;cuid=3321886" rel="nofollow noopener" title="plugins.cordova.io?">plugins.cordova.io?</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2090998325">
	<div>
		<img src="https://disqus.com/api/users/avatars/rajeshkg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2090998325">5</a> (In reply to <a href="#c_2090678675">#4</a>) by Rajesh K G
		posted on 6/21/2015 at 9:21 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond. Searched a lot but all point back to same plugin.  If we just want fetch even just two fields do we need that much json transformations? </p></div>
	</div>
</div>
		
<div class="comment" id="c_2091154021">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2091154021">6</a> (In reply to <a href="#c_2090998325">#5</a>) by Raymond Camden
		posted on 6/21/2015 at 12:10 PM
		</div>
		<div class="comment_text"><p>I can't really comment on *how* the plugin works as I've never looked at the source code for it. Best I can suggest is filing a bug, or perhaps trying to fix it yourself and submitting a PR.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2092376917">
	<div>
		<img src="https://disqus.com/api/users/avatars/rajeshkg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2092376917">7</a> (In reply to <a href="#c_2091154021">#6</a>) by Rajesh K G
		posted on 6/22/2015 at 7:07 AM
		</div>
		<div class="comment_text"><p>Found this plugin. Trying to do this today evening. <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fdbaq%2Fcordova-plugin-contacts-phone-numbers%3AUo06YkILvTy7sLj9b-rQPhBaKgw&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/dbaq/cordova-plugin-contacts-phone-numbers">https://github.com/dbaq/cor...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2442635525">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_e6n3pyVQwa.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2442635525">8</a> by Pete Olsen
		posted on 1/6/2016 at 3:02 PM
		</div>
		<div class="comment_text"><p>I keep getting an error that navigator.contacts is undefined. What have I missed? Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2442645768">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2442645768">9</a> (In reply to <a href="#c_2442635525">#8</a>) by Raymond Camden
		posted on 1/6/2016 at 3:09 PM
		</div>
		<div class="comment_text"><p>Your code is running before deviceready has fired, or you forgot to include the contacts plugin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2442649273">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_e6n3pyVQwa.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2442649273">10</a> (In reply to <a href="#c_2442645768">#9</a>) by Pete Olsen
		posted on 1/6/2016 at 3:11 PM
		</div>
		<div class="comment_text"><p>It is after the device ready. How do I include the plugin? THanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2442664614">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2442664614">11</a> (In reply to <a href="#c_2442649273">#10</a>) by Raymond Camden
		posted on 1/6/2016 at 3:21 PM
		</div>
		<div class="comment_text"><p>This is covered in the docs (and my book ;) but the basic concept is:</p><p>cordova plugin add X</p><p>where X is the name of the plugin. In your case, cordova-plugin-contacts</p></div>
	</div>
</div>
		
<div class="comment" id="c_2442667749">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_e6n3pyVQwa.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2442667749">12</a> (In reply to <a href="#c_2442664614">#11</a>) by Pete Olsen
		posted on 1/6/2016 at 3:23 PM
		</div>
		<div class="comment_text"><p>Ahh, well I installed the plugin as shown. It's just not being picked up I guess. Which directory do you run the command in? The www dir or the home directory? Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2442672094">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2442672094">13</a> (In reply to <a href="#c_2442667749">#12</a>) by Raymond Camden
		posted on 1/6/2016 at 3:26 PM
		</div>
		<div class="comment_text"><p>If you make a new project, add the plugin, then just copy the www assets from the Git repo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2550727530">
	<div>
		<img src="https://disqus.com/api/users/avatars/amilajayasinghe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2550727530">14</a> by Amila Jayasinghe
		posted on 3/4/2016 at 4:27 AM
		</div>
		<div class="comment_text"><p>It shows [Object Object] when I run it on iOS</p></div>
	</div>
</div>
		
<div class="comment" id="c_2551150444">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2551150444">15</a> (In reply to <a href="#c_2550727530">#14</a>) by Raymond Camden
		posted on 3/4/2016 at 12:46 PM
		</div>
		<div class="comment_text"><p>Add JSON.stringify() around the output.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2566795508">
	<div>
		<img src="https://disqus.com/api/users/avatars/Dineshrajaa.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2566795508">16</a> by Dinesh Raja
		posted on 3/13/2016 at 4:59 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, thanks for this post, is there anyway to sort the contacts based on name ??</p></div>
	</div>
</div>
		
<div class="comment" id="c_2568772640">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2568772640">17</a> (In reply to <a href="#c_2566795508">#16</a>) by Raymond Camden
		posted on 3/14/2016 at 1:39 PM
		</div>
		<div class="comment_text"><p>Via the plugin, no, but once you have the array back, just use sort() on it and pass an inline function that sorts on the name value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2572186379">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_NoEpDwuise.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2572186379">18</a> by Shash
		posted on 3/16/2016 at 4:48 AM
		</div>
		<div class="comment_text"><p>Hai Raymond sorry..this is related to google oauth...after adding google plus plugin while building i.c ionic build android I'am getting</p><p>ERROR building one of the platforms: Error code 1 for command: /home/shashank/ionic-starter-oauth-master/platforms/android/gradlew with args: cdvBuildDebug,-b,/home/shashank/ionic-starter-oauth-master/platforms/android/build.gradle,-Dorg.gradle.daemon=true,-Pandroid.useDeprecatedNdk=true</p><p>You may not have the required environment or OS to build this project</p><p>Error: Error code 1 for command: /home/shashank/ionic-starter-oauth-master/platforms/android/gradlew with args: cdvBuildDebug,-b,/home/shashank/ionic-starter-oauth-master/platforms/android/build.gradle,-Dorg.gradle.daemon=true,-Pandroid.useDeprecatedNdk=true</p></div>
	</div>
</div>
		
<div class="comment" id="c_2572645967">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2572645967">19</a> (In reply to <a href="#c_2572186379">#18</a>) by Raymond Camden
		posted on 3/16/2016 at 1:25 PM
		</div>
		<div class="comment_text"><p>Your comment has nothing at all to do with this blog post. For general questions, you can use my contact form, or post to Stack Overflow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2643334847">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_CC6Wg4D80k.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2643334847">20</a> by Subin Babu
		posted on 4/26/2016 at 10:59 AM
		</div>
		<div class="comment_text"><p>hi ,can i add contact automatic with a name and no in variable on button click?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2643469032">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2643469032">21</a> (In reply to <a href="#c_2643334847">#20</a>) by Raymond Camden
		posted on 4/26/2016 at 1:01 PM
		</div>
		<div class="comment_text"><p>Please see the docs. It demonstrates how to add contacts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2661217599">
	<div>
		<img src="https://disqus.com/api/users/avatars/amilajayasinghe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2661217599">22</a> by Amila Jayasinghe
		posted on 5/6/2016 at 5:02 AM
		</div>
		<div class="comment_text"><p>Hi.. How can I get contact list using ionic  ng-Cordova? It looks these codes are not work for ionic  ng-Cordova. Can you please help me?<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_2661642642">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2661642642">23</a> (In reply to <a href="#c_2661217599">#22</a>) by Raymond Camden
		posted on 5/6/2016 at 12:57 PM
		</div>
		<div class="comment_text"><p>The code I used was for the Contacts plugin and will work just fine in any Cordova app, including any Ionic app. Using Ionic does not mean you *have* to use ngCordova. If you want to use the Contact support in ngCordova, I'd suggest checking their docs. If it still doesn't work for you, tell us what you tried and how it failed, although it will be a bit OT for this blog post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2663091390">
	<div>
		<img src="https://disqus.com/api/users/avatars/amilajayasinghe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2663091390">24</a> (In reply to <a href="#c_2661642642">#23</a>) by Amila Jayasinghe
		posted on 5/7/2016 at 7:09 AM
		</div>
		<div class="comment_text"><p>This is noted. In fact, I was trying to run my app in ionic view. I'll try to run it on real devise and get back to you with the status. Thanks </p></div>
	</div>
</div>
		
<div class="comment" id="c_2920491999">
	<div>
		<img src="https://disqus.com/api/users/avatars/lovepanchal.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2920491999">25</a> by Love  Panchal
		posted on 9/27/2016 at 6:17 AM
		</div>
		<div class="comment_text"><p>how to remove the contact the code is not working ?????</p></div>
	</div>
</div>
		
<div class="comment" id="c_2921091063">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2921091063">26</a> (In reply to <a href="#c_2920491999">#25</a>) by Raymond Camden
		posted on 9/27/2016 at 3:24 PM
		</div>
		<div class="comment_text"><p>Well my demo doesn't talk about removing contacts, right? So if you are talking about how to use the Contact API in general, then your question is off topic and should be posted to Stack Overflow instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3041836315">
	<div>
		<img src="https://disqus.com/api/users/avatars/tojopaul.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3041836315">27</a> by TOJO PAUL
		posted on 12/8/2016 at 7:53 AM
		</div>
		<div class="comment_text"><p>How can i get the Contact  Events like Anniversary?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3042003300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3042003300">28</a> by Karan Rao
		posted on 12/8/2016 at 11:39 AM
		</div>
		<div class="comment_text"><p>Is there a way to find just one contact???</p></div>
	</div>
</div>
		
<div class="comment" id="c_3042042252">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3042042252">29</a> (In reply to <a href="#c_3041836315">#27</a>) by Raymond Camden
		posted on 12/8/2016 at 12:20 PM
		</div>
		<div class="comment_text"><p>Look in the Contact object. It should return everything that exists.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3042042473">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3042042473">30</a> (In reply to <a href="#c_3042003300">#28</a>) by Raymond Camden
		posted on 12/8/2016 at 12:20 PM
		</div>
		<div class="comment_text"><p>Use the find API - see the plugin docs for more information.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3042300565">
	<div>
		<img src="https://disqus.com/api/users/avatars/tojopaul.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3042300565">31</a> (In reply to <a href="#c_3042042252">#29</a>) by TOJO PAUL
		posted on 12/8/2016 at 3:17 PM
		</div>
		<div class="comment_text"><p>I have added a contact with Anniversary and Birth date .it returns only the Birth date. i have tried  iphone 4s and 5s. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_3042414137">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3042414137">32</a> (In reply to <a href="#c_3042300565">#31</a>) by Raymond Camden
		posted on 12/8/2016 at 4:31 PM
		</div>
		<div class="comment_text"><p>Remember you have to *ask* for the fields you want returned. Please see the Contact docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3043453740">
	<div>
		<img src="https://disqus.com/api/users/avatars/tojopaul.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3043453740">33</a> (In reply to <a href="#c_3042414137">#32</a>) by TOJO PAUL
		posted on 12/9/2016 at 4:49 AM
		</div>
		<div class="comment_text"><p>var options = new ContactFindOptions();<br>options.filter = "";         <br>options.multiple = true;<br>var fields = ["*"];                   <br> navigator.contacts.find(fields, onSuccessContact, onErrorContact, options);</p><p>I have used  above Code and tried '*' to get all contact fields.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_3043953578">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3043953578">34</a> (In reply to <a href="#c_3043453740">#33</a>) by Raymond Camden
		posted on 12/9/2016 at 2:25 PM
		</div>
		<div class="comment_text"><p>If that didn't work - then I'd file a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3047833369">
	<div>
		<img src="https://disqus.com/api/users/avatars/tojopaul.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3047833369">35</a> (In reply to <a href="#c_3043953578">#34</a>) by TOJO PAUL
		posted on 12/12/2016 at 5:13 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond, I have reported this issue in jira</p></div>
	</div>
</div>
		
<div class="comment" id="c_3081201505">
	<div>
		<img src="https://disqus.com/api/users/avatars/nocodedweb.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3081201505">36</a> by Joshua Rowe
		posted on 1/3/2017 at 6:50 PM
		</div>
		<div class="comment_text"><p>Is there a way to show multiple photos per contact?  Seems you can save multiple photos but the returned array shows the same URL for each photo in the array.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3081205844">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3081205844">37</a> (In reply to <a href="#c_3081201505">#36</a>) by Raymond Camden
		posted on 1/3/2017 at 6:53 PM
		</div>
		<div class="comment_text"><p>Yes - if the data is there, you would just do it. Iterate over the array I mean and display it as you see fit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3081214482">
	<div>
		<img src="https://disqus.com/api/users/avatars/nocodedweb.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3081214482">38</a> (In reply to <a href="#c_3081205844">#37</a>) by Joshua Rowe
		posted on 1/3/2017 at 6:59 PM
		</div>
		<div class="comment_text"><p>I guess what I mean is the data is there, but the URL is the same across all photos.  For example, if contact ID 1000 has three photos, the URL for each of the three photos is the same instead of each having a unique URL: content://com.android.contacts/contacts/1000/photo</p></div>
	</div>
</div>
		
<div class="comment" id="c_3081216710">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3081216710">39</a> (In reply to <a href="#c_3081214482">#38</a>) by Raymond Camden
		posted on 1/3/2017 at 7:00 PM
		</div>
		<div class="comment_text"><p>That smells like a bug in the plugin then. Can you try reporting that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3135887810">
	<div>
		<img src="https://disqus.com/api/users/avatars/nocodedweb.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3135887810">40</a> (In reply to <a href="#c_3081216710">#39</a>) by Joshua Rowe
		posted on 2/3/2017 at 4:02 PM
		</div>
		<div class="comment_text"><p>Have an issue reported on this with some details.  Looks like it may be a device limitation per the Android documentation and some findings in the code, but want to make sure:  <a href="https://disq.us/url?url=https%3A%2F%2Fissues.apache.org%2Fjira%2Fbrowse%2FCB-12315%3AfDOYKDpoB-jj8CsMxum35pUEWJ8&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.apache.org/jira/browse/CB-12315">https://issues.apache.org/j...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3206814123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3206814123">41</a> by Puja
		posted on 3/16/2017 at 8:54 AM
		</div>
		<div class="comment_text"><p>Hello Raymond,</p><p>I have an requirement where I have to show the iphone/ipad contacts which is only having email address in shorting order by dispaly name.<br>With the below code i am getting all the conatacts which is not having the email id also.COuld you please help me on this</p><p>	function onDeviceReady() {<br>				var options = new ContactFindOptions();<br>				options.filter = "";<br>				options.multiple = true;<br>                var fields = [name,navigator.contacts.fieldType.emails];<br>		navigator.contacts.find(fields, onSuccessGetContacts, onErrorGetContacts);<br>			}</p><p>function onSuccessGetContacts(contacts) {</p><p>                //create the Model<br>				var oModelContacts = new sap.ui.model.json.JSONModel();<br>                oModelContacts.setSizeLimit(2500);</p><p>				//define the structure of the Model / Entity<br>				var oData = {<br>					"Contacts": []<br>				};</p><p>				//set the entity to the model<br>				oModelContacts.setData(oData);</p><p>				//set the model to core<br>				sap.ui.getCore().setModel(oModelContacts);</p><p>				//fill the model with the contacts of the device formatted name and first email address<br>				var oModelData = sap.ui.getCore().getModel().getData();</p><p>				for (var i = 0; i &lt; contacts.length; i++) {</p><p>                    var email = "";<br>                    if(contacts[i].emails &amp;&amp; contacts[i].emails.length &gt; 0) {<br>                        email = contacts[i].emails[0].value;<br>                    }<br>                    					oModelData.Contacts.push({<br>						displayName: contacts[i].name.formatted,<br>						email: email<br>					});<br>				}</p></div>
	</div>
</div>
		
<div class="comment" id="c_3207181666">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3207181666">42</a> (In reply to <a href="#c_3206814123">#41</a>) by Raymond Camden
		posted on 3/16/2017 at 2:35 PM
		</div>
		<div class="comment_text"><p>I honestly can't understand what you are saying. It sounds like you want contacts that have email addresses. If you can't filter by that using the contacts API, then you can use the code I've shown to get *all* contacts and then filter it yourself afterwards.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3255551143">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_bRAyTt0qtG.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3255551143">43</a> by Jin Ping
		posted on 4/14/2017 at 7:27 AM
		</div>
		<div class="comment_text"><p>Thank you, very useful!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3470512091">
	<div>
		<img src="https://disqus.com/api/users/avatars/valentineofili.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3470512091">44</a> by valentine ofili
		posted on 8/16/2017 at 9:04 AM
		</div>
		<div class="comment_text"><p>Thank you for this , however it is not working.</p><p>When i try running your example with the snippet below</p><p> onDeviceReady: function() {<br>        this.receivedEvent('deviceready');<br>        console.log("Device ready event ");</p><p>        //get contacts on user's device<br>		navigator.contacts.find(<br>		[navigator.contacts.fieldType.displayName],<br>		gotContacts,<br>		errorHandler);</p><p>	  function gotContacts(c) {<br>		console.log("gotContacts, number of results "+c.length);</p><p>		for(var i=0, len=c.length; i&lt;len; i++)="" {="" console.dir(c[i]);="" }="" }="" function="" errorhandler(e)="" {="" console.log("error="" "="" +="" e);="" }="" i="" get="" an="" error="" in="" my="" logcat="" whic="" i="" view="" when="" emulating="" the="" app="" on="" a="" real="" device="" with="" contacts.="" failed="" to="" get="" birthday="" for="" contact="" from="" cursor="" java.lang.illegalargumentexception="" at="" java.sql.date.valueof(<a href="http://disq.us/url?url=http%3A%2F%2Fdate.java%3AZeflFF8Z-luxbD0V969DzMcg9rA&amp;cuid=3321886" rel="nofollow noopener" title="date.java">date.java</a>:219)="" at="" org.apache.cordova.contacts.contactaccessorsdk5.getbirthday(<a href="http://disq.us/url?url=http%3A%2F%2Fcontactaccessorsdk5.java%3AhoZ8SU5PR5Ta979us1l-9DqBZUU&amp;cuid=3321886" rel="nofollow noopener" title="contactaccessorsdk5.java">contactaccessorsdk5.java</a>:1977)="" at="" org.apache.cordova.contacts.contactaccessorsdk5.populatecontactarray(<a href="http://disq.us/url?url=http%3A%2F%2Fcontactaccessorsdk5.java%3AhoZ8SU5PR5Ta979us1l-9DqBZUU&amp;cuid=3321886" rel="nofollow noopener" title="contactaccessorsdk5.java">contactaccessorsdk5.java</a>:466)="" at="" <a href="http://disq.us/url?url=http%3A%2F%2Forg.apache.cordova.contacts.contactaccessorsdk5.search%3AMrR7S7gM-WmL0w6ScfiQvmteC4Q&amp;cuid=3321886" rel="nofollow noopener" title="org.apache.cordova.contacts.contactaccessorsdk5.search">org.apache.cordova.contacts...</a>(<a href="http://disq.us/url?url=http%3A%2F%2Fcontactaccessorsdk5.java%3AhoZ8SU5PR5Ta979us1l-9DqBZUU&amp;cuid=3321886" rel="nofollow noopener" title="contactaccessorsdk5.java">contactaccessorsdk5.java</a>:295)="" at="" org.apache.cordova.contacts.contactmanager$<a href="http://disq.us/url?url=http%3A%2F%2F3.run%3AR94b9SYeatOrdxBRJTuXWVEJi9I&amp;cuid=3321886" rel="nofollow noopener" title="3.run">3.run</a>(<a href="http://disq.us/url?url=http%3A%2F%2Fcontactmanager.java%3AY0dtQsn_xmtgu-pPbKr0j-mIA_E&amp;cuid=3321886" rel="nofollow noopener" title="contactmanager.java">contactmanager.java</a>:209)="" at="" java.util.concurrent.threadpoolexecutor.runworker(<a href="http://disq.us/url?url=http%3A%2F%2Fthreadpoolexecutor.java%3AGsS1s69r1q3_xCNs_bB_oD8yOHU&amp;cuid=3321886" rel="nofollow noopener" title="threadpoolexecutor.java">threadpoolexecutor.java</a>:1112)="" at="" java.util.concurrent.threadpoolexecutor$<a href="http://disq.us/url?url=http%3A%2F%2Fworker.run%3AqFeW3kXwRjnx3azY7-pI-JChAy8&amp;cuid=3321886" rel="nofollow noopener" title="worker.run">worker.run</a>(<a href="http://disq.us/url?url=http%3A%2F%2Fthreadpoolexecutor.java%3AGsS1s69r1q3_xCNs_bB_oD8yOHU&amp;cuid=3321886" rel="nofollow noopener" title="threadpoolexecutor.java">threadpoolexecutor.java</a>:587)="" at="" <a href="http://disq.us/url?url=http%3A%2F%2Fjava.lang.thread.run%3Aa602N8pABEEN8PG4DhbmI3huJpU&amp;cuid=3321886" rel="nofollow noopener" title="java.lang.thread.run">java.lang.thread.run</a>(<a href="http://disq.us/url?url=http%3A%2F%2Fthread.java%3AkMEbUvPJiij4ewuDxQtHWWd-dMY&amp;cuid=3321886" rel="nofollow noopener" title="thread.java">thread.java</a>:818)="" im="" using="" cordova="" contacts="" plugin="" cordova-plugin-contacts="" 2.3.1="" "contacts"=""&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_3470634237">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3470634237">45</a> (In reply to <a href="#c_3470512091">#44</a>) by Raymond Camden
		posted on 8/16/2017 at 11:18 AM
		</div>
		<div class="comment_text"><p>Your error message was messed up in disqus. Can you post it to a Gist and then share the URL here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3508344197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3508344197">46</a> by Steve Nosse
		posted on 9/8/2017 at 6:13 PM
		</div>
		<div class="comment_text"><p>Very helpful!!! Tried this and it worked for me</p></div>
	</div>
</div>
		
<div class="comment" id="c_3634507162">
	<div>
		<img src="https://disqus.com/api/users/avatars/petronelmalutan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3634507162">47</a> by Petronel Malutan
		posted on 11/27/2017 at 8:00 AM
		</div>
		<div class="comment_text"><p>Do you know if we can get the fovourites contacts with this ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3634904592">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3634904592">48</a> (In reply to <a href="#c_3634507162">#47</a>) by Raymond Camden
		posted on 11/27/2017 at 3:30 PM
		</div>
		<div class="comment_text"><p>Check the docs for the plugin - you may be able to search by a category.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3634910817">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3634910817">49</a> (In reply to <a href="#c_3634904592">#48</a>) by Raymond Camden
		posted on 11/27/2017 at 3:35 PM
		</div>
		<div class="comment_text"><p>Looking at the docs, I see a categories field. It may be in there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4276713821">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_qMbkGTEvwc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4276713821">50</a> by newguy
		posted on 1/9/2019 at 10:19 AM
		</div>
		<div class="comment_text"><p>Nice article.</p></div>
	</div>
</div>
		