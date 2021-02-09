
<div class="comment" id="c_1713733703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733703">1</a> by Rob Brooks-Bilson
		posted on 6/22/2011 at 4:31 PM
		</div>
		<div class="comment_text"><p>Ray, since Ehcache doesn't support name spaces for cache keys, one suggestion I give in my caching talks is to simulate them in order to help minimize the potential for key collisions like you described here.  In your example, I'd suggest something like this:</p><p>admin_foo<br>user_foo<br>comment_foo<br>entry_foo<br>...</p><p>The idea is to group the types of items you're caching so you don't have to remember whether a particular key was used throughout the program - just in the specific domain.</p><p>A second option is to use a different cache (CF 9.0.1 supports custom named cache regions in most of the tag functions as well as cfcache).  There is minimal overhead with having multiple caches, although for something like a small blog, it's probably overkill.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733694">2</a> by Raymond Camden
		posted on 6/22/2011 at 5:09 PM
		</div>
		<div class="comment_text"><p>Good point on the naming scheme - and that could also apply to Session variables as well.</p><p>I keep forgetting about regions. Too bad you have to edit an XML file first. I mean - not that that is a big deal, but it would be cool to be able to define the region in onApplicationStart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733695">3</a> by Patrick Heppler
		posted on 6/22/2011 at 5:12 PM
		</div>
		<div class="comment_text"><p>How to get "real" cache names through cacheGetAllIDs()?<br>Always returns names in uppercase, which is ugly to read. Is there some kind of getMeta() or something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733702">4</a> by Raymond Camden
		posted on 6/22/2011 at 5:17 PM
		</div>
		<div class="comment_text"><p>CF901 added a way to get the underlying Java object. In theory you could inspect it there. To be honest, seems like a lot more work than it's worth. I'd just lcase the keys. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733696">5</a> by Rob Brooks-Bilson
		posted on 6/22/2011 at 5:50 PM
		</div>
		<div class="comment_text"><p>In CF 9.0.1 you don't need to edit the xml config file (ehcache.xml) in order to create a custom cache/cache region. It's now built into the functions:</p><p>cachePut('foo', 'bar', 'myCustomCache')<br>cacheGett('foo', 'myCustomCache')</p><p>@Patrick, cacheGetAllIDs() is evil. It's fine if you only have a fed hundred (or thousand) items in teh cache, but if you have a cache with hundreds of thousands or millions of cache entries, you don't want to call that function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733697">6</a> by Raymond Camden
		posted on 6/22/2011 at 5:53 PM
		</div>
		<div class="comment_text"><p>Rob, the docs said this:</p><p>"Edit ehCache.xml (cfroot/lib)to set the properties for user-defined caches as shown in the following example"</p><p>I read it as required. So are you saying that if I use cache region FOO and don't define it, it will use some default set of properties? And if I want to tweak it, THEN I go to XML? (If so, I'd still argue that it would be cool to define the props via CFML.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733701">7</a> by Rob Brooks-Bilson
		posted on 6/22/2011 at 6:08 PM
		</div>
		<div class="comment_text"><p>Ray, the docs are wrong. You don't need to define it first in the ehcache.xml file.  When you use it in a function the first time, it automatically gets set for you using the default cache settings from ehcache.xml.  If you want to use a different cache config from the default, you have two options (cacheSetProperties() doesn't work for custom caches):</p><p>1.  Hard code the congig in ehcache.xml<br>2.  Use my cacheNew() UDF to create the custom cache with customizable properties.  I keep forgetting to release it.  I'll do a quick blog post when I get to work, then send it over to cflib as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733699">8</a> by Raymond Camden
		posted on 6/22/2011 at 6:12 PM
		</div>
		<div class="comment_text"><p>Interesting. Does your cacheNew end up updating the XML file or is it 100% virtual? If virtual, would it need to be run in onAppStart?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733704">9</a> by Rob Brooks-Bilson
		posted on 6/22/2011 at 7:33 PM
		</div>
		<div class="comment_text"><p>@Ray, my UDF doesn't write out to the ehcache.xml file. It creates the cache at runtime, just like CF does for the built-in template and object caches.  If you were to write a new cache region to the ehcache.xml file, you would have to restart CF for it to take effect.</p><p>To answer your 2nd question, the answer is it depends ;-)  In the case of blogCFC, that's definitely an option.  You could first do a check to see if the cache exists, and if not, create it.  It all depends on your use case and how you want to config it.  If you're happy with the values set by default, then you wouldn't need to create a new custom cache on application start - you could just reference your custom cache name when you do your gets/puts.  On the other hand, if you do want to tweak the cache config, you can go the hard coded xml route, which is fine if you have control over your server.  However, since blogCFC is really a packaged app, I think it should be as self-contained as possible and shouldn't rely on having to make changes to the xml congig file.  So in that case, perhaps having the check/initialization on app start makes the most sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733700">10</a> by Raymond Camden
		posted on 6/22/2011 at 7:35 PM
		</div>
		<div class="comment_text"><p>That sounds pretty reasonable. Thanks Rob.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733705">11</a> by Rob Brooks-Bilson
		posted on 6/22/2011 at 8:32 PM
		</div>
		<div class="comment_text"><p>@Patrick,  RE getting the case of the key that you set in the cache. Unfortunately, you can't.  ColdFusion is uppercasing your cache keys when it inserts them into ehcache.  This is unfortunate for a number of use cases, but I understand why Adobe did it - ColdFusion is for the most part case insensitive.  Ehcache itself is case sensitive, so "Foo", "foo", and "FOO" are all unique keys.  Adobe, in an effort to keep things easy for *most* ColdFusion developers converts all keys to upper case when it does a cachePut().  It does the same thing on a cacheGet() as well.  I've discussed this with the ColdFusion team in the past and this is something they're looking at for a future release of CF, but there are no commitments as of right now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733707">12</a> by Raymond Camden
		posted on 6/22/2011 at 8:36 PM
		</div>
		<div class="comment_text"><p>I'd love - seriously - love - to hear an ehcache engineer explain why someone would _want_ Foo and FOO to be 2 unique keys in  a caching system. I've yet to find anyone who prefers crap like this anywhere -whether it be code or a file system.</p><p>&lt;cf_soapbox&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733706">13</a> by Rob Brooks-Bilson
		posted on 6/22/2011 at 9:07 PM
		</div>
		<div class="comment_text"><p>@Ray, It's not really an ehcache thing, it's more of a Java thing.  Everything else in Java is case sensitive, so Ehcache just works the same way (since it's written in Java as well).  What I'd like in CF is a simple switch to allow me to turn on/off case sensitivity when dealing with cache keys as well as other parts of CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733710">14</a> by Raymond Camden
		posted on 6/22/2011 at 10:20 PM
		</div>
		<div class="comment_text"><p>Good point. I'll happily blame Java then. I mean seriously - has anyone ever met anyone who like case sensitivity for things like this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733709">15</a> by Brian
		posted on 6/22/2011 at 10:48 PM
		</div>
		<div class="comment_text"><p>And of course, it's probably not a Java thing...Java's roots are in unix, and unix is all about case sensitivity ... and I never understood why either (even after having worked it for 15 years) ... the best explanation I've found went something like this:</p><p>"The primary reason is that programmers in the late 1960?s &amp; 70?s for C and Unix decided to optimize the compilers and parsers. At the time computers were much slower and it was faster to compare identical strings rather then normalizing the upper/lower case of the strings. Back in 1969 when there were was no such thing as personal computers this optimization made a lot of sense." [Greg Raiz, Raizlabs]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733708">16</a> by Greg Moser
		posted on 6/25/2011 at 5:02 AM
		</div>
		<div class="comment_text"><p>One thing that has worked will in the past for me is to setup a cache facade or a cache service. Then when i set my cache values i actually include a 3rd argument.</p><p>setCacheValue(chacheKey,cacheValue,getCurrentTemplatePath())</p><p>Then inside the service every time that i set a value I log the key, the time it was set, and the .cfm or .cfc that set the key.  It makes debugging issues much easier to just dump the log.</p><p>Anyway, that just a technique that has worked will for me.</p></div>
	</div>
</div>
		