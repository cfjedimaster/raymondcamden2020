
<div class="comment" id="c_1713663266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663266">1</a> by Tom Mollerus
		posted on 3/16/2007 at 10:34 PM
		</div>
		<div class="comment_text"><p>Another technique could be to use a custom Verity field to assign a category to each item in the index, such as "Product" or "Press Release". Then when you display the search results, you can separate the records by category, making Products the default.  For instance, on <a href="http://disq.us/url?url=http%3A%2F%2FmyStockOptions.com%3AaBTNPJ94F0ZMgTXdFPMD4LQ48PQ&amp;cuid=3321886" rel="nofollow noopener" title="myStockOptions.com">myStockOptions.com</a> our search results default to "All results" but also offer tabs for separate categories.</p><p>Verity also offers the ability to create categories natively in the index and then limit a search to certain categories. Check the docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663254">2</a> by Ben Doom
		posted on 3/16/2007 at 11:36 PM
		</div>
		<div class="comment_text"><p>It also occurs to me that you could use QoQ to "split" the results into groupings by filename.  In this case, you could filter first to only product pages, then to only press releases, then to everything else.  Each group could be displayed individually, making it easy for someone to find which type of info they want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663267">3</a> by Raymond Camden
		posted on 3/16/2007 at 11:39 PM
		</div>
		<div class="comment_text"><p>But that isn't what they wanted. They didn't want to split them up - they wanted to give _priority_ to certain results. Ie, if a match in section A and B had the same score, they want B to "win".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663269">4</a> by Ben Doom
		posted on 3/16/2007 at 11:46 PM
		</div>
		<div class="comment_text"><p>On second reading, I guess you're right.  My first reading was that they wanted &lt;i&gt;all&lt;/i&gt; product pages prioritized over &lt;i&gt;all&lt;/i&gt; press releases.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663268">5</a> by Scott Stroz
		posted on 3/17/2007 at 2:12 AM
		</div>
		<div class="comment_text"><p>If I remember correctly, there is a way to give a different weight to different 'columns' of a Verity index.  I'll have to  look through some old code/emails to see if I can find an example.</p><p>Not sure if this will produce the desired results, though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663264">6</a> by Don Hogan
		posted on 3/17/2007 at 4:38 PM
		</div>
		<div class="comment_text"><p>In the CF book "Allaire ColdFusion (Web Application Construction Kit)" by Ben Forta, Chapter 29 is a well written guide on using Verity.  It gives examples of how to sort after a search with CF code examples.  The Verity search language has a wide range of simple to complex commands to construct a very powerful search - but the Verity focus is search, not sort.  Sorting results after a search is for CF code.  ( Appendix C is a seven page guide to use the Verity search language -  powerful stuff!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663270">7</a> by David
		posted on 3/20/2007 at 6:12 PM
		</div>
		<div class="comment_text"><p>Tom - In order to achive the ability to break down your search results, is that the product of multiple collections? I am stumped.</p><p>I tried adding</p><p>criteria="#form.searchtext# and &lt;ACCRUE&gt;([0.5](URL&lt;CONTAINS&gt;'product'),'#form.searchtext#')"</p><p>to my cfsearch. It worked, but with 2 side effects:</p><p>1) If you leave the search field blank, instead of prompting you to enter something, you get a parsing error</p><p>2) If you misspell a word, you get the following:</p><p>Search Results<br>Your search for wweb returned 0 file(s). Did you mean: web and ([0.5](URL'product'),'web')</p><p>Thanks for your patience/suggestions...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663256">8</a> by Raymond Camden
		posted on 3/20/2007 at 6:32 PM
		</div>
		<div class="comment_text"><p>I _knew_ verity had a way of doing this.</p><p>So for the 2 issues David found:</p><p>a) You can easily fix 1 by just not doing a cfsearch on a blank search.</p><p>b) You can fix this by either not using the Suggest feature, or, and this is a bit sucky, repeating your search with a simple criteria and no accrue.</p><p>Good job, David! I should have dug deeper for sure.</p></div>
	</div>
</div>
		