
<div class="comment" id="c_1713727673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727673">1</a> by Charlie F
		posted on 9/18/2012 at 9:17 PM
		</div>
		<div class="comment_text"><p>First off, thanks for your great resources on this site.  Now to Q#2 above: this is exactly my issue in the system I'm building.</p><p>I am creating a searchable document repository where a significant amount of metadata about a binary doc is stored in a database record.  I was planning on using MSSql2008 fulltext BLOB search, which works great, actually, but I'm not able to get my corporate webhost to comply so I'm looking into storing the docs in the filesystem.  I then need to link the DB metadata with its file.</p><p>What I need to be able to do is search for a word -- let's say "elbow" -- and get one record returned whether "elbow" shows up in a doc or in the title (or any other) metadata field.</p><p>I don't fully understand your description.  Are you saying that I should parse the text of the uploaded file into a database field and use that for search, and then in my search results just point to the actual file in the filesystem instead?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727677">2</a> by Raymond Camden
		posted on 9/18/2012 at 10:50 PM
		</div>
		<div class="comment_text"><p>Well, you could do a query against the metadata table, and then do cfsearch. This gives you two queries. You could loop over one, and then loop over the second, but for each row of the second you see if it exists in the first query, and if so, skip it. valueList() is a quick way to get a 'column' of values from a db.</p></div>
	</div>
</div>
		