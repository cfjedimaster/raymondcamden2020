
<div class="comment" id="c_1713672910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672910">1</a> by Rey Bango
		posted on 10/9/2007 at 12:03 AM
		</div>
		<div class="comment_text"><p>Ray, that would dramatically increase the number of HTTP requests being made on a site with a number of users. Its definitely something to consider even if its just a minor XHR call to the server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672912">2</a> by Raymond Camden
		posted on 10/9/2007 at 12:11 AM
		</div>
		<div class="comment_text"><p>Confirmed. One of the other ideas I had - which seemed like more work - may be better. And that was this - for every JS function that does an XHR hit - have THAT change a JS variable  that remembers your last action. In other words - check on the client if you haven't done anything in N minutes. The problem with this is the amount of work - as you have to ensure every function updates the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672913">3</a> by Rey Bango
		posted on 10/9/2007 at 1:31 AM
		</div>
		<div class="comment_text"><p>Ray, I asked Jack Slocum, lead developer of Ext and here's how he handles this. He sets a cookie on every request to the server which manages the session timeout since the server will always have the correct timeout value. Upon every server requests, he just updates the cookie. At specific intervals, say 30 seconds, he reads the cookie to determine how much time is left on the server session and based on that determines if the user is near his timeout. He then prompts the user if they would like to extend their session and if so, makes another XHR call which subsequently updates the cookie.</p><p>The interval can be set via setTimeout() which allows you to specify a method to call at specific intervals.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672903">4</a> by Bill
		posted on 10/9/2007 at 1:55 AM
		</div>
		<div class="comment_text"><p>I use a solution almost identical to that told by Jack Slocum via Rey Bango and it works nicely.  It minimizes the number of extra hits on the server and keeps things pretty clean overall.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672914">5</a> by Adrian J. Moreno
		posted on 10/9/2007 at 1:55 AM
		</div>
		<div class="comment_text"><p>We just have a CF function named "checkSession" that we call from a JS function named "checkSession" before executing any Ajax call that requires you to be logged into the site.</p><p>If the session has timed out, the callback function pops an alert message and redirects you to the login screen. If the session is active, then the Ajax call continues as normal.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672905">6</a> by Raymond Camden
		posted on 10/9/2007 at 1:57 AM
		</div>
		<div class="comment_text"><p>Interesting. So if the browser is viewing a page - and does an Ajax request to change cookie X, the browser will correctly be able to see the value in JS?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672909">7</a> by Thomas Messier
		posted on 10/9/2007 at 2:35 AM
		</div>
		<div class="comment_text"><p>I haven't put this into practice, but I'm guessing if you architect your app with consistent ajax responses you could do this without pinging the server. For example, have all ajax requests always return JSON, and have a consistent format for that JSON that includes a flag for a valid session. If the session is invalid you can pop an alert, redirect the user, etc. In your security/session code, to detect whether you should redirect the user or return JSON for an expired session (redirect for regular request and JSON for ajax), you can look at the request header and see if it was an XHR request or not and act accordingly (I know Prototype puts a special header in so you can detect its ajax requests). Obviously, all this requires planning when you start coding your app, but I think it could be done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672915">8</a> by Rey Bango
		posted on 10/9/2007 at 2:35 AM
		</div>
		<div class="comment_text"><p>@Ray: Yep.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672908">9</a> by Michael Geary
		posted on 10/9/2007 at 3:27 AM
		</div>
		<div class="comment_text"><p>If I understand right, what you'd like to do is notify the user at some time before the server session times out. I was IMing Rey about this just now and wrote a little jQuery plugin to do this. The code doesn't actually depend on jQuery, it should work with most any client-side library. I'll post the code later this evening when I get a few minutes...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672906">10</a> by Rey Bango
		posted on 10/9/2007 at 4:32 AM
		</div>
		<div class="comment_text"><p>Guys, definitely give a listen to Michael Geary's words. He's top notch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672911">11</a> by Boyan
		posted on 10/9/2007 at 5:37 AM
		</div>
		<div class="comment_text"><p>Ummm...am I missing something. Why not use the simplest solution available? An ajax request is still a http request that goes through something like "onRequestStart" on the server. So as long as you check for your session scope being valid in that method, does it matter if it's an ajax call or not? So if the ajax call comes in but the session is not valid anymore, you either redirect the user or display whatever message you want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672907">12</a> by Raymond Camden
		posted on 10/9/2007 at 5:39 AM
		</div>
		<div class="comment_text"><p>Boyan - the issue was partially also to warn users.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672928">13</a> by Rey Bango
		posted on 10/9/2007 at 5:41 PM
		</div>
		<div class="comment_text"><p>@Ray: Dan Switzer chimed in and offered this alternative as well:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.pengoworks.com%2Fworkshop%2Fjquery%2Fsession_expired_example.cfm%3AKMSfgkR96WPgK8BVjvRLhT-_Qjo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.pengoworks.com/workshop/jquery/session_expired_example.cfm">http://www.pengoworks.com/w...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672932">14</a> by Raymond Camden
		posted on 10/9/2007 at 5:45 PM
		</div>
		<div class="comment_text"><p>Nice. Thank you all for the comments here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672927">15</a> by Dan G. Switzer, II
		posted on 10/9/2007 at 5:52 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>I'd suggest just using HTTP Response Headers to notify your Ajax requests if the user's session has expired. Using this technique you don't have to worry about making additional calls to see if a session's alive, since it's all controlled via HTTP response headers.</p><p>I've blogged about the technique here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fblog.pengoworks.com%2Fblogger%2Findex.cfm%3Faction%3Dblog%3A605%3A2G51pnn2wId2CcCviVU47w71imU&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.pengoworks.com/blogger/index.cfm?action=blog:605">http://blog.pengoworks.com/...</a></p><p>Or you can go straight to the example code:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.pengoworks.com%2Fworkshop%2Fjquery%2Fsession_expired_example.cfm%3AKMSfgkR96WPgK8BVjvRLhT-_Qjo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.pengoworks.com/workshop/jquery/session_expired_example.cfm">http://www.pengoworks.com/w...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672933">16</a> by StephenD
		posted on 10/9/2007 at 6:15 PM
		</div>
		<div class="comment_text"><p>We use a variant of the Jack Slocum one mentioned above.</p><p>We use a cookie and a JS global variable, and have the server write out the session timeout variable into another JS global.</p><p>We attach an event listener to dojo.io.bind and update the cookie with the current time when we make a request to the server, plus save the time to the global.</p><p>We use a cookie so multiple browser windows talking to the same server will all share the same last-update time.  After updating the cookie we set a timer to session timeout - 1 minute, and if that goes off we check the cookie to see if we were the last window to talk to the server.  If we weren't (cookie is newer than our global) we just go back to sleep.  If we were (cookie is still the one we set) then we prompt the user that their session is about to expire and let them send a dummy request to keep the session alive.  Being the last window to contact the server also implies that this window is the frontmost talking to that server (we don't do any of this for background polling calls, since we don't want those to keep the session alive).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672936">17</a> by Rey Bango
		posted on 10/9/2007 at 7:59 PM
		</div>
		<div class="comment_text"><p>This post on Ajaxian might help:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fajaxian.com%2Farchives%2Fmanaging-sessions-in-an-ajax-enabled-application%3AnY-6QAPdKm2vD-kiqMQRwI6aaMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://ajaxian.com/archives/managing-sessions-in-an-ajax-enabled-application">http://ajaxian.com/archives...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672929">18</a> by Michael Geary
		posted on 10/9/2007 at 8:44 PM
		</div>
		<div class="comment_text"><p>Oh rats. My client timer solution doesn't take multiple browser windows into account. That really complicates things.</p><p>Well, the code is on the jQuery group in case it is of interest to anyone. It does illustrate a nice trick for augmenting an existing function - the $.expire function could be applied to any JavaScript function, not just Ajax calls.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fgroups.google.com%2Fgroup%2Fjquery-en%2Fmsg%2Fe1b8092b6073b4f6%3A5NbMh-bq6xmHbZDSbdYLHyLWnRE&amp;cuid=3321886" rel="nofollow noopener" title="http://groups.google.com/group/jquery-en/msg/e1b8092b6073b4f6">http://groups.google.com/gr...</a></p><p>There is one error in the posted code - the line reading "fn.apply( this, arguments );" should be "return fn.apply( this, arguments );".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672937">19</a> by Paul Houle
		posted on 10/10/2007 at 5:07 PM
		</div>
		<div class="comment_text"><p>Why time out?</p><p>Timeouts torment your users.  Many users will walk away from their computers and expect to keep working the next day.  Amazon keeps your shopping cart open for weeks -- they'd be throwing away $$ if they timed out your session.</p><p>If your architecture needs timeouts in order to scale,  your architecture is at odds with the interests of your users.  Get a new architecture.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672938">20</a> by Raymond Camden
		posted on 10/10/2007 at 6:09 PM
		</div>
		<div class="comment_text"><p>Amazon keeps you cart - but it does NOT keep your login info. I have to login to actually check out and I certainly do not want my login info to stay forever.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672930">21</a> by Raymond Camden
		posted on 10/10/2007 at 6:10 PM
		</div>
		<div class="comment_text"><p>And this has nothing to do with scale - it has to do with security. (See previous comment.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672931">22</a> by Drivestream Sheriff
		posted on 10/10/2007 at 8:02 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>Back when I was involved in developing an heavy AJAX based .NET Web application for a leading Media company in the 1.1 days, this idea was added to the scope as a 'very nice to have feature'. And it has become one of 'The fundamentals things to do for an AJAX based Web Application that enforces Authentication'.  We use a similar approach with the Session ping interval value being set to 19 minutes (your_session_timeout_minutes - 1 minute considering other delays).  This way it does less-frequent pinging - 3 per hour which is MUCH MUCH ACCEPTABLE than having the Web application expire every 20 minutes.</p><p>Hope this helps!</p><p>Sheriff</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672939">23</a> by Raymond Camden
		posted on 10/10/2007 at 11:58 PM
		</div>
		<div class="comment_text"><p>Drivestream: I may not be understanding you right. I get that you only ping once every 19 minutes. But are you keeping the session alive? Why do you say the web app expiring at 20 minutes is unacceptable? Doesn't security worry you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672935">24</a> by Simon Jia
		posted on 10/11/2007 at 12:47 AM
		</div>
		<div class="comment_text"><p>Raymond:<br>  Just a thought here. If all of your Ajax calls go through the same function at the end (which i assume it is), this problem shouldn't be too hard to solve.<br>  This is how I would approach it:<br>   1. When a person logs in, the javascript served carries a timeout variable<br>   2. As soon as they land on the page, you start counting down with the timeout variable (simple as setTimeout(var_timeout, logout))<br>   3. On every Ajax call, you reset the setTimeout<br>   4. Every Ajax call will return a flag of if the session has in fact timed out or not on the server side<br>   5. Step 4 is literally to protect you from a person trying to screw around with your script (let's say using firebug?)<br>   6. If the Ajax call returns the flag saying session timed out on server side, you do a self.location and take them to the login page again.</p><p>Again, just a thought. I'm sure it's not 100% perfect. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672934">25</a> by David Boyer
		posted on 10/12/2007 at 12:53 PM
		</div>
		<div class="comment_text"><p>I've tried out the cookie method and it seems the best to me.</p><p>I use the application.cfc onRequestStart to set a cookie containing the date/time, so any activity from a user will get the cookie stamped.</p><p>Then, on the HTML returned I provide JavaScript with the current date/time to compare against the clients date/time and find the offset using Date().getTime() in ms.  Useful since everyone's clocks aren't synced.  It's then just a matter of comparing the current time (accounting for the client/server offset) against the cookie time.</p><p>So if there's an Ajax request it'll update the cookie and thus the timer on the HTML page.  That way there's no need for any type of "ping" service or making sure that all Ajax code resets the timer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672941">26</a> by Dave
		posted on 10/12/2007 at 7:19 PM
		</div>
		<div class="comment_text"><p>@Paul: Why time out?</p><p>As mentioned, security. Even ignoring things like public terminals and credit cards etc. some industries have requirements about leaving users logged in; if a user walks away from their desk without logging out someone's medical records might get changed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672940">27</a> by David
		posted on 7/20/2009 at 5:46 PM
		</div>
		<div class="comment_text"><p>Has anyone had any issues retrieving Session variables with an ajax call if you're using Fusebox 5.5?</p><p>If I place another Application.cfc in the same directory as the web service component I can get closer and return the whole Session object but I still can't reference Session.oObject.Name for example.</p><p>I would rather not return the whole Session object since this could be a security risk. Thanks to anyone that can help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672942">28</a> by Danny
		posted on 8/19/2009 at 11:18 PM
		</div>
		<div class="comment_text"><p>I would like to simply query the server as to how much time remaining a session has left. I'm not concerned about extra http requests to the server because the number of users will remain pretty small and the client only needs to poll for the session every #sessionTimeoutInterval - 15 mins# hours and can be optimized for less.<br>How do I access this info about session time remaining? Where does cf store it? How do I query that without touching the session, thereby resetting the time remaining?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672943">29</a> by Dan G. Switzer, II
		posted on 8/19/2009 at 11:35 PM
		</div>
		<div class="comment_text"><p>@Danny:</p><p>There's no reason to be doing this via AJAX. You can just create a JS variable w/a date/time stamp of when the session will expire. You can then just check the current time and compare it to the time when the session expires.</p><p>You can do something like:</p><p>var expiresInMs = 6000;<br>var sessionExpires = new Date();<br>sessionExpires.setTime(sessionExpires.getTime() + expiresInMs);</p><p>Where the value of 6000 is the number of milliseconds until the session expires. By using the user's clock and just adding the appropriate amount of time, you'll have a pretty accurate idea of when the session expires (there's a little bit of offset in the transit of the HTML and running of the page, but it'll be very close to the real time.)</p><p>You could also use the expiresInMs to do something like:</p><p>setTimeout(function (){<br>  alert('You session has expired');<br>}, expiresInMs);</p><p>Or</p><p>setTimeout(function (){<br>  alert("You session will expire in 5 minutes.");<br>}, expiresInMs-(5 * 60 * 1000)); // 1000ms * 60 = 1 minute</p><p>The only place where this does *not* work, is if you have users that might have multiple windows/tabs open where page hits can be resetting the time when the session expires.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672945">30</a> by Danny
		posted on 8/20/2009 at 1:49 AM
		</div>
		<div class="comment_text"><p>@Dan Thanks for the reply.</p><p>My issue is that I have a very ajax heavy page, and any one of those being triggered would reset the session time remaining. Ok, I can manage that with $.ajaxSetup, but there are also popup windows. And iframes. It's wild.</p><p>So really the issue I am looking to avoid is erroneously alerting people that their session is going to expire because the client isn't informed of everything going on. The server ultimately manages the session, so that seems to be the best place for me to get the info.</p><p>It is growing more apparent that what I really want to do is impossible with coldfusion, or at least very difficult. It's like quantum physics. You can't observe something without changing it somehow.</p><p>Posts like this don't encourage me: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bytestopshere.com%2Fpost.cfm%2Fsession-info-new-tools-for-session-scope-lovers%3ATenQ4AY2lSwgElhGoKpzEmLx7pc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bytestopshere.com/post.cfm/session-info-new-tools-for-session-scope-lovers">http://www.bytestopshere.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672944">31</a> by Danny
		posted on 8/20/2009 at 2:11 AM
		</div>
		<div class="comment_text"><p>Thinking:</p><p>Each session is given a new UUID. Just another property of the session.<br>OnRequestStart writes a temp file to a web accessible directory with name the same as the session UUID. The temp file is a json file, and it contains the session time remaining. The client is aware of this file. Periodic ajax requests to get this file retrieve the session time remaining without CF knowing about it.</p><p>Am I crazy? I can't tell. Maybe the cf event gateway can intervene here too, for cleanup tasks etc. I'm guessing in my case I will have dozens of open sessions at a time.</p></div>
	</div>
</div>
		