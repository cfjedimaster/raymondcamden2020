
<div class="comment" id="c_1713739285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739285">1</a> by PaulH
		posted on 2/28/2012 at 10:06 AM
		</div>
		<div class="comment_text"><p>can't you just dip down into java for those?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739287">2</a> by Raymond Camden
		posted on 2/28/2012 at 4:37 PM
		</div>
		<div class="comment_text"><p>Yeah, but this is how the client wanted it though. It's how he did it on his side (on a Mac, I mean, he did it via command line).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739289">3</a> by MB
		posted on 2/28/2012 at 9:21 PM
		</div>
		<div class="comment_text"><p>The URL doesnt seem to be working.  Actually <a href="http://disq.us/url?url=http%3A%2F%2Fdev.mysql.com%3AUlYX-U79NCai3bKnc3ihZYvZd50&amp;cuid=3321886" rel="nofollow noopener" title="dev.mysql.com">dev.mysql.com</a> doesnt appear to either..which would account for <a href="http://disq.us/url?url=http%3A%2F%2Fdev.mysql.com%2Fdownloads%2Ftimezones.html%3AYWuYZTTV2r7j77iPmlZ-1iVI_Vo&amp;cuid=3321886" rel="nofollow noopener" title="http://dev.mysql.com/downloads/timezones.html">http://dev.mysql.com/downlo...</a> as well I suppose</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739288">4</a> by Raymond Camden
		posted on 2/28/2012 at 9:23 PM
		</div>
		<div class="comment_text"><p>I swear I didn't break it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739293">5</a> by MB
		posted on 2/28/2012 at 9:29 PM
		</div>
		<div class="comment_text"><p>Uh huh</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739291">6</a> by MB
		posted on 2/29/2012 at 1:43 AM
		</div>
		<div class="comment_text"><p>It looks like it working now.<br>Thanks for fixing the <a href="http://disq.us/url?url=http%3A%2F%2FMySql.com%3ALncHURsFiqNIss0IWV4VwsoX6A8&amp;cuid=3321886" rel="nofollow noopener" title="MySql.com">MySql.com</a> site there Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739297">7</a> by Dave White
		posted on 2/29/2012 at 2:44 AM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I use these at work now and again.<br>We have some large client db's that are always dumped as .SQL files overnight and then if we need to we just SOURCE them via the command line ( or via a GUI ).<br>This can take a long time to SOURCE on a local dev PC.</p><p>So if you need the data fast you get the DB bloke to give you a NATIVE Dump ( i.e. MYD, MYI and frm files ).</p><p>Then it's a straight file copy as you know.</p><p>I'll stop rambling now.</p><p>@cfjquery</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739295">8</a> by Raymond Camden
		posted on 2/29/2012 at 2:53 AM
		</div>
		<div class="comment_text"><p>Dave, thanks for sharing that. So - this isn't uncommon then?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739294">9</a> by Dave White
		posted on 2/29/2012 at 3:26 AM
		</div>
		<div class="comment_text"><p>It's a DATA thing really, if you have more than 300 tables and one of those  is composed of  say greater than 1 million records it starts to slow down loads on a local dev PC when trying to SOURCE it locally, the transfer of three files (MYD, MYI and frm) is a known qty (i.e. file size) but SOURCING a DB just takes as long as it takes.Copying the 3 files is much more succinct, however the DB your copying to has to use all the same defaults as the DB you copied from. ( aka it's good too copy your own stuff but it won't really translate if you just try to send people these files).<br>I shall stop rambling again. Sorry.. it just happens. Oh Well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739296">10</a> by Pete
		posted on 3/1/2012 at 4:45 PM
		</div>
		<div class="comment_text"><p>We use it to restore backups of DB tables if we ever need them. Quicker than restoring an old database, then mysql dumping and inserting the tables.</p><p>.sql files are just instructions for how to interact with the MYD and MYI</p></div>
	</div>
</div>
		