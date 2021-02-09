
<div class="comment" id="c_1713684354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684354">1</a> by Curt Gratz
		posted on 7/14/2008 at 6:35 PM
		</div>
		<div class="comment_text"><p>Wow,</p><p>Congrats Geoffrey.  Nice Job.  I must say for the record I am a putz.  I sent Ray my copy that did the code in dollars and not cents.  Stupid Stupid Stupid.  I ran it unofficially here a bunch of times and did much better after changing line 598 in the funcs.cfm is Rays download of this from .1 to 10 like it should have been. So please all change &lt;cfset var minprice = .1&gt; to &lt;cfset var minprice = 10&gt; in your simulators.  DUH!!!  Oh well, such is life from time to time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684366">2</a> by Phillip Ciske
		posted on 7/14/2008 at 6:43 PM
		</div>
		<div class="comment_text"><p>Nice job Geoffrey! It was eye-opening to read through everyone else's code. I'm glad I'm a programmer and not an investment banker. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684368">3</a> by Mat Evans
		posted on 7/14/2008 at 7:25 PM
		</div>
		<div class="comment_text"><p>congrats everyone!</p><p>I had lots of fun doing that - might go into lemonade stand management :)</p><p>cheers Ray, and yes if you have time, more comps like this would be awesome.</p><p>Cheers!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684369">4</a> by Geoffrey Bentz
		posted on 7/14/2008 at 7:33 PM
		</div>
		<div class="comment_text"><p>Thank you, thank you. I would like to express my appreciation to my Introduction to Microeconomics professor. Without her thorough explanation of supply and demand curves, I would not be here tonight. :)</p><p>This was a fun contest. It is quite a learning experience to see the different programming techniques people used in solving the challenge. I am looking forward to spending more time learning from the various entries...while having a nice glass of lemonade.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684371">5</a> by Dan Sorensen
		posted on 7/14/2008 at 8:26 PM
		</div>
		<div class="comment_text"><p>I think it would be interesting to see how people would approach the genWeather or simSales functions differently. But it would be much harder to determine which one was 'the winner'.</p><p>For example, if I were to write genWeather, I may allow for some 'atmospheric inertia', meaning that if it's 95 today, it's probably not going to be 75 tomorrow. That would have also allowed for smarter selling functions based on trends without storing to a global scope. Additionally, I may use a web service to get actual historical weather for use in the simulator just for fun.</p><p>Very interesting project overall. It was good to read through the different solutions! Some interesting thought put into it. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684377">6</a> by Raymond Camden
		posted on 7/14/2008 at 8:33 PM
		</div>
		<div class="comment_text"><p>Good ideas Dan. To be clear, I definitely wrote up the sim code a bit too quickly. I probably forgot to var scope a few items too. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684364">7</a> by Dan Sorensen
		posted on 7/14/2008 at 8:47 PM
		</div>
		<div class="comment_text"><p>I like how Brian Kotek quickly solved the var scoping issue by starting his function with:</p><p>var local = {};</p><p>Then he added all other variables to this scoped local structure. It's easier to see if a variable is scoped when it has a local.var prefix than it is to check the top of the function to see if it had been declared with a var prefix.</p><p>I wish I would have had the time to join in on this contest last week. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684367">8</a> by Steve Withington
		posted on 7/14/2008 at 9:30 PM
		</div>
		<div class="comment_text"><p>Sooo ... when can we expect our check?</p><p>Just kidding. Thanks Ray, it was fun to participate and I vote for having more of these!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684373">9</a> by Brad Wood
		posted on 7/14/2008 at 11:08 PM
		</div>
		<div class="comment_text"><p>Definitely fun—too bad I lost money though…  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684374">10</a> by Raymond Camden
		posted on 7/15/2008 at 4:32 AM
		</div>
		<div class="comment_text"><p>Some good comments by Coder's Revolution:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.codersrevolution.com%2Findex.cfm%2F2008%2F7%2F14%2FSour-Endings-Anatomy-of-a-Loser%3ADJx6297UW1rcJ-l9dQ87W2E7Nx0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.codersrevolution.com/index.cfm/2008/7/14/Sour-Endings-Anatomy-of-a-Loser">http://www.codersrevolution...</a></p><p>He points out something I forgot to mention in my blog post. One of the 'secret' rules I didn't tell you guys about was the "By 5" rule. If you sold your lemonade with a price that was divisible by 5, you got a bonus. My thinking was - folks don't like to look for pennies, and you could sell more if you weren't making a lot of change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684375">11</a> by Raymond Camden
		posted on 7/16/2008 at 3:36 PM
		</div>
		<div class="comment_text"><p>Please see a cool followup by Brian Kotek:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.briankotek.com%2Fblog%2Findex.cfm%2F2008%2F7%2F15%2FA-CompetitionBased-Version-of-Rays-Lemonade-Selling-Simulation%3AtST1FhtDHUohAUy-GC6kmYQUU-g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.briankotek.com/blog/index.cfm/2008/7/15/A-CompetitionBased-Version-of-Rays-Lemonade-Selling-Simulation">http://www.briankotek.com/b...</a></p></div>
	</div>
</div>
		