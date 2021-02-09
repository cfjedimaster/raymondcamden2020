
<div class="comment" id="c_1713668375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668375">1</a> by Chad
		posted on 7/12/2007 at 5:51 PM
		</div>
		<div class="comment_text"><p>Did Adobe explain why the color space change would "fix" this?  It makes no sense to me.  ARGB just adds the ability to have an alpha channel for transparency.</p><p>Now i dont know anything about these new funcitons and have not read the documentation, but i a suggestion to try.</p><p>Why specify the ImageSetDrawingColor on your second line of code?  I think this is what is causing the black to show when you rotate it.  Try switching to white before the rotate.  Or finding a new way of defining the text color.</p><p>I would think that the function ImageDrawText would take a color attribute to defined the color of the text you are drawing.</p><p>Cant wait to get my hands on CF8!  Love the new features so far!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668366">2</a> by Tjarko
		posted on 7/12/2007 at 6:29 PM
		</div>
		<div class="comment_text"><p>Maybe a really stupid question but is the text-rendering of the ImageDrawText function in cleartype or bitmap?? I'm really excited about this because I was playing with the gFont cfx tag of efflare and if this function is already in CF8 I don't need this cfx tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668381">3</a> by Tom Mollerus
		posted on 7/12/2007 at 9:24 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>Have you tried setting the image's background color and clearing a rectangle before the rotation?</p><p>ImageSetBackgroundColor(image, color)<br>ImageClearRect(image, x, x, width, height)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668367">4</a> by Raymond Camden
		posted on 7/12/2007 at 10:04 PM
		</div>
		<div class="comment_text"><p>Tom: I tried the first one, it didn't help, and in theory, shouldn't be necessary. When I used the imageNew and specified a BG color, that should have did it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668368">5</a> by Hemant Khandelwal
		posted on 7/26/2007 at 8:50 PM
		</div>
		<div class="comment_text"><p>The problem is with the imaging library that we are using here. We are checking if we can get a solution or workaround that can help here.</p><p>In principal what interpolation does is take a set of pixels around the source pixel to determine the target pixel. For exampl, nearest will take least number of pixels around source to determine target.</p><p>Thanks,<br>Hemant</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668392">6</a> by Terry Sasaki
		posted on 8/3/2007 at 5:40 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I'm a turtle and have just reached this post :)</p><p>ImageRotateDrawingAxis(textImage,30) before ImageDrawText() could be a temporary alternative.<br>Then ImageRotate() is not needed here.</p><p>cheers<br>-terry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668395">7</a> by Jeff M
		posted on 10/23/2007 at 11:00 PM
		</div>
		<div class="comment_text"><p>This may be a stupid question, but why can I not get this to work.  I am using CFMX 8, i paste your code in and I get nothing... Any test code I try, i get nothing.  Its enabled in the admin, but I can not get anything regarding CFIMAGE to work..  Any tips on making sure CFIMAGE will work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668394">8</a> by Raymond Camden
		posted on 10/24/2007 at 1:56 AM
		</div>
		<div class="comment_text"><p>So you can't get any cfimage stuff to work at all? Did you try other examples?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668396">9</a> by cc
		posted on 4/8/2008 at 11:11 PM
		</div>
		<div class="comment_text"><p>When I rotate an image and then write to file, it seems like the image file size is reduce even after I set the quality of the imagewrite to the highest value for quality. Is there any tip on how to make the image quality remain the same, after I rotate and save an image file?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668401">10</a> by Raymond Camden
		posted on 4/9/2008 at 3:18 PM
		</div>
		<div class="comment_text"><p>If you are setting the quality to the highest, then that's all I can recommend for now. Have you tried it with 8.0.1?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668405">11</a> by Joseph Lee Hunsaker
		posted on 10/22/2009 at 11:30 AM
		</div>
		<div class="comment_text"><p>To get rid of the black around the edges you need to have a border of transparency around the image.  In other words, you need to have a transparent image and no part of that image can touch a border.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668402">12</a> by David
		posted on 9/11/2012 at 4:08 AM
		</div>
		<div class="comment_text"><p>Have you noticed that your image didn't rotate by 30 degrees, but by just 2 degrees. I've found that when using the x and y parameters I have to the the rotation AFTER them.<br>Anyone else noticed this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668404">13</a> by Raymond Camden
		posted on 9/11/2012 at 5:36 AM
		</div>
		<div class="comment_text"><p>I thought maybe it was just a bad screen shot, but I can't test this now as my local Apache server doesn't seem to be serving up cfimage correctly. I'll need to fix that I suppose.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668403">14</a> by Raymond Camden
		posted on 9/11/2012 at 5:39 AM
		</div>
		<div class="comment_text"><p>Ok, got a test working. So - yeah - this is weird. When I do just 30, it is really obvious. When I do 30,2,2 - it is different - but the specs say 2,2 is the X/Y is the default.</p><p>I'll file a bug report.</p></div>
	</div>
</div>
		