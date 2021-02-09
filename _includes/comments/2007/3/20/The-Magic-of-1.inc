
<div class="comment" id="c_1713663334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663334">1</a> by DK
		posted on 3/20/2007 at 7:25 PM
		</div>
		<div class="comment_text"><p>when I'm testing code a lot of times I'll paste 'and 1 eq 0' etc in a conditional to test the other side of the if statement</p><p>someone I worked with used to always add an application.devMode and wrap his dumps around that.</p><p>Another person I worked with at one point swore by wrapping all dumps in a structkeyexists(url, "debug") etc.</p><p>Same exact scenario, just different thought patterns on it I guess :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663335">2</a> by todd sharp
		posted on 3/20/2007 at 7:34 PM
		</div>
		<div class="comment_text"><p>If you're going to go that route DK (IE dump everything if you're in dev mode) then why not just use isDebugMode() instead?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663318">3</a> by Darren
		posted on 3/20/2007 at 7:47 PM
		</div>
		<div class="comment_text"><p>I once had a student write a piece of code like this:</p><p>&lt;cfset update_not_required = false&gt;</p><p>... some more code ...</p><p>&lt;cfif NOT update_not_required is false&gt;</p><p>   ... do something ...</p><p>&lt;/cfif&gt;</p><p>I still find that confusing today ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663331">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663331">4</a> by DK
		posted on 3/20/2007 at 7:53 PM
		</div>
		<div class="comment_text"><p>todd - it wasn't really dumping everything. They used it solely for one offs and stuff like that. It was also used not just for dumps but to run other smippets etc. I didn't say it was ideal, just thats how other peoples brain processed a similar concept :D</p><p>I still run into these legacy snippets all over the place from time to time lol.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663337">5</a> by Ben Nadel
		posted on 3/20/2007 at 8:21 PM
		</div>
		<div class="comment_text"><p>I do that all the time. However, it might be more clear to just use the true/false values.</p><p>&lt;cfif true&gt;<br>... do stuff ....<br>&lt;/cfif&gt;</p><p>&lt;cfif (x eq 10) AND false&gt;<br>... do stuff ....<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663340">6</a> by Edward T.
		posted on 3/20/2007 at 8:25 PM
		</div>
		<div class="comment_text"><p>I love using the variable approach in those switches.  It just helps when you have redirects, buried includes, redirects, etc.  Hey, it's not a comprehensive framework for AoP, right?  Just quick debugging....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663338">7</a> by Sam
		posted on 3/20/2007 at 8:58 PM
		</div>
		<div class="comment_text"><p>I like to have a boolean variable, say "development_mode" or "debug_mode", and wrap stuff like that in there.  That way, I just go to one place and turn debug_mode on or off for the entire application.  Less stuff to change if you need to examine more than one place, which I often find myself doing...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663341">8</a> by Tony Petruzzi
		posted on 3/20/2007 at 9:34 PM
		</div>
		<div class="comment_text"><p>I always do application.settings.testmode and make it true or false. Same thing as devmode and what not.</p><p>I really wish that Adobe would do the same thing with cfdump as they did with cftrace. Make it so that if you have debugging turned on in the adiministrator it will show and ignore it if it's not turned on. This way we could leave it in and not have to go through all the switching crap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663343">9</a> by Matt Osbun
		posted on 3/20/2007 at 9:38 PM
		</div>
		<div class="comment_text"><p>I worked at a place that used a combination of the request IP address and the server that served the request to set an application mode of Production (one of the clustered production servers serving a request from the internet), Test (any request made to the test web server), or Development (a development machine serving a request, or a production server serving a request that originated from itself).  We would then use the Application Mode for variable dumps, email addresses and subjects, alerts, and probably a lot of other things that I've managed to forget already.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663322">10</a> by Mark Shepherd
		posted on 3/20/2007 at 10:30 PM
		</div>
		<div class="comment_text"><p>I can see two small advantages of commenting out your debug code, rather than enclosing in &lt;CFIF 0&gt;: (1) the CFIF tag must be evaluated at runtime, which slows down your app a tiny bit; (2) the code is harder to read and understand (as evidenced by this blog post:).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663324">11</a> by todd sharp
		posted on 3/20/2007 at 11:38 PM
		</div>
		<div class="comment_text"><p>You _can't_ seriously think evaluating a &lt;cfif&gt; could possibly result in any noticable performance hit.</p><p>You also can't think a simple evaluation of true or false (1 or 0) is hard to read.  I'm sure Ray was pointing it out as a tip for beginners (don't mean to speak for you Ray)...</p><p>Haven't you ever done:</p><p>&lt;cfif query.recordCount&gt;</p><p>Same premise and hardly unreadable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663323">12</a> by Raymond Camden
		posted on 3/20/2007 at 11:42 PM
		</div>
		<div class="comment_text"><p>To be clear - and I thought it was clear in the post. The situation I described was a case where I needed to _temporarily_ add something to a page. It was not meant for production.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663328">13</a> by Steven Schulman
		posted on 3/21/2007 at 3:14 AM
		</div>
		<div class="comment_text"><p>What do you think about putting &lt;cfset dbLevel = 0 /&gt; at the beginning of the code.</p><p>Then use &lt;cfif dbLevel LT n&gt; whatever &lt;/cfif&gt;.</p><p>You can scatter debugging code with different levels in the &lt;cfif&gt;. I use 1 to 10, where 1 means I always want to see the information when I am debugging and 10 means that I'm desperate.</p><p>I leave the code in and set dbLevel to 0. Whenever I need to debug I start with 1 and work my way up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663325">14</a> by Rob Wilkerson
		posted on 3/21/2007 at 3:16 PM
		</div>
		<div class="comment_text"><p>This gave me a good laugh.  I'm pretty lazy, too, but this particular shortcut never occurred to me.  Usually I'm in a position to use ctl-z/ctl-y to un/redo my temporary comments.</p><p>Thanks for inspiring creative experimentation in the indulgence of laziness. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663327">15</a> by Rick Root
		posted on 3/21/2007 at 5:24 PM
		</div>
		<div class="comment_text"><p>Ray, that's pretty funny - I do this all the time but it's never occurred to me to shorten it like that... I've always done</p><p>&lt;cfif 1 eq 1&gt;</p><p>and</p><p>&lt;cfif 1 eq 0&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663326">16</a> by Joshua Curtiss
		posted on 3/22/2007 at 2:25 AM
		</div>
		<div class="comment_text"><p>Lol! Good stuff! Commenting and uncommenting the dump is always so irritating!</p><p>For commonly-needed dumps, like dumps of the form or session struct, I typically would embed cfdumps in my navigation template, which would display the dumps only when the app is in development mode. HOWEVER, with ColdFire, that won't be necessary anymore, will it?? ;-D</p><p>@Ben: You know, for the longest time, I didn't even realize CF would evaluate expressions in parentheses to boolean values for assignments or conditional expressions. Being of the C++ vintage, where we love to fit as much code into as compact a space as possible, I was very happy when I realized CF supported that. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663330">17</a> by Ben Nadel
		posted on 3/22/2007 at 2:30 AM
		</div>
		<div class="comment_text"><p>@Josh,</p><p>Yeah, CF is pretty sweet!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663329">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663329">18</a> by Joshua Curtiss
		posted on 3/22/2007 at 2:47 AM
		</div>
		<div class="comment_text"><p>Ok, after reading my comment again, I see it is a waste of bytes. First, ColdFire doesn't currently display Form/Session/Application/etc dumps. Although that'd be nice. Secondly, I obviously knew you could use parens in conditional expressions. What I didn't realize is that you could do stuff like: &lt;cfset MyBool=(x GT 10)&gt;. I love that. For some reason, your code snippet triggered this random thought. :-)</p><p>Thanks for bearing with me. It's been a long day.</p></div>
	</div>
</div>
		