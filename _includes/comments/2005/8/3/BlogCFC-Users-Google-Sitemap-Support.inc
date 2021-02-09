
<div class="comment" id="c_1713619629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619629">1</a> by rd
		posted on 8/3/2005 at 7:09 PM
		</div>
		<div class="comment_text"><p>Well, I've thought about doing it... but the spec looked pretty involved. So I'd prolly use it, if you released one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619628">2</a> by Wayne Graham
		posted on 8/3/2005 at 8:31 PM
		</div>
		<div class="comment_text"><p>I'm not sure this would be that useful with how I've deployed the code... Been running the Python scripts to create the XML and maintain it through some scripts (our site changes very little). What might be nicer is a CF front-end to manage the SiteMap stuff at a server level...hmmm, that could be a fun project.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619632">3</a> by Brad
		posted on 8/4/2005 at 1:24 AM
		</div>
		<div class="comment_text"><p>I think it would be great for BlogCFC to support sitemaps, but I agree with Wayne it would really be great to see a CF tool to create sitemaps for any CF site.</p><p>I can't use Python on my shared server, so I've had to create another route to create sitemaps for Google.</p><p>I use the Zoom search engine for in site search and it is scheduled to regularly index the site (externally--like any other search engine).  It creates some flat files that contain  list of all the pages in the index.  I loop over the index and create the xml for the sitemap and then write the file.</p><p>However, there are problems with this method.</p><p>(1) It forces 2 applications (Zoom and CF) to work together in some sort of synchronous fashion.  If either fails...you get bad results.</p><p>(2) Using this method--it is hard to exclude pages that you don't want in the sitemap.</p><p>(3) I haven't devised a method to tell when a page has actually changed between indexes and this is something that you include in the XML for the sitemap.  What you end up with is a sitemap that looks like all pages have changed between the last time you updated the map.  I'm sure Google frowns on this.</p><p>I know this is a discussion about BlogCFC, but I just wanted to point out the utility that a CF specific tool would have.  What I really would like to develop (but never have time) is a tool that would create the sitemap with the following features:</p><p>(1) It could be scheduled to look for changes in CF pages on a regular basis.</p><p>(2) There would be an interface that allows you to disallow certain pages from the index.</p><p>(3) The map should include static and dynamic CF pages (i.e. ProductID=200&amp;CatID=5).</p><p>Just wanted to put in my 2 cents.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619631">4</a> by Brian Gilbert
		posted on 8/4/2005 at 4:32 AM
		</div>
		<div class="comment_text"><p>The spec isn't that difficult, I created a dynamic sitemap creator for my own blog (Google "realityloop") last weekend.</p><p>Took all of 10 minutes to create the script.</p><p>The main thing is to make sure that you URLencode the links.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619633">5</a> by Ian Winter
		posted on 8/4/2005 at 1:44 PM
		</div>
		<div class="comment_text"><p>I'm steering clear of google site map because it had an adverse affect on one of my sites ratings and results.</p></div>
	</div>
</div>
		