
<div class="comment" id="c_1713713652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713652">1</a> by Ben Nadel
		posted on 3/11/2009 at 10:26 PM
		</div>
		<div class="comment_text"><p>It would be cool if you could use OnMissingMethod() in remote calls. Then, you could have a CFC decorate the target CFC and wrap its returns in the callback method. Something like:</p><p>data = target[ missingMethodName ]( missingMethodArguments )</p><p>return( callback &amp; "(" &amp; data &amp; ")" );</p><p>Obviously, that syntax is not proper, but it would be a cool idea... but not possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713656">2</a> by Shiva
		posted on 4/30/2009 at 9:34 AM
		</div>
		<div class="comment_text"><p>Very nice code. I really like to work with this but my problem is i am not able to run this in my local. In the firebug it says syntax error. I am using CF8 and i am a new be...</p><p> var surl = '<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fjsonp%2Ftest.cfc%3Fmethod%3DremoteGetPerson%26callback%3D%3F%27%3ABmGpCEYqnm_dIAlYKkiU6DePZGQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/jsonp/test.cfc?method=remoteGetPerson&amp;callback=?'">http://www.coldfusionjedi.c...</a></p><p>when i used the above surl it is working but when i use<br> var surl = 'test.cfc?method=remoteGetPerson&amp;callback=?'</p><p>as my cfc is in the same folder as cfm file. why it is going wrong for me? Please help me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713663">3</a> by Raymond Camden
		posted on 4/30/2009 at 2:47 PM
		</div>
		<div class="comment_text"><p>Any more details on the syntax error? Line #? What happens if you specify a full url for surl, ie, http://localhost/etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713653">4</a> by John Stuart
		posted on 8/31/2010 at 12:12 AM
		</div>
		<div class="comment_text"><p>Thank you, Raymond! I've been looking all day for this -- a clear set of code that addressed what was needed on both sides of the HTML/CF implementation of JSONP AJAX style calls. Everyone has missed big chunks of how it actually works and inserted obscuring frills that just seem to hide what was really going on. Thanks again for a clear explanation and code that actually worked when I copied and ran it. Rarer than you'd think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713655">5</a> by Raymond Camden
		posted on 8/31/2010 at 12:14 AM
		</div>
		<div class="comment_text"><p>No problem. Glad to help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713659">6</a> by Jason McNeill
		posted on 9/17/2012 at 11:04 PM
		</div>
		<div class="comment_text"><p>@Raymond:  The link in the first sentence of the first paragraph of your article is no longer live.  Looks like they have archived your posts.  I found the link to the archived article:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.developria.com%2F2009%2F03%2Fwhat-in-the-heck-is-jsonp-and.html%3Ab9uIs3vvSgkiQ9YuysVq9fFgr7Q&amp;cuid=3321886" rel="nofollow noopener" title="http://www.developria.com/2009/03/what-in-the-heck-is-jsonp-and.html">http://www.developria.com/2...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713661">7</a> by Raymond Camden
		posted on 9/17/2012 at 11:04 PM
		</div>
		<div class="comment_text"><p>Thanks - will edit the post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713657">8</a> by markw707
		posted on 1/17/2014 at 4:31 AM
		</div>
		<div class="comment_text"><p>Very, very, very cool. It works like a dream.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713660">9</a> by Gavin
		posted on 3/12/2014 at 8:05 AM
		</div>
		<div class="comment_text"><p>Another good post Ray.</p><p>Just noticed, The link to <a href="http://disq.us/url?url=http%3A%2F%2Fwww.developria.com%2F2009%2F03%2Fwhat-in-the-heck-is-jsonp-and.html%3Ab9uIs3vvSgkiQ9YuysVq9fFgr7Q&amp;cuid=3321886" rel="nofollow noopener" title="http://www.developria.com/2009/03/what-in-the-heck-is-jsonp-and.html">http://www.developria.com/2...</a> is redirecting to <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fdevnet.html%3AOBrLhpO8J_PNbf-huYgES5iZHuY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/devnet.html">http://www.adobe.com/devnet...</a> now, I was wondering if you happened to have a copy of that post anywhere else?<br>If not for me, but for others trying to figure out what the heck jsonp is too.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713654">10</a> by Raymond Camden
		posted on 3/12/2014 at 8:07 AM
		</div>
		<div class="comment_text"><p>See: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2014%2F3%2F10%2FRemember-DevelopRIA%3AL1TTLEtaPe6TZHsHYHZIvJ43wdE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2014/3/10/Remember-DevelopRIA">http://www.raymondcamden.co...</a></p><p>I'll republish that post - it was a good one. (I'll probably forget to mention it here, so just check the blog. Daily. Hourly! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713665">11</a> by Raymond Camden
		posted on 3/12/2014 at 6:22 PM
		</div>
		<div class="comment_text"><p>Reprinted: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2014%2F3%2F12%2FReprint-What-in-the-heck-is-JSONP-and-why-would-you-use-it%3A-F7EsmND7stA8NIx0BM8zd7OPjw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2014/3/12/Reprint-What-in-the-heck-is-JSONP-and-why-would-you-use-it">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		