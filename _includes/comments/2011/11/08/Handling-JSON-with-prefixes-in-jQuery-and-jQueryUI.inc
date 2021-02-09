
<div class="comment" id="c_1713736322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736322">1</a> by matt
		posted on 11/9/2011 at 8:07 AM
		</div>
		<div class="comment_text"><p>Maybe this is the wrong way to go about it, but you can turn off JSON prefixes in the CF admin, wouldn't that achieve the same result?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736344">2</a> by Raymond Camden
		posted on 11/9/2011 at 8:33 AM
		</div>
		<div class="comment_text"><p>Right, but in this case, the prefix is out of the end user's control. (I don't think he is even using ColdFusion.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736345">3</a> by Lola LB
		posted on 11/9/2011 at 5:12 PM
		</div>
		<div class="comment_text"><p>There's a missing file -</p><p>File not found: /demos/2011/nov/8/test4.cfm</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736341">4</a> by Raymond Camden
		posted on 11/9/2011 at 5:27 PM
		</div>
		<div class="comment_text"><p>Where do you see that link?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736346">5</a> by Raymond Camden
		posted on 11/9/2011 at 5:28 PM
		</div>
		<div class="comment_text"><p>Oh, you submitted the form. Don't do that. ;) I removed it from the action in the source above - not from the demo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736342">6</a> by Jon Briccetti
		posted on 11/11/2011 at 9:43 PM
		</div>
		<div class="comment_text"><p>Great info - can you explain what the JSON has to be prefixed - I've heard about doing this and have similar requirements with some clients. It makes sense in a way that the data feed can't just be thrown on the right hand side of an equals sign and "executed" as an expression; that could make the browser vulnerable to an exploit if a nasty expression got injected (if the Ajax call got hijacked) So it seems to me that the setup function should do more than just remove the prefix, but should also (first) validate the data is 1) from where it is supposed to be and 2) is structurally sound. but I'm speculating. Any thoughts on this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736340">7</a> by Raymond Camden
		posted on 11/11/2011 at 10:17 PM
		</div>
		<div class="comment_text"><p>I'm not sure if you _could_ detect a network hijack of some sort. It would seem impossible to me!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736343">8</a> by Shaun Byrnes
		posted on 7/11/2012 at 2:06 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Good post. This is probably slightly better code to use:</p><p>$.ajaxSetup({<br>  dataFilter: function(data, type){<br>    return type == 'json' ? data.replace(/^(\/{2})?/, '') : data; <br>  }<br>});</p><p>Just to ensure that other response types are not messed with and the // is only removed if it exists - otherwise if that setting was updated for whatever reason it would removed part of the real response.</p><p>-s</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736347">9</a> by Raymond Camden
		posted on 7/11/2012 at 5:42 PM
		</div>
		<div class="comment_text"><p>@Shaun: Nice! Yeah, I agree that makes more sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736348">10</a> by Shaun Byrnes
		posted on 7/12/2012 at 3:37 AM
		</div>
		<div class="comment_text"><p>No problem</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736351">11</a> by Steve
		posted on 3/19/2013 at 8:08 PM
		</div>
		<div class="comment_text"><p>I just started wrestling with this today as I'm working on converting a large site from CF 8 to CF 10.  Where my code is all CF I've got my modifications in place.  However where it's jQuery with the validate plugin I'm having a problem.  I can't see any indication that the ajaxSetup() is doing anything to the response.  I put the relevant jQuery code up at pastebin (<a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FGu21uQZ8%29%3Atv-uVo62vrh6lE0IdiMGGD0V6dw&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/Gu21uQZ8)">http://pastebin.com/Gu21uQZ8)</a>.  I'm guessing I'm going about this completely wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736353">12</a> by Raymond Camden
		posted on 3/20/2013 at 5:41 AM
		</div>
		<div class="comment_text"><p>As far as I know, ajaxSetUp is *global*, so every plugin that uses XHR should use it. Your code looks right to me. Is this online where I can run it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736352">13</a> by Raymond Camden
		posted on 3/20/2013 at 5:44 AM
		</div>
		<div class="comment_text"><p>I just found a blog post that indicated that jQuery Validate may break ajaxSetup. I'm trying to confirm now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736350">14</a> by Raymond Camden
		posted on 3/20/2013 at 5:49 AM
		</div>
		<div class="comment_text"><p>I think it may be the validate plugin. Try copying dataFilter argument to the remote block.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736355">15</a> by GEH
		posted on 4/24/2013 at 12:52 AM
		</div>
		<div class="comment_text"><p>Thank you, thank you, thank you!  While I did need the information about the json prefix (thank you!), what really saved my day was the comment about the network monitor. I've been using the Chrome developer resource for years, but never drilled far enough down in that panel to see that it returned the information I needed.</p><p>I had been having trouble with a CFC that was being called with jQuery and was supposed to reurn json, and it worked  fine on my local system, but wasn't working at all on the remote server. I had written debug info into the CFC code at strategic spots to be written to a file, but the file wasn't being written either, and I was flying blind and getting very frustrated.</p><p>But after seeing your reference to the network monitor I was able to have the component return a comprehensive error message in that window.  Thank you SO much! You have saved me from hours of hair pulling.  You're awesome. Have a great day!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736356">16</a> by Raymond Camden
		posted on 4/24/2013 at 1:04 AM
		</div>
		<div class="comment_text"><p>Glad it helped. Check out this other resource for learning about DevTools: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F3%2F21%2FNew-online-material-for-Chrome-DevTools%3A_6uyzTNYXhpLzeNf3riiasvSayQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/3/21/New-online-material-for-Chrome-DevTools">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		