
<div class="comment" id="c_1713735360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735360">1</a> by Joshua Siok
		posted on 9/26/2011 at 6:36 PM
		</div>
		<div class="comment_text"><p>Why don't you just use Application.cfc's OnCFCRequest() function?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735361">2</a> by Raymond Camden
		posted on 9/26/2011 at 6:39 PM
		</div>
		<div class="comment_text"><p>Eh? Your comment doesn't make sense. The user had used onRequestStart for a header. They didn't want to do anything for CFC requests at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735365">3</a> by Phillip Senn
		posted on 9/26/2011 at 6:57 PM
		</div>
		<div class="comment_text"><p>I put 	&lt;cfheader name="Expires" value="#GetHttpTimeString(Now())#"&gt; in all my onRequestStarts.  Do you think that would ever interfere?  BTW, My hosting company is still on cf8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735363">4</a> by Raymond Camden
		posted on 9/26/2011 at 7:02 PM
		</div>
		<div class="comment_text"><p>Let me test. I don't believe it will hurt at all. That's just a HTTP header.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735372">5</a> by Raymond Camden
		posted on 9/26/2011 at 7:02 PM
		</div>
		<div class="comment_text"><p>Oh wait - I've got a script based CFC. ;) Um, I could do the include I guess. But I'll leave it up to you to convert my CFCs and test real quick. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735348">6</a> by Joshua Siok
		posted on 9/27/2011 at 6:07 PM
		</div>
		<div class="comment_text"><p>Sorry Ray.  What I meant to say is "Would you recommend using OnRequest() and OnCFCRequest() instead of implementing this OnRequestStart() "hack"?" Then, you could implement the header/footer code into the OnRequest() function for non-cfc requests.  I think you should make your last sentence of this post stand out more and maybe give a suggestion of best practice for cases like this.  Personally, I think it would be better to simply rewrite how the application.cfc works instead of patching the code to accommodate CFC ajax requests like you did here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735368">7</a> by Raymond Camden
		posted on 9/27/2011 at 6:17 PM
		</div>
		<div class="comment_text"><p>Well it isn't a hack. onRequestStart always run before a request. If you add onCFCRequest, it _still_ fires, as it should, because you told CF to intercept it. The only thing onCFCRequest prevents is onRequest. So in the case of "I want an automatic header", the use of onRequestStart is valid, and still an issue for CFC calls, even if you use onCFCRequest.</p><p>But yeah - best solution is to not output crap in App.cfc. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735350">8</a> by Doug
		posted on 10/11/2011 at 8:51 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>Have you ever come across a AJAX problem where the JSON has "//" attached on the results? I'm perplexed on this one, since I've totally removed the application.cfc (in case it was adding something with the onrequest call).</p><p>An console log dump of what I'm seeing with a test of mine looks like this:</p><p>//{"test":"Hello World!"}</p><p>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735352">9</a> by Doug
		posted on 10/11/2011 at 10:09 PM
		</div>
		<div class="comment_text"><p>Wow... you already provided the answer.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2007%2F7%2F31%2FColdFusion-8-Ajax-Security-Features%3AsRHb6qkyRGNrtglkZIfJwl9X-eo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2007/7/31/ColdFusion-8-Ajax-Security-Features">http://www.coldfusionjedi.c...</a></p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735351">10</a> by Raymond Camden
		posted on 10/12/2011 at 12:22 AM
		</div>
		<div class="comment_text"><p>Glad you found it. Your question came in while I was presenting.</p></div>
	</div>
</div>
		