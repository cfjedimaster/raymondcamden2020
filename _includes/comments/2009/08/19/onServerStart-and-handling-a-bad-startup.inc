
<div class="comment" id="c_1713717822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717822">1</a> by Scott P
		posted on 8/20/2009 at 12:48 AM
		</div>
		<div class="comment_text"><p>yeah - I gotta agree with adam/adobe on that one - the server should always start.</p><p>one use case - adding the server dynamically to load balancer pools when it starts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717820">2</a> by Mike P
		posted on 8/20/2009 at 1:27 AM
		</div>
		<div class="comment_text"><p>Is this a cf9 function?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717805">3</a> by Raymond Camden
		posted on 8/20/2009 at 1:29 AM
		</div>
		<div class="comment_text"><p>@MikeP: Yes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717823">4</a> by Tim Cunningham
		posted on 8/20/2009 at 1:33 AM
		</div>
		<div class="comment_text"><p>We have other servers which may need to know if the CF server has started back up. For instance, we have an external credit card system that lets people pay their insurance bills online, that system can really only work if the coldfusion server for the insurance system is up and running. Currently we poll a heart beat service, but I suppose we could use the startup feature to send notice to the payment system that it is back in business.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717827">5</a> by JV
		posted on 8/20/2009 at 4:22 PM
		</div>
		<div class="comment_text"><p>We use this feature to define several server variables (datasource names, address of other systems to link to, etc), so we can move our apps between production, test, and development regions seemlessly.  It has been very useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717826">6</a> by Ben Nadel
		posted on 8/20/2009 at 9:48 PM
		</div>
		<div class="comment_text"><p>I always thought it was interesting, but never something that would solve a problem that I am currently experiencing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717824">7</a> by Adam Cameron
		posted on 8/21/2009 at 9:21 PM
		</div>
		<div class="comment_text"><p>Hi Ray<br>I think you're probably aware of my thoughts on this (via another channel), but I think there's use-cases for both notions that either the onServerStart handler is "fire and forget" (as it is) or "halt if it doesn't run".  However the way it currently is allows one to emulate the latter easily enough by setting SERVER.bStartedOk as the last step of the handler.  Slightly hokey, but enables both approaches.</p><p>My only use-case (so far) for onServerStart is to email me when it runs.  Purely because of the implication that if the server has just started... it must have stopped recently.  That's actually very important info to know, so just that by itself is enough validation for the functionality in my view.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717825">8</a> by Raymond Camden
		posted on 8/21/2009 at 9:23 PM
		</div>
		<div class="comment_text"><p>Yeah - you know, the more I think of it, the more I think I'll definitely put an email me cfc on this server itself (I'm running 9 here).</p></div>
	</div>
</div>
		