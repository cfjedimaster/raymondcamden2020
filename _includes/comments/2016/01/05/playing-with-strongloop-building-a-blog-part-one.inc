
<div class="comment" id="c_2442550290">
	<div>
		<img src="https://disqus.com/api/users/avatars/jakerella.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2442550290">1</a> by Jordan Kasper
		posted on 1/6/2016 at 2:03 PM
		</div>
		<div class="comment_text"><p>A few things to note...</p><p>1) You mention a "default routes.js file", but it's actually called "root.js" and defines the root route (a status check for the LB app).</p><p>2) I think it's interesting that you chose to write a templated server-side app versus using LB as a simple data API and using a SPA front end. StrongLoop even provides an Angular service generator so on the front end you can simply call `entry.find(...)`</p><p>3) On the blog entry detail page, why not just look up by slug and force slugs to be unique?</p><p>4) The in-memory is limited, yes... but setting up a local mongo instance is pretty darn easy. ;) That said, I look forward to seeing your solution to save the in-memory DB to a file and pre-load it on boot. :D</p><p>Good stuff so far!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2442563624">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2442563624">2</a> (In reply to <a href="#c_2442550290">#1</a>) by Raymond Camden
		posted on 1/6/2016 at 2:13 PM
		</div>
		<div class="comment_text"><p>1) Ah yeah - sorry - I forgot I had renamed it when I edited it to include my new routes.</p><p>2) I like Angular... a lot. But for a blog, the use of a SPA doesn't feel appropriate to me at all. Not that I think people will hit the site w/ JS turned off or anything like that, but I don't think a SPA makes sense for a content site like a blog. I *am* planning on using Angular though for the admin editor. (And - spoiler - I may go crazy and wrap it in Electron.)</p><p>3) In my blog, I've often used the same title, for example, "November is National Adoption Month". I've got 5k+ blog entries here - it happens. ;)</p><p>4) Wait - I thought if I mentioned it - you guys would just build it, right?</p><p>On a serious note - I'm thinking more about using a boot script to seed some data and not worry about changes per se. As an example, for this blog demo, I would have just seeded a few blog entries and categories and not care about changes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2442579419">
	<div>
		<img src="https://disqus.com/api/users/avatars/jakerella.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2442579419">3</a> (In reply to <a href="#c_2442563624">#2</a>) by Jordan Kasper
		posted on 1/6/2016 at 2:24 PM
		</div>
		<div class="comment_text"><p>On the generating data note: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fstrongloop-training%2Fcoffee-time%2Fblob%2Fmaster%2Fserver%2Fboot%2Fcreate-sample-model-data.js%3AKSn3Kj2pFZmISX_oQKTrG1-eE94&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/strongloop-training/coffee-time/blob/master/server/boot/create-sample-model-data.js">https://github.com/stronglo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2442587096">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2442587096">4</a> (In reply to <a href="#c_2442579419">#3</a>) by Raymond Camden
		posted on 1/6/2016 at 2:29 PM
		</div>
		<div class="comment_text"><p>Nice - I assume I wouldn't need automigrate for an in-memory db since it will always be empty, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2442639543">
	<div>
		<img src="https://disqus.com/api/users/avatars/jakerella.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2442639543">5</a> (In reply to <a href="#c_2442587096">#4</a>) by Jordan Kasper
		posted on 1/6/2016 at 3:05 PM
		</div>
		<div class="comment_text"><p>That's correct.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2443269572">
	<div>
		<img src="https://disqus.com/api/users/avatars/rszehnder.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2443269572">6</a> by Robert Zehnder
		posted on 1/6/2016 at 8:47 PM
		</div>
		<div class="comment_text"><p>Good stuff Ray. Look forward to the rest of it. Might be able to put Angular/StrongLoop to good use....</p></div>
	</div>
</div>
		