
<div class="comment" id="c_1713734882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734882">1</a> by Jason Presley
		posted on 8/29/2011 at 7:10 PM
		</div>
		<div class="comment_text"><p>Is HTML 5 even ready for production?  Seems like browser support was still very spotty.  Other opinions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734885">2</a> by Raymond Camden
		posted on 8/29/2011 at 7:12 PM
		</div>
		<div class="comment_text"><p>It's very hit and miss. Things in the Form space, which to me are the #1 thing HTML can improve on (seriously - haven't web devs spent billions of hours with forms) is mostly good but COMPLETELY lacking in IE. Canvas is ok, but I've needed to dynamically draw something maybe once in the past ten years.</p><p>Other things work a bit better. Local storage is a nicer way to handle cookie type data. data-* attributes are real useful as well. The history stuff is also cool for Ajax apps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734891">3</a> by existdissolve
		posted on 8/29/2011 at 7:15 PM
		</div>
		<div class="comment_text"><p>Production? No. A little over a year ago, I developed a very simple chat interface using server-sent events, but *at the time* support was so limited (Chrome only), it wasn't worth bothering pursuing.</p><p>Now that FF supports it, though, I might revisit. Obviously, Internet Explorer won't support it until two-thousand-and-never, but there's nothing new about that...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734881">4</a> by Anthony Webb
		posted on 8/29/2011 at 7:23 PM
		</div>
		<div class="comment_text"><p>Has anyone tried this in iOS or android browsers?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734889">5</a> by Raymond Camden
		posted on 8/29/2011 at 7:25 PM
		</div>
		<div class="comment_text"><p>Give me 5 - I'll upload my simple demo and switch to updating a DIV.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734879">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734879">6</a> by Raymond Camden
		posted on 8/29/2011 at 7:30 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Faug292011%2Ftest2.html%3AFF1pYOPeAh90QzndWggslqBe1tQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/aug292011/test2.html">http://www.coldfusionjedi.c...</a></p><p>This is interesting. I tried on my Xoom. No go! I tried on my iPad 2 - worked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734884">7</a> by Raymond Camden
		posted on 8/29/2011 at 7:31 PM
		</div>
		<div class="comment_text"><p>Tested on my Inspire as well - failed there. So looks like Chrome Mobile doesn't support it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734886">8</a> by Sagar Ganatra
		posted on 8/29/2011 at 8:35 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I had posted on Server sent events some time back on my blog: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.sagarganatra.com%2F2011%2F01%2Fserver-sent-events-with-html5-and.html%3AoqCeLIkXhwVhZUl0OsQP7nGIqLk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.sagarganatra.com/2011/01/server-sent-events-with-html5-and.html">http://www.sagarganatra.com...</a>, good to know that it is now supported on FF6. This is better than polling since the EventSource object reconnects to the server side code every three seconds (on Chrome). If you add the open and close events on the EventSource object, you will be able to see these events getting invoked every 3 seconds. This can be changed on the server side by sending 'retry: 5000' (5 secs).</p><p>'text/event-stream' should be set as a content-type for Chrome and FF6 now. Opera expects it to be 'application/x-dom-event-stream', this maybe because it follows WHATWG specification and not W3C. IMO this can be used in production since many users are using Chrome or FireFox as their default browser, a fallback to polling on IE may suffice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734887">9</a> by Raymond Camden
		posted on 8/29/2011 at 8:40 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing this Sagar!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734888">10</a> by Phillip Senn
		posted on 8/29/2011 at 9:05 PM
		</div>
		<div class="comment_text"><p>Ray (and Sagar and others),</p><p>Thank you very much for blogging this.  I had never heard of EventSource before.  It looks like it could be done manually with a setTimeout function doing an Ajax call.</p><p>Is that correct, or am I missing the point?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734892">11</a> by Raymond Camden
		posted on 8/29/2011 at 9:08 PM
		</div>
		<div class="comment_text"><p>I think one advantage is that - compared to setInterval - which you should be using instead of setTimeout - is that if one request takes 10 seconds to run, then it won't run more while it's waiting. Right Sagar?</p><p>Of course, setTimeout - if used in the event handler - would also handle that.</p><p>I think I read in the spec too that it can handle the mobile browser going to sleep and turn itself off?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734880">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734880">12</a> by Sagar Ganatra
		posted on 8/29/2011 at 10:17 PM
		</div>
		<div class="comment_text"><p>Ray, Phillip,</p><p>From the server side, one can make the client wait. Consider this example which I have mentioned in my blog post. Once the EventSource establishes a connection with the server the open event is fired. Now the client is ready to receive any data that the server sends. On the server side one can have a loop that runs say 50 times and in each iteration it sends data to the client (use cfflush) and then sleeps for a second (cfthread action="sleep"). In this way the server side code has run for 50 seconds. Once the server completes its execution it closes and then reestablishes the connection. <br>Code:<br>&lt;cffunction name="sendData"&gt;<br>&lt;!--- Output time ---&gt;<br>	&lt;cfoutput&gt;data: #timeFormat(now(), "medium")#  #Chr(10)#&lt;/cfoutput&gt;<br>	&lt;cfoutput&gt;data: End of this message #Chr(10)#&lt;/cfoutput&gt;<br>&lt;!--- Mark the end of message ---&gt;<br>	&lt;cfoutput&gt;#Chr(10)#&lt;/cfoutput&gt;<br>	&lt;cfflush&gt;<br>&lt;/cffunction&gt;<br>&lt;cfloop from="1" to="50" index="i"&gt;<br>	&lt;cfset sendData()&gt;<br>	&lt;cfthread action="sleep" duration="1000"/&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734890">13</a> by Victor
		posted on 9/28/2011 at 3:51 PM
		</div>
		<div class="comment_text"><p>@existdissolve  but there are pure javascript polyfill, that supports IE 8+, Firefox 3.5+  <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FYaffle%2FEventSource%3AGu8NaShWvic0KEPqlHFewKK7swg&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/Yaffle/EventSource">https://github.com/Yaffle/E...</a> , cross domain request also supported</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734883">14</a> by Phillip Senn
		posted on 1/31/2012 at 8:04 AM
		</div>
		<div class="comment_text"><p>OK, I think I am getting the EventSource concept.  PageA points to PageB.  PageB loops and sleeps continuously on the server until it determines that PageA needs to be notified of something.  It then produces a text/event-stream ouput, which calls back the message event in PageA. If PageB times out, then PageA will reopen the connection after X (3) seconds.<br>So there is still looping and sleeping going on - it's just that it's on the server now instead of the client using a setInterval.</p></div>
	</div>
</div>
		