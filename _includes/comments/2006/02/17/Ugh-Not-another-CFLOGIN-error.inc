
<div class="comment" id="c_1713650248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650248">1</a> by David Collie
		posted on 2/17/2006 at 5:56 PM
		</div>
		<div class="comment_text"><p>hehe, I really admire your persistence with using CFLOGIN!</p><p>Your shared experiences have been invaluable when it comes to CF's approach to this issue and when we are faced with using/supporting it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650252">2</a> by fuzie
		posted on 2/17/2006 at 6:21 PM
		</div>
		<div class="comment_text"><p>"I started out as a huge fan of roles based security, but the issues I keep running into really make me think that it may be time to leave it."</p><p>What's your next favorite option?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650251">3</a> by Peter Tilbrook
		posted on 2/17/2006 at 6:51 PM
		</div>
		<div class="comment_text"><p>Persevere Ray, or let the CF team know so they can tighten it up for Scorpio!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650254">4</a> by Raymond Camden
		posted on 2/17/2006 at 7:10 PM
		</div>
		<div class="comment_text"><p>fuzie: By hand, the way I did it in the past.</p><p>Peter: I'm on that. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650256">5</a> by Dave Carabetta
		posted on 2/17/2006 at 10:07 PM
		</div>
		<div class="comment_text"><p>Funny, I just got the same error from my blog (although only 1...I guess your traffic pattern's different from mine!), but mine says: 'Can not decode string "deleted".' It was also in the cflogin tag, but I haven't had to go dig in and see how to replicate the error. I'm using your latest BlogCFC release. I'm not looking for an "answer" from you, just pointing out that you're not alone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650250">6</a> by Dave Carabetta
		posted on 2/17/2006 at 10:12 PM
		</div>
		<div class="comment_text"><p>Funny, I just got the same error from my blog (although only 1...I guess your traffic pattern's different from mine!), but mine says: 'Can not decode string "deleted".' It was also in the cflogin tag, but I haven't had to go dig in and see how to replicate the error. I'm using your latest BlogCFC release. I'm not looking for an "answer" from you, just pointing out that you're not alone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650255">7</a> by Brett Liotta
		posted on 2/18/2006 at 1:13 AM
		</div>
		<div class="comment_text"><p>What if you're only using CFLOGIN with loginStorage="session"?  Do you see this same error happening in that confirguration?  B/c it looks like this is a cookie problem with using loginStorage="cookie".  so maybe the cflogin session storage won't see this error..?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650253">8</a> by Raymond Camden
		posted on 2/18/2006 at 1:15 AM
		</div>
		<div class="comment_text"><p>I am using loginStorage="session".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650269">9</a> by Brett Liotta
		posted on 2/18/2006 at 2:35 AM
		</div>
		<div class="comment_text"><p>tell me if i'm wrong:</p><p>if i use session for the loginstorage, cfauthorization is only found in the session scope.  it seems weird to me to find cfauthorization in your cookie if your using loginstorage=session.  no?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650268">10</a> by Raymond Camden
		posted on 2/18/2006 at 2:43 AM
		</div>
		<div class="comment_text"><p>True - I forgot that. My error handlers isn't dumping session.</p><p>Of course, now the error is gone. THe odd thing is that other folks saw it too.</p><p>I -did- hear back from my contact at Adobe, so more news may come soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650266">11</a> by Derek P
		posted on 2/18/2006 at 2:53 AM
		</div>
		<div class="comment_text"><p>interesting issues your having. I did a bit of research into the possibilities of using cflogin or my own homegrown security system as well. I decided to build my own because then I knew exactly how it worked and what to expect from it...I do however like that cflogin ties into the CFC's and can specify which roles have access to what CFC's...my security controls are just above the CFC level so unfortunately I'm not as secure, but to execute pages that use those CFC's, well...thats a whole different issue :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650267">12</a> by Zach Pitts
		posted on 8/30/2006 at 2:26 AM
		</div>
		<div class="comment_text"><p>I just stumbled upon this discussion while looking for help on a similar topic.  In my experience, the only way I could get CFLOGIN with loginStorage=Session to work was to force a CFAUTHORIZATION cookie.</p><p>&lt;cfparam name="SESSION.CFAUTHORIZATION" default=""&gt;<br>&lt;cfcookie name="CFAUTHORIZATION_#APPLICATION.applicationname#" value="#SESSION.CFAUTHORIZATION#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650278">13</a> by Jason Durham
		posted on 7/14/2007 at 1:49 AM
		</div>
		<div class="comment_text"><p>I just fell into the same pit.  I should have listened to my buddies...  what's the point in having 'neat' features if they aren't reliable?</p><p>So... my application is nearly completed.  I just went back through it to encrypt my passwords before I publish/test it with other people.  Now I'm getting the same error.</p><p>I'm not using &lt;cfapplication&gt; at all.  For the most part, I'm working right out of WACK to handle my authentication and roles.</p><p>The good news is... I get to sleep on it until Monday.  Hopefully someone here can help me... otherwise it's time to ditch cflogin. *beats head against wall*</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650275">14</a> by Jason Durham
		posted on 7/16/2007 at 8:11 PM
		</div>
		<div class="comment_text"><p>This fixed it for me...</p><p>	&lt;!---Enable session variables for user authentication---&gt;<br>	&lt;cfset this.sessionManagement=true&gt;<br>	&lt;!---Store login info in session---&gt;<br>	&lt;cfset this.loginstorage="session"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650276">15</a> by Mark Ireland
		posted on 2/21/2008 at 5:01 AM
		</div>
		<div class="comment_text"><p>What we need here is some code that tests for the sessionCount when a user logs out and the sessionCount when a user timesout.</p><p>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650277">16</a> by robert shires
		posted on 12/14/2009 at 11:41 AM
		</div>
		<div class="comment_text"><p>I just ran into this in CF9. I have an application with the name 'somename-MG' with the following settings:<br>&lt;cfset this.sessionManagement = true&gt;<br>&lt;cfset this.sessionTimeout = createTimeSpan(0,0,10,0)&gt;<br>&lt;cfset This.loginstorage="session"&gt;</p><p>I found that when I changed the name of the application by removing the "-" to "somenameMG" it fixed it up.</p></div>
	</div>
</div>
		