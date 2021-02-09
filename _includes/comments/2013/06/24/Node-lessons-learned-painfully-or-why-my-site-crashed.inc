
<div class="comment" id="c_1713747347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747347">1</a> by Gareth Arch
		posted on 6/24/2013 at 6:26 PM
		</div>
		<div class="comment_text"><p>I just looked over Node last week (well, I've see hundreds/thousands of posts, but finally dove in) and saw the note about it crashing when it encounters an error due to the whole "Event cycle" thing.  That seemed a rather big sticking point with web servers that you don't want to go down completely, but encounter an error, handle it somewhat gracefully (for that user), then keep chugging along, rather than crashing for everyone trying to access it.  I like the ease of using Node (and express once I saw it explained at Parse), and hope that there are some good solutions to this issue.  I'll be keep an eye on your posts to see how others are handling these types of situations, especially after, as you said, how simply it is handled in CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747350">2</a> by Aaron West
		posted on 6/24/2013 at 11:33 PM
		</div>
		<div class="comment_text"><p>Hey Ray, good to see you are enjoying Node and having some success with it. I wanted to offer some basic hints on things I've found useful with Node. First, most of my experience with Node comes from running a Web Services system (in production) for a little over a year. I struggled for a while - with my team - to get the app stable over last summer but it's now responding to more than 1 billion HTTP requests per month.</p><p>One initial thing we found helpful was writing our own logging mechanisms in Node. It doesn't have to be super fancy, but given how Node can "just die," it helps to write to log files what is happening as it happens. We write console type logs, file processing logs, and basic app-caught logs to different files on the Linux filesystem.</p><p>There's also a nifty tool called DTrace which can help debug your app from CLI. It doesn't run on all operating systems so YMMV.</p><p>Finally, we use Forever too. It's a nice tool to help kick up Node processes, monitor those processes, and kill/stop various Node services you may be running. We integrated some of our logging features into Forever so there isn't Forever logs + our home grown logs. This proved pretty useful. On restarting your app, Forever can certainly do this for you. You may want to use the "-m" option to ensure Forever doesn't restart your app, well forever, in the event you write an infinite loop in JavaScript/Node. It's also useful to ensure Forever starts on system boot and thus starts your app. Since no real init scripts come with Forever most people roll there own. We did this too with shell scripts and /etc/rc.local.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747349">3</a> by Rob Dudley
		posted on 6/25/2013 at 12:55 PM
		</div>
		<div class="comment_text"><p>I've found similar issues with Node and to be honest it's at the core of my fear of using it in true production apps. Even with something like Express there are so many edge cases that could cause a critical crash that I'm always worried about missing something.</p><p>I suppose that this could be overcome by massive amounts of exception catching or of course by writing code that doesn't have any bugs.</p><p>That said I believe App Fog will (should) auto restart crashed apps up to a "flap threshold" of about 5 times in a period. And I know you can install forever-monitor as a Node Module which would be pulled in via your package.json and should require minimal work to update your app.js to support it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747351">4</a> by Raymond Camden
		posted on 6/25/2013 at 5:09 PM
		</div>
		<div class="comment_text"><p>@Aaron: Fascinating stuff, thank you for sharing that. <br>@Rob: So... forever can be part of my app itself - not a command line thing? Do you have an example?</p><p>Btw - I do have an update on AppFog. Since people seem to skip reading comments I'm going to add it as an edit to the above text. In 5, give it a read.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747353">5</a> by Rob Dudley
		posted on 6/25/2013 at 5:35 PM
		</div>
		<div class="comment_text"><p>Yup. there is a modularized (not sure that's a word) version of Forever:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fnodejitsu%2Fforever-monitor%3AwSRue8dB24TEGEuWd0Z7QITpCzc&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/nodejitsu/forever-monitor">https://github.com/nodejits...</a></p><p>From the above site you'd make your server.js a wrapper around the forever monitor module as per the docs from the above reop. You can then move your core app code into app.js (or whatever you want to call it).</p><p>I've not used this on AppFog officially  but have used it on Nodester ... which I'm pretty sure was bought out by AppFog and used the same platform.</p><p>Oh and +1 on hooking some logging in there. It's good to know what caused a failure so you can patch and over time reduce the restarts.</p><p>Final another quick gotcha that you may or may not run into is memory leakage. Early Node.js was terrible for it and though it's much improved it's worth keeping an eye on when your apps first hit production.</p><p>There was a great post (albeit a little dated now) on the MDN last Nov as part of their Node Holiday Season: <a href="https://disq.us/url?url=https%3A%2F%2Fhacks.mozilla.org%2F2012%2F11%2Ftracking-down-memory-leaks-in-node-js-a-node-js-holiday-season%2F%3AG_zgrdNV-OEtplP91FjJFDexxTk&amp;cuid=3321886" rel="nofollow noopener" title="https://hacks.mozilla.org/2012/11/tracking-down-memory-leaks-in-node-js-a-node-js-holiday-season/">https://hacks.mozilla.org/2...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747352">6</a> by Adam Tuttle
		posted on 6/25/2013 at 8:38 PM
		</div>
		<div class="comment_text"><p>Nodejitsu automatically uses Forever under the covers to keep your app up even after crashes like this one. I've also been pretty pleased with their support, though I mainly interacted with them via IRC (#nodejitsu on freenode) instead of the web console.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747354">7</a> by David Salter
		posted on 6/26/2013 at 9:43 PM
		</div>
		<div class="comment_text"><p>Hi Ray, this was an interesting read as I've just started looking at AppFog.  I'm now going to look at forever as that looks like a very useful tool.</p><p>On a side note, I've just managed to crash a Node.js app of mine on AppFog and the app seems to have restarted itself (at least its running again now without manual intervention).  I don't know if this is because of changes to AppFog since your original post, or because I got the log files after the crash (thanks for the tip).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747355">8</a> by Raymond Camden
		posted on 6/26/2013 at 11:22 PM
		</div>
		<div class="comment_text"><p>Yeah, after posting this I heard from others that AppFog should restart your app automatically. I don't know what that means for my app since it was down for a few hours. (Technically it may have been less then that - don't know the exact metrics.)</p><p>All in all - even my own "familiar" server, this one, doesn't have 100% uptime and I don't necessarily know 100% of what goes on here. I'm ok with being removed a bit from the nitty gritty details I guess. It bugs me - but I may have to just live with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747358">9</a> by emaV
		posted on 6/27/2013 at 6:37 PM
		</div>
		<div class="comment_text"><p>Just found this tool... <a href="http://disq.us/url?url=http%3A%2F%2Fdevo.ps%2Fblog%2F2013%2F06%2F26%2Fgoodbye-node-forever-hello-pm2.html%3AZtFtxmRE1fYfgNABixToRKqbp7A&amp;cuid=3321886" rel="nofollow noopener" title="http://devo.ps/blog/2013/06/26/goodbye-node-forever-hello-pm2.html">http://devo.ps/blog/2013/06...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747356">10</a> by Corey Butler
		posted on 6/29/2013 at 12:58 AM
		</div>
		<div class="comment_text"><p>First off, you can monitor your app for uncaught exceptions so it won't "just die". How you handle that is really up to you... it could fire an email/SMS off, or whatever you like, but if only one part of the app is failing, it doesn't have to crash the whole thing.</p><p>I have taken a liking to most of the 12-Factor app approach (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.12factor.net%3AO1qVsFUa67jvb1r4ofItrq2bS8I&amp;cuid=3321886" rel="nofollow noopener" title="http://www.12factor.net">http://www.12factor.net</a>) for Node. I write my node apps as a series of processes, which makes them more robust. If something fails, I deal with the failing piece without toying with the rest of the system.</p><p>I initially used Forever to run my processes, but I was pretty frustrated with the fact it recreates a lot of what the OS does for you.   A few months ago, I started creating a series of daemon utilities called node-windows, node-mac, and node-linux (<a href="http://disq.us/url?url=http%3A%2F%2Fgithub.com%2Fcoreybutler%3AgA_NHnS1-bTiykPJLBXQ3_4ohRE&amp;cuid=3321886" rel="nofollow noopener" title="http://github.com/coreybutler">http://github.com/coreybutler</a>, MIT). These are really designed more for those running their own server though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747371">11</a> by Raymond Camden
		posted on 6/29/2013 at 1:02 AM
		</div>
		<div class="comment_text"><p>Corey: Interesting... thanks - and thank you to everyone for the suggestions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747372">12</a> by Johan
		posted on 7/7/2013 at 4:43 AM
		</div>
		<div class="comment_text"><p>Ray - further to feedback I sent on Google+ I also came across this which may be helpful:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fshapeshed.com%2Funcaught-exceptions-in-node%2F%3ABG2UbNiiQldfRUwDzweAQ8UrlZE&amp;cuid=3321886" rel="nofollow noopener" title="http://shapeshed.com/uncaught-exceptions-in-node/">http://shapeshed.com/uncaug...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747370">13</a> by Raymond Camden
		posted on 7/7/2013 at 4:57 AM
		</div>
		<div class="comment_text"><p>Interesting. I need to read this again - maybe twice more - and think about what I'm going to do with my site. This sentence is probably the most important for people, like me, coming from a ColdFusion or PHP background: "Node.js does not separate your application from the server."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747373">14</a> by Tighe Lory
		posted on 7/8/2013 at 6:12 PM
		</div>
		<div class="comment_text"><p>This article blows my mind that this kind of error handling wasn't the first thing build into Node.js!  Now I have never used it, so I can't judge it, but at the same time I have a hard time understanding why it would be designed in such a flawed way.</p><p>Is there some logic to this die on error behavior that is beneficial?</p></div>
	</div>
</div>
		