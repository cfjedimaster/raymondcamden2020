
<div class="comment" id="c_1713654351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654351">1</a> by Scott P
		posted on 6/21/2006 at 7:58 AM
		</div>
		<div class="comment_text"><p>ray, <br>I'm getting a Variable getMaxIDs is undefined error on the search.</p><p>Coming from line 120 of pageGateway.cfc<br>var idstosearch = getMaxIDs()</p><p>Searching through the zip, I'm not finding that function.</p><p>thanks for adding search</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654348">2</a> by Scott P
		posted on 6/21/2006 at 8:05 AM
		</div>
		<div class="comment_text"><p>It appears that you added the maxid stuff to the sql query. I commented out line 120 in pageGateway.cfc and it is working now.</p><p>thanks again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654349">3</a> by Raymond Camden
		posted on 6/21/2006 at 8:11 AM
		</div>
		<div class="comment_text"><p>Fixed. I normally run MG apps in full reload mode, but Canvas isn't, so I keep forgetting to refresh the cache. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654328">4</a> by Matt Williams
		posted on 6/21/2006 at 8:17 PM
		</div>
		<div class="comment_text"><p>I had added search functionality by simply putting an optional 'SearchCriteria' argument in the getPageIndex function and then putting a cfif around the WHERE statement. The laziest part was I used the same pageindex view page.</p><p>I see you reworked some of the queries and number of hits to the db in the PageGateway.cfc. This is probably a better long-term solution.</p><p>If anyone is interested in an update to the Mach-II port of this, post here and I'll give it a go.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654350">5</a> by James FK
		posted on 8/1/2006 at 12:43 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Since your funky new blog design, I get a 404 trying to download Canvas?</p><p>Thanks,<br>James</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654352">6</a> by Raymond Camden
		posted on 8/1/2006 at 2:42 PM
		</div>
		<div class="comment_text"><p>Fixed. Sorry about that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654353">7</a> by James FK
		posted on 8/1/2006 at 3:33 PM
		</div>
		<div class="comment_text"><p>Thanks Ray!)</p></div>
	</div>
</div>
		