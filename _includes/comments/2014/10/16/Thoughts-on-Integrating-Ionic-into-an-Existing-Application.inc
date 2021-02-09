
<div class="comment" id="c_1714084177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084177">1</a> by Brian Hamana
		posted on 10/16/2014 at 8:51 PM
		</div>
		<div class="comment_text"><p>So, sounds like there is no straight-forward 'formula' to integrate ionic into a pre-existing Cordova/PG + Angualr app ?  If Ionic itself is basically just a set of Angular-specific CSS and directives, I would think there should/could be a way to bring in just the CSS and JS and not use the CLI ?  I may be missing something as I have no experience with Ionic yet.</p><p>The only online resource I found discussing the topic is this Ionic forum post - <a href="http://disq.us/url?url=http%3A%2F%2Fforum.ionicframework.com%2Ft%2Fadding-ionic-css-js-components-to-an-existing-phonegap-angularjs-project%2F1285%3AASc_m7oCRP1mECy1ZtW8RtEAJ-Q&amp;cuid=3321886" rel="nofollow noopener" title="http://forum.ionicframework.com/t/adding-ionic-css-js-components-to-an-existing-phonegap-angularjs-project/1285">http://forum.ionicframework...</a>.</p><p>I haven't tried it yet, but it lays out steps to integrate the css &amp; js into your pre-existing Angular app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084178">2</a> by Brian Hamana
		posted on 10/16/2014 at 8:52 PM
		</div>
		<div class="comment_text"><p>BTW - Thanks for the quick response &amp; write-up !!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084176">3</a> by Raymond Camden
		posted on 10/16/2014 at 8:54 PM
		</div>
		<div class="comment_text"><p>@Brian: Oh, I didn't even think of Angular -&gt; Ionic. I'd imagine it would be much easier actually. Get the CSS, get the JS included, and then you would inject the items from Ionic you need into your controllers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084179">4</a> by Todd Halfpenny
		posted on 10/17/2014 at 2:53 PM
		</div>
		<div class="comment_text"><p>@Brian, @Raymond, I have done just that. I've used bower to install Ionic and I have a simple grunt task to move over the various resources (js, scss, fonts) into my project structure.</p></div>
	</div>
</div>
		