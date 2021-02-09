
<div class="comment" id="c_1713657379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657379">1</a> by BL
		posted on 9/21/2006 at 3:23 PM
		</div>
		<div class="comment_text"><p>Ever seen a null gateway error message?</p><p>Error invoking CFC for gateway InterFax: null</p><p>The CFC works fine by itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657378">2</a> by Raymond Camden
		posted on 9/21/2006 at 5:59 PM
		</div>
		<div class="comment_text"><p>Nope. Maybe look into the logs a bit?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657383">3</a> by BL
		posted on 9/23/2006 at 5:03 AM
		</div>
		<div class="comment_text"><p>the only other thing it says in the exception log is:<br>coldfusion.runtime.AbortException</p><p>i'd love to get this gateway thing working.  it's an interesting concept.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657382">4</a> by Raymond Camden
		posted on 9/23/2006 at 5:22 AM
		</div>
		<div class="comment_text"><p>I've seen that logged when cfabort is run. Are you maybe cfaborting somewherE?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657381">5</a> by BL
		posted on 9/23/2006 at 1:22 PM
		</div>
		<div class="comment_text"><p>no cfaborting anywhere in the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657387">6</a> by BL
		posted on 9/23/2006 at 2:39 PM
		</div>
		<div class="comment_text"><p>but i am doing a cfabort in my application.cfm.  when i took it out, it worked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657388">7</a> by BL
		posted on 10/3/2006 at 7:51 AM
		</div>
		<div class="comment_text"><p>Ray, I just want to say thank you for putting this series out there. It's really helped me out. The solution that I used with event gateways has my mind free of worry. Because it solved my problem so well that now I can think about more important things. It was a requestTimeout problem that I was running out of ideas on how to fix, and I was seeing it everyday. That means everyday I was worrying about how many timeout error message emails I was going to see in my inbox today. Also, I took a look at the Concurrency library and found it to be too much to learn for what I was looking for. I just wanted to send the gateway a message using the CFC I was already using. So I just added a method called onIncomingMessage to my CFC and boom (tough acting tinactin) I had my whole process running on the gateway. Ahh, no more worrying about timeouts.. I feel like I'm living it up. Just sitting back and watching the event gateway thread-out my process. Thank you to Ray and CF Event Gateways.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657386">8</a> by Gary Fenton
		posted on 3/18/2009 at 4:07 AM
		</div>
		<div class="comment_text"><p>This comment is like 3 years late, but I'd like to know which Ray method would recommend using in CF8 to fire off a routine to generate 1000's of emails so the user doesn't have to hang around waiting. Either (1) an asynchronous event gateway or (2) cfthread without waiting for the thread to finish and rejoin?</p><p>In other words, does cfthread really supercede the achynchronous event gateway? Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657389">9</a> by Raymond Camden
		posted on 3/18/2009 at 7:58 PM
		</div>
		<div class="comment_text"><p>I honestly had not thought of this. I'd probably just use cfthread and don't JOIN on it.</p><p>I know for <a href="http://disq.us/url?url=http%3A%2F%2FCFBloggers.org%3AplHcC8aWdZbLWEVwlkHEwzxIcBI&amp;cuid=3321886" rel="nofollow noopener" title="CFBloggers.org">CFBloggers.org</a> I used that method.</p></div>
	</div>
</div>
		