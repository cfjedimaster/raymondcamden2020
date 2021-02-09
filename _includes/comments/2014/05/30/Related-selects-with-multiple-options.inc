
<div class="comment" id="c_1714083035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083035">1</a> by Guy
		posted on 5/31/2014 at 4:51 AM
		</div>
		<div class="comment_text"><p>Thanks, Raymond! One question: what do I need to change if I'm running CF9 or CF10?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083038">2</a> by Raymond Camden
		posted on 5/31/2014 at 5:19 AM
		</div>
		<div class="comment_text"><p>queryExecute is CF11. To use it in 10 or 9, you would need the query CFC we shipped with those versions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083037">3</a> by Phillip Senn
		posted on 5/31/2014 at 6:40 PM
		</div>
		<div class="comment_text"><p>Ah, I see you're using the new url.queryformat="struct"; that you mentioned earlier.<br>But my takeaway from that earlier blog post was that the older url.queryformat="column" was leaner.</p><p>Can you write a version of this in Railo? (Kind of being funny, but kind of being serious too).<br>I've found that I can't use res[i].CITY any longer but instead must refer to DATA[0].<br>I might have missed something in converting my ColdFusion personal project to Railo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083039">4</a> by Raymond Camden
		posted on 5/31/2014 at 7:30 PM
		</div>
		<div class="comment_text"><p>"But my takeaway from that earlier blog post was that the older url.queryformat="column" was leaner." It can be, yes, but the question is, does it matter, and would you rather have something easier to use on the client side. In most cases, I'm going to prefer the easier to use format.</p><p>"Can you write a version of this in Railo? (Kind of being funny, but kind of being serious too)."<br>Nope. :)</p><p>"I've found that I can't use res[i].CITY any longer but instead must refer to DATA[0]."<br>If you like the nicer array format, you can do it in the CFC in a utility method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083040">5</a> by Guy
		posted on 6/3/2014 at 6:18 AM
		</div>
		<div class="comment_text"><p>Thanks for the help, Raymond. I was able to translate the queryExecute statement to one using the query CFC. It generates a correct JSON result (can see it in in the HTML tab of the XHR tab in Firebug) as I choose the different states. But, for some reason it's not updating the City dropdown. It seems that the result is not getting passed to the res function in the javascript. I know it gets into that function (tested with a simple alert), but nothing seems to be in the array. Is there something about how ajax works in CF11 that has changed, also? Or, any other hints?</p><p>Guy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083043">6</a> by Raymond Camden
		posted on 6/3/2014 at 6:25 AM
		</div>
		<div class="comment_text"><p>Yes - CF11 introduced a new way to return JSON data of queries - as an array of structs. You can't do that in CF10 unless you write code to convert the query into an array of structs and THEN return it to the caller.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083042">7</a> by Guy
		posted on 6/3/2014 at 9:03 AM
		</div>
		<div class="comment_text"><p>Thanks. Your solution is very elegant, which is what appealed to me in the first place. But for my situation (ISP on an older version of CF), I think this is getting to the point where I wait for the upgrade. Just not as straight forward in my environment. Maybe when I have more time. Thanks for yours.</p></div>
	</div>
</div>
		