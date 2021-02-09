
<div class="comment" id="c_3468590145">
	<div>
		<img src="https://disqus.com/api/users/avatars/simonberman.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3468590145">1</a> by Simon Berman
		posted on 8/15/2017 at 6:13 AM
		</div>
		<div class="comment_text"><p>Hey Mate,</p><p>Thanks for the tips. How do you define the API gateway that calls this though?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3468953968">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3468953968">2</a> (In reply to <a href="#c_3468590145">#1</a>) by Raymond Camden
		posted on 8/15/2017 at 1:29 PM
		</div>
		<div class="comment_text"><p>I haven't tried it with the API Management feature yet. Is that what you meant - and have you tried it yourself yet to see what happens? It may "just work".</p></div>
	</div>
</div>
		
<div class="comment" id="c_3470054101">
	<div>
		<img src="https://disqus.com/api/users/avatars/simonberman.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3470054101">3</a> (In reply to <a href="#c_3468953968">#2</a>) by Simon Berman
		posted on 8/16/2017 at 12:47 AM
		</div>
		<div class="comment_text"><p>I gave it a go but cannot figure out how to do wildcards, so it seems you'd need to register every single variable path, clearly a blocker. Tried with path/{variable} which is pretty standard and works with AWS, but no. I think i'll have to use query string params, but that effectively means I'll need my services to handle multiple cases e.g. GET api/file?fileId=1234 would be used to get all files, and a specific file if an id is passed. Otherwise I'll have to do things like GET api/file/fileId?id=1234 which I find inelegant. I'm gonna go with option one for now I think as it will also keep the services a bit warmer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3470737756">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3470737756">4</a> (In reply to <a href="#c_3470054101">#3</a>) by Raymond Camden
		posted on 8/16/2017 at 12:45 PM
		</div>
		<div class="comment_text"><p>Hmm. So to be clear, you defined an API Gateway and it gave you a url, lets say http://foo. Are you saying you can't use http://foo/zoo, ie just add /SOMETHING to the end?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3529380940">
	<div>
		<img src="https://disqus.com/api/users/avatars/simonberman.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3529380940">5</a> (In reply to <a href="#c_3470737756">#4</a>) by Simon Berman
		posted on 9/22/2017 at 2:58 AM
		</div>
		<div class="comment_text"><p>Hey Mate, sorry for the delay. The problem is I can't put a dynamic value at the end, say an ID because there is no way to define a wildcard that I can see in API gateway. I'd have to explicitly map a URL for every ID, imagine the size of the swagger file!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3529727243">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3529727243">6</a> (In reply to <a href="#c_3529380940">#5</a>) by Raymond Camden
		posted on 9/22/2017 at 10:57 AM
		</div>
		<div class="comment_text"><p>Swagger does support dynamic values though. I'm definitely not a Swagger/OpenAPI expert, but I know that's supported. Something like {ID} or some such. Are you using the API gateway that is free and with OpenWhisk, or the "real" API Connect?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3535252271">
	<div>
		<img src="https://disqus.com/api/users/avatars/simonberman.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3535252271">7</a> (In reply to <a href="#c_3529727243">#6</a>) by Simon Berman
		posted on 9/25/2017 at 8:07 PM
		</div>
		<div class="comment_text"><p>Yeah, swagger does but API gateway does not it seems. Would using API connect give me this functionality do you think?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3537209287">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3537209287">8</a> (In reply to <a href="#c_3535252271">#7</a>) by Raymond Camden
		posted on 9/26/2017 at 7:45 PM
		</div>
		<div class="comment_text"><p>I should know this and I don't - so I apologize - but you can try API Connect for free - so it's a risk free test. Can you give it a shot and report back?</p></div>
	</div>
</div>
		