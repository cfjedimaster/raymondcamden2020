
<div class="comment" id="c_1713663148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663148">1</a> by Chad
		posted on 3/15/2007 at 9:42 PM
		</div>
		<div class="comment_text"><p>It appears to be one session off Ray.  I hit it with one comptuer and get 0 then i hit it with another computer and get 1.  Should be 2.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663150">2</a> by Raymond Camden
		posted on 3/15/2007 at 9:49 PM
		</div>
		<div class="comment_text"><p>Impossible. :) Seriously though - not sure how that would happen. onSessionStart fires before the page is displayed. Did you perhaps have a session in use already and therefore onSessionStart didn't fire? I'd consider restarting CF, closing/reopening browsers to be sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663149">3</a> by Chad
		posted on 3/15/2007 at 9:57 PM
		</div>
		<div class="comment_text"><p>Yep, i re-started the CF service and it is counting correctly now.</p><p>I would like to use something similar to track the user names that are currently logged in.</p><p>When a user logs in i set their name as a session variable.  Any tips on doing this?</p><p>Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663152">4</a> by Raymond Camden
		posted on 3/15/2007 at 10:08 PM
		</div>
		<div class="comment_text"><p>Use another app structure. When a user logs on, store their name there. In onSessionEnd, remove it.</p><p>Make sense? Shall I blog an example of that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663151">5</a> by Chad
		posted on 3/15/2007 at 10:15 PM
		</div>
		<div class="comment_text"><p>I think i got it... i just started a list of users in onApplicationStart called application.users.</p><p>Then in my login page i appended the user name to the application.users list.</p><p>Then on onSessionEnd i use listFind to find the users name and listDeleteAt to remove the user from the list.</p><p>Might be better if i used a structure rather then list.</p><p>Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663153">6</a> by todd sharp
		posted on 3/15/2007 at 10:16 PM
		</div>
		<div class="comment_text"><p>I think that would be a good example since I'm sure people constantly forget that you need to pass the session structure to onSessionEnd.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663155">7</a> by DK
		posted on 3/15/2007 at 10:36 PM
		</div>
		<div class="comment_text"><p>&gt;I would like to use something similar to track the user &gt;names that are currently logged in. <br>&gt;<br>&gt;When a user logs in i set their name as a session &gt;variable. Any tips on doing this?</p><p>Instead of using another one you could technically just rework the original and put a structure in a structure for each user with the token being the key, then modify the name field on login. It shouldn't break the structcount and keeps it all in one place.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663214">8</a> by Raymond Camden
		posted on 3/15/2007 at 10:43 PM
		</div>
		<div class="comment_text"><p>DK, I was going to recommend that - but the issue is that you then have to parse the results to get the name list. Ie, "Give me all Values where Value is not 1". Not terribly hard of course, but a bit of a hack. And shoot, maybe you have a username named 1! It could happen. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663216">9</a> by DK
		posted on 3/15/2007 at 10:55 PM
		</div>
		<div class="comment_text"><p>well if I was doing it I would reference it this way:</p><p>application.userList = structnew()<br>application.userList.userid = structnew()<br>application.userList.userid.sessiontoken = blah<br>application.userlist.userid.username = blah</p><p>That way each is guaranteed to be unique and the top level still gives an immediate user count. Then you could go one deeper and find the token or username or ip whatever else you wanted to store in nested struct and reference in cfloop by collection I suppose.</p><p>Another way, if usernames were unique, would be to make the username the top key. You could still do a count without any excess code, then also do 1 structkeylist and get all users online.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663218">10</a> by Chad
		posted on 3/15/2007 at 10:57 PM
		</div>
		<div class="comment_text"><p>Now that i am playing with this idea it has stemmed another question.  I am a cfc newbie so forgive me if this is a dumb question.</p><p>My application.cfc looks to see if session.username is defined and if it is not it sends the user to a login page.  I have a logout action page that basically kills the users session.username variable<br>StructDelete(session, "UserName");</p><p>On my logout page is there a way i can fire the onSessionEnd function in the application.cfc or end the session so the onSessionEnd function fires?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663227">11</a> by DK
		posted on 3/15/2007 at 10:58 PM
		</div>
		<div class="comment_text"><p>brain fart. userid only works if you are only tracking logged in users obviously. forgot to type that. sorry, dreaming of the end of work coming up shortly :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663215">12</a> by Michael Long
		posted on 3/15/2007 at 10:59 PM
		</div>
		<div class="comment_text"><p>Probably should make sessionCount a method of the application cfc, since it's dependent on the internals of the cfc, and because other methods inside the cfc are already directly manipulating the structure. Shouldn't expose internals to outside functions/UDFs.</p><p>As far as the goes, I'd make the entire thing into a sessionCounter cfc, called from the appropriate routines in the application (e.g. a HAS A, not an IS A relationship).</p><p>That opens up the ability to do, say, a client counter component with the same interface, and and allows you tosubstitute it in if you ever change how your system works, or port it to a new server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663221">13</a> by Raymond Camden
		posted on 3/15/2007 at 11:02 PM
		</div>
		<div class="comment_text"><p>CHad, you can easily call onSessionEnd() from your onRequestStart. But just because you call it - it doesn't mean your session REALLY ends.</p><p>You need to think of two things here.</p><p>First there is the concept of the Session as ColdFusion understands it. This is: A user from one browser who hits me and never stops hitting me for 20 minutes. (Or whatever number.)</p><p>Then there is the DATA in the session. That data is set by you. (Although CF sets a few small things, like urltoken.)</p><p>So you can add, edit, delete that crap whenever. So on your logout you remove the username value.</p><p>That doesn't END the session. It just changes the data in the session.</p><p>So I wouldn't call onSessionEnd. Just do what you want with the data. Let CF worry about calling onSessionEnd.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663219">14</a> by Raymond Camden
		posted on 3/15/2007 at 11:04 PM
		</div>
		<div class="comment_text"><p>@Michael: I'm not sure I agree with that. The UDF isn't dependent on the internals of the CFC per se. It is dependent on Application variables, which exist throughout the entire site. I'm probably being picky - and App.cfc is a special case really, but I don't agree with this.</p><p>Plus - if you did - how would a template call it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663220">15</a> by Chad
		posted on 3/15/2007 at 11:37 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, that makes perfect sense.</p><p>One last question and i will leave you alone.</p><p>Am i safe putting code like this in onSessionEnd?</p><p>&lt;cfif listFind(application.users, session.username) NEQ 0&gt;<br>  &lt;cfset userListLocation = listFind(application.users, session.username)&gt;<br>  &lt;cfset application.users = listdeleteAt(application.users, userListLocation)&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663217">16</a> by Michael Long
		posted on 3/15/2007 at 11:45 PM
		</div>
		<div class="comment_text"><p>Well, since the idea of a component (object) is to encapsulate data and methods, at the very least I'd put the "counting" structure inside the cfc and not throw it out into the application scope. (e.g. this.sessions).</p><p>Second, as indicated I'd add a function to application.cfc named sessionCount that returns the count, black-boxing the entire process. So calling application.sessionCount() from the template does the trick, and w/o needing a separate function defined elsewhere.</p><p>Finally, and again as mentioned, I'd make a sessionCounter.cfc, instantiate it in init(), and pass through the calls so that a call to application.sessionCount() in turn calls this.sessionCounter.sessionCount().</p><p>That allow you at some point to make, say, a clientCounter.cfc with the same interface, and swap out all of the counting-specific code instantly just by creating a different kind of "counter" object. This keeps your application cfc clean, a must if you start adding extra functionality to it like session counting, security and logins, page tracking, and so on.</p><p>As far as that goes, creating a "sessionCounter" cfc let's you use the code inside of an application.CFM file as well. Two for the price of one.</p><p>If you want to post it I'll do the code tonight as an example...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663235">17</a> by Raymond Camden
		posted on 3/15/2007 at 11:52 PM
		</div>
		<div class="comment_text"><p>@Chad: No, that isn't safe, because two sessions could end at the same time. You need to wrap it with a CFLOCK, and a named based lock. You would then need to use the SAME named lock in onSessionStart.</p><p>@Michael: You can't add a function to app.cfc and call it as application.functionname. I mean you CAN add your own methods, but they don't exist as Application variables you can call later.</p><p>Now that being side - taking the _whole_ process and making an API out of it _could_ be a good idea indeed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663222">18</a> by Michael Long
		posted on 3/16/2007 at 12:46 AM
		</div>
		<div class="comment_text"><p>Actually you can add your own functions to the application scope, and they can be methods of the application.cfc. You just have to explicitly expose them in the applicationStart method.</p><p>&lt;cfset application.sessionCount=this.sessionCount&gt;</p><p>Unfortunately, you can't reference 'this' in the method when you do so, so the struct would have to be an application scope variable as well. (A hack, and pretty much a brain-dead implementation of application.cfc if you ask me.) Better to do as I said, and implement the thing as a separate cfc. So on applicationStart().</p><p>application.sessionCounter=createObject('component','sessionCounter').init()</p><p>Then call application.sessionCounter.sessionStart() in onSessionStart and call application.sessionCounter.count() in the template where needed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663225">19</a> by Raymond Camden
		posted on 3/16/2007 at 12:55 AM
		</div>
		<div class="comment_text"><p>@Michael - Ah yea - the hack. I thought you meant _w/o_ a hack. (Sorry, I consider that a hack. ;) I just don't think I like that. But - thats just my preference. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663233">20</a> by Michael Long
		posted on 3/16/2007 at 2:32 AM
		</div>
		<div class="comment_text"><p>Wasn't my preference either, which was why I was suggesting the standalone "counter". ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663231">21</a> by Aaron Roberson
		posted on 7/1/2008 at 1:27 AM
		</div>
		<div class="comment_text"><p>I kept having the same problem Chad had in the first comment and decided that restarting CF each time was not a good solution. Here is the code I placed in onRequestStart to fix it:</p><p>&lt;cfif NOT structKeyExists(application.sessions,session.urltoken)&gt;<br>	&lt;cfset application.sessions[session.urltoken] = 1&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663226">22</a> by Raymond Camden
		posted on 7/1/2008 at 1:39 AM
		</div>
		<div class="comment_text"><p>I think Chad's issue was that he had started a session already before adding that new code. That's why the restart was necessary. The code should work fine under normal circumstances.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663230">23</a> by Aaron Roberson
		posted on 7/1/2008 at 1:45 AM
		</div>
		<div class="comment_text"><p>Both myself and my client were getting 0 when going to their live website when no other sessions existed. The code I shared above should fix that though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663228">24</a> by Raymond Camden
		posted on 7/1/2008 at 1:52 AM
		</div>
		<div class="comment_text"><p>I'm still going to disagree with you though. :) Question - if you use my code, immediately change <a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a> to a new value (creating a new application), does it work for you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663232">25</a> by Aaron Roberson
		posted on 7/9/2008 at 2:51 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>The problem was actually a bug in the MVC framework I was using. It is all sorted now.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663224">26</a> by Raymond Camden
		posted on 7/9/2008 at 3:19 PM
		</div>
		<div class="comment_text"><p>-whew- I knew I was right. ;) OK, I didn't really, but it feels good to say that. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663223">27</a> by Doug
		posted on 2/25/2012 at 1:06 AM
		</div>
		<div class="comment_text"><p>G*d I love this blog. I couldn't figure out what I was doing wrong.... I hadn't passed the app scope in as an argument to onSessionEnd. Now all is well.</p><p>You guys rock.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663229">28</a> by Raymond Camden
		posted on 2/25/2012 at 1:43 AM
		</div>
		<div class="comment_text"><p>Glad this site is still useful to folks. :)</p></div>
	</div>
</div>
		