
<div class="comment" id="c_1713650937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650937">1</a> by Mark Drew
		posted on 3/21/2006 at 4:54 AM
		</div>
		<div class="comment_text"><p>Ray, Awesome post. I have been doing a MG app at work recently and hadnt figured out the bean part of it all. This has definately put it into perspective.</p><p>Now I am better equiped to understand what Sean Corfield refered to bean autowiring with MG and Reactor (I am using reactor too btw)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650952">2</a> by Raymond Camden
		posted on 3/21/2006 at 7:29 AM
		</div>
		<div class="comment_text"><p>Nod. All the Model work is tiring, and Reactor I think perfectly helps out with that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650951">3</a> by Tim Forcelle
		posted on 3/21/2006 at 8:39 PM
		</div>
		<div class="comment_text"><p>Having a problem with the registration.  When I enter a user that I want to register that does not currently exist, i.e. Bob Doe, bdoe@hotmail.com, password, password and hit the Register button it always comes back with the error:  Please correct the following errors: This username already exists..  The user is being added to the database and I am able to logon with the newly created user.  Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650956">4</a> by Raymond Camden
		posted on 3/21/2006 at 9:36 PM
		</div>
		<div class="comment_text"><p>I ran into the same problem. My code has a bug. It assumes that any error thrown is the dupe user error. Better code would check the cfcatch message. Most likely you have 2 issues. You either forgot to add adminemail to the xml file, or you don't have a smtp server chosen in your cf admin.</p><p>You can modify my cfcatch to cfdump cfcatch and cfabort to see the real error. Make sure you change output=false to true though in the method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650953">5</a> by Dave Carabetta
		posted on 3/22/2006 at 10:30 PM
		</div>
		<div class="comment_text"><p>Hey Ray. I would submit that the use of cfparam is not a "best practice" when using MG. To be consistent, I would do this:</p><p>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fvariables.name%3A7ZdKNTtO09vc62waSsBGzbA9kjw&amp;cuid=3321886" rel="nofollow noopener" title="variables.name">variables.name</a> = viewState.getValue("name", "") /&gt;<br>&lt;cfset variables.userName = viewState.getValue("userName", "") /&gt;</p><p>Then set the values of the form fields to the above variable names, respectively. That's the MG-equivalent of cfparam, and I think it's a more consistent approach. If we're going to bang home the message that you don't ever need to directly access the form and url scopes because the framework does this for you, then a cleaner example would be the above. Otherwise, it "muddies the water" as to when you should and should not directly refer to the built-in scopes.</p><p>Just my $.02.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650954">6</a> by Raymond Camden
		posted on 3/22/2006 at 10:35 PM
		</div>
		<div class="comment_text"><p>Yeah, I think that makes sense Dave. Good point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650959">7</a> by Bayo Ojo
		posted on 3/27/2006 at 1:53 PM
		</div>
		<div class="comment_text"><p>Many thanks for the post, makeEventbean is clearer now, but just a note, wouldnt it be better to encapsulate the mail ing part in a notifierCFC. something that can handle email, sms or whatever means desired?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650955">8</a> by Raymond Camden
		posted on 3/27/2006 at 6:08 PM
		</div>
		<div class="comment_text"><p>Bayo: Maybe so. If mailing was a big part of an app, I'd say yes. If I was only using it for simple things, I'd probably say it is overkill.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650958">9</a> by sal
		posted on 5/5/2006 at 9:41 AM
		</div>
		<div class="comment_text"><p>ahh now I see the logic behind the bean arg in the create();<br>lol</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650963">10</a> by Roger Yong
		posted on 5/8/2006 at 5:45 PM
		</div>
		<div class="comment_text"><p>Ray, I am a newbie in MG and I just started to study your PhotoGallery application. But I'm having same problem with the registration. When I enter the username, email and password. I got the error message 'Please correct the follwing error: This username already exists'. It is nothing added to the database but I got an email from the user. I tried to get around to understand the tag '&lt;cfset userDAO.create(bean)&gt;' how it work, but I still lack of luck. Even I misspell the tag e.g. '&lt;cfset userDAO.createa(beam)&gt;', MG didn't throw any error. It is anything to do with Mapping on CF Admin? or Any idea?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650965">11</a> by Raymond Camden
		posted on 5/10/2006 at 2:22 AM
		</div>
		<div class="comment_text"><p>I described (someplace else, so I understand it being missed) one mistake I did where ANY error from user creation would be treated like a dupe user error. If you find the try/catch, add a cfdump to cfcatch and a cfabort, the "real" error should come out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650966">12</a> by david marc.
		posted on 6/1/2006 at 3:46 AM
		</div>
		<div class="comment_text"><p>Hey<br>Camden, this tutorial pulled me out of my model glue slump. you are the undisputed cold fusion champion.</p></div>
	</div>
</div>
		