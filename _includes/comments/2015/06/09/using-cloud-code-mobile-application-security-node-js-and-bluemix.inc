
<div class="comment" id="c_2070425782">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2070425782">1</a> by Raymond Camden
		posted on 6/9/2015 at 6:38 PM
		</div>
		<div class="comment_text"><p>As just an FYI, I was speaking with David via email and he pointed out you can set a context root for all routes so you don't have to include it in the routes like I did above:</p><p>var contextRoot = ibmconfig.getContextRoot();<br>appContext=express.Router();<br>app.use(contextRoot, appContext);</p><p>Of course, I assume you would only do this if you wanted 100% of your routes only available via your mobile app.</p></div>
	</div>
</div>
		