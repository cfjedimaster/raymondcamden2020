
<div class="comment" id="c_1713709462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709462">1</a> by James Edmunds
		posted on 11/1/2008 at 7:46 PM
		</div>
		<div class="comment_text"><p>VERY interesting. I wonder if you would have a different "human" evaluation of the finished images if you added ImageSetAntialiasing before the resize...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709463">2</a> by Raymond Camden
		posted on 11/1/2008 at 7:56 PM
		</div>
		<div class="comment_text"><p>According to the docs, that is for drawing and doing text on images. I'm not sure it would apply.</p><p>One thing I may want to look at is the blurFactor option for resizing. To be honest, I was a bit unsure of why you would want _any_ blur. It seems like that would be used for enlarging images only.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709464">3</a> by James Edmunds
		posted on 11/1/2008 at 8:08 PM
		</div>
		<div class="comment_text"><p>Most of the examples in the live docs include something like this, as a matter of course:</p><p>&lt;!--- Turn on antialiasing to improve image quality. ---&gt;<br>&lt;cfset ImageSetAntialiasing(myImage,"on")&gt;<br>&lt;cfset ImageScaleToFit(myImage,100,"","lanczos")&gt;</p><p>... although I've never seen side-by-sides that demonstrated what that improved quality was supposed to look like, or seen any other explanation of what it does beyond what you are citing from the live docs.</p><p>Hmmmmm....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709465">4</a> by Raymond Camden
		posted on 11/1/2008 at 8:12 PM
		</div>
		<div class="comment_text"><p>You are correct. From the docs:</p><p>Use the ImageSetAntialiasing function to improve the quality of the rendered image.</p><p>Testing now...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709467">5</a> by Raymond Camden
		posted on 11/1/2008 at 8:16 PM
		</div>
		<div class="comment_text"><p>So I added this to my code:</p><p>&lt;cfif structKeyExists(url, "aa")&gt;<br>	&lt;cfset imageSetAntiAliasing(newImage)&gt;<br>&lt;/cfif&gt;</p><p>I added it right after the first gettickcount. I tested both w/o it, and with it. The times are a bit off, but not in a significant way. To be honest, I see no difference. I thought maybe I could see it in the moss, looking closely, but I was not able to.</p><p>I'm going to try a third option now - off. I assume it is the same as not setting it at all... but I'm going to test that too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709466">6</a> by Raymond Camden
		posted on 11/1/2008 at 8:38 PM
		</div>
		<div class="comment_text"><p>I tested, and still can't tell. But it could be my source image. I had thought that a 'scenic' pic like that would be best for revealing problems, but maybe I'm wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709468">7</a> by James Edmunds
		posted on 11/1/2008 at 9:49 PM
		</div>
		<div class="comment_text"><p>When I do that kind of testing, I like to take a "people" portrait about 1000 pixels wide and take it down to 200 pixels or so, but I don't have anything readily on hand to demo the effects. Maybe if work quiets down next week I'll mimic the script in your posting and give it a try with that sort of image...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709469">8</a> by Raymond Camden
		posted on 11/1/2008 at 9:58 PM
		</div>
		<div class="comment_text"><p>Funny you mention people portrait. I tried a picture of me and still wasn't able to see any differences. It was of me from the waist up, not too close though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709472">9</a> by Raymond Camden
		posted on 11/1/2008 at 10:44 PM
		</div>
		<div class="comment_text"><p>I wonder if this test implies that - in general, quality is pretty darn good when you resize. You lose more quality when you _save_. Since I always saved at top quality, it could be why I'm not seeing as much of a change.</p><p>I should also try a GIF and TIFF too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709471">10</a> by Richard Tugwell
		posted on 11/2/2008 at 8:13 PM
		</div>
		<div class="comment_text"><p>This is interesting. I gave up on cfimage and went back to Efflare CFImagecr3 because of the times. Minutes for high quality, and the image quality for faster speed was poor compared with Efflare. I'm interested that you had varying results depending on the actualy image, and not the size. I'm mostly resizing images of paintings which have rather a lot of detail and colour so that may impact things, although still in the 400-500k size. Can you show me the image that took 4 minutes?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709474">11</a> by Raymond Camden
		posted on 11/2/2008 at 8:50 PM
		</div>
		<div class="comment_text"><p>The picture was a shot of some ships at harbor by Steven Erat (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.talkingtree.com%3Aanpd1PX43AXydw6Moko96S5F3yQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.talkingtree.com">http://www.talkingtree.com</a>). I'm trying to find it online so I can link to it there. I don't want to post it here w/o his permission. If I can't find it I'll ask him.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709479">12</a> by Raymond Camden
		posted on 11/2/2008 at 8:51 PM
		</div>
		<div class="comment_text"><p>Found it:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.flickr.com%2Fphotos%2Fstevenerat%2F156895786%2Fin%2Fset-72157594150471568%2F%3Av0raYu_9O0dXRFBC1AG9WLZ8XGU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.flickr.com/photos/stevenerat/156895786/in/set-72157594150471568/">http://www.flickr.com/photo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709484">13</a> by Richard Tugwell
		posted on 11/2/2008 at 9:16 PM
		</div>
		<div class="comment_text"><p>Thanks Ray - Camden Harbour eh?</p><p>I'll do some tests with this image, although I'm really surprised it makes a big difference</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709491">14</a> by Tom K
		posted on 11/3/2008 at 2:30 PM
		</div>
		<div class="comment_text"><p>Has anyone written a CFC yet which essentially replicates photoshop's save for web command?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709490">15</a> by JC
		posted on 11/3/2008 at 5:16 PM
		</div>
		<div class="comment_text"><p>I'd guess the blurfactor is intended mostly for reducing artifacts &amp; shrinking file sizes when using high compression? But I'm being lazy and not actually testing it, so the max value could be like a giant gaussian blur instead of a just slightly noticable modification....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709493">16</a> by Raymond Camden
		posted on 11/3/2008 at 7:34 PM
		</div>
		<div class="comment_text"><p>@TomK: I don't use Photoshop, so I have no idea what that is. ;) But there _is_ a CFC that does a lot of common stuff. Check out imageUtils at <a href="http://disq.us/url?url=http%3A%2F%2FRIAForge.org%3AruCwEJIgTRpvW43X0oLGmPnNtds&amp;cuid=3321886" rel="nofollow noopener" title="RIAForge.org">RIAForge.org</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709494">17</a> by Alirio Boquin
		posted on 1/14/2009 at 4:00 AM
		</div>
		<div class="comment_text"><p>Great Post, was a really help !!!</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709489">18</a> by Jon Carlson
		posted on 3/6/2009 at 9:00 PM
		</div>
		<div class="comment_text"><p>This post just saved me a lot of time and headaches. A massive flex image upload system I wrote last year broke once Coldfusion 8 was deployed to our servers. Seems that Coldfusion was taking forever to resize large progressive images, and would eventually just timeout. After reading this, I added a "bilinear" interpolation to the ImageResize function and it works perfectly (and without a significant drop in quality!) Thanks alot Raymond.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709495">19</a> by Raymond Camden
		posted on 3/6/2009 at 10:51 PM
		</div>
		<div class="comment_text"><p>Glad I could help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709497">20</a> by Jules Gravinese
		posted on 3/10/2009 at 5:45 PM
		</div>
		<div class="comment_text"><p>I've found that in photoshop it's better to reduce images in 50% steps. It yields much better images.<br>For instance if your image is 1000px and you want a 100px thumbnail it would take 4 resize operations:<br>1000 : 50% = 500<br>500 : 50% = 250<br>250 : 50% = 125<br>125 : manual resize = 100<br>I wonder if the same is true with CFimage as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709498">21</a> by Raymond Camden
		posted on 3/10/2009 at 5:53 PM
		</div>
		<div class="comment_text"><p>Try it and tell us. :) Should be easy enough to automate in CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709500">22</a> by Jules Gravinese
		posted on 3/10/2009 at 7:32 PM
		</div>
		<div class="comment_text"><p>haha yeah I've been trying to do so all day! You know what it's like to have a lot of open projects.<br>Maybe my next project will be something that converts ideas into time. :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709499">23</a> by Jules Gravinese
		posted on 3/10/2009 at 9:23 PM
		</div>
		<div class="comment_text"><p>Show and tell:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.webveteran.com%2Fblog%2Findex.php%2Fweb-coding%2Fcoldfusion%2Fcfimage-vs-photoshop-reduce-image-size-in-multiple-passes%2F%3AsGNUa4EtCoiX6vAgT7lzrO0_0zk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.webveteran.com/blog/index.php/web-coding/coldfusion/cfimage-vs-photoshop-reduce-image-size-in-multiple-passes/">http://www.webveteran.com/b...</a></p><p>"Sure enough, the multiple pass method in PhotoShop yields a nicer image. However, it looks like a single pass resize with CFimage looks better."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709501">24</a> by Raymond Camden
		posted on 3/10/2009 at 9:44 PM
		</div>
		<div class="comment_text"><p>Now of course you should also compare using the multiple resize types as well. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709502">25</a> by Jules Gravinese
		posted on 3/11/2009 at 2:42 AM
		</div>
		<div class="comment_text"><p>Naahhh... why would I want a lower quality images?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709503">26</a> by Rafe
		posted on 4/1/2009 at 6:38 AM
		</div>
		<div class="comment_text"><p>great article, i did my own testing after reading this and can confirm those findings, and the results appeared to be very similar for gifs or jpgs (in magnitude, not actual processing times).  small note, if you have fonts on your images then the difference between bilinear and highestquality does become very noticeable; for images with fonts on them i found the best low setting to be "highperformance".  Maybe adjusting the antialiasing as mentioned in a comment above would improve the font output at lower levels?  might be worth playing with</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709511">27</a> by Sveinbjorn Gretarsson
		posted on 5/3/2009 at 9:24 PM
		</div>
		<div class="comment_text"><p>Great blog!<br>I've also been testing the ImageResize with the ImageSetAntialiasing on/off and I see no different.<br>My biggest probelem is to get good quality for my thumbs.<br>If I Resize e.g. 3504x2336 px image to 920x613 and then to 100x67 the 920x613 quality is fine (specially if I use the ImageSharpen) but the 100x67 is has poor quality.<br>I tryed both bilinear and the Highest Quality and the differnt was negligible in the 920 pixel image but huge in the 100 pixel thub.<br>Do you know any trick's to help me whit my thumbs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709516">28</a> by KnightsWhoSayNi
		posted on 7/28/2009 at 9:04 AM
		</div>
		<div class="comment_text"><p>Not having a lot of luck with ImageResize.  My host server uses SeeFusion, so my script is timing out after 17 seconds.  It seems to me though, from what I have read here, that it shouldn't be taking that long to complete.</p><p>My app allows the user to upload a front and a back image of a coin and resizes them both to 600x600 pixels, then resizes again to 60x60 for the thumbnail.  Using getTickCount, I find that it can take almost 3-6 seconds to resize an 800x800 to 600x600, even using bilinear.</p><p>Most peculiar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709513">29</a> by Steve Hammonds
		posted on 8/24/2009 at 9:12 PM
		</div>
		<div class="comment_text"><p>Ray I have to think something is wrong with our server.  It is taking an EXTREMELY long time to resize our images.  I ran your test (minus the first four algorithms) on a 424kb jpg.  Except for the last four the times are ridiculous.  This doesn't seem normal from my searching on the web.</p><p>Method Size Time (Seconds) <br>mediumPerformance 363Kb 471.384 <br>quadratic 343Kb 369.116 <br>mediumquality 362Kb 265.692 <br>hamming 362Kb 265.255 <br>hanning 368Kb 264.927 <br>hermite 368Kb 266.177 <br>highPerformance 362Kb 265.427 <br>blackman 376Kb 264.724 <br>bessel 355Kb 724.482 <br>highestPerformance 405Kb 0.515 <br>nearest 413Kb 0.094 <br>bicubic 405Kb 0.172 <br>bilinear 393Kb 0.25</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709517">30</a> by Raymond Camden
		posted on 8/24/2009 at 9:53 PM
		</div>
		<div class="comment_text"><p>This may help: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F5%2F14%2FPossible-Answer-to-slow-image-resizes-in-ColdFusion-8%3AKXqKhG6qXV-uQ9Qtkr117BbD9Lk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/5/14/Possible-Answer-to-slow-image-resizes-in-ColdFusion-8">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709514">31</a> by Steve Hammonds
		posted on 8/25/2009 at 4:17 PM
		</div>
		<div class="comment_text"><p>I upgraded to the lastest (1.6.0_16).  This version keeps causing CF to restart each time I run my resize script (I think because the JVM crashes).   I switched to the version in your example (1.6.0_13) and ran the script again.</p><p>Highest Quality: 666.993 seconds<br>lanczos 660.074 seconds<br>highquality 466.821 seconds<br>mitchell 471.246 seconds<br>mediumperformance 480.584 seconds<br>quadratic 371.537 seconds<br>mediumquality 269.695 seconds<br>hamming ....<br>Here the script timed out (I had it limited to an hour)</p><p>If you have any other suggestions I would appreciate it.  I am working on a photo application so this is becoming a little burdensome!  Our other server (production) has no problem with this (JVM 1.6.0_01).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709512">32</a> by Steve Hammonds
		posted on 8/25/2009 at 4:49 PM
		</div>
		<div class="comment_text"><p>I opened the image I was using and converted it to a .bmp file with PaintShop pro:<br>Method Size Time (Seconds) <br>highestQuality 1.12Mb 7.531 <br>lanczos 1.12Mb 7.625 <br>highquality 1.12Mb 5.407 <br>mitchell 1.12Mb 5.344 <br>mediumPerformance 1.12Mb 5.297 <br>quadratic 1.12Mb 4.219 <br>mediumquality 1.12Mb 2.968 <br>hamming 1.12Mb 3.063 <br>hanning 1.12Mb 3.204 <br>hermite 1.12Mb 3.469 <br>highPerformance 1.12Mb 3.156 <br>blackman 1.12Mb 3.188 <br>bessel 1.12Mb 8.297 <br>highestPerformance 1.12Mb 3.438 <br>nearest 1.12Mb 0.422 <br>bicubic 1.12Mb 0.594 <br>bilinear 1.12Mb 0.297</p><p>So it looks like it is an issue with the jpgs I was using for testing.  I found this thread:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionmuse.com%2Findex.cfm%2F2009%2F6%2F10%2Fjavax.imageio.jpg.crash.jvm%3AbN54nYHael2S1e9sBIxW3VO9n1A&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionmuse.com/index.cfm/2009/6/10/javax.imageio.jpg.crash.jvm">http://www.coldfusionmuse.c...</a></p><p>which suggests a JVM upgrade should have fixed it.  I will work around by using 'nearest' on the dev box and it shouldn't be an issue on the produciton server.  Still wish I new what the hell was going on!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709515">33</a> by Jibu
		posted on 6/9/2011 at 10:08 AM
		</div>
		<div class="comment_text"><p>How to resize a animated gif file without lose the animation ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709518">34</a> by Raymond Camden
		posted on 6/9/2011 at 3:26 PM
		</div>
		<div class="comment_text"><p>I believe you can't - and it is documented as so.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709519">35</a> by Cody Munger
		posted on 6/23/2011 at 4:03 AM
		</div>
		<div class="comment_text"><p>Thank you for posting.  This saved me the effort of doing the tests myself and sped up my resizing by a factor of 5.  Why the hell was I using "highestquality"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709520">36</a> by Charlie Arehart
		posted on 5/29/2012 at 7:18 PM
		</div>
		<div class="comment_text"><p>Great stuff here, Ray. In case readers here don't do the math, note that there's a 50x improvement between Ray's slowest (1.7 sec) and fastest (.031 sec) results. Good thing he mentioned the 4 minute one, to catch people's attention. :-)</p><p>Indeed, this issue of slow image resizing due to the default interpolation (of "highestquality") is one that I find is the cause of many slow CF servers, especially if people may do many image resize operations in a single request (such as a process to upload and create thumbnails of images).</p><p>More than that, while Ray shows using imageScaleToFit, note that this issue applies also to imageResize and CFIMAGE action="resize". Indeed, until CF10, you can't even change the interpolation using the tag, so you need to switch to using the function.</p><p>I did a blog entry just yesterday on this (the defaults in the tag and functions, how to change from the tag to the function, and the change in CF10, among other things) at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.carehart.org%2Fblog%2Fclient%2Findex.cfm%2F2012%2F5%2F28%2Fcf_image_resizing_problem_and_solution%2F%3AotDNQtwzRnDY4vmZG94gA8PBJ3k&amp;cuid=3321886" rel="nofollow noopener" title="http://www.carehart.org/blog/client/index.cfm/2012/5/28/cf_image_resizing_problem_and_solution/">http://www.carehart.org/blo...</a>. Readers should find it complements Ray's entry here nicely.</p><p>In fact, he added a comment there pointing me and my readers here, and I'm really glad he did. Great to see the numbers. This image resizing problem is a silent but often deadly killer (or crippler) that's important enough to warrant reminders as often as possible! Keep up the great work, Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709521">37</a> by Raymond Camden
		posted on 5/29/2012 at 7:34 PM
		</div>
		<div class="comment_text"><p>Damn.... while I knew there was a difference, the order of magnitude (50x) didn't sink in. Thanks for sharing that Charlie!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709523">38</a> by Matt
		posted on 10/25/2012 at 8:25 PM
		</div>
		<div class="comment_text"><p>Has anyone tried to integrate the imgscalr jar into their CF app to use that resize method in comparison to the imageScaleToFit or imageResize functions from CF?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709524">39</a> by Matt
		posted on 10/28/2012 at 4:24 AM
		</div>
		<div class="comment_text"><p>Just to follow up on the imgscalr (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.thebuzzmedia.com%2Fsoftware%2Fimgscalr-java-image-scaling-library%2F%29%3Al-e_f3eYph0RRPIzhU9saPQ-pJ8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.thebuzzmedia.com/software/imgscalr-java-image-scaling-library/)">http://www.thebuzzmedia.com...</a></p><p>It is simple to integrate into CF and based off of some basic cpu usage analysis it seems far more efficient than the imageResize function in CF to shrink the size of an image while preserving quality.  From the creators site:</p><p>This library makes  uses of efficient Java2D scaling techniques advocated by the Java2D team which provides hardware accelerated operations on most platforms.</p><p>This library also implements the optimized incremental scaling algorithm proposed by Chris Campbell with some minor enhancements for good-looking (and quick) thumbnail generation (previously only possible with the discouraged Image.getScaledInstance method using the much slower SCALE_AREA_AVERAGE algorithm).</p><p>Anyways, hope it helps someone.</p><p>Matt</p></div>
	</div>
</div>
		