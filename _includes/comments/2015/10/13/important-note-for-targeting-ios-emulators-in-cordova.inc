
<div class="comment" id="c_2305131003">
	<div>
		<img src="https://disqus.com/api/users/avatars/adampresley.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2305131003">1</a> by Adam Presley
		posted on 10/13/2015 at 3:27 PM
		</div>
		<div class="comment_text"><p>Heh I ran into this problem as well. Nicely documented sir.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2305655118">
	<div>
		<img src="https://disqus.com/api/users/avatars/tommycarloswilliams.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2305655118">2</a> by Tommy-Carlos Williams
		posted on 10/13/2015 at 8:22 PM
		</div>
		<div class="comment_text"><p>If it's just about selecting the other versions (8.4 vs 9.0, etc), then the line after that is the issue.</p><p>Try changing it from:</p><p>if (!(args.device) &amp;&amp; <a href="http://disq.us/url?url=http%3A%2F%2Fargs.target%3A63CUpPJBI_sZxkverGKRXSdrkhw&amp;cuid=3321886" rel="nofollow noopener" title="args.target">args.target</a> &amp;&amp; validTargets.indexOf(<a href="http://disq.us/url?url=http%3A%2F%2Fargs.target%3A63CUpPJBI_sZxkverGKRXSdrkhw&amp;cuid=3321886" rel="nofollow noopener" title="args.target">args.target</a>) &lt; 0 ) {</p><p>to:</p><p>if (!(args.device) &amp;&amp; <a href="http://disq.us/url?url=http%3A%2F%2Fargs.target%3A63CUpPJBI_sZxkverGKRXSdrkhw&amp;cuid=3321886" rel="nofollow noopener" title="args.target">args.target</a> &amp;&amp; validTargets.indexOf(args.target.split(',')[0]) &lt; 0 ) {</p><p>It has been fixed, there just hasn't been a new release:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fapache%2Fcordova-ios%2Fcommit%2Fdf6929f83316f41bdd4b539fe5fdd54c28e187bc%3ASmdQoULeMV51NmuXZ-6xi3DRGl0&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/apache/cordova-ios/commit/df6929f83316f41bdd4b539fe5fdd54c28e187bc">https://github.com/apache/c...</a></p><p>The bad news, iPhone-6S will also have to be added to the validTargets, and that hasn't been done yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2305660171">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2305660171">3</a> (In reply to <a href="#c_2305655118">#2</a>) by Raymond Camden
		posted on 10/13/2015 at 8:25 PM
		</div>
		<div class="comment_text"><p>Is there a technical reason it can't just use the output of the *other* program? Or - not check at all and maybe just issue a warning "This target does not *seem* to be supported."</p></div>
	</div>
</div>
		
<div class="comment" id="c_2305666424">
	<div>
		<img src="https://disqus.com/api/users/avatars/tommycarloswilliams.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2305666424">4</a> (In reply to <a href="#c_2305660171">#3</a>) by Tommy-Carlos Williams
		posted on 10/13/2015 at 8:28 PM
		</div>
		<div class="comment_text"><p>Yeah, I honestly don't know. The up side is that these things usually only need to be updated once a year, heh. Maybe that's why.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2563842257">
	<div>
		<img src="https://disqus.com/api/users/avatars/samcroft.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2563842257">5</a> by Sam Croft
		posted on 3/11/2016 at 2:42 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing this, Raymond!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2563868713">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2563868713">6</a> (In reply to <a href="#c_2563842257">#5</a>) by Raymond Camden
		posted on 3/11/2016 at 2:59 PM
		</div>
		<div class="comment_text"><p>You are welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3040673782">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3040673782">7</a> (In reply to <a href="#c_3040454542">#0</a>) by Raymond Camden
		posted on 12/7/2016 at 4:40 PM
		</div>
		<div class="comment_text"><p>Was it a valid result when you ran the list command?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3042704209">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3042704209">8</a> (In reply to <a href="#c_3042461889">#0</a>) by Raymond Camden
		posted on 12/8/2016 at 7:09 PM
		</div>
		<div class="comment_text"><p>Um - if everything broke, I'm not sure what to tell you. Obviously this post may not work as described now since it is over a year old.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3092311116">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_LcUZd79XMk.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3092311116">9</a> by Manuel Castillo
		posted on 1/10/2017 at 2:09 PM
		</div>
		<div class="comment_text"><p>Hi, I can't running emulator. The process stop before checking the dependences and not continue.<br>No show any error, only freeze.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3092393491">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3092393491">10</a> (In reply to <a href="#c_3092311116">#9</a>) by Raymond Camden
		posted on 1/10/2017 at 3:05 PM
		</div>
		<div class="comment_text"><p>Not sure what to suggest if you don't have an error. I'd consider filing a bug report on the Apache Cordova project.</p></div>
	</div>
</div>
		