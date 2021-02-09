
<div class="comment" id="c_1713724161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724161">1</a> by Raymond Camden
		posted on 9/7/2010 at 10:27 PM
		</div>
		<div class="comment_text"><p>For those who run into this and the above link does not work (it worked for me the first time on a laptop, but not on my new Win7 desktop), try this suggestion from Pete Freitag:</p><p>You could try removing these lines from the ehcache.xml file:</p><p>&lt;cacheManagerPeerProviderFactory<br>           class="net.sf.ehcache.distribution.RMICacheManagerPeerProviderFactory"<br>           properties="peerDiscovery=automatic,<br>                       multicastGroupAddress=230.0.0.1,<br>                       multicastGroupPort=4446, timeToLive=1"<br>           propertySeparator=","<br>           /&gt;</p><p>&lt;cacheManagerPeerListenerFactory<br>           class="net.sf.ehcache.distribution.RMICacheManagerPeerListenerFactory"/&gt;</p><p>It worked for me.</p></div>
	</div>
</div>
		