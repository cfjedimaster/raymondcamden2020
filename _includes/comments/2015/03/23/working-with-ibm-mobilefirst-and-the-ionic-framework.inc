
<div class="comment" id="c_1937929418">
	<div>
		<img src="https://disqus.com/api/users/avatars/karlbishop.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1937929418">1</a> by Karl Bishop
		posted on 3/31/2015 at 1:58 PM
		</div>
		<div class="comment_text"><p>Nice intro!  Hopefully we'll make working with MobileFirst and other Cordova environments much easier down the road.  Looking forward to more blog entries of this sort!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1938138057">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1938138057">2</a> (In reply to <a href="#c_1937929418">#1</a>) by Raymond Camden
		posted on 3/31/2015 at 3:54 PM
		</div>
		<div class="comment_text"><p>Will be demonstrating the WL Logging stuff later today (probably in about 3 hours ish).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1976575390">
	<div>
		<img src="https://disqus.com/api/users/avatars/karlbishop.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1976575390">3</a> by Karl Bishop
		posted on 4/20/2015 at 12:28 AM
		</div>
		<div class="comment_text"><p>Ray, In the sample commands you show -- "cordova start --no-cordova ioniccode blank".  It should be "ionic start ..."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1976576381">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1976576381">4</a> (In reply to <a href="#c_1976575390">#3</a>) by Raymond Camden
		posted on 4/20/2015 at 12:29 AM
		</div>
		<div class="comment_text"><p>Oops. That was a test. You passed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1976577460">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1976577460">5</a> (In reply to <a href="#c_1976575390">#3</a>) by Raymond Camden
		posted on 4/20/2015 at 12:30 AM
		</div>
		<div class="comment_text"><p>Fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2026768494">
	<div>
		<img src="https://disqus.com/api/users/avatars/rodolphocaires.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2026768494">6</a> by Rodolpho Caires
		posted on 5/15/2015 at 2:45 PM
		</div>
		<div class="comment_text"><p>Nice approach to this. I did a little different from what you did. I simply bootstrapped Angular on my wlCommomIni function inside main.js. With this you don't need to manually add the classes for the environments. Here's the code:</p><p>function wlCommonInit() {<br>    angular.element(document).ready(function() {<br>        angular.bootstrap(document, ['myApp']);<br>    });<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_2027354458">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2027354458">7</a> (In reply to <a href="#c_2026768494">#6</a>) by Raymond Camden
		posted on 5/15/2015 at 5:51 PM
		</div>
		<div class="comment_text"><p>Yeah, I think that's how Carlos handles it too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2136529215">
	<div>
		<img src="https://disqus.com/api/users/avatars/derek_hannah.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2136529215">8</a> by Derek Hannah
		posted on 7/14/2015 at 8:08 PM
		</div>
		<div class="comment_text"><p>so how, and should, I you use the gulpfile, i want it to do automated testing? how do I install things with bower?, these things are in the ioniccode folder</p></div>
	</div>
</div>
		
<div class="comment" id="c_2136640521">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2136640521">9</a> (In reply to <a href="#c_2136529215">#8</a>) by Raymond Camden
		posted on 7/14/2015 at 9:12 PM
		</div>
		<div class="comment_text"><p>Bower still works to install JS libraries. The Gulp file - I believe - handles SASS? If so, that still works. You just need to make sure you bd (build / deploy) when you are done editing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2136658151">
	<div>
		<img src="https://disqus.com/api/users/avatars/derek_hannah.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2136658151">10</a> (In reply to <a href="#c_2136640521">#9</a>) by Derek Hannah
		posted on 7/14/2015 at 9:22 PM
		</div>
		<div class="comment_text"><p>But wont bower and gulp both run on the files in the ionic code folder? Not on the files im developing with in the common folder i created</p></div>
	</div>
</div>
		
<div class="comment" id="c_2136663490">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2136663490">11</a> (In reply to <a href="#c_2136658151">#10</a>) by Raymond Camden
		posted on 7/14/2015 at 9:26 PM
		</div>
		<div class="comment_text"><p>bower should work anywhere afaik. I don't use it myself. The gulp script I don't know about it. Did you try it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2196550506">
	<div>
		<img src="https://disqus.com/api/users/avatars/cesarbotti.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2196550506">12</a> by Cesar Botti
		posted on 8/16/2015 at 6:12 AM
		</div>
		<div class="comment_text"><p>Thanks! Nice post! It worked also for MFP 7.1. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2196743468">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2196743468">13</a> (In reply to <a href="#c_2196550506">#12</a>) by Raymond Camden
		posted on 8/16/2015 at 11:27 AM
		</div>
		<div class="comment_text"><p>It will work - but 7.1 makes things easier. I should have a post on this Monday or Wednesday.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2502166191">
	<div>
		<img src="https://disqus.com/api/users/avatars/mounikarayankula.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2502166191">14</a> by mounika Rayankula
		posted on 2/8/2016 at 8:51 AM
		</div>
		<div class="comment_text"><p>I am using angular-js and ionic framework to built my project in MFP , but i am unable to add cordova-plugins into it ( I cannot add email plugins ) , kindly please help me with these issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2502558422">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2502558422">15</a> (In reply to <a href="#c_2502166191">#14</a>) by Raymond Camden
		posted on 2/8/2016 at 3:17 PM
		</div>
		<div class="comment_text"><p>Share the command you used to add the plugin and the error you got.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2505781135">
	<div>
		<img src="https://disqus.com/api/users/avatars/mounikarayankula.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2505781135">16</a> (In reply to <a href="#c_2502558422">#15</a>) by mounika Rayankula
		posted on 2/10/2016 at 9:11 AM
		</div>
		<div class="comment_text"><p><a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.ibm.com%2Fmobilefirstplatform%2Fdocumentation%2Fgetting-started-7-1%2Ffoundation%2Fhello-world%2Fintegrating-mfpf-sdk-in-cordova-applications%2F%23managingCordovaPlugins%3AArMuMDs8BlhNBZNJXiHxm0vLupU&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.ibm.com/mobilefirstplatform/documentation/getting-started-7-1/foundation/hello-world/integrating-mfpf-sdk-in-cordova-applications/#managingCordovaPlugins">https://developer.ibm.com/m...</a>     i followed these link but i could not add plugins to my app</p></div>
	</div>
</div>
		
<div class="comment" id="c_2505969681">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2505969681">17</a> (In reply to <a href="#c_2505781135">#16</a>) by Raymond Camden
		posted on 2/10/2016 at 12:52 PM
		</div>
		<div class="comment_text"><p>So when you did the add, what did you see? You said it isn't working, but did you get an error? If you type "cordova plugins ls", what does it report?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2594813034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2594813034">18</a> by Ali Sameer mans
		posted on 3/29/2016 at 2:02 PM
		</div>
		<div class="comment_text"><p>Ionic2 ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2594937677">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2594937677">19</a> (In reply to <a href="#c_2594813034">#18</a>) by Raymond Camden
		posted on 3/29/2016 at 3:09 PM
		</div>
		<div class="comment_text"><p>I've only begun to touch Ionic2 so I've not done anything with it and MFP.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2669623498">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_RPvxKCV4Mw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2669623498">20</a> by mohana priya
		posted on 5/11/2016 at 5:18 AM
		</div>
		<div class="comment_text"><p>Hi , i am trying to integrate ionic app with mobile first platform 8.0.0 beta version. In there i am not able get the real device information in the server console. Kindly pls help me with these issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2670053410">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2670053410">21</a> (In reply to <a href="#c_2669623498">#20</a>) by Raymond Camden
		posted on 5/11/2016 at 1:29 PM
		</div>
		<div class="comment_text"><p>I haven't used MF 8 yet and I'm no longer on the MobileFirst dev rel team. I'll ping my buddy to try to help out here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2671393905">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_RPvxKCV4Mw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2671393905">22</a> (In reply to <a href="#c_2670053410">#21</a>) by mohana priya
		posted on 5/12/2016 at 5:22 AM
		</div>
		<div class="comment_text"><p>ok thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_2673162569">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_RPvxKCV4Mw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2673162569">23</a> (In reply to <a href="#c_2670053410">#21</a>) by mohana priya
		posted on 5/13/2016 at 4:38 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, did u get any idea regarding MF 8</p></div>
	</div>
</div>
		
<div class="comment" id="c_2673667285">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2673667285">24</a> (In reply to <a href="#c_2673162569">#23</a>) by Raymond Camden
		posted on 5/13/2016 at 1:50 PM
		</div>
		<div class="comment_text"><p>I pinged em - give em time. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2675185369">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_R32vzZXYuB.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2675185369">25</a> (In reply to <a href="#c_2673667285">#24</a>) by Carlos Santana
		posted on 5/14/2016 at 10:55 AM
		</div>
		<div class="comment_text"><p>In mfp 8 there is a new CLI mfpdev and a new console to register apps <br>Check out this video demo I did with ionic and mfp8 see if it can help <a href="https://disq.us/url?url=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3DDlxZYxXszIw%3AXOReY166vRp-m92OdyV3NU5XHoY&amp;cuid=3321886" rel="nofollow noopener" title="https://www.youtube.com/watch?v=DlxZYxXszIw">https://www.youtube.com/wat...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2681738023">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_RPvxKCV4Mw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2681738023">26</a> (In reply to <a href="#c_2673667285">#24</a>) by mohana priya
		posted on 5/18/2016 at 11:10 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>   Do you have any idea regarding mobile first 7.1 version connectivity with Ionic App?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2681779519">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2681779519">27</a> (In reply to <a href="#c_2681738023">#26</a>) by Raymond Camden
		posted on 5/18/2016 at 11:40 AM
		</div>
		<div class="comment_text"><p>"connectivity"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2681785522">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_RPvxKCV4Mw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2681785522">28</a> (In reply to <a href="#c_2681779519">#27</a>) by mohana priya
		posted on 5/18/2016 at 11:41 AM
		</div>
		<div class="comment_text"><p>yes</p></div>
	</div>
</div>
		
<div class="comment" id="c_2681805120">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2681805120">29</a> (In reply to <a href="#c_2681785522">#28</a>) by Raymond Camden
		posted on 5/18/2016 at 11:44 AM
		</div>
		<div class="comment_text"><p>I don't understand what you are asking though. If you just mean MF + Ionic, that's what this entire post is about.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2681862941">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_RPvxKCV4Mw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2681862941">30</a> (In reply to <a href="#c_2681805120">#29</a>) by mohana priya
		posted on 5/18/2016 at 12:07 PM
		</div>
		<div class="comment_text"><p>Exactly...I am using mobile first 7.1V. My Sample,<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FSmohanapriya%2FIonic-with-Mobile-first-7.1-version%2Fblob%2Fmaster%2Fwww%2Fjs%2Fapp.js%3Ai44o5dpB1JakOJN3suf6e8CHvtQ&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/Smohanapriya/Ionic-with-Mobile-first-7.1-version/blob/master/www/js/app.js">https://github.com/Smohanap...</a></p><p>Here i am using  WL.client.connect() method for connect with the server. In my app , i am not able to get the result either success/failure using this method.</p><p>Can you give me your suggestion for this issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2681884174">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2681884174">31</a> (In reply to <a href="#c_2681862941">#30</a>) by Raymond Camden
		posted on 5/18/2016 at 12:12 PM
		</div>
		<div class="comment_text"><p>Do you see an error in your dev tools console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2683402451">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_RPvxKCV4Mw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2683402451">32</a> (In reply to <a href="#c_2681884174">#31</a>) by mohana priya
		posted on 5/19/2016 at 4:32 AM
		</div>
		<div class="comment_text"><p>Hi,<br>  I  before i was run my app using Device. I am not able to see any error in my console. <br>Later, I have tried using the command "mfp preview" in console.In there i am getting the following error,<br>   Error: error code: 304<br>   Error: There was an error building the application.<br>   Error: : Error building .wlapp file<br>   Error details: VError: Error building wlapp file.<br>   VError: Error: <a href="http://disq.us/url?url=http%3A%2F%2FDeployment.data%3ABD6PuXtQyqKYgax6PeSgeuxj5dE&amp;cuid=3321886" rel="nofollow noopener" title="Deployment.data">Deployment.data</a> contents were null.<br>   Error: Push has failed</p></div>
	</div>
</div>
		
<div class="comment" id="c_2683611249">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2683611249">33</a> (In reply to <a href="#c_2683402451">#32</a>) by Raymond Camden
		posted on 5/19/2016 at 9:22 AM
		</div>
		<div class="comment_text"><p>Yeah - sorry - not sure what that could be. <a data-dsq-mention="disqus_r32vzzxyub:disqus" href="https://disqus.com/by/disqus_R32vzZXYuB/" rel="nofollow noopener" title="https://disqus.com/by/disqus_R32vzZXYuB/">Carlos Santana</a> - any idea?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2683894281">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_RPvxKCV4Mw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2683894281">34</a> (In reply to <a href="#c_2683611249">#33</a>) by mohana priya
		posted on 5/19/2016 at 11:37 AM
		</div>
		<div class="comment_text"><p>ok.Can you tell the configuration of  mobile first 7.1,<br>1) cordova<br>2)android<br>3)node</p></div>
	</div>
</div>
		
<div class="comment" id="c_2683983294">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_RPvxKCV4Mw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2683983294">35</a> (In reply to <a href="#c_2683611249">#33</a>) by mohana priya
		posted on 5/19/2016 at 12:12 PM
		</div>
		<div class="comment_text"><p>ok.can you tell the requirement for mobile first 7.1 version for,<br>  Android<br>  cordova</p></div>
	</div>
</div>
		
<div class="comment" id="c_2685057959">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_OsNOeTgvrv.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2685057959">36</a> by Ali
		posted on 5/19/2016 at 9:44 PM
		</div>
		<div class="comment_text"><p>Hi, i have a question. I set everything up like in your article. I am trying to invoke now a procedure inside a Angular-Controller with the command WL.Client.invokeProcedure(...). But I get the following error: ReferenceError: WL is not defined. <br>Can you please help me solving this issue. <br>Best regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_2685869158">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2685869158">37</a> (In reply to <a href="#c_2683894281">#34</a>) by Raymond Camden
		posted on 5/20/2016 at 10:27 AM
		</div>
		<div class="comment_text"><p>If you mean setup, then I'd suggest reading the docs. If you don't mean that... then I don't know what you mean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2685874907">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_RPvxKCV4Mw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2685874907">38</a> (In reply to <a href="#c_2685869158">#37</a>) by mohana priya
		posted on 5/20/2016 at 10:33 AM
		</div>
		<div class="comment_text"><p>yes regarding setup only</p></div>
	</div>
</div>
		
<div class="comment" id="c_2685880949">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2685880949">39</a> (In reply to <a href="#c_2685874907">#38</a>) by Raymond Camden
		posted on 5/20/2016 at 10:40 AM
		</div>
		<div class="comment_text"><p>Then I'd suggest doing what I mentioned - following the documentation first and then reporting back on what went wrong. I don't work with MF anymore so I may not be the best person to help. You can also try StackOverflow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2694094905">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_RPvxKCV4Mw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2694094905">40</a> by mohana priya
		posted on 5/25/2016 at 5:18 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, I have created my ionic app &amp; i am trying to integrate it with mobile first 7.1version. can you tell me how to add mfp plugin in 7.1version?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2694475254">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2694475254">41</a> (In reply to <a href="#c_2694094905">#40</a>) by Raymond Camden
		posted on 5/25/2016 at 12:41 PM
		</div>
		<div class="comment_text"><p>Did you try adding it via the CLI?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2723305865">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_NNMWguHraH.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2723305865">42</a> by Durga Prasad
		posted on 6/10/2016 at 1:25 PM
		</div>
		<div class="comment_text"><p>Hi Raymod, Thanks for the wonderful intro to Ionic with Worklight. <br>Sample was deployed successfully but in preview its showing an error of  "ionic.bundle.js:13440 Uncaught Error: [$injector:modulerr] Failed to instantiate module ng due to:<br>TypeError: Cannot set property 'aHrefSanitizationWhitelist' of null<br>    at $$SanitizeUriProvider " <br>I am not sure whether it is related to angular or worklight. I am using worklight 7.1 and ionic  2.0. Please help me on this.<br>I tried with altering the loading sequence of worklight and ionic but it did not worked.<br>with Ionic version 1.7.15 too I am facing the same issue. Please help me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2723962308">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2723962308">43</a> (In reply to <a href="#c_2723305865">#42</a>) by Raymond Camden
		posted on 6/10/2016 at 7:55 PM
		</div>
		<div class="comment_text"><p>Sorry - I haven't tried Ionic 2 with MFP. I'm no longer working with MF, but I'll ask <a data-dsq-mention="disqus_r32vzzxyub:disqus" href="https://disqus.com/by/disqus_R32vzZXYuB/" rel="nofollow noopener" title="https://disqus.com/by/disqus_R32vzZXYuB/">Carlos Santana</a> to see if he can help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2724481509">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_NNMWguHraH.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2724481509">44</a> (In reply to <a href="#c_2723962308">#43</a>) by Durga Prasad
		posted on 6/11/2016 at 3:14 AM
		</div>
		<div class="comment_text"><p>Even with Ionic 1.7 I am having the same error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2724892129">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_R32vzZXYuB.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2724892129">45</a> (In reply to <a href="#c_2723962308">#43</a>) by Carlos Santana
		posted on 6/11/2016 at 12:45 PM
		</div>
		<div class="comment_text"><p>I heard my name :-) or are you talking about the guitarist?<br></p></div>
	</div>
</div>
		
<div class="comment" id="c_2724894078">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_R32vzZXYuB.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2724894078">46</a> (In reply to <a href="#c_2723305865">#42</a>) by Carlos Santana
		posted on 6/11/2016 at 12:47 PM
		</div>
		<div class="comment_text"><p>Hi Durga<br>   From the error messages it smells like the error in coming from angular. <br>I recommend starting with an empty app start making changes to see where the problem is.</p><p>I highly recommend to take a look at the MF Dev center we have labs with ionic samples and videos that take you step by step on how to create your app. <a href="https://disq.us/url?url=https%3A%2F%2Fmobilefirstplatform.ibmcloud.com%2Flabs%2F%3A0rcq1IFdQ2IteuwJSTns7vUxtEs&amp;cuid=3321886" rel="nofollow noopener" title="https://mobilefirstplatform.ibmcloud.com/labs/">https://mobilefirstplatform...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2724901244">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2724901244">47</a> (In reply to <a href="#c_2724892129">#45</a>) by Raymond Camden
		posted on 6/11/2016 at 12:54 PM
		</div>
		<div class="comment_text"><p>Either will do. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2725191851">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_NNMWguHraH.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2725191851">48</a> (In reply to <a href="#c_2724894078">#46</a>) by Durga Prasad
		posted on 6/11/2016 at 4:53 PM
		</div>
		<div class="comment_text"><p>Thanks for the reply Carlos. I will try to follow it.May I know which version of ionic is most compatible with worklight 7.1 ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2725227889">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_R32vzZXYuB.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2725227889">49</a> (In reply to <a href="#c_2725191851">#48</a>) by Carlos Santana
		posted on 6/11/2016 at 5:21 PM
		</div>
		<div class="comment_text"><p>MobileFirst provides vanilla JavaScript API meaning that the answer is any JavaScript library is compatible</p></div>
	</div>
</div>
		
<div class="comment" id="c_2830332119">
	<div>
		<img src="https://disqus.com/api/users/avatars/ishaiborovoy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2830332119">50</a> (In reply to <a href="#c_2594937677">#19</a>) by Ishai Borovoy
		posted on 8/10/2016 at 1:52 PM
		</div>
		<div class="comment_text"><p>Here you have a sample <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fmfpdev%2Fmfp71-with-ionic2%3AVnL5gU-ILtJj2a_6EG-S0S7rzuc&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/mfpdev/mfp71-with-ionic2">https://github.com/mfpdev/m...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2830332641">
	<div>
		<img src="https://disqus.com/api/users/avatars/ishaiborovoy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2830332641">51</a> (In reply to <a href="#c_2594813034">#18</a>) by Ishai Borovoy
		posted on 8/10/2016 at 1:53 PM
		</div>
		<div class="comment_text"><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fmfpdev%2Fmfp71-with-ionic2%3AVnL5gU-ILtJj2a_6EG-S0S7rzuc&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/mfpdev/mfp71-with-ionic2">https://github.com/mfpdev/m...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2830339497">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2830339497">52</a> (In reply to <a href="#c_2830332641">#51</a>) by Raymond Camden
		posted on 8/10/2016 at 1:57 PM
		</div>
		<div class="comment_text"><p>Why not use MFP8?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2830395047">
	<div>
		<img src="https://disqus.com/api/users/avatars/ishaiborovoy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2830395047">53</a> (In reply to <a href="#c_2830339497">#52</a>) by Ishai Borovoy
		posted on 8/10/2016 at 2:33 PM
		</div>
		<div class="comment_text"><p>You right, but there are users which ask this sample.  With 8.0 it is much easier and personally I think it is better approach</p></div>
	</div>
</div>
		
<div class="comment" id="c_2938088560">
	<div>
		<img src="https://disqus.com/api/users/avatars/ishaiborovoy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2938088560">54</a> (In reply to <a href="#c_2830339497">#52</a>) by Ishai Borovoy
		posted on 10/7/2016 at 3:32 PM
		</div>
		<div class="comment_text"><p>Requested from a customer </p></div>
	</div>
</div>
		
<div class="comment" id="c_3420296390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3420296390">55</a> by mohana priya
		posted on 7/17/2017 at 6:58 AM
		</div>
		<div class="comment_text"><p>Can anyone tell me how to add wlapp file manually into mfp 7.1 console without using mfp push command</p></div>
	</div>
</div>
		