
<div class="comment" id="c_2923508967">
	<div>
		<img src="https://disqus.com/api/users/avatars/nathanaela.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2923508967">1</a> by Nathanael A
		posted on 9/28/2016 at 7:14 PM
		</div>
		<div class="comment_text"><p>One minor note -- you do not need to uninstall the app on permission changes; you do need to do the rebuild of the app like you mentioned in the prior paragraph (i.e. tns run android).      LiveSync/LiveEdit only changes the css, html, xml, and js files in the app/ folder.   Anything that changes the app/App_Resources or the node_modules (i.e. adding/removing a plugin) requires a full rebuild.     So anything that isn't a css/html/xml/js file in your app/ folder, do a full rebuild.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2923553025">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2923553025">2</a> (In reply to <a href="#c_2923508967">#1</a>) by Raymond Camden
		posted on 9/28/2016 at 7:37 PM
		</div>
		<div class="comment_text"><p>For a while there I was trying a bunch of stuff at once, so it's possible I did that *along with* a proper build.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2934581426">
	<div>
		<img src="https://disqus.com/api/users/avatars/Merott.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2934581426">3</a> by Merott Movahedi
		posted on 10/5/2016 at 1:55 PM
		</div>
		<div class="comment_text"><p>'noEmitOnError' means don't output JavaScript code if there are errors. Setting it to 'false' tells the TS compiler to still emit JavaScript code, even if there are errors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2934590467">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2934590467">4</a> (In reply to <a href="#c_2934581426">#3</a>) by Raymond Camden
		posted on 10/5/2016 at 2:02 PM
		</div>
		<div class="comment_text"><p>I hate the double negative there - my brain just can't handle it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2934595220">
	<div>
		<img src="https://disqus.com/api/users/avatars/Merott.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2934595220">5</a> (In reply to <a href="#c_2934590467">#4</a>) by Merott Movahedi
		posted on 10/5/2016 at 2:05 PM
		</div>
		<div class="comment_text"><p>Yeah, naming booleans with negative terms should be banned... :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2993045476">
	<div>
		<img src="https://disqus.com/api/users/avatars/randycc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2993045476">6</a> by Randy Johnson
		posted on 11/9/2016 at 1:19 PM
		</div>
		<div class="comment_text"><p>"LiveSync does not create new builds" Yes, I learned this the hard way.  I was following a tutorial... It was working for everyone else that I asked for help.  Very discouraging until I figured this out and then I felt like a rock star.</p></div>
	</div>
</div>
		