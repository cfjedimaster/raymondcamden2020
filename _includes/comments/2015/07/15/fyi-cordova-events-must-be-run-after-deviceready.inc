
<div class="comment" id="c_2137810760">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_quMJ7xwcIb.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2137810760">1</a> by Nick
		posted on 7/15/2015 at 2:44 PM
		</div>
		<div class="comment_text"><p>If you're trying to capture an event that may occur before or after device ready you should be able to work around it using `addStickyDocumentEventHandler`, an undocumented (?) cordova method -- I believe it's what's used for 'deviceReady'. I used Jamie Sutherland's method of adding a sticky document event handler  Eddy Verbruggen's Custom Url Scheme plugin: <a href="https://disq.us/url?url=https%3A%2F%2Fmedium.com%2Fangularjs-articles%2Fdeep-linking-in-ionic-mobile-applications-44d8b4685bb3%3AuxoXuTeiTLjBljtsx9LX8ZWXfMM&amp;cuid=3321886" rel="nofollow noopener" title="https://medium.com/angularjs-articles/deep-linking-in-ionic-mobile-applications-44d8b4685bb3">https://medium.com/angularj...</a> .</p><p>You should be able to do a similar catch-rethrow pattern to listen for events before `deviceready`, but instead of firing the event in 'handleupenurl', fire it in your 'deviceready' listener. Don't forget to remove, then re-add the sticky listener after you've 'caught' the event though!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2160238259">
	<div>
		<img src="https://disqus.com/api/users/avatars/jesse_monroy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2160238259">2</a> by Jesse Monroy
		posted on 7/27/2015 at 10:59 PM
		</div>
		<div class="comment_text"><p>Raymond,<br>thanks for the blog post. This is a constant issue for newbies on the forums. I'm very happy to have this blog to point to.<br>Jesse</p></div>
	</div>
</div>
		
<div class="comment" id="c_2160406626">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2160406626">3</a> (In reply to <a href="#c_2160238259">#2</a>) by Raymond Camden
		posted on 7/28/2015 at 1:05 AM
		</div>
		<div class="comment_text"><p>Glad my mistakes help. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2196236491">
	<div>
		<img src="https://disqus.com/api/users/avatars/jesse_monroy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2196236491">4</a> (In reply to <a href="#c_2160406626">#3</a>) by Jesse Monroy
		posted on 8/15/2015 at 11:43 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>this is just to let you know some of us on the Google Group have put together</p><p>Top Mistakes by Developers new to Cordova/Phonegap<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fjessemonroy650%2Ftop-phonegap-mistakes%2Fblob%2Fmaster%2Fnew-to-Phonegap.md%3Azub-EbahoEhcBCbKGJCxiPCF4AA&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/jessemonroy650/top-phonegap-mistakes/blob/master/new-to-Phonegap.md">https://github.com/jessemon...</a></p><p>This blog post is being referenced. Thanks for writing it.</p><p>Jesse</p></div>
	</div>
</div>
		
<div class="comment" id="c_2196749294">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2196749294">5</a> (In reply to <a href="#c_2196236491">#4</a>) by Raymond Camden
		posted on 8/16/2015 at 11:35 AM
		</div>
		<div class="comment_text"><p>I have some comments on this - shall I file issues or reply here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2197278755">
	<div>
		<img src="https://disqus.com/api/users/avatars/jesse_monroy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2197278755">6</a> (In reply to <a href="#c_2196749294">#5</a>) by Jesse Monroy
		posted on 8/16/2015 at 7:11 PM
		</div>
		<div class="comment_text"><p>Either way. Or, I'd be happy to modify the document, or make additions, if you like. Jesse</p></div>
	</div>
</div>
		