
<div class="comment" id="c_2623415524">
	<div>
		<img src="https://disqus.com/api/users/avatars/panman82.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2623415524">1</a> by Ryan
		posted on 4/14/2016 at 3:00 PM
		</div>
		<div class="comment_text"><p>How about nested APIs in Loopback? Ex: I use year as a root for many models. /2016/foobars</p></div>
	</div>
</div>
		
<div class="comment" id="c_2623416364">
	<div>
		<img src="https://disqus.com/api/users/avatars/panman82.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2623416364">2</a> by Ryan
		posted on 4/14/2016 at 3:00 PM
		</div>
		<div class="comment_text"><p>Have you played with ActiveDirectory integration with Loopback? Specifically, I'll then need to use EmployeeID from AD.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2623420872">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2623420872">3</a> (In reply to <a href="#c_2623415524">#1</a>) by Raymond Camden
		posted on 4/14/2016 at 3:03 PM
		</div>
		<div class="comment_text"><p>Are you talking about versioning? Or a way to say, "I have foobars, but I want foobars only from year X"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2623441906">
	<div>
		<img src="https://disqus.com/api/users/avatars/panman82.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2623441906">4</a> (In reply to <a href="#c_2623420872">#3</a>) by Ryan
		posted on 4/14/2016 at 3:16 PM
		</div>
		<div class="comment_text"><p>Humm... I think "I have foobars, but I want foobars only from year X". Basically everything (except for Years themselves) are attached to a Year.</p><p>My front-end apps let users select a Year, which will change the Year requested during API calls.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2623449454">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2623449454">5</a> (In reply to <a href="#c_2623441906">#4</a>) by Raymond Camden
		posted on 4/14/2016 at 3:20 PM
		</div>
		<div class="comment_text"><p>So filtering by year should be possible (should). Out of the box, you get a full featured filtering language. My only concern here is that I'm not sure about the date part. So given that you are probably using full dates, I'd have to check to see how you would filter by JUST the year.</p><p>Of course, the URL would not be pretty. You would need to set up /YYYY/X in Express yourself.</p><p>You could do /api/X/YYYY such that you have a handler to catch dynamic routes. That *should* be possible too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2623455684">
	<div>
		<img src="https://disqus.com/api/users/avatars/panman82.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2623455684">6</a> (In reply to <a href="#c_2623449454">#5</a>) by Ryan
		posted on 4/14/2016 at 3:24 PM
		</div>
		<div class="comment_text"><p>There is a Year property on each model, so actual filtering should be easy. I'm not going by a "created date" or anything, just a 4 digit year.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2623459534">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2623459534">7</a> (In reply to <a href="#c_2623455684">#6</a>) by Raymond Camden
		posted on 4/14/2016 at 3:26 PM
		</div>
		<div class="comment_text"><p>ah, then definitely easy :) just check the docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3088153056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3088153056">8</a> by Ahmer
		posted on 1/7/2017 at 9:47 PM
		</div>
		<div class="comment_text"><p>How can we generate and run angularjs2 with loopback</p></div>
	</div>
</div>
		
<div class="comment" id="c_3088209939">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3088209939">9</a> (In reply to <a href="#c_3088153056">#8</a>) by Raymond Camden
		posted on 1/7/2017 at 10:31 PM
		</div>
		<div class="comment_text"><p>LoopBack is about creating APIs - it isn't about creating client-side code. While you can easily use Angular with LoopBack, the LoopBack tool itself doesn't create Angular code for you.</p></div>
	</div>
</div>
		