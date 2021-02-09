
<div class="comment" id="c_1713620915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620915">1</a> by Raymond Camden
		posted on 9/23/2005 at 3:26 AM
		</div>
		<div class="comment_text"><p>FYI, TBing my site does NOT clear the cache. Will fix that later on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620916">2</a> by Rob Brooks-Bilson
		posted on 9/23/2005 at 5:27 PM
		</div>
		<div class="comment_text"><p>Does it make sense to list trackbacks first, or comments?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620918">3</a> by Raymond Camden
		posted on 9/23/2005 at 5:31 PM
		</div>
		<div class="comment_text"><p>You know, I don't know. I think comments maybe _should_ be first, although on other blogs I've seen TB first.</p><p>Let's take a vote. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620919">4</a> by Ben Forta
		posted on 9/23/2005 at 6:18 PM
		</div>
		<div class="comment_text"><p>Make it configurable, of course! :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620924">5</a> by Raymond Camden
		posted on 9/23/2005 at 6:20 PM
		</div>
		<div class="comment_text"><p>Well - that I'm not so sure about. I don't want the INI to get -too- complex. I'd rather make my client code a bit easier to modify. I'd love to get it into a nice template system, with crap like</p><p>%entryTitle%<br>%entryBody%</p><p>%comments%</p><p>But that may be more a BlogCFC 5.0 thing. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620925">6</a> by Ben Forta
		posted on 9/23/2005 at 6:25 PM
		</div>
		<div class="comment_text"><p>Ah, I am all for making things as runtime configurable as possible. Guess we'll have to agree to disagree.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620926">7</a> by Pete Freitag
		posted on 9/23/2005 at 8:05 PM
		</div>
		<div class="comment_text"><p>Cool - so where's the trackback url? I see you can enter the trackback via a form post, thats cool. Most blog software  that support trackbacks let you enter a trackback url's when you do a post.</p><p>BTW I have a few entries on implementing trackbacks in my blog here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.petefreitag.com%2Ftag%2Ftrackbacks%3AuSUjzHCcD4vsTD21ywWw4ILYyGk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petefreitag.com/tag/trackbacks">http://www.petefreitag.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620928">8</a> by Raymond Camden
		posted on 9/23/2005 at 8:14 PM
		</div>
		<div class="comment_text"><p>The trackback URL is missing - it is on my list to add. Basically it should be</p><p>myhost/track.cfm?XXXXXXX</p><p>where XXXXXX is the UUID of the post. Which is hidden now due to my SES URLs. :) So I definitely need to work on it a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620929">9</a> by Dave
		posted on 9/26/2005 at 4:59 PM
		</div>
		<div class="comment_text"><p>Ray, quick note, the Javascript Name for both your Comments window and Trackback window are the same causing one to overwrite the other upon open.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620932">10</a> by Raymond Camden
		posted on 9/26/2005 at 5:10 PM
		</div>
		<div class="comment_text"><p>I think I prefer that actually Dave. FYI, a new alpha will be on soon. I'm adding Print format support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620931">11</a> by Dave
		posted on 9/26/2005 at 5:14 PM
		</div>
		<div class="comment_text"><p>Ok I wasn't sure but I thought I'd just mention it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620934">12</a> by Ian Winter
		posted on 9/28/2005 at 12:09 AM
		</div>
		<div class="comment_text"><p>On a feature note for v2, any thought to added support for <a href="http://disq.us/url?url=http%3A%2F%2Fdel.icio.us%3ATFCVT1TLM3gIVvhu7UvDqoNlAOY&amp;cuid=3321886" rel="nofollow noopener" title="del.icio.us">del.icio.us</a>. I mean in the sense of ability to tag post, not pinching the idea but like Pete Frietag has done on his blog?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620933">13</a> by Pete Freitag
		posted on 9/28/2005 at 5:29 AM
		</div>
		<div class="comment_text"><p>Just to clarify I don't use <a href="http://disq.us/url?url=http%3A%2F%2Fdel.icio.us%3ATFCVT1TLM3gIVvhu7UvDqoNlAOY&amp;cuid=3321886" rel="nofollow noopener" title="del.icio.us">del.icio.us</a> to tag my posts, that is all stored in my db. I simply provide a link for people to bookmark an entry on <a href="http://disq.us/url?url=http%3A%2F%2Fdel.icio.us%3ATFCVT1TLM3gIVvhu7UvDqoNlAOY&amp;cuid=3321886" rel="nofollow noopener" title="del.icio.us">del.icio.us</a>.</p></div>
	</div>
</div>
		