
<div class="comment" id="c_1713724314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724314">1</a> by Raymond Camden
		posted on 5/13/2010 at 7:51 PM
		</div>
		<div class="comment_text"><p>New details. We discovered that when we dumped the cfthread scope, and we applied load, it worked when the thread did NOT start before the query, which would happen when CF needs to fire that thread later (again, due to load).</p><p>Hope this makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724330">2</a> by Sean Coyne
		posted on 5/13/2010 at 7:55 PM
		</div>
		<div class="comment_text"><p>I ran the code 100 times against the cfartgallery database and could not recreate the issue.  Very odd.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724328">3</a> by Ben Nadel
		posted on 5/13/2010 at 9:00 PM
		</div>
		<div class="comment_text"><p>I am not sure I understand this line:</p><p>&lt;cfset local = structNew() /&gt;</p><p>In ColdFusion 9, with the new implicit local scope, isn't that really doing the following:</p><p>&lt;cfset local.local = structNew() /&gt;</p><p>If I had to guess what was going on, CFThread executes as a function. In the 40% of the time that the CFThread actually executes inline (rather than being queued until after the query executes), the establishment of the thread's local scope (which should also exist), is somehow messing up the local scope of the parent function.</p><p>Arg. I don't have CF9 installed to play with :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724331">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724331">4</a> by Ben Nadel
		posted on 5/13/2010 at 9:01 PM
		</div>
		<div class="comment_text"><p>Thinking about it again, isn't the &lt;cfset local = {} /&gt; just creating "local" as a Variables-scoped value now?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724329">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724329">5</a> by Raymond Camden
		posted on 5/13/2010 at 9:25 PM
		</div>
		<div class="comment_text"><p>@Ben: Typo. Adding var in front doesn't change anything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724334">6</a> by Ben Nadel
		posted on 5/13/2010 at 9:30 PM
		</div>
		<div class="comment_text"><p>Hmm. It's got to be the CFThread local scope interaction. If you put CFThread[action=join] right after the CFThread, does it cause the error every single time?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724333">7</a> by Raymond Camden
		posted on 5/13/2010 at 9:32 PM
		</div>
		<div class="comment_text"><p>Joining doesn't help. See my first comment - which is a bit vague. On load, I noticed that the code worked when the thread status was not started. So as soon the thread starts, whether it ends or not, the issue occurs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724318">8</a> by Ben Nadel
		posted on 5/13/2010 at 9:34 PM
		</div>
		<div class="comment_text"><p>Ah, gotcha. Yeah, I was a bit confused by "load".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724327">9</a> by Sumit Verma
		posted on 5/14/2010 at 9:50 AM
		</div>
		<div class="comment_text"><p>Interesting. I was able to reproduce the error with even simpler code:<br>&lt;cffunction name="test"&gt;<br>	&lt;cfthread name="doogus" action="run"&gt;<br>	&lt;/cfthread&gt;<br>	&lt;cfset var foo = {} /&gt;<br>	&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Flocal.foo.id%3ATdIbiXnPodrMAE7opB0UA_G8trI&amp;cuid=3321886" rel="nofollow noopener" title="local.foo.id">local.foo.id</a> = 1 /&gt;	<br>	&lt;cfdump var="#<a href="http://disq.us/url?url=http%3A%2F%2Flocal.foo.id%3ATdIbiXnPodrMAE7opB0UA_G8trI&amp;cuid=3321886" rel="nofollow noopener" title="local.foo.id">local.foo.id</a>#"&gt;<br>&lt;/cffunction&gt;</p><p>If I change the line &lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Flocal.foo.id%3ATdIbiXnPodrMAE7opB0UA_G8trI&amp;cuid=3321886" rel="nofollow noopener" title="local.foo.id">local.foo.id</a> = 1 /&gt; to &lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Ffoo.id%3AbSQjXCPolZ2QaJbqMahfHGNSW3Y&amp;cuid=3321886" rel="nofollow noopener" title="foo.id">foo.id</a> = 1 /&gt; it never errors. So, accessing local scope seems to be fine, but when we set it after cfthread it seems to cause issues...</p><p>The easiest way to reproduce the error is to make a change in the code (just add some space or extra line) and it will error on the first try. After that it errors out on random.</p><p>Also, If we output metadata of local or foo after cfthread, it's always correct.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724325">10</a> by Sumit Verma
		posted on 5/14/2010 at 9:59 AM
		</div>
		<div class="comment_text"><p>Actually, Ben is absolutely right! Joining the thread right after CFThread causes error every time...</p><p>So, basically the local scope gets wiped out when the thread completes.</p><p>If I do a dump of local scope after thread join, error goes away, so, I think local scope gets re-created when we do a dump of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724322">11</a> by Sumit Verma
		posted on 5/14/2010 at 10:06 AM
		</div>
		<div class="comment_text"><p>Correction to: "the local scope gets wiped out when the thread completes."</p><p>Should read: "all the items inside local scope gets wiped clean when the thread completes."</p><p>Something like that... too late in the night...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724332">12</a> by Raymond Camden
		posted on 5/14/2010 at 2:11 PM
		</div>
		<div class="comment_text"><p>I disagree - in my testing, it isn't thread completion, but thread starting. Whether it ended or was still running, I saw the error. If it doesn't start (again, with load), then it doesn't error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724337">13</a> by Ben Nadel
		posted on 5/14/2010 at 3:51 PM
		</div>
		<div class="comment_text"><p>I should have CF9 installed later today (Jamie Krug is helping me set up a multi-instance local dev environment - very exciting!) so I'll be able to play.</p><p>The purpose of the CFThread[join] was not to make sure the thread ended, but rather that is *started*. Since threading is asynchronous, it doesn't have to start where it's defined. The join was simply to make sure that it did start (be enforcing that it also ended).</p><p>This is a very curious problem!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724336">14</a> by Martijn van der Woud
		posted on 5/20/2010 at 11:03 AM
		</div>
		<div class="comment_text"><p>My guess would be that the thead's local scope (initiated when the thread starts executing, presumably) somehow overwrites the local scope of the function. Definitely looks like a bug to me.</p></div>
	</div>
</div>
		