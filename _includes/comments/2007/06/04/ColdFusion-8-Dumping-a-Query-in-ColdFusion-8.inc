
<div class="comment" id="c_1713666280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666280">1</a> by tof
		posted on 6/5/2007 at 3:39 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Do you get the SQL with or without "?"s ?.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666290">2</a> by Fernando S. Trevisan
		posted on 6/5/2007 at 3:42 AM
		</div>
		<div class="comment_text"><p>tof asked the same question I was about to ask! This SQL output will include variables passed through CFSQLPARAM or just "?"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666288">3</a> by Ben Nadel
		posted on 6/5/2007 at 4:07 AM
		</div>
		<div class="comment_text"><p>He he, "poo". :) I think this is a great update to the CFDump tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666289">4</a> by Raymond Camden
		posted on 6/5/2007 at 4:50 AM
		</div>
		<div class="comment_text"><p>I'll test right now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666293">5</a> by Raymond Camden
		posted on 6/5/2007 at 4:53 AM
		</div>
		<div class="comment_text"><p>So it shows a ?. But, there is an additional value in the dump - SQL Parameters, that is an array of values for the ?.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666291">6</a> by Fernando S. Trevisan
		posted on 6/5/2007 at 4:57 AM
		</div>
		<div class="comment_text"><p>FANTASTIC.<br>Can you post a print? :)<br>Thanks as ever Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666294">7</a> by Thomas Messier
		posted on 6/5/2007 at 5:05 AM
		</div>
		<div class="comment_text"><p>Well I'll be damned... Maybe there's some other way of doing this or I'm just stating the obvious, but to access that SQL value it seems you need to specify the "result" attribute in the CFQUERY tag and the structure it produces will have the SQL value. But you know what else? That's not new in Scorpio, it works in CF 7 MX too. And I never knew about it. I'm rather happy I just found out because I'm gonna need to use this, like, immediately for a project!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666298">8</a> by Thomas Messier
		posted on 6/5/2007 at 5:08 AM
		</div>
		<div class="comment_text"><p>Btw Ray, am I correct in assuming that this could be used to update ColdFire, since right now if you use cfqueryparam ColdFire doesn't display the right values for the query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666292">9</a> by Raymond Camden
		posted on 6/5/2007 at 6:46 AM
		</div>
		<div class="comment_text"><p>ColdFire has an update for this - submitted by someone in the community. I just haven't had a chance to approve it. I'm still recovering from the week or so of going from PC to Mac.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666296">10</a> by Hemant
		posted on 6/5/2007 at 8:50 AM
		</div>
		<div class="comment_text"><p>You can go back to the old behaviour, if you like, by specifying false for metainfo attribute on the cfdump tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666299">11</a> by Raymond Camden
		posted on 6/5/2007 at 3:39 PM
		</div>
		<div class="comment_text"><p>Thats nice. I assume it will be properly documented?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666295">12</a> by Lola LB
		posted on 6/5/2007 at 4:02 PM
		</div>
		<div class="comment_text"><p>I really love this enhanced feature.  Saves me from a lot of going back and forth.</p></div>
	</div>
</div>
		