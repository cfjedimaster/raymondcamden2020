
<div class="comment" id="c_1713619902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619902">1</a> by Ken
		posted on 8/10/2005 at 8:25 PM
		</div>
		<div class="comment_text"><p>Session sharing is automatic between the Jrun servers, right? Perhaps a non-database solution, then, is to let the tail wag the dog. When the user changes the background color, the change should be made in the session scope, not the application scope. Have the session scope contain a "dirty" flag, along with a container of some sort (a transfer-object, I suppose) holding details of the requested change.</p><p>When the application sees the "dirty flag," it knows there's a pending message requesting an application variable change. The container holding the request is parsed, compared to the current application variable, and (if needed) the application variable is updated accordingly. So we end up with a sort of implicit invocation message-passing system whereby the application var sets itself based on a message planted in the session.</p><p>Since the session is hopefully replicated automatically to the other server via Jrun, the other server will also pick up the change and adjust its application scope accordingly. If you want to get fancy, you could add serial numbers or UUID version stamping to manage concurrency, prevent feedback loops, etc.</p><p>Just a thought.</p><p>-Ken</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619897">2</a> by Raymond Camden
		posted on 8/10/2005 at 8:32 PM
		</div>
		<div class="comment_text"><p>Ken, a problem with this. If I set a flag in the session scope, then yes it may exist on server B, but only in my scope. If I don't hit server B, it won't be reflected. I'd have to manually go to B, at which point the code there would see the dirty flag in my session scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619899">3</a> by Ken
		posted on 8/10/2005 at 8:54 PM
		</div>
		<div class="comment_text"><p>Hm... that's a good point.</p><p>Here's a question: even if you don't end up on server B, aren't the servers still exchanging session data? If so, that means the "change packet" does exist on server B shortly after it's added on server A -- albeit without the animating force of your actually hitting server B. So perhaps it's a matter of building a sort of "listening service" that directly inspects session scopes on the server, looking for that dirty-flag message...</p><p>-Ken</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619898">4</a> by EdG
		posted on 8/10/2005 at 9:34 PM
		</div>
		<div class="comment_text"><p>back in the pre-JRun days we built an app that was designed to run on a dumb, round-robin DNS cluster. the machines knew nothing about one another.</p><p>when each CF instance was started up, code in the server's application file would register the server's existence with the central DB, logging a unique identifier like IP/instance name/hostname along with last updated time. periodically each server could be set to 'check in' with the 'registered servers' DB to let the DB know that the server was still running OK.</p><p>a couple of alternatives were considered to kick off the update: either a flag was set in the table to tell the other 'live' servers to update themselves (recurrent DB overhead as each server checked in) or something like a CFHTTP/Web Services call was looped across the IPs of all other servers in the 'registered servers' table to tell each server about the new data.</p><p>it's pretty much an amalgamation of the two techniques you'd already highlighted. it worked well anyhow - the app's still alive 4 years on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619900">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619900">5</a> by Tony Petruzzi
		posted on 8/10/2005 at 10:46 PM
		</div>
		<div class="comment_text"><p>I'll chime in with my two cents (I expect change).</p><p>I've done this numerous times before and the only solution I've found is to do it manually. That is to write and retrieve the settings from a database or other shared resource. After retrieving the information you can then write the information to scope variables on each server.</p><p>This to me is the safest way for all the servers in the cluster to get the same information.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619901">6</a> by HKS
		posted on 8/11/2005 at 3:45 AM
		</div>
		<div class="comment_text"><p>This is a problem that we are facing as well. The particular scenario we face is that we have a cluster of three or four servers, (running a big CMS) in 'normal' (not J2EE) mode, with a load balancer in front.</p><p>Now the thing is, our load has reached the point where it's starting to get impractical to get impractical to render each page fresh from the database.</p><p>We have  a caching system for html fragments, but at the moment, we are using a shared folder between the machines, and the performance gain of that is dubious (Filesystem access vs db access).</p><p>We need to try and move the cache to memory, but then, update propagation becomes the problem:</p><p>Problem one: How do you propagate an update? Fire off a TO with the new information? Or just a note to say invalidate the updated entry, and refresh it itself?</p><p>Problem two: What topology would you use to coordinate the updates? Peer to Peer? Or have a master cache server, with the other servers using the master cache for data access instead of querying the database directly? Or should the master cache be just a controller, relaying messages, and the servers should do their own data access?</p><p>Problem three: My concern with using web services is the extra overhead of throwing all that XML around. I'm thinking it might be quicker to send things around using JMS, but how does one go about hooking that into coldfusion?</p><p>Or am I overengineering the whole thing, and there's a simpler way to do this?</p><p>Apologies if I'm going off at a tangent, but this is a problem that I've been thinking about for a while, and you've just provided a way for me to let it out :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619903">7</a> by Trygve
		posted on 8/12/2005 at 5:45 AM
		</div>
		<div class="comment_text"><p>We do this today with complex structures of arrays by using WDDX and a timer.</p><p>Every minute the first server (cf5) serialize the application structure into a WDDX-package, and the second server (cf7) collects it by a cfhttp-call. Of course, this causes the data only to be updated every minute on the second server, but it's not a big problem.</p><p>It works surprisingly well, and we have 8 000 000 page impressions weekly on these two servers. No problems to date.</p></div>
	</div>
</div>
		