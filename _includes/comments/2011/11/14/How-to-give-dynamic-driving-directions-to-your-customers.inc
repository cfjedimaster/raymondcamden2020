
<div class="comment" id="c_1713736800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736800">1</a> by John Farrar
		posted on 11/14/2011 at 9:58 PM
		</div>
		<div class="comment_text"><p>I am wondering if this is a live product or if this could go the way like Google maps. Great to provide this but depending we would want to watch being dependent on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736801">2</a> by Raymond Camden
		posted on 11/14/2011 at 9:59 PM
		</div>
		<div class="comment_text"><p>Um - where did Google Maps go? All they did was kill off the free service - and only for high traffic sites. It's not gone - it's just not free (but still free for probably 90% of the net).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736803">3</a> by wfinley
		posted on 11/14/2011 at 11:11 PM
		</div>
		<div class="comment_text"><p>This is fun to implement (and I recently tried it on a mobile site) but a better user experience is to just link them straight to googlemaps (e.g. <a href="http://disq.us/url?url=http%3A%2F%2Fmaps.google.com%2Fmaps%3Fq%3D%23address%23%29%3ArmFfG3nXk5DfIe1BkTJE1Iwt5Jo&amp;cuid=3321886" rel="nofollow noopener" title="http://maps.google.com/maps?q=#address#)">http://maps.google.com/maps...</a>.  The native Googlemaps interface is always going to be faster &amp; slicker than serving text only driving directions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736804">4</a> by billy bob
		posted on 11/23/2011 at 1:12 AM
		</div>
		<div class="comment_text"><p>Stupid question - but why would you need dynamic  driving directions ?</p><p>Are the directions in constant flux as they attempt to keep up with the changing location of the destination ?</p><p>Is the destination moving around town ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736805">5</a> by Raymond Camden
		posted on 11/23/2011 at 1:13 AM
		</div>
		<div class="comment_text"><p>No, but if you are at place X, and you need to get to store Y, then this code (for store Y) would tell you how to get there.</p><p>In other words, normally store Y would just say, "We are here.", but now they can say, "We are here, and hey, I know where you are - let me tell you how to get to me."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736807">6</a> by Elise
		posted on 2/15/2013 at 10:53 AM
		</div>
		<div class="comment_text"><p>I used the code above and it works quite well.  Thank You!!  I was wondering if there is some additional code that needs to be added to close the directions once they have been viewed and also is it possible to have a button to email or text the directions once given??  Thanks for your help.  A life saver!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736809">7</a> by Raymond Camden
		posted on 2/15/2013 at 4:35 PM
		</div>
		<div class="comment_text"><p>You can wrap the directions in a div, include a button, and use a jQuery click/touch event to remove the HTML from the div.</p><p>In order to do email, you would need to integrate a back end server like ColdFusion or PHP. You can send the directions, and the email address, to the server, and the server would fire it off.</p></div>
	</div>
</div>
		