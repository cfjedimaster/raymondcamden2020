
<div class="comment" id="c_1713676149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676149">1</a> by Dan Vega
		posted on 1/11/2008 at 7:44 PM
		</div>
		<div class="comment_text"><p>I have been meaning to post an article about this. I am not a big fan of cflogin and I ran across the same problem. If you have 2 applications on the same server there is a way to loop all of the sessions from the server and check credentials that way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676150">2</a> by JB
		posted on 1/11/2008 at 7:47 PM
		</div>
		<div class="comment_text"><p>"Stephen Baldwin of features." - Coffee meet monitor.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676141">3</a> by K2
		posted on 1/11/2008 at 7:50 PM
		</div>
		<div class="comment_text"><p>We currently do this. We actually have an ASP Portal application that writes a cookie with an ID for an individual user. We have 4 servers on the same domain. Two run ASP and two run ColdFusion apps. The login procedure is currently written in ASP. The cookie domain is set so each server in the domain should be able to read the cookie.</p><p>We use the following code to read in the cookie information into the ColdFusion Application Session. This is a method within a CFC:</p><p>&lt;code&gt;<br>&lt;cffunction access="public" name="LoginUserWithCookie" output="false" returntype="boolean"&gt;<br>  &lt;cfif IsDefined("cookie.Application")&gt;<br>   &lt;cfset Session.Person=StructNew()&gt;<br>   &lt;cfoutput&gt;<br>   &lt;cfloop index="thisKey" list="#cookie.Application#" delimiters="&amp;"&gt;<br>     &lt;cfif ListLen(thisKey,"=") gt 1&gt;<br>       &lt;cfset Session.Person[ListFirst(thiskey,"=")]&gt;<br>     &lt;/cfif&gt;<br>   &lt;/cfloop&gt;<br>  &lt;/cfoutput&gt;<br>  &lt;cfreturn true&gt;<br>  &lt;cfelse&gt;<br>  &lt;cfreturn false&gt;<br>  &lt;/cfif&gt;<br>&lt;/cffunction&gt;<br>&lt;/code&gt;</p><p>All the information in the cookie is duplicated in the session.</p><p>Hope that helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676154">4</a> by Raymond Camden
		posted on 1/11/2008 at 7:54 PM
		</div>
		<div class="comment_text"><p>Dan - my issue with getting other sessions is that it really isn't "technically" supported, unless you use the Admin SM API, which normally doesn't make sense for most apps. I know there is code out there that uses internal CF objects, but that kind of stuff makes me nervous.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676153">5</a> by Dan Vega
		posted on 1/11/2008 at 7:57 PM
		</div>
		<div class="comment_text"><p>I know you will not find this code in any documentation but It works fine for me. Again, I am just not a big fan of cflogin so for those who do not mind it, your solution is the recommended.</p><p>&lt;cfset tracker = createObject("java","coldfusion.runtime.SessionTracker")&gt;<br>			&lt;cfset sessions = tracker.getSessionCollection("myapp")&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676152">6</a> by K2
		posted on 1/11/2008 at 7:58 PM
		</div>
		<div class="comment_text"><p>Sorry, correction to a line above. The line should read:</p><p>&lt;cfset Session.Person[ListFirst(thiskey,"=")] = ListLast(thiskey,"=")&gt;</p><p>We then use the ID that is captured from the cookie and query our database for permission information, though it could be stored in the cookie as well.</p><p>For clarification, I named my cookie "Application".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676156">7</a> by Raymond Camden
		posted on 1/11/2008 at 8:14 PM
		</div>
		<div class="comment_text"><p>Dan - yep, that's the code I meant. I'd consider that dangerous code. Shoot, CF8 even now has an option to block stuff like that from the admin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676157">8</a> by Raul Riera
		posted on 1/11/2008 at 8:55 PM
		</div>
		<div class="comment_text"><p>I love CFLOGIN, I stand alone here hehehe if I need anything else from it I usually create a UserSession.cfc</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676158">9</a> by Mike E.
		posted on 1/11/2008 at 8:56 PM
		</div>
		<div class="comment_text"><p>What about using something OpenID?<br>It is somewhat of a open source solution to .Net Passport 1 sign-on for many websites.<br>Your portal would be a OpenID provider,  and each web-app could be a OpenID consumer.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fopenid.net%2F%3A-eS8MkLr4j7RCZgzrWeQdwhJRxU&amp;cuid=3321886" rel="nofollow noopener" title="http://openid.net/">http://openid.net/</a></p><p>There is also a really good Google Tech Talk about OpenID that i would suggest you view.<br><a href="http://disq.us/url?url=http%3A%2F%2Fvideo.google.com%2Fvideoplay%3Fdocid%3D2288395847791059857%3AhlaKMiBqQeccVMclc2EEoLoA3Lo&amp;cuid=3321886" rel="nofollow noopener" title="http://video.google.com/videoplay?docid=2288395847791059857">http://video.google.com/vid...</a></p><p>Just my suggestion may not be what your looking for</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676160">10</a> by James Marshall
		posted on 1/11/2008 at 9:01 PM
		</div>
		<div class="comment_text"><p>I second OpenID. I first discovered it via 37signals who use it for for Backpack, Basecamp and Highrise. I'm going to be using it for a project in the near future.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676159">11</a> by Ryan Guill
		posted on 1/11/2008 at 9:09 PM
		</div>
		<div class="comment_text"><p>The cookie solution (as well as the cflogin solution) would only work still if the two applications were on the same server correct?  If you had multiple applications on multiple servers you would need to set up an application on a server that would be like a localized authentication system and get it to tell all of your other applications if you were logged in or not through a webservice or something like that right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676164">12</a> by Raymond Camden
		posted on 1/11/2008 at 9:13 PM
		</div>
		<div class="comment_text"><p>@Ryan - yes. I was assuming he was all on one box, or one domain at least.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676162">13</a> by Dan Vega
		posted on 1/11/2008 at 9:16 PM
		</div>
		<div class="comment_text"><p>If you are on the same box and the domains do match then cookie solution is not going to work. This is the problem I ran into and even if it is just a sub domain you can not share cookies</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676167">14</a> by Raymond Camden
		posted on 1/11/2008 at 9:26 PM
		</div>
		<div class="comment_text"><p>Eh? You can set cookies for *.foo.com. That way if you have <a href="http://disq.us/url?url=http%3A%2F%2Fa.foo.com%3AEl7_5zuYO4ZO_Fs8ez0Qd1zYjKE&amp;cuid=3321886" rel="nofollow noopener" title="a.foo.com">a.foo.com</a> and <a href="http://disq.us/url?url=http%3A%2F%2Fb.foo.com%3Aa0kwSuh82G4cRqB0ECX3qbiLBQc&amp;cuid=3321886" rel="nofollow noopener" title="b.foo.com">b.foo.com</a>, the cookies are shared.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676161">15</a> by Ryan Guill
		posted on 1/11/2008 at 9:34 PM
		</div>
		<div class="comment_text"><p>can you set cookies through a function called as a webservice, for the domain that the webservice is for?</p><p>Example:  I have a domain called <a href="http://disq.us/url?url=http%3A%2F%2Fauth.com%3ABux5rwzKM3qoBWRkDFluhZ_DA_g&amp;cuid=3321886" rel="nofollow noopener" title="auth.com">auth.com</a>, I have a site called <a href="http://disq.us/url?url=http%3A%2F%2Fsite.com%3AJqCIanhhF_YIGBbmzvLmvB0y28U&amp;cuid=3321886" rel="nofollow noopener" title="site.com">site.com</a>.  Can <a href="http://disq.us/url?url=http%3A%2F%2Fsite.com%3AJqCIanhhF_YIGBbmzvLmvB0y28U&amp;cuid=3321886" rel="nofollow noopener" title="site.com">site.com</a> call a webservice on <a href="http://disq.us/url?url=http%3A%2F%2Fauth.com%3ABux5rwzKM3qoBWRkDFluhZ_DA_g&amp;cuid=3321886" rel="nofollow noopener" title="auth.com">auth.com</a> to set a cookie for <a href="http://disq.us/url?url=http%3A%2F%2Fauth.com%3ABux5rwzKM3qoBWRkDFluhZ_DA_g&amp;cuid=3321886" rel="nofollow noopener" title="auth.com">auth.com</a>, and then call another webservice on <a href="http://disq.us/url?url=http%3A%2F%2Fauth.com%3ABux5rwzKM3qoBWRkDFluhZ_DA_g&amp;cuid=3321886" rel="nofollow noopener" title="auth.com">auth.com</a> to see if that cookie is set?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676163">16</a> by Raymond Camden
		posted on 1/11/2008 at 9:40 PM
		</div>
		<div class="comment_text"><p>Ryan:</p><p>If you use CFHTTP hit a remote URL, you can get anything back, including cookies.</p><p>If you use CFINVOKE, I'm not 100% sure. There is a getSOAPResponseHeader() method which MAY do it. Worse comes to worse, you can use CFHTTP and parse the WSDL yourself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676168">17</a> by Michael De Jonghe
		posted on 1/11/2008 at 10:22 PM
		</div>
		<div class="comment_text"><p>@ William, I had the same problem you did a while ago.  Here's what I did, I'll pseudo-code it for you.</p><p>I made extensive use of folders and App.cfc in my example.  I also stole Adobe's CF Login wizard in Dreamweaver and made parts of it my own.  I basically expand on the session's structure... I had a ton of keys:  IsLoggedIn, UserApps, AdminApps, FullName, UserName, EmailAddress, Etc... that I create for valuelists when I do a db query on their username.</p><p>Each subfolder includes an Application.cfc that extends the main App.cfc in the root.  The OnRequestStart method checks the isloggedin value and also check to see if one of the struct key's values match the application name.</p><p>Check out the Login Wizard... it will really help you out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676170">18</a> by Michael De Jonghe
		posted on 1/11/2008 at 10:33 PM
		</div>
		<div class="comment_text"><p>I read over my last post and I'm not sure that I made myself clear.</p><p>A snip of the App.cfc OnRequestStart function:</p><p>&lt;cffunction name="OnRequestStart" returntype="boolean" output="false"&gt;<br>  &lt;cfargument name="thePage" type="string" required="true"&gt;<br>  &lt;cfif IsDefined("url.logout")&gt;<br>    &lt;cfset structDelete(session, "myapp")&gt;<br>  &lt;/cfif&gt;<br>  &lt;cfinclude template="force_login.cfm"&gt;<br>  &lt;cfreturn true&gt;<br>&lt;/cffunction&gt;</p><p>And now the force_login.cfm page:</p><p>&lt;!---If the User is NOT logged in the session variable will not exist, otherwise skip this logical block---&gt;<br>&lt;cfif not IsDefined("session.myapp.isloggedin")&gt;<br>  &lt;!--- If the user hasn't gotten the login form yet, display it ---&gt;<br>  &lt;cfif not (IsDefined("form.login") and IsDefined("form.username") and IsDefined("form.password"))&gt;<br>    &lt;cfinclude template="login.cfm"&gt;<br>    &lt;cfabort&gt;<br>    &lt;!--- Otherwise, the user is submitting the login form ---&gt;<br>    &lt;cfelse&gt;<br>    &lt;!--- Invoke the Authenticate Function, if returns TRUE then move on ---&gt;<br>    &lt;cfinvoke component="<a href="http://disq.us/url?url=http%3A%2F%2Fmyapp.componets.security%3ADR3LeMM7yfc6_42YJL3FBQcbM6U&amp;cuid=3321886" rel="nofollow noopener" title="myapp.componets.security">myapp.componets.security</a>" method="authenticate" returnvariable="auth"&gt;<br>    &lt;cfinvokeargument name="username" value="#form.username#"/&gt;<br>    &lt;cfinvokeargument name="password" value="#form.password#"/&gt;<br>    &lt;/cfinvoke&gt;<br>    &lt;!--- If the username and password are correct... ---&gt;<br>    &lt;cfif auth&gt;<br>      &lt;cfinvoke component="<a href="http://disq.us/url?url=http%3A%2F%2Fmyapp.componets.security%3ADR3LeMM7yfc6_42YJL3FBQcbM6U&amp;cuid=3321886" rel="nofollow noopener" title="myapp.componets.security">myapp.componets.security</a>" method="userinfo" returnvariable="info"&gt;<br>      &lt;cfinvokeargument name="username" value="#form.username#"/&gt;<br>      &lt;/cfinvoke&gt;<br>      &lt;cfset session.myapp.isloggedin = true&gt;<br>      &lt;cfset session.myapp.username = #form.username#&gt;<br>      &lt;cfset session.myapp.role = #info.role#&gt;<br>      &lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fsession.myapp.name%3ApbsOJr6zoQcyKQIIyerajbmOeaQ&amp;cuid=3321886" rel="nofollow noopener" title="session.myapp.name">session.myapp.name</a> = #<a href="http://disq.us/url?url=http%3A%2F%2Finfo.name%3AgAw4q1j5Rzk1bGilaQ0sdnq13ik&amp;cuid=3321886" rel="nofollow noopener" title="info.name">info.name</a>#&gt;<br>      &lt;cfset session.myapp.emailaddress = #info.emailaddress#&gt;<br>      &lt;cfset session.myapp.deptid = #info.deptid#&gt;<br>      &lt;!--- Otherwise, re-prompt for a valid username and password ---&gt;<br>      &lt;cfelse&gt;<br>      &lt;cfinclude template="login.cfm"&gt;<br>      &lt;cfabort&gt;<br>    &lt;/cfif&gt;<br>  &lt;/cfif&gt;<br>&lt;/cfif&gt;</p><p>Hope that makes sense to you William</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676172">19</a> by Douglas Knudsen
		posted on 1/12/2008 at 12:15 AM
		</div>
		<div class="comment_text"><p>I set this up a t a previous employers.  I started it with CF 6, you can use the approach on CF 7 and greater, but can't use application.cfc, have to use application.cfm.  The approach is similar to what Ray points out here except it doesn't use cflogin and it shares the user info with the application after login.  The short story is: you use two cfapplication tags in the code.  One cf application, call it MASTER, handles login and stores the user info.  Each sub app first checks this to see if user is logged in by using cfapplication name=MASTER.  The app makes a copy of the user data then uses cfapplication name=SUBAPP1 to switch to the new cf application and copies the user data into it...bamm!  There are a few details you need to handle, but that's the outline.</p><p>DK</p><p>DK</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676166">20</a> by Jon Hartmann
		posted on 4/2/2008 at 7:00 PM
		</div>
		<div class="comment_text"><p>So no one here can give an example of setting up a single login to work across multiple applications on multiple servers with differing domains? Using applicationtoken probably wont work across servers, and I know the Master/Sub application setup wont work across servers. Cookie based probably wont work across domains.</p><p>There has to be some architecture that can handle that scenario, but so far the closest I saw was the idea to use a &lt;cfhttp&gt; call to hit a web service that returns cookie info...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676169">21</a> by Raymond Camden
		posted on 4/2/2008 at 11:40 PM
		</div>
		<div class="comment_text"><p>Well to be fair, thats a big example and probably wouldn't be good for a comment here. If someone wants to blog it and post a URL, that's fine.</p></div>
	</div>
</div>
		