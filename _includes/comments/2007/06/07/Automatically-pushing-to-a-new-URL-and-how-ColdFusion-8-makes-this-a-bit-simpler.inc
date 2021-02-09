
<div class="comment" id="c_1713666640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666640">1</a> by Brian Rinaldi
		posted on 6/7/2007 at 11:04 PM
		</div>
		<div class="comment_text"><p>Not sure exactly what that code is doing, but wouldn't this work for all cases?</p><p>reReplaceNoCase(variables.href,"http://[^/]*/","<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2F%3AsC55EH1P1o0UDRnaqFXYVAVvkeo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/">http://www.coldfusionjedi.com/</a>","all")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666652">2</a> by Brian Rinaldi
		posted on 6/7/2007 at 11:07 PM
		</div>
		<div class="comment_text"><p>Ok. somehow that got parsed poorly after I submitted it because of the url inside the code - replace [your url here] obviously:</p><p>reReplaceNoCase(variables.href,"http://[^/]*/","[your url here]","all")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666651">3</a> by Brian Rinaldi
		posted on 6/7/2007 at 11:31 PM
		</div>
		<div class="comment_text"><p>That is what I get for posting a comment before thinking about it...sorry for practically comment spamming you here, but the following code will create exactly the same URL on the new domain:</p><p>&lt;cfset newURL = reReplaceNoCase("http://#CGI.SERVER_NAME##CGI.SCRIPT_NAME#?#CGI.QUERY_STRING#","http://[^/]*/","http://[new url here]","all")&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666654">4</a> by todd sharp
		posted on 6/7/2007 at 11:46 PM
		</div>
		<div class="comment_text"><p>Brian, didn't you forget to +1 for todd you comment spammer?</p><p>Go cavs.</p></div>
	</div>
</div>
		