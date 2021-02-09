
<div class="comment" id="c_1713716978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716978">1</a> by JC
		posted on 7/14/2009 at 6:28 PM
		</div>
		<div class="comment_text"><p>hmm... is there a function in CF9 to let you delay mail delivery? I've often wished I could leave mail in the spooler for an hour or two when I was sending out a bulk mailing to customers (I usually have our network guys blacklist the outgoing address so they capture it in our mail filters)... that way I can compare the number of mails that actually went out with the number I think should have gone out, and lets me wipe 'em out if I realize at the last minute that something was wrong with them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716990">2</a> by Raymond Camden
		posted on 7/14/2009 at 6:37 PM
		</div>
		<div class="comment_text"><p>As far as I know - no. You would have to write your own logic to do the mails in 'bunches' on an scheduled basis. It wouldn't be too terribly difficult though. You can store them in a 'queue' table, and your scheduled task could process N rows at a time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716989">3</a> by Steve Rittler
		posted on 7/14/2009 at 6:45 PM
		</div>
		<div class="comment_text"><p>what if you change the mail spooler check interval to some really high number (this may be possible through the AdminAPI - don't know off the top of my head), run your mail task and do your checks before that period expires?</p><p>similar fun could be had by setting the mail server name to something that makes no sense at all (<a href="http://disq.us/url?url=http%3A%2F%2Fmail.foofoo.bar%3AoNxrOmSjyX3p3MeAMQBPAsf8_eQ&amp;cuid=3321886" rel="nofollow noopener" title="mail.foofoo.bar">mail.foofoo.bar</a>), forcing all mail to the undelivr folder where you can do your review prior to moving the files to the spool directory so they get sent.  i'm sure i could think of some other dumb server tricks to make this work...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716988">4</a> by Phil Duba
		posted on 7/14/2009 at 7:16 PM
		</div>
		<div class="comment_text"><p>It looks like you can only delete or resend, but not edit then resend. Is that the case or does the "Resend" button allow for edits prior to respooling?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716986">5</a> by Raymond Camden
		posted on 7/14/2009 at 7:18 PM
		</div>
		<div class="comment_text"><p>I believe you are right. SpoolMail FTW? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716991">6</a> by DanaK
		posted on 7/14/2009 at 7:25 PM
		</div>
		<div class="comment_text"><p>glad to see this feature in there. Spoolmail is always one of the first things we add to a new Coldfusion dev environment install.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716992">7</a> by Adam
		posted on 1/20/2010 at 4:31 AM
		</div>
		<div class="comment_text"><p>Hopefully there is an adminapi method for re-spooling underlivered mail?!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716993">8</a> by Jonathan
		posted on 3/8/2013 at 11:53 PM
		</div>
		<div class="comment_text"><p>what stinks about this is that the spooled message server information is in the message. my provider changed ports on me so all these spooled messages say 25, I changed my server settings so new mail is flowing but I have all these messages stuck in the queue and because they use the old port they go right back in there. This obviously wasn't thought out very well.</p></div>
	</div>
</div>
		