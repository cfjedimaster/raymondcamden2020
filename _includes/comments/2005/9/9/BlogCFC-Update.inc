
<div class="comment" id="c_1713620751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620751">1</a> by rd
		posted on 9/10/2005 at 2:27 AM
		</div>
		<div class="comment_text"><p>Seems like you would want the urlEncodedFormat outside the whole line. I never laugh at people's bugs... unless they are laughing first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620761">2</a> by Raymond Camden
		posted on 9/10/2005 at 2:31 AM
		</div>
		<div class="comment_text"><p>Yeah, you got it. I basically reversed the getFIleFromPath and urlEncoded calls. I only needed to urlencoded the file name, since it could have a space or wierd thing in it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620767">3</a> by Scott Stroz
		posted on 9/10/2005 at 4:32 AM
		</div>
		<div class="comment_text"><p>I assume you mean other than you gratuitous use of the &lt;font&gt; tag? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620764">4</a> by Bill
		posted on 10/22/2005 at 11:22 PM
		</div>
		<div class="comment_text"><p>I believe you may also run into an issue here with just the partial path defined, if running the SES urls.  The full SES path is prepended for mode=entry.  Easy to fix by defining the full path.</p></div>
	</div>
</div>
		