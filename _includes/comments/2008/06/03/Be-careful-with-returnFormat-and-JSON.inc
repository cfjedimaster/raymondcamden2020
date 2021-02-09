
<div class="comment" id="c_1713681347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681347">1</a> by Ben Nadel
		posted on 6/3/2008 at 5:35 PM
		</div>
		<div class="comment_text"><p>Thumbs up for FireBug. I don't think I could even build AJAX applications without it. It simply makes work possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681349">2</a> by Sam Farmer
		posted on 6/3/2008 at 6:10 PM
		</div>
		<div class="comment_text"><p>Ditto.  I find the Javascript cfdebug pretty helpful as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681348">3</a> by Jane Carter
		posted on 6/6/2008 at 9:21 AM
		</div>
		<div class="comment_text"><p>Thanks for the article: it's saved us a lot of hassle.</p><p>By the way, please note that "its" is spelled wrongly in the sentence "with it's return form".  "it's" means "it is" or "it has", not "of it".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681351">4</a> by Raymond Camden
		posted on 6/6/2008 at 3:31 PM
		</div>
		<div class="comment_text"><p>Believe it or not - I have a degree in English. ;) Fixed. I also changed considered to concerned.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681350">5</a> by ike
		posted on 6/7/2008 at 6:55 AM
		</div>
		<div class="comment_text"><p>I was talking about that with some folks on Tribe recently actually... about how it feels like I'm constantly noticing other people substituting homonyms or just plain not the word they intended when they're writing up blogs or forum posts. Of course, if you noticed yourself doing it at the time, you would correct yourself before it went out, so it's something that only someone else can notice. Although yourself at a later time also qualifies as someone else. :P I was assured that yes indeed, I do it too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681353">6</a> by Raul Riera
		posted on 6/8/2008 at 1:36 PM
		</div>
		<div class="comment_text"><p>When you dont specify the serializeJSON, how do you tell the function to return the JSON as a column query format. Like this</p><p>returnFormat=json&amp;queryFormat=column</p><p>I use that when I want to "tell the CFC to do it via an URL" but how can I do the same thing directly on the CFC file?</p><p>&lt;cffunction name="foo" returnFormat="json" queryFormat="column"&gt;</p><p>Is not good :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681356">7</a> by Raymond Camden
		posted on 6/8/2008 at 7:05 PM
		</div>
		<div class="comment_text"><p>Rual - why would want to? If you want a CFC to always (or by default) return the json, then do it in CFML, use the serializeJSON with the right arg for queryformat. But again though I wouldn't do that. Keep the CFC generic and use the URL params.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681354">8</a> by Raul Riera
		posted on 6/8/2008 at 10:28 PM
		</div>
		<div class="comment_text"><p>Yeah, in fact I have it that way, but I have been playing around with Railo and it appears it doesnt support the URL thing. And when trying to do it via CFML I dont get the same result as CF8</p><p>This is a Spry JSONDataset.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681359">9</a> by Raymond Camden
		posted on 6/8/2008 at 11:41 PM
		</div>
		<div class="comment_text"><p>If we didn't have the url thing, then I'd do it in the CFC I guess, but I'd build _another_ method. Ie, one core getFoo() method that returns a native CF query, or whatever, and another method for ajax that wraps getFoo(). That's what I'd do in Railo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681358">10</a> by Stefan Vesterlund
		posted on 7/3/2008 at 3:47 PM
		</div>
		<div class="comment_text"><p>I was wondering - is there no way to set the returnformat programatically inside the function?</p><p>if (req is JSONP)<br>  arguments.returnformat='json'<br>else<br>  arguments.returnformat='wddx'</p><p>It feels a bit weird that you can send it as an argument but not treat it as one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681352">11</a> by Raymond Camden
		posted on 7/3/2008 at 4:04 PM
		</div>
		<div class="comment_text"><p>Well, you could obviously do this yourself. Use returnformat=plain and then return wddx or json. To me, I don't view returnFormat as an argument, but more as a operator on the function. (But I haven't had my coffee yet so what do I know?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681355">12</a> by Stefan Vesterlund
		posted on 7/3/2008 at 4:11 PM
		</div>
		<div class="comment_text"><p>Ahh... I found it, after a bit more trial and error :)</p><p>if (code executed indicates json return)<br>url.returnFormat="JSON";<br>else<br>url.returnFormat="plain";</p><p>That will make my life easier. Sometimes it is simply easier to decide on the server what the returnformat should be, but only after you see the request and it's result. For instance if you have the same methods being accessed by both JSONRPC and JSONP.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681357">13</a> by Raymond Camden
		posted on 7/3/2008 at 4:16 PM
		</div>
		<div class="comment_text"><p>Heh, that's cheating. That actually works though? I'll do a test here and blog it later today if so (unless you want to blog it). I don't like it - but it's interesting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681360">14</a> by Stefan Vesterlund
		posted on 7/3/2008 at 4:23 PM
		</div>
		<div class="comment_text"><p>Cheating on a computer does not really count as a crime :)<br>Blog it if you wish, I have no blog. But it works for sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681362">15</a> by Raymond Camden
		posted on 7/3/2008 at 5:24 PM
		</div>
		<div class="comment_text"><p>Blogged:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2008%2F7%2F3%2FOverriding-returnFormat-at-runtime%3A2c9Nx8Wks3ps5ctpl25mpbGB6CE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2008/7/3/Overriding-returnFormat-at-runtime">http://www.coldfusionjedi.c...</a></p><p>Thanks for sharing this Stefan.</p></div>
	</div>
</div>
		