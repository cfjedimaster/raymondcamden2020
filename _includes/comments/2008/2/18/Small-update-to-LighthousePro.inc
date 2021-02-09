
<div class="comment" id="c_1713677141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677141">1</a> by Gareth
		posted on 2/18/2008 at 6:35 PM
		</div>
		<div class="comment_text"><p>Excellent!  My coworker had some issues with this previously (much swearing and shouting ensued which we could usually tell came from a long form post and was welcomed with a "Please login" screen).  He was ecstatic :)  I use Firefox, so I was able to keep my form posts when I clicked back, so it wasn't too much of an issue for me, but it will definitely be a nice addition.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677157">2</a> by Chad
		posted on 2/18/2008 at 7:45 PM
		</div>
		<div class="comment_text"><p>I have not used Litehouse and i am not familar with the code.</p><p>How does the form variable still exists when you get sent to the login screen?  If you were to do a cflocation and send them to the login page the form variable would not exist.  Is login displayed in the application.cfm file if the user's session is old?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677158">3</a> by Raymond Camden
		posted on 2/18/2008 at 7:47 PM
		</div>
		<div class="comment_text"><p>I use a cfinclude to load in the login page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677159">4</a> by Gareth
		posted on 2/20/2008 at 9:38 PM
		</div>
		<div class="comment_text"><p>Hey Ray,<br>I added this code to our server (removed the old code and put the new files up on the server).  Everything works great except for the "Reports" page.  It works nicely in Firefox, but IE is throwing JS errors.  I would troubleshoot it myself, but I figured there may be something quick and easy I'm missing.  The 2 stats.cfm pages look to be exactly the same, so I'm not sure what changed from the last version to this one.  The errors received are:<br>Line: 98 (and 117, 136, 155, 174)<br>Char: 1<br>Error: Object Expected<br>Code: 0<br>URL: http://myurl/stats.cfm</p><p>Any ideas?<br>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677160">5</a> by Raymond Camden
		posted on 2/20/2008 at 9:40 PM
		</div>
		<div class="comment_text"><p>Anyway you can send me your URL?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677163">6</a> by Gareth
		posted on 2/20/2008 at 11:37 PM
		</div>
		<div class="comment_text"><p>I would love to but the site is hosted internally :(  As they're all JS errors, would saving the HTML page be enough?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677146">7</a> by Raymond Camden
		posted on 2/20/2008 at 11:42 PM
		</div>
		<div class="comment_text"><p>Sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677145">8</a> by Gareth
		posted on 2/20/2008 at 11:44 PM
		</div>
		<div class="comment_text"><p>Looking at it again, I'm guessing it's this "/CFIDE/scripts/CF_RunActiveContent.js"  This file does not exist, but I wasn't sure what CF was including to get that to show up (plus another guy set up the old LighthousePro, but I figured if I left the default.cfm alone and just copied over all of the other files, I'd be OK...but apparently not quite).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677156">9</a> by Gareth
		posted on 2/21/2008 at 12:25 AM
		</div>
		<div class="comment_text"><p>Yup, that was it.  We've got some strange setup with CF here, so I just created a new CFIDE/scripts folder under the actual web directory (not the best way to do it, I know) and put the .js file in there and everything's working correctly now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677166">10</a> by Jeff Gladnick
		posted on 11/28/2009 at 9:14 AM
		</div>
		<div class="comment_text"><p>I have the same issue - I was able to use your code to successfully save forms, BUT it will not save uploaded files (like if i had a form for a file attribute on it).</p><p>Everything else gets saved except the attachment.... any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677165">11</a> by Raymond Camden
		posted on 11/28/2009 at 9:12 PM
		</div>
		<div class="comment_text"><p>Check out how BlogCFC does it. I believe I actually delete the file but warn the user so they can reupload it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677164">12</a> by Jeff Gladnick
		posted on 11/28/2009 at 11:17 PM
		</div>
		<div class="comment_text"><p>Hmmm - does that mean there is no way to do it?</p><p>I suppose i could just allow the images to be uploaded and stored in a temp file, and then put some info in the session to move/rename the files after the form was ultimately submitted.</p><p>However that sounds a bit complex, since it would have to handle multiple forms, and I'd probably also have to create some cleanup functionality since some people inevitably would not finish their forms.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677167">13</a> by Raymond Camden
		posted on 11/29/2009 at 3:03 AM
		</div>
		<div class="comment_text"><p>Well sure you can handle it - you just need to ensure you do the cleanup later if the user doesn't actually login again. In that first code block, just imagine a check against form.somefile, where form.somefile is a fileupload. If a value is there, process the upload, and after the user logs in, then you can do whatever you want to with it.</p><p>It's definitely possible, just non-trivial.</p></div>
	</div>
</div>
		