
<div class="comment" id="c_1885294215">
	<div>
		<img src="https://disqus.com/api/users/avatars/pmuellr.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1885294215">1</a> by pmuellr
		posted on 3/3/2015 at 4:24 PM
		</div>
		<div class="comment_text"><p>&gt; Note that the app has to be unique across all of Bluemix</p><p>Actually, "host" must unique across the domain you use (default: <a href="http://disq.us/url?url=http%3A%2F%2Fmybluemix.net%3AXUOPOlI6Kr6To440D7NGiEcUCYA&amp;cuid=3321886" rel="nofollow noopener" title="mybluemix.net">mybluemix.net</a>).  But the app "name" only has to be unique within a space in an org.  So you can use the same app name in a different space in the same org, or of course in any other org.  Actually, same with services; you can use the same service name across multiple spaces in Cloud Foundry, the names are scoped to the org/space.</p><p>&gt; Unfortunately you can’t use npm to do the install, but hopefully in the future those tools will be published there.</p><p>`cf` is a binary written in Go.  I suspect it will never be published in npm :-)</p><p>&gt; cf push appname</p><p>I recommend always using a `manifest.yml` to list your app metadata, including the name.  Then you can just `cf push` instead of providing the `appname` part.  Sadly, I think `cf push` is the only command that bothers reading your `manifest.yml` to get the app name; all the other commands you might use require the app name.</p><p>I recommend using Ryan Baxter's awesome CF Manifest Generator - <a href="http://disq.us/url?url=http%3A%2F%2Fcfmanigen.mybluemix.net%2F%3AGcV6_v5gC-00Id_J0KuP8uh0_F8&amp;cuid=3321886" rel="nofollow noopener" title="http://cfmanigen.mybluemix.net/">http://cfmanigen.mybluemix....</a> - to build your manifest.  I always just do the preview, and then copy/paste the results into my own `manifest.yml` file.  It's VERY easy to screw up your manifest - it's YAML, so indentation is important, and if you aren't familiar with YAML, is somewhat non-intuitive.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1885315188">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1885315188">2</a> (In reply to <a href="#c_1885294215">#1</a>) by Raymond Camden
		posted on 3/3/2015 at 4:36 PM
		</div>
		<div class="comment_text"><p>Awesome - thanks for sharing this Patrick. (For readers who don't know, Patrick works with me at IBM and is a Bluemix evangelist.)</p></div>
	</div>
</div>
		