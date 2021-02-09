
<div class="comment" id="c_1713663024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663024">1</a> by Nick Tong
		posted on 3/12/2007 at 6:52 PM
		</div>
		<div class="comment_text"><p>Nice write up Ray.  <br>FYI: If you want to see sessions being used across your server, look here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.succor.co.uk%2Findex.cfm%2F2006%2F5%2F4%2Fviewing-sessions-on-your-server-across-all-applications%3AFlWgEz2lrbT2dAN04fKT6tt5-wM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.succor.co.uk/index.cfm/2006/5/4/viewing-sessions-on-your-server-across-all-applications">http://www.succor.co.uk/ind...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663037">2</a> by Michael Long
		posted on 3/12/2007 at 7:17 PM
		</div>
		<div class="comment_text"><p>You'd better hope a site that uses this never get Slashdotted. Doing the "deletetion" loop inside of the sessionCount function means that every page that displays the count is also walking the array each and every time. Imagine "There are currently 153,189 users on the site.", and doing 153,189 date comparisons on every page request (not counting all of the locks and structDeletes needed).</p><p>You mentioned this in the last paragraph ("a bit slowly") but the real impact could be significant indeed.</p><p>Personally, if I had to do something like this I think I'd implement a cached query on a short fuse, doing a count on ColdFusion's "cglobal" table where lvisit was in the desired range.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663039">3</a> by Dan
		posted on 3/12/2007 at 7:18 PM
		</div>
		<div class="comment_text"><p>Minor point, but aren't your "Do I need to create my app var?" and "Yes, I do need to make it." sections of code in the application.cfm performing a redundant check? Couldn't you eliminate the first check and just assume that we would add to the session every time EXCEPT when a duplicate SESSIONS key exists.</p><p>...wait... Did you have the redundant check because it allows you to use a 'read only' lock for the initial check?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663038">4</a> by Raymond Camden
		posted on 3/12/2007 at 7:25 PM
		</div>
		<div class="comment_text"><p>@Dan - Yep. It minimizes the initial lock. A real pain in the rear - and much simpler in App.cfc.</p><p>@Michael - Well, maybe I didn't make it sound as dire as it should. ;) I think people get the idea though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663041">5</a> by Michael Long
		posted on 3/12/2007 at 7:40 PM
		</div>
		<div class="comment_text"><p>@Raymond - I might mention too that the cfquery method I suggested works on client scopes, not session scopes. Then again, I never use session scopes, as they're too limiting for large sites that are, or may go, multi-server.</p><p>One question: What's the rationale for the cflock inside the deletetion loop? Struct operations should be synchronized and atomic inside of MX, and if you're not in MX wouldn't you then need a cflock on the insertion side as well?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663040">6</a> by Raymond Camden
		posted on 3/12/2007 at 7:48 PM
		</div>
		<div class="comment_text"><p>Nope, I don't think I need the lock there. I'll remove it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663046">7</a> by DK
		posted on 3/12/2007 at 8:33 PM
		</div>
		<div class="comment_text"><p>I've done something like this in the past and its a fun side project. Theres a lot of additional possibilities if you app needs them</p><p>- additional layer of security if you store the session id/ip address etc. also the ability for admins to soft log someone out of your app :o<br>- when approaching the timeout mark you can modal a screensaver-like login form to allow them to re-authenticate without losing the work they may have had on screen.<br>- add a digg spy like portion showing who is online doing what but can also show idle time etc if so inclined.</p><p>its really a good first step to open up a lot of interesting things for your apps imHo (interesting as far as geeky developer looking for other things to do than routine stuff I suppose but fun nevertheless.....).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663045">8</a> by Cutter
		posted on 3/12/2007 at 9:00 PM
		</div>
		<div class="comment_text"><p>Hey Ray, Aaron (<a href="http://disq.us/url?url=http%3A%2F%2Ftrajiklyhip.com%3Ajw493WOHabEmHFVMb_A40rfxep8&amp;cuid=3321886" rel="nofollow noopener" title="trajiklyhip.com">trajiklyhip.com</a>) did a preso on session tracking (his with Application.cfc) at last years Mini-Max sessions before CFUnited. It's posted in the Presentations area of his site, and may prove useful to someone reading your post</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663043">9</a> by Rick Root
		posted on 3/14/2007 at 4:41 PM
		</div>
		<div class="comment_text"><p>Ray, that's pretty cool.  I'm putting that into the next version of CFMBB so I can track "Current Users" and "Current Registered Users"  PHPBB does that...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663025">10</a> by Smarty
		posted on 1/7/2010 at 4:35 AM
		</div>
		<div class="comment_text"><p>Hi Ray - I use this code alot for my projects, is there a way to also count visitors on site which are not logged in (using session) and add a 'guest' count?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663027">11</a> by Raymond Camden
		posted on 1/7/2010 at 8:55 PM
		</div>
		<div class="comment_text"><p>Notice how I store the time of the last hit? You can store anything you want. Therefore you would modify the code to store their login status as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663026">12</a> by Smarty
		posted on 1/8/2010 at 12:30 AM
		</div>
		<div class="comment_text"><p>Thanks for the reply Ray, however I have no idea how to capture a 'visitor' who is not a member, nor logged in. Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663028">13</a> by Raymond Camden
		posted on 1/8/2010 at 12:33 AM
		</div>
		<div class="comment_text"><p>Err, well, it is your site, right? So you know how logins are handled. Unless I'm missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663030">14</a> by Smarty
		posted on 1/8/2010 at 12:46 AM
		</div>
		<div class="comment_text"><p>I think perhaps you are. I want to add a non logged in, general site visitor to the struct, as a guest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663029">15</a> by Raymond Camden
		posted on 1/8/2010 at 12:48 AM
		</div>
		<div class="comment_text"><p>But what does logged in mean? That's up to _your_ web application. Maybe you use a session variable, "LoggedIn", to mark a user logged in. Maybe you use a cookie to log someone in automatically. Etc. The point is - it is your site's logic that determines if the user is logged in. I can't tell you what that is - you have to tell me. Right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663031">16</a> by Smarty
		posted on 1/8/2010 at 12:52 AM
		</div>
		<div class="comment_text"><p>Hmm yes perhaps that's the problem. My members use session vars, I want the non session using, non logged in (with session) site visitors so I have something like Online: 23 Visitors 12 (this is looking like a baseball score I know...) Once we get some place with this please feel free to delete all the comments, might bore the crap outta someone :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663034">17</a> by Raymond Camden
		posted on 1/8/2010 at 1:01 AM
		</div>
		<div class="comment_text"><p>Well, you need to look at your code. Which variable do you use to mark them logged in? Ie, what specific session variable? If is session.loggedin, then you use that along with what I said above. You record that to the application scope structure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663035">18</a> by Smarty
		posted on 1/8/2010 at 1:07 AM
		</div>
		<div class="comment_text"><p>Yep, this works perfectly fine, I've modified this code many times/places/uses to also store userID,userDisplayName etc, however, at the risk of annoying you Ray, I'm wanting to add guests to the struct, by guests I mean, not logged in, non members, who are simply browsing the the site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663033">19</a> by Raymond Camden
		posted on 1/8/2010 at 1:11 AM
		</div>
		<div class="comment_text"><p>Anyone who visits your site has a session, even if they don't log on. Notice how my code just adds the time? Well when you add in your data, if the logged in key is missing, you add in a flag marking the user as a guest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663036">20</a> by Smarty
		posted on 1/8/2010 at 1:12 AM
		</div>
		<div class="comment_text"><p>AHA! Ty Jedi.</p></div>
	</div>
</div>
		