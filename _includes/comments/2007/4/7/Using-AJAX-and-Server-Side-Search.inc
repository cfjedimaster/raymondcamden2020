
<div class="comment" id="c_1713663815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663815">1</a> by Bruce
		posted on 4/7/2007 at 7:45 PM
		</div>
		<div class="comment_text"><p>Great example.  Easy to follow and adapt to my own requirements.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663820">2</a> by Scott P
		posted on 4/7/2007 at 9:58 PM
		</div>
		<div class="comment_text"><p>Take a performance hit but to make it search as they type:</p><p>Add in an onchange="search();" to the text input form field</p><p>then in the javascript change if(searchvalue == '') return;<br>to if(searchvalue == '' || len(searchvalue) &lt; 3) return;</p><p>I added a check so it doesn't fire off the search until there are 3 characters.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663822">3</a> by Raymond Camden
		posted on 4/7/2007 at 10:21 PM
		</div>
		<div class="comment_text"><p>I don't know why - but I tend to avoid using automatic behaviour when it has the chance of being slow. Using the min length helps, but I'd still be wary.</p><p>Of course, it could just be that I'm an old fogey. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663821">4</a> by Sam Farmer
		posted on 4/8/2007 at 3:16 AM
		</div>
		<div class="comment_text"><p>Very slick.  An enhancement to blogCFC next version perhaps?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663819">5</a> by Andy Matthews
		posted on 4/8/2007 at 5:52 AM
		</div>
		<div class="comment_text"><p>I clicked the Spry Search link above (as well as in part 2 of this article) and tried searching for basic terms ("coldfusion", or "lost") and found nothing. The code ran without errors, but I received no error or success messages, and also received no "found nothing" messages.</p><p>Same behaviour in IE and FF. Am I running the right link?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663826">6</a> by Raymond Camden
		posted on 4/9/2007 at 4:01 PM
		</div>
		<div class="comment_text"><p>@Sam - I've been unhappy with the search for a while. That's why it changed a bit in the last release. I'd like to use Verity in BlogCFC as well so that may get added.</p><p>@Andy - Not sure what to tell you. Is your JS turned off? No one else is reporting this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663823">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663823">7</a> by Aaron Longnion
		posted on 4/9/2007 at 5:27 PM
		</div>
		<div class="comment_text"><p>Hi Ray - looks nifty, but am getting the same issues as Andy.  I'm on FF 2.0.0.3.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663827">8</a> by Raymond Camden
		posted on 4/9/2007 at 6:22 PM
		</div>
		<div class="comment_text"><p>So no JS errors? And JS is turned on? Are using the button and not the ENTER key?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663828">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663828">9</a> by Aaron Longnion
		posted on 4/9/2007 at 7:08 PM
		</div>
		<div class="comment_text"><p>ah-ha. Interesting... Pressing enter returns the empty results (sends me from <a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Fdemos%2Fsprysearch%2F%3AzHa1eJzKt9a3yWnQHs4YFLX62q4&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/demos/sprysearch/">http://ray.camdenfamily.com...</a> to <a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Fdemos%2Fsprysearch%2F%3F%29%3A84YH6UFklAmnrp1DqAi-D81CEv8&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/demos/sprysearch/?)">http://ray.camdenfamily.com...</a>, but pressing the button works like a charm.  Also, obviously tabbing to the button and pressing enter works fine as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663824">10</a> by Raymond Camden
		posted on 4/9/2007 at 7:13 PM
		</div>
		<div class="comment_text"><p>Yep, someone earlier mentioned it. I was too lazy to fix it. ;) I'll try to a bit later since there is no excuse for me being lazy. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663829">11</a> by Raymond Camden
		posted on 4/9/2007 at 7:28 PM
		</div>
		<div class="comment_text"><p>I fixed the "hit enter no worky" thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663825">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663825">12</a> by Aaron Longnion
		posted on 4/9/2007 at 7:41 PM
		</div>
		<div class="comment_text"><p>groovy... it worky in my FF and IE 7 now.  ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663831">13</a> by private
		posted on 4/23/2007 at 12:28 AM
		</div>
		<div class="comment_text"><p>is it possible to post the source code for the page search.cfm?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663814">14</a> by Raymond Camden
		posted on 4/23/2007 at 6:42 PM
		</div>
		<div class="comment_text"><p>All it is a Verity search using cfsearch.</p></div>
	</div>
</div>
		