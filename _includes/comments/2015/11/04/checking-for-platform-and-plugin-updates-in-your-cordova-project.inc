
<div class="comment" id="c_2343466216">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Hejfyqc8Ip.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2343466216">1</a> by Steven Gill
		posted on 11/5/2015 at 1:54 AM
		</div>
		<div class="comment_text"><p>Great post! Only thing worth adding is that cordova is looking to add a `npm outdated` type command. Most likely `cordova outdated`. It would do a similar thing. <br> `</p></div>
	</div>
</div>
		
<div class="comment" id="c_2343782107">
	<div>
		<img src="https://disqus.com/api/users/avatars/rposener.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2343782107">2</a> by RobPosener
		posted on 11/5/2015 at 8:27 AM
		</div>
		<div class="comment_text"><p>Well summarised Raymond.<br>This post explains a real problem with Cordova... even with a single app (but using lots of plugins) it is really difficult keeping track of if an app is using current versions of npm, platform, and plugins.</p><p>BTW: entering $ cordova plugins check == cordova plugins ls.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2344168813">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2344168813">3</a> (In reply to <a href="#c_2343782107">#2</a>) by Raymond Camden
		posted on 11/5/2015 at 2:51 PM
		</div>
		<div class="comment_text"><p>Let me reply to this first: "cordova plugins check == cordova plugins ls" Not sure I get what you are saying there. If check worked correctly, then it would do more than just a ls.</p><p>"This post explains a real problem with Cordova... even with a single app<br> (but using lots of plugins) it is really difficult keeping track of if <br>an app is using current versions of npm, platform, and plugins."</p><p>I think you are right about it being an issue, but I'm not sure it is something that is solvable. Application development is complex. You can't always make it simple. At least with this particular issue it isn't necessarily something you have to do often. When Cordova updates the X platform, you don't have to race out and update unless there is some crucial security fix you want deployed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2344403989">
	<div>
		<img src="https://disqus.com/api/users/avatars/rposener.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2344403989">4</a> (In reply to <a href="#c_2344168813">#3</a>) by RobPosener
		posted on 11/5/2015 at 5:09 PM
		</div>
		<div class="comment_text"><p>To clarify:<br>Entering "cordova plugins check" gives identical results to entering "cordova plugins ls".  Its almost like there is a stub there for "check" that currently has identical code to "ls".  Kinda surprising... it should throw an error or say "experimental" or something different.  It doesn't act like the "cordova platform check" which displays the useful "No platforms can be updated at this time" message.  "cordova plugins check" does not display any similar message.</p><p>I don't buy your "complexity" point.  If software can display the current version in use and can display the current version available then combining the 2 would be trivial.  Further, most developers I know want to upgrade to the latest tools as soon as they are available for a whole host of reasons.  The effort required to check this currently on a weekly basis is just crazy.</p><p>Further, the fact that "platforms" does check and "plugins" doesn't check is just another example of the inconsistencies in the cli, that IMHO has grown topsy turvey without a clear roadmap and consistent syntax over the past 18 months (although it is getting better and it is only through people like you pointing out these inconsistencies that something is being done to fix them).  Its almost like the Cordova developers don't "get" how hard it is to become productive with their endeavours.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2344503481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2344503481">5</a> by Steve Hardin @jstevehardin
		posted on 11/5/2015 at 6:06 PM
		</div>
		<div class="comment_text"><p>This was a pain point for us in the past (keeping platform/plugins up to date), but now we purge the 'platforms' and 'plugins' directories after updating the Cordova CLI and/or during a final beta before app submission.    We use a "hook" to automatically install the plugins developed by Holly Schinsky discussed here: <a href="http://disq.us/url?url=http%3A%2F%2Fdevgirl.org%2F2013%2F11%2F12%2Fthree-hooks-your-cordovaphonegap-project-needs%2F%3AcDl9Mn11c1PNIIHBVST55lwKkxo&amp;cuid=3321886" rel="nofollow noopener" title="http://devgirl.org/2013/11/12/three-hooks-your-cordovaphonegap-project-needs/">http://devgirl.org/2013/11/...</a>    This resolved a many issues for us, as we were fighting compile errors in Xcode and forgetting to update plugins.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2345752722">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2345752722">6</a> (In reply to <a href="#c_2344403989">#4</a>) by Raymond Camden
		posted on 11/6/2015 at 1:44 PM
		</div>
		<div class="comment_text"><p>I didn't say this couldn't be fixed. It should be fixed. It can be improved. My point about complexity was more a high level comment. Building an app will naturally involve some complexity imo.</p><p>As to your general comments about Cordova - remember - this is an open source project. Nothing is done in secret. You can sign up for the dev list and help flesh out issues like this, let them know when things are confusing, etc. That's the role I try to provide for the project as I don't have a lot of time to work on the core code itself. That may sound a bit like "It's OSS you can fix it yourself" which is not what I'm trying to say, but Cordova does rely on a 100% volunteer force of people. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2347711135">
	<div>
		<img src="https://disqus.com/api/users/avatars/janpiotrowski.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2347711135">7</a> by Jan Piotrowski
		posted on 11/7/2015 at 6:39 PM
		</div>
		<div class="comment_text"><p>Hmm, `cordova platform check` only executes my hooks... no output. (Cordova CLI: 5.3.1)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2350090438">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2350090438">8</a> (In reply to <a href="#c_2347711135">#7</a>) by Raymond Camden
		posted on 11/9/2015 at 2:40 PM
		</div>
		<div class="comment_text"><p>As I said - it seems to be quite buggy. :) Can you add this to my bug reports?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2350099538">
	<div>
		<img src="https://disqus.com/api/users/avatars/janpiotrowski.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2350099538">9</a> (In reply to <a href="#c_2350090438">#8</a>) by Jan Piotrowski
		posted on 11/9/2015 at 2:46 PM
		</div>
		<div class="comment_text"><p>Commented on your issue.</p><p>(By the way, one of your issues says "project" instead of "platform" in the issue title)</p><p></p></div>
	</div>
</div>
		
<div class="comment" id="c_2355045911">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_79wF9K2oGE.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2355045911">10</a> by jcesar
		posted on 11/12/2015 at 12:18 PM
		</div>
		<div class="comment_text"><p>there is a typo "you can type cordova platforms to get a list of installed and available plugins."</p></div>
	</div>
</div>
		
<div class="comment" id="c_2355183755">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2355183755">11</a> (In reply to <a href="#c_2355045911">#10</a>) by Raymond Camden
		posted on 11/12/2015 at 2:17 PM
		</div>
		<div class="comment_text"><p>Sorry - where is the typo?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2355227248">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_79wF9K2oGE.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2355227248">12</a> (In reply to <a href="#c_2355183755">#11</a>) by jcesar
		posted on 11/12/2015 at 2:23 PM
		</div>
		<div class="comment_text"><p>should be "you can type cordova platforms to get a list of installed and available platforms." not plugins</p></div>
	</div>
</div>
		
<div class="comment" id="c_2355237920">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2355237920">13</a> (In reply to <a href="#c_2355227248">#12</a>) by Raymond Camden
		posted on 11/12/2015 at 2:25 PM
		</div>
		<div class="comment_text"><p>Ah thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2404630569">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ZO9UZaq8gp.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2404630569">14</a> by Dave Alden
		posted on 12/11/2015 at 12:09 PM
		</div>
		<div class="comment_text"><p>It would be great if cordova support could be added for managing plugin updates. But in the meantime, I got tired of manually checking for plugin updates so created a tool to do it for me: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fdpa99c%2Fcordova-check-plugins%3A5j8oCjO6qsjYF9h1ouDccHMwdpA&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/dpa99c/cordova-check-plugins">https://github.com/dpa99c/c...</a></p></div>
	</div>
</div>
		