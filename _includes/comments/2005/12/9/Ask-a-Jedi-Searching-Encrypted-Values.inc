
<div class="comment" id="c_1713623328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623328">1</a> by Rick Osborne
		posted on 12/13/2005 at 7:52 PM
		</div>
		<div class="comment_text"><p>There are some interesting crypto applications that do this exact sort of thing.  You can do a web search for "zero-knowledge proof", but the vast majority of it is pretty arcane.</p><p>Two things come to mind, and for the life of me I can't remember the official names of either, sorry.  The first has something to do with distinguishing wheat from chaff.  That is, two people know that their communications are not safe.  The sender generates dozens or hundreds of encrypted messages, all bogus.  They then send out the correct encrypted message with all of the others so that the attackers can't tell which is the right one, only the intended recipient can.  (Hence wheat and chaff.)  It may or may not be applicable here.</p><p>The other application is FOAF.  By using a hash, FOAF allows people to say they know someone else without actually revealing details of who that person is.  That is, if I want to say that I know you, I can make a hash of your email address and add it to my FOAF info.  Then if anyone else wants to see if I know you, they can make the same hash and look for it in my FOAF info.  But, at no time is your email address actually in my FOAF info.</p><p>With a 128/256-bit hash as a VARCHAR(16/23) it would be pretty easy and fast to do table scans in SQL.  You might even get a marginal improvement through creative indexing, but since hashes are essentially random data, I have my doubts as to their overall effectiveness.</p></div>
	</div>
</div>
		