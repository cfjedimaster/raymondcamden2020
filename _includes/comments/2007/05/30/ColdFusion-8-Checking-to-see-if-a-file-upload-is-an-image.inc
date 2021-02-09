
<div class="comment" id="c_1713665897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665897">1</a> by existdissolve
		posted on 5/30/2007 at 4:05 PM
		</div>
		<div class="comment_text"><p>*Sigh*</p><p>Too bad Godaddy won't upgrade to 8 until 2012.</p><p>I may be switching to hostmysite quicker than I planned just for this feature!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665898">2</a> by James Edmunds
		posted on 5/30/2007 at 6:17 PM
		</div>
		<div class="comment_text"><p>I have a couple of dozen sites at CrystalTech, which has been reasonably good about quick-but-not-too-quick adaptation of CF upgrades and I hope to see CF8 on the shareds there not too long after it is released...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665899">3</a> by Danilo Celic
		posted on 5/30/2007 at 7:29 PM
		</div>
		<div class="comment_text"><p>Ray, you state:<br>"if a filename points to an image file that ColdFusion can work with"</p><p>What are the image file types that CF can work with, and can you pass a list/array/whatever of image types your files can work with. For example, CF may consider WMF files as images, but my web app can't use them. So not only determine if it is an image, but if it is within a user settable range of image types?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665900">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665900">4</a> by Raymond Camden
		posted on 5/30/2007 at 8:09 PM
		</div>
		<div class="comment_text"><p>The file types that CF can wrk on is partially dependent on your system. Luckily - CF provides a function to tell you what they are: getReadableImageFormats().</p><p>Hmmm. Interesting. The imageInfo function does NOT seem to return it. You can check extensions, but that may lie.</p><p>Let me get back to you, and feel free to bug me if i forget.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665901">5</a> by Danilo Celic
		posted on 5/30/2007 at 8:20 PM
		</div>
		<div class="comment_text"><p>The file extension not matching the file type is where I was one direction I was trying to go with my question. I know that I can set mime types in the CFFILE tag when uploading, but it is my understanding that that info comes from the user agent sending the file, so could be incorrect, much like the file extension being incorrect.</p><p>Would be good if there were a way to not only check that a file is an image (which I assume that it just doesn't check the file extension) as well as check for a specific image file type.</p><p>Thanks for looking into it Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665902">6</a> by Lola LB
		posted on 5/30/2007 at 11:07 PM
		</div>
		<div class="comment_text"><p>Godaddy's not going to upgrade till 2012?  *boggle*  Thanks for the heads-up . . . that's one hosting service off my list.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665903">7</a> by Rick
		posted on 7/30/2008 at 2:28 PM
		</div>
		<div class="comment_text"><p>Hi Ray, is there a big performance difference between FileExists and IsImageFile? If so, what are they?</p><p>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665904">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665904">8</a> by Raymond Camden
		posted on 7/30/2008 at 3:48 PM
		</div>
		<div class="comment_text"><p>@Rick: Well, really, that's not a fair question. One function determines if a file exists. That's all it does. isImageFile checks the binary bits of a file to see if it is an image. So fileExists should naturally be quicker, but it isn't doing as much.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665905">9</a> by Nathan Mische
		posted on 12/19/2008 at 12:50 AM
		</div>
		<div class="comment_text"><p>@Ray: Did you ever find out if there is a way to determine the image file format beyond checking the file extension?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665907">10</a> by Raymond Camden
		posted on 12/19/2008 at 3:24 AM
		</div>
		<div class="comment_text"><p>Nope. I'm sure there is a way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665906">11</a> by Ashley
		posted on 8/8/2011 at 12:27 AM
		</div>
		<div class="comment_text"><p>All I have to say is Thank you.</p><p>If only the web was full of helpful people like you. This post has really! helped me.</p></div>
	</div>
</div>
		