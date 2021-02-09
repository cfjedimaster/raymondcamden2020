
<div class="comment" id="c_2350388072">
	<div>
		<img src="https://disqus.com/api/users/avatars/sjnative94.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2350388072">1</a> by Phil
		posted on 11/9/2015 at 5:42 PM
		</div>
		<div class="comment_text"><p>Thanks for this. I had found a different way of dealing with this with a function called shouldRotateToOrientation at the beginning of my app.js (ionic app). Never saw this particular config.xml entry in any of my searches.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2350489858">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2350489858">2</a> (In reply to <a href="#c_2350388072">#1</a>) by Raymond Camden
		posted on 11/9/2015 at 6:39 PM
		</div>
		<div class="comment_text"><p>I was considering bringing up that function but felt it was too OT. That was new to me too. Lots of nice little nuggets in the docs. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2351430915">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_79wF9K2oGE.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2351430915">3</a> by jcesar
		posted on 11/10/2015 at 8:05 AM
		</div>
		<div class="comment_text"><p>Default should be portrait on iPhones/iPods an all orientations on iPads (those are default orientations on a native project). Will check on a new empty cordova app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2351568807">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2351568807">4</a> (In reply to <a href="#c_2351430915">#3</a>) by Raymond Camden
		posted on 11/10/2015 at 11:11 AM
		</div>
		<div class="comment_text"><p>In my testing in the simulator, iPad2 is still locked to portrait.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2351607961">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_79wF9K2oGE.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2351607961">5</a> (In reply to <a href="#c_2351568807">#4</a>) by jcesar
		posted on 11/10/2015 at 11:59 AM
		</div>
		<div class="comment_text"><p>yeah, it seems that it broke some time ago <a href="https://disq.us/url?url=https%3A%2F%2Fissues.apache.org%2Fjira%2Fbrowse%2FCB-9703%3AiLUTjETA0RxdYP0MGRnuE02yprU&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.apache.org/jira/browse/CB-9703">https://issues.apache.org/j...</a></p><p>EDIT: Just created a native project and the orientations are: <br>- iPhone any orientations different from UIInterfaceOrientationPortraitUpsideDown<br>- iPad, all orientations.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2351907750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2351907750">6</a> (In reply to <a href="#c_2351607961">#5</a>) by Connor
		posted on 11/10/2015 at 3:52 PM
		</div>
		<div class="comment_text"><p>There's a bug where the prepare command deletes all orientation values in Info.plist. <a href="https://disq.us/url?url=https%3A%2F%2Fissues.apache.org%2Fjira%2Fbrowse%2FCB-9371%3A1kSYu9kc_ierI4aWZoFYGopE7HY&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.apache.org/jira/browse/CB-9371">https://issues.apache.org/j...</a></p><p>When there are no orientation values in the Info.plist, iOS treats it as portrait only. When you create a new project though, Xcode adds those default values to info.plist.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2351914949">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2351914949">7</a> by Raymond Camden
		posted on 11/10/2015 at 3:56 PM
		</div>
		<div class="comment_text"><p>As a general FYI, if you are using cordova CLI 5.4.0, this feature is now broken. :( I'll post a Jira link when I have it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2352017383">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2352017383">8</a> (In reply to <a href="#c_2351914949">#7</a>) by Raymond Camden
		posted on 11/10/2015 at 4:59 PM
		</div>
		<div class="comment_text"><p>Bug report: <a href="https://disq.us/url?url=https%3A%2F%2Fissues.apache.org%2Fjira%2Fbrowse%2FCB-9975%3Aw6Uhz1-6Ni1qBwDP0waB36Ba2BE&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.apache.org/jira/browse/CB-9975">https://issues.apache.org/j...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2568424477">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_CmlB5dDyMg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2568424477">9</a> by 四維 包
		posted on 3/14/2016 at 7:05 AM
		</div>
		<div class="comment_text"><p>hi Raymend<br>I have the same problem just like the post<br>for now I am using Cordova Cli-6.0 + Cordova-iOS 4.1.0 + iOS 9.2.1 ipad mini<br>but still have the same problem，is the problem really solved ?<br>or...maybe can use Xcode to modify the info.plist manually ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2568757121">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2568757121">10</a> (In reply to <a href="#c_2568424477">#9</a>) by Raymond Camden
		posted on 3/14/2016 at 1:28 PM
		</div>
		<div class="comment_text"><p>Did you read my solution above?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2568771156">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_CmlB5dDyMg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2568771156">11</a> (In reply to <a href="#c_2568757121">#10</a>) by 四維 包
		posted on 3/14/2016 at 1:38 PM
		</div>
		<div class="comment_text"><p>yes<br>I use it (above)</p><p>&lt;platform name="ios"&gt;<br>    &lt;preference name="Orientation" value="all"/&gt;<br>&lt;/platform&gt;</p><p>but still not work<br>can you help me to try Cordova Cli-6.0 + Cordova-iOS 4.1.0 too ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2568778648">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2568778648">12</a> (In reply to <a href="#c_2568771156">#11</a>) by Raymond Camden
		posted on 3/14/2016 at 1:44 PM
		</div>
		<div class="comment_text"><p>I just tested and it worked for me. On the simulator. I don't have 9.2.1 here on a device to test.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2568791813">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2568791813">13</a> (In reply to <a href="#c_2568771156">#11</a>) by Raymond Camden
		posted on 3/14/2016 at 1:52 PM
		</div>
		<div class="comment_text"><p>I was able to test on an iPhone w/ 9.2.1 and it worked there too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2568883753">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_CmlB5dDyMg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2568883753">14</a> (In reply to <a href="#c_2568778648">#12</a>) by 四維 包
		posted on 3/14/2016 at 2:28 PM
		</div>
		<div class="comment_text"><p>hi Raymond<br>well...my falt...anyway...for now is good to work in iOS<br>hope Cordova team one day can just use<br>&lt;preference name="Orientation" value="default"/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2594221129">
	<div>
		<img src="https://disqus.com/api/users/avatars/bencrowl.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2594221129">15</a> (In reply to <a href="#c_2568883753">#14</a>) by Ben Crowl
		posted on 3/29/2016 at 3:09 AM
		</div>
		<div class="comment_text"><p>See <a href="https://disq.us/url?url=https%3A%2F%2Fissues.apache.org%2Fjira%2Fbrowse%2FCB-9975%3Aw6Uhz1-6Ni1qBwDP0waB36Ba2BE&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.apache.org/jira/browse/CB-9975">https://issues.apache.org/j...</a> for a work-around in Cordova 6 (remember to remove the global Orientation setting to make this work).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2594958538">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2594958538">16</a> (In reply to <a href="#c_2594221129">#15</a>) by Raymond Camden
		posted on 3/29/2016 at 3:21 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2650895086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2650895086">17</a> by Mohessaid
		posted on 4/30/2016 at 2:49 PM
		</div>
		<div class="comment_text"><p>Worked perfectly thank you very much.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2796859348">
	<div>
		<img src="https://disqus.com/api/users/avatars/jakubkuchar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2796859348">18</a> by Jakub Kuchar
		posted on 7/22/2016 at 7:15 AM
		</div>
		<div class="comment_text"><p>thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_2818726366">
	<div>
		<img src="https://disqus.com/api/users/avatars/t_specht.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2818726366">19</a> by t_specht
		posted on 8/3/2016 at 1:22 PM
		</div>
		<div class="comment_text"><p>Thank you! This was exactly what I needed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2841879666">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_FcvjZQrrP6.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2841879666">20</a> by Freddie Scott
		posted on 8/17/2016 at 8:33 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Thanks for the insights here !</p><p>Is it possible to read a value from the device's operating system to understand if the device itself is orientation locked ? And then use that value to force a certain orientation in my cordova app ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2842202905">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2842202905">21</a> (In reply to <a href="#c_2841879666">#20</a>) by Raymond Camden
		posted on 8/17/2016 at 1:30 PM
		</div>
		<div class="comment_text"><p>I believe there is a plugin that lets you read settings - I'd look there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2845850854">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_FcvjZQrrP6.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2845850854">22</a> (In reply to <a href="#c_2842202905">#21</a>) by Freddie Scott
		posted on 8/19/2016 at 11:11 AM
		</div>
		<div class="comment_text"><p>Ok thanks Raymond, if you have a name of the plugin it would be very helpful. I have really searched for something like this but can't find one... yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2845992784">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2845992784">23</a> (In reply to <a href="#c_2845850854">#22</a>) by Raymond Camden
		posted on 8/19/2016 at 12:59 PM
		</div>
		<div class="comment_text"><p>I searched - but didn't see anything obvious. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_3002336301">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_nVM2RwhzaQ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3002336301">24</a> by Ben Wilson
		posted on 11/14/2016 at 10:40 PM
		</div>
		<div class="comment_text"><p>Thanks for this Raymond - was a big help. For total control, once the iOS orientation has been set to 'all' if you need to change it in code (or even lock / unlock it again) then try <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fapache%2Fcordova-plugin-screen-orientation%3A_rhp3yQRhPHRMeMYw9_SAZTDe58&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/apache/cordova-plugin-screen-orientation">https://github.com/apache/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3710301723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3710301723">25</a> by Kev
		posted on 1/16/2018 at 10:47 AM
		</div>
		<div class="comment_text"><p>This just helped me today however I'd like to point out the gotcha that got me for a while.<br>If you make any edits to config.xml while running ionic cordova emulate, when you kill the emulate command (ctrl+c), your change is undone. (And config.xml is not included for livereload so has to be stopped and restarted)<br>So when I found the solution and added the preference to my config, I killed the command and re-ran it but still running portrait. I was just about to search about this phenomenon when at the last time of cancelling I saw my new line disappear in front of my eyes.<br>Hopefully this will prevent madness setting in for somebody else</p></div>
	</div>
</div>
		
<div class="comment" id="c_3710538540">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3710538540">26</a> (In reply to <a href="#c_3710301723">#25</a>) by Raymond Camden
		posted on 1/16/2018 at 2:15 PM
		</div>
		<div class="comment_text"><p>Wow, great tip. Thank you for sharing this!</p></div>
	</div>
</div>
		