
<div class="comment" id="c_1713736359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736359">1</a> by Phillip Senn
		posted on 11/9/2011 at 8:24 PM
		</div>
		<div class="comment_text"><p>Thank you Raymond!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736358">2</a> by Doug
		posted on 11/9/2011 at 8:53 PM
		</div>
		<div class="comment_text"><p>That's awesome.</p><p>I just had that same issue the other day where the text had those annoying windows-only left and right single quotes breaking an XML page I had.  Fortunately Firefox told me exactly where the incorrect character was.  And then the next and then the next. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736366">3</a> by Michael
		posted on 11/9/2011 at 9:06 PM
		</div>
		<div class="comment_text"><p>Could you share the fix for the JSON encoding? Was it basically just filtering out non-printable ASCII characters? Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736364">4</a> by Raymond Camden
		posted on 11/9/2011 at 9:09 PM
		</div>
		<div class="comment_text"><p>2 steps.</p><p>I went ahead and added Ben Nadel's cleanHighAscii UDF: <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F1155-Cleaning-High-Ascii-Values-For-Web-Safeness-In-ColdFusion.htm%3A2t7QyFTsICkAFSxiRIgiOrGSvCw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/1155-Cleaning-High-Ascii-Values-For-Web-Safeness-In-ColdFusion.htm">http://www.bennadel.com/blo...</a></p><p>But that didn't catch the vertical tag. So I just added a quick replace to change all chr(11) to "".</p><p>If you get Lighthouse Pro from RIAForge in 5 minutes, it will be there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736361">5</a> by Adam Tuttle
		posted on 11/9/2011 at 9:12 PM
		</div>
		<div class="comment_text"><p>Vertical tabs are nasty little buggers. I ran into them when building upon a regex Ben Nadel posted for cleaning high ascii values:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F1155-Cleaning-High-Ascii-Values-For-Web-Safeness-In-ColdFusion.htm%23comments_29680%3AtPg4LdLGXDvsUJpPw7VaciAT1g8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/1155-Cleaning-High-Ascii-Values-For-Web-Safeness-In-ColdFusion.htm#comments_29680">http://www.bennadel.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736365">6</a> by Adam Tuttle
		posted on 11/9/2011 at 9:14 PM
		</div>
		<div class="comment_text"><p>Ray, if you use the regex from my comment linked above, you shouldn't have any problems with non-printable characters showing up. By using Ben's original Regex and the additional replace of chr(11) you're still vulnerable to a few more. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736367">7</a> by Raymond Camden
		posted on 11/9/2011 at 9:14 PM
		</div>
		<div class="comment_text"><p>@Adam - wow - see my comment above. "Smart minds..."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736360">8</a> by Bill Downs
		posted on 11/9/2011 at 9:48 PM
		</div>
		<div class="comment_text"><p>Good stuff Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736362">9</a> by Dermot McEvoy
		posted on 11/10/2011 at 2:58 PM
		</div>
		<div class="comment_text"><p>Great tip Ray, thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736363">10</a> by Ben B
		posted on 11/11/2011 at 11:40 PM
		</div>
		<div class="comment_text"><p>I like the JSON parser -- should come in handy.</p></div>
	</div>
</div>
		