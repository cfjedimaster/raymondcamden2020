
<div class="comment" id="c_1713715968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715968">1</a> by Andy Sandefer
		posted on 6/8/2009 at 8:59 AM
		</div>
		<div class="comment_text"><p>This is pretty cool.  Maybe next week you can waste your time with that Flex in the browser window app that can receive push notifications - remember that?  We were going to compare memory usage and you got busy trying to earn a living or something silly like that! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715977">2</a> by daniel
		posted on 6/8/2009 at 10:13 AM
		</div>
		<div class="comment_text"><p>Yeah Andy!! I do remember that  ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715979">3</a> by zac spitzer
		posted on 6/9/2009 at 11:44 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>check out <a href="http://disq.us/url?url=http%3A%2F%2Fwww.openlayers.org%2F%3ATcHDBPnZ1Fcvn3QEFsSIyqAJK0M&amp;cuid=3321886" rel="nofollow noopener" title="http://www.openlayers.org/">http://www.openlayers.org/</a></p><p>it's a API for abstracting away all these company api's<br>so you can be provider independent</p><p>try and avoid commercial mapping API's where ever possible</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715978">4</a> by Raymond Camden
		posted on 6/9/2009 at 3:16 PM
		</div>
		<div class="comment_text"><p>What is wrong w/ a commercial API?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715976">5</a> by zac spitzer
		posted on 6/9/2009 at 3:31 PM
		</div>
		<div class="comment_text"><p>it's vendor lockin, by using openlayers you retain the ability to simply switch mapping providers.</p><p>in developing to say yahoo is you can't<br>just switch over to say VE, Google or openstreet maps, or even your own with something like MapGuide.</p><p>It's future proof, plus you can mix and match your mapping services</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.openlayers.org%2Fdev%2Fexamples%2FbaseLayers.html%3ADURyVw4WCYxdevIeD-RsdjB3KWQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.openlayers.org/dev/examples/baseLayers.html">http://www.openlayers.org/d...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715981">6</a> by zac spitzer
		posted on 6/9/2009 at 3:36 PM
		</div>
		<div class="comment_text"><p>you might find this useful</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fennoble.dreamhosters.com%2Fmapguide-central%2F%3Am-kVXtk9HJ5ssMb8LzIpZhtz3Gk&amp;cuid=3321886" rel="nofollow noopener" title="http://ennoble.dreamhosters.com/mapguide-central/">http://ennoble.dreamhosters...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715982">7</a> by Raymond Camden
		posted on 6/9/2009 at 3:41 PM
		</div>
		<div class="comment_text"><p>While I see your point, I'm not so sure needing to switch providers would be a common occurrence. I'd almost put it up there with switching database types. It _does_ happen, but is rare enough to end up being not something I worry about terribly, and in a properly MVCed application, it becomes even less of a worry. Just my two cents.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715983">8</a> by zac spitzer
		posted on 6/9/2009 at 6:58 PM
		</div>
		<div class="comment_text"><p>Ray, as someone who writes a lotta code, think about code reuse potential.</p><p>Jquery is for browsers, like Openlayers is for mapping.</p><p>If you have a client who live VE and and you prefer google, why redevelop/port the same stuff each time, when you can develop with openlayers?</p><p>I don't get the MVC reference as mapping is rather javascript heavy, porting that is still a pain.</p><p>The licensing terms for the commercial providers can be rather restrictive.</p><p>Of course it depends on what your doing, simple maps stuff aint such a big deal, but once you start working with them, it can get complex real quick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715980">9</a> by Raymond Camden
		posted on 6/10/2009 at 1:16 AM
		</div>
		<div class="comment_text"><p>Well now wait a second. Code I write in jQuery is not going to port to Prototype or Spry. It is specific to the framework. As for the client example, if the client prefers VE, it doesn't matter if I prefer Google. I'll be using VE. :)</p><p>Again - I just don't see switching providers being something that would happen often.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715972">10</a> by Andy Sandefer
		posted on 6/10/2009 at 1:43 AM
		</div>
		<div class="comment_text"><p>Once again someone has found a way to take something that's perfectly fine and over-complicate it (seems to be the theme of the month).  This is becoming all too common.  Think about the events that would lead up to a switch...<br>1.  The currently developed solution does not offer the right type of functionality and a new vendor would provide a better fit. (If this is the case then shame on the Project Managers and the Developer for not figuring this out before 1 line of code was written and doing it right the first time)</p><p>2.  The solution is working fine and then for whatever reason the game is changed, maybe the web service provider tanked and went out of business. (If this happens it is just plain not your fault)</p><p>I used to think that I had to be "Object, Object, Object" and "Framework, Framework, Framework" all of the time and what I've come to realize is pretty simple and honest truth for me which is...<br>Rarely does anyone ever change database vendors on me and I've never gotten anything out of a framework other than a slower version of my original application.<br>Let me play Sean Corfield and say that this is "Right for Me - you do what you want but this works for Me".<br>What works for me is using DBX to quickly generate CRUD which I (perish the thought that you might have to actually get off your ass and write something on your own) copy and paste whatever portions of code I want into MY cfc's.  I use hints and comments all over the place and I create external documentation as well and I typically plan apps around features and functionality rather than the data model.<br>@Zac - before you tell me that my code won't easily allow me to yank a solution from SQL Server and move it to ORACLE I will tell you that it's just not worth creating a slow app over and that the apps are documented well enough to allow for quick adjustments to the code to move from one environment to another.<br>Have at it everyone - tear me apart.  While you're doing that and sifting through your hundreds of lines of auto-generated framework code to give you back a record I should have enough time to run to Chase and deposit a few checks, grab a vanilla latte and have a couple of cigarettes.  Everyone is so worried about whether or not their app will run right on the Moon, Saturn, Jupiter and the Sun that I would wager that most of their apps never get done.<br>@Ray - please keep the examples coming.  I've learned so much from your site and your books even though they were never cluttered with "and now do this in 20 other ways so that you can be prepared for a whole ton of crap that's not in the spec and will most likely never come to pass".<br>I believe that we don't need to see all 1000 ways to skin the cat, just 1 or 2 and we can probably figure out the rest for our particular "favorite personal way" of doing things.<br>I also believe that if someone is nice enough to blog an example and pass down knowledge for free that we probably shouldn't criticize it unless it just flat out doesn't work or is not factual.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715974">11</a> by Raymond Camden
		posted on 6/10/2009 at 1:45 AM
		</div>
		<div class="comment_text"><p>Well, Andy, I'm not so sure Zac is trying to overly complicate things, nor do I think he is criticizing my approach even. I took his comments as his advice on it, nothing more, nothing less. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715975">12</a> by Andy Sandefer
		posted on 6/10/2009 at 1:47 AM
		</div>
		<div class="comment_text"><p>Damn't Ray I was trying to cause a fight and you have to come along and have a tone as calming as the HAL 9000.<br>Thanks for nothing ;)</p></div>
	</div>
</div>
		