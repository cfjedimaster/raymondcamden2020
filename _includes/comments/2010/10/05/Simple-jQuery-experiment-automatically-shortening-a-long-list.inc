
<div class="comment" id="c_1713726783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726783">1</a> by Elena
		posted on 10/5/2010 at 9:50 PM
		</div>
		<div class="comment_text"><p>The demo doesnt seem to work, Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726779">2</a> by Raymond Camden
		posted on 10/5/2010 at 9:51 PM
		</div>
		<div class="comment_text"><p>Because - once again - I left a darn console.log in. Try in 60 seconds. Sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726770">3</a> by Thor79
		posted on 10/5/2010 at 10:38 PM
		</div>
		<div class="comment_text"><p>Interesting bit of code. Not sure I'll use it immediately but it did spark an idea on how to handle something in the website redesign I'm doing now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726784">4</a> by David Herman
		posted on 10/5/2010 at 11:14 PM
		</div>
		<div class="comment_text"><p>Also if you do a .live you won't have to re-bind this if you dynamically add a list of this nature to your page :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726785">5</a> by David Hammond
		posted on 10/5/2010 at 11:19 PM
		</div>
		<div class="comment_text"><p>jQuery is addictive :-)  And every time I think "there ought to be a selector for that", there usually already is.  A possible improvement to your script would be to replace your for loop with the :gt selector.<br>kids.filter(":gt(9)").hide()<br>Or, actually, now that I have looked through the jQuery docs some more:<br>kids.slice(10).hide()<br>Though slicing kids sounds extremely cruel.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726782">6</a> by Raymond Camden
		posted on 10/5/2010 at 11:29 PM
		</div>
		<div class="comment_text"><p>@Dave: True - if I used a class instead of an ID, then I could make this work for N lists.</p><p>@David: Dude - awesome. I knew of gt, but I did not think I could apply it here - but your syntax makes perfect sense. When I do the plugin version I'll use it - take credit - and rule the world!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726781">7</a> by Matt Gutting
		posted on 10/6/2010 at 4:52 PM
		</div>
		<div class="comment_text"><p>@David: What if we changed from<br>var kids = item.children();<br>kids.slice(10).hide()</p><p>to<br>var anklebiters = item.children();</p><p>Would that change your mind about slicing? ;-)</p><p>I agree with you - I don't use jQuery nearly as much as I could, and every time I look there's more I could use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726786">8</a> by David Hammond
		posted on 10/6/2010 at 5:43 PM
		</div>
		<div class="comment_text"><p>@Matt: You're right, that does sound less cruel!  It does, unfortunately, still sound petty and vindictive.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726775">9</a> by Raymond Camden
		posted on 10/6/2010 at 5:53 PM
		</div>
		<div class="comment_text"><p>Guys, follow up posted: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2010%2F10%2F6%2FFollowup-to-jQuery-experiment--autoshortener-as-a-plugin%3Amy-nKfvs9YUhajPxY04OPOY5cP8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2010/10/6/Followup-to-jQuery-experiment--autoshortener-as-a-plugin">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726778">10</a> by Wade Miller
		posted on 10/14/2010 at 1:52 AM
		</div>
		<div class="comment_text"><p>I'm sorry for the question, but I am trying to learn more about jQuery.  Even if you are not displaying the data, the large amount of data is still being dumped to the web page. Couldn't you use jQuery and JSON and use the "Show More" link to retrieve more data from the database? Wouldn't this be a more efficient means of controlling the data?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726777">11</a> by Raymond Camden
		posted on 10/14/2010 at 4:01 PM
		</div>
		<div class="comment_text"><p>@Wade: Yes, you could switch to an Ajax based solution, and if my list was truly large, then it would make sense. In my mind, this was more a visual thing then anything else. 50 items in a list, for example, would be long to a reader, but as for HTML download speed, it really is trivial.</p><p>Like in most CF things, there are almost always multiple ways to do things in jQuery. :)</p></div>
	</div>
</div>
		