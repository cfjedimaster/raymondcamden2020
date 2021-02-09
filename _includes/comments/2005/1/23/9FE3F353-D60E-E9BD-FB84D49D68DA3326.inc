
<div class="comment" id="c_1713616846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616846">1</a> by Jared
		posted on 1/24/2005 at 12:42 AM
		</div>
		<div class="comment_text"><p>Excellent, Ray...</p><p>I know that having site issues is frustrating and sometimes very hard to fix, to kudos to you and CFXHosting.</p><p>I just downloaded your blog and am planning to get it running today or during the week... next weekend at the latest. It must be fairly gratifying to know that you've developed a system that so many people rely on.</p><p>However, I've already got a blog, and some folks are actually following it... so what would you suggest in terms of migration? I am thinking I'll leave it up and put in a last entry with a link to the new one, but also just copy/paste the content into entries on the new blog... what do you think?</p><p>Thanks, and have a fantastic Sunday!</p><p>Laterz,<br>J</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616844">2</a> by Raymond Camden
		posted on 1/24/2005 at 12:51 AM
		</div>
		<div class="comment_text"><p>There are a few things you could do. One would be to write a script to simply suck in the old entries and write them out in BlogCFC format. Then to make your old URLs work, store a translation table. Ie, old blog entry X == new blog entry Y. You would need to modify index.cfm to correctly note the old entry URL and load in the new one. This assumes that your old URL ids are simple numeric values, not like UUIDs like BlogCFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616848">3</a> by Jared
		posted on 1/24/2005 at 12:59 AM
		</div>
		<div class="comment_text"><p>Well, the site has an Atom feed, and I currently have an Atom-to-RSS1 converter that I'm using to feed <a href="http://disq.us/url?url=http%3A%2F%2Ffullasagoog.com%3AW5REcr60UzBan6RJpcwMy4GvvpE&amp;cuid=3321886" rel="nofollow noopener" title="fullasagoog.com">fullasagoog.com</a>. Since it's on <a href="http://disq.us/url?url=http%3A%2F%2Fblogger.com%3AvSbYuIXSQ3QUfz2httzkyd2uKkE&amp;cuid=3321886" rel="nofollow noopener" title="blogger.com">blogger.com</a> it doesn't use URL values... each entry is stored as a seperate file. However consuming the feed woudln't be an issue, I don't think.</p><p>I was, however, contemplating adding an RSS import feature to your blogging system that would allow me to not only use it for blogging, but also as an aggregator. The only real issue is having the front page clogged with offboard blog entrys, so is it possible to write an entry that doesn't show up on the main blogging page?</p><p>Just a thought...</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616845">4</a> by Raymond Camden
		posted on 1/24/2005 at 8:15 PM
		</div>
		<div class="comment_text"><p>You would need to do something custom, like showFront, in the db.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616847">5</a> by Jared
		posted on 1/25/2005 at 12:24 AM
		</div>
		<div class="comment_text"><p>Cool...</p><p>However, I'm seriously thinking about just moving it all and posting a link at the old URL that says "blog moved here."</p><p>Thanks for the feedback...</p><p>J</p></div>
	</div>
</div>
		