
<div class="comment" id="c_1713714732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714732">1</a> by DanaK
		posted on 4/17/2009 at 9:53 PM
		</div>
		<div class="comment_text"><p>imho relying on the referrer anytime is a potentially bad decision. Anyone that uses any kind of proxying to wipe it clean will run into problems using your shtuff. I've seen it several times now cause issues with someone's code trying to validate a form post :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714740">2</a> by Chris Mallinson
		posted on 4/17/2009 at 10:08 PM
		</div>
		<div class="comment_text"><p>For all AJAX requests, I require a token.  I send the AJAX requests to a proxy that evaluates the token, and relays the request to the appropriate CFC.   The token is an encrypted string containing a time stamp, as well as a key to identify the requesting page and the user, if one exists.  That way I can evaluate the legitimacy of the AJAX request, and if necessary, turn it down.  I will turn down some requests due to stale time stamps, and some due to user permissions.  You can develop any rules you like.</p><p>I load a new token with each page, and store it in a tag somewhere on the page usually as a class name, and then pass it along with any AJAX request using the id - $("#tokenContainer").attr("class")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714739">3</a> by Shane Zehnder
		posted on 4/17/2009 at 10:21 PM
		</div>
		<div class="comment_text"><p>I still think checking by SessionID is a safe way to go.  On Ajax calls to CFCs or pages I want protected I pass the current SessionID as an argument.  The SessionID on the server should match the one sent in the request so you know it isn't someone tampering with the call.</p><p>On Ajax calls that really need to be locked down I also check for the XmlHttpRequest header.  It keeps an unscrupulous person from just opening another browser tab and trying to modify data by calling the CFC directly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714741">4</a> by Rick O
		posted on 4/17/2009 at 10:32 PM
		</div>
		<div class="comment_text"><p>Add a request nonce.  If the nonce gets out of sync or is missing, throw an error that has the UI redirect to a page that verifies their action.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714747">5</a> by Jason Dean
		posted on 4/18/2009 at 12:21 AM
		</div>
		<div class="comment_text"><p>Ray,  I think that I agree that it doesn't matter if it is a remote call or not.</p><p>As for tokens or nonces, it seems to me that the sessionid should fill the requirements for either. If it is good enough for a regular HTTP request to verify the client, then why would an Ajax request require anything more? You can tamper with a regular HTTP request just like you could an Ajax request.</p><p>It seems to me that there is nothing that can be done from an Ajax request that can't be done via a standard HTTP request (which an Ajax request is), so why would anything extra need to be done to secure it.</p><p>I still like the idea of sensing if it is an Ajax request or not, because that might affect the format of my return data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714748">6</a> by Edward Beckett
		posted on 4/18/2009 at 12:47 AM
		</div>
		<div class="comment_text"><p>Ahem ... Demo Please?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714745">7</a> by Ben Nadel
		posted on 4/18/2009 at 2:55 AM
		</div>
		<div class="comment_text"><p>Ray, after reading this post, I was truly inspired and I think made an awesome (personal) discovery that a remote method response is not tied in any way to the method invocation itself!</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F1567-Handling-Remote-API-Errors-With-Application-cfc-s-OnError-Event-Method.htm%3AKFN1-5p5wKnrgk4mOIaaG2_i8BY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/1567-Handling-Remote-API-Errors-With-Application-cfc-s-OnError-Event-Method.htm">http://www.bennadel.com/blo...</a></p><p>Anyway, thanks for the inspiration!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714752">8</a> by Raymond Camden
		posted on 4/18/2009 at 6:17 AM
		</div>
		<div class="comment_text"><p>Just call me the Inspirator.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714751">9</a> by Martin
		posted on 4/19/2009 at 2:44 AM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>Is this a case where you could have used the verifyClient() attribute of the cffunction tag?<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfquickdocs.com%2Fcf8%2F%3FgetDoc%3DVerifyClient%23VerifyClient%3AbFpd7uzZh6ntF5hUH2RBMGUUMAM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfquickdocs.com/cf8/?getDoc=VerifyClient#VerifyClient">http://www.cfquickdocs.com/...</a></p><p>Cheers<br>Marty</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714749">10</a> by Raymond Camden
		posted on 4/19/2009 at 3:45 AM
		</div>
		<div class="comment_text"><p>Yep, that would work as well. Thanks for reminding me, Martin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714750">11</a> by Shane Zehnder
		posted on 4/20/2009 at 4:58 AM
		</div>
		<div class="comment_text"><p>VerifyClient() does not seem to like to play well with jQuery.  I think I am missing a piece of the puzzle, but the documentation does not mention much about it and there aren't many blog posts out the on it, other than it being one of the new Ajax features in CF8.</p><p>Is it possible to use it with jQuery?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714753">12</a> by Raymond Camden
		posted on 4/20/2009 at 5:02 AM
		</div>
		<div class="comment_text"><p>VerifyClient ONLY works with "CFAjax", not other libraries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714729">13</a> by Shane Zehnder
		posted on 4/20/2009 at 5:10 AM
		</div>
		<div class="comment_text"><p>Ah, the last piece of the puzzle.  Explains all those pretty red 500 Server errors in ColdFire ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714728">14</a> by Gary Fenton
		posted on 4/20/2009 at 10:21 PM
		</div>
		<div class="comment_text"><p>@Chris, I came up with the idea of encrypted tokens too. How spooky is that? See my blog for a working demo (kindly hosted by Ray)<br><a href="http://disq.us/url?url=http%3A%2F%2Fgarysgambit.blogspot.com%2F2009%2F04%2Fajaxbouncer-limiting-ajax-tampering-and.html%3A4IJKyGXQrNUzsRRs9sVudGGEPy0&amp;cuid=3321886" rel="nofollow noopener" title="http://garysgambit.blogspot.com/2009/04/ajaxbouncer-limiting-ajax-tampering-and.html">http://garysgambit.blogspot...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714731">15</a> by Rob
		posted on 4/24/2009 at 5:30 AM
		</div>
		<div class="comment_text"><p>I just found one place that will cause trouble with that X-Requested-With XMLHttpRequest header. If you use the jQuery Form plugin and it's ajaxSubmit() function (which I have found the best way to do file uploads so far), it does not contain that header. I am assuming it has to do with using the iFrame to manage the file uploads?</p><p>Either way, that threw a nice monkey wrench in what was otherwise a fairly decent setup I had going. Grumble.</p></div>
	</div>
</div>
		