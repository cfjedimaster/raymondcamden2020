
<div class="comment" id="c_1713618516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618516">1</a> by Chris
		posted on 5/18/2005 at 8:40 PM
		</div>
		<div class="comment_text"><p>Ray, you rock!  Thanks very much.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618512">2</a> by Jim
		posted on 5/18/2005 at 10:26 PM
		</div>
		<div class="comment_text"><p>Ray, does this mean we can look forward to other previous DRK resources being made openly available?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618505">3</a> by Raymond Camden
		posted on 5/18/2005 at 10:44 PM
		</div>
		<div class="comment_text"><p>I think the only thing left is LightHouse Pro, and I can't comment on that license yet. Sorry, that's how my deal works with MACR.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618514">4</a> by Robert
		posted on 5/20/2005 at 11:17 PM
		</div>
		<div class="comment_text"><p>Is there a way to reset the admin password.</p><p>I had set it per your instructions on install and now the 'admin' nor the newly set password works.</p><p>PS. I am using mssql. And there were errors showing up about the dsn "soundings_msaccess". After, restarting CF7 the error was corrected; yet the password does not work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618517">5</a> by Raymond Camden
		posted on 5/20/2005 at 11:24 PM
		</div>
		<div class="comment_text"><p>You may have forgotten to update the ini file specifying the right dns - or if you did - you forgot to clear the cache. That may be your password issue as well.</p><p>If not - write a quick CF file that outputs #hash("password")#. Cut and paste that string into the ini file and use "password" as your passsword.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618510">6</a> by Ryan Guill
		posted on 5/24/2005 at 7:10 PM
		</div>
		<div class="comment_text"><p>Hey Ray, is there anywhere that we can see soundings in action?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618508">7</a> by Raymond Camden
		posted on 5/24/2005 at 11:06 PM
		</div>
		<div class="comment_text"><p>Not at the moment, no.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618511">8</a> by Bjorn
		posted on 6/4/2005 at 11:08 AM
		</div>
		<div class="comment_text"><p>Hey,</p><p>I'm having issus loging into that admin console, when ever i try the default password it just refeshes the login page, I've also try'd changing the hashed password to something else but with no avail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618507">9</a> by Raymond Camden
		posted on 6/8/2005 at 2:33 AM
		</div>
		<div class="comment_text"><p>In order to change the hash password, remember to do write code elsehwehre that outputs hash("foo") or somesuch, and use foo as the password. You also need to tell Soundings to refresh it's cache. This can be done by using ?reinit=1 in the URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618515">10</a> by Bjorn
		posted on 6/9/2005 at 3:53 PM
		</div>
		<div class="comment_text"><p>Well I tried refreshing the sounds cache with ?reinit=1 but still come up with the same thing. I even removed the contents of the settings.ini file to make sure it was reading it, (which it is) after refreshing the cache and getting an error about not be able to read the settings.ini file. Any other ideas on while it isn't letting me to logon?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618513">11</a> by Bjorn
		posted on 6/9/2005 at 4:24 PM
		</div>
		<div class="comment_text"><p>Ignore the above post, got it to work :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618518">12</a> by dick
		posted on 8/22/2005 at 5:54 PM
		</div>
		<div class="comment_text"><p>So Bjorn, what did you do to get it working. I'm having exactly the same problem as you!</p><p>dick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618519">13</a> by dick
		posted on 8/23/2005 at 6:15 PM
		</div>
		<div class="comment_text"><p>Okay, to answer my own question here for the benefit of others that may visit...</p><p>It seems to be some browser issue. It works, for me, under FireFox but not IE.</p><p>Checkout the Soundings forum hosted here and look in the Bug Report forum under "login oddness under blackstone" for my experiences.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618524">14</a> by Dano
		posted on 9/22/2006 at 3:52 AM
		</div>
		<div class="comment_text"><p>I have the form up and runnning, added a few surveys, made them active but the main page that should display surveys, says,</p><p>Active Surveys<br>Sorry, but there are no surveys available at this time. <br>Is there anything else that needs to be done in order for surveys to show up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618521">15</a> by Raymond Camden
		posted on 9/22/2006 at 5:06 AM
		</div>
		<div class="comment_text"><p>By any wild chance are you using the MS Access w/ Unicode driver? If so, can you switch to the normal MS Acces driver?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618523">16</a> by Patrice
		posted on 7/20/2012 at 1:10 AM
		</div>
		<div class="comment_text"><p>I recently started working with soundings at a new position I'm in. Upon the release of a survey created several users experienced issues with logging in and then right afterwards not being able to log back in. It seemed that by clearing the IE browser cache it worked fine. No issues in Firefox. I've just read the posts above about the ?reinit function. Is that the fix for that issue or has it been resolved in newer releases?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618522">17</a> by Raymond Camden
		posted on 7/20/2012 at 2:29 AM
		</div>
		<div class="comment_text"><p>I'm not quite sure I get what you mean by logging in. Do you mean the admin portal? Also - I assume you are using the latest from RIAForge too?</p></div>
	</div>
</div>
		