
<div class="comment" id="c_1713715669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715669">1</a> by Scott P
		posted on 5/25/2009 at 8:40 PM
		</div>
		<div class="comment_text"><p>but he seemed like a normal guy, we didn't see this coming your honor.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715680">2</a> by Raymond Camden
		posted on 5/25/2009 at 8:41 PM
		</div>
		<div class="comment_text"><p>Eh? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715684">3</a> by James Edmunds
		posted on 5/25/2009 at 8:44 PM
		</div>
		<div class="comment_text"><p>Excellent! This is actually very useful, and I may look at it as a replacement for a zipcode table driven distance lookup I have on a web site. However, I'm always a bit leery of third-party services it terms of availability, so I would likely look for an alternative process for the user in the case of a timeout... Does the component package on RIAForge have some kind of settable time out error return?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715687">4</a> by Raymond Camden
		posted on 5/25/2009 at 8:47 PM
		</div>
		<div class="comment_text"><p>No, you would have to manually add a timeout value to the cfhttp tag in the CFC. The CFC only has one method though so it would be quick to add. You would then need to wrap the calls w/ try/catch of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715682">5</a> by James Edmunds
		posted on 5/25/2009 at 8:57 PM
		</div>
		<div class="comment_text"><p>Cool. I could just send them to my old zip-lookup local version should the web service stall. Come to think of it, I would also revert back to that in the case when my database of addresses serves up a PO Box. In any case, I love this demo utilizing material from two of my favorite resources, RIAForge and CFLib!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715683">6</a> by Raymond Camden
		posted on 5/25/2009 at 9:43 PM
		</div>
		<div class="comment_text"><p>I think I may do a quick blog post on handling errors with remote APIs. Just some basic examples. For example, how to handle trivial breakage (getting the high temp for the day), not-so-trivial (getting shipping costs), and critical (remote ecom process that must work).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715688">7</a> by JC
		posted on 5/26/2009 at 9:08 PM
		</div>
		<div class="comment_text"><p>Here's a much less useful way to determine distance in CF... as the propeller beanie flies instead of the car drives...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fyougiveloveabad.name%2Farchives%2F2009%2F02%2F19%2Fdistance-in-cf-mostly-useless-but-fun%2F%3AB9x8oY523UpSrpWxk6GeEkXJ0yA&amp;cuid=3321886" rel="nofollow noopener" title="http://yougiveloveabad.name/archives/2009/02/19/distance-in-cf-mostly-useless-but-fun/">http://yougiveloveabad.name...</a></p></div>
	</div>
</div>
		