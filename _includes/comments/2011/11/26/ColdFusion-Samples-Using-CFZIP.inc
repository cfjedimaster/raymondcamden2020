
<div class="comment" id="c_1713736972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736972">1</a> by Shawn Bowman
		posted on 11/29/2011 at 12:29 AM
		</div>
		<div class="comment_text"><p>Nice.  The one thing I think I haven't really nailed down is uploading of images.  I made it work for the most part using &lt;cffileupload&gt; but I know it is far from perfect.</p><p>I was tasked with creating a photo gallery of sorts and what I did was use &lt;cffileupload&gt; to allow the administrator to upload all the photos needed via the flash uploader which I know isn't ideal, but it worked.</p><p>I have been trying to figure out a very user-friendly way of allowing 10-20 images to be uploaded at once and also allowing the ability to put captions in for each photo.  I broke down and just let them upload all the images first then come back and show a page with the images and allow them to put captions after the upload.</p><p>I think Photo Galleries are one thing that programmers always tend to have an issue with or at least from the standpoint of a very user-friendly one on the backend. CF made it easier to an extent with image resizing and the cffileupload.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736973">2</a> by Shawn Bowman
		posted on 11/29/2011 at 12:30 AM
		</div>
		<div class="comment_text"><p>Not to mention the picture names were uploaded to a DB, then the captions were placed into the DB after the upload.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736974">3</a> by Raymond Camden
		posted on 11/29/2011 at 12:32 AM
		</div>
		<div class="comment_text"><p>I think your approach (upload first, then edit captions) makes sense. You don't want too much going on at once probably anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736977">4</a> by Henry
		posted on 11/29/2011 at 6:32 PM
		</div>
		<div class="comment_text"><p>Ray,<br>I've been playing around with this a bit and noticing on page refresh the files are re-written. I guess they are staying in memory. If my suspicion is true, what do you suggest to remove from memory?<br>Thanks<br>Henry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736982">5</a> by Raymond Camden
		posted on 11/29/2011 at 6:59 PM
		</div>
		<div class="comment_text"><p>Are you reloading the page after you did a form submit? If so, it's resubmitting, which is normal behavior. You can prevent that if you did a cflocation after the form uploaded.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736975">6</a> by Henry
		posted on 11/29/2011 at 7:17 PM
		</div>
		<div class="comment_text"><p>Yep, good to know. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736981">7</a> by Sanoop
		posted on 12/22/2011 at 1:45 PM
		</div>
		<div class="comment_text"><p>Great Work Ray as usual.</p><p>Why Coldfusion does not alert developers in development about the deprecated tag or attributes? :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736976">8</a> by Raymond Camden
		posted on 12/22/2011 at 6:33 PM
		</div>
		<div class="comment_text"><p>You mean like via a console message? I don't know - we just don't do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736978">9</a> by Sanoop
		posted on 12/23/2011 at 9:46 AM
		</div>
		<div class="comment_text"><p>Yes, some message (as Java does) when CF compiles the CFML into .CLASS, I believe it can make the developer to use or interact more with the new functions, tags or attributes.</p><p>~SanooP</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736979">10</a> by zonPluto
		posted on 3/15/2013 at 6:57 PM
		</div>
		<div class="comment_text"><p>&lt;cfset thumbs = directoryList(thumbDir,true,"name","*.jpg|*.png|*.gif" )&gt;<br>hi,,,when i run this application.i got an error variable directorylist is undefined.....pls help me...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736980">11</a> by Raymond Camden
		posted on 3/15/2013 at 8:25 PM
		</div>
		<div class="comment_text"><p>directoryList was added to ColdFusion 9. It is a function version of &lt;cfdirectory action="list"&gt;. You can replace it with that.</p></div>
	</div>
</div>
		