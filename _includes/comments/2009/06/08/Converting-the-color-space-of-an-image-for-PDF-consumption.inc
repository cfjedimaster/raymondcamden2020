
<div class="comment" id="c_1713715991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715991">1</a> by Adam Tuttle
		posted on 6/8/2009 at 11:17 PM
		</div>
		<div class="comment_text"><p>It's not something I need any more, but for a while I was searching for a way to convert CMYK images to RGB. Any idea how to do that? I searched for a Java util to do it, but couldn't find anything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715994">2</a> by Morgan Wood
		posted on 6/8/2009 at 11:49 PM
		</div>
		<div class="comment_text"><p>I ended up actually converting the ColorSpace to CS_sRGB. For whatever reason CFDocument likes the jpg after it's been converted that way. The CFDocument PDFs that I am creating went from 2.3 megs (with 5 images) to 344k.</p><p>Such an improvement.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715985">3</a> by Michele
		posted on 6/10/2009 at 5:22 AM
		</div>
		<div class="comment_text"><p>basic question - what is color space? The only difference I could see in the eexample was that one image was multcollored and the other had shades of grey.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715989">4</a> by Raymond Camden
		posted on 6/10/2009 at 6:28 PM
		</div>
		<div class="comment_text"><p>The Internet is wonderful....</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FColor_space%3A-77-wjgpVgYtawJ2WlZPBTKrJ_I&amp;cuid=3321886" rel="nofollow noopener" title="http://en.wikipedia.org/wiki/Color_space">http://en.wikipedia.org/wik...</a></p><p>;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716001">5</a> by Neil Patterson
		posted on 2/10/2010 at 12:39 AM
		</div>
		<div class="comment_text"><p>Adam, I think I successfully used the example above to check if an image is CMYK then convert to CS_sRGB. This really helped me to speed up those nasty cmyk jpgs that seemed to take 15 minutes to resize. Just use the colorSpace Variable to check if the image is CMYK then do the exact same conversion as Ray describes above but subsitutue CS_GRAY for CS_sRGB. It works for me, not sure how practical it is yet though.</p><p>&lt;cfset img = imageRead("ray.png")&gt;<br>&lt;cfset bimg = imageGetBufferedImage(img)&gt;<br>&lt;cfset colorModel = bimg.getColorModel()&gt;<br>&lt;cfset colorSpace = colorModel.getColorSpace().getProfile().getColorSpaceType()&gt;</p><p>&lt;!--- If Colorspace is 9 convert the CMYK image to rgb scale ---&gt;<br>&lt;cfif colorSpace EQ 9&gt;<br>  &lt;!--- convert to CS_sRGB here ---&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715996">6</a> by James Moberg
		posted on 3/30/2010 at 8:33 PM
		</div>
		<div class="comment_text"><p>Do you know if there is any way to "detect" a CMYK JPG apart from using CFTRY/CFCATCH to catch the error?  It tried reading a CMYK JPG image to use the conversion and I get an "Invalid image format" error when reading the file.  (The image is from a Pentax camera and works fine if I resave it using <a href="http://disq.us/url?url=http%3A%2F%2FPaint.net%2FFastStone%3ACSxA6IIQJWZVWPdcBb0NCy39Gq8&amp;cuid=3321886" rel="nofollow noopener" title="Paint.net/FastStone">Paint.net/FastStone</a> Photo Resizer.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715995">7</a> by Raymond Camden
		posted on 4/1/2010 at 1:31 AM
		</div>
		<div class="comment_text"><p>Doesn't the comment above yours kinda discuss it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716000">8</a> by James Moberg
		posted on 4/1/2010 at 4:42 AM
		</div>
		<div class="comment_text"><p>I get an error when trying to read a CMYK JPG image... If I can't read a CMYK JPG image without getting an error, I'm definitely not able to run the rest of the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715998">9</a> by Neil
		posted on 4/1/2010 at 5:52 AM
		</div>
		<div class="comment_text"><p>if you get an error when reading a cmyk image, make sure you have the latest hotfixes. this is a common problem for fresh cf 8 installs without the hotfixes I think</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716002">10</a> by Daniel Budde
		posted on 3/10/2011 at 9:31 PM
		</div>
		<div class="comment_text"><p>I know this is an older post, but I hope you guys might have an idea.  I have an oddity with Mac screen shots.  Whenever I take a PNG image that was created from a Mac screen shot and attempt to perform image manipulations on it using CF8, the processes run very slow.  If I take the same image, load it in GIMP, it tells me there is an embedded color profile named 'Display' and asks if I want to convert the image.  If I do so and then process the image in CF8, it performs as normal.</p><p>So, I have attempted to correct this in CF8 with no success by converting the image to a different format or by using Ray's example above and neither seems to fix the issue for me.  Anyone have any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716003">11</a> by Raymond Camden
		posted on 3/11/2011 at 3:39 AM
		</div>
		<div class="comment_text"><p>You got me there. Best I can say is that I've seen this myself with random mac images. It was always a minority of images - but when CF hit them it would take FOREVER to do stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715997">12</a> by Andrew
		posted on 10/6/2011 at 8:29 PM
		</div>
		<div class="comment_text"><p>Ray Camden, you are a beautiful man.</p><p>Used this info to correct CMKY images in our image generation system...</p><p>I hope that Adobe will add a simple color space conversion function soon!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716011">13</a> by Raymond Camden
		posted on 10/7/2011 at 6:29 AM
		</div>
		<div class="comment_text"><p>Glad to help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715986">14</a> by Claude Schnພgans
		posted on 3/1/2012 at 4:55 AM
		</div>
		<div class="comment_text"><p>Hi,<br>I found this page while I was looking for a solution to a problem I'm having with CFDOCUMENT, the problem being that some grey scale images look much lighter in the pdf document than the original.<br>So I wrote down some code to list all characteristics of these images, and it appears that they all have their color space = to "Any of the family of GREY color spaces". Other images in RGB mode, even if they only use a grey scale are correct.<br>So I said OK, I will convert all of then to RGB so that CFDOCUMENT has no problem.<br>But there I discovered that converting the images to RGB using your Java code produces exactly the same problem.<br>Conclusion, the bug is not with CFDOCUMENT, but with the Java conversion function that does not render grey levels properly going from GREY TO RGB.<br>Unless there are some parameters so get a better conversion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715987">15</a> by Claude Schnພgans
		posted on 3/1/2012 at 8:34 AM
		</div>
		<div class="comment_text"><p>OK, got it !<br>If I use CS_LINEAR_RGB instead of CS_sRGB, the converted image looks the same. Bingo !<br>Finally, the problem with CFDOCUMENT is that it will convert any greysacale image into RGB using CS_sRGB mode instead of CS_LINEAR_RGB. Too bad.<br>Now that I know, I can convert any image myself and use &lt;cfimage action="writeToBrowser"... so that CFDOCUMENT will not try to convert it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715990">16</a> by Raymond Camden
		posted on 3/1/2012 at 8:38 AM
		</div>
		<div class="comment_text"><p>Thank you for posting your solution, Claude!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715993">17</a> by clarke ulmer
		posted on 8/22/2012 at 5:10 AM
		</div>
		<div class="comment_text"><p>Ray, this post was totally brilliant! I re-purposed some of your code here on my blog <a href="http://disq.us/url?url=http%3A%2F%2Fclarkeulmer.com%2Floading-an-image-via-the-img-tag-using-coldfusion%2F%3AeSkMqcY-7PeHq1hwp0eTUyvD7H0&amp;cuid=3321886" rel="nofollow noopener" title="http://clarkeulmer.com/loading-an-image-via-the-img-tag-using-coldfusion/">http://clarkeulmer.com/load...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715992">18</a> by Raymond Camden
		posted on 8/22/2012 at 5:37 AM
		</div>
		<div class="comment_text"><p>Always glad when a post helps. :)</p></div>
	</div>
</div>
		