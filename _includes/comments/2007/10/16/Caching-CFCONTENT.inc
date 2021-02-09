
<div class="comment" id="c_1713673363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673363">1</a> by Daniel D.
		posted on 10/17/2007 at 5:05 PM
		</div>
		<div class="comment_text"><p>Might be a good idea if you are doing server side caching to add better support for client side caching of the document also. Then check with CF to see if they already have a valid client side copy and have them use that.  Adding a last modified or etag header values to the page.  Etags works well if you have the same page serving multiple documents then you know if they already have that specific document.  Then if a client sends a valid cache info in the http request you can simply send a 304 response and abort the page.  Thus saving the processing and the bandwidth.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673361">2</a> by Raymond Camden
		posted on 10/17/2007 at 5:21 PM
		</div>
		<div class="comment_text"><p>Good point there. CFCACHE could be updated for that. ScopeCache probably won't as I didn't intend it really to be used for an _entire_ page - just clumps of text.</p></div>
	</div>
</div>
		