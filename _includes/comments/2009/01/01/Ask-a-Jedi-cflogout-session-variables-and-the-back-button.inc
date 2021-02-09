
<div class="comment" id="c_1713711127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711127">1</a> by Dave Ferguson
		posted on 1/2/2009 at 9:43 AM
		</div>
		<div class="comment_text"><p>There is also another issue with caching that Ray does not mention.  There are TONS of client installed 3rd party caching tools to speed up internet browsing.  A vast majority of these will actually ignore the http header settings and cache anyway.</p><p>I have also personally ran into issues with network based caching systems.  These do just the same as client software but on a larger scale.</p><p>I don't really have a good way around these so sorry for that.  I just wanted to bring them up in case someone else might.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711128">2</a> by Phillip Senn
		posted on 1/2/2009 at 6:50 PM
		</div>
		<div class="comment_text"><p>I seem to remember you saying to not use structClear(session) as well, but to use structDelete instead.<br>Something about how structClear will delete the sessionid and cfid and cftoken.<br>But that was years ago.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711129">3</a> by Raymond Camden
		posted on 1/2/2009 at 7:21 PM
		</div>
		<div class="comment_text"><p>Yes, that was true years ago, but not since CF6 I believe.</p><p>Well wait, I stand corrected. :) It removes cfid, cftoken, and sessionid. It looks like structClear is still "naughty". Everything worked fine though with this sample code:</p><p>&lt;cfif structKeyExists(url, "clear")&gt;<br>	&lt;cfset structClear(session)&gt;<br>&lt;/cfif&gt;<br>&lt;cfparam name="session.hits" default="0"&gt;<br>&lt;cfset session.hits++&gt;<br>&lt;cfdump var="#session#"&gt;</p><p>I could clear the session and still add values to hits. But if I had written any code to depend on sessionid, it would fail. Oddly, urltoken, one of the 'builtin' session variables, was also nuked on the FIRST hit with clear=1 in the URL, but returned after clear was removed. So CF 'fixed' up one built in var but not the others. Also, the values in URL token matched the CFID/CFTOKEN I had before.</p><p>So I'd probably not recommend doing a struct clear on session now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711134">4</a> by Steph
		posted on 1/2/2009 at 9:05 PM
		</div>
		<div class="comment_text"><p>Thanks Ray!</p><p>You mentioned that the session variables are cleared on the server but maintained in the cached page.  I logged out and then used the back button until I reach the first page that I accessed after logging in. When I do a shift-refresh of this page, I am then able to proceed to other pages as if I were logged in, and the session variables are still available per the debug info.</p><p>I changed my app so that the login page points to a redirect page that points to the first page of the app.  This seems to solve the shift-refresh problem.</p><p>Are there any plans to fix the cflogin issue with the next CF version?</p><p>Steph</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711135">5</a> by Raymond Camden
		posted on 1/2/2009 at 9:25 PM
		</div>
		<div class="comment_text"><p>Actually no, I said the session variables were NOT maintained. You have to remember that there is a difference between the actual variable, <a href="http://disq.us/url?url=http%3A%2F%2Fsession.name%3AZwb-hLe-wEBzsm3ETsHiiwbl77s&amp;cuid=3321886" rel="nofollow noopener" title="session.name">session.name</a>, and the _display_ of that on a page. If I logon, and end up at a page that does #<a href="http://disq.us/url?url=http%3A%2F%2Fsession.name%3AZwb-hLe-wEBzsm3ETsHiiwbl77s&amp;cuid=3321886" rel="nofollow noopener" title="session.name">session.name</a>#, and the value is Ray, I can keep that web page on my computer for years. (If I don't reload.) The word "Ray" is still there, but the session variable timed out long ago. So when you see the browser get the page from cache, it is just getting the HTML from it's cache, not the actual session variables.</p><p>You mentioned you were able to shift-refresh on a page. Was that page the result of your login? (You said you went to the first page.) If so, what you see is the browser re-POST-ing the form details from the login, so in essence, you logged in again.</p><p>Making your login page do a cflocation does help because then the user can't reload the page to relogin.</p><p>This is not broken, Steph. It's just the nature of the web, browsers, and your cache settings.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711136">6</a> by Ben
		posted on 2/23/2009 at 3:24 AM
		</div>
		<div class="comment_text"><p>thanks Ray! I've always enjoyed learning from your writings and posts. I have a couple of related questions that you might know the answer to:</p><p>1. how to force CF to end a session on browser close? the session structClear is working great for me, but sometimes the user just closes it.</p><p>2. keeping a session variable consistent between https and http pages. Sometimes CF seems to come up with a new session ID when going from HTTP to HTTPS and back. Undoubtedly, its my misunderstanding of proper usage ... but I figured a jedi might know.</p><p>thanks again for all your good work and sharing!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711143">7</a> by Raymond Camden
		posted on 2/23/2009 at 3:59 AM
		</div>
		<div class="comment_text"><p>1) To be clear - you can't END a session. CF ends a session when it has been inactive. You can, however, make it so when the user closes his browser and comes back, he gets a new session. Just use J2EE sessions in the cf admin. There are other ways, but that is the easiest.</p><p>2) That's because, technically, it is a different site. If you are using APplication.cfc, try using setDomainCookies=true. I believe it changes the cookie from <a href="http://disq.us/url?url=http%3A%2F%2Ffoo.main.com%3AnbNCRfCy53ZACRmu0BRR-hdmIMI&amp;cuid=3321886" rel="nofollow noopener" title="foo.main.com">foo.main.com</a> to *.main.com. I always forget the exact change so forgive me if that is wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711155">8</a> by David
		posted on 4/6/2009 at 7:23 PM
		</div>
		<div class="comment_text"><p>If the user logs out, I don't want them hitting the back button to see the previous page. So I'm use the cfheader code as outlined in this post.</p><p>Firefox and IE seem to respect this very well, however, Safari does not. In other words, I can hit the back button in Safari (3.2.2) and still see the previous cached page instead of the app redirecting to the login page (as Firefox and IE do so well).</p><p>Has anyone else experienced Safari not obeying cfheader? If so, how did you make Safari take orders?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711156">9</a> by Raymond Camden
		posted on 4/7/2009 at 7:11 AM
		</div>
		<div class="comment_text"><p>There are META tags that also relate to caching. I can't remember them offhand, but you can try using them as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711154">10</a> by Phillip Senn
		posted on 4/7/2009 at 9:56 PM
		</div>
		<div class="comment_text"><p>&lt;cfheader name="Expires" value="#GetHttpTimeString(Now())#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711158">11</a> by David
		posted on 4/7/2009 at 10:15 PM
		</div>
		<div class="comment_text"><p>Raymond, the meta tags don't make a difference for me.</p><p>Phillip, I'm already using that code:<br>&lt;cfheader name="cache-control" value="no-cache, no-store, must-revalidate" /&gt;<br>&lt;cfheader name="pragma" value="no-cache" /&gt;<br>&lt;cfheader name="expires" value="#getHttpTimeString(now())#" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711157">12</a> by Raymond Camden
		posted on 4/7/2009 at 10:18 PM
		</div>
		<div class="comment_text"><p>Hmm. Well, at the end of the day, this may be a browser issue. Just because the server says, Dont Cache, and the HTML says, Dont Cache, it doesn't mean the browser has to follow the rule.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711160">13</a> by Jody Fitzpatrick
		posted on 6/15/2009 at 7:47 AM
		</div>
		<div class="comment_text"><p>Hey Ray</p><p>I use a really different method when it comes to processing security, I do however use cflogin and cfloginuser but I also create a UUID and log the ip into a database and if the UUID doesn't match the ip I send them to the logout processor. Is that a smart way to process security?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711174">14</a> by Raymond Camden
		posted on 6/16/2009 at 7:19 AM
		</div>
		<div class="comment_text"><p>Hmm. Seems kind of nice. I'd probably store the info in the app scope though. Don't see a need to persist it like that unless you have a cluster.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711165">15</a> by Brian Lang
		posted on 8/4/2009 at 10:10 PM
		</div>
		<div class="comment_text"><p>I'm looking for a way to modify the CFID and/or CFTOKEN cookies set by CFLOGIN. These cookies expire 30 years after login. I'd like them to expire when the browser closes. What should I change?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711167">16</a> by Raymond Camden
		posted on 8/5/2009 at 1:39 AM
		</div>
		<div class="comment_text"><p>cflogin can be set to tie to the session scope, which means it will end when the session ends.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711168">17</a> by Brian Lang
		posted on 8/5/2009 at 1:52 AM
		</div>
		<div class="comment_text"><p>How would you do that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711164">18</a> by LearningMore
		posted on 8/6/2009 at 11:50 PM
		</div>
		<div class="comment_text"><p>I'm developing a web based app &amp; I'm making use of sessions, no cookies, for security. It works fine &amp; users can successfully logout. However, &amp; this is a pretty serious issue: if you click on the back button you are still able to access the protected pages.</p><p>I've pretty much tried the CFHEADER tags on each page.</p><p>&lt;cfheader name="cache-control" value="no-cache, no-store, must-revalidate"&gt;<br>&lt;cfheader name="pragma" value="no-cache"&gt;<br>&lt;cfheader name="expires" value="#getHttpTimeString(now())#"&gt;</p><p>This really helped for Firefox3.0.12 &amp; for Netscape Navigator9.0b3 BUT NOT FOR Opera 9.64 &amp; very importantly NOT FOR Internet Explorer 7.0.6001.18000.<br>A major concern is that majority of web users use IE!</p><p>Please can anyone provide a tried &amp; tested permanent solution please? It'd be really appreciated. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711171">19</a> by Raymond Camden
		posted on 8/6/2009 at 11:54 PM
		</div>
		<div class="comment_text"><p>At the end of the day, the browser, not you, decides how to cache content. Those header tags tell the browser to not cache, but the browser can ignore it at will. Not only that, I can simply save your pages to the desktop if need be. Have you tried perhaps the META tag as well? While it has the same issue, it may work in IE better. Just note you can't depend on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711169">20</a> by Learning More
		posted on 8/6/2009 at 11:59 PM
		</div>
		<div class="comment_text"><p>Thanks ray, I tried them but will again. However I noticed yahoo had the same issues years back but not anymore. I'm cerain theres a solution out there somewhere. I'm certain the session variables aren't stored after logout though so it's a cache issue &amp; interestingly upon page refresh after the use of the back button, the page access is denied. I guess this might provide a much better clue. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711166">21</a> by Learning More
		posted on 8/7/2009 at 12:11 AM
		</div>
		<div class="comment_text"><p>I included the following but I noticed no difference</p><p>&lt;meta http-equiv="cache-control" content="no-cache"&gt;<br>&lt;meta http-equiv="expires" content="Mon, 07 July 2009 00:00:00 GMT"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711170">22</a> by Raymond Camden
		posted on 8/7/2009 at 12:13 AM
		</div>
		<div class="comment_text"><p>Then I think you may be out of luck. Again - it really is a client side issue that you can _never_ be 100% sure of. You could include Ajax code that pings the server, notices a session timeout, and pushes the page away, but even that can be surmounted if the user disables JS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711172">23</a> by Just Learning
		posted on 8/7/2009 at 12:19 AM
		</div>
		<div class="comment_text"><p>I thought of coding to [force] clear the browser cache afterward but the concern is other user data. I wouldn't want that to happen now. I was just thinking: what if the app runs in a browser window w window which does not show any buttons?, you know like the one for typing in posts(this particular one on this site)? I guess that will pretty much work. Does coldfusion have any specific tags or any code for that? Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711175">24</a> by Raymond Camden
		posted on 8/7/2009 at 12:24 AM
		</div>
		<div class="comment_text"><p>That's all client side JavaScript, opening a window with no chrome. The closest thing ColdFusion has is cfwindow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711173">25</a> by Just Learning
		posted on 8/7/2009 at 12:42 AM
		</div>
		<div class="comment_text"><p>OK, CF8 stuff.Just thinking: is there something like the cfscript variant of the javascript <a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a> ?Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711176">26</a> by Raymond Camden
		posted on 8/7/2009 at 12:49 AM
		</div>
		<div class="comment_text"><p>Nope - closest is cfwindow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711177">27</a> by learning More
		posted on 8/7/2009 at 1:03 AM
		</div>
		<div class="comment_text"><p>Alright, thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711180">28</a> by Tim
		posted on 10/16/2009 at 8:01 PM
		</div>
		<div class="comment_text"><p>I have always used session variables as a means to determine who is logged in... now that most users are familiar with multi tab browsers, I have an issue with users logging in with different user accounts in the same browser window (but separate tabs.) As we know session vars are shared between the tabs causing grief in this situation. Making matters worse, what if the user opens a third tab and copy/pastes the url. This really limits the use of session vars.</p><p>Anyone have any thoughts on managing session vars in multi tabs in the same browser window?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711181">29</a> by Raymond Camden
		posted on 10/17/2009 at 8:05 AM
		</div>
		<div class="comment_text"><p>You have to remember that a tab is nothing more than another request. The server has no way to differentiate one tab request from another. The only solution would be to not use cookies for your sessions and use URL params, but even then, if the user opens the new tag and pastes in the url with the params, you are in the same situation.</p><p>In my opinion, this is _not_ a limitation of session vars.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711183">30</a> by Tim
		posted on 10/17/2009 at 5:35 PM
		</div>
		<div class="comment_text"><p>It's too bad there is no way to identify browser tabs... and I agree it's not a limitation directly on session vars as session vars have not changed. The environment of a single browser session has changed with the introduction of multi tabs.</p><p>Without a way to identify tabs, IMO the practical use of session vars is greatly compromised.</p><p>Any thoughts are appreciated. - Tim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711185">31</a> by Raymond Camden
		posted on 10/17/2009 at 5:38 PM
		</div>
		<div class="comment_text"><p>But I think here you have a unique situation - users going out of their way to use the application incorrectly. Users will always be...well, users, but personally, I've never heard of folks doing that.</p><p>There is one simple solution - if a user is logged in, don't let them log in again. Tell them as much and then provide a link to the logout page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711188">32</a> by Tim
		posted on 10/17/2009 at 6:10 PM
		</div>
		<div class="comment_text"><p>I think users may be attempting efficiency with multi tabs not realizing the application was not designed for multi tabs.</p><p>Yes - only allowing one log in per window session will provide as a solution for the multi tab multi user issue. However there are many more potential situations other than just the log in.</p><p>Guess my point is CF developers should consider the potential issues with browser tabs when using session vars... (still wishing tabs could be identified.)</p><p>Thanks Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711189">33</a> by Madhu
		posted on 6/4/2011 at 6:09 AM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>       I have a form page, an action page and a confirmation page.</p><p>I submit the form page...takes me to the action page where I validate the fields...the fields are NOT valid..I place the data &amp; the error message in session and redirect(cflocation) to the form page. In the form page I store the session variables(err message and bad data) in local variables, destroy the session variables and use the local variables thereafter.</p><p>Now I correct the values and submit the form again...goes to action page...validates and then redirect to the confirmation page.</p><p>Now if I use my browser back from the confirmation page, it takes me to the form page with the validation error message and bad data...I understand that the IE 7 browser is using the cache to get the data..but I tried using cfheader and META tags to avoid pulling from cache...still the browser pulls from cache...this doesnt happen in Firefox</p><p>Any thoughts on how this can be resolved?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711186">34</a> by Raymond Camden
		posted on 6/4/2011 at 11:21 PM
		</div>
		<div class="comment_text"><p>As just an FYI, I normally recommend against multiple pages like that. I'd probably use one page that just renders based on what the current state is. But that's a different story. :)</p><p>So normally the cfheader thing should work for IE. Can you share the code you used?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711192">35</a> by Madhu
		posted on 6/7/2011 at 12:51 AM
		</div>
		<div class="comment_text"><p>Ray,<br>     I am using the following code:</p><p>&lt;cfheader name="cache-control" value="no-cache, no-store, must-revalidate"&gt;<br>&lt;cfheader name="pragma" value="no-cache"&gt;<br>&lt;cfheader name="expires" value="#getHttpTimeString(now())#"&gt;</p><p>&lt;META HTTP-EQUIV="expires" CONTENT="-1"&gt;<br>&lt;META HTTP-EQUIV="pragma" CONTENT="no-cache"&gt;<br>&lt;META HTTP-EQUIV="cache-control" CONTENT="no-cache, no-store, must-revalidate"&gt;</p><p>Also, I am interested to know if there is a specific reason (like its a bad practice..) on why you are against using multiple pages. It will be a learning for me.</p><p>Thank you for your time!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711191">36</a> by Raymond Camden
		posted on 6/8/2011 at 6:06 AM
		</div>
		<div class="comment_text"><p>That code looks fine to me. At this point I'd just blame IE. That doesn't help you though.</p><p>In general, I don't use an 'action page' for a form. I use a self posting form. Here is an example I just wrote. It may not work - I didn't actually run it I just did it from scratch:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FiC0JUAvm%3AMuCuDkzDRHpsAGnUkdDz41wmbsA&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/iC0JUAvm">http://pastebin.com/iC0JUAvm</a></p><p>You can see how the form posts to itself. Code on top does quick verification (the form has one field so its simple). If the form is ok (the one field is ok), then we set a flag to not show the form.</p><p>This is just an example though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711193">37</a> by Madhu
		posted on 6/13/2011 at 9:32 PM
		</div>
		<div class="comment_text"><p>Thank you so much and Sorry!</p><p>I thought I replied already but when I checked the site for a response from you....thats when I realized I didnt even reply to your message...very sorry abt that.</p><p>Thank you for your example, I am aware of "posting to the same page" method...</p><p>Sorry if I was not clear with my question, I wanted to know why you thought the "posting to same page" method was better than the multiple pages method?...these are facts only experienced people can explain....not the books :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711195">38</a> by Aaron Starner
		posted on 10/25/2011 at 7:19 PM
		</div>
		<div class="comment_text"><p>How about killing all sessions for a single CF application, just once? I need to "refresh" the session scope, but not for the entire server, just the one application. (Using application.cfc, BTW.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711197">39</a> by Raymond Camden
		posted on 10/25/2011 at 9:33 PM
		</div>
		<div class="comment_text"><p>I don't believe it is possible. CF9 added applicationStop(), which 'resets' an application. When run, the next hit will execute onApplicationStart. But it doesn't reset sessions.</p></div>
	</div>
</div>
		