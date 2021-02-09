
<div class="comment" id="c_1713718578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718578">1</a> by Henry Ho
		posted on 9/25/2009 at 11:24 PM
		</div>
		<div class="comment_text"><p>might want to add this to the cookbook? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718579">2</a> by Raymond Camden
		posted on 9/25/2009 at 11:26 PM
		</div>
		<div class="comment_text"><p>_Maybe_. I'm not so sure though as it is rather simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718581">3</a> by Andy Sandefer
		posted on 9/25/2009 at 11:53 PM
		</div>
		<div class="comment_text"><p>Just out of curiosity - has the new syntax benefited you in any way?  I know that you've been working with it quite a bit lately so I'm just curious as to whether or not you'll dive into it.  This works pretty good for my money...<br>&lt;cflock <br>    timeout = "time-out in seconds"<br>    name = "lock name"<br>    scope = "Application|Server|Session|Request"<br>    throwOnTimeout = "yes|no"<br>    type = "readOnly|exclusive"&gt; <br>    &lt;!--- CFML to be synchronized. ---&gt; <br>&lt;/cflock&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718582">4</a> by Raymond Camden
		posted on 9/25/2009 at 11:54 PM
		</div>
		<div class="comment_text"><p>Benefited? Hell yes. This is purely a personal thing, but I much prefer writing my CFCs in script. It feels much more natural to me. So being happier while coding to me in a massive #win.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718584">5</a> by Dan Vega
		posted on 9/26/2009 at 12:34 AM
		</div>
		<div class="comment_text"><p>I am with Ray - On top of the tons of typing it saves me it just is more enjoyable to code in and a happy developer is a productive developer!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718580">6</a> by Aaron Longnion
		posted on 9/28/2009 at 11:32 AM
		</div>
		<div class="comment_text"><p>Thanks for the cfscript cflock code sample, as always.</p><p>To everyone: remember that a named lock (or scope-lock for that matter) obviously cannot handle locking across multiple CF instances (such as in a cluster), so a cflock may not always be appropriate if you are in a multi-server environment.</p><p>For Ray's sample, since it involves database, cftransaction would probably be more appropriate since it would handle database concurrency even in a multi-server CF infrastructure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718589">7</a> by Raymond Camden
		posted on 9/28/2009 at 3:14 PM
		</div>
		<div class="comment_text"><p>Good point there. I almost always tend to work on a single instance, so it's not something I need to be concerned with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718586">8</a> by Brian W.
		posted on 9/28/2009 at 7:17 PM
		</div>
		<div class="comment_text"><p>As a eager-to-learn CFC in CFSCRIPT noob - any articles you fine gentlemen might suggest?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718585">9</a> by Raymond Camden
		posted on 9/28/2009 at 7:18 PM
		</div>
		<div class="comment_text"><p>The docs. :) There is a section on CFML and CFSCRIPT. It was updated for CF9 to cover new stuff, like abort, writeDump, lock, etc. Ben Nadel has an article or two on using Query in cfscript. And - well, Google is always your friend. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718591">10</a> by Brian W.
		posted on 9/28/2009 at 7:23 PM
		</div>
		<div class="comment_text"><p>Thanks Ray - Will do.</p><p>As a "Jedi Apprentice" I want to see if I can mimic the master whenever possible. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718592">11</a> by Raymond Camden
		posted on 9/28/2009 at 7:28 PM
		</div>
		<div class="comment_text"><p>This is new to me as well. I'm certainly not yet a Master!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4142235677">
	<div>
		<img src="https://disqus.com/api/users/avatars/pete_freitag.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4142235677">12</a> by Pete Freitag
		posted on 10/12/2018 at 9:15 PM
		</div>
		<div class="comment_text"><p>Hey Raymond - looks like there is a formatting error in the code example here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4142236706">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4142236706">13</a> (In reply to <a href="#c_4142235677">#12</a>) by Raymond Camden
		posted on 10/12/2018 at 9:16 PM
		</div>
		<div class="comment_text"><p>A lot of my old posts have this issue. :) I'll fix it up sometime soonish. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4142238213">
	<div>
		<img src="https://disqus.com/api/users/avatars/pete_freitag.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4142238213">14</a> (In reply to <a href="#c_4142236706">#13</a>) by Pete Freitag
		posted on 10/12/2018 at 9:17 PM
		</div>
		<div class="comment_text"><p>No worries, just wanted to make sure you were aware.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4147727215">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4147727215">15</a> (In reply to <a href="#c_4142238213">#14</a>) by Raymond Camden
		posted on 10/16/2018 at 2:52 PM
		</div>
		<div class="comment_text"><p>Fixed.</p></div>
	</div>
</div>
		