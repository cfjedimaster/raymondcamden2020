
<div class="comment" id="c_1713615286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615286">1</a> by Mike Brunt
		posted on 1/9/2004 at 12:06 AM
		</div>
		<div class="comment_text"><p>Very nice Ray as always, thanks for all the support you give to the CF and other communities.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615287">2</a> by Tony
		posted on 1/9/2004 at 2:06 AM
		</div>
		<div class="comment_text"><p>Hey Ray... where can we get an updated version of this tag? Sounds great!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615296">3</a> by Raymond Camden
		posted on 1/9/2004 at 2:10 AM
		</div>
		<div class="comment_text"><p>Ah geeze. A link would help, wouldn't it? I'll edit the post and add the link. Please check again in 5 minutes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615292">4</a> by Tony
		posted on 1/9/2004 at 8:23 PM
		</div>
		<div class="comment_text"><p>Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615294">5</a> by Fiona
		posted on 3/25/2004 at 9:11 PM
		</div>
		<div class="comment_text"><p>Hi Ray, You mentioned that you are adding a size to your caching system. At the moment is there a limit that you would suggest for what you put in the cache. Should this tag be limited to just small items or could you use it for a large number of items of text and graphics etc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615290">6</a> by Raymond Camden
		posted on 3/29/2004 at 6:53 PM
		</div>
		<div class="comment_text"><p>Well, it is hard to give a hard and fast rule. In general, here are some thoughts:</p><p>You can cache to the session, however, if you site has a large # of users and large # of dynamic pages, you could quickly generate a HEAVY load in RAM. In that case, I wouldn't use scope cache, or only cache some items.</p><p>Note your average RAM usage BEFORE using ScopeCache. Then note it afterwards. If you see an impact, a bad impact, scale back your use of scopecache.</p><p>Hope this helps a tiny bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615303">7</a> by hungry
		posted on 3/22/2007 at 12:41 AM
		</div>
		<div class="comment_text"><p>i just started testing your scopecache tag in my app and REALLY like it...i was thinking it would be good to have a max number of items to try and limit the amount of ram (the app is going to be in a shared server environment) and just re-found your post mentioning the same...i think i might take a crack at it...just curiuos if you have any thoughts on the structure of such a function or if perhaps looking into using some of the ideas in softcache.cfc to do dynamic memory management (though i can't seem to find a working link for softcache.cfc).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615301">8</a> by Raymond Camden
		posted on 3/22/2007 at 4:35 AM
		</div>
		<div class="comment_text"><p>If you wanted to use a FIFO (first in/first out), then you would need to store the order of the items as they are inserted... or make scopeCache store when the item was created. I think it might do that now. Anyway that would let you remove the oldest when you have too many items. Just one idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615299">9</a> by KANDA
		posted on 4/18/2012 at 4:23 PM
		</div>
		<div class="comment_text"><p>Hi, sorry for very stupid question.<br>If I make a new structure inside this scopecache.</p><p>&lt;cf_scopecache name="test1" scope="application" timeout="#30*60#"&gt;<br>&lt;cfset application.test = structNew()&gt;<br>&lt;cfset a = 1&gt;<br>&lt;cfset b = 2&gt; etc....<br>&lt;/cf_scopecache&gt;</p><p>then... how do I call this structure ?<br>why can't I call it directly using #application.test#</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615304">10</a> by Raymond Camden
		posted on 4/18/2012 at 5:32 PM
		</div>
		<div class="comment_text"><p>That's not really a good use of scopecache. If you want to set application variables and set them once, I'd do one of:</p><p>1) In Application.cfm, have something like:<br>&lt;cfif not isDefined("application.test")&gt;<br>  &lt;cfset application.test = 1&gt;<br>&lt;/cfif&gt;</p><p>2) In Application.cfc, use onApplicationStart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615300">11</a> by KANDA
		posted on 4/18/2012 at 6:37 PM
		</div>
		<div class="comment_text"><p>THANKS a LOT for replying.</p></div>
	</div>
</div>
		