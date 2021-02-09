
<div class="comment" id="c_3106070875">
	<div>
		<img src="https://disqus.com/api/users/avatars/glynn_bird.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3106070875">1</a> by glynn_bird
		posted on 1/18/2017 at 4:29 PM
		</div>
		<div class="comment_text"><p>Great post Raymond. I'm just getting started with OpenWhisk myself.</p><p>I notice that you have the publicKey and privateKey as constants (hard-coded) at the top of your OpenWhisk action. Is this best practice?</p><p>I know that you can pass in files of parameters with --params-file when creating the action. Is that better practice? Or doesn't it matter?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3106096675">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3106096675">2</a> (In reply to <a href="#c_3106070875">#1</a>) by Raymond Camden
		posted on 1/18/2017 at 4:40 PM
		</div>
		<div class="comment_text"><p>Ok so given that I've been a OW developer for approximately 5 minutes, here are my thoughts on THIS particular use case.</p><p>* The users of my REST API are not expected to have a key.<br>* I could use default params and keep my keys out of the code.<br>* But it... "feels" wrong to use params like this. To me, if I do this, I should expect/document folks to possibly pass params if they want to use their own keys.</p><p>Since I'm not doing that, using params for what is a config value seems wrong.</p><p>Oh - so that being said - when I built this action, I did NOT know I was going to need to zip it up. I could easily move the keys into config.json, require that, and keep the code a bit more pure. That I *would* do!</p></div>
	</div>
</div>
		