
<div class="comment" id="c_1713717098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717098">1</a> by Kumar
		posted on 7/19/2009 at 12:03 AM
		</div>
		<div class="comment_text"><p>Good stuff. This sould be helpful when we start using CF9 at work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717099">2</a> by Sam Farmer
		posted on 7/19/2009 at 12:26 AM
		</div>
		<div class="comment_text"><p>These really are some excellent additions.</p><p>Like, Kumar, I look forward to using them at work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717100">3</a> by Scott P
		posted on 7/19/2009 at 1:21 AM
		</div>
		<div class="comment_text"><p>so rip scopecache</p><p>Personally I would have liked to see memcached used - don't get me wrong, happy to see this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717102">4</a> by Raymond Camden
		posted on 7/19/2009 at 1:23 AM
		</div>
		<div class="comment_text"><p>Heh, well, read my comments on Terry's entry. I like hope scopeCache lets you bind one cache to another... but yeah, if I'm on cf9, I'm going to use the built in stuff.</p><p>I had never seen memCache in action until this week. The client I'm doing a review for makes heavy use of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717101">5</a> by Rob Brooks-Bilson
		posted on 7/19/2009 at 3:59 AM
		</div>
		<div class="comment_text"><p>@Scott, ehcache 1.6, which is what CF 9 implements is much, much faster than memcached.  The main advantage to memcached over ehcache is that memcached runs out-of-process, so it's not tied to the same jvm as your app server.  You can now do this in ehcache as well using the ehcache server, but that isn't part of the CF implementation.  If you want to know more and are planning to be at MAX, check out my session on advanced caching.  I cover all this and a lot more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717105">6</a> by Michael Long
		posted on 7/19/2009 at 4:02 AM
		</div>
		<div class="comment_text"><p>Really could use a cacheExists function... do you constantly want it to built  a list of values?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717103">7</a> by Rob Brooks-Bilson
		posted on 7/19/2009 at 4:06 AM
		</div>
		<div class="comment_text"><p>Ray, is there a reason you're pulling back all of the cache ID's and then looking for your key there?  Seems to me this will become a problem if you load your cache up with tens or hundreds of thousands of items, which is not uncommon for large apps.</p><p>Wouldn't it make more sense just to do a cache get and if the item isn't there then put it in the cache? That's the typical way I've always worked with external caching providers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717107">8</a> by Scott P
		posted on 7/19/2009 at 4:27 AM
		</div>
		<div class="comment_text"><p>@rob - cool thanks - looking at the docs for ehcache now - <a href="http://disq.us/url?url=http%3A%2F%2Fehcache.sourceforge.net%2F%3AWenBdWHTtqZWvBL8X32n80ACx18&amp;cuid=3321886" rel="nofollow noopener" title="http://ehcache.sourceforge.net/">http://ehcache.sourceforge....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717106">9</a> by Raymond Camden
		posted on 7/19/2009 at 8:50 AM
		</div>
		<div class="comment_text"><p>@Rob: Because the result of getting an item not in the cache is a null value, and I didn't want to confuse folks. Sure, there is an easy workaround (isDefined), but I thought that this was a bit simpler.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717108">10</a> by Chris S
		posted on 7/19/2009 at 4:12 PM
		</div>
		<div class="comment_text"><p>Ray, thanks for the post and the upcoming series.  This is my favorite new (&amp; overdue) feature of Cf9.  I hope adobe works in your suggestions.</p><p>Personally I believe in cache what it served static.  Memory is cheap.  The best tuned code will never out perform microsecond cache retrieval.  It gives the best end user experience.  Focus your performance optimization on what has to be dynamic.</p><p>@Rob<br>Can CF9 talk to an out-of-process ehcache server?  This would be the best of both worlds.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717114">11</a> by Marcin
		posted on 7/19/2009 at 4:24 PM
		</div>
		<div class="comment_text"><p>@ray - was just checking out the CF9 new functions and there's an IsNull now, so you don't have to do a (probably less efficient) isdefined.</p><p>Personally I think that doing a cacheGet and then an if(isnull(data)) {...} to generate and push the data is cleaner than an if/else. *shrug* personal preference I guess :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717117">12</a> by Brett
		posted on 7/19/2009 at 5:24 PM
		</div>
		<div class="comment_text"><p>I'm disappointed there doesn't seem to be any dependency support for the new caching functions.</p><p>Along with a timeSpan dependency this would really rock if there were options to tie cache to a file (stale if put before the last modified ts), or a list of other cache id's to support cascading cache.</p><p>Also, I don't see wildcard support for cacheRemove which is something else I would find very useful. For instance say I stored generated page output in cache, I prefixed each id with pages_ there doesn't seem to be a way to clear them in one shot.  This makes any cache partitioning very difficult to implement.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717115">13</a> by Raymond Camden
		posted on 7/19/2009 at 7:05 PM
		</div>
		<div class="comment_text"><p>@Brett: Definitely agree w/ the dependency stuff - it's one thing I think ScopeCache does better.</p><p>As for wildcard removal - you could easily add that with a UDF. Have you filed an ER for that though?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717116">14</a> by Raymond Camden
		posted on 7/19/2009 at 7:08 PM
		</div>
		<div class="comment_text"><p>@Marcin: Agreed - I totally forgot about isNull, and it IS cleaner:</p><p>&lt;cfif structKeyExists(url, "clear")&gt;<br>	&lt;cfset cacheRemove("slowprocess")&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfset data = cacheGet("slowprocess")&gt;<br>&lt;cfif isNull(data)&gt;<br>	&lt;cfset sleep(1000)&gt;<br>	&lt;cfset data = now()&gt;<br>	&lt;cfset cachePut("slowprocess", data, createTimeSpan(0,0,0,30))&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfoutput&gt;<br>&lt;p&gt;<br>Result is #data#<br>&lt;/p&gt;<br>&lt;p&gt;<br>&lt;a href="test1.cfm?clear=yes"&gt;Clear Cache&lt;/a&gt;<br>&lt;/p&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717118">15</a> by Jason Rushton
		posted on 7/20/2009 at 11:07 PM
		</div>
		<div class="comment_text"><p>In the examples I've seen people have been doing something like this:</p><p>&lt;cfset data = cacheGet("slowprocess")&gt;<br>&lt;cfif StructKeyExists( VARIABLES, "data" )&gt;<br>...<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717120">16</a> by Raymond Camden
		posted on 7/20/2009 at 11:15 PM
		</div>
		<div class="comment_text"><p>@Jason - Right, that's how you would do it in CF8 and earlier. With the isNull function added, you would use that instead. (Or should use it IMHO)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717122">17</a> by Terry
		posted on 7/25/2009 at 10:34 AM
		</div>
		<div class="comment_text"><p>Any idea if this stuff will be any more efficient than cf_accelerate?</p><p>We use a modified version of the old cf_accelerate tag for a massive amount of caching.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717124">18</a> by Raymond Camden
		posted on 7/25/2009 at 5:36 PM
		</div>
		<div class="comment_text"><p>I would assume this would be better than that - and my scopeCache, because it is making use of ehcache and works at a much lower level.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717125">19</a> by Alexander
		posted on 9/17/2009 at 2:50 PM
		</div>
		<div class="comment_text"><p>This feature alone is worth upgrading. Just this one feature. I'm a bit concerned about memory control though. JVMs usually can handle about 1.7gb of ram. So my question is: is the cache shared between CF instances? (I'm talking in the enterprise edition). Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717123">20</a> by Raymond Camden
		posted on 9/17/2009 at 3:10 PM
		</div>
		<div class="comment_text"><p>I believe it is unique per instance. Rob, do you know better?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717189">21</a> by Aaron West
		posted on 10/20/2009 at 12:43 AM
		</div>
		<div class="comment_text"><p>Ehcache's implementation in ColdFusion 9 is in-process so your cache space is shared with the RAM your CF server is using in the JVM. You /can/ implement out-of-process cache with CF9 but this is much more involved as it involves multiple instances of Ehcache running on multiple servers. Even then, is sort of faux out-of-process because each CF server is still running Ehcache inside the same JVM as CF itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717194">22</a> by Dave
		posted on 10/22/2009 at 2:14 AM
		</div>
		<div class="comment_text"><p>Aaron, I think you misunderstood the question from Alexander. He is talking about distributed caching and not out-of-process caching. These are two different things.</p><p>Distributed caching is way cool! With distributed caching, you can access the same caches across multiple  servers and instances. If you update a cache on one instance, the same data and cache is available the different instances, enabling you to keep your cache data in-sync.</p><p>Let's say you have 2 server with 3 instances on each and those 3 instances are clustered together or maybe all 6 instances are cluster together. Without distributed caching, the cache on each server and instance would be different and out of sync. With distributed caching, the same cache and data is available on all the servers and instances. This will  work even if you are not clustering your instances.</p><p>The CF9 ehcache is not distributed by default, but you can enable it by modifying the ehcache.xml file down in the cfusion/lib directory. This file has lots of nice comments to get you started. If you're trying to get it to work, you should visit <a href="http://disq.us/url?url=http%3A%2F%2Fehcache.org%3AlPT-b0Ww0a5WdfOOILvgWMzkvWQ&amp;cuid=3321886" rel="nofollow noopener" title="ehcache.org">ehcache.org</a> and read about the xml configuration for distributed caching. You will also need to enable RMI Multicast Protocol on the NIC for the servers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717195">23</a> by Alexander
		posted on 10/22/2009 at 2:21 AM
		</div>
		<div class="comment_text"><p>Dave, thanks so much for pointing out the file. Will post back if it all works as you say.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717200">24</a> by Dave
		posted on 10/22/2009 at 3:36 AM
		</div>
		<div class="comment_text"><p>It looks like you can also add "user-defined" cache's and access them by using the key="user-defined" attribute of the &lt;cfcache&gt; tag. Using the user-defined cache, you can create your own cache's and those caches can be distributed and the default can be local if you want.</p><p>The user defined cache would look something like:</p><p>&lt;cache <br>name="myDistributedCache" <br>maxElementsInMemory="20000"<br>timeToIdleSeconds="0"<br>timeToLiveSeconds="0"<br>eternal="false" <br>overflowToDisk="false" <br>diskSpoolBufferSizeMB="0"<br>maxElementsOnDisk="0"<br>diskPersistent="false"<br>diskExpiryThreadIntervalSeconds="0"<br>memoryStoreEvictionPolicy="LRU"&gt;</p><p>&lt;!-- distributed  listener --&gt;<br>&lt;cacheEventListenerFactory class="net.sf.ehcache.distribution.RMICacheReplicatorFactory"<br>	properties="replicateAsynchronously=true,<br>	replicatePuts=true,<br>	replicateUpdates=true,<br>	replicateUpdatesViaCopy=true,<br>	replicateRemovals=true,<br>	asynchronousReplicationIntervalMillis=1000"<br>	propertySeparator="," /&gt;</p><p>&lt;!-- bootstrap cache on bootup --&gt;<br>&lt;bootstrapCacheLoaderFactory<br>	class="net.sf.ehcache.distribution.RMIBootstrapCacheLoaderFactory"<br>	properties="bootstrapAsynchronously=true, maximumChunkSizeBytes=5000000"<br>	propertySeparator="," /&gt;</p><p>&lt;/cache&gt;</p><p>More about user-defined caches:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F9.0%2FCFMLRef%2FWSc3ff6d0ea77859461172e0811cbec22c24-7d5a.html%3AI0vbnI8gjAAFtBeY824fvCvT9Rg&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/9.0/CFMLRef/WSc3ff6d0ea77859461172e0811cbec22c24-7d5a.html">http://help.adobe.com/en_US...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717192">25</a> by Dave
		posted on 10/22/2009 at 3:43 AM
		</div>
		<div class="comment_text"><p>The two other elements in the ehache.xml you need to enable should look something like:</p><p>&lt;cacheManagerPeerProviderFactory		 class="net.sf.ehcache.distribution.RMICacheManagerPeerProviderFactory" properties="peerDiscovery=automatic, multicastGroupAddress=230.0.0.1, multicastGroupPort=4446, timeToLive=1"/&gt;</p><p>And</p><p>&lt;cacheManagerPeerListenerFactory class="net.sf.ehcache.distribution.RMICacheManagerPeerListenerFactory" properties="hostName=127.0.0.1, port=44611,<br>socketTimeoutMillis=120000" propertySeparator="," /&gt;</p><p>**Don't forget to enable "Reliable Multicast Protocol" on your server NIC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717198">26</a> by Ali
		posted on 2/9/2010 at 10:36 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for posting this, it's really helped me a lot!<br>Only thing is that when I switched to the isNull instead of ArrayFindNoCase, it's always writing to cache, never getting the cached data.  So I had to switch back to the syntax in your orginal example of getting the cacheID's from the metadata and doing an ArrayFindNoCase.  Is there something I'm missing in the isNull?</p><p>Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717197">27</a> by Ali
		posted on 2/9/2010 at 10:45 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I posted my last comment in haste.<br>I didn't follow the isNull example correctly.<br>I was doing an isNull on the cache variable, rather than the data variable.</p><p>Also I was not doing the get before the if statement.</p><p>It works beautifully.  <br>By the way I attended your ORM presentation at MAX, it was great.  Thanks for all the support to the community over the years.  I've learned a lot from your books and blog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717196">28</a> by Raymond Camden
		posted on 2/9/2010 at 10:48 PM
		</div>
		<div class="comment_text"><p>@Ali: You are welcome!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717206">29</a> by Patrick Heppler
		posted on 5/22/2011 at 7:17 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>any chance to get all IDs stored in cache? Not only for the current Application? cachegetallids() only returns the cache of the current App.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717205">30</a> by Raymond Camden
		posted on 5/22/2011 at 7:21 PM
		</div>
		<div class="comment_text"><p>Not as far as I know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717207">31</a> by Silviu
		posted on 10/19/2013 at 12:01 AM
		</div>
		<div class="comment_text"><p>HI! Is it a way to flush a cache from other directory?<br>Ex.<br>n: <br>	„directory1/page1.cfm”,<br>there is:<br>	&lt;cfcache action=”get” id=”1” name=”qQ”&gt;<br>		&lt;cfif isNull(qQ)&gt;<br>			&lt;cfset sleep(2000)&gt;<br>			&lt;cfquery name=”qQ” datasource=”some”&gt;<br>				SELECT firstName, lastName <br>				FROM members<br>				WHERE id=1<br>			&lt;/cfquery&gt;<br>		&lt;cfcache action=”put” id=”1” value=”#qQ#”&gt;<br>		&lt;/cfif&gt;<br>How could I flush that, from:<br>	„directory1/directory2/flush.cfm” ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717204">32</a> by Raymond Camden
		posted on 10/19/2013 at 7:18 PM
		</div>
		<div class="comment_text"><p>Silviu, I'm not quite sure I understand you. You can use the caching stuff anywhere. If you don't use the old system where you wrap code in cfcache tags, but rather use the IDs, then your question doesn't really make sense. You just remove the IDs. Period.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717203">33</a> by Silviu
		posted on 10/19/2013 at 9:25 PM
		</div>
		<div class="comment_text"><p>Hi Ray, thank's for reply!<br>I a call my self a newbye in Coldfusion!<br>All the test I've made, shows you're right as long as the „flush” command is coming from within the same directory as the „put” one. If the „flush” comes from a page situated in other directory does nothing.<br>I'd like to flush the „cfcache  action=put Id=1...” from „directory1\put.cfm”<br>with, a „&lt;cfcache action="flush" ID=1...” from „directory1\directory2\flush.cfm” !<br>Realy i don't know how to do it! I'v tried to give an absolute path in „directory” or „expireurl” with no result!<br>Thank you for your time!<br>Silviu.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717201">34</a> by Raymond Camden
		posted on 10/21/2013 at 2:18 PM
		</div>
		<div class="comment_text"><p>Oh - don't forget the cache is Application based. If your other directory has a different Application.cfc/cfm, then this would be expected. You would need to use the same Application context.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717199">35</a> by Tim Brown
		posted on 11/7/2013 at 9:22 PM
		</div>
		<div class="comment_text"><p>Updated link to Terrance Ryan's blog post: ( <a href="http://disq.us/url?url=http%3A%2F%2Fblog.terrenceryan.com%2Fcaching-enhancements-in-coldfusion-9%2F%3AS7eQyvf8JS8oVif5SSOtecY8CpU&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.terrenceryan.com/caching-enhancements-in-coldfusion-9/">http://blog.terrenceryan.co...</a> )</p></div>
	</div>
</div>
		
<div class="comment" id="c_2364700498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2364700498">36</a> (In reply to <a href="#c_1713717117">#12</a>) by Ernesto
		posted on 11/17/2015 at 5:43 PM
		</div>
		<div class="comment_text"><p>Hi, I come from the future. Since version 10, you can achieve something similar to wildcards with the 'exact' attribute set to false: cacheRemove("pages_",false,myRegion,false) will remove all caches within myRegion whose ids contains "pages_".</p></div>
	</div>
</div>
		
<div class="comment" id="c_2365264178">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2365264178">37</a> (In reply to <a href="#c_2364700498">#36</a>) by Raymond Camden
		posted on 11/17/2015 at 10:23 PM
		</div>
		<div class="comment_text"><p>Thanks for updating us!</p></div>
	</div>
</div>
		