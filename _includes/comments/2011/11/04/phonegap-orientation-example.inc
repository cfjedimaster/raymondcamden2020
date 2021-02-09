
<div class="comment" id="c_1713736232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736232">1</a> by Cesidio DiBenedetto
		posted on 3/28/2012 at 7:45 PM
		</div>
		<div class="comment_text"><p>According this post (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.matthewgifford.com%2F2011%2F12%2F22%2Fa-misconception-about-window-orientation%2F%29%3Ava9FiU8iMTdvZcnT-q1M_FFotVA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.matthewgifford.com/2011/12/22/a-misconception-about-window-orientation/)">http://www.matthewgifford.c...</a>, it's not that straightforward.  The values for window.orientation are not really standardized.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736234">2</a> by Raymond Camden
		posted on 3/28/2012 at 7:52 PM
		</div>
		<div class="comment_text"><p>Fair point. I'll mention that PhoneGap has a Device API though. You could use that to sniff the appropriate OS and ensure you correctly handle the values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736235">3</a> by Cesidio DiBenedetto
		posted on 3/30/2012 at 7:48 PM
		</div>
		<div class="comment_text"><p>True enough.</p><p>My previous post was not a slight towards you or your post.  It's just that I am experiencing this exact problem at the moment and wanted to bring more clarity to the issue.</p><p>Keep up the good work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736236">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736236">4</a> by Raymond Camden
		posted on 3/31/2012 at 1:39 AM
		</div>
		<div class="comment_text"><p>Cesidio - didn't take it as a slight at all. :) The devil is in the details, right? Thank you for bringing this up. It is easy to deal with, but I didn't know this was a problem until you talked about it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736242">5</a> by Aelx
		posted on 1/17/2014 at 4:41 PM
		</div>
		<div class="comment_text"><p>Hey Raymond,</p><p>Great blog as always, I do enjoy reading your content regarding phonegap!!</p><p>It's always great to see a working example.</p><p>Basically I am trying to fix a android reflow bug that happens on device orientation change any element that is a position:fixed; and width:100%; it doesnt get resized when the device changes orientation, so I tried your code above and this doesnt work, I don't even get any console output and the event isnt firing (using samsung tab2, android 4.2.2)</p><p>I was wondering whether its possible to watch the window or document resize then i could just resize my fixed element when this happens, but I was wondering if there was a better approach.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736243">6</a> by Raymond Camden
		posted on 1/28/2014 at 12:22 AM
		</div>
		<div class="comment_text"><p>Sorry for the delay in responding. I'm not aware of any bug with orientation and Android, so maybe it is just an issue on the tab? You could certainly *try* the resize idea. Maybe look at responsive CSS too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736239">7</a> by Alex
		posted on 1/28/2014 at 10:32 PM
		</div>
		<div class="comment_text"><p>In the end I used jquery to watch for orientationchange and then hide and show the navigation fixed element, this then fixed the problem.</p><p>// first of all I only fired this function for the android platform<br>$(window).bind('orientationchange', function(e) {<br>   $('nav').hide().slideDown();<br>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736241">8</a> by Raymond Camden
		posted on 1/28/2014 at 10:36 PM
		</div>
		<div class="comment_text"><p>Hmm. But this is the *same* code I used. The only difference is you used jQuery. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736245">9</a> by Ari
		posted on 10/29/2014 at 8:39 PM
		</div>
		<div class="comment_text"><p>Hi! I think I have another problem because my Phonegap App does not rotate at all! I'm searching for a solution because it doesn't rotate on the Android Simulator nor the Android Smartphone itself.</p><p>It's really an automatic function in the recents versions? Or needs to be declared?<br>Thanks and great blog!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736240">10</a> by Raymond Camden
		posted on 10/30/2014 at 2:45 AM
		</div>
		<div class="comment_text"><p>Check your config.xml, are you locking orientation? <a href="http://disq.us/url?url=http%3A%2F%2Fcordova.apache.org%2Fdocs%2Fen%2F4.0.0%2Fconfig_ref_index.md.html%23The%2520config.xml%2520File%3AjypOanZK6xoGu82RFJ3kSvQeSs0&amp;cuid=3321886" rel="nofollow noopener" title="http://cordova.apache.org/docs/en/4.0.0/config_ref_index.md.html#The%20config.xml%20File">http://cordova.apache.org/d...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736246">11</a> by Ari
		posted on 10/31/2014 at 6:11 PM
		</div>
		<div class="comment_text"><p>Raymond... you are a genious!!! thanks a lot!</p><p>in fact, there was NOT a lock in config.xml, but because of your comment I checked the AndroidManifest and there it was a "force portrait" tag!!! hahahaha</p><p>no wonder why you are where you are!<br>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736238">12</a> by Raymond Camden
		posted on 11/1/2014 at 8:26 PM
		</div>
		<div class="comment_text"><p>Heh, I got lucky. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1932578240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1932578240">13</a> by Tarun Narula
		posted on 3/28/2015 at 4:14 AM
		</div>
		<div class="comment_text"><p>Hey, can i get the link of 'main.js' which is included in this code !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1932921260">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1932921260">14</a> (In reply to <a href="#c_1932578240">#13</a>) by Raymond Camden
		posted on 3/28/2015 at 12:45 PM
		</div>
		<div class="comment_text"><p>Sorry I don't have the file anymore - but you can literally just cut and paste the code above. (I cleaned up the formatting a bit.)</p></div>
	</div>
</div>
		