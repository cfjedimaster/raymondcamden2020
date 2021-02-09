
<div class="comment" id="c_1713616065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616065">1</a> by Andy Allan
		posted on 8/26/2004 at 7:58 PM
		</div>
		<div class="comment_text"><p>Right, stupid question alert ... but does this definately mean we're ok to use loginStorage=session (well until the next bug that is ;) )</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616064">2</a> by Raymond Camden
		posted on 8/26/2004 at 8:25 PM
		</div>
		<div class="comment_text"><p>AFAIK, yes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616067">3</a> by ksuh
		posted on 8/27/2004 at 11:56 PM
		</div>
		<div class="comment_text"><p>YAY!!  Man, that bug sure was annoying - I thought I was on cheap drugs everytime I logged on as someone else :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616072">4</a> by Simon Horwith
		posted on 8/30/2004 at 7:45 PM
		</div>
		<div class="comment_text"><p>this, coupled with the ability to persist components in the session scope when blackstone is released (which Macromedia publicly said is among the features that is slated for but "may be" in the release at the last London CFUG), means it will finally be possible to easily build a robust AND scalable log in framework.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616071">5</a> by Patti Lee
		posted on 10/2/2004 at 7:42 PM
		</div>
		<div class="comment_text"><p>I could kiss you.  I could kiss the MM engineers who fixed the problem and I could kiss you for telling me about it.  I had problems with this cflogin caching even before the whole loginstorage = session option and they could never be fixed.  I even had problems getting others to understand my issues.  I even had Charlie Arehart over at my house and he, while finally understanding me, came up with nothing.  Now I can start the healing process.  Maybe even set it behind me one day.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616069">6</a> by Rebecca Wells
		posted on 1/27/2005 at 1:45 AM
		</div>
		<div class="comment_text"><p>Ok, I'm confused. I've installed the 6.1 updater but I still get this problem with cflogin. Help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616077">7</a> by Raymond Camden
		posted on 1/27/2005 at 2:13 AM
		</div>
		<div class="comment_text"><p>There is a new, post CFMX 6.1 Updater bug with CFLOGIN/Session. It is not safe to use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616068">8</a> by Davide Formica
		posted on 8/10/2005 at 4:48 PM
		</div>
		<div class="comment_text"><p>Is there a bug un the coldfusion 7 cflogin?  It seems that it logs in no matter what I type for username and password.  Even if the &lt;cfloginuser tag is inside an if statement like this:</p><p>&lt;cflogin&gt;<br>   &lt;cfif not IsDefined("cflogin")&gt;<br>     &lt;cfinclude template="../../MyAccount/Login.cfm"&gt;<br>      &lt;cfabort&gt;<br>   &lt;cfelse&gt;<br>&lt;!--- code for cflogin authentication against our db ---&gt;<br>&lt;cfquery  name="q_CusExists" datasource="#db#"&gt;<br>SELECT CUS_USER,CUS_PASS <br>FROM CUSTOMER <br>WHERE CUS_USER='#<a href="http://disq.us/url?url=http%3A%2F%2Fcflogin.name%3AIxghUAFEL1y8By4cXuL0lkgbnIo&amp;cuid=3321886" rel="nofollow noopener" title="cflogin.name">cflogin.name</a>#' AND CUS_PASS='#cflogin.password#'<br>&lt;/cfquery&gt;</p><p>&lt;cfif q_CusExists.RecordCount NEQ 0&gt;<br>	&lt;cfset session.User=<a href="http://disq.us/url?url=http%3A%2F%2Fcflogin.name%3AIxghUAFEL1y8By4cXuL0lkgbnIo&amp;cuid=3321886" rel="nofollow noopener" title="cflogin.name">cflogin.name</a>&gt;<br>	&lt;cfset session.Pass=cflogin.password&gt;<br>	&lt;cfloginuser name = "#session.User#" password = "#session.Pass#" roles = "customer" /&gt;<br>&lt;/cfif&gt;<br>   &lt;/cfif&gt;<br>&lt;/cflogin&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616079">9</a> by Raymond Camden
		posted on 8/10/2005 at 4:53 PM
		</div>
		<div class="comment_text"><p>I haven't seen this. I'd add some debug statements. For example, maybe your query is wrong. Also, do not forget that once you login, the code inside the cflogin block isn't run.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616080">10</a> by Rebecca Wells
		posted on 8/10/2005 at 9:15 PM
		</div>
		<div class="comment_text"><p>I think the problem is that you need an CFELSE statement to go with the cfif q_CusExists.RecordCount NEQ 0 ... put &lt;cfinclude template="../../MyAccount/Login.cfm"&gt; &lt;cfabort&gt;  in the CFELSE to catch if the query did NOT find their username/password.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616066">11</a> by Davide Formica
		posted on 8/10/2005 at 11:25 PM
		</div>
		<div class="comment_text"><p>Thank you Rebecca !<br>I added:<br>&lt;cfelse&gt;<br>  &lt;cfinclude template="../../MyAccount/Login.cfm"&gt;<br>  &lt;cfabort&gt;<br>And it worked beautifully.<br>Complete code:<br>&lt;cfif /**user and pass match in db**/&gt;<br>  &lt;cfloginuser name = "#session.User#" password ="#session.Pass#" roles = "customer" /&gt;<br>&lt;cfelse&gt;<br>  &lt;cfinclude template="../../MyAccount/Login.cfm"&gt;<br>  &lt;cfabort&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616073">12</a> by Bob Flynn
		posted on 9/25/2005 at 2:12 AM
		</div>
		<div class="comment_text"><p>Now that we’ve moved to CF7 we are reworking our authentication system and taking advantage of application.cfc. We have written a cflogin block into the onRequestStart function but it does not seem to be setting the user. Here is the code block we have boiled it down to for testing.</p><p>&lt;cffunction name="onRequestStart" returnType="void" output="false"&gt;<br>&lt;cflogin&gt;<br>   &lt;cfif NOT IsDefined("cflogin")&gt;<br>            &lt;cfloginuser name="reflynn" password="password" roles="none" /&gt;<br>            &lt;cflocation url="<a href="http://disq.us/url?url=http%3A%2F%2Fespn.com%3ArMULUpOE6XeHkqrqhk4yU2DApXM&amp;cuid=3321886" rel="nofollow noopener" title="http://espn.com">http://espn.com</a>"&gt;<br>   &lt;cfelse&gt;<br>            &lt;cflocation url="<a href="http://disq.us/url?url=http%3A%2F%2Fgoogle.com%3A_IuuuaY93QHJ-V0RbKBx3HKnPG4&amp;cuid=3321886" rel="nofollow noopener" title="http://google.com">http://google.com</a>"&gt;<br>   &lt;/cfif&gt;<br>&lt;/cflogin&gt;<br>&lt;/cffunction&gt;</p><p>Every time we hit the page it redirects to ESPN. It seems that cflogin never "takes". We have tried loginStorage=session and we've tried leaving the default. Everything I read tells me it’s pretty straightforward. We must be doing something very simple incorrectly. Any pointers greatly appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616074">13</a> by Raymond Camden
		posted on 9/29/2005 at 2:02 AM
		</div>
		<div class="comment_text"><p>Bob, I'm thinking you are right. I wouldn't go this route though. Why would you want to send someone to another server based on login?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616075">14</a> by Alex
		posted on 11/12/2007 at 4:41 AM
		</div>
		<div class="comment_text"><p>I am also seeing this bug with coldfusion 7.0.2 and flex remote object :(, it seems that even if i issue a manual logout, the GetAuthUser fucntion still returns the last user.<br>Any pointers appreciated<br>Alex</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616078">15</a> by Alex
		posted on 11/12/2007 at 5:25 AM
		</div>
		<div class="comment_text"><p>To add more detail, i have found that if i run it like this it kind of works<br>getauthuser =&gt; ''<br>setremotecredentials to login<br>getauthuser =&gt; 'user'<br>logout<br>refresh flex app<br>getauthuser =&gt; 'user'<br>logout<br>refresh flex app<br>getauthuser = ''</p><p>So it works only after i refresh the page/issue logout twice?<br>Is there something i m missing? some weird cookie not setting issue? This is running firefox on windows vista with these settings<br>sessionManagement=true<br>sessionTimeout="#createtimespan(0,0,5,0)#"<br>applicationtTmeout="#createtimespan(0,0,10,0)#" but the same happens with loginStorage="Session"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616076">16</a> by Alex
		posted on 11/12/2007 at 5:36 AM
		</div>
		<div class="comment_text"><p>Sorry for 3 comments in a row, but i think i finally managed to get it working and maybe it will help someone else not waste as much time as i did.<br>What got it working everytime is that i set the credentials to '' before calling the logout function in the cfc. It seems it kept re logging in even on a page refresh if i ve set the remote credentials at some point. very weird.<br>	   			RO.setRemoteCredentials('','');<br>RO.logoutSession.send();</p><p>P.S. another weird thing related to cflogin/getauthuser was that I was unable to getauthuser in a file named cfc/user.cfc ...maybe it was jsut my configuration, but i renamed to user2.cfc and everything started magically working.</p><p>I hope this will help someone<br>Alex</p></div>
	</div>
</div>
		