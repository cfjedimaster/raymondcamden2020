
<div class="comment" id="c_1714081508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081508">1</a> by CV
		posted on 1/22/2014 at 8:16 PM
		</div>
		<div class="comment_text"><p>Nice article!</p><p>BTW, try clicking a link from a search result. Nothing is found. Perhaps the site needs to be re-indexed?<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusioncookbook.com%2Fsearch.html%3Fsearchterms%3Dform%3AV-fIGoe5wCXy928vTMmdKsMv9Y0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusioncookbook.com/search.html?searchterms=form">http://www.coldfusioncookbo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081507">2</a> by Raymond Camden
		posted on 1/22/2014 at 8:34 PM
		</div>
		<div class="comment_text"><p>Yeah, it is an old index vs new index thing. To be clear, that is 100% my fault, not Harp. ;) Amazon S3 supports redirects. You know - I think today I may do that for categories since it wouldn't take long.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081505">3</a> by Raymond Camden
		posted on 1/22/2014 at 8:40 PM
		</div>
		<div class="comment_text"><p>Ok, so it is a bit verbose, but it wasn't hard to do. I did it for one:</p><p>&lt;RoutingRules&gt;<br>&lt;RoutingRule&gt;<br>&lt;Condition&gt;<br>&lt;KeyPrefixEquals&gt;category/6/Forms&lt;/KeyPrefixEquals&gt;<br>&lt;/Condition&gt;<br>&lt;Redirect&gt;<br>&lt;ReplaceKeyPrefixWith&gt;category/Forms.html&lt;/ReplaceKeyPrefixWith&gt;<br>&lt;/Redirect&gt;<br>&lt;/RoutingRule&gt;<br>&lt;/RoutingRules&gt;</p><p>It looks like you could use one rule and a regex, but they don't support regex. I can cut and paste though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081509">4</a> by Raymond Camden
		posted on 1/22/2014 at 9:43 PM
		</div>
		<div class="comment_text"><p>I found a few bugs in my code that I've corrected. I updated the zip.</p><p>I'm also going to update my CFM to generate the Amazon rewrite code so I can map all the old content.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081506">5</a> by Raymond Camden
		posted on 1/22/2014 at 9:55 PM
		</div>
		<div class="comment_text"><p>So, I updated my CFM to handle generating redirects for entries, but Amazon limits you to 50 so I decided against it.</p></div>
	</div>
</div>
		