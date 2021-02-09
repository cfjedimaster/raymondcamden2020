
<div class="comment" id="c_1713672442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672442">1</a> by Terrence Ryan
		posted on 9/26/2007 at 7:06 PM
		</div>
		<div class="comment_text"><p>I'd add to your advice list.  Watch scoping. I'd say that scoping issues are more likely to turn up in CFthread usage than in Functions. Be sure to var scope any variables created just for the thread process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672444">2</a> by Raymond Camden
		posted on 9/26/2007 at 7:11 PM
		</div>
		<div class="comment_text"><p>Var scoping doesn't make sense here. When you are inside a cfthread, you have your own local scope. It is different from the global Variables scope. Each thread has his own local socpe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672445">3</a> by David Keith
		posted on 9/26/2007 at 7:21 PM
		</div>
		<div class="comment_text"><p>&lt;cfthread&gt; may also be used when no users or browsers are involved at all. We have a process that runs through a data set and performs various actions based on that data. In some cases, certain data needs some correction which prevents processing this time around. Rather than hold up that whole process while some data fix is performed on that record, we just fire of a separate thread to have it fixed, but rather than wait, the main process keeps going. That allows the main process to keep on trucking. Next time around, the data record we had fixed previously is not all good, and the main process picks it up and finished whatever it was doing.</p><p>So threading behavior need not be used solely to improve the perception of page request speed to a human user.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672446">4</a> by Terrence Ryan
		posted on 9/26/2007 at 7:23 PM
		</div>
		<div class="comment_text"><p>True, it does implicitly set any created variables in the local scope.  But I would still recommend explicitly var scoping these variables. It keeps you consistent with how you have to write functions. Plus I've seen issues with threads that are reminiscent of issues I've seen in functions that are not properly scoped.</p><p>This doc talks about the nature of the implicit thread local scope:<br><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F8%2Fhtmldocs%2Fhelp.html%3Fcontent%3Dthreads_4.html%3ARor6fu1i9GvOKa7cVnoJclhvnXk&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/8/htmldocs/help.html?content=threads_4.html">http://livedocs.adobe.com/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672448">5</a> by Raymond Camden
		posted on 9/26/2007 at 7:31 PM
		</div>
		<div class="comment_text"><p>Terrance- Right - I'll concede that point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672449">6</a> by Nathan Smith
		posted on 9/26/2007 at 7:54 PM
		</div>
		<div class="comment_text"><p>Thanks for taking the time to write more about threads.  I wonder if it would be valuable to create a library and/or framework for using threads.  It is hard to articulate because programming threads are a new paradigm for a lot of us.  Perhaps something like fusebox for threads with a way to do interthread communication and trap errors and manage joins.<br>I'm excited about this new capability, but I'm having trouble remembering all the places I wanted to use it in the past.<br>"With great power comes great responsibility"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672451">7</a> by DK
		posted on 9/26/2007 at 8:20 PM
		</div>
		<div class="comment_text"><p>Mark Mandel has an interesting blog post on using child threads in threads and accessing the java.lang.thread</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcompoundtheory.com%2F%3Faction%3DdisplayPost%26ID%3D251%3As7IF_E9IaGEZo0cT33p-XTKDnp4&amp;cuid=3321886" rel="nofollow noopener" title="http://compoundtheory.com/?action=displayPost&amp;ID=251">http://compoundtheory.com/?...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672450">8</a> by DanaK
		posted on 9/26/2007 at 9:27 PM
		</div>
		<div class="comment_text"><p>Unles I'm mistaken, it also looks like if you reference the java object you could solve the issue of page reloads spawning another thread that may still be active.</p><p>If you refer to the facing thread docs it has a few good methods that seem like they'd take care of the job:<br><a href="http://disq.us/url?url=http%3A%2F%2Fjava.sun.com%2Fj2se%2F1.5.0%2Fdocs%2Fapi%2Fjava%2Flang%2FThread.html%3Adfzvhq8fl0KhSG5_WFwD9dSZyxI&amp;cuid=3321886" rel="nofollow noopener" title="http://java.sun.com/j2se/1.5.0/docs/api/java/lang/Thread.html">http://java.sun.com/j2se/1....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672453">9</a> by Ronan
		posted on 9/26/2007 at 11:39 PM
		</div>
		<div class="comment_text"><p>It may be a newbie question. Does a CFTHREAD generates another concurrent request?</p><p>If so, If I have a request being executed once. Wouldn't CFTHREAD consume more server resources?</p><p>It could make difference in pics moments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672454">10</a> by barry.b
		posted on 9/27/2007 at 3:49 AM
		</div>
		<div class="comment_text"><p>Ray, just to clarify the use of Application scope:</p><p>you're specifically talking about single users processing, say, one row in a database, yes? eg: a school admin system where multiple admin staff could edit student records ... but only one *should* at any one time?</p><p>so, if you don't need to tie specific application processing to a unique user request, tracking via session scope (for that users processing) is the go? (unique processing per user)</p><p>what if session scope isn't available?</p><p>What I'm getting at is webserver control of ensuring threads are not erroniously re-run vs trying to control this on the client end. Perhaps even a Flex front-end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672457">11</a> by Raymond Camden
		posted on 9/27/2007 at 6:19 PM
		</div>
		<div class="comment_text"><p>@barry.b: I'm not 100% sure I get you - but yes, if the Process was for a single user, then the session scope would make sense. If the Process is meant to be for the entire App, I'd use the Application scpe.</p><p>If the session scope is not available, then make it available. ;)</p><p>@ronan: I'm not entirely sure - sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672456">12</a> by J. Mihai
		posted on 12/17/2007 at 7:54 PM
		</div>
		<div class="comment_text"><p>You can use this <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfchris.com%2Fcfchris%2Findex.cfm%2F2007%2F11%2F30%2FPSA-Use-CFTHREAD-Cautiously%3ADPyx-4YQlzkzp4X7NT1wW-gHcaA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfchris.com/cfchris/index.cfm/2007/11/30/PSA-Use-CFTHREAD-Cautiously">http://www.cfchris.com/cfch...</a>  page as a refernce also. It seems that many are asking questions and there are pretty few sites/ blog that answer these kind of questions. This domain has its subjects more for the developers and not that much on the beginner. I think a FAQ would be useful on any site. I wanted to lauch such thing on my <a href="http://disq.us/url?url=http%3A%2F%2Fwww.jmihai.ro%2Fblog%3AQW32btdG986ZmmBO1qBjJ71RoMc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.jmihai.ro/blog">http://www.jmihai.ro/blog</a>, but I lack the time these days as there are always more important things to do :-) . Hoping you can give me a hand and post few interesting questions and answers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672455">13</a> by Fronk
		posted on 8/5/2013 at 6:57 PM
		</div>
		<div class="comment_text"><p>Are &lt;cfthread /&gt;'s safe to use inside singleton instantiated objects?</p></div>
	</div>
</div>
		