
<div class="comment" id="c_2357565719">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_sx4bMleYOf.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2357565719">1</a> by тимофей чернявский
		posted on 11/13/2015 at 11:28 AM
		</div>
		<div class="comment_text"><p>Hello!</p><p>Thank you for this articles!</p><p>looks like you have a lot of experience working with file api. I have a new problem related with ID3 tags reading.</p><p>As You can see on attached screenshot - some file error occurs somewhere in promise callback..or somewhere else...I cant understand why. Maybe You know why this error happen usually?</p><p>Explanation of error:<br>"The operation cannot be performed on the current state of the interface object. For example, the state that was cached in an interface object has changed since it was last read from disk."</p></div>
	</div>
</div>
		
<div class="comment" id="c_2357778505">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2357778505">2</a> (In reply to <a href="#c_2357565719">#1</a>) by Raymond Camden
		posted on 11/13/2015 at 2:28 PM
		</div>
		<div class="comment_text"><p>It appears as if an error in the promise isn't being handled. Have you tried adding an error handler to the code working with the promise?</p></div>
	</div>
</div>
		