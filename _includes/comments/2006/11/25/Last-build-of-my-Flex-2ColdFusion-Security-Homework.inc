
<div class="comment" id="c_1713659591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659591">1</a> by Scott Stroz
		posted on 11/26/2006 at 9:28 AM
		</div>
		<div class="comment_text"><p>Ray - Here is how I handled this on a recent Flex app.</p><p>A user logs in using username and password.  I retrieve the userId for the suer based on their username, password and whether or not the account is active.  I then return an instance of a user object to Flex.</p><p>So, I would have a user ActionScript class to be used in Flex.  Inside the method I use to handle the login, I check to see if there is a valid userID (if it doesn't equal zero) and if so, set the values of the ActionScript class to those that are returned.</p><p>Right or wrong, I have found its easier for me to follow how information is getting updated and passed around if I keep everything as an object like I am used to in my 'regular' web apps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659573">2</a> by todd sharp
		posted on 11/26/2006 at 9:54 AM
		</div>
		<div class="comment_text"><p>I use a similar method to Scott (like he said, right or wrong).  Once the 'pseudo role' is set in the Flex (or Flash Form) app, I use those values to determine which controls should be visible/enabled for the given user, thus bypassing the need for the methods themselves to be role based (they simply can't click the button to call it!).  I personally find it to be easier to manage, but it obviously isn't the most fool proof technique.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659592">3</a> by Raymond Camden
		posted on 11/26/2006 at 6:20 PM
		</div>
		<div class="comment_text"><p>Scott, I have to say I don't quite get it. Are you saying you pass a userID with your calls to secure methods? Doesn't that mean someone could guess an ID? Maybe you can blog a full example? Just for me? Please? Thank you? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659594">4</a> by todd sharp
		posted on 11/26/2006 at 9:36 PM
		</div>
		<div class="comment_text"><p>Obviously the biggest hole in my method is that 'remote' methods are still exposed - would switching the access to 'public' as suggested in your previous post's comments ensure security, or do you not think my method is a good idea at all?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659596">5</a> by Raymond Camden
		posted on 11/26/2006 at 9:43 PM
		</div>
		<div class="comment_text"><p>I think it depends. I mean - I feel confident that the roles= secures it enough. If someone tried to run it via a web service it just wouldn't work. You can also detect a WS request using isSOAPRequest. I may not quite get what you mean though. Do you feel it is NOT secure now with the roles= in the method?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659598">6</a> by todd sharp
		posted on 11/26/2006 at 10:30 PM
		</div>
		<div class="comment_text"><p>No - i think it's totally secure with roles= in the method.  All due respect, it just seems like overkill.  If we can ensure the methods can not be called via a WS and not be called by Flex users who are not in the proper "role" than are the extra steps (onRequestStart, cflogin, etc) really necessary?  I'm not saying your technique is wrong, just trying to wrap my head around all of this :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659593">7</a> by Raymond Camden
		posted on 11/26/2006 at 10:54 PM
		</div>
		<div class="comment_text"><p>But Todd - if you use roles= in the method, then you MUST use cflogon, hence my user of onRequestStart. You need to have that in order for it to work. I do agree though that if you wanted to block remote folks you should just use access=public instead of isSOAPRequest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659601">8</a> by Derek P.
		posted on 11/27/2006 at 1:51 AM
		</div>
		<div class="comment_text"><p>This convesation on access=remote safety as a webservice "backdoor" was something that came up at my job recently. We were stuck in a bind because we use flex 2 for some of our admin panel work, yet most of the client-facing sites we build require flash remoting via the access=remote attribute of our functions. So what I ended up doing was creating a "webservice port" of sorts...Basically its a single access point CFC that listens for a proprietary "request packet" that is just an XML request packet that says what it needs to do and the webservice reads it, calls the internal method necessary, and returns the data in one of many response formats we have available (like JSON or something).</p><p>This doesn't seem like much of a convenience on the surface, but each request packet requires knowledge of how to construct a secret hash that makes the request only work for 24 hours after its request.</p><p>So thats, how we coped with the situation of secure vs. insecure...and of course we have AS classes for automatically generating the request packets and what not.</p><p>Just wanted to give you a glimpse of how we handle it (even if its wrong :P)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659604">9</a> by Bruce
		posted on 11/27/2006 at 3:22 AM
		</div>
		<div class="comment_text"><p>Ray -</p><p>   I'm not sure I follow your logic in your last example.  By placing the cflogin tag in onRequestStart in application CFC are you not authenticating the user every time the Flex application calls one of the CFC's methods?</p><p>   If that is correct, why not just use CFLogin in a separate authentication method (see my comment and demo flex app I referenced on your previous example).  You could setRemoteCredentials in your remote object before calling that authenication method and then those values would be available to CFLogin.</p><p>Once the user has been authenticated once by CFLogin and their role set I don't see the need to authenticate the same user again.  The role stays with that user and the Flex app will be able to call the methods secured by  role="admin" for example without having to reauthenticate that user.</p><p>Bruce</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659606">10</a> by Raymond Camden
		posted on 11/27/2006 at 3:32 AM
		</div>
		<div class="comment_text"><p>Bruce: I am only authenticating when the Flex app passes in the right info, ie, when sRC is used (sRC == setRemoteCredentials). I don't see how your idea of using a separate method would be any better or worse. I would either authenticate in onRequestStart, or in a method of the CFC. I'd rather it happen in onReqStart. That way I don't have to call some other method, but the exact method I want.</p><p>Basically my way uses something built in to CF (the firing of onReqStart) whereas yours is more work. (I'd say.)</p><p>I don't think you are right about not needing to re-authenticate. If session variables were in use then it would make sense, but my Flex app isn't using session  variables.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659603">11</a> by Bruce
		posted on 11/27/2006 at 3:41 AM
		</div>
		<div class="comment_text"><p>Ray:</p><p>  In my demo app (see your previous example and my comment) I don't reauthenticate the user after he logs in successfully.  After the user has been authenticated, the flex app can call the 'role secured' CFC function and the call is now allowed.</p><p>You can right click on the demo to see all the code including the CFC.</p><p>Bruce</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659605">12</a> by Raymond Camden
		posted on 11/27/2006 at 3:51 AM
		</div>
		<div class="comment_text"><p>Bruce:</p><p>First a quick side note. In the past when I published source with Flex apps that included CFM/CFC files, it didn't work as the CFM/CFC would try to run when you viewed them. I guess Adobe fixed that?</p><p>So - I see your app and I'm curious how it works. By default CFLOGIN will set cookies. So your Flex app makes the FR call and correctly picks up the cookies? Even though though you must have a CFLOGIN executed on EVERY request. The mere fact that you run CFLOGIN sets up security for the rest of the request. If you are already logged in the code inside the CFOGIN block won't rerun, but it has to be encountered in order for it to run. Thats not a Flex issue but how CFLOGIN works in general. I'm truly confused as to how your application is running right. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659607">13</a> by Raymond Camden
		posted on 11/27/2006 at 3:55 AM
		</div>
		<div class="comment_text"><p>Ok - you are right. I modified my CFC's Authentication method to run cflogin (ie, it is all in one step), and I removed my onReqestStart code, and it runs. I need to investigate more now but I'm truly surprised.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659608">14</a> by Raymond Camden
		posted on 11/27/2006 at 3:57 AM
		</div>
		<div class="comment_text"><p>Bruce: I just did a test and in my published source, I can't view CFC files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659610">15</a> by Raymond Camden
		posted on 11/27/2006 at 3:59 AM
		</div>
		<div class="comment_text"><p>scratch that - I think it is a misconfig on my apache server. I can hit foo.txt, but not foo.cfc.txt. Apache doesn't seem to like it even though it should load it like a normal TXT file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659612">16</a> by Bruce
		posted on 11/27/2006 at 5:57 AM
		</div>
		<div class="comment_text"><p>Ray:</p><p>   I think it my application works because...</p><p>   The default for cfLoginUser is to use a memory-only cookie to store the user information (see <a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.macromedia.com%2Fcoldfusion%2F6.1%2Fhtmldocs%2Ftags-p74.htm%29%3AsEut8XYJcCNtBAYUBMH6_QSIWv0&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.macromedia.com/coldfusion/6.1/htmldocs/tags-p74.htm)">http://livedocs.macromedia....</a>.  So once I use cfLoginUser to set the name, password, and role for a user, that information is stored in a memory cookie.</p><p>  The Flex the RemoteObject setRemoteCredentials sets the username and password.  After using setRemoteCredentials just once, the username and password are sent to CF each time  we use that RemoteObject to call a CFC function.</p><p>  CF receives the username and password as part of the RemoteObject call to a CFC function.  CF checks for the cookie that matches the unique id created using that username and password.  CF then finds the role in that cookie.</p><p>Bruce</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659609">17</a> by Raymond Camden
		posted on 11/27/2006 at 6:46 AM
		</div>
		<div class="comment_text"><p>Bruce, all of that makes sense, and meshes with my knowledge of CFLOGIN, but the one part missing is the running of CFLOGIN. It was my understanding that the tag had to run in the request in order to "turn on" the roles based security.</p><p>Well, thanks for sharing this!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659611">18</a> by Douglas Knudsen
		posted on 11/27/2006 at 8:20 PM
		</div>
		<div class="comment_text"><p>I pretty much use the same approach as any CF based app.  In fact I've even created a login Flex app seperate from my main Flex app.  The application.cfm/cfc just redirects the user to the login app if not authenticated.  Once authenticed the login app redirects them to the actual app.  I could mod this to load the approproiate flex app also instead of a redirect.  I do not use cflogin at all either.  Have to remember a remote object call is over http, has headers and all, just like a request to a cfm page.</p><p>DK</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659613">19</a> by Nikos
		posted on 12/7/2011 at 10:28 PM
		</div>
		<div class="comment_text"><p>Whats to stop the user decompiling the swf and getting the credentials out?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659614">20</a> by Raymond Camden
		posted on 12/7/2011 at 10:41 PM
		</div>
		<div class="comment_text"><p>The credentials aren't stored in the binary.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659615">21</a> by Nikos
		posted on 12/7/2011 at 10:43 PM
		</div>
		<div class="comment_text"><p>ah ok, so your using a form :)</p></div>
	</div>
</div>
		