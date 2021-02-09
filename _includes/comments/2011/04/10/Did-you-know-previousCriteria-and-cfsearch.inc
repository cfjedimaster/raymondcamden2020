
<div class="comment" id="c_1713731579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731579">1</a> by Mihai Baboi
		posted on 4/11/2011 at 9:11 AM
		</div>
		<div class="comment_text"><p>Actually, it's not that confusing. I just can't seem to think about a real life example where you would use it. Maybe a multi-step search, that goes from broad to narrow. Just a thought...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731577">2</a> by Tom Jenkins
		posted on 4/11/2011 at 11:40 AM
		</div>
		<div class="comment_text"><p>Actually I needed this very function recently for a client who wanted the ability to refine search results. They have literally 1000's of documents / pages indexed, so this proved hugely useful.</p><p>:D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731576">3</a> by Bud Fox
		posted on 4/12/2011 at 12:54 AM
		</div>
		<div class="comment_text"><p>Hey man! Ray Camden isn't the only one who reads the ColdFusion documentation, ya know! Nah, just teasin! Thanks for the tip Raymond! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731578">4</a> by Jaana Gilbert
		posted on 4/13/2011 at 8:47 PM
		</div>
		<div class="comment_text"><p>I've had to use similar approach when I used Lucene for product search on a custom built eCommerce apps that carries over 180k products. Eventually gave up on Lucene and went with full-text search leveraging the power of MSSQL 2008 and caching.</p><p>Might be fun to try SOLR now that this client is on dedicated 9.01 server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731580">5</a> by Raymond Camden
		posted on 4/13/2011 at 8:53 PM
		</div>
		<div class="comment_text"><p>Does MSSQL/Full Text support something like previousCriteria?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731581">6</a> by Jaana Gilbert
		posted on 4/13/2011 at 9:03 PM
		</div>
		<div class="comment_text"><p>No, it doesn't, but I found a very fast way to process through the huge amount of products by utilizing <br>CONTAINSTABLE and then returning only the desired amount of products per page with ROW_NUMBER() OVER.</p><p>For the search within previous results, I just passed in the previously found items in a string and had that as the first filter inside the SQL query.<br>Super fast; both Verity (2009) and Lucene (2010) were left on the starting line by the time my current approach had already searched through several varchar(MAX) fields looking for the criteria in question and returned the first set of data on the page. We went from over 15000+ms and larger to 200-300ms on identical searches.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731583">7</a> by Raymond Camden
		posted on 4/13/2011 at 9:27 PM
		</div>
		<div class="comment_text"><p>Interesting, thanks for sharing that Jaana.</p></div>
	</div>
</div>
		