
<div class="comment" id="c_1713727678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727678">1</a> by Raymond Camden
		posted on 11/17/2010 at 3:45 AM
		</div>
		<div class="comment_text"><p>So a guy on Twitter - ValentineErb - just made a darn good point and I should have brought it up. If your site makes use of fancy CSS for layout (and by fancy I mean anything beyond my meager skills ;) than it is possible that your error, or CF's default error display, may not render correctly. I see this all the time with debugging information.</p><p>Unfortunately there isn't much you can do about that outside of hiding your normal site layout for an error. I can see doing that in development to make errors easier to read for both QA and development.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727680">2</a> by Chad
		posted on 11/17/2010 at 3:47 AM
		</div>
		<div class="comment_text"><p>I have seen this 500 error when i use IE.  It is only certain error types.  I switch to FireFox or Chrome and i see the real error.  I will check my Enable HTTP Status Codes.  I always assumed it was something strange with IE.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727679">3</a> by Daniel Garcia
		posted on 11/17/2010 at 4:14 AM
		</div>
		<div class="comment_text"><p>@Chad - You can actually turn off HTTP friendly errors in IE.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftechnet.microsoft.com%2Fen-us%2Flibrary%2Fcc778248%2528WS.10%2529.aspx%3AXyobjsx06bOzaunCWSW4aJQKsOQ&amp;cuid=3321886" rel="nofollow noopener" title="http://technet.microsoft.com/en-us/library/cc778248%28WS.10%29.aspx">http://technet.microsoft.co...</a></p><p>That may help as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727682">4</a> by Chris Mallinson
		posted on 11/17/2010 at 4:21 AM
		</div>
		<div class="comment_text"><p>I always give myself back-door access to raw error messages with an admin function or switch that bypasses "nice" error pages for my session or IP.</p><p>For CF errors that are messed up by CSS, I usually just use the "developer" menu in Safari or Firefox to turn off CSS entirely.</p><p>I often do all my troubleshooting with CSS turned off.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727681">5</a> by JC
		posted on 11/17/2010 at 4:51 AM
		</div>
		<div class="comment_text"><p>I usually just have them email me a cfdump of cfcatch. That does the trick most of the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727686">6</a> by Michael
		posted on 11/17/2010 at 4:55 AM
		</div>
		<div class="comment_text"><p>When I work on a site to ensure <br>1.) That i handle errors appropriately even when I don't know they are occurring.<br>2.) That I know what the errors are and not letting people who don't need to know.  I normally have onError mail me the page, the address, the Exception, the referer, the form fields, the session fields, and any other relevant configuration options.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727694">7</a> by shakti
		posted on 11/17/2010 at 9:07 AM
		</div>
		<div class="comment_text"><p>Wont just turning on debugging show him the exact problem, even errors wrapped in try catch statements should show up in debugging i think.....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727693">8</a> by Raymond Camden
		posted on 11/17/2010 at 7:21 PM
		</div>
		<div class="comment_text"><p>Debugging would show an error, but only in a very short form. Not the complete stack trace.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727699">9</a> by Larry C. Lyons
		posted on 11/17/2010 at 9:54 PM
		</div>
		<div class="comment_text"><p>@Ray: "If your site makes use of fancy CSS for layout ...than it is possible that your error, or CF's default error display, may not render correctly."<br>That's where the dockable.cfm  option come in very handy - that nicely bypasses all the fancy CSS that messes up the classic debugging display. Mind you the popup window does get old very fast when it shows up on each and every page.</p><p>larry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727697">10</a> by JC
		posted on 11/17/2010 at 10:02 PM
		</div>
		<div class="comment_text"><p>I remember way back when I was working with Websphere for something, my coworker set it up to write all the errors to a jabber server, and we kept a copy of GAIM open... that way we had all the stack trace stuff in front of us without having to do anything with our error handling. I wonder now and then if CF could do something similar. But usually just having it email me the cfdump of cfcatch does the trick, because it's so rare that I encounter anything that's screwed up enough to need any more detail than that in any system that's already got the error handling added to it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727698">11</a> by Raymond Camden
		posted on 11/17/2010 at 10:09 PM
		</div>
		<div class="comment_text"><p>There is a company who made it SUPER easy to send IMs. I forget their name - I reviewed them on the blog about two years ago.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727696">12</a> by Raymond Camden
		posted on 11/17/2010 at 10:09 PM
		</div>
		<div class="comment_text"><p>@Larry - yeah - thats an option too - but I don't use it for exactly that reason - the popup.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727702">13</a> by David
		posted on 11/22/2010 at 6:26 PM
		</div>
		<div class="comment_text"><p>[Shameless-plug]<br>Step-debugging is the de-facto in many other languages and would be very helpful here. FusionDebug can break on exception and show you exactly what's happening without needing to check through the stack of code for try/catch. It can run against your production server without your users needed to know anything about it. It's *very* fast and plugs into Flash Builder/CFEclipse/CF Builder/any-other-eclipse-environment.<br>[/Shameless-plug]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727703">14</a> by Grant Powell
		posted on 9/6/2013 at 5:03 PM
		</div>
		<div class="comment_text"><p>Genius!  Thanks, Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727701">15</a> by Alex G.
		posted on 7/25/2014 at 10:15 PM
		</div>
		<div class="comment_text"><p>Through the years I hit these nuggets from time to time.  Thanks again.  It was driving me nuts and didn't think about that last step.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727704">16</a> by Bob
		posted on 8/24/2014 at 4:47 PM
		</div>
		<div class="comment_text"><p>However, using that "Enable HTTP status codes" option allows for better error handling though IIS. Especially for the 404 missing cfm page issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727700">17</a> by Robert
		posted on 10/30/2014 at 4:24 AM
		</div>
		<div class="comment_text"><p>Thanks for this pointer.  I question why the gentleman wasn't checking his ColdFusion logs to see what they identified as the source of the error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609065068">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_kndsyvU3HX.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609065068">18</a> (In reply to <a href="#c_1713727704">#16</a>) by sgr
		posted on 4/6/2016 at 11:09 AM
		</div>
		<div class="comment_text"><p>Hey Bob, how did you resolve the issue regarding to the wrong status code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3308601487">
	<div>
		<img src="https://disqus.com/api/users/avatars/leonardcarter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3308601487">19</a> by Leonard Carter
		posted on 5/16/2017 at 3:21 PM
		</div>
		<div class="comment_text"><p>You, sir, are a golden god! Seven years on, and this post is still saving sanity. I just got my error messages to appear on our dev server for the first time in ages, thanks to you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3308605749">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3308605749">20</a> (In reply to <a href="#c_3308601487">#19</a>) by Raymond Camden
		posted on 5/16/2017 at 3:24 PM
		</div>
		<div class="comment_text"><p>Glad it helped. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3703814224">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_P1voMsJbU8.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3703814224">21</a> by Saurabh Misra
		posted on 1/12/2018 at 4:17 AM
		</div>
		<div class="comment_text"><p>Thank you for this article. In my case, "Enable HTTP status codes" and also other settings were proper. But there were some settings in IIS for redirecting to a static HTML page if a 500 error code was returned from CF. I modified those and also modified the web.config file as per this SO answer <a href="https://disq.us/url?url=https%3A%2F%2Fstackoverflow.com%2Fa%2F3938439%2F1932141%3AZfuMKrpyalKfBOWKxKRvWBMa5SA&amp;cuid=3321886" rel="nofollow noopener" title="https://stackoverflow.com/a/3938439/1932141">https://stackoverflow.com/a...</a> and started getting the default CF error response.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3759163993">
	<div>
		<img src="https://disqus.com/api/users/avatars/james_cushing.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3759163993">22</a> by James Cushing
		posted on 2/15/2018 at 10:14 AM
		</div>
		<div class="comment_text"><p>Ray, part of me hopes this is intentional just for the irony, but the "guide" link in your first paragraph throws a 404. Just thought you should know!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3759326774">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3759326774">23</a> (In reply to <a href="#c_3759163993">#22</a>) by Raymond Camden
		posted on 2/15/2018 at 1:18 PM
		</div>
		<div class="comment_text"><p>Heh, no, it is a mistake. I'll fix. (Should be up in 15 minutes.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3759356418">
	<div>
		<img src="https://disqus.com/api/users/avatars/james_cushing.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3759356418">24</a> (In reply to <a href="#c_3759326774">#23</a>) by James Cushing
		posted on 2/15/2018 at 1:41 PM
		</div>
		<div class="comment_text"><p>All good now, thanks Ray. Gonna go have a read of that guide and level-up my CF error handling skills :)</p></div>
	</div>
</div>
		