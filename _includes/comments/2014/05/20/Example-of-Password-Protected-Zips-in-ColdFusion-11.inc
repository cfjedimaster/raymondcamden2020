
<div class="comment" id="c_1714082982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082982">1</a> by Ty Whalin
		posted on 5/21/2014 at 4:43 AM
		</div>
		<div class="comment_text"><p>Looks like I will need to upgrade to the newest version of CF. Tried using the new generatePassword() code and it would not work right. Read a little and realized it was about CF 11.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082981">2</a> by Raymond Camden
		posted on 5/21/2014 at 5:00 AM
		</div>
		<div class="comment_text"><p>Eh? That UDF is old - and should work in many versions of CF. Just the password stuff in cfzip is new. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2516811388">
	<div>
		<img src="https://disqus.com/api/users/avatars/carehart.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2516811388">3</a> by Charlie Arehart
		posted on 2/16/2016 at 5:27 PM
		</div>
		<div class="comment_text"><p>Hey, Ray, I wonder if that problem with OS X would be solved if you changed the encryptionAlgorithm to "standard"?</p><p>I notice in the docs that it says that if password is specified, it changes to using "AES-256" (one of the 3 optional values for that algorithm). Perhaps forcing it to "standard" or the other, "AES-128" could make it then work with OS X.</p><p> I'm afraid I haven't got it available to test, but if you or others get a chance, it could be helpful to confirm here if that works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2517495924">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2517495924">4</a> (In reply to <a href="#c_2516811388">#3</a>) by Raymond Camden
		posted on 2/16/2016 at 9:06 PM
		</div>
		<div class="comment_text"><p>Well to be fair, it 'works' on OSX, just not with Finder's extractor. :) I don't have CF11 around myself so won't be testing, but for folks reading this in the future, your comment may help them.</p></div>
	</div>
</div>
		