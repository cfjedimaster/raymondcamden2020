
<div class="comment" id="c_1713744222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744222">1</a> by Dinesh Kanwar
		posted on 1/9/2013 at 8:16 PM
		</div>
		<div class="comment_text"><p>Thank you Ray (I am that user who faced this problem). Solution makes sense to me. I will try this, I am sure this will work. But again, should not CF automatically resolve such path properly atleast when they are on window servers? As community, and the lovely language we work with, I was sure sooner or later I would have some solution. I am happy I have it sooner. More than that what I appreciate most that Ray finding time to address my problem. Not that I did not respected you earlier, but it has multiplied today for sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744225">2</a> by Raymond Camden
		posted on 1/9/2013 at 8:26 PM
		</div>
		<div class="comment_text"><p>I think one could argue. I believe, stress believe, that since spaces are NOT valid in URLs, it should break. Chrome made it work because it was trying to be helpful. Basically saying, "Oh crap, a bad URL, I'll try to fix it for the user." But CF was being more strict.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744226">3</a> by Edward Rynearson
		posted on 1/9/2013 at 10:43 PM
		</div>
		<div class="comment_text"><p>Spaces should be avoided in file and folder names.  They may have corrected this in newer version of exchange but sometimes people at my shop send me urls with spaces to files on our shared drive and exchange breaks the link. I end up having to copy the link and paste it into my browser ... not the end of the world, just a nuisance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744239">4</a> by Dan G. Switzer, II
		posted on 1/9/2013 at 11:10 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>Is this particular use case, you should be able to safely just search the imageurl variable and replace any spaces with  "%20". This would also resolve issues if there was a space in the relative path (although I'd hope that would never be the case.)</p><p>&lt;cfimage source="#replace(imageurl, ' ', '%20', 'all')#" name="isLargeImage"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744240">5</a> by Raymond Camden
		posted on 1/10/2013 at 7:56 AM
		</div>
		<div class="comment_text"><p>@Dan: Much simpler, thanks. I knew there was an easier way</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744238">6</a> by Johnny N
		posted on 1/11/2013 at 10:27 AM
		</div>
		<div class="comment_text"><p>Interesting problem and this is an excellent example of why you shouldn't use spaces in folder or file names.  While there is a solution you shouldn't have to create one for this.  In my opinion it's poor development practice.</p><p>I haven't worked in a shop where anyone used spaces, thank goodness!  With that being said, I get the impression that most professionals don't follow Windows' sloppy standards when it comes to naming files/folders!  8.3 anyone?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744242">7</a> by Raymond Camden
		posted on 1/11/2013 at 4:44 PM
		</div>
		<div class="comment_text"><p>Johnny, I think the point here is that users may create images w/ spaces in them. I know I've got a few I've downloaded. So it is less "Let's make em" and more "Let's handle em." One could also simply 'fix' images once uploaded. But don't forget, cfimage lets you work with remote images as well. You may not be able to avoid spaces.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744241">8</a> by papichulo
		posted on 1/16/2013 at 8:58 AM
		</div>
		<div class="comment_text"><p>@Johnny<br>Sloppy Windows? You can have spaces in files and folders in OSX and Linux too. Hate Windows much? That's cool, I hate Macs.</p></div>
	</div>
</div>
		