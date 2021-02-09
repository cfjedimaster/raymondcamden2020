
<div class="comment" id="c_1714083791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083791">1</a> by Raymond Camden
		posted on 9/5/2014 at 3:08 PM
		</div>
		<div class="comment_text"><p>I wanted to share a small issue I ran into with LiveReload. In my app, I've got a condition when if you are offline, you are sent to /offline and that is it - you can't do anymore. To test, I modified my offline check to ALWAYS be true. I confirmed I got the nice error, and carried on.</p><p>But then I noticed something. As I edited code, the view never changed. I then realized what was happening. LiveReload was reloading the app at /offline. I was "stuck" there URL wise and since it was an app, I couldn't fix it by hand.</p><p>imo, it should really LiveReload back to the beginning of the app. I filed a bug for this here: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fdriftyco%2Fionic%2Fissues%2F2144%3ADBBundHyZ_7WUD8iNF95rKzNDG8&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/driftyco/ionic/issues/2144">https://github.com/driftyco...</a></p></div>
	</div>
</div>
		