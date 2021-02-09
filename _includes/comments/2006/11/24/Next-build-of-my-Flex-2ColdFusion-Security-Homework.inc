
<div class="comment" id="c_1713659567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659567">1</a> by Simeon
		posted on 11/25/2006 at 9:49 AM
		</div>
		<div class="comment_text"><p>Just like in CF there are many ways to go after a particular problem.  You are correct that you could use flashvars to set up the path to the CFC in question.  In this case though, I think you will need to create your remote object in AS.  The easiest way for this to happen is to add a creationComplete event handler to your application and have it call a function.  Inside that function you could set the source property for your remote object.</p><p>As for storing the returned state of the user, you could do one of several things.  The most simple would be to have a property on your application that holds the value.  The first change I would change there however is updating that from a simple value to some kind of user object so I can add methods like isAuthenticated() or getAccessLevel().  Your authentication call could actually return a cfc which contains the appropriate values to initialize this local as object.  Once the application starts to grow, I recommend using something like a ModelLocator to store those values that are needed across and entire application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659576">2</a> by todd sharp
		posted on 11/25/2006 at 6:23 PM
		</div>
		<div class="comment_text"><p>I wouldn't say you did anything wrong, but here's a suggestion.  I like to use inline conditionals to dynamically enable buttons like this.  Since you're checking that the fields are both not blank before submitting, the following would prevent the submit button from even being clicked until there was at least one char in each field.</p><p>&lt;mx:Button id="loginButton" label="Login"<br>    enabled="{(username.text.length == 0 || password.text.length == 0) ? false : true}"<br>    toolTip="{loginButton.enabled == true ? 'Click to submit' : 'Enter username and password'}" click="checkForm()" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659574">3</a> by todd sharp
		posted on 11/25/2006 at 6:28 PM
		</div>
		<div class="comment_text"><p>Regarding the source of the remote object, wouldn't the use of mappings help?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659572">4</a> by Raymond Camden
		posted on 11/25/2006 at 6:43 PM
		</div>
		<div class="comment_text"><p>todd: Mappings - well - in my case, my dev is very different from my live. It probably isn't a good idea to do that - BUT, in general, I can see something like that as being a setting. So for example, I'd like all my RemoteObjects to use a source of #root#.foo. Get my meaning?</p><p>todd: That button looks insane cool! :) I'm not sure I want to use that - but I like it. I'll play with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659579">5</a> by todd sharp
		posted on 11/25/2006 at 6:53 PM
		</div>
		<div class="comment_text"><p>I'm just brainstorming here, but how about an application var for your path to the cfcs being dynamically set in an application.cfc (or cfm) depending on dev or prod - and that value then being written out to an xml file on the server.  Then on load of the Flex app, you load the value from the external xml file and use that as the remoteObject path?  This may require the Flex wrapper to be cfm (instead of html) to invoke the application.cfc.</p><p>I hesitate in using Flash vars (simply because I'm naive to them).  I'm also interested to see what others come up with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659575">6</a> by Bruce
		posted on 11/25/2006 at 7:09 PM
		</div>
		<div class="comment_text"><p>Ray and all:</p><p>  A security question I have is how to ensure that only my Flex application can call the CFC methods.  Since I have to set access="remote", the CFC method can be called via the URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659578">7</a> by Bruce
		posted on 11/25/2006 at 8:31 PM
		</div>
		<div class="comment_text"><p>Ray and All:</p><p>   Regarding my question above, I think I've figured out a way to create a login and logout process and secure the CFC methods so that only my Flex application can call them.</p><p>   See:  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.brucephillips.name%2Fflex%2FsecureCFCTest%2Fbin%2FsecureCFCTest.html%3A2BqAcAz-yh8-LINAbKMG34JCweI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.brucephillips.name/flex/secureCFCTest/bin/secureCFCTest.html">http://www.brucephillips.na...</a></p><p>   (you can right click to view the source).  The correct username is admin and the correct password is dharma.</p><p>  I've modified the code Ray had in his latest example and have also incorporated some code I found in the Using ColdFusion MX With Flex 2 Adobe PDF documentation.  There is a section in that document that discusses Flash Remoting Update and Authentication.</p><p>  Basically, I have the Flex application set the remote credentials to the username and password entered by the user (see <a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.macromedia.com%2Fflex%2F2%2Flangref%2Fmx%2Frpc%2Fremoting%2Fmxml%2FRemoteObject.html%29%3ABkAoSwzyBYP2q_ciLmFdYmaeRDM&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.macromedia.com/flex/2/langref/mx/rpc/remoting/mxml/RemoteObject.html)">http://livedocs.macromedia....</a> and its discussion on method setRemoteCredentials.  The login method in my CFC uses CFLogin to process the user's provided information that is now in the CFLogin scope.  If the correct information is provide the roles attribute for cfloginuser is set to flexadmin.</p><p>My getData CFC function uses the roles attribute set to flexadmin.  Thus, unless the user has successfully logged in he cannot call this method from flex (or anywhere else such as in the URL).</p><p>I also provide a logout capability on the "secure" view in the Flex app, which will call a logout function in the CFC.</p><p>Let me know what you think about this variation.</p><p>Bruce</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659583">8</a> by Kevin Schmidt
		posted on 11/25/2006 at 8:40 PM
		</div>
		<div class="comment_text"><p>Bruce, you only need to set access=remote if you are using flex with web services.  If you are usimg AMF (Flash Remoting) you don't need to set access=remote.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659582">9</a> by Kevin Schmidt
		posted on 11/25/2006 at 8:42 PM
		</div>
		<div class="comment_text"><p>Ray - appreciate what you're doing with this.  I've built some apps with Flex and security has been one of my biggest questions as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659580">10</a> by Raymond Camden
		posted on 11/25/2006 at 9:00 PM
		</div>
		<div class="comment_text"><p>Btw - in the last version of CF, they added isSoapRequest. You can use this to allow Flash Remoting calls but NOT Web  Service calls. Or vice-versa.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659588">11</a> by Kevin Schmidt
		posted on 11/26/2006 at 4:43 AM
		</div>
		<div class="comment_text"><p>Ray - all of my calls via Flash Remoting are done with access=public - if you are using Flash Remoting you don't have to set access=remote.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659585">12</a> by Bruce
		posted on 11/26/2006 at 5:51 AM
		</div>
		<div class="comment_text"><p>Kevin:</p><p>  Thanks for the tip about using access="public" instead of access="remote".  I did not know you could do that, but tested the demo I mention above and access="public" worked fine.</p><p>  I still like the idea of using setRemoteCredentials in the RemoteObject call to a CFC function that uses CFLogin.  You can then user role based security.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659584">13</a> by Raymond Camden
		posted on 11/26/2006 at 8:02 AM
		</div>
		<div class="comment_text"><p>I didn't know that either. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659587">14</a> by Douglas Knudsen
		posted on 11/26/2006 at 11:51 PM
		</div>
		<div class="comment_text"><p>I've been using the facade approach to remote object calls.  Have the Flex app talk to a facade which then talks direct to the CFCs.  The facade gets access="remote" the others access="public" or package.  Your facade can live under your web apps root with all the CFCs living somewhere else not web accessible. Note you may need to tweak your flex config file under your web-inf folder concerning accessiing remote objects and mappings.</p><p>IIRC, use of setCredentials() requires cflogin, something I'm no fan of.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659586">15</a> by Ryan Guill
		posted on 11/27/2006 at 8:33 PM
		</div>
		<div class="comment_text"><p>regarding the access=public thing, you can do this as long as your flex config on your cf server is set to allow this.  This makes the security much less of an issue.</p><p>There are also settings in there to return structure keys as all lowercase instead of uppercase and a few other things.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659590">16</a> by Ryan Guill
		posted on 11/27/2006 at 8:37 PM
		</div>
		<div class="comment_text"><p>Also, have you thought any about requiring a "key" of sorts to be able to use the coldfusion methods?  anything calling must provide a key to be able to use the service, and then your flex code just passes that through when calling?  May take a little work, but should make it easier for you to be sure its only you calling the code. A lot of commercial webservices use things like this.</p><p>I am in the same dilemma about moving from development to production.  I was going to look next on how to do remote object calls using actionscript only instead of the mxml tags, to see if I can construct the object on the fly instead of hardcoding.</p></div>
	</div>
</div>
		