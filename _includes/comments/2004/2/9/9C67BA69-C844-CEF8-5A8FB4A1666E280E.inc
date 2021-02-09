
<div class="comment" id="c_1713615383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615383">1</a> by Brendan Sisson
		posted on 2/10/2004 at 3:36 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I have also had this issue and it turns out it is a known issue with CF.</p><p>See post by Charlie Arehart (bottom of page, look at comments also)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfmxplus.blogspot.com%2F2003_02_23_cfmxplus_archive.html%3ADyOEizwBFt_TQs9Nbmlj1HPM0jo&amp;cuid=3321886" rel="nofollow noopener" title="http://cfmxplus.blogspot.com/2003_02_23_cfmxplus_archive.html">http://cfmxplus.blogspot.co...</a></p><p>There is a very hard to find section in the Macromedia livedocs also:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.macromedia.com%2Fcoldfusion%2F6.1%2Fhtmldocs%2Fbuildi12.htm%3AN9j2PeSJlZavT99Y9iPtb6srisU&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.macromedia.com/coldfusion/6.1/htmldocs/buildi12.htm">http://livedocs.macromedia....</a></p><p>"If you invoke a CFC method remotely, using a specific URL, form field, Flash Remoting MX, or a web service invocation, ColdFusion looks in the specified path relative to the web root. For form fields and URLs specified directly on local web pages, ColdFusion also searches relative to the page directory."</p><p>I think the above translates to "ColdFusion ignores CF Mappings when invoked remotely, via remoting etc"</p><p>Hope that helps.</p><p>-Brendan<br><a href="http://disq.us/url?url=http%3A%2F%2Ffarcry.daemon.com.au%3Asr56PG-G2Rj3KZ5iRR1MLpFVglc&amp;cuid=3321886" rel="nofollow noopener" title="http://farcry.daemon.com.au">http://farcry.daemon.com.au</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615385">2</a> by Geoff Bowers
		posted on 2/10/2004 at 3:39 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>You might be encountering an old issue... Charlie Arehart puts it quite well here: <br>Impact of mappings on use of CFCs in CF, web services, and Flash remoting<br><a href="http://disq.us/url?url=http%3A%2F%2Fcfmxplus.blogspot.com%2F2003_02_23_cfmxplus_archive.html%2390367930%3AHi6-csQaNMG5WH8RppoOLDIcnRo&amp;cuid=3321886" rel="nofollow noopener" title="http://cfmxplus.blogspot.com/2003_02_23_cfmxplus_archive.html#90367930">http://cfmxplus.blogspot.co...</a></p><p>Benoit Hediard has a workaround in the comments which you might find useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615384">3</a> by Raymond Camden
		posted on 2/10/2004 at 5:07 PM
		</div>
		<div class="comment_text"><p>Guys, thanks for the info. Brendan, I don't think your second URl applies, as I _believe_ it directly relates to _finding_ the CFC. In my case, I have no issue finding the CFC. The issue is that the method then uses a CF mapping. I'm still trying to find a bug # if it exists.</p></div>
	</div>
</div>
		