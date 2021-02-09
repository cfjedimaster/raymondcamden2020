
<div class="comment" id="c_1713680378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680378">1</a> by Shane Zehnder
		posted on 4/29/2008 at 8:28 PM
		</div>
		<div class="comment_text"><p>I wrote an application a few years back that allowed the admin to view and inspect variables in sessions across all the applications on a server.  I will see if I can dig up that little bit of code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680384">2</a> by Raymond Camden
		posted on 4/29/2008 at 8:32 PM
		</div>
		<div class="comment_text"><p>But did it use the internal APIs? If so - then that's the same problem I mentioned above. Yes, you can do it - but you can't be sure it's going to actually work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680391">3</a> by Shane Zehnder
		posted on 4/29/2008 at 8:54 PM
		</div>
		<div class="comment_text"><p>Unforunately it used undocumented APIs and function calls.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680390">4</a> by Alan McCollough
		posted on 4/29/2008 at 9:14 PM
		</div>
		<div class="comment_text"><p>Seeing how you can't directly 'talk' from one application's session to another, you could serialize the whole session scope into a WDDX packet, store it somewhere such as in a dabase, then have the oter app pick up that WDDX packet and deserialize it back into a struct. Now how you would 'stick' that session back to a particular user, well...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680389">5</a> by Phillip Gomer
		posted on 4/29/2008 at 9:20 PM
		</div>
		<div class="comment_text"><p>"In order to ease the process for users on the site I used my own hacked up SSO (single sign on) code." &lt;- Would you mind sharing this code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680387">6</a> by Raymond Camden
		posted on 4/29/2008 at 9:30 PM
		</div>
		<div class="comment_text"><p>You can download all of RIAForge. Just go to the site-  its on the FAQ.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680385">7</a> by Adam Haskell
		posted on 4/29/2008 at 9:57 PM
		</div>
		<div class="comment_text"><p>I've use 2 different tricks with mild success. Both of these assume both applications run in the same instance of your favorite CFML engine.</p><p>1) Switching application names on a page (only tested on ColdFusion), this is how I integrate blogCFC with out logon framework. <br>The pseudo code would be something like</p><p>Declare Current Application <br>if NOT session.init()<br>   Declare Application_shared <br>   request.session = session (or duplicate(session))<br>   Redeclare Current Application<br>   append request.session to session <br>end if</p><p>2) This solution requires a rudimentary understanding of what is going on with the Java underpinnings, AND the use J2EE session variables to be check (or at least I have had some issues if this is not checked). Remember that each application you run is a single Java application, remember I am assuming you are using only 1 instance of CFML engine. Since you are running in a Single Java application a user has exactly 1 J2EE session and anything you want to share between CFML applications can be set in the User's J2EE session getContext().getSession().setAttribute()/getAttribute()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680386">8</a> by Phillip Gomer
		posted on 4/29/2008 at 9:58 PM
		</div>
		<div class="comment_text"><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680394">9</a> by Joshua Curtiss
		posted on 4/29/2008 at 11:16 PM
		</div>
		<div class="comment_text"><p>If both apps are written by the same person/company, is it fair to say that the very fact that this need exists may expose a flaw in application design? I don't mean that in a mean way.. I just mean, is this solution not the answer, and perhaps the solution fundamentally should be some DB persistence or webservice?</p><p>Just a thought. I wish I knew more details of the need. Maybe I just shouldn't write rambling blog comments after coming from the dentist.. :-D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680388">10</a> by Chong
		posted on 4/30/2008 at 1:51 AM
		</div>
		<div class="comment_text"><p>Hi Ray, thanks for answering that question. It seems something to ask for in CF9, out of the box. Perhaps the undocumented API and function calls should be refined and expanded by Adobe, and be made official/documented.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680393">11</a> by Dan Roberts
		posted on 4/30/2008 at 2:26 AM
		</div>
		<div class="comment_text"><p>I have an idea that is so uncreative that there is probably a reason why it would not work. You could copy references of applications' internal scopes to server scope in the Application.cfc functions. This could be done through a cfc in server scope or simply structure references.</p><p>For example on appstart have:<br> server.applications["appname"] = application;</p><p>in session start have:<br> server.applications["appname"].session["sessionid"]=session;</p><p>then you could access data like so<br> server.applications["appname"].sessions["sessionid"];</p><p>...this would probably require additional work on session and app end to clear out dead references but you get the general idea.</p><p>If this could be automatically inherited by, or injected into, Application.cfc without changing existing code that would of course be ideal.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680392">12</a> by Adrian
		posted on 3/30/2010 at 8:46 PM
		</div>
		<div class="comment_text"><p>Has a good solution been figured out for this. I ran into this just now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680395">13</a> by Raymond Camden
		posted on 3/30/2010 at 8:48 PM
		</div>
		<div class="comment_text"><p>This is an old post Adrian, but on reading it again - I really think using the database would be the best solution.</p></div>
	</div>
</div>
		