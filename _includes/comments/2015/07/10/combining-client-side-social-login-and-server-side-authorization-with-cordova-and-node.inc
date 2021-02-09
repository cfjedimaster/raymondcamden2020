
<div class="comment" id="c_2129168286">
	<div>
		<img src="https://disqus.com/api/users/avatars/chandramuralis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2129168286">1</a> by chandramuralis
		posted on 7/10/2015 at 7:54 PM
		</div>
		<div class="comment_text"><p>I always had this in my mind but never got clarified. Thanks for this article.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2253246957">
	<div>
		<img src="https://disqus.com/api/users/avatars/haluksevener.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2253246957">2</a> by Haluk Sevener
		posted on 9/14/2015 at 5:38 PM
		</div>
		<div class="comment_text"><p>Thanks for your post. Your solution is good and pretty straightforward. But what about Google Sign In? You cannot just send back the token to your server, because Google offers different APIs for web and server clients and they cannot share tokens. How can you verify the user on both mobile client and server?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2254661871">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2254661871">3</a> (In reply to <a href="#c_2253246957">#2</a>) by Raymond Camden
		posted on 9/15/2015 at 1:16 PM
		</div>
		<div class="comment_text"><p>I haven't tested this, but I don't think you are correct. This doc (<a href="https://disq.us/url?url=https%3A%2F%2Fdevelopers.google.com%2Fidentity%2Fprotocols%2FOAuth2UserAgent%29%3At1lmmrVNNUfiB3TM4stFSTprGz4&amp;cuid=3321886" rel="nofollow noopener" title="https://developers.google.com/identity/protocols/OAuth2UserAgent)">https://developers.google.c...</a> shows an access token being returned, and the SO link I used above shows authenticating the AT for Google.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2258346249">
	<div>
		<img src="https://disqus.com/api/users/avatars/haluksevener.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2258346249">4</a> (In reply to <a href="#c_2254661871">#3</a>) by Haluk Sevener
		posted on 9/17/2015 at 12:02 PM
		</div>
		<div class="comment_text"><p>wow wow wow, thanks for pointing out that doc page. I've been trying to figure out a way to solve this problem for days. I have non-trivial workflows in my mind which are hard to implement. But thanks to you I'm glad to see that one can easily verify a token, which was gathered via a JavaScript client, by just sending it back to the following Google API endpoint:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.googleapis.com%2Foauth2%2Fv1%2Ftokeninfo%3Faccess_token%3D1%2FfFBGRNJru1FQd44AzqT3Zg%3AfZmNRz9lbADx7s_KcMxWzEcZY40&amp;cuid=3321886" rel="nofollow noopener" title="https://www.googleapis.com/oauth2/v1/tokeninfo?access_token=1/fFBGRNJru1FQd44AzqT3Zg">https://www.googleapis.com/...</a></p><p>You only need to change the value of access_token query parameter to what you've got and that's all!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2258430714">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2258430714">5</a> (In reply to <a href="#c_2258346249">#4</a>) by Raymond Camden
		posted on 9/17/2015 at 1:05 PM
		</div>
		<div class="comment_text"><p>Glad to help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3307482249">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_B5pZ0IiBMT.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3307482249">6</a> by Max Power
		posted on 5/15/2017 at 10:27 PM
		</div>
		<div class="comment_text"><p>Great post! Does this idea still make sense to you today? i'm looking around some similar concept and this idea make sense for me..</p><p>p.d.: Hopefully you will excuse my level of English.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3308467519">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3308467519">7</a> (In reply to <a href="#c_3307482249">#6</a>) by Raymond Camden
		posted on 5/16/2017 at 2:01 PM
		</div>
		<div class="comment_text"><p>Um, well, the Ionic code is somewhat old, and there are newer ways of doing social login (see Ionic's own User service). The general principle though remains the same I believe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3310202865">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_B5pZ0IiBMT.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3310202865">8</a> (In reply to <a href="#c_3308467519">#7</a>) by Max Power
		posted on 5/17/2017 at 1:03 PM
		</div>
		<div class="comment_text"><p>Yes, of course, I meant the general principle of the idea. Thanks alot for the reply!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3440722767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3440722767">9</a> by Micaragua
		posted on 7/28/2017 at 8:03 PM
		</div>
		<div class="comment_text"><p>is it possible to use FB login code flow instead of access token one? in other words is it possible to obtain oauth code by the client, sent it to server, and exchange oauth code to access token ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3440957470">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3440957470">10</a> (In reply to <a href="#c_3440722767">#9</a>) by Raymond Camden
		posted on 7/28/2017 at 10:03 PM
		</div>
		<div class="comment_text"><p>Not quite sure I get you - the user is logging in via FB.</p></div>
	</div>
</div>
		