
<div class="comment" id="c_1713745429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745429">1</a> by Shawn
		posted on 3/29/2013 at 11:59 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FYGeczdqz%3A7PlzMwRWJzBpLweTHDFlaHeOufI&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/YGeczdqz">http://pastebin.com/YGeczdqz</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745441">2</a> by Raymond Camden
		posted on 3/30/2013 at 12:11 AM
		</div>
		<div class="comment_text"><p>Woot. Someone tried it. :) Now I'm going to get picky.</p><p>isSorted: The name bugs me as it implies a boolean result. I'd have maybe gone with getSortType.</p><p>I find it interested you check for multiple sort types and return them all. I didn't expect that, and that's kinda cool.</p><p>Frankly, your solution is perfect. I swear - I didn't even think of just doing a compare. Awesome.</p><p>Finally, damn good job on handling the 1 item and empty length items. I forgot those in my test inputs. Smart.</p><p>Finally (2) - you sure you need that if? You can still list sort a 1 character string. It's dumb, but you can.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745446">3</a> by Shawn
		posted on 3/30/2013 at 12:18 AM
		</div>
		<div class="comment_text"><p>Yeah, the function name isn't the best for the reason you mentioned.</p><p>Good point on the extra cases that were added. I guess sorting a one element list didn't seem right so I didn't think to just let it go through the normal process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745444">4</a> by Russ
		posted on 3/30/2013 at 1:19 AM
		</div>
		<div class="comment_text"><p>I'd like to see what solutions people come up with for large datasets...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745443">5</a> by Raymond Camden
		posted on 3/30/2013 at 1:22 AM
		</div>
		<div class="comment_text"><p>Heh, well Russ, maybe folks will chime in. I normally get a bit more participation on these puzzlers, but I forgot it was Good Friday. I'm thinking many people are off today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745448">6</a> by AXL
		posted on 3/30/2013 at 10:11 AM
		</div>
		<div class="comment_text"><p>(~?~)-zzZ</p><p>JavaScript:<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FGK1RfEy0%3ASSXbPGDVpPmnZrL4NLJsDlCTmYs&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/GK1RfEy0">http://pastebin.com/GK1RfEy0</a></p><p>ColdFusion:<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FeuF4eRh6%3Atjkfsaay2N53fJT5sUpfbMlBUCQ&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/euF4eRh6">http://pastebin.com/euF4eRh6</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745449">7</a> by AXL
		posted on 3/30/2013 at 11:11 AM
		</div>
		<div class="comment_text"><p>Isn't this a bug?<br>I just ran this with ColdFusion 10 with Update 8.</p><p>&lt;cfscript&gt;<br>  s = "c,C,b,B,a,A";<br>  desc = listSort(s, "textnocase", "desc");<br>  writeoutput(desc);<br>&lt;/cfscript&gt;</p><p>The result should be the same as the value of "s" instead of "C,c,B,b,A,a."</p><p>"textnocase" with "asc" works just fine though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745451">8</a> by AXL
		posted on 3/30/2013 at 11:34 AM
		</div>
		<div class="comment_text"><p>I guess it's not a bug.</p><p>Here is from the official documentation.<br><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F10.0%2FCFMLRef%2FWSc3ff6d0ea77859461172e0811cbec22c24-7ef2.html%3AEmOq86Cp1jqDCj1x0RtsfblPK5c&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/10.0/CFMLRef/WSc3ff6d0ea77859461172e0811cbec22c24-7ef2.html">http://help.adobe.com/en_US...</a></p><p>For example, in a textnocase, desc sort of d,a,a,b,A, the following occurs:</p><p>ColdFusion MX returns d,b,A,a,a<br>Earlier ColdFusion releases return d,b,a,a,A</p><p>Weird. It's not case-insensitive then.</p><p>arraySort with "textnocase" and "desc" too.</p><p>Do you know why?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745455">9</a> by Raymond Camden
		posted on 3/30/2013 at 5:25 PM
		</div>
		<div class="comment_text"><p>I disagree. It is case-insensitive in that the "A"s  show up in their proper place. They are after the d. But internally, they happen to be sorted themselves, and that changed in MX.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745452">10</a> by Russ
		posted on 3/31/2013 at 12:17 AM
		</div>
		<div class="comment_text"><p>Here is my JS solution: <a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Frussplaysguitar%2F5278189%3AxWVUpOyviyGy0SFrwUqWz8EVNN0&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/russplaysguitar/5278189">https://gist.github.com/rus...</a></p><p>It is written in FP-style using Underscore.js and should work well for large datasets. Let me know what you think!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745457">11</a> by AXL
		posted on 3/31/2013 at 10:19 PM
		</div>
		<div class="comment_text"><p>This should work better than my previous one.<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FvQ5dqbZ3%3ASe_Hkd8GbX7_3jQGgjMnZImQnPc&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/vQ5dqbZ3">http://pastebin.com/vQ5dqbZ3</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745456">12</a> by Raymond Camden
		posted on 4/1/2013 at 6:09 AM
		</div>
		<div class="comment_text"><p>Fascinating Russ and AXL. Thank you for sharing these.</p></div>
	</div>
</div>
		