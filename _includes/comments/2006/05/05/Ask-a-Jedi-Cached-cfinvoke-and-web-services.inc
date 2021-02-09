
<div class="comment" id="c_1713652562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652562">1</a> by Dave Shuck
		posted on 5/5/2006 at 4:41 PM
		</div>
		<div class="comment_text"><p>Regarding the chached webservice, here is a method for clearing that cache programatically:</p><p>&lt;cfscript&gt;<br>ws = "<a href="http://disq.us/url?url=http%3A%2F%2Fdomain.com%2Fmyservice.cfc%3Fwsdl%3ACwlzV2IrP6znrYTK3eHu1_-ITKM&amp;cuid=3321886" rel="nofollow noopener" title="http://domain.com/myservice.cfc?wsdl">http://domain.com/myservice...</a>";<br>RpcService = CreateObject("java","coldfusion.server.ServiceFactory").RpcService;<br>RpcService.refreshWebService(ws);<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652564">2</a> by Mark Kruger
		posted on 5/5/2006 at 4:47 PM
		</div>
		<div class="comment_text"><p>Ray - you can use the service factory to refresh a specific web service. See this post:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmkruger.cfwebtools.com%2Findex.cfm%3Fmode%3Dalias%26alias%3Dwebservice%2520cache%3AJedi-MB9c5Z1MBuvBcBMYq6WGd4&amp;cuid=3321886" rel="nofollow noopener" title="http://mkruger.cfwebtools.com/index.cfm?mode=alias&amp;alias=webservice%20cache">http://mkruger.cfwebtools.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652565">3</a> by Raymond Camden
		posted on 5/5/2006 at 4:52 PM
		</div>
		<div class="comment_text"><p>Cool, but I wonder if there is an Admin API way to do it, which would be more official.</p><p>I -always- try to warn folks - the ServiceFactory is cool, but 100% unsupported.</p><p>Anyway, I'm going to run some PDF dumps of the Admin CFC and post them. As far as I know, there is no documentation like this. The livedocs DO talk about it, but don't tell you all the methods you can do. (AFAIK)</p><p>Also guys, note that I edited the entry. The original reader had a different concern than what I thought he meant.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652563">4</a> by johnb
		posted on 5/5/2006 at 4:57 PM
		</div>
		<div class="comment_text"><p>I'd interpret the question slightly different and stick my neck out and say yes, it would apply to web services too. I think the question is more to do with DNS caching as opposed to web service caching. As the location of the webservice is specified by a fully qualified domain names then Java will cache the IP of that fqdn indefinitely (if i'm reading the quoted technote correctly) so if the IP changes then the endpoint of the ws would still be at the old IP and not the new one until CF/Jrun is restarted</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652567">5</a> by Raymond Camden
		posted on 5/5/2006 at 5:10 PM
		</div>
		<div class="comment_text"><p>Hey John, read the entry again. I updated it earlier to reflect this. You are right, that is what he is concerned with, and I pinged a contact on the CF team. The tech note is VERY clear in saying cfhttp only. You would ASSUME the cfinvoke would use the same core code, but it may not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652566">6</a> by Teddy Payne
		posted on 5/5/2006 at 6:39 PM
		</div>
		<div class="comment_text"><p>The usage of the service factory is also not supported in BlueDragon for those use other than Adobe for CF solutions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652570">7</a> by mac jordan
		posted on 5/5/2006 at 7:04 PM
		</div>
		<div class="comment_text"><p>that web services caching bit me badly when Amazon moved their European IPs.  Took me *ages* to work out what was happening ...</p><p>in my defence, it was the first web services stuff I'd ever written.</p></div>
	</div>
</div>
		