
<div class="comment" id="c_1713721783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721783">1</a> by Adam Tuttle
		posted on 2/5/2010 at 7:53 PM
		</div>
		<div class="comment_text"><p>Good question! Subscribing to find out what the answer is when someone smarter than me replies. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721797">2</a> by Joe Rinehart
		posted on 2/5/2010 at 7:59 PM
		</div>
		<div class="comment_text"><p>I can't say it's entirely scientific, but here's what I do.  It's not that different from non-ORM.</p><p>1)  Determine most used use cases.  Pre-launch, I guess.  Post-launch, I look at stats.</p><p>2)  Script those cases via MXUnit.</p><p>3)  Run those tests via JMeter (free load testing tool).</p><p>4)  Use JMeter to figure out which of the most used use cases is also running slowly.</p><p>5)  Find the most damaging bottleneck - not necessarily ORM! - and remove it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721793">3</a> by Joe Rinehart
		posted on 2/5/2010 at 8:01 PM
		</div>
		<div class="comment_text"><p>(Meant to add a bit more)</p><p>I then wash / rinse repeat.  Some may call it too "reactive," but every time I've proactively optimized I end up overoptimizing myself into a world of hurt.  Instead of optimizing everything, I try to cyclicly correlate what's not optimal with what's actually affecting people, using that to prioritize meaningful optimizations.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721789">4</a> by Adam Tuttle
		posted on 2/5/2010 at 8:04 PM
		</div>
		<div class="comment_text"><p>Joe: Would you say that it's best to err on the side of too little or too much optimization pre-launch? Said another way: is it easier to remove unnecessary optimization, or add it in after the fact?</p><p>Aside from lazy-loading, what other optimizations can be made with ORM?</p><p>Please pardon my noob questions... I'm still learning ORM for the first time :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721790">5</a> by Alex Sante
		posted on 2/5/2010 at 8:37 PM
		</div>
		<div class="comment_text"><p>I'm also pretty new to this kind of stuff (optimization, load testing etc..), and have started using two tools.  The first is actually an online tool called LOADSTORM (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.loadstorm.com%3AZNXRwtZMHY6lqKibeyv7OglnLps&amp;cuid=3321886" rel="nofollow noopener" title="www.loadstorm.com">www.loadstorm.com</a>).  It a subscription based system, but also allows you to stress test your site for free (up to 50 virtual users).  You can setup all kinds of test patterns.  The second tool I started using recently is jRockit.  I have it all setup and can see what's going on behind the scenes, but have not yet learned how to analyze the data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721795">6</a> by Drew
		posted on 2/6/2010 at 2:41 AM
		</div>
		<div class="comment_text"><p>I think he's asking for something like Cache Monitor for Transfer: <a href="http://disq.us/url?url=http%3A%2F%2Fdocs.transfer-orm.com%2Fwiki%2FCache_Monitor.cfm%3AyJxRdz4M9Zww_kPh32W-UsJwRis&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.transfer-orm.com/wiki/Cache_Monitor.cfm">http://docs.transfer-orm.co...</a>.  Cache Monitor models your ORM activity as it is being used on your site.</p><p>Looks like Adobe is letting Third Parties invent this.</p></div>
	</div>
</div>
		