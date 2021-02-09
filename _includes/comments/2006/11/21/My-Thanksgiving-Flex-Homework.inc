
<div class="comment" id="c_1713659463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659463">1</a> by Teddy R Payne
		posted on 11/21/2006 at 9:05 PM
		</div>
		<div class="comment_text"><p>I need to research this as well.  Though, I am curious about your approach to accessing your CFCs in a security model.  Do you only want certain roles to execute certain CFCs or do you want to use Flex to prevent executing certain options based upon your role?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659486">2</a> by todd sharp
		posted on 11/21/2006 at 9:10 PM
		</div>
		<div class="comment_text"><p>Are you looking for a login similar to JamJar (<a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Ftechnologies%2Fjamjar%2F%29%3F%3AdzBy4O9NX7BR3gNZIP3KCR6U3To&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/technologies/jamjar/)?">http://labs.adobe.com/techn...</a>  Maybe one of the folks who created that could share the code?  I'd be interested to see what you come up with either way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659472">3</a> by Raymond Camden
		posted on 11/21/2006 at 9:10 PM
		</div>
		<div class="comment_text"><p>The idea for security is - Flex is invoking a remote process, lets say AddUser. I don't want anyone to be able to do that - just authenticated users. Normal, simple, application security I'd call it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659489">4</a> by todd sharp
		posted on 11/21/2006 at 9:12 PM
		</div>
		<div class="comment_text"><p>Here's a very interesting article:  <a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.macromedia.com%2Fflex%2F2%2Fdocs%2Fwwhelp%2Fwwhimpl%2Fcommon%2Fhtml%2Fwwhelp.htm%3Fcontext%3DLiveDocs_Parts%26file%3D00001346.html%3A9Oa0Qtl6GJF7xsH7nPpXXy48ClQ&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.macromedia.com/flex/2/docs/wwhelp/wwhimpl/common/html/wwhelp.htm?context=LiveDocs_Parts&amp;file=00001346.html">http://livedocs.macromedia....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659479">5</a> by todd sharp
		posted on 11/21/2006 at 9:14 PM
		</div>
		<div class="comment_text"><p>As far as security, I've been puzzled with that same issue in my applications.  Is it enough to simply disable or hide the controls which would invoke the "addUser" method based on the authenticated role?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659480">6</a> by Raymond Camden
		posted on 11/21/2006 at 9:16 PM
		</div>
		<div class="comment_text"><p>To be clear - I don't want someone to TELL me how to do it. I want to find this out on my own and share my bumbling results with others. :) In other words, this is a learning exercise I want to share. At the _end_ I want folks to go crazy on the code though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659474">7</a> by Raymond Camden
		posted on 11/21/2006 at 9:18 PM
		</div>
		<div class="comment_text"><p>Todd - that is an excellent question. For this experiment, I am not going to worry about roles. I basically just want a login screen on the front end, and a back end that ensures the calls are authenticated.</p><p>For now - I want it to be nice and simple. But your question definitely needs to be addressed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659476">8</a> by Mike McConnell
		posted on 11/21/2006 at 9:56 PM
		</div>
		<div class="comment_text"><p>I wrote a VERY crude and basic administrative interface to your blog software several weeks ago, coincidentally, to experiment with precisely these two application areas (login and security/authentication verification once logged in).   I think you'll find it as easy as other areas of Flex you've learned thus far.  I'm convinced you can do virtually anything you like in Flex if you're willing to do a little research and experimentation.</p><p>Have fun!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659473">9</a> by Raymond Camden
		posted on 11/21/2006 at 10:09 PM
		</div>
		<div class="comment_text"><p>When I post, please compare and let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659477">10</a> by Teddy R Payne
		posted on 11/21/2006 at 10:17 PM
		</div>
		<div class="comment_text"><p>Say you have a button that fires "AddUser," do you want to prompt for the login when you click the event or do you make the button available after you login?  I would be curious to see the opinion on that questions.  To pre or post authenticate Flex and what is the advantage of one over the other.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659485">11</a> by Mike McConnell
		posted on 11/21/2006 at 10:40 PM
		</div>
		<div class="comment_text"><p>Teddy,</p><p>My opinion on your question is formed by experience with the typical application user.  We have several conventional 32 bit client-server applications in our enterprise environment.  All require an initial login and some require additional levels of login based on the function you're trying to access.  The latter scenario represents a true pain in the butt for the user.  I think an application should be smart enough to take the initial login and apply it as necessary throughout an application.  Users HATE (and that is not too strong a word to use in this context) to log-in to anything.  Exceptions to the single login model might be where extremely sensitive financial or personnel data are being accessed.  You might want, or need in the presence of government regulation, a secondary authentication scheme to serve as an electronic PIN or e-signature (since user name and password combos in the typical business environment are generally not that hard to guess).</p><p>M. McConnell</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659478">12</a> by Teddy R Payne
		posted on 11/21/2006 at 11:31 PM
		</div>
		<div class="comment_text"><p>Mike,<br>I agree that users dislike logging in.  Also, I was not thinking of multiple post-authenticating event.  Hell, that would seriously upset me as the developer to enforce it.  I was more playing to activating a post authentication process after you hit a private method.  Once you authenticate the private method, you would not have to log in again after that.</p><p>I was just curious if anyone has seen any success with a lazy login idea.  Login when you need to and not up front.</p><p>It was just my curious mind spitting out the abnormal.</p><p>Cheers,<br>Teddy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659470">13</a> by Mike Rankin
		posted on 11/22/2006 at 12:24 AM
		</div>
		<div class="comment_text"><p>I've definitely gone the states route.  My simple login has grown to include registration, password retrieval, token entry (to reset a forgotten password) and password changing.</p><p>It works great and feels really natural in terms of user interface.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659468">14</a> by Michael
		posted on 11/22/2006 at 12:35 AM
		</div>
		<div class="comment_text"><p>I too will be working on security in Flex this weekend. I need to go a bit more complex though as I have 2-4 different roles I need to code for. It was nice to read some ideas, and I am looking forward to see what Ray comes up with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659482">15</a> by Raymond Camden
		posted on 11/22/2006 at 12:39 AM
		</div>
		<div class="comment_text"><p>I have the first part done - the just "show logon make it go away" crap using states. It was my first time really using states and well.... read the blog entry tonight. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659481">16</a> by todd sharp
		posted on 11/22/2006 at 12:59 AM
		</div>
		<div class="comment_text"><p>The example apps using states that I've seen confuse the hell out of my feeble mind.  Seems too complicated for such a simple task.</p><p>The concept seems similar to a ViewStack (which seems easier to implement) - can anyone clarify the diff?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659475">17</a> by Mike Rankin
		posted on 11/22/2006 at 1:13 AM
		</div>
		<div class="comment_text"><p>I think the viewStack and states are very similar.  The transitions between states are a bit easier in my opinion.  I think the biggest difference, is one of how you think about the application.  I tend to think of states as being variations of a single custom component.  When I think of the view stack, I think more in terms of web pages.</p><p>Also, the wysiwyg portion of fb2 comes in real handy with view states.  I'm sure there are lots of other differences that I can't think of at the moment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659484">18</a> by Nick Kwiatkowski
		posted on 11/22/2006 at 6:27 PM
		</div>
		<div class="comment_text"><p>States are the way to go -- just remember, each component you have can have it's own states too...  so you can have components that have states within states themselfs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659490">19</a> by Douglas Knudsen
		posted on 11/26/2006 at 11:38 PM
		</div>
		<div class="comment_text"><p>coming in late here...several ways to skin this cat.  First time I did this was using Java on the back end, easy to invoke JAAS this way.  1.5 days then :)  anyhoo, remoting calls are over http and act just like any .cfm call with respect to sessions.  On the Flex side, one approach is to take advantage of binding. Set a 'global' var isAuthed then simply bind to it.  Note that decisions can be made in the binding.</p><p>DK</p></div>
	</div>
</div>
		