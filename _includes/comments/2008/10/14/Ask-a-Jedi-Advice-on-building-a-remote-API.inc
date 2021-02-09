
<div class="comment" id="c_1713709064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709064">1</a> by Joshua Rountree
		posted on 10/15/2008 at 1:05 AM
		</div>
		<div class="comment_text"><p>Thank you thank you!<br>Very helpful!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709077">2</a> by Shannon Hicks
		posted on 10/15/2008 at 1:08 AM
		</div>
		<div class="comment_text"><p>As always, I like to peddle using oAuth for public API's. It's great in that there is already a code base for implementing oAuth in ColdFusion, which saves you time, and pretty much every other language out there, saving developers who want to use your API time.</p><p>Gotta love those cross-platform open standards!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709078">3</a> by Shannon Hicks
		posted on 10/15/2008 at 1:08 AM
		</div>
		<div class="comment_text"><p>Oops, forgot the link:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Foauth.net%2F%3AGsrJI8Wi8ZuO-uYWZ5n8cWRUGdc&amp;cuid=3321886" rel="nofollow noopener" title="http://oauth.net/">http://oauth.net/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709076">4</a> by Joshua Rountree
		posted on 10/15/2008 at 1:15 AM
		</div>
		<div class="comment_text"><p>Problem is this isn't very open, I have my own authentication methods and the data isn't open to anyone like it is on Twitter, or flickr, etc.</p><p>I want to regulate the authentication of who gets to what data since multiple churches use the same application but with a different church identifier.</p><p>Currently my API has a getGroups method and when you pass in your requested authkey it matches it up with a Church and finds that churches groups and delivers it in XML or JSON depending on what you specify.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709080">5</a> by Raymond Camden
		posted on 10/15/2008 at 1:18 AM
		</div>
		<div class="comment_text"><p>@JR: So taking my advice above, you could imagine that they would hit a URL like so:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fyour.com%2Fapi.cfc%3Fauthkey%3DX%26method%3DgetGroups%3A310-3vZCOj7H6ZNlGZMV07S3pq4&amp;cuid=3321886" rel="nofollow noopener" title="your.com/api.cfc?authkey=X&amp;method=getGroups">your.com/api.cfc?authkey=X&amp;...</a></p><p>API.cfc will authenticate authkey, and then call _another_ CFC that handles getGroups (perhaps groups.cfc). Again, this is a good place for ColdSpring to handle giving you access to a bean to handle that logic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709068">6</a> by Glyn
		posted on 10/15/2008 at 1:27 AM
		</div>
		<div class="comment_text"><p>enjoyable read :) many thanks. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709065">7</a> by Joshua Rountree
		posted on 10/15/2008 at 1:31 AM
		</div>
		<div class="comment_text"><p>Ray, yeah I actually had this much from yesterday.<br><a href="http://disq.us/url?url=http%3A%2F%2Ftest.chrrch.com%2F_com%2FAPI.cfc%3Fmethod%3DgetGroups%26AuthKey%3D123456789%26Format%3DJSON%3AtpwMOPqyab2IBafdrU0HbbEHp5Y&amp;cuid=3321886" rel="nofollow noopener" title="http://test.chrrch.com/_com/API.cfc?method=getGroups&amp;AuthKey=123456789&amp;Format=JSON">http://test.chrrch.com/_com...</a></p><p>You can swap format to XML if you want but nothing else yet.</p><p>My auth key will also be a bit more extensive but this is just for testing hehe.</p><p>Thanks for all of your help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709066">8</a> by Raymond Camden
		posted on 10/15/2008 at 1:32 AM
		</div>
		<div class="comment_text"><p>I see that you used format=. Folks should remember that returnFormat has a special meaning for HTTP calls to CFCs. Don't use that unless you want CF to handle the formatting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709067">9</a> by Joshua Rountree
		posted on 10/15/2008 at 1:35 AM
		</div>
		<div class="comment_text"><p>@Ray - Yeah and I wanted to have more options than the ones that returnFormat offered - seemed limited...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709069">10</a> by Tom Chiverton
		posted on 10/15/2008 at 3:29 PM
		</div>
		<div class="comment_text"><p>Good timing - I'm giving a talk online later this week that's explores how ColdSpring can help you with exactly some of these problems (though not the design of the API itself, which Ray has covered here in great depth), and it'll even show case a 'token manger' you can use.<br>The details are at <a href="http://disq.us/url?url=http%3A%2F%2Fcoldfusion.meetup.com%2F17%2Fcalendar%2F8901120%2F%3AXrHvud713hxsaZQxmdOKVWotSls&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfusion.meetup.com/17/calendar/8901120/">http://coldfusion.meetup.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709118">11</a> by existdissolve
		posted on 10/16/2008 at 6:34 AM
		</div>
		<div class="comment_text"><p>Thanks for the tutorial, Ray :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709131">12</a> by Bart Buijze
		posted on 10/16/2008 at 11:21 AM
		</div>
		<div class="comment_text"><p>@Ray - good post and timing for a new project I'm just starting to work on. It will be a internetconnected desktop-app (java). <br>I'm still wondering what would be the best way to handle the authentication at the API. Users logon to the desktop-application and can sumbit data-updates from the application (which will be auto-started and so might be running the whole day during which it will do some ping-requests for server-updates etc.).</p><p>The 2 alternatives I've been looking at are:<br>- let the app send the username/password with every request, <br>- mark the application on serverside as logged on and allow all updates from that application (with an application UUID) as long as the regular ping requests keep coming (clear this authorization when the app is shut-off of after an x-period of time)<br>- create a cftoken at logon etc. and have the application send that info with each request<br>- ...</p><p>I'm not sure what route to chose, but somewhere out there must have solved this in a some (better?) way?!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709130">13</a> by Tom Chiverton
		posted on 10/16/2008 at 12:28 PM
		</div>
		<div class="comment_text"><p>@Bart: You can use the token and security services from my site already (even without AOP, though the examples are not yet online): <a href="http://disq.us/url?url=http%3A%2F%2Ffalkensweb.com%2Fother.html%3AAQkpWjXJD4E56fFqnLzwX4u4Kpo&amp;cuid=3321886" rel="nofollow noopener" title="http://falkensweb.com/other.html">http://falkensweb.com/other...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709128">14</a> by Bart Buijze
		posted on 10/16/2008 at 12:46 PM
		</div>
		<div class="comment_text"><p>@Tom - thanks. The SessionToken.cfc looks like it has been thought through quite extensively already. Of course a short example of an implementation could be usefull, but I gather you have different work to do..:-) Do you have anything ready that you can share?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709129">15</a> by Raymond Camden
		posted on 10/16/2008 at 3:51 PM
		</div>
		<div class="comment_text"><p>@BB:I'd just send the u/p once. If you are using Flex, I know it can keep a session alive, so you wouldn't need to bother sending tokens back and forth (well maybe Flex does it behind the scenes, but YOU don't have to worry about it). That would be simplest. If you aren't using Flex, then a token of some sort based on a session could work.</p></div>
	</div>
</div>
		