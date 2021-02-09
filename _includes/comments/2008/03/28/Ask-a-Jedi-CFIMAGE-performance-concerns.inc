
<div class="comment" id="c_1713678621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678621">1</a> by James Allen
		posted on 3/28/2008 at 11:08 PM
		</div>
		<div class="comment_text"><p>Thanks for answering my question Ray - much appreciated.</p><p>I didn't realise that CFIMAGE offered many different algorithms for resize. I'll have to check them out. No point processing in cpu intensive HQ mode if a lower mode would suffice (my process images aren't going to be huge I don't think).</p><p>Yeah in terms of the uploads they are being done asyncronously via hidden IFrames for each of the 5 upload input boxes.</p><p>I was just alittle concerned that by allowing 5 uploads to happen at the same time per user it might lead to huge server load as more users begin using the site.</p><p>I suppose it might have to be a case of testing when the site goes live and then maybe refactoring so that the images are uploaded in a queue if there are performance / load issues.</p><p>When each image is uploaded I resize to two difference sizes and store in a folder relating to the question being posted (the user can upload images to support a question). I then delete the source image.<br>Definetly not a good idea to do this dynamically.. I shudder to think how a site doing that would perform..</p><p>Once we go live, if we do have problems I'll post a comment on this post to let you know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678620">2</a> by Raul Riera
		posted on 3/28/2008 at 11:28 PM
		</div>
		<div class="comment_text"><p>@James</p><p>I would recommend you use the MultiFileUpload Flex component, because it uploads the files on at a time and beign Flex you have a lot of control with the use of Events (Im an AJAX newbie, I assume ajax has them as well)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fdevnet%2Fcoldfusion%2Farticles%2Fmultifile_upload.html%3AeeJ74u9KdSeasjJt_B0rv0f--pg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/devnet/coldfusion/articles/multifile_upload.html">http://www.adobe.com/devnet...</a></p><p>I modifed this component so it shows me the images after upload using a Cover Flow effect, I can share that with you if you want to, but I cant promise you the code would be pretty hehe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678619">3</a> by David Buhler
		posted on 3/28/2008 at 11:31 PM
		</div>
		<div class="comment_text"><p>Your processing time and CPU intensity will be less if you use a lower quality setting. The default quality is too good, and I'd highly suggest going lower, down to medium quality.</p><p>Also, if you're resizing images, you may want to consider resizing images from the last, larger image that was just manipulated. The quality suffers but the speed improves and typically, your users don't really care.</p><p>Imagemajik is even worse than CF8 for the CPU intensity.</p><p>If your site is successful, you can always defer image processing to a dedicated box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678623">4</a> by Patrick
		posted on 3/29/2008 at 1:48 AM
		</div>
		<div class="comment_text"><p>I also had some trouble processing images. Resizing 10 images slowed my mac down till the timeout for cfoutput. The reason was, that the images where processed in photoshop and saved with an ICC-Profile (ECI-RGB). I converted the images, to have no ICC-Profile asigned and the processing worked fast and fine!</p><p>Greets from germany</p><p>Patrick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678627">5</a> by James Allen
		posted on 3/29/2008 at 4:50 AM
		</div>
		<div class="comment_text"><p>Some great suggestions - thanks guys.</p><p>I hadn't considered a Flex approach to be honest, although I'm finding the multi-upload method I've built using an Ajax upload JQuery extension pretty cool. My only concern is the multiple uploads of 5 images, though I could change that to a queue system down the line if necessary.</p><p>The idea of using the last largest image to resize is pretty clever. Definetely worth some testing as I can see that helping greatly with CPU load when handling lots of images.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678625">6</a> by Michael Evangelista
		posted on 4/3/2008 at 6:53 AM
		</div>
		<div class="comment_text"><p>@James Allen:</p><p>&gt;&gt; although I'm finding the multi-upload method I've built using an Ajax upload JQuery extension pretty cool.</p><p>Which jQuery uploader are you using? <br>I need to do something very similar, very soon!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678624">7</a> by Jonas
		posted on 4/3/2008 at 12:42 PM
		</div>
		<div class="comment_text"><p>Same here - it's on my list of medium importance list to improve our admin site, so any sharing of your multi-file ajax upload solution would be awesome. :-)<br>Very interesting thread so far, thanks guys - always a learning experience to stop by here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678630">8</a> by James Allen
		posted on 4/3/2008 at 2:34 PM
		</div>
		<div class="comment_text"><p>As some of you are interested to hear how I did the multi-file upload I thought I'd post on here about it.</p><p>Firstly I used the code that Ray used in his example Ajax Upload post here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2008%2F2%2F27%2FCan-you-do-file-uploads-with-ColdFusion-8s-Ajax-features%3AsJjveXwJoAjcokKYOcHpY9A6sfI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2008/2/27/Can-you-do-file-uploads-with-ColdFusion-8s-Ajax-features">http://www.coldfusionjedi.c...</a></p><p>This works nicely and it's pretty easy to modify, which I did to support the multiple uploads.</p><p>Now, the actual interface I built to do this was an absolute, grade a pain in the ass! The reason being is that I have one single upload box followed by a list of 5 images which is dynamically populated as the user browses for and selects the images for upload.</p><p>Now, obviously to upload 5 images in the browser you *need* 5 individual upload boxes - no getting around this. Therefore, I had to build a complex and hair pullingly frustrating upload box switcher which would hide the current upload box and switch it with the next one in the list each time the user finished selecting their image (via an onchange event on the upload control). This was made even harder due to having to support the ability to remove images from the list.. It's painful just thinking back to that. LOL.</p><p>Anyway, that was the hardest part and you may not want to do things this way. You could just have 5 upload boxes on the page which would make it alot easier.</p><p>On clicking the 'Upload' button I call a function that loops over the 5 upload boxes and calls the Ajax upload function (similar to the example one Ray used but modified to accept the field number). This then takes care of uploading the images one by one, but as this is Ajax they are uploaded asyncronously. I also added a list position parameter to the upload function so that I can turn the upload progress animation on and off against each upload box.</p><p>The upload controller I use is a simple CFM template which instantiates my FileUploadService and calls some methods to receive the file being uploaded and then automatically resizes them to the relevant target sizes.</p><p>The script then returns the filename of the thumbnail (to sllow a dynamic preview).</p><p>That's it in a nutshell. Crazy single upload box switching side, it's not too bad to modify the example Ray gave to support multiple uploads. I think I had a proof of concept knocked up quite quickly, so I recommend you try it out.</p><p>I may get around to blogging about this in more detail at some point and will add a comment if I do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678635">9</a> by Felix Kreitner
		posted on 4/16/2008 at 11:32 PM
		</div>
		<div class="comment_text"><p>Hi, <br>i tried to resize a 5MB JPEG with cfimage and it tooks 24sek. on my developer engine.<br>After that i tried cfx_imagecr3 from <a href="http://disq.us/url?url=http%3A%2F%2Fwww.efflare.com%3ALwBdDYbhpbC9C7kTN2RTPy_OatI&amp;cuid=3321886" rel="nofollow noopener" title="www.efflare.com">www.efflare.com</a> and it tooks 4sek. <br>I was suprised how much faster cfx_imagecr can resize images.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678628">10</a> by Raymond Camden
		posted on 4/16/2008 at 11:42 PM
		</div>
		<div class="comment_text"><p>Did you try multiple types of resizing algorithms Felix?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678633">11</a> by Felix Kreitner
		posted on 4/16/2008 at 11:55 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>no i tried<br>&lt;cfimage action="resize" destination="thumb_sample.jpg" height="100" isbase64="false" overwrite="false" source="sample.jpg" width="" /&gt;</p><p>But i will play a little bit with cfimage to get a comparison. <br>I will let you know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678629">12</a> by Raymond Camden
		posted on 4/16/2008 at 11:57 PM
		</div>
		<div class="comment_text"><p>If you read the blog entry above (I know I skim things myself) you will notice that CF has 17 kinds of ways to resize.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678632">13</a> by Felix Kreitner
		posted on 4/17/2008 at 12:19 AM
		</div>
		<div class="comment_text"><p>Hi,<br>yes i read it, but did you think this will save 20sek.?<br>I think it will not, but it will be interesting to know which is the fastest solution an setting for cfimage in CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678631">14</a> by Raymond Camden
		posted on 4/17/2008 at 12:23 AM
		</div>
		<div class="comment_text"><p>Errr yes. From the text above:</p><p>"ColdFusion actually provides 17 different algorithms for resizing images, so you have a lot of choices there for tweaking quality and performance. By default ColdFusion uses the highest quality resize."</p><p>ColdFusion goes for quality by default. That would definitely impact performance.</p><p>I'm not saying it will equal cfx_imagecr, but....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678636">15</a> by Felix Kreitner
		posted on 4/17/2008 at 1:57 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>i played a little bit with ImageResize and cfimage. You are right the needed time is a little be better than before. The quality is not the same as cfx_imagecr, but OK.<br>Here is my demo i played with<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.jivespace.de%2Fcfimage%2F%3ApkUrz86RneQh9LO3hV5wqkIPOjM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.jivespace.de/cfimage/">http://www.jivespace.de/cfi...</a><br>It tooks 1 min. to open :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678639">16</a> by Andy Urban
		posted on 4/4/2011 at 1:20 AM
		</div>
		<div class="comment_text"><p>Just for people still checking this, I did what Patrick instructed above by removing the ICC profiles and my images resized very quickly. As a rule of thumb use "Save for Web" from Photoshop with the images you are going to push to the webpage and the profiles will be removed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678645">17</a> by James Moberg
		posted on 7/29/2011 at 3:45 AM
		</div>
		<div class="comment_text"><p>I finally had to search for a CFImage alternative.  The imageScaleToFit() function to rescale images was killing the server.</p><p>I checked out Efflare's cfx_imagecr3, but it failed with an "Expired, please buy a license" warning the first time it was installed &amp; run. (LAME)</p><p>I tried CFX_OpenImage and discovered that it rescales images about 75-90% faster and creates images that are about 64-72% smaller than CFImage. Even getting the image dimensions is about 96% faster than CFImage.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.kolumbus.fi%2F%7Ekr0626%2Fcfx_openimage%2F%3A8wU2PHUfTU4r92zOAj1Q0QVjRlU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.kolumbus.fi/~kr0626/cfx_openimage/">http://www.kolumbus.fi/~kr0...</a><br>(NOTE:  Only available for Win32)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678644">18</a> by Dave Morris
		posted on 11/24/2011 at 6:02 PM
		</div>
		<div class="comment_text"><p>Troubling, since I recently started a massive conversion process to move everything I had written using Jukka Manner's 32-bit CFX_Image tag over to the native CFImage so I could run on a 64-bit server. Now my servers are locking up, running out of memory all the time, and the time to process an image is an order of magnitude longer than with Jukka's custom tag. I've had to implement a 5 minute watchdog timer that automatically reboots CF server when it has been more than 5 minutes since CF last responded. This is ridiculous.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678648">19</a> by Raymond Camden
		posted on 11/24/2011 at 8:32 PM
		</div>
		<div class="comment_text"><p>Are you running 901+latest hot fixes?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678647">20</a> by Dave Morris
		posted on 11/24/2011 at 8:56 PM
		</div>
		<div class="comment_text"><p>I just bought and installed 9,0,0,251028 and didn't see anything in the hotfix bug list that addressed anything related to CFImage. Did I miss something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678651">21</a> by Raymond Camden
		posted on 11/24/2011 at 9:05 PM
		</div>
		<div class="comment_text"><p>Don't know - but it is normally recommended to use the latest/greatest. There is 901+2 Cumulative Hot Fixes you should pick up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678649">22</a> by Dave Morris
		posted on 11/26/2011 at 12:19 AM
		</div>
		<div class="comment_text"><p>OK, I installed 9.0.1 and also read up on the complex JVM memory allocation and garbage collection. I set my heap size to 2GB and we'll see if that helps any. One good thing about installing the 9.0.1 upgrade is that all of a sudden my Performance Monitor started working again and had all of the various parameters available, which were completely absent before.</p></div>
	</div>
</div>
		