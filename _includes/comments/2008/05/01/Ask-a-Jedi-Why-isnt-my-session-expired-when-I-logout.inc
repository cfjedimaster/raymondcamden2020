
<div class="comment" id="c_1713680418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680418">1</a> by Joe Mastroianni
		posted on 5/1/2008 at 7:16 PM
		</div>
		<div class="comment_text"><p>What if you structDelete session.sessionID? I haven't done it but wouldn't that make the session irretrievable?</p><p>That's probably horrible practice though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680420">2</a> by Todd Rafferty
		posted on 5/1/2008 at 7:37 PM
		</div>
		<div class="comment_text"><p>In my session.user object, I have a function called isLoggedIn() which returns true/false.  I also have a logout() function that flips the true to false and the Application.cfc or Application.cfm has a "bouncer" that is constantly checking isLoggedIn() - if it returns false, then bye bye - cflocated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680419">3</a> by Todd Rafferty
		posted on 5/1/2008 at 7:39 PM
		</div>
		<div class="comment_text"><p>Oh, the additional point I forgot to make.  I don't kill the session, I just re-init the object via session.user's init() function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680424">4</a> by David
		posted on 5/1/2008 at 8:14 PM
		</div>
		<div class="comment_text"><p>Ray - correct me if I'm wrong, but CF Enterprise offers another dimension to ending sessions if you use J2EE sessions. It *should* kill the session when the browser is closed.</p><p>Cheers,</p><p>Davo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680422">5</a> by Joe Mastroianni
		posted on 5/1/2008 at 8:18 PM
		</div>
		<div class="comment_text"><p>Not to rip on CF (it's my livelyhood and all) but what CF *should* do and what it *does* do are two very different things sometimes. From my understanding, when the browser is closed, the J2EE session is effectively 'orphaned' but doesn't actually get destroyed until the timeout is reached.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680421">6</a> by Todd Rafferty
		posted on 5/1/2008 at 8:27 PM
		</div>
		<div class="comment_text"><p>@David/Davo: My understanding is that J2EE doesn't kill the session when the browser is closed.  It just makes sure that you can't go back to the previous session upon returning to the site.  The session will time out naturally.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680423">7</a> by Todd Rafferty
		posted on 5/1/2008 at 8:28 PM
		</div>
		<div class="comment_text"><p>btw, I don't think J2EE sessions is limited to CF Enterprise.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680429">8</a> by David
		posted on 5/1/2008 at 10:22 PM
		</div>
		<div class="comment_text"><p>That was my experience Todd, and at least now I know it wasn't something I forgot to set in the Admin. That would be a nice feature for CF 9 :-)</p><p>Davo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680430">9</a> by Goyuix
		posted on 5/1/2008 at 11:36 PM
		</div>
		<div class="comment_text"><p>For what it is worth, and I apologize for being very slightly off-topic: I usually just nuke the CFID and CFTOKEN cookies - which doesn't expire the session as such, it orphans it much the same way that "closing the browser" does. If the user makes a request after "Logout", the application generates a new CFID and CFTOKEN, as well as a brand-spankin' new session scope.</p><p>Side note: It would be very nice if CF provided a way to recycle/expire a session through code. Free up some resources immediately rather than wait 20 minutes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680428">10</a> by Todd Rafferty
		posted on 5/2/2008 at 2:15 PM
		</div>
		<div class="comment_text"><p>@Goyuix, I used to the same until I took a drink from the J2EE session koolaid.  You don't have to set the CFIDE/CFTOKEN cookies anymore when you use the J2EE sessions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680427">11</a> by dcs
		posted on 8/18/2009 at 9:13 PM
		</div>
		<div class="comment_text"><p>"What if you structDelete session.sessionID? I haven't done it but wouldn't that make the session irretrievable?"</p><p>If you do this CF won't create another session.sessionID until you close the browser and open a new one (or, I assume, until the session expires). It has no effect at all if you're using J2EE sessions.</p></div>
	</div>
</div>
		