
<div class="comment" id="c_1713685130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685130">1</a> by James Allen
		posted on 8/16/2008 at 11:21 PM
		</div>
		<div class="comment_text"><p>I didn't know you did Java Ray - have you done alot of it in the past?</p><p>How does it feel doing non-CF stuff then? I can imagine it must be quite a change of style to say the least. Is a lot of your work going to be focused on Java rather than CF?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685123">2</a> by Jake Munson
		posted on 8/16/2008 at 11:52 PM
		</div>
		<div class="comment_text"><p>I agree about your "shortness" comment (in reference to Groovy and jQuery).  I had the exact same problem when I tried to learn jQuery.  They say it's super simple, like CF, but it's not that easy to learn, imo.  I think it's one of those things that once you get it, you say, "Ah, now I get it!  This IS very cool and easy!".  But some folks "get it" quicker than others, apparently.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685124">3</a> by Raymond Camden
		posted on 8/17/2008 at 12:06 AM
		</div>
		<div class="comment_text"><p>@JA: I would not say I "do" Java. I've of course been exposed to it over the years. I did one entire web site in JSP (with a few classes) about 4 years ago. I did a tiny bit of Java coding for Macromedia back when I was on the CF engineering team. But I'm really just a 'trifler' when it comes to Java.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685115">4</a> by Sean Corfield
		posted on 8/17/2008 at 4:43 AM
		</div>
		<div class="comment_text"><p>Re: JBoss - once Eclipse is setup correctly, JBoss is pretty much invisible. Eclipse compiles your code when it changes and it redeploys your code to the server and then restarts the server. All automatically. It's only a pain when it isn't configured right (although the Groovy Builder in Eclipse sometimes seems to "forget" to compile files until you tell Eclipse to "Clean..." the project).</p><p>I've always deployed CF on top of a Servlet container (Tomcat) or a JEE Server (mostly JRun but often JBoss) so, to me, CF always runs on a Java Application Server and that's just the way of the world. I guess it just shows how transparent Macromedia/Adobe have made the Standalone deployment of CF-on-JRun!</p><p>As for TDD... yeah, that really does take some getting used to but now that I don't even try running my AIR app until I've run all my unit tests, life is less frustrating. But right now we still don't have many unit tests - we will be writing a lot more :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685125">5</a> by marc esher
		posted on 8/17/2008 at 6:15 PM
		</div>
		<div class="comment_text"><p>back when i was playing with the webwork framework for java (now struts2), I really came to appreciate using jetty as a development container. No server restarts (well, usually), no waiting for containers to stop and start on each save, etc. It was really nice. This was particularly useful when working on the front-end stuff (jsp, velocity) and tweaking the interface.</p><p>Take a truly "enterprisey" app like Jira, by Atlassian. Those guys are a world-class java shop. They crank out tons of (good) code. I highly doubt they're waiting for app servers to restart every time they save.</p><p>If there is an upshot to the forced restarts, though, it's that it makes the perceived pain of TDD much less so. It also has this nice side effect of encouraging decoupling, in that you're doing yourself a favor every time you write business logic that is easier to test and aren't reliant on in-container testing (ala cactus).</p><p>it's been several years since I was doing all that though. One pain point for me was always the annoyance of having to restart after changing the spring config file. I remember at that time there was a fair amount of community "outcry" for spring to solve that problem. Do you know if they've done so?  Just curious is all.</p><p>thanks for the post ray. it's neat watching other people learn and teach.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685126">6</a> by James Allen
		posted on 8/17/2008 at 6:41 PM
		</div>
		<div class="comment_text"><p>@Ray</p><p>What I mean is, are you now going to be doing lots of Java work which is why your getting so involved in these Java technologies?</p><p>Just wondering how this will be tying into your Coldfusion work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685132">7</a> by Raymond Camden
		posted on 8/17/2008 at 9:53 PM
		</div>
		<div class="comment_text"><p>One place where pure Java can shine over CF is in the model layer, especially when creating lots of beans. So we may be looking at that as a way to ensure that layer of our platform is as speedy as possible.</p></div>
	</div>
</div>
		