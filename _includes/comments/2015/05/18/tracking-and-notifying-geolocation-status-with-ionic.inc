
<div class="comment" id="c_2032102423">
	<div>
		<img src="https://disqus.com/api/users/avatars/jerrybels.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2032102423">1</a> by JerryBels
		posted on 5/18/2015 at 4:58 PM
		</div>
		<div class="comment_text"><p>Hey, thanks for sharing,</p><p>have you tried using watchPosition instead of getCurrentPosition ? It looks to me more accurate to use in that case, no ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2032129712">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2032129712">2</a> (In reply to <a href="#c_2032102423">#1</a>) by Raymond Camden
		posted on 5/18/2015 at 5:13 PM
		</div>
		<div class="comment_text"><p>Ah, interesting. So no, afaik, getCurrentPosition isn't more accurate. That's controlled by the options you can pass to either API call (enableHighAccuracy if I remember right), but using the watch call may mean less code as you aren't using the setInterval.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2109784993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2109784993">3</a> by Don
		posted on 7/1/2015 at 2:21 AM
		</div>
		<div class="comment_text"><p>Bonus points: Get this to work when your app is in the background...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2268777989">
	<div>
		<img src="https://disqus.com/api/users/avatars/danielsaidi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2268777989">4</a> by Daniel Saidi
		posted on 9/23/2015 at 10:04 AM
		</div>
		<div class="comment_text"><p>Great write up, thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2294763892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2294763892">5</a> (In reply to <a href="#c_2109784993">#3</a>) by Sumeet Darade
		posted on 10/7/2015 at 3:28 PM
		</div>
		<div class="comment_text"><p>does this really work when app is not active? please confirm .... ! if yes..... this article and you made my day......</p></div>
	</div>
</div>
		
<div class="comment" id="c_2294831964">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2294831964">6</a> (In reply to <a href="#c_2294763892">#5</a>) by Raymond Camden
		posted on 10/7/2015 at 4:02 PM
		</div>
		<div class="comment_text"><p>I know there is a plugin to do stuff in the background. I'd look there first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2302434488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2302434488">7</a> (In reply to <a href="#c_2294831964">#6</a>) by Sumeet Darade
		posted on 10/12/2015 at 4:49 AM
		</div>
		<div class="comment_text"><p>ya... i came accross that one ..!! but never got any exampe/tut related to that one !! Since i am  a newbie to angular... those docs are pretty much confusing for me ! i have too may doubts on that ! do you know any link to example/tut ? that would help me really !! thanks for your response</p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2484771692">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2484771692">8</a> (In reply to <a href="#c_2484428089">#0</a>) by Raymond Camden
		posted on 1/29/2016 at 1:29 PM
		</div>
		<div class="comment_text"><p>You would modify the code to take a list of targets (as an array), and just check the current position against every item in the list.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2532512269">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_eSWaOjoPR3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2532512269">9</a> by Diego Herrera
		posted on 2/24/2016 at 1:06 PM
		</div>
		<div class="comment_text"><p>Hello Raymond, Great work, thanks for the code, I have a question about the spend of mobile data in this app? is really viable use this app with mobile data?<br>Regards<br>Thanks<br>(Sorry for my english)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2532686647">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2532686647">10</a> (In reply to <a href="#c_2532512269">#9</a>) by Raymond Camden
		posted on 2/24/2016 at 3:00 PM
		</div>
		<div class="comment_text"><p>Is it viable depends on a lot of things. :) Where do most of your app users live and what is their network connectivity like? How important is this feature? Etc. You can also tweak how often it pings.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2532727248">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_eSWaOjoPR3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2532727248">11</a> (In reply to <a href="#c_2532686647">#10</a>) by Diego Herrera
		posted on 2/24/2016 at 3:22 PM
		</div>
		<div class="comment_text"><p>Thanks for the response Raymond, this feature is very important in the app, the users use network connectivity 4G mobile data. I need that users in my app can receive notifications when they are near to different sites in the street, accordingly, the app need execute the script all day</p></div>
	</div>
</div>
		
<div class="comment" id="c_2532730242">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2532730242">12</a> (In reply to <a href="#c_2532727248">#11</a>) by Raymond Camden
		posted on 2/24/2016 at 3:24 PM
		</div>
		<div class="comment_text"><p>Remember you can use the Connection plugin to see if they are connected and estimate how well they are connected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2566020920">
	<div>
		<img src="https://disqus.com/api/users/avatars/JosePaez.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2566020920">13</a> (In reply to <a href="#c_2302434488">#7</a>) by JosePaez
		posted on 3/12/2016 at 6:31 PM
		</div>
		<div class="comment_text"><p>Hi, could you share what is that plugin you found? thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2574296659">
	<div>
		<img src="https://disqus.com/api/users/avatars/francescoprochilo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2574296659">14</a> by jonsey
		posted on 3/17/2016 at 8:25 AM
		</div>
		<div class="comment_text"><p>Hi,there is a method to detect the gps status activation?Like a listener?Thanks :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2574550802">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2574550802">15</a> (In reply to <a href="#c_2574296659">#14</a>) by Raymond Camden
		posted on 3/17/2016 at 1:07 PM
		</div>
		<div class="comment_text"><p>You mean being enabled/disabled?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2574562191">
	<div>
		<img src="https://disqus.com/api/users/avatars/francescoprochilo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2574562191">16</a> (In reply to <a href="#c_2574550802">#15</a>) by jonsey
		posted on 3/17/2016 at 1:15 PM
		</div>
		<div class="comment_text"><p>yes...i want to disable some buttons if the status of gps is enabled or disabled on the iphone/android phone.So i suppouse i need to have a listener/watcher enabled..</p></div>
	</div>
</div>
		
<div class="comment" id="c_2574728435">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2574728435">17</a> (In reply to <a href="#c_2574562191">#16</a>) by Raymond Camden
		posted on 3/17/2016 at 3:02 PM
		</div>
		<div class="comment_text"><p>So I googled for 'cordova gps enabled' and this first result looks good to me: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F13006454%2Fuse-phonegap-to-check-if-gps-is-enabled%3A6tJQDVxhHkyVSQrw0j5jF0ZRI7E&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/13006454/use-phonegap-to-check-if-gps-is-enabled">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2574768505">
	<div>
		<img src="https://disqus.com/api/users/avatars/francescoprochilo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2574768505">18</a> (In reply to <a href="#c_2574728435">#17</a>) by jonsey
		posted on 3/17/2016 at 3:26 PM
		</div>
		<div class="comment_text"><p>thanks for the link, but i don't want to call a method to have an answer, i want a listener always "listening" for a change status of gps (the setting switch i mean!) .I don't want to make a polling to check periodically if is enabled or not... :/</p></div>
	</div>
</div>
		
<div class="comment" id="c_2574772709">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2574772709">19</a> (In reply to <a href="#c_2574768505">#18</a>) by Raymond Camden
		posted on 3/17/2016 at 3:28 PM
		</div>
		<div class="comment_text"><p>Then you would need a plugin that check device settings. I'd try searching for that. I'm not aware of one, but it may exist.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2574832773">
	<div>
		<img src="https://disqus.com/api/users/avatars/francescoprochilo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2574832773">20</a> (In reply to <a href="#c_2574772709">#19</a>) by jonsey
		posted on 3/17/2016 at 4:02 PM
		</div>
		<div class="comment_text"><p>thank you sir :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2583200036">
	<div>
		<img src="https://disqus.com/api/users/avatars/francescoprochilo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2583200036">21</a> (In reply to <a href="#c_2574832773">#20</a>) by jonsey
		posted on 3/22/2016 at 3:08 PM
		</div>
		<div class="comment_text"><p>at the end i decide to check if the gps get an error on .error function, and callback this to disable the action. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2625041857">
	<div>
		<img src="https://disqus.com/api/users/avatars/matthewpill.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2625041857">22</a> (In reply to <a href="#c_2484900633">#0</a>) by Matthew Pill
		posted on 4/15/2016 at 12:34 PM
		</div>
		<div class="comment_text"><p>Hi Dhameer, did you manage to fins a solution for this? The function is running fine for me with one target, but having issues getting it to loop through a list of targets!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2625090392">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2625090392">23</a> (In reply to <a href="#c_2625046102">#0</a>) by Raymond Camden
		posted on 4/15/2016 at 1:11 PM
		</div>
		<div class="comment_text"><p>I'll try to make a demo of this today since multiple people want it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2625453630">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2625453630">24</a> (In reply to <a href="#c_2625167022">#0</a>) by Raymond Camden
		posted on 4/15/2016 at 5:01 PM
		</div>
		<div class="comment_text"><p>Updated demo: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfjedimaster%2FCordova-Examples%2Ftree%2Fmaster%2Fgeoalert2%3Ad-w8MXevSJOUwjK99e8CChx2cUc&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfjedimaster/Cordova-Examples/tree/master/geoalert2">https://github.com/cfjedima...</a></p><p>Ok, so the changes aren't too big, but it is important you understand them. The Service I built used to take 3 args: lat, long, and a callback. Now it takes an array and a callback, where the array is an array of targets. What a "target" means is a bit loose. In my demo, it is: lat, long, label. The label will be important in a bit.</p><p>I updated app.js to use an array:</p><p>    var targetList = [];<br>    //first target (Louisiana)<br>    targetList.push({lat:30.224090, long: -92.019843, label:"Lafayette"});<br>    //second target (Paris)<br>    targetList.push({lat: 48.87146,long: 2.355, label:"Paris"});</p><p>This gets passed to the service:</p><p>    GeoAlert.begin(targetList, function(matchedTargets) {</p><p>Notice my callback is expecting an argument, matchedTargets, that represents an array of 'close' targets. (It is possible you are close to 2+). I could have fired the callback for each close target, but this seemed to make more sense.</p><p>How you *use* this result is a bit undefined. You could print the labels so the user knows. Or you could include other data in the target like some ID value or something else.</p><p>But the meat of the work is done.</p><p>If this helps, please visit my Amazon Wishlist. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2626717388">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2626717388">25</a> (In reply to <a href="#c_2626711545">#0</a>) by Raymond Camden
		posted on 4/16/2016 at 1:26 PM
		</div>
		<div class="comment_text"><p>Thanks - would love some BBQ down there. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2692579411">
	<div>
		<img src="https://disqus.com/api/users/avatars/sabareeshk.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2692579411">26</a> (In reply to <a href="#c_2032129712">#2</a>) by sabareeshk
		posted on 5/24/2016 at 11:15 AM
		</div>
		<div class="comment_text"><p>i used watchPosition instead of getCurrentPosition..</p></div>
	</div>
</div>
		
<div class="comment" id="c_2711028993">
	<div>
		<img src="https://disqus.com/api/users/avatars/andpr.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2711028993">27</a> (In reply to <a href="#c_2566020920">#13</a>) by andpr
		posted on 6/3/2016 at 10:03 PM
		</div>
		<div class="comment_text"><p>It may be this one: <br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcowbell%2Fcordova-plugin-geofence%3AUnPmm-Asf3_yP6377k_AplYG2dw&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cowbell/cordova-plugin-geofence">https://github.com/cowbell/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2883215561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2883215561">28</a> by Gautam Menariya
		posted on 9/8/2016 at 8:22 PM
		</div>
		<div class="comment_text"><p>I have a project with following requirements</p><p>A. SHOULD ASSIGN A ROUTE FOR EMPLOYEE<br>B. SHOULD TRACK IF EMPLOYEE IS FOLLOWING THE SAME ROUTE AS SPECIFIED ELSE AN ALERT will be send to the admin</p><p>I can assign route to a employee. And if app is open, then i can also check that user follow same path. But if i close the app, i can do nothing.</p><p>So i want to know that after closing my app, is there any way that we can track same? because push notifications works after app is closed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2883333104">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2883333104">29</a> (In reply to <a href="#c_2883215561">#28</a>) by Raymond Camden
		posted on 9/8/2016 at 9:37 PM
		</div>
		<div class="comment_text"><p>There is a plugin for background work, but I'm not sure if GPS works with it. As it drains the battery, I'd be surprised if it did.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2944972150">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_er8i4mYgzY.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2944972150">30</a> by Caio Ramos
		posted on 10/11/2016 at 4:35 PM
		</div>
		<div class="comment_text"><p>Hi Raymond! hugs from Brasil!<br>I'm a very fan of ur work!<br>I want to know how i get the cellphone direction in relative of gps, i found in geolation plugin that i can get heading that is a direction of travel, but i just want take direction when i stop.<br>I try to do a app like planet finder but for find radio antennas that have static positions.</p><p>Nice work and thanks.</p><p>Srry for my english</p></div>
	</div>
</div>
		
<div class="comment" id="c_2945393108">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2945393108">31</a> (In reply to <a href="#c_2944972150">#30</a>) by Raymond Camden
		posted on 10/11/2016 at 8:02 PM
		</div>
		<div class="comment_text"><p>Hmm - do you mean - you only want to check the location when the user isn't moving? Not sure you can do that. You can compare the current location to a previous one, and if it is the same, or very close, assume they are 'still', but your getting the location anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2977238515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2977238515">32</a> (In reply to <a href="#c_2945393108">#31</a>) by Vlad
		posted on 10/31/2016 at 8:44 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I think what Caio Ramos what's to know is: When I find the location of a user, is it possible to know which direction they are facing? It seems he has found a plugin which will tell him which direction the user is travelling in, but if they are staying still (and hence not "travelling") this plugin will not work. Presumably the plugin takes two locations in quick succession to determine the direction of travel, which would explain why it won't work if the user is standing still.</p><p>I hope this helps clarify things,</p><p>Vlad</p></div>
	</div>
</div>
		
<div class="comment" id="c_2977489543">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2977489543">33</a> (In reply to <a href="#c_2977238515">#32</a>) by Raymond Camden
		posted on 10/31/2016 at 1:11 PM
		</div>
		<div class="comment_text"><p>The Geolocation result includes heading - not just location. Did yall try that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3019744841">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_3OMlk43Nx7.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3019744841">34</a> by Nabil
		posted on 11/25/2016 at 3:23 PM
		</div>
		<div class="comment_text"><p>Raymond, can i use it for Unity?   IOs and Android?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3019759787">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3019759787">35</a> (In reply to <a href="#c_3019744841">#34</a>) by Raymond Camden
		posted on 11/25/2016 at 3:36 PM
		</div>
		<div class="comment_text"><p>This code is for a hybrid mobile app built with Ionic - it is not for Unity. I've never used Unity so I can't comment on it at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3090767999">
	<div>
		<img src="https://disqus.com/api/users/avatars/sravanreddysunkam.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3090767999">36</a> by SRAVANREDDY SUNKAM
		posted on 1/9/2017 at 4:42 PM
		</div>
		<div class="comment_text"><p>hi raymond will you please give tutorial and sample project on ionic user tracking application please....</p></div>
	</div>
</div>
		
<div class="comment" id="c_3090768912">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3090768912">37</a> (In reply to <a href="#c_3090767999">#36</a>) by Raymond Camden
		posted on 1/9/2017 at 4:43 PM
		</div>
		<div class="comment_text"><p>Sorry what?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3105515006">
	<div>
		<img src="https://disqus.com/api/users/avatars/shivangpokar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3105515006">38</a> by Shivang Pokar
		posted on 1/18/2017 at 8:10 AM
		</div>
		<div class="comment_text"><p>it this work on background app in ios and android ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3106038990">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3106038990">39</a> (In reply to <a href="#c_3105515006">#38</a>) by Raymond Camden
		posted on 1/18/2017 at 4:12 PM
		</div>
		<div class="comment_text"><p>There is a plugin that supports doing stuff in the background. You may need to use that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3127849625">
	<div>
		<img src="https://disqus.com/api/users/avatars/shivangpokar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3127849625">40</a> (In reply to <a href="#c_3106038990">#39</a>) by Shivang Pokar
		posted on 1/30/2017 at 10:50 AM
		</div>
		<div class="comment_text"><p>there have no any proper plugin for background app can you suggest me background mode plugin</p></div>
	</div>
</div>
		
<div class="comment" id="c_3127934513">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3127934513">41</a> (In reply to <a href="#c_3127849625">#40</a>) by Raymond Camden
		posted on 1/30/2017 at 12:27 PM
		</div>
		<div class="comment_text"><p>I'm not sure what you are saying here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3127937588">
	<div>
		<img src="https://disqus.com/api/users/avatars/shivangpokar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3127937588">42</a> (In reply to <a href="#c_3127934513">#41</a>) by Shivang Pokar
		posted on 1/30/2017 at 12:30 PM
		</div>
		<div class="comment_text"><p>can you suggest me a background mode plugin for ios in ionic</p></div>
	</div>
</div>
		
<div class="comment" id="c_3127946444">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3127946444">43</a> (In reply to <a href="#c_3127937588">#42</a>) by Raymond Camden
		posted on 1/30/2017 at 12:39 PM
		</div>
		<div class="comment_text"><p>While I'm aware of a background plugin, I haven't had a chance to use it myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3127952653">
	<div>
		<img src="https://disqus.com/api/users/avatars/shivangpokar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3127952653">44</a> (In reply to <a href="#c_3127946444">#43</a>) by Shivang Pokar
		posted on 1/30/2017 at 12:44 PM
		</div>
		<div class="comment_text"><p>Thank you for helping me out about this query.!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3319235088">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_QEHcx2RgcH.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3319235088">45</a> by Alisha K
		posted on 5/22/2017 at 6:26 PM
		</div>
		<div class="comment_text"><p>Hello! I am working on the same app. For now.. Can you help me send the full access to the app, you've made? I mean I wanna use the same code and infuse it into another app base made by me. How to go about.? </p></div>
	</div>
</div>
		
<div class="comment" id="c_3319366852">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3319366852">46</a> (In reply to <a href="#c_3319235088">#45</a>) by Raymond Camden
		posted on 5/22/2017 at 7:45 PM
		</div>
		<div class="comment_text"><p>I shared the GitHub URL - you can access the full code there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3319372538">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_QEHcx2RgcH.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3319372538">47</a> (In reply to <a href="#c_3319366852">#46</a>) by Alisha K
		posted on 5/22/2017 at 7:49 PM
		</div>
		<div class="comment_text"><p>Alright! Can this be used in ionic 2?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3319384421">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3319384421">48</a> (In reply to <a href="#c_3319372538">#47</a>) by Raymond Camden
		posted on 5/22/2017 at 7:57 PM
		</div>
		<div class="comment_text"><p>You would need to modify it. You couldn't just copy and paste.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3319443875">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_QEHcx2RgcH.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3319443875">49</a> (In reply to <a href="#c_3319384421">#48</a>) by Alisha K
		posted on 5/22/2017 at 8:35 PM
		</div>
		<div class="comment_text"><p>If the source code is directly copied from Github to ionic, Will I get an fully functional app sir? </p></div>
	</div>
</div>
		
<div class="comment" id="c_3319496661">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3319496661">50</a> (In reply to <a href="#c_3319443875">#49</a>) by Raymond Camden
		posted on 5/22/2017 at 9:06 PM
		</div>
		<div class="comment_text"><p>No - you would need to generate an Ionic 1 app and then copy in my www folder and any plugins I mentioned above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3341984788">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_edcrRxbAY7.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3341984788">51</a> by Mauro
		posted on 6/5/2017 at 12:45 PM
		</div>
		<div class="comment_text"><p>Hi, is there some updates for Ionic 3 ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3341997666">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3341997666">52</a> (In reply to <a href="#c_3341984788">#51</a>) by Raymond Camden
		posted on 6/5/2017 at 12:55 PM
		</div>
		<div class="comment_text"><p>Can you be more specific?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3344308377">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_edcrRxbAY7.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3344308377">53</a> (In reply to <a href="#c_3341997666">#52</a>) by Mauro
		posted on 6/6/2017 at 12:41 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, reading below on thread i seen that this your code need modifications for Ionic 3, is it true ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3344372709">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3344372709">54</a> (In reply to <a href="#c_3344308377">#53</a>) by Raymond Camden
		posted on 6/6/2017 at 1:25 PM
		</div>
		<div class="comment_text"><p>This code was for Ionic 1, yes. It's over two years old. The general principles would still work of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3403183242">
	<div>
		<img src="https://disqus.com/api/users/avatars/yushinkalambai.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3403183242">55</a> by yushin kalambai
		posted on 7/6/2017 at 4:50 PM
		</div>
		<div class="comment_text"><p>hey raymond, i wanted to ask if you could help in providing the code for looping through co-ordinates in a database, unlike the hard code target you put up?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3403239950">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3403239950">56</a> (In reply to <a href="#c_3403183242">#55</a>) by Raymond Camden
		posted on 7/6/2017 at 5:23 PM
		</div>
		<div class="comment_text"><p>No, but in general the process would be:</p><p>setup the db and data (very dependent on what db system you have, NoSQL or not)</p><p>setup an app server to sit between the data and the web - something like Node, PHP, ColdFusion, etc, that can read the data and export JSON.</p><p>On the front end - use jQuery or regular old JS and just make an XHR request to it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3460187485">
	<div>
		<img src="https://disqus.com/api/users/avatars/snehalp77.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3460187485">57</a> by snehalp77
		posted on 8/9/2017 at 10:08 PM
		</div>
		<div class="comment_text"><p>Hi Raymond cannot thank you more for putting down this blog on my query, have one question though, how close can the tracking be done in meters using the same plugin? i read there is a enableHighaccuracy parameter, but unable to find out the accuracy in meters, can it track down to say upto 5 or 10 meters?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3460216506">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3460216506">58</a> (In reply to <a href="#c_3460187485">#57</a>) by Raymond Camden
		posted on 8/9/2017 at 10:30 PM
		</div>
		<div class="comment_text"><p>I don't believe you can get that precise with commercial GPS - that level is just for military as far as I know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3461419351">
	<div>
		<img src="https://disqus.com/api/users/avatars/snehalp77.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3461419351">59</a> (In reply to <a href="#c_3460216506">#58</a>) by snehalp77
		posted on 8/10/2017 at 5:09 PM
		</div>
		<div class="comment_text"><p>Thanks, any guess then how close can one get then ?200 meters?500 meters?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3461440268">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3461440268">60</a> (In reply to <a href="#c_3461419351">#59</a>) by Raymond Camden
		posted on 8/10/2017 at 5:23 PM
		</div>
		<div class="comment_text"><p>Not sure - best I can suggest is Googling.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3489391974">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_pFgyLf9xCT.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3489391974">61</a> by Gurjit
		posted on 8/27/2017 at 4:32 PM
		</div>
		<div class="comment_text"><p>As we are using here, getCurrentGeolocation method which does not pic the exact lat,lng always I meant to say result with low accuracy e.g I am under fence of target but the picked lat lang are not accurate. How over come this problem? Already using enableHighAccuracy true but still fails some time and shows location far from target even when my device was on target position. Please suggest. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_3490587498">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3490587498">62</a> (In reply to <a href="#c_3489391974">#61</a>) by Raymond Camden
		posted on 8/28/2017 at 1:06 PM
		</div>
		<div class="comment_text"><p>Not sure what to suggest. Honestly I don't think it is meant for *super* precise locations.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3845667225">
	<div>
		<img src="https://disqus.com/api/users/avatars/bikashmahata.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3845667225">63</a> by Bikash Mahata
		posted on 4/9/2018 at 2:04 AM
		</div>
		<div class="comment_text"><p>Hey. Nice to read this. Does it possible to start tacking in between a specifed time frame. I.e i want to start it in between 9am to 6 pm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3846193918">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3846193918">64</a> (In reply to <a href="#c_3845667225">#63</a>) by Raymond Camden
		posted on 4/9/2018 at 1:19 PM
		</div>
		<div class="comment_text"><p>Well one simple way would be to make the hb function simply do nothing if the time isn't right.</p></div>
	</div>
</div>
		