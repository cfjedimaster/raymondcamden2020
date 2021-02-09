
<div class="comment" id="c_1713660121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660121">1</a> by Jay McConathy
		posted on 12/8/2006 at 9:18 PM
		</div>
		<div class="comment_text"><p>that is nice.</p><p>I am wondering if it is possible to do something like a cflocation where on opening if the initial page it redirects them to a "chromeless" page instead of having to use a button?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660125">2</a> by Jay McConathy
		posted on 12/8/2006 at 9:20 PM
		</div>
		<div class="comment_text"><p>or would it be possible to use an "OnLoad" style startup of the page and call it then?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660122">3</a> by Raymond Camden
		posted on 12/8/2006 at 9:20 PM
		</div>
		<div class="comment_text"><p>You can run JS code when the windows loads. That would remove the need to click a button.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660124">4</a> by Jay McConathy
		posted on 12/8/2006 at 9:21 PM
		</div>
		<div class="comment_text"><p>Being a javascript dunce do you have an example??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660117">5</a> by Raymond Camden
		posted on 12/8/2006 at 9:28 PM
		</div>
		<div class="comment_text"><p>Use this in the body:</p><p>&lt;body onload="popup()"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660120">6</a> by Scott Stroz
		posted on 12/9/2006 at 12:35 AM
		</div>
		<div class="comment_text"><p>Odds are, pop-up blockers will block a window opening if you do it with &lt;body onload="..." &gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660123">7</a> by Edward T
		posted on 12/9/2006 at 3:05 AM
		</div>
		<div class="comment_text"><p>A little tip that I use is to add a focus() call to the window (e.g., mypopup.focus();) as the final line in the popup() function.  The reason is that if the window has already been popped, but is buried (behind the current window, minimized, etc.), this will bring it forward.</p><p>/ejt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660129">8</a> by Larry C. Lyons
		posted on 12/11/2006 at 1:50 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Funny that you should mention chromeless popup windows. I was just reading a very good article about this on the A List Apart web site, (<a href="http://disq.us/url?url=http%3A%2F%2Falistapart.com%2Farticles%2Fpopuplinks%29%3ALwe1BBz_unAT0LL_7MTgDHhydjw&amp;cuid=3321886" rel="nofollow noopener" title="http://alistapart.com/articles/popuplinks)">http://alistapart.com/artic...</a>. What's really nice about the popup window code discussed in the article is that it passes most accessibility validators.</p><p>regards,</p><p>larry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660128">9</a> by Raymond Camden
		posted on 12/11/2006 at 3:37 AM
		</div>
		<div class="comment_text"><p>Nice link, thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660127">10</a> by Alex
		posted on 4/16/2007 at 3:53 AM
		</div>
		<div class="comment_text"><p>Great guide! i use it to open itunes songs.</p></div>
	</div>
</div>
		