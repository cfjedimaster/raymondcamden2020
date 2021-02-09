
<div class="comment" id="c_1713726527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726527">1</a> by Brian Rinaldi
		posted on 9/20/2010 at 2:04 AM
		</div>
		<div class="comment_text"><p>Heh, did you essentially rebuild Adobe Wave?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726528">2</a> by Raymond Camden
		posted on 9/20/2010 at 2:54 AM
		</div>
		<div class="comment_text"><p>Sure, except mine is useful.</p><p>#ohnohedidnt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726529">3</a> by Dave Ferguson
		posted on 9/20/2010 at 5:45 PM
		</div>
		<div class="comment_text"><p>This is cool.. However, is there a way to do the alert messages so they are more, um, not alert ish?  More along the lines of the alerts from tweetdeck or skype?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726530">4</a> by Raymond Camden
		posted on 9/20/2010 at 5:52 PM
		</div>
		<div class="comment_text"><p>Describe what you mean more. The answer is - most likely - yes. With NativeWindows you can do pretty much anything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726531">5</a> by salvatore fusto
		posted on 9/20/2010 at 5:56 PM
		</div>
		<div class="comment_text"><p>Ray, cool post.<br>I'd know if it is possible to send the alert not to all connected users, but only to aprt of them, may be only one.<br>Regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726643">6</a> by Raymond Camden
		posted on 9/20/2010 at 5:58 PM
		</div>
		<div class="comment_text"><p>Yes - BlazeDS/LCDS supports subtopics - a way to filter communication. You could use that to create a msg for one user.</p><p>Please take the above with a small grain of salt. I know about that feature - but am not an expert on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726649">7</a> by salvatore fusto
		posted on 9/20/2010 at 6:06 PM
		</div>
		<div class="comment_text"><p>in latin: cum grano salis :)<br>this is an interesting argument: my goal is to find a method to make differents desktop applications, located in different places, communicating  using an internet bridge, such as LCCS/Blazsds. <br>Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726651">8</a> by Dave Ferguson
		posted on 9/20/2010 at 6:11 PM
		</div>
		<div class="comment_text"><p>@ray what I mean is being able to create a pretty alert, or even farther with an interactive alert.  I have seen it done using a flex based air app but never an html app.</p><p>@salvatore As Ray stated, you can use subtopics to send messages to specific people.  This needs to be setup on the sender and the receiver.  Also, the blase channel setup needs to have subtopics enabled or they will not work.</p><p>A sub topic on the publisher would look something like...<br>blazeMessage.headers["DSSubtopic"] = "Messaging.user.1234"</p><p>The client would then have: <br>consumer.setSubtopic("Messaging.user.1234");</p><p>This would make it so they would only see messages on that topic.  The topic is arbitrary so you can set it to what ever you want.  I always use dot notation so my messages don't end up colliding and the topics stay unique.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726641">9</a> by Raymond Camden
		posted on 9/20/2010 at 6:13 PM
		</div>
		<div class="comment_text"><p>@Dave: Not sure what to say - but - I think the answer is just plain yes. I mean, I went with alert() because it was built in. I could have used a new HTML window using "normal" HTML/JS. I could also use NativeWindows in AIR, which gives me a bit more control (like no chrome).</p><p>So... for now the answer is just yes. If you want to get more specific, we can try to come up with a demo together. Know what I mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726648">10</a> by Dave Ferguson
		posted on 9/20/2010 at 7:01 PM
		</div>
		<div class="comment_text"><p>Fine... make me do research and figure stuff out.. I see how you are.. making me learn and stuff.</p><p>This will cause a new window to open when a button is clicked.  You could easily tie it into an event such as a blaze return.  I have not tested this in a real word scenario but it did work as expected in my basic testing.</p><p>var options = new air.NativeWindowInitOptions();<br>options.systemChrome = "none";<br>options.type = "utility";<br>var windowBounds = new air.Rectangle(200,250,400,150);</p><p>$(document).ready(function(){		<br>	$("#launchBtn").click(function(){	<br>		var newHTMLLoader = air.HTMLLoader.createRootWindow(  true, options, true, windowBounds);<br>		newHTMLLoader.load(new air.URLRequest("newwindow.html"));		<br>	});			<br>});</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726647">11</a> by Raymond Camden
		posted on 9/20/2010 at 7:06 PM
		</div>
		<div class="comment_text"><p>NativeWindows are real nice for making an app look more... applicationy. ;) The article I linked to with the Toast stuff makes use of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726650">12</a> by Gary F
		posted on 10/1/2010 at 12:40 AM
		</div>
		<div class="comment_text"><p>Hi Ray. Will BlazeDS help reduce server traffic or will it communicate separately with each client? What I'm getting at is if there are 1000 desktops running your AIR app and an alert is generated at the server, will the server attempt to contact 1000 clients individually? Or if the client polls the server does the server keep receiving 1000 requests each time? Would work across the Internet on port 80? Sorry for so many questions. I'm trying to gauge what the load is like compared to using an RSS feed. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726646">13</a> by Dave Ferguson
		posted on 10/1/2010 at 1:08 AM
		</div>
		<div class="comment_text"><p>I am not Ray but...  Every client will maintain an open connection the server.  So, if you have 1000 air clients you will have the same number of BlazeDS connections to the server open at any given time. Yes it works over port 80, you can also change the port if you choose.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726642">14</a> by Greg Wilson
		posted on 10/1/2010 at 1:14 AM
		</div>
		<div class="comment_text"><p>1000 message consumers is going to probably be too much for BlazeDS because each connection ties up a thread.  I hate to sound like a commercial, but LiveCycle Data Services has features that will handle it (and lots more).  LCDS has RTMP and NIO (non blocking IO) that can handle 100k+ connections.  All of this assumes that you need the alerts to go out near-real-time.  If a 2 minute delay is ok, you could probably setup the polling params to only hit the server for brief periods and get more users onboard.</p><p>Greg</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726645">15</a> by Raymond Camden
		posted on 10/1/2010 at 1:18 AM
		</div>
		<div class="comment_text"><p>Thanks Greg and Dave!</p></div>
	</div>
</div>
		