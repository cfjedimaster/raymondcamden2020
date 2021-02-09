
<div class="comment" id="c_2123142461">
	<div>
		<img src="https://disqus.com/api/users/avatars/johncharalambides.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2123142461">1</a> by John Charalambides
		posted on 7/8/2015 at 10:00 AM
		</div>
		<div class="comment_text"><p>Hi Ray, great post, i tried the api embed last week on a cms. When i try view your example, im getting the same thing that i got during my test, a blank screen, any idea why this would be happening? I clicked the button to authenticate</p></div>
	</div>
</div>
		
<div class="comment" id="c_2123231772">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2123231772">2</a> (In reply to <a href="#c_2123142461">#1</a>) by Raymond Camden
		posted on 7/8/2015 at 10:57 AM
		</div>
		<div class="comment_text"><p>What do you see in your console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2123236524">
	<div>
		<img src="https://disqus.com/api/users/avatars/johncharalambides.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2123236524">3</a> (In reply to <a href="#c_2123231772">#2</a>) by John Charalambides
		posted on 7/8/2015 at 11:00 AM
		</div>
		<div class="comment_text"><p>This is the error that comes up in the console:<br>TypeError: profiles[curProfile] is undefined</p></div>
	</div>
</div>
		
<div class="comment" id="c_2123237581">
	<div>
		<img src="https://disqus.com/api/users/avatars/johncharalambides.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2123237581">4</a> (In reply to <a href="#c_2123231772">#2</a>) by John Charalambides
		posted on 7/8/2015 at 11:01 AM
		</div>
		<div class="comment_text"><p>coming from this line:<br>109.  console.log("working on profile "+profiles[curProfile].name);</p></div>
	</div>
</div>
		
<div class="comment" id="c_2123242426">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2123242426">5</a> (In reply to <a href="#c_2123236524">#3</a>) by Raymond Camden
		posted on 7/8/2015 at 11:05 AM
		</div>
		<div class="comment_text"><p>Before that line, console.dir(prorfiles).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2123245259">
	<div>
		<img src="https://disqus.com/api/users/avatars/johncharalambides.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2123245259">6</a> (In reply to <a href="#c_2123242426">#5</a>) by John Charalambides
		posted on 7/8/2015 at 11:08 AM
		</div>
		<div class="comment_text"><p>im testing this on your demo page btw</p></div>
	</div>
</div>
		
<div class="comment" id="c_2123329233">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2123329233">7</a> (In reply to <a href="#c_2123245259">#6</a>) by Raymond Camden
		posted on 7/8/2015 at 11:56 AM
		</div>
		<div class="comment_text"><p>Oh - so download the code and modify it. Or use your devtools to pause there. Or heck, just type console.dir(profiles) in the console, it is a global var.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2123367508">
	<div>
		<img src="https://disqus.com/api/users/avatars/rene_pedersen.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2123367508">8</a> by Rene Pedersen
		posted on 7/8/2015 at 12:22 PM
		</div>
		<div class="comment_text"><p>Excellent post! I have been trying to get the demo <a href="https://disq.us/url?url=https%3A%2F%2Fga-dev-tools.appspot.com%2Fembed-api%2Fthird-party-visualizations%2F%3AEF-I0NDR6yCANbpr483Bu6-sOKs&amp;cuid=3321886" rel="nofollow noopener" title="https://ga-dev-tools.appspot.com/embed-api/third-party-visualizations/">https://ga-dev-tools.appspo...</a> working for weeks, but something goes wrong whenever I try.</p><p>With your online demo it works for me. Now I just need to alter the code so that I get the last 30 days instead. Lets see how that goes :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2123379368">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2123379368">9</a> (In reply to <a href="#c_2123367508">#8</a>) by Raymond Camden
		posted on 7/8/2015 at 12:30 PM
		</div>
		<div class="comment_text"><p>Look at the portion running query() - should be trivial. If you have trouble, just ask.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2123422988">
	<div>
		<img src="https://disqus.com/api/users/avatars/rene_pedersen.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2123422988">10</a> (In reply to <a href="#c_2123379368">#9</a>) by Rene Pedersen
		posted on 7/8/2015 at 12:55 PM
		</div>
		<div class="comment_text"><p>Thanks. Its always more fun to solve the problem yourself, so I will give it a few days :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2226984342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2226984342">11</a> by JSnoob
		posted on 8/31/2015 at 12:32 AM
		</div>
		<div class="comment_text"><p>Thank you for the tutorial, but when I open the demo you've linked to log in, I get just a blank page.</p><p>This is the error in the console: Uncaught TypeError: Cannot read property 'name' of undefined</p></div>
	</div>
</div>
		
<div class="comment" id="c_2227632388">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2227632388">12</a> (In reply to <a href="#c_2226984342">#11</a>) by Raymond Camden
		posted on 8/31/2015 at 12:45 PM
		</div>
		<div class="comment_text"><p>What line # is throwing the error?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2677935299">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2677935299">13</a> by Akash Pal
		posted on 5/16/2016 at 6:01 AM
		</div>
		<div class="comment_text"><p>Your demo link doesnt seem to work. Could you look into it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2677942492">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2677942492">14</a> by Akash Pal
		posted on 5/16/2016 at 6:13 AM
		</div>
		<div class="comment_text"><p>I am actually confused from where to begin. I have the google analytic data when I open it on browser. And I wish to use embed API to display it inside my app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2678139848">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2678139848">15</a> (In reply to <a href="#c_2677935299">#13</a>) by Raymond Camden
		posted on 5/16/2016 at 10:59 AM
		</div>
		<div class="comment_text"><p>I fixed it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2757777338">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_7APhJj3S9Q.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2757777338">16</a> by Brian Miller
		posted on 6/30/2016 at 1:40 AM
		</div>
		<div class="comment_text"><p>Nice post Ray! I've not been able to get any GA embed API samples to authenticate when not running on localhost. I get the dreaded redirect_uri_mismatch error. It works fine on my local machine. I've added "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.mysite.com%3AZtAAcO7n0WFZdhfJsVEieTn64Z4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mysite.com">http://www.mysite.com</a>" and "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.mysite.com%2Foauth2callback%3AFPE9V0CsTKk7XSDYdqjHxEEDhns&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mysite.com/oauth2callback">http://www.mysite.com/oauth...</a>" to the Authorized redirect URIs list for my project's OAuth2 credentials. Is there any else that needs to be done? Like create a file or folder called oauth2callback? Do javascript web apps like this need to worry about the token at all? My impression is that the embed API is supposed to take care of all of this for you. What am I missing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2758207450">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2758207450">17</a> (In reply to <a href="#c_2757777338">#16</a>) by Raymond Camden
		posted on 6/30/2016 at 9:32 AM
		</div>
		<div class="comment_text"><p>Honestly I don't know. Outside of the link for making a client id (<a href="https://disq.us/url?url=https%3A%2F%2Fdevelopers.google.com%2Fapi-client-library%2Fjavascript%2Fstart%2Fstart-js%23Setup%29%3AQidqUvtI9SqkW2zi91oALaG3qKs&amp;cuid=3321886" rel="nofollow noopener" title="https://developers.google.com/api-client-library/javascript/start/start-js#Setup)">https://developers.google.c...</a>, I don't know what else to suggest. I think they have a support forum you could try as well?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3099148706">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3099148706">18</a> (In reply to <a href="#c_3099126379">#0</a>) by Raymond Camden
		posted on 1/14/2017 at 4:52 PM
		</div>
		<div class="comment_text"><p>It sounds like Google's library didn't load - do you see any other errors in your code? Does the Network panel show anything? Can you show me where you are testing it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3099165246">
	<div>
		<img src="https://disqus.com/api/users/avatars/farhoodkarimisaber.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3099165246">19</a> (In reply to <a href="#c_3099148706">#18</a>) by Farhood KarimiSaber
		posted on 1/14/2017 at 5:02 PM
		</div>
		<div class="comment_text"><p>WOW, Thanks for quick reply, I'm testing it on http://localhost:8080 as mentioned in developers tutorial. and thats the only report in chrome console report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3099171360">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3099171360">20</a> (In reply to <a href="#c_3099165246">#19</a>) by Raymond Camden
		posted on 1/14/2017 at 5:07 PM
		</div>
		<div class="comment_text"><p>I didn't make it clear, but you need to get your own ClientID - see the instructions here:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fdevelopers.google.com%2Fanalytics%2Fdevguides%2Freporting%2Fembed%2Fv1%2Fgetting-started%3Aczdhi5eVgKg3MxsjBQqomrZAS_g&amp;cuid=3321886" rel="nofollow noopener" title="https://developers.google.com/analytics/devguides/reporting/embed/v1/getting-started">https://developers.google.c...</a></p><p>Replace my ID with yours and if you set up the client id then it should work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3099175700">
	<div>
		<img src="https://disqus.com/api/users/avatars/farhoodkarimisaber.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3099175700">21</a> (In reply to <a href="#c_3099171360">#20</a>) by Farhood KarimiSaber
		posted on 1/14/2017 at 5:10 PM
		</div>
		<div class="comment_text"><p>Sure, I did it, I past my client id instead of yours. do u think that there is a problem with authentication? fact is I can not run any of the sample codes available for this Embed API, all of them return blank page with strange error codes which there is no data available in the net about them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3099177950">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3099177950">22</a> (In reply to <a href="#c_3099175700">#21</a>) by Raymond Camden
		posted on 1/14/2017 at 5:11 PM
		</div>
		<div class="comment_text"><p>So to be clear, even their demos fail on their site? If so - yeah - you got me then. Best I can suggest is trying the support forums.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3099182568">
	<div>
		<img src="https://disqus.com/api/users/avatars/farhoodkarimisaber.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3099182568">23</a> (In reply to <a href="#c_3099177950">#22</a>) by Farhood KarimiSaber
		posted on 1/14/2017 at 5:14 PM
		</div>
		<div class="comment_text"><p>Well, Raymond, the result of copy pasting the code from this page " <a href="https://disq.us/url?url=https%3A%2F%2Fdevelopers.google.com%2Fanalytics%2Fdevguides%2Freporting%2Fembed%2Fv1%2Fgetting-started%3Aczdhi5eVgKg3MxsjBQqomrZAS_g&amp;cuid=3321886" rel="nofollow noopener" title="https://developers.google.com/analytics/devguides/reporting/embed/v1/getting-started">https://developers.google.c...</a>" with my client id, returned a blank page with console error :<br>1921062015-idpiframe.js:24 GET <a href="https://disq.us/url?url=https%3A%2F%2Faccounts.google.com%2Fo%2Foauth2%2Fiframerpc%3Faction%3DlistSessions%26redirect%E2%80%A6ain%3Dhttp%253A%252F%252Flocalhost%26origin%3Dhttp%253A%252F%252Flocalhost%26app_package_name%3D%3AHcOECB0n0_xUcGJSXTsaogRo1q8&amp;cuid=3321886" rel="nofollow noopener" title="https://accounts.google.com/o/oauth2/iframerpc?action=listSessions&amp;redirect…ain=http%3A%2F%2Flocalhost&amp;origin=http%3A%2F%2Flocalhost&amp;app_package_name=">https://accounts.google.com...</a> 403 ()<br>G @ 1921062015-idpiframe.js:24<br>Ea @ 1921062015-idpiframe.js:25<br>h.wb @ 1921062015-idpiframe.js:55<br>(anonymous) @ 1921062015-idpiframe.js:59<br>La.Eb @ 1921062015-idpiframe.js:40<br>(anonymous) @ 1921062015-idpiframe.js:50</p></div>
	</div>
</div>
		
<div class="comment" id="c_3099185974">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3099185974">24</a> (In reply to <a href="#c_3099182568">#23</a>) by Raymond Camden
		posted on 1/14/2017 at 5:17 PM
		</div>
		<div class="comment_text"><p>No - try the demos on their site. It uses your auth, so if it works there, then it means something else is wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3099197032">
	<div>
		<img src="https://disqus.com/api/users/avatars/farhoodkarimisaber.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3099197032">25</a> (In reply to <a href="#c_3099185974">#24</a>) by Farhood KarimiSaber
		posted on 1/14/2017 at 5:25 PM
		</div>
		<div class="comment_text"><p>with this <a href="http://disq.us/url?url=ID%3A818125206534-g1r0datdtu9serq2pf9cp5vkuih3h8pv.apps.googleusercontent.com%3A_LNF1SXi4qCZ8Bqi64CRc-VGJ4g&amp;cuid=3321886" rel="nofollow noopener" title="ID:818125206534-g1r0datdtu9serq2pf9cp5vkuih3h8pv.apps.googleusercontent.com">ID:818125206534-g1r0datdtu9...</a></p><p>it works but with mine, no!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3099200479">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3099200479">26</a> (In reply to <a href="#c_3099197032">#25</a>) by Raymond Camden
		posted on 1/14/2017 at 5:27 PM
		</div>
		<div class="comment_text"><p>It may be how you made the ID then. I'd go to that link I shared earlier and ensure you carefully follow the directions on building the client ID. Google makes you set up rules and such about how and where IDs can be used, and if you don't do precisely right, it won't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3099207760">
	<div>
		<img src="https://disqus.com/api/users/avatars/farhoodkarimisaber.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3099207760">27</a> (In reply to <a href="#c_3099200479">#26</a>) by Farhood KarimiSaber
		posted on 1/14/2017 at 5:33 PM
		</div>
		<div class="comment_text"><p>Thanks for your fast replies. I do think the same. but I did everything as mentioned in their walk-through. Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3099216945">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3099216945">28</a> (In reply to <a href="#c_3099207760">#27</a>) by Raymond Camden
		posted on 1/14/2017 at 5:36 PM
		</div>
		<div class="comment_text"><p>Sorry - can't think of much else but seeing how you made the client id. Good luck. You can also try testing on a non-localhost URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3346719486">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_bf65OpQfRe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3346719486">29</a> by Rashmi
		posted on 6/7/2017 at 4:59 PM
		</div>
		<div class="comment_text"><p>Hi Ray, sorry to trouble you again.<br>I have requirement to display Cohort report using Embed API V4, i tried as query but no luck. Please let me know sample to generate cohort report on web app using Embed API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3346879175">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3346879175">30</a> (In reply to <a href="#c_3346719486">#29</a>) by Raymond Camden
		posted on 6/7/2017 at 6:34 PM
		</div>
		<div class="comment_text"><p>Sorry - I haven't played with this in a while. Best I can suggest is their docs and support forum.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3565080198">
	<div>
		<img src="https://disqus.com/api/users/avatars/aidianetwork.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3565080198">31</a> by Aidia Network
		posted on 10/13/2017 at 4:29 AM
		</div>
		<div class="comment_text"><p>Hi Ray, i tried your example in my cms site, the result is blank page with error like this:<br>" Uncaught ReferenceError: curProfile is not defined "</p></div>
	</div>
</div>
		
<div class="comment" id="c_3565417843">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3565417843">32</a> (In reply to <a href="#c_3565080198">#31</a>) by Raymond Camden
		posted on 10/13/2017 at 12:18 PM
		</div>
		<div class="comment_text"><p>See the full source code here -</p><p>view-source:<a href="https://disq.us/url?url=https%3A%2F%2Fstatic.raymondcamden.com%2Fga_embed%2Ftest10.html%3AdSYiOu3yw_g1JBZFG4xx81cpDl0&amp;cuid=3321886" rel="nofollow noopener" title="https://static.raymondcamden.com/ga_embed/test10.html">https://static.raymondcamde...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3681621510">
	<div>
		<img src="https://disqus.com/api/users/avatars/hostingduty.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3681621510">33</a> by Hosting Duty
		posted on 12/28/2017 at 3:34 PM
		</div>
		<div class="comment_text"><p>hello sir, i want to add google analytics for my project but my project is in node js with express framework,we were trying to convert same sample from html to jade its not working but in HTML is working fine so do you have any another solution for that...!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3682474269">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3682474269">34</a> (In reply to <a href="#c_3681621510">#33</a>) by Raymond Camden
		posted on 12/29/2017 at 2:36 AM
		</div>
		<div class="comment_text"><p>Do I have a solution for Jade? Sorry no. I'd look for how to tell Jade to bypass it's usual rules so you can paste stuff in as is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3924643160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3924643160">35</a> by arshad jilani
		posted on 5/31/2018 at 6:34 AM
		</div>
		<div class="comment_text"><p>hello Sir i am working with this but it return me error, how can i solve it?<br>Uncaught ReferenceError: curProfile is not defined<br>    at processProfiles (index.php:642)<br>    at index.php:586<br>    at getProfiles (index.php:603)<br>    at _.du.&lt;anonymous&gt; (index.php:584)<br>    at _.fp._.k.q0 (cb=gapi.loaded_0:517)<br>    at _.du.Vh (cb=gapi.loaded_0:751)<br>    at YP._.k.pY (cb=gapi.loaded_0:759)<br>    at YP.&lt;anonymous&gt; (cb=gapi.loaded_0:758)<br>    at cb=gapi.loaded_0:377<br>    at h.r2 (cb=gapi.loaded_0:85)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3929048659">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3929048659">36</a> (In reply to <a href="#c_3924643160">#35</a>) by Raymond Camden
		posted on 6/3/2018 at 6:57 PM
		</div>
		<div class="comment_text"><p>It looks like you rewrote it in PHP. I can't help you with that.</p></div>
	</div>
</div>
		