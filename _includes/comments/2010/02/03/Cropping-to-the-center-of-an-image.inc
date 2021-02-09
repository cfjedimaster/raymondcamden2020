
<div class="comment" id="c_1713721747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721747">1</a> by Christopher David Kowalski
		posted on 2/4/2010 at 4:26 AM
		</div>
		<div class="comment_text"><p>I inspired a blog entry, how exciting!</p><p>Thanks again for helping me out with this request.</p><p>PS: Caught a typo with the word "simpe".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721756">2</a> by Jonathan Gailing
		posted on 2/4/2010 at 4:47 AM
		</div>
		<div class="comment_text"><p>I was so distracted by the greatness of the photo I forgot to read... *scroll up*</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721751">3</a> by Raymond Camden
		posted on 2/4/2010 at 6:18 AM
		</div>
		<div class="comment_text"><p>Typo fixed - thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721748">4</a> by Brian Lang
		posted on 2/4/2010 at 9:29 AM
		</div>
		<div class="comment_text"><p>Pretty simple stuff. I remember doing this kind of thing years ago in Visual Basic 6. But I did learn about doing it in ColdFusion which is really exciting! Now I just need to convince the powers that be that we need to upgrade to CF8 or even better to CF9 so I can do this kind of stuff again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721755">5</a> by Patrick Heppler
		posted on 2/5/2010 at 3:29 PM
		</div>
		<div class="comment_text"><p>@ Ray or just use the AspectCrop() from imageUtils.cfc ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721750">6</a> by Raymond Camden
		posted on 2/5/2010 at 5:54 PM
		</div>
		<div class="comment_text"><p>Heh, I had meant to check that. ;) You sure it does that though - I thought it was a bit different.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721752">7</a> by Gareth
		posted on 3/12/2010 at 3:03 AM
		</div>
		<div class="comment_text"><p>Hi, I have tried to implement this code by get the following error:</p><p>"Crop The rectangular crop area must not be outside the image."</p><p>What if I am dynamically calling in an image as part of a repeat region where the images will all have different sizes?</p><p>Here is my code:</p><p>&lt;cfif qShowSearch.showImage1 NEQ ""&gt;<br>&lt;div class="no_img"&gt;<br>&lt;a href="show.cfm?showID=#qShowSearch.showID#"&gt;</p><p>&lt;cfset image = "images/show_images/#qShowSearch.ShowImage1#"&gt;<br>&lt;cfset myImg = imageNew(image)&gt;</p><p>&lt;cfset imageCrop(myImg, (myimg.width/2) - (300/2), (myimg.height/2) - (200/2), 300, 200)&gt;<br>&lt;cfimage action="writeToBrowser" source="#myImg#"&gt;<br>&lt;/a&gt;<br>&lt;/div&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721754">8</a> by Raymond Camden
		posted on 3/12/2010 at 3:05 AM
		</div>
		<div class="comment_text"><p>So I'm guessing your image is smaller than the desired crop (300/200). If so, you need to come up with a formula that scales the desired crop, OR, I'd simply not crop. If my image is smaller than/equal to 300/200, I wouldn't bother cropping.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721749">9</a> by Christopher David Kowalski
		posted on 3/12/2010 at 3:06 AM
		</div>
		<div class="comment_text"><p>Gareth,</p><p>Haven't reviewed your code to see if this really is the issue, but in my implementation I didn't hardcode the height/width values of the image that's getting cropped, I let CFIMAGE determine the shortest side, then crop by that value instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721753">10</a> by Gareth
		posted on 3/12/2010 at 3:31 AM
		</div>
		<div class="comment_text"><p>Thanks Guys, so what would be appropriate coding for a cfid statement not to crop if the image if it falls below a certain width.</p><p>For my own application I am trying o create a thumbnail that is to a fixed width and height of 100px, hence the centre crop that will visually look better, as in such apps like Facebook.</p><p>Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721757">11</a> by Christopher David Kowalski
		posted on 3/12/2010 at 3:35 AM
		</div>
		<div class="comment_text"><p>Gareth,</p><p>Maybe Ray can whip up a quick example for you, but just use CFIMAGE to determine the height and width of the image. Then, whatever value is smaller, crop the image by that...</p><p>So, say you have a tall image, 500 pixels tall, 200 pixels wide.</p><p>CFIMAGE will tell you the shortest side is 200. Thus, on your imageCrop you would use the "200" value for height/width.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721759">12</a> by Raymond Camden
		posted on 3/12/2010 at 3:55 AM
		</div>
		<div class="comment_text"><p>I don't I'd add anything else to what Christopher said.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721762">13</a> by Dave Collazo
		posted on 6/1/2010 at 2:29 AM
		</div>
		<div class="comment_text"><p>I'm trying to submit a form which will submit itself without user input.  A different form supplies an image file to be resized and cropped.  The page that receives the image uploads the file and resizes it.  In order to then use imageCrop, I want to define a form which contains the cf_imageCropper tag and sends itself the code which will do the imageCrop.  Cflocation doesn't work since it doesn't submit the form.  Any suggestions would be appreciated.  <br>Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721763">14</a> by Raymond Camden
		posted on 6/1/2010 at 2:37 AM
		</div>
		<div class="comment_text"><p>If the form includes a file upload, you can't auto submit it afaik. That's a security risk. Not sure what cf_imageCropper is so I can't comment on that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721766">15</a> by Matthew Clemente
		posted on 7/1/2011 at 11:54 PM
		</div>
		<div class="comment_text"><p>Ray, just wanted to say thanks.</p><p>I Googled "coldfusion crop to center of image", this was the first result, and I got it working in five minutes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721765">16</a> by Raymond Camden
		posted on 7/2/2011 at 1:46 AM
		</div>
		<div class="comment_text"><p>Glad to help!</p></div>
	</div>
</div>
		