
<div class="comment" id="c_1713685145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685145">1</a> by Greg J
		posted on 8/19/2008 at 7:20 PM
		</div>
		<div class="comment_text"><p>The AIR installer itself doesn't add the subscription.  It's probably some code in the badge.  If you look in the embed code for the badge you'll see Ted added a FlashVars param:</p><p>invparam=http://216.92.94.180/1733261879_setup.xml</p><p>I'm guessing that the badge is launching AMP after it is installed and passing it this parameter which lists some URLs from which to retrieve show listings.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685151">2</a> by Raymond Camden
		posted on 8/19/2008 at 7:23 PM
		</div>
		<div class="comment_text"><p>Well, still, it's interesting, and AIR had to be smart enough in the install process to _recognize_ invparam. Either way - cool stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685155">3</a> by seand
		posted on 8/19/2008 at 7:27 PM
		</div>
		<div class="comment_text"><p>I viewed the show info and the feed URL is <a href="http://disq.us/url?url=http%3A%2F%2Fjobs.onflex.org%2F1733261879.xml%3AeB5o5Kjvy8bpbA6S5-xXZVDoKYY&amp;cuid=3321886" rel="nofollow noopener" title="http://jobs.onflex.org/1733261879.xml">http://jobs.onflex.org/1733...</a> for those interested.<br>To add it to AMP open My Favorites (on the top title bar)<br>Click on ADD RSS FEED (in the bottom left corner)<br>Enter the URL (<a href="http://disq.us/url?url=http%3A%2F%2Fjobs.onflex.org%2F1733261879.xml%29%3AeqOW8c8HVodHEM1ahzsxSVoxIDU&amp;cuid=3321886" rel="nofollow noopener" title="http://jobs.onflex.org/1733261879.xml)">http://jobs.onflex.org/1733...</a></p><p>Note you can also click on the installer even if you have AMP installed just make sure AMP is closed and click Run Now. This will add the show to your favorites. I did not delete any of my settings/content in AMP.<br>Sean</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685154">4</a> by Greg J
		posted on 8/19/2008 at 7:31 PM
		</div>
		<div class="comment_text"><p>@seand, yes meant to point that out as well.  AMP is just listening for an invocation event and that param is being passed in add a new RSS feed.</p></div>
	</div>
</div>
		