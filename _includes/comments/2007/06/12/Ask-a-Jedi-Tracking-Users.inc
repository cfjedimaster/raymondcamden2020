
<div class="comment" id="c_1713666974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666974">1</a> by Rob Rawlins
		posted on 6/12/2007 at 4:31 PM
		</div>
		<div class="comment_text"><p>Great scott!!! :-o</p><p>That was a very fast and thorough response Ray, clearly using the force to bend the concept of time and reality as we know it! Thanks a great deal.</p><p>Your mock up looks very similar to the concepts that I've been playing with, almost TOO identical in fact *looks suspiciously at Ray.</p><p>Thanks for clarifying that it should be stored into the app scope as a single CFC, I'll agree that this method defiantly made more sense from an organisational point of view, i just had this nagging in the back of my mind that any user details should really be stored in the session where possible, but I think this application is a fair enough exception.</p><p>Now, the whole persistence issue; the concept that I was working on is that all the data should be stored in a struct/array as the user progresses around the application and then persisted to the database upon the completion of their session or when they log out.</p><p>Now I'll agree that this does eat up a bit of memory, but memory is cheap, and it may also be a problem if the server was to crash, but I favoured it a little over the standard database logging point of view from performance for the user, in this world of crazy cached queries and stored procs (got to love that in cf8) I think from my personal perspective I like it committing their activity at the end instead of live as it cuts down on the DB traffic, but either implementation would work a real charm I'm sure.</p><p>I suppose it’s like the old battle of the shopping cart, keeping it in a session array or query object does make more sense, but the database version would be the ‘safer’ option.</p><p>I look forward to hearing other opinions on this one, thanks again for your time Ray, you’re a stout scout! I'm off to polish this concept off and add a few other ideas once it’s done, I'll be sure to post you the final revision once I'm done.</p><p>Thanks,</p><p>Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666976">2</a> by Todd
		posted on 6/12/2007 at 5:02 PM
		</div>
		<div class="comment_text"><p>Yeah, I have one that I dubbed "Carnivore" and it's pretty flexible / configurable.  Can even be turned off without impacting the site and existing users that are logged in.  On a high bandwidth site, it won't make sense to have it turned on, but it's nice to have the options.</p><p>Logging is a must though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666975">3</a> by Raymond Camden
		posted on 6/12/2007 at 5:14 PM
		</div>
		<div class="comment_text"><p>Heh, I thought I made it clear my code was definitely inspired by your descriptions. ;)</p><p>So I know RAM is cheap... but I still think a quick DB call would be ok performance wise. I'd maybe try it. Then again, losing a few sessions due to a server crash probably aint the end of the world either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666980">4</a> by Dave Ferguson
		posted on 6/12/2007 at 5:23 PM
		</div>
		<div class="comment_text"><p>I have done something like this in the past.  What I did was use the OnRequestEnd in application.cfc.  In there I put an asynchronous call to a tracking cfc.  This allowed me to track the user without slowing the user down.  I was then able to use a file log that was then later processed into the database.  I did it this way so I could bulk insert the data and not have tons of little inserts.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666981">5</a> by Rob Rawlins
		posted on 6/12/2007 at 5:27 PM
		</div>
		<div class="comment_text"><p>I agree Ray,</p><p>I think that its definatly an issue that needs to be addressed somehow, I'll play around with the idea of sticking it directly in the database and see how it pans out against the array method, it would be nice to know it was fail safe against any server problems.</p><p>I like your method for using the URL key, the concept i'd worked on had the registeruser() method issue a UUID which represented the tracker, that was then placed in the session, but yours is much cleaner :-D</p><p>&gt;&gt; Heh, I thought I made it clear my code was definitely inspired by your descriptions. ;)</p><p>I was only pulling your leg when i said it looks suspiciously similar! :-D I guess great minds think a like!</p><p>Thanks again for your advice Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666984">6</a> by Rob Rawlins
		posted on 6/12/2007 at 5:29 PM
		</div>
		<div class="comment_text"><p>I also like your concept Dave, sounds like it would be a nice way to stem the database traffic on pages that log multiple activities, where you might end up with 5 or 6 inserts on a single page, I like it.</p><p>Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666985">7</a> by Raymond Camden
		posted on 6/12/2007 at 5:39 PM
		</div>
		<div class="comment_text"><p>Rob, that key is a part of the default session data set by all sessions in CF. It is unique so it is useful for stuff like this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666982">8</a> by Rob Rawlins
		posted on 6/12/2007 at 5:54 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, I'd seen the key before when dumping my session scope but never really thought of using it like this, I can think of a few other places in the application this will come in handy .... *potters off to tinker</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666987">9</a> by Yoda
		posted on 6/15/2007 at 12:32 PM
		</div>
		<div class="comment_text"><p>hmmmmmm....10 minutes you say..very impressive...<br>the force is strong in this one...<br>grmph grmph... nothing more can I teach you then...grmph.</p><p>Beware the dark side young Jedi.</p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666983">10</a> by Duncan Loxton
		posted on 6/20/2007 at 2:55 AM
		</div>
		<div class="comment_text"><p>@Ray - you don't need to buy your own Coopers if you come down under - there are plenty of people here that will buy you a beer or two..n</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666986">11</a> by Raymond Camden
		posted on 6/20/2007 at 6:04 PM
		</div>
		<div class="comment_text"><p>I'll hold you to that. :)</p></div>
	</div>
</div>
		