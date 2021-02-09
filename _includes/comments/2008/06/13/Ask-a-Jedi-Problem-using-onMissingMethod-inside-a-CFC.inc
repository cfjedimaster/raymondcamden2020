
<div class="comment" id="c_1713681833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681833">1</a> by John Whish
		posted on 6/13/2008 at 8:30 PM
		</div>
		<div class="comment_text"><p>This might be breaking the KISS approach, but you could have the get and set methods in your CFC set to private and then use the onMissingMethod to handle a call to setXyz(a=1) from an external script. onMissingMethod would then call the private get or set methods.<br>That way you can carry using setXyz() and getXyz() externally as you were before.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681844">2</a> by Raymond Camden
		posted on 6/13/2008 at 8:31 PM
		</div>
		<div class="comment_text"><p>Um.... isn't that exactly what my code does? I must be missing something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681846">3</a> by John Whish
		posted on 6/13/2008 at 8:32 PM
		</div>
		<div class="comment_text"><p>Sorry, being dense - that's exactly what you've done! End of the day... :-/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681845">4</a> by Matthew Abbott
		posted on 6/13/2008 at 10:15 PM
		</div>
		<div class="comment_text"><p>Thanks Ray again for your clarifications and help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681842">5</a> by Joshua Curtiss
		posted on 6/17/2008 at 1:15 AM
		</div>
		<div class="comment_text"><p>Nice. I've never encountered this problem because I am in the camp that is against generic setters and getters for public accessors. Not that I feel strongly about it; it's just not what I prefer. Although I always have generic setters and getters that are only private (just like in your example) and then used by my publicly accessible explicit getters and setters.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681854">6</a> by Dominic
		posted on 6/26/2008 at 8:02 PM
		</div>
		<div class="comment_text"><p>Have you ever tried using onMissingMethod with a webservice?  I'm building a webservice now, and it seems not to work.</p><p>&lt;cffunction name="onMissingMethod" access="remote" output="false" returntype="any"&gt;<br>	&lt;cfargument name="missingMethodName" type="string"&gt;<br>	&lt;cfargument name="missingMethodArguments" type="struct"&gt;<br>	&lt;cfset handleError("invalidmethod") /&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681848">7</a> by Raymond Camden
		posted on 6/26/2008 at 8:05 PM
		</div>
		<div class="comment_text"><p>That's not possible. Web Services have a WSDL - which is basically a list of the services they provide. You can't support a 'do anything' dynamically type interaction.</p><p>You could though write a method that lets you specify another method to run. A method "broker" so to speak. You would want to be extra careful though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681851">8</a> by Dominic
		posted on 6/26/2008 at 8:07 PM
		</div>
		<div class="comment_text"><p>Ah that makes sense.  Thanks for the info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681849">9</a> by Ahamad
		posted on 8/25/2008 at 6:23 PM
		</div>
		<div class="comment_text"><p>I have posted a simple example on onMissingmethod here.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcf-examples.net%2Findex.cfm%2F2008%2F8%2F25%2FonMissingMethod-Example%3A4EzTxRbmV1psb56HI1Hx7mOZhAA&amp;cuid=3321886" rel="nofollow noopener" title="http://cf-examples.net/index.cfm/2008/8/25/onMissingMethod-Example">http://cf-examples.net/inde...</a></p></div>
	</div>
</div>
		