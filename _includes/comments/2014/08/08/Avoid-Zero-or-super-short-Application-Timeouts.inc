
<div class="comment" id="c_1714083699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083699">1</a> by Phillip Senn
		posted on 8/9/2014 at 12:33 AM
		</div>
		<div class="comment_text"><p>A lot of hay has been made with instantiating components in the application scope.</p><p>This meant that you'd have to reload the application every time you made a change to a component.</p><p>But ColdFusion and Railo have made tremendous speed gains in terms of components being instantiated.</p><p>I no longer use the Application scope to store my components.  I simply instantiate them when I need them.</p><p>The only time I forsee putting a component in memory is if I'm calling it inside a loop.<br>And with all the different layers of caching, it's probably in memory anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083702">2</a> by Adam Cameron
		posted on 8/9/2014 at 10:25 AM
		</div>
		<div class="comment_text"><p>So does this mean that settings a request acquires from the application, like mappings, ORM settings, what-have-you are removed - mid request - if the application times-out?</p><p>And application idle time is based on when the most recent request STARTS, not when it ENDED?</p><p>Both sound like our design to me..?</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083701">3</a> by Adam Cameron
		posted on 8/9/2014 at 10:26 AM
		</div>
		<div class="comment_text"><p>Oops! "poor design" not "our design".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083698">4</a> by Raymond Camden
		posted on 8/9/2014 at 4:50 PM
		</div>
		<div class="comment_text"><p>Well, I tried to build a small test to demonstrate this. I used the cfapplication tag in a non-Application.cfm file, which you are allowed to do of course, and used sleep(). I wasn't able to replicate it there. But I still think it might be the *start* of a request as you say.</p><p>I could see the reasoning behind that being that if you wait till the end, your app, or session, may time out at a value *longer* than you defined because the request took look.</p><p>Not saying that's why, just that it may be a reason.</p></div>
	</div>
</div>
		