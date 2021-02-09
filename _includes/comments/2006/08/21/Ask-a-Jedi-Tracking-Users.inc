
<div class="comment" id="c_1713656550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656550">1</a> by Paul Jones
		posted on 8/21/2006 at 5:37 PM
		</div>
		<div class="comment_text"><p>Thanks Ray - this should help me out no end.  You're a gentleman and a coder sir!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656558">2</a> by Roland Collins
		posted on 8/22/2006 at 2:56 AM
		</div>
		<div class="comment_text"><p>I would use a named lock on at least the add and delete operations.  The update operations should be fine to leave unlocked since you wouldn't care about the overwriting if all you're doing is updating a timestamp.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656565">3</a> by sharmo
		posted on 8/22/2006 at 3:02 AM
		</div>
		<div class="comment_text"><p>Nice post Ray, how about a way to track ALL site users including people who are not logged in?</p><p>I have a site where users can browse the content whether they are logged in or not and it'd be great to be able to have a display count of all the people surfing the site at any given moment, grouped by logged in users (members) and public users.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656567">4</a> by Raymond Camden
		posted on 8/22/2006 at 2:30 PM
		</div>
		<div class="comment_text"><p>Roland, I do not believe a lock is needed. Since I'm using a structure, all the operations are atomic. _Maybe_ it should be used on delete. Maybe.</p><p>Sharmo: In that case you would simply store people not by their username, but by their session key. One simple way of getting this is by using session.urltoken. This is a primary key of their session and would work just fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656563">5</a> by Roland Collins
		posted on 8/22/2006 at 9:49 PM
		</div>
		<div class="comment_text"><p>Well I guess that depends on what CF uses internally for structures...if it's a good old Java Hashtable, which is synchronized, then atomic operations should be safe.  If it's anything else, then you can have problems (collisions), although rare.</p><p>Any idea what it uses?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656566">6</a> by Raymond Camden
		posted on 8/22/2006 at 10:05 PM
		</div>
		<div class="comment_text"><p>coldfusion.runtime.Struct</p><p>which doesn't help us much. ;) Either way though, I'm very sure this is a safe operation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656555">7</a> by Tony
		posted on 8/24/2006 at 1:56 AM
		</div>
		<div class="comment_text"><p>I have done this before but when I applied it to our clustered production environment, each server has it own structure and I cant see all users of all servers at one time. Will this work in clustered? Any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656553">8</a> by Raymond Camden
		posted on 8/24/2006 at 2:03 AM
		</div>
		<div class="comment_text"><p>It would not work. But - what you could do is insert into a database. This seems like it may be a bit risky since data could be "forgotten" if for some reason onSessionEnd didn't fire. You would need to add a bit of "sanity" code to notice an entry that is a bit too old to be valid.</p><p>Or shoot. Don't delete at all. Log a record when they first hit, and then when they leave. This would let you do reports over time.</p></div>
	</div>
</div>
		