
<div class="comment" id="c_1713713351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713351">1</a> by shag
		posted on 2/21/2009 at 3:46 AM
		</div>
		<div class="comment_text"><p>@ray, wouldn't adding sort="DATELASTMODIFIED asc" to cfdirectory, make it work even if images are added later?  it wouldn't work if you modified an image, but that is less likely since it is on a server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713350">2</a> by Raymond Camden
		posted on 2/21/2009 at 4:20 AM
		</div>
		<div class="comment_text"><p>Good point!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713349">3</a> by Andy Sandefer
		posted on 2/22/2009 at 6:50 AM
		</div>
		<div class="comment_text"><p>@shag,<br>Why would you mention that tip?  Have you forgotten what blog you're reading?<br>This is <a href="http://disq.us/url?url=http%3A%2F%2FjQueryJedi.com%3ASazHC2IBExSX3V4Po3UJ1uBiGH8&amp;cuid=3321886" rel="nofollow noopener" title="jQueryJedi.com">jQueryJedi.com</a></p><p>LOL</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713354">4</a> by Raymond Camden
		posted on 2/22/2009 at 8:25 AM
		</div>
		<div class="comment_text"><p>Hey now, at least this entry is CF+JS. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713345">5</a> by Josh Orvis
		posted on 3/3/2009 at 9:38 AM
		</div>
		<div class="comment_text"><p>This is a bit off-topic, but instead of adding a bunch of console.log statements only to remove them later, you could consider using a CFM file in place of your JS file so that you can toggle parts of your JS code on &amp; off with application or session vars.</p><p>For example: &lt;cfif application/session.isDebugModeActive&gt;console.log('init')&lt;/cfif&gt;</p><p>Just set the isDebugModeActive flag to true in your dev environment and false in production.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713335">6</a> by Ameen
		posted on 4/14/2009 at 10:02 PM
		</div>
		<div class="comment_text"><p>Is there a way in ColdFusion to get the hash part of URL? <br>So if requested URL is<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.something.com%2Ftext.cfm%3Fid%3D150%2312%3A9p69tRsOPiuYfw66KQYu1VH_Xcc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.something.com/text.cfm?id=150#12">http://www.something.com/te...</a></p><p>I can get the hash part "12" and do some proper action in CF before rendering the page to the client.</p><p>Or only URL hash can only be handled in JS?</p><p>Ameen</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713347">7</a> by Raymond Camden
		posted on 4/14/2009 at 10:03 PM
		</div>
		<div class="comment_text"><p>Not as far as I know. It is a 100% client-side-only visible thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713355">8</a> by Ameen
		posted on 4/14/2009 at 10:34 PM
		</div>
		<div class="comment_text"><p>Thanks man.</p></div>
	</div>
</div>
		