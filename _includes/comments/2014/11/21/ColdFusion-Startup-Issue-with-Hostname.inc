
<div class="comment" id="c_1705461914">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_FSIMWjBqWu.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1705461914">1</a> by Ron Stewart
		posted on 11/21/2014 at 3:44 PM
		</div>
		<div class="comment_text"><p>I've bumped into this (or something very much related) in the past on at least one of my Mac boxes at some point, but I think it was with CF10 (as I don't have CF11 in play anywhere) and it reared its head depending on what network I was connected to (work, work VPN, home) vs the network I was on when I installed CF and depending on how names were being resolved.. I will see if I can find my email communication with the Adobe CF team...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1705469379">
	<div>
		<img src="https://disqus.com/api/users/avatars/anitkumarpanda.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1705469379">2</a> by Anit Kumar Panda
		posted on 11/21/2014 at 3:48 PM
		</div>
		<div class="comment_text"><p>It will check the hostname entry in the hosts file. Java NPE is expected here, if the hostname is missing. Rupesh's response is the absolute trick here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1705497767">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1705497767">3</a> (In reply to <a href="#c_1705469379">#2</a>) by Raymond Camden
		posted on 11/21/2014 at 4:05 PM
		</div>
		<div class="comment_text"><p>Anit - can you explain though why it was never a problem before? Why now?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1705593421">
	<div>
		<img src="https://disqus.com/api/users/avatars/anitkumarpanda.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1705593421">4</a> (In reply to <a href="#c_1705497767">#3</a>) by Anit Kumar Panda
		posted on 11/21/2014 at 4:54 PM
		</div>
		<div class="comment_text"><p>Ray, its not something new with CF11. I don't know the exact logical explanation, why it happens. But, I can confirm that I have seen this with RHEL 6.x series, with CF9, CF10 and CF11. So my assumption is, something changed in RHEL (may be).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1705595663">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1705595663">5</a> (In reply to <a href="#c_1705593421">#4</a>) by Raymond Camden
		posted on 11/21/2014 at 4:55 PM
		</div>
		<div class="comment_text"><p>I'm on OSX. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1706130556">
	<div>
		<img src="https://disqus.com/api/users/avatars/adrianjmoreno.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1706130556">6</a> (In reply to <a href="#c_1705595663">#5</a>) by Adrian Moreno
		posted on 11/21/2014 at 9:39 PM
		</div>
		<div class="comment_text"><p>I ran into the same thing on OSX w/ CF11 and this was the only article I could find that spoke about the fix: <a href="http://disq.us/url?url=http%3A%2F%2Fblog.immanuelnoel.com%2F2014%2F06%2F06%2Ffixing-the-null-pointer-exception-on-coldfusion%2F%3AYt3bXlMBqqLHn7xdrdICJ8vMM1A&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.immanuelnoel.com/2014/06/06/fixing-the-null-pointer-exception-on-coldfusion/">http://blog.immanuelnoel.co...</a> Maybe it has something to do with the version of Java being used? It happened to me on a fresh (first) install of CF 11 w/ Java 8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1707044920">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_FSIMWjBqWu.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1707044920">7</a> by Ron Stewart
		posted on 11/22/2014 at 2:42 PM
		</div>
		<div class="comment_text"><p>@Ray: per my comment yesterday, I ran into something like this on CF10u8. See the comments in the ACF blog @ <a href="http://disq.us/url?url=http%3A%2F%2Fblogs.coldfusion.com%2Fpost.cfm%2Fcoldfusion-10-update-8-is-now-available-java-7-support-included%3ABrq09_r0ZmJ5xKFkJ4ZqafAkomw&amp;cuid=3321886" rel="nofollow noopener" title="http://blogs.coldfusion.com/post.cfm/coldfusion-10-update-8-is-now-available-java-7-support-included">http://blogs.coldfusion.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1720330988">
	<div>
		<img src="https://disqus.com/api/users/avatars/jeffregan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1720330988">8</a> by DigitheadRex
		posted on 12/1/2014 at 3:40 PM
		</div>
		<div class="comment_text"><p>I have tried everything I have read so far to no avail. my hosts file looks like:<br>##<br># Host Database<br>#<br># localhost is used to configure the loopback interface<br># when the system is booting.  Do not change this entry.<br>##<br>127.0.0.1	localhost ArthurDent<br>127.0.0.1	localhost</p><p>...</p><p>ArthurDent is the output from the hostname command.</p><p>Am I missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1794690222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1794690222">9</a> by chmbrln
		posted on 1/15/2015 at 9:19 PM
		</div>
		<div class="comment_text"><p>worked perfectly for me - thanks!</p></div>
	</div>
</div>
		