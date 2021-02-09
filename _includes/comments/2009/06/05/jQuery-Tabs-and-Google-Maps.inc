
<div class="comment" id="c_1713715958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715958">1</a> by Michael Williams
		posted on 6/6/2009 at 9:01 AM
		</div>
		<div class="comment_text"><p>I had a similar problem with spry tabs. What I found was that according to the map api docs the div tag the map loads in has to be displayed when the map is called. Since the second tab is in a display:none state the div loads weird. I worked around it by calling the map after the tab is revealed. It's also has the added benefit of not pulling the map unless it's viewed. Example: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.beckysrealestate.com%2F3911989%2F%3AbNoi3Rq4jfXmE1h0dY_INl_W1KQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.beckysrealestate.com/3911989/">http://www.beckysrealestate...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715956">2</a> by Raymond Camden
		posted on 6/6/2009 at 5:48 PM
		</div>
		<div class="comment_text"><p>I believe you are correct. However, even I create the map when the tab is selected, it still doesn't size 'right' height wise. I put "right" in quotes because, again, it does fill the tab div, which is oddly not as tall as the containing tabs.</p><p>As an example, if I use code to set the tab panel to red, you can see the red doesn't fill the entire div.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715964">3</a> by Greg Johnston
		posted on 8/1/2009 at 1:39 AM
		</div>
		<div class="comment_text"><p>Just as a note--it saves a lot of reloading, helps with inspection, etc. if you use Firebug, a great extension for Firefox.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715954">4</a> by Michael
		posted on 1/15/2010 at 5:15 PM
		</div>
		<div class="comment_text"><p>Thanks- currently working on a Bing map solution and ran into the same problem.  I didn't actually need to do the .Resize() call. However, I needed to add  <br>$("#liveMap").css("height","100%") after the map was loaded for it to render correctly.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715966">5</a> by Vaughn
		posted on 3/24/2010 at 4:19 PM
		</div>
		<div class="comment_text"><p>The answer is actually in the jQuery docs, though it could be a little more explicit:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdocs.jquery.com%2FUI%2FTabs%3AZBCJlSUSct4TUyqq1fHxbPZSTjo&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.jquery.com/UI/Tabs">http://docs.jquery.com/UI/Tabs</a></p><p>First, be sure that the code that initializes your map is called BEFORE the snippet that initializes your tabs.</p><p>Second -- and while this may not be necessary, it worked for me -- bind the trigger to the main tabs div before you initialize it.</p><p>Third, be sure that the resizeMap() call is attached to the map opject you created first, e.g., map.resizeMap().</p><p>The only annoyances I had were that the call to resizeMap() makes the browser jump to focus on the map and that it broke out of the default border that jQuery puts around the main tabs container. I couldn't seem to account for the jumping, but a simple border-size: 0 took care of the second.</p><p>Good luck!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715965">6</a> by anonimo
		posted on 8/11/2011 at 8:33 PM
		</div>
		<div class="comment_text"><p>Mi solucion que fue testiada y funciona ver mas en el siguiente link.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F6344059%2Fhow-to-add-google-maps-in-two-tabs-of-jquery-application%2F7029514%237029514%3AIAKkcxm1kDDwqtTUAC-ieWIqTEw&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/6344059/how-to-add-google-maps-in-two-tabs-of-jquery-application/7029514#7029514">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715962">7</a> by Raymond Camden
		posted on 8/11/2011 at 8:33 PM
		</div>
		<div class="comment_text"><p>Um, in English that is.... ? :)</p></div>
	</div>
</div>
		