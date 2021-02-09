
<div class="comment" id="c_4619902736">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_H2AjDOgDK3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4619902736">1</a> by Peter Kassenaar
		posted on 9/18/2019 at 8:04 AM
		</div>
		<div class="comment_text"><p>Thanks for the article, very informative.</p><p>I had to add an (empty) .eslintrc however to the root of the cloned repo, to get it compiled.</p><p>Otherwise it would throw the <i>Error: No ESLint configuration found</i> message.</p><p>Best,<br>Peter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4620455834">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4620455834">2</a> (In reply to <a href="#c_4619902736">#1</a>) by Raymond Camden
		posted on 9/18/2019 at 6:23 PM
		</div>
		<div class="comment_text"><p>Sorry - I had the same issue when cloning to a new machine. When I can I'll commit that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4644755323">
	<div>
		<img src="https://disqus.com/api/users/avatars/chevilnonis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4644755323">3</a> by Che Vilnonis
		posted on 10/8/2019 at 3:20 PM
		</div>
		<div class="comment_text"><p>Thanks for this post - my deployed version just works and looks great! However, my local version [using 'now dev'] shows errors in the console and nothing is displayed. They are 'is not a valid JavaScript MIME type' for chunk-vendors[xxxxx].js and app[xxxxx].js. The console also shows SyntaxError: expected expression, got '&lt;'. Any ideas what I might be doing wrong to view the app locally?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4644760483">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4644760483">4</a> (In reply to <a href="#c_4644755323">#3</a>) by Raymond Camden
		posted on 10/8/2019 at 3:24 PM
		</div>
		<div class="comment_text"><p>If I remember right, I did not use "now dev" to run the *entire* local stack. I used it to run the local API, and used npm run dev to run the Vue app in a different port. Ie, I didn't use "now dev" for everything. I'll have to get back to you and see if I remember right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4644877377">
	<div>
		<img src="https://disqus.com/api/users/avatars/chevilnonis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4644877377">5</a> (In reply to <a href="#c_4644760483">#4</a>) by Che Vilnonis
		posted on 10/8/2019 at 4:57 PM
		</div>
		<div class="comment_text"><p>Makes sense. I tested and the Vue app/API do run separately. I tried editing 'nps.js' to use 'http://localhost:3000/api/npswrapper' but a CORS error message shows in the console. Hmmm. I'll keep trying...</p></div>
	</div>
</div>
		
<div class="comment" id="c_4645003498">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4645003498">6</a> (In reply to <a href="#c_4644877377">#5</a>) by Raymond Camden
		posted on 10/8/2019 at 6:34 PM
		</div>
		<div class="comment_text"><p>So, I just tested it DOES work, although it's a bit slow to setup. Just now dev, and then hit the URL. Make sure you add a .env file NPS_KEY=X, where X is your key.</p></div>
	</div>
</div>
		