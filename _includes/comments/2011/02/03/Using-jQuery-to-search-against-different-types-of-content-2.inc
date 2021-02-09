
<div class="comment" id="c_1713729370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729370">1</a> by Dan G. Switzer, II
		posted on 2/4/2011 at 8:15 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>Well outside the scope of demos, one thing you out to at least mention (and possible cover) is using debouncing techniques when doing any event-based functionality that relies on AJAX operation. I wrote a blog entry a while back covering using debouncing techniques:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.pengoworks.com%2Findex.cfm%2F2009%2F3%2F24%2FManaging-JavaScript-eventsfunctions-using-debouncing%3Abg3K9ZK0jw1x9380akrATbj-Z_0&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.pengoworks.com/index.cfm/2009/3/24/Managing-JavaScript-eventsfunctions-using-debouncing">http://blog.pengoworks.com/...</a></p><p>What's really nice is it's very easy to implement the debounce technique using the function in my post. You just write your normal JS callback function, then append the debounce() method.</p><p>The benefit is that instead of firing off an AJAX event for every single keypress, you only fire off the AJAX request once until a certain delay is reached. This technique can drastically help to reduce unwanted AJAX calls to your server. It's even useful for click operations, because it can essentially "block" users who double-click on everything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729372">2</a> by Kevin Marino
		posted on 2/4/2011 at 8:46 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Very nice, something to add as footnote, is that something like this in its current form should probably not be used on high volume sites. One of the issues with the auto-complete AJAX/JS routines is that if no caching on client side exists you get huge amounts of query requests.</p><p>Facebook is the extreme example but that is how its handled. So if someone wants to do an auto-complete that is robust should look to the scripts out there that implement caching and incorporate your stuff into that.</p><p>Thanks and really appreciate your examples especially on the json data read. So tired of nebulous examples for plugins.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729375">3</a> by Raymond Camden
		posted on 2/4/2011 at 9:32 PM
		</div>
		<div class="comment_text"><p>@Dan: I didn't get it at first but damn that is slick. I'm going to do a follow up blog entry on this if you are cool with it.</p><p>@Kevin: Do you think Dan's suggestion would help? Also - caching could be used. I could remember what the results were for searching for "foo". If I remember just the generated string it shouldn't take up too much RAM.</p><p>So - how about I try adding _both_ your guys suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729371">4</a> by Dan G. Switzer, II
		posted on 2/4/2011 at 9:38 PM
		</div>
		<div class="comment_text"><p>@Ray:</p><p>Debouncing definitely helps reduce unneeded AJAX hits. I mean if someone types "smith" in 200ms, there's no reason to make 5 separate AJAX request. By debouncing the request, you limit the requests to just when there's some delay. It's a simple way to reduce overhead on what end up being unnecessary requests.</p><p>Obviously, caching on top of that takes it to another level (and most autocomplete plug-ins I've seen implement some form of caching.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729377">5</a> by Raymond Camden
		posted on 2/4/2011 at 9:40 PM
		</div>
		<div class="comment_text"><p>Well then I know what my lunch time blog entry will be. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729373">6</a> by Kevin Marino
		posted on 2/4/2011 at 10:42 PM
		</div>
		<div class="comment_text"><p>@Ray<br>Cool, will be interesting to see what you come up with in regards to caching.</p><p>@Dan,<br>Checked your debouncing. Nice, such an obvious thing, so of course never tried that. would definitely made a recent project much easier and now looking at incorporating into a new project. Thanks.</p><p>What interesting is that outfits like Facebook use a two tier system because of the large number of users. In FB case they focus on your friends first and then if you want wider search you have to go elsewhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729376">7</a> by Raymond Camden
		posted on 2/4/2011 at 11:40 PM
		</div>
		<div class="comment_text"><p>My initial stab (not online) isn't quite working. I append .debounce(2000) to the end of $.getJSON(....). I'm getting an error because the object has no method debounce.</p><p>Oh - I bet it's because jQuery's getJSON is chainable and returns jQuery itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729374">8</a> by Raymond Camden
		posted on 2/4/2011 at 11:41 PM
		</div>
		<div class="comment_text"><p>I also tried at the end of the keyup handler itself. It doesn't throw an error but doesn't pause either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729378">9</a> by Raymond Camden
		posted on 2/4/2011 at 11:55 PM
		</div>
		<div class="comment_text"><p>Next I tried the 'standalone' version and</p><p>$("#searchField").keyup(debounce(function() {<br>....<br>},2000);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729382">10</a> by Raymond Camden
		posted on 2/4/2011 at 11:56 PM
		</div>
		<div class="comment_text"><p>Nm - I think I got it now. Too many damn parenthesis. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729383">11</a> by Raymond Camden
		posted on 2/5/2011 at 12:00 AM
		</div>
		<div class="comment_text"><p>Slick. I've got this in along with a cache as well. 10 minutes total time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729384">12</a> by Kevin Marino
		posted on 2/5/2011 at 12:32 AM
		</div>
		<div class="comment_text"><p>@Ray - cool. yeah that is the one think with jQuery those parentheses can get crazy to follow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729385">13</a> by Jeremy Battle
		posted on 2/6/2011 at 1:05 AM
		</div>
		<div class="comment_text"><p>@Ray<br>I actually just did something really similar for the search of our galleries, using the indexes of photos and galleries.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fgo.cua.edu%2Fgalleries%2Findex.cfm%2Fsearch%3AuEDGr3KpbLwwsKCFY59Jm0BYrQ8&amp;cuid=3321886" rel="nofollow noopener" title="http://go.cua.edu/galleries/index.cfm/search">http://go.cua.edu/galleries...</a></p><p>I like the debounce idea mentioned above, another reason I'd implement it is because the search of the indexes can change rank of results slightly even though all the same records are returned, which can be a bit jarring. As an example you could try typing John Garvey in the search and play around deleting and adding the -ey at the end of the name.</p><p>Same results, different ordering. Seems like debouncing might help with that provided the user doesn't keep playing with the searches like I just suggested!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729381">14</a> by Raymond Camden
		posted on 2/6/2011 at 1:08 AM
		</div>
		<div class="comment_text"><p>@Jeremy: Well hopefully when I get my blog post up (thinking today - 3:10ish) it will help you with the debounce. I liked your demo - thanks for sharing it. I do so many POC (proof of concepts) that I rarely get to see things in production. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729387">15</a> by Raymond Camden
		posted on 2/7/2011 at 1:25 AM
		</div>
		<div class="comment_text"><p>Hmm, I think I see a problem guys. When I type quickly, let's say AB, because only "A" is fired off, the results you see are not limited to AB matches but rather just A. Any ideas how to solve that? Can debounce be made to call itself again after the period? Ie, given N the debounce period: One event 1, we fire and begin the N count. On the second, 3rd, etc, we do not fire, BUT, we set a flag saying after N, go ahead and fire again. So if I typed ABC quickly, I'd get the initial fire for A, BC would wait for N to run, and when N is done, we would fire with ABC.</p><p>Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729386">16</a> by Raymond Camden
		posted on 2/7/2011 at 1:27 AM
		</div>
		<div class="comment_text"><p>Ok, I stand corrected. The code handles it perfectly. When I quickly type AB, it waits and fires off AB.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729389">17</a> by Raymond Camden
		posted on 2/7/2011 at 1:56 AM
		</div>
		<div class="comment_text"><p>Updated blog entry:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2011%2F2%2F6%2FUsing-jQuery-to-search-against-different-types-of-content-3%3APIabuP5ExQdLqKNJQo47fJOuqzE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2011/2/6/Using-jQuery-to-search-against-different-types-of-content-3">http://www.coldfusionjedi.c...</a></p><p>Guys - as always - thank you for sharing your ideas!</p></div>
	</div>
</div>
		