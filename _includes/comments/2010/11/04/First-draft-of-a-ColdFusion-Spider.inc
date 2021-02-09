
<div class="comment" id="c_1713727354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727354">1</a> by ppshein
		posted on 11/5/2010 at 7:42 PM
		</div>
		<div class="comment_text"><p>Great. I got an idea to test something about web-crawler.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727361">2</a> by MikeG
		posted on 11/5/2010 at 9:47 PM
		</div>
		<div class="comment_text"><p>Coincidentally I wrote one of these a few months back.  A word of warning...put something in the spider to tell it what NOT to crawl.  My spider scared me a bit, so I ran a FULL SCALE test against dev. It found scheduled tasks, indexing pages, database normalization pages and other scary, experimental and long running pages.  It cratered the server and did funky things to a couple of databases about 2 hours after I started it.  Had I run it against prod without a full scale test first I don't even want to imagine the mayhem that would have ensued..</p><p>Spider with care.<br>M</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727359">3</a> by Robin Hilliard
		posted on 11/6/2010 at 5:21 AM
		</div>
		<div class="comment_text"><p>Your post reminded me that I meant to open source part of RocketBoot's web utility library - a multi-threaded crawler.  I've put it up on RIAForge:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwebcrawler.riaforge.org%2F%3A7QqhH7R1UoGrVhsdhHwcbbg1X0M&amp;cuid=3321886" rel="nofollow noopener" title="http://webcrawler.riaforge.org/">http://webcrawler.riaforge....</a></p><p>The rest of the repository it's from is not o/s, so I've just uploaded a zip of the component and interface to implement for now.</p><p>Cheers,<br>Robin</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727357">4</a> by Raymond Camden
		posted on 11/6/2010 at 6:34 AM
		</div>
		<div class="comment_text"><p>Robin: Thanks Robin. I'm not going to look at yours till after mine is done. I want to see how crazy I can get with this. ;)</p><p>MikeG: Goes to show you though - you should never leave pages like that out on a web server. :)</p></div>
	</div>
</div>
		