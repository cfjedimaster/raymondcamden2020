
<div class="comment" id="c_1713737788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737788">1</a> by Mario Rodrigues
		posted on 1/3/2012 at 2:39 AM
		</div>
		<div class="comment_text"><p>This is pretty cool Ray and great timing.  Thanks for putting this together.  I was just working on a scoreboard app for a local soccer tournament this weekend.  I'm displaying the scoreboard on a 60" TV screen via Google TV.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwellingtonsoccer.com%2Fgo%2Fshootout%2F%3AiF4OtKYBv_IatoTH8B8tZ8Se7Y0&amp;cuid=3321886" rel="nofollow noopener" title="http://wellingtonsoccer.com/go/shootout/">http://wellingtonsoccer.com...</a></p><p>I can now use this code to add a cool effect when scores are posted.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737787">2</a> by Raymond Camden
		posted on 1/3/2012 at 2:40 AM
		</div>
		<div class="comment_text"><p>Cool - if you do - would you mind posting a picture?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737785">3</a> by Mario Rodrigues
		posted on 1/3/2012 at 5:09 AM
		</div>
		<div class="comment_text"><p>Sure, here's an image:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fweb1.wellingtonsoccer.com%2Fvault%2Fscoreboard.jpg%3AEzRAhVPYCFgk_QjHui6Wzj-MKqw&amp;cuid=3321886" rel="nofollow noopener" title="http://web1.wellingtonsoccer.com/vault/scoreboard.jpg">http://web1.wellingtonsocce...</a></p><p>and here's a screencast of it in action:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fwebauthor.viewscreencasts.com%2F81826d8cedda42fa9c479c9c302aa5a0%3Ap4m8WB0uaO_H63cD7F6M_QclBlk&amp;cuid=3321886" rel="nofollow noopener" title="https://webauthor.viewscreencasts.com/81826d8cedda42fa9c479c9c302aa5a0">https://webauthor.viewscree...</a></p><p>Works really well.</p><p>Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737789">4</a> by Raymond Camden
		posted on 1/3/2012 at 6:29 AM
		</div>
		<div class="comment_text"><p>Very cool. Thanks for sharing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737792">5</a> by Tim Leach
		posted on 1/3/2012 at 6:35 AM
		</div>
		<div class="comment_text"><p>The reason this didn't work:<br>$("something").fadeOut().fadeIn().fadeOut().html("14").fadeIn();</p><p>Is because you're dealing with queued events for the fades, which stack up and run in order each starting when the previous finishes. The change to the html does not get processed through the effect queue so it just happens immediately as that line is executed.</p><p>I think I explained that right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737790">6</a> by Raymond Camden
		posted on 1/3/2012 at 6:39 AM
		</div>
		<div class="comment_text"><p>Thanks Tim. I guess I just figured if I could chain em, it would be smart enough to put my non-animation stuff in the queue too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737791">7</a> by Tim Leach
		posted on 1/3/2012 at 8:12 PM
		</div>
		<div class="comment_text"><p>I believe it's done this way because the effects are a bunch of timed events and otherwise that command would take almost a second to execute it is actually waited, and throw off all kinda of slow script warnings.</p><p>So anything that takes time to run gets queued, and everything else happens instantly. I'm sure they never thought to queue a simple dom change like that because it's not any kind of effect. Or because it'd be a pain to write. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737889">8</a> by Raymond Camden
		posted on 1/3/2012 at 8:15 PM
		</div>
		<div class="comment_text"><p>Good points.</p><p>I'm surprised no one complained about my dig at the Falcons. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737893">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737893">9</a> by Tom Day
		posted on 1/4/2012 at 6:42 PM
		</div>
		<div class="comment_text"><p>The Falcons will shock the world.  ;)</p><p>Cool effect.  Trying to figure out where I can use it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737892">10</a> by GrumpyCFer
		posted on 1/4/2012 at 9:48 PM
		</div>
		<div class="comment_text"><p>This is the Pulsate effect in the jQuery UI library.  You can see all the effects here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjqueryui.com%2Fdocs%2Feffect%2F%3AX2pOrdagjFa25Fx8RsllidPUvpI&amp;cuid=3321886" rel="nofollow noopener" title="http://jqueryui.com/docs/effect/">http://jqueryui.com/docs/ef...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737891">11</a> by Raymond Camden
		posted on 1/4/2012 at 9:52 PM
		</div>
		<div class="comment_text"><p>Not surprised it's been done before. :)</p></div>
	</div>
</div>
		