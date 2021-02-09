
<div class="comment" id="c_1713616181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616181">1</a> by Mark M
		posted on 9/14/2004 at 4:00 PM
		</div>
		<div class="comment_text"><p>I just downloaded Firefox 1.0PR, which has a new built-in RSS "aggregator". It works by looking through the HTML source to find a &lt;link&gt; tag specifying the RSS feed for the page. This might be a good addition to your BlogCFC so that anyone using your awesome blog software will have the RSS link show up in the new Firefox. See the "Live Bookmarks" section here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mozilla.org%2Fproducts%2Ffirefox%2Freleases%2F0.10.html%3AEAp-pzA2hHLjVq9drwl168fkLQ0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mozilla.org/products/firefox/releases/0.10.html">http://www.mozilla.org/prod...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616171">2</a> by Roger Benningfield
		posted on 9/15/2004 at 12:04 PM
		</div>
		<div class="comment_text"><p>Ray: A pair of suggestions/requests on behalf of aggregator authors:</p><p>(1) Can you tweak Sean's import script and the DB to pull in existing MT permalinks and store them as resource identifiers?</p><p>If so...</p><p>(2) Can you switch blog.cfc's default syndication from RSS 1.0 to either 2.0 or Atom 0.3, and then output the stored ID in either [rss:guid] or [atom:id]? 1.0's spec discourages the use of non-permalinks in the item's rdf:about attribute, but 2.0 and Atom have dedicated ID elements that can hold a non-permalink URI.</p><p>The idea is to give aggregators (particularly the server-based kind) a shot at recognizing that they may have already seen the imported entries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616177">3</a> by Raymond Camden
		posted on 9/15/2004 at 8:17 PM
		</div>
		<div class="comment_text"><p>1) I'd leave that up to Sean.</p><p>2) Heh, I thought I was using RSS 1.0. ;) I was considering adding RSS 2 and Atom later on. It would be a good idea for the next release.</p><p>3) Mark M, I'll add that to the pod.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616184">4</a> by Chris Bestall
		posted on 9/22/2004 at 4:33 AM
		</div>
		<div class="comment_text"><p>I love Firefox's new Live Bookmark feature.  So, I too think it would be a great idea to add the &lt;link&gt; feature into your code.</p><p>Great work on the Blog!  I really like it, the MT importer will be nice as I'm trying to port my MT entries over to yours.  Dealing with the old URL's is tricky though.</p></div>
	</div>
</div>
		