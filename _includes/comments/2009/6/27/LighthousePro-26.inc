
<div class="comment" id="c_1713716385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716385">1</a> by Derek
		posted on 8/4/2009 at 3:18 AM
		</div>
		<div class="comment_text"><p>So, I was trying to find a forum to post about this, but didn't find any, so here I am. How can I use the email fetcher with gmail since it needs SSL and port 995?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716394">2</a> by Raymond Camden
		posted on 8/4/2009 at 4:47 AM
		</div>
		<div class="comment_text"><p>You can actually post issues to the LHP project at RIAForge. But as to your question - right now - you can't. CF can't easily do it so it just won't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716396">3</a> by Derek
		posted on 8/4/2009 at 4:59 AM
		</div>
		<div class="comment_text"><p>ya, i didn't want to post it as an issue. but that answers it anyway. I thought cf8 had better support for ssl/tsl mail?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716395">4</a> by Raymond Camden
		posted on 8/4/2009 at 5:23 AM
		</div>
		<div class="comment_text"><p>As far as I know, it's just for send, not pop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716397">5</a> by Jean
		posted on 9/23/2009 at 6:15 PM
		</div>
		<div class="comment_text"><p>The install instructions mention a default.cfm file and I am feeling midly retarded because I cannot find it in the lighthouse repository. Did you mean you should add it in the config file along with the other xml config files?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716401">6</a> by Raymond Camden
		posted on 9/23/2009 at 6:20 PM
		</div>
		<div class="comment_text"><p>Jean, this is 100% my fault. When I switched LHP to use Model-Glue, I did NOT update the install doc. THe settings are now in the ColdSpring.xml file in config. Let me know if this doesn't help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716391">7</a> by Ian Turton
		posted on 10/12/2009 at 10:55 PM
		</div>
		<div class="comment_text"><p>Upgraded my 2.4 version, and all seemed OK until I dug a bit deeper. Issues I've had also appear on a brand new install on a separate machine...</p><p>1. The link back to an issue from an notification email doesn't include the project id (as 'pid'). Other links inside lhp e.g. homepage and project issue list *do* include it. Suffice it to say it breaks (on my setups) without it, not prefilling owner and area (since project.getId is returning 0). I can fix this myself, but wanted to know if it's actually a setup issue.</p><p>2. The AJAX search on the project list page doesn't work if Coldfusion debugging is switched on (even though the JSON returned is free of any debug output). Again an easy fix, but took a while for me to fathom out the problem.</p><p>3. IE8 problem (well, it's okay on FF3) Trying to delete a Milestone - get javascript error 'document.listing.mark.length' is null or not an object'.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716392">8</a> by Raymond Camden
		posted on 10/13/2009 at 7:10 AM
		</div>
		<div class="comment_text"><p>These all sound like valid issues, but can you please log them at the bug tracker? Please visit: <a href="http://disq.us/url?url=http%3A%2F%2Flighthousepro.riaforge.org%3ABPCiOWizYItOssY782xURXLr5YU&amp;cuid=3321886" rel="nofollow noopener" title="http://lighthousepro.riaforge.org">http://lighthousepro.riafor...</a></p></div>
	</div>
</div>
		