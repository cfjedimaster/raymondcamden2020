
<div class="comment" id="c_1713726358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726358">1</a> by todd sharp
		posted on 9/8/2010 at 10:11 PM
		</div>
		<div class="comment_text"><p>Interesting approach Ray.  Here's what I've done in the past:</p><p>    * Log a timestamp of the last 'hit' by a given user in their session<br>    * Create a simple facade that looks at the time difference between the last hit and the current time<br>    * Create a ajax proxy to query that session facade<br>    * Make sure the proxy request does not update the 'last hit' - otherwise your session will never time out<br>    * Run a call to the session facade (via the ajax proxy) on a set interval<br>    * Evaluate the inactivity period, if in a 'warning' period (say between 15-19 minutes) display a modal window warning the user.<br>    * If the user chooses to extend the session, ping the session facade which will update the 'last hit' variable.<br>    * If the inactivity is beyond the session timeout (I usually go with &gt;= 19 minutes display a modal (non-closable) window telling them the session has timed out</p><p>(read more: <a href="http://disq.us/url?url=http%3A%2F%2Fcfsilence.com%2Fblog%2Fclient%2Findex.cfm%2F2008%2F4%2F9%2FManaging-Sessions-In-CF-Ajax-Applications%29%3AyrJX8JWfKJdONrYn5inGBZR5JhI&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsilence.com/blog/client/index.cfm/2008/4/9/Managing-Sessions-In-CF-Ajax-Applications)">http://cfsilence.com/blog/c...</a></p><p>Only thing with your method is that you'd have to modify it a bit to work with Flex (which has the same potential problem really).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726352">2</a> by MikeG
		posted on 9/8/2010 at 10:14 PM
		</div>
		<div class="comment_text"><p>In addition to handling timeout (or in lieu of) why not just make it so that the session cannot time out (unless server restarts).  It is easy to do.  In the old days it was a javascript timer that opened a pop-up window at coord 5000,5000 that had cfid/cftoken in the location url.  The pop-up window closed itself.  The new window request would "restart" the session timout timer.  Other than freaking users out when a browser would show up and then fall of the task bar it worked well for most folks.  When ajax became more mainstream and pop-up blockers more prevalent, the pop-up changed to an ajax call, with session.urltoken added to the url.  This can be configured to be totally silent, or can generate a confirm dialog ("Hey, you! Are you done reading the page or do you need more time?") requiring user interaction.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726354">3</a> by todd sharp
		posted on 9/8/2010 at 10:17 PM
		</div>
		<div class="comment_text"><p>@MikeG - that has the potential to be really, really, really bad.  First of all - session timeout, among other things, protects dumb users.  Imagine you left your Amazon account logged in and went to lunch.  The girl in the cube next door decides she wants to buy a few hundred pairs of shoes and you're stuck with the bill.  Secondly, sessions timeout to keep the servers memory at a healthy, manageable level.  Imagine the size of your session scope after 30+ days of non expiring sessions....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726355">4</a> by Raymond Camden
		posted on 9/8/2010 at 10:18 PM
		</div>
		<div class="comment_text"><p>@MikeG: The whole point of a session timeout is to help secure your application. If you really wanted no time out, I'd just use a super high timeout value. But I wouldn't recommend it.</p><p>@Todd: Why would I have an issue with Flex? In Flex you can also use fault handlers for service calls. Could I not then just use them?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726357">5</a> by MikeG
		posted on 9/8/2010 at 11:05 PM
		</div>
		<div class="comment_text"><p>I am going to have to respectfully disagree with both of you.  First, @Todd, my post is essentially what your post said, with an option to either maintain the session silently or to ask the user if they want to extend it - you only ask them to extend it - which I would do for say a banking app.  And when is the last time a user spent 30 days one of your web apps?  As soon as they leave, your\my routine is no longer running and the session will timeout.<br>@Ray - the session timeout is not a security feature, it is a way to keep ram cleaned out..A logout routine that kills the session is a security feature.  Relying on a session timeout for security is &lt;ahem&gt; lazy - sorry.</p><p>My job as a developer is to make the user experience super simple - let them focus on the task at hand - A user should not be expected to keep up with low level tasks like keeping their session alive.  So, instead, you create a very small session timeout 3-5 minutes; and keep it alive --while they are on your site--.  People get phone calls, called out into the front yard to deal with skinned knees, get interrupted by twitter or people wandering into their cube - and sometimes go to lunch.  Their short attention span should not cause them to have to start the task over.  Yes, it does have the potential to be bad, but so do asteroids hitting the earth.  How likely is it going to happen?  What is the risk?  When you design your app you have to determine what is OK, what is not.  In the case of LHP, keeping a session alive for a user all day is not a big deal - and that user will appreciate not having to log in every time they want to work a bug.  For an ecomm app, it could be a bad idea.  Sometimes we geeks need to step back and take a deep breath and remember that people use our apps, and there is no way we can protect them all; nor should we.  Remember, nothing is  foolproof to a sufficiently talented fool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726349">6</a> by Raymond Camden
		posted on 9/8/2010 at 11:15 PM
		</div>
		<div class="comment_text"><p>Woot! An argument. :&gt;</p><p>First off - no one is saying to rely _only_ on session timeout. It is a part of a whole package of things you can do. Be honest - user's don't logout. Some do - most won't. So having a basic "if you are idle for N you are gone" is a VERY good backup. How do you differentiate between a user going to lunch and a user who was at a coffee shop going home? You can't.</p><p>(I said "First Off", but I think that's it) <br>(No, I lie, I've got more.)</p><p>Ecom: Many ecommerce sites will store your cart in a permanent scope (like client). So while you may log out, your cart still has items. The important stuff like your name, CC info, etc, is expired safely, but not your items.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726360">7</a> by MikeG
		posted on 9/9/2010 at 12:47 AM
		</div>
		<div class="comment_text"><p>I agree, users don't log out, but when a user is done with your site they make like a tree..so your session will time out naturally, but yours will do it in what, 20 minutes?, mine will do it in 3-5..</p><p>Shame on the user at the coffe shop going home..but, be honest, how many users at the coffe shop go home without at least closing thier browser.  The days of internet cafe's with thier own 'puters are almost over; folks have ipads, netbooks, laptops and smart phones. but enough already; there is enough fodder here for folks to think about when planning an application.</p><p>About your post.. It is a good way to handle session timeouts for ajax calls where the whole page is a single ajax call.  What would you do if your ajaxy stuff is in a widget, or dynamically changing a section of a form based on user input - and the user got interrupted.  I think adding ajax into a website means you rethink how you "traditionally" managed a web app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726350">8</a> by Raymond Camden
		posted on 9/9/2010 at 12:49 AM
		</div>
		<div class="comment_text"><p>We will have to agree to disagree on point 1 - so let's move to point 2.</p><p>How is my solution only appropriate for a 'whole' page Ajax app? My demo is specifically _not_ that. It has content - and part of the page is loaded via Ajax.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726359">9</a> by MikeG
		posted on 9/9/2010 at 1:18 AM
		</div>
		<div class="comment_text"><p>well shoot, you got me in devil's advocate mode now...<br> BUT as i read over everything I realize my complaint is not how you catch the error, which is good, it is how you handle it..which is not the crux of the post, so I will just shut up now..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726361">10</a> by Raymond Camden
		posted on 9/9/2010 at 1:20 AM
		</div>
		<div class="comment_text"><p>Thank you for making this lively. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726351">11</a> by MikeG
		posted on 9/9/2010 at 1:24 AM
		</div>
		<div class="comment_text"><p>I still think you should keep the session alive for the user ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726363">12</a> by Aegis
		posted on 9/9/2010 at 6:19 AM
		</div>
		<div class="comment_text"><p>I use my dodgy User Love CFC - <a href="http://disq.us/url?url=http%3A%2F%2Fuserlove.riaforge.org%2F%3AiGQtpbrB0Q1n0Q3gi3_pG42vBfc&amp;cuid=3321886" rel="nofollow noopener" title="http://userlove.riaforge.org/">http://userlove.riaforge.org/</a> so the users are prompted to re-login again but then it continues on with whatever request they made.</p><p>And i just noticed i still have an open issue on the copy on RIAforge &gt;&lt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726362">13</a> by Aegis
		posted on 9/9/2010 at 6:23 AM
		</div>
		<div class="comment_text"><p>oops, I should qualify that - in using User Love, I haven't had any issues with it with AJAX *yet*, but 99% of the calls I make with it are updating an area that actually has room to display a login box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726353">14</a> by Andrew Scott
		posted on 9/11/2010 at 8:52 AM
		</div>
		<div class="comment_text"><p>I actually covered this awhile ago as well, and I don't use jQuery to do it but ColdFusion instead. Although my blog post shows how to do it per ajax call, you can certainly use parts of what Ray has done with mine to achieve the result people are looking at doing.</p><p>I also use ExtJS to provide an event system if people wish to explore that further.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.andyscott.id.au%2F2010%2F8%2F27%2FHow-to-handle-ColdFusion-session-time-outs-with-Ajax-calls-and-ExtJS%3ANmzmwyf6Ktims2JtSo-LtiNJgec&amp;cuid=3321886" rel="nofollow noopener" title="http://www.andyscott.id.au/2010/8/27/How-to-handle-ColdFusion-session-time-outs-with-Ajax-calls-and-ExtJS">http://www.andyscott.id.au/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726356">15</a> by jason
		posted on 9/13/2010 at 6:54 PM
		</div>
		<div class="comment_text"><p>Hey Ray,<br>I noticed this doesn't work unless "Enable Robust Exception Information " is check in the coldfusion admin. Is this normal to have this option checked for production servers (still assuming you are still hiding this extra info with a custom error)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726364">16</a> by Raymond Camden
		posted on 9/13/2010 at 8:52 PM
		</div>
		<div class="comment_text"><p>As far as I know that should have zero impact on this code. I'll give this a test to confirm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726366">17</a> by jason
		posted on 9/13/2010 at 10:13 PM
		</div>
		<div class="comment_text"><p>It seems like it should without this option checked, but I tested this across Firefox, IE, and Chrome, and I can't duplicate the intended response unless that option is checked in the coldfusion admin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726367">18</a> by Raymond Camden
		posted on 9/14/2010 at 5:13 PM
		</div>
		<div class="comment_text"><p>You are absolutely correct! And yes - you do not want robust exception info turned on production. Thank you for finding this. I will have to correct this asap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726368">19</a> by Raymond Camden
		posted on 9/14/2010 at 5:23 PM
		</div>
		<div class="comment_text"><p>Initial discovery: The main issue is that statusText is now a vague message, not a specific one. So we have a few options. I'm digging into them now so I can hopefully recommend the best one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726370">20</a> by todd sharp
		posted on 9/14/2010 at 5:41 PM
		</div>
		<div class="comment_text"><p>What about adding your own custom header Ray?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726371">21</a> by Raymond Camden
		posted on 9/14/2010 at 5:43 PM
		</div>
		<div class="comment_text"><p>Ok guys. So I have a solution which I think is decent. I'm not 100% convinced it is the best. My plan is to write it up as an update to this entry and edit the end of this entry to link to it. (Since not everyone reads comments.)</p><p>Here is the solution I used.</p><p>Within my Application.cfc, when a session timeout error occurs, I add a new header to the response. Unfortunately you can't use cfheader in cfscript yet so I have to use an include, which is kind of silly. But anyway, I do:</p><p>public void function onError(exception,eventname) {<br>	if(arguments.exception.rootcause.message == "SessionTimeout") {<br>		include "header.cfm";<br>		throw(message=arguments.exception.rootcause.message);<br>	}<br>	writelog(file='application', text='my onerror ran: #serializejson(arguments.exception.rootcause.message)#');<br>}</p><p>My header.cfm is just:</p><p>&lt;cfheader name="SessionTimeout" value="1"&gt;</p><p>Then I modified my JS to check for the header. I'd never done that before in JS but it was pretty trivial:</p><p>var sessionTimeout = x.getResponseHeader("SessionTimeout");<br>if(sessionTimeout == 1) {<br>	alert("Your session has timed out.");<br>	location.href = 'login.cfm';<br>}</p><p>I'll be posting this as a full entry later today, so any comments before then are definitely welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726372">22</a> by Raymond Camden
		posted on 9/14/2010 at 5:44 PM
		</div>
		<div class="comment_text"><p>Holy fracking cow Todd. Talk about great minds, eh? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726373">23</a> by todd sharp
		posted on 9/14/2010 at 5:45 PM
		</div>
		<div class="comment_text"><p>Word up :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726378">24</a> by jason
		posted on 9/14/2010 at 10:07 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, I'm glad it wasn't just me, I hate it when that happens. Your post pointed me in the right direction for handling this issue though. My solution ended up being similar to yours.</p><p>I add a header to the response with cfheader and in the javascript, I used ajaxSetup and in the complete option i just checked for the custom header like this:</p><p>if(XMLHttpRequest.getResponseHeader('error') != null &amp;&amp; XMLHttpRequest.getResponseHeader('error') == 'SessionTimeout')</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726377">25</a> by Raymond Camden
		posted on 9/16/2010 at 7:46 AM
		</div>
		<div class="comment_text"><p>Follow up: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2010%2F9%2F15%2FHandling-session-timeouts-in-Ajax-applications--Follow-up%3A6V_zsPZE4n212Cu4KxPBwKufrkg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2010/9/15/Handling-session-timeouts-in-Ajax-applications--Follow-up">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726381">26</a> by Phillip Senn
		posted on 12/27/2010 at 11:47 PM
		</div>
		<div class="comment_text"><p>Maybe this should go on my cfjedi wish list for 2011, but what about long-polling AJAX with ColdFusion.  I think it's commonly called "comet".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726379">27</a> by Raymond Camden
		posted on 12/28/2010 at 6:19 AM
		</div>
		<div class="comment_text"><p>If your clients support it, you could look into WebSocket. Nathan Mische has a CF Event Gateway for WebSockets up on RIAForge.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726376">28</a> by David
		posted on 8/12/2012 at 2:40 AM
		</div>
		<div class="comment_text"><p>this method doesn't work if you are using cfajaxproxy to make your ajax calls, since cfajaxproxies don't have the X-Request-With in the header</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726380">29</a> by Raymond Camden
		posted on 8/12/2012 at 3:27 AM
		</div>
		<div class="comment_text"><p>You could use some other method probably.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2690504677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2690504677">30</a> by guns
		posted on 5/23/2016 at 9:25 AM
		</div>
		<div class="comment_text"><p>not satisfied, but how could u bring an alert to ur regular user who were ideal during the session timeout.<br>its applicatikns responsibility to provide an alert prior to timeout.<br>how are we handling this in ur way ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2690617965">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2690617965">31</a> (In reply to <a href="#c_2690504677">#30</a>) by Raymond Camden
		posted on 5/23/2016 at 11:47 AM
		</div>
		<div class="comment_text"><p>I'm sorry but I do not understand what you are asking. Can you rephrase it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2692326394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2692326394">32</a> (In reply to <a href="#c_2690617965">#31</a>) by Guns
		posted on 5/24/2016 at 5:31 AM
		</div>
		<div class="comment_text"><p>My regular ajax calls will have something like the following</p><p>ajax...{</p><p>},success:function(responseData){<br>   // get the responseData and satisfy the business need<br>},error:function(a,b,c){<br>  //like you said, we will get the error code and show the alert<br>}</p><p>Please correct me if am wrong from my above approach.<br>If am right, then like the above code snippet, i will have these snippets across the application every where.<br>Now do you mean to say that i have to place the "SessionTimeOut" code snippet in all the "error:function block ?"</p><p>Can you advice pls.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2692334220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2692334220">33</a> (In reply to <a href="#c_2690617965">#31</a>) by Guns
		posted on 5/24/2016 at 5:42 AM
		</div>
		<div class="comment_text"><p>can you advice me on how to handle the AJAX when used from <br>xmlns:a4j="<a href="http://disq.us/url?url=http%3A%2F%2Frichfaces.org%2Fa4j%3AoSlaHM23FMgGu5UzRZqX9sNK7uk&amp;cuid=3321886" rel="nofollow noopener" title="http://richfaces.org/a4j">http://richfaces.org/a4j</a>"</p></div>
	</div>
</div>
		
<div class="comment" id="c_2692599269">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2692599269">34</a> (In reply to <a href="#c_2692326394">#32</a>) by Raymond Camden
		posted on 5/24/2016 at 11:36 AM
		</div>
		<div class="comment_text"><p>In all calls? No. Depending on your library, you can set up a global error handler for Ajax errors. jQuery makes this easy. Ditto for Angular.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2692599365">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2692599365">35</a> (In reply to <a href="#c_2692334220">#33</a>) by Raymond Camden
		posted on 5/24/2016 at 11:36 AM
		</div>
		<div class="comment_text"><p>Sorry - never seen that.</p></div>
	</div>
</div>
		