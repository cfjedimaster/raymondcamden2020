
<div class="comment" id="c_2390091448">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicraboy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2390091448">1</a> by Nic Raboy
		posted on 12/3/2015 at 4:23 AM
		</div>
		<div class="comment_text"><p>Do you know if there is a way to determine if the app is being run in a web browser?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2390530818">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2390530818">2</a> (In reply to <a href="#c_2390091448">#1</a>) by Raymond Camden
		posted on 12/3/2015 at 12:28 PM
		</div>
		<div class="comment_text"><p>Heh well that depends. Are you talking about:</p><p>Just running www via http.<br>Running via the browser platform.<br>Running via cordova serve. (Or ionic serve.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2390535559">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2390535559">3</a> (In reply to <a href="#c_2390091448">#1</a>) by Raymond Camden
		posted on 12/3/2015 at 12:32 PM
		</div>
		<div class="comment_text"><p>So "run as browser" - the device plugin reports platform is browser. That's easy.</p><p>For "run via http" and ionic serve, the device plugin doesn't exist at all.</p><p>You could check for window.cordova - it won't exist.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2390856604">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicraboy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2390856604">4</a> (In reply to <a href="#c_2390535559">#3</a>) by Nic Raboy
		posted on 12/3/2015 at 3:57 PM
		</div>
		<div class="comment_text"><p>All of the above is what I was looking for.  ng-cordova-oauth is not compatible in a browser and I want to make sure no one tries to use such.</p><p>Eliminates a lot of wasted time trying to troubleshoot someones problem when the result is they are using a service that is clearly outlined in the README as not compatible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2390875570">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2390875570">5</a> (In reply to <a href="#c_2390856604">#4</a>) by Raymond Camden
		posted on 12/3/2015 at 4:08 PM
		</div>
		<div class="comment_text"><p>I'd check for window.cordova.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2390878812">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicraboy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2390878812">6</a> (In reply to <a href="#c_2390875570">#5</a>) by Nic Raboy
		posted on 12/3/2015 at 4:10 PM
		</div>
		<div class="comment_text"><p>I'd have to re-evaluate, but I think window.cordova wasn't enough when it came to ionic serve.</p><p>I'll get back to you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2390887920">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2390887920">7</a> (In reply to <a href="#c_2390878812">#6</a>) by Raymond Camden
		posted on 12/3/2015 at 4:15 PM
		</div>
		<div class="comment_text"><p>don't allow if: window.cordova is null OR device.platform is browser.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2390918222">
	<div>
		<img src="https://disqus.com/api/users/avatars/nicraboy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2390918222">8</a> (In reply to <a href="#c_2390887920">#7</a>) by Nic Raboy
		posted on 12/3/2015 at 4:32 PM
		</div>
		<div class="comment_text"><p>Will give it a shot.  Thanks!</p></div>
	</div>
</div>
		