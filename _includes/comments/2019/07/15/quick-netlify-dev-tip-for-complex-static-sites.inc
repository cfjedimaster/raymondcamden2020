
<div class="comment" id="c_4540638761">
	<div>
		<img src="https://disqus.com/api/users/avatars/remotesynth.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4540638761">1</a> by remotesynth
		posted on 7/15/2019 at 6:12 PM
		</div>
		<div class="comment_text"><p>Good tip. I discovered this as well because my Certified Fresh Events side needs to publish future posts, which requires the --buildFuture flag when running. However, you mention modifying <a href="http://disq.us/url?url=http%3A%2F%2Fstart.sh%3ARyYBTmaKVn048kWD7rd3N4Q2_DE&amp;cuid=3321886" rel="nofollow noopener" title="start.sh">start.sh</a>. Not to be too ignorant, but can you explain? Will Netlify Dev use that to override the usual command?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4540647747">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4540647747">2</a> (In reply to <a href="#c_4540638761">#1</a>) by Raymond Camden
		posted on 7/15/2019 at 6:19 PM
		</div>
		<div class="comment_text"><p>My understanding is that netlify dev "sniffs" your environment to figure out what you use. In my case, Jekyll, which has a standard way of starting. <a href="http://disq.us/url?url=http%3A%2F%2Fstart.sh%3ARyYBTmaKVn048kWD7rd3N4Q2_DE&amp;cuid=3321886" rel="nofollow noopener" title="start.sh">start.sh</a> is not a Jekyll or Netllify thing, it's just a script I wrote for my own purposes. So what my tip does is to tell Netlify Dev to *not* to try to start my server but to run my specific command instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4540648448">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4540648448">3</a> (In reply to <a href="#c_4540647747">#2</a>) by Raymond Camden
		posted on 7/15/2019 at 6:19 PM
		</div>
		<div class="comment_text"><p>And to add more context, I updated my <a href="http://disq.us/url?url=http%3A%2F%2Fstart.sh%3ARyYBTmaKVn048kWD7rd3N4Q2_DE&amp;cuid=3321886" rel="nofollow noopener" title="start.sh">start.sh</a> to run netllify dev with the -c and the right values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4540660724">
	<div>
		<img src="https://disqus.com/api/users/avatars/remotesynth.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4540660724">4</a> (In reply to <a href="#c_4540648448">#3</a>) by remotesynth
		posted on 7/15/2019 at 6:28 PM
		</div>
		<div class="comment_text"><p>Ah, yes, I see that now in the screenshot. You are not running netlify dev directly but just <a href="http://disq.us/url?url=http%3A%2F%2Fstart.sh%3ARyYBTmaKVn048kWD7rd3N4Q2_DE&amp;cuid=3321886" rel="nofollow noopener" title="start.sh">start.sh</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4540664007">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4540664007">5</a> (In reply to <a href="#c_4540660724">#4</a>) by Raymond Camden
		posted on 7/15/2019 at 6:30 PM
		</div>
		<div class="comment_text"><p>Yeah sorry if not clear. Normal routine was to run <a href="http://disq.us/url?url=http%3A%2F%2Fstart.sh%3ARyYBTmaKVn048kWD7rd3N4Q2_DE&amp;cuid=3321886" rel="nofollow noopener" title="start.sh">start.sh</a> which just ran jekyll and said, "use this config instead". That's it. Then I tried netlify dev, which worked, but was slow. Then I found the CLI argument, and it worked great, so I modified <a href="http://disq.us/url?url=http%3A%2F%2Fstart.sh%3ARyYBTmaKVn048kWD7rd3N4Q2_DE&amp;cuid=3321886" rel="nofollow noopener" title="start.sh">start.sh</a> to use netlify dev w/ the 'better' config.</p></div>
	</div>
</div>
		