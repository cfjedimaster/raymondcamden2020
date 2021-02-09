
<div class="comment" id="c_1714082192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082192">1</a> by Gareth Arch
		posted on 3/1/2014 at 9:40 AM
		</div>
		<div class="comment_text"><p>So are you running your automation tests using node.js or is it just something that you run via the browser (as it's JS)?  We've been running Selenium (via a modified version of CFSelenium) to do our integration/automation tests with MXUnit.  CasperJS and PhantomJS seem like a nice fit also.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082196">2</a> by Raymond Camden
		posted on 3/1/2014 at 9:13 PM
		</div>
		<div class="comment_text"><p>We weren't using this for tests. We needed a static version of a page that also included the JSON rendered data in it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082194">3</a> by Hawk
		posted on 3/16/2014 at 5:25 AM
		</div>
		<div class="comment_text"><p>Don't use wait() because that defeated the asynchronous purpose. Plus it's not reliable and slow things down. The best approach in general for css related problem is to remove css classes itself. You can do that in evaluate() with jquery and then do whatever you need after that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082193">4</a> by Raymond Camden
		posted on 3/16/2014 at 6:00 AM
		</div>
		<div class="comment_text"><p>"Don't use wait() because that defeated the asynchronous purpose."<br>Sorry - how?</p><p>"The best approach in general for css related problem is to remove css classes itself. "<br>Again, eh?</p><p>"You can do that in evaluate() with jquery and then do whatever you need after that."<br>Ok, I'm 0 for 3. ;) Seriously dude - nothing you said made sense to me. Can you try again?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082197">5</a> by Hawk
		posted on 3/16/2014 at 8:30 AM
		</div>
		<div class="comment_text"><p>OK my second and last before you figure out your own: css timing and effects can change! Even this.wait(1000) is not safe. What if the fading is 10 sec long (little extreme but possible)? Or what if jQuery effect depends on something else that was delayed because of connectivity? wait() should be banned and the number in it is just random arbitrary number.</p><p>Try to do this with 20k pages and 50GB of data processed and you will appreciate. Enjoy headless!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082203">6</a> by Raymond Camden
		posted on 3/16/2014 at 3:39 PM
		</div>
		<div class="comment_text"><p>Ok, I see your point about how the transition duration can change. But we control the source files here and we know the length, so I don't see this as a problem. If we didn't, if we were slurping someone else's files, then yeah. Ditto for your comment about 20K pages. In our case, we had a very short list of pages (around 15).</p><p>So how would you change it then? If jQuery is injecting a new DOM element with ID of X, but used a transition, how would you tell Casper to wait w/o ... well waiting. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082199">7</a> by Ken Collins
		posted on 3/16/2014 at 8:34 PM
		</div>
		<div class="comment_text"><p>When the page loads, you can inject JS and disable jQuery's fx queue (<a href="https://disq.us/url?url=https%3A%2F%2Fapi.jquery.com%2Fjquery.fx.off%2F%29%3AKLSE0Avz_DupxE3rT3c7WerKhOs&amp;cuid=3321886" rel="nofollow noopener" title="https://api.jquery.com/jquery.fx.off/)">https://api.jquery.com/jque...</a>. On my own personal projects, when I do integration testing and load my env up in test mode, I disable all animations via an application config. Reason being, I use jquery.transit (<a href="http://disq.us/url?url=http%3A%2F%2Fricostacruz.com%2Fjquery.transit%2F%29%3AsibVtsFXVqo4Q-TcRMx77vdMfus&amp;cuid=3321886" rel="nofollow noopener" title="http://ricostacruz.com/jquery.transit/)">http://ricostacruz.com/jque...</a> which has no such notion. Hope that helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082198">8</a> by Raymond Camden
		posted on 3/16/2014 at 9:03 PM
		</div>
		<div class="comment_text"><p>@Ken: Oh that is slick. I didn't know - thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082201">9</a> by Alexandru Cobuz
		posted on 7/12/2014 at 4:36 AM
		</div>
		<div class="comment_text"><p>There's another cool feature that you may use across your projects, waiting for an element to finish (like a loading widget).<br>casper.waitWhileVisible( "the_element", function then(){<br> // your code<br>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082200">10</a> by Raymond Camden
		posted on 7/12/2014 at 5:41 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing that, Alexandru.</p></div>
	</div>
</div>
		