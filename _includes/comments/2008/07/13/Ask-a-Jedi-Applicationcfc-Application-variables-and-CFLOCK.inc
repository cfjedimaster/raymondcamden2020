
<div class="comment" id="c_1713684338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684338">1</a> by Michael Brennan-White
		posted on 7/13/2008 at 8:08 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Would the isstructkey function be the best to put in the onRequest to check for a session values also if the ultimate goal is to create a structure of ancillary values if the session scope doesn't exist.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684343">2</a> by Allen
		posted on 7/13/2008 at 9:01 PM
		</div>
		<div class="comment_text"><p>"This lets me rerun the application startup code by just adding ?reinit=1 to the URL."  Sorry to be trite but doesn't that mean you only have to add "?reinit" to the URL?</p><p>This leads to a question I have.  On a recent project the architect was content with having the queries in the components use "datasource="#SESSION.dsn#".  Is this because the call to the component would be single threaded?  I come from the old CF where you locked everything and, in this case, would be using "datasource="#dsn#"" because dsn would have already been copied within a lock from the session scope to the variables scope.  Is this not needed any longer?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684347">3</a> by Raymond Camden
		posted on 7/13/2008 at 10:45 PM
		</div>
		<div class="comment_text"><p>@Michael: Um, I have no idea what you are asking. If you are asking, 'where do I check to see if a session var exists so I can preset something', then onSessionStart is what you want. But honestly, I can't understand what you really mean here.</p><p>@Allen: Heh, that is trite. ;) I can't answer why your dev did this. Those calls where not single threaded. The use of app/session/server is not going to be single threaded unless you cflock em (or put them in onAppStart/onSessionStart. Using the session scope the DSN is probably a bad idea though. I've never seen a production app that uses multiple different DSNs based on session. Most likely he meant to use the app scope, and even then, he should pass the value in to the CFC's constructors and use variables.dsn inside.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684345">4</a> by Don
		posted on 7/14/2008 at 6:36 AM
		</div>
		<div class="comment_text"><p>I could be wrong, but I've been able to restart a single application by changing the applicationTimeout</p><p>If it was once createtimespan(1,0,0,0)<br>I change it to createtimespan(0,0,0,0), hit a page on the application and it restarts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684349">5</a> by Raymond Camden
		posted on 7/14/2008 at 6:40 AM
		</div>
		<div class="comment_text"><p>Don, you are right, that's another way to do it. I prefer the URL way as I don't have to edit anything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684348">6</a> by Mark C.
		posted on 7/14/2008 at 5:54 PM
		</div>
		<div class="comment_text"><p>&gt;&gt; Next - if you do need to lock, don't forget that in onSessionEnd, you do not have "direct" access to the Application scope.</p><p>Is this true for onRequestStart as well?  I'm creating a single user app for specific users at the office (i.e. one user at a time based on IP address rather than a login and password) and am using App variables for the mechanism to enforce it.  I do a lot of checking, locking, and setting of some of those App variables in onRequestStart. Do I need to change all that code to named locks?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684352">7</a> by Raymond Camden
		posted on 7/14/2008 at 5:59 PM
		</div>
		<div class="comment_text"><p>No - the onRequestStart/End methods have direct access to the Application scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684351">8</a> by Allen
		posted on 7/14/2008 at 7:32 PM
		</div>
		<div class="comment_text"><p>Thanks for the feedback.</p></div>
	</div>
</div>
		