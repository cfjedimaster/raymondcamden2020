
<div class="comment" id="c_1713668562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668562">1</a> by Nick
		posted on 7/18/2007 at 6:36 PM
		</div>
		<div class="comment_text"><p>Nerd.</p><p>Just kidding. Well, sort of. You did make a Cloud City joke at 7:15 am.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668572">2</a> by Doug Hughes
		posted on 7/18/2007 at 7:05 PM
		</div>
		<div class="comment_text"><p>In my experience, it's not the speed of CF that's the issue with reading feeds, but how fast they respond via http.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668573">3</a> by Raymond Camden
		posted on 7/18/2007 at 7:11 PM
		</div>
		<div class="comment_text"><p>True, but you got to love how cfthread can help mitigate that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668585">4</a> by Doug Hughes
		posted on 7/18/2007 at 7:16 PM
		</div>
		<div class="comment_text"><p>It helps in a huge way.  But even then, you have limited threads.  If you have 10 threads available you could essentially cut the time by a factor of ten.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668589">5</a> by Chris Jordan
		posted on 7/18/2007 at 8:43 PM
		</div>
		<div class="comment_text"><p>@Doug - is there a limited number of threads (created by the &lt;cfthread&gt; tag) that will be available in CF8?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668581">6</a> by Doug Hughes
		posted on 7/18/2007 at 8:48 PM
		</div>
		<div class="comment_text"><p>@Chris - Yea. This is configurable via the admin and I think the default is 10.  The more you add, the more you'll impact the server's performance.  I mean to say, that more threads =  more work so it will take resources from the rest of your server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668588">7</a> by Raymond Camden
		posted on 7/18/2007 at 8:52 PM
		</div>
		<div class="comment_text"><p>As a side note to this - I'm planning a blog entry on how to throttle cfthread. So if you know your box has a max of 10 threads and you want your process to use 4, how would you do that? Right now my plan is to do it in a loop, which means you need to do some managing of stuff.</p><p>p.s. Doug, hit me up on IM when you get a chance, I don't think I have your IM handle here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668587">8</a> by Daniel Budde II
		posted on 7/19/2007 at 12:19 AM
		</div>
		<div class="comment_text"><p>CF8 standard has even more limited number of threads I believe.  I think it is like 2 or 4 and I don't believe it is able to be changed in the admin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668586">9</a> by Raymond Camden
		posted on 7/19/2007 at 12:28 AM
		</div>
		<div class="comment_text"><p>Still nice to have though, and the nice thing is that your code will just run even faster if you move up to Enterprise.</p><p>p.s. The project I hinted at is almost done. I hope to launch it in a day or so. It's live now but you would have to guess the URL. ;) I want to add a bit more polish before I officially release it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668564">10</a> by Chris Jordan
		posted on 7/19/2007 at 1:02 AM
		</div>
		<div class="comment_text"><p>Are you challenging us to guess  the url? Oh goody! I like games! ;o)</p><p>Also, I think my client is going to splurge for Enterprise, so I'm relived at that! Woo-Hoo! Can't wait! :o)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668565">11</a> by Aegis
		posted on 7/19/2007 at 3:59 AM
		</div>
		<div class="comment_text"><p>try google, it keeps picking up our dev sites :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668566">12</a> by Chris Jordan
		posted on 7/19/2007 at 6:18 PM
		</div>
		<div class="comment_text"><p>Bah! I can't find it! :o) I guess I'll have to wait like a good little coder and see what you've cooked up when you're ready to show the world.</p></div>
	</div>
</div>
		