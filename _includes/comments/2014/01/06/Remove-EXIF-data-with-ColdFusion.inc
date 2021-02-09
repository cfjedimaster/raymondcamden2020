
<div class="comment" id="c_1714081404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081404">1</a> by Todd Sharp
		posted on 1/6/2014 at 7:00 PM
		</div>
		<div class="comment_text"><p>What that scare post fails to tell you is that most  responsible, legit social media sites do remove the metadata from the pictures you upload.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081397">2</a> by Raymond Camden
		posted on 1/6/2014 at 7:08 PM
		</div>
		<div class="comment_text"><p>That's good to know. I never bothered to check if FB does it as I only use FB for friends anyway.</p><p>Still surprised there isn't an easy way to do this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081394">3</a> by Todd Sharp
		posted on 1/6/2014 at 10:10 PM
		</div>
		<div class="comment_text"><p>I've read up on it a bit in the past and there seems to be 2 distinct sides to the issue - one being privacy information advocates and the other being copyright advocates.  I can see both sides of the issue so it's hard to say one way or another which makes the most sense.</p><p>I do agree though - you'd think there'd be an easy way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081396">4</a> by Aaron Martone
		posted on 1/6/2014 at 10:11 PM
		</div>
		<div class="comment_text"><p>I'd rather remove the EXIF data myself before submitting to another site than to rely and trust that someone else will do it for you.  This mimics my beliefs in the workplace as I'm a proponent of the belief "If you want something done, you gotta do it yourself".</p><p>The masses currently consume and utilize media and other technology without having a true understanding of the best practices and security risks involved, and even though we, as IT professionals, can work to help them in any way possible, I still feel that empowering someone to be aware of a responsible for those actions is the best course.</p><p>Though many can (and will) claim the time-tested (yet illogical) adage of "I'm computer illiterate", the ultimate responsibility still lies with the person putting the photo up (rather than the site for scrubbing meta data).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081403">5</a> by coldfusionPaul
		posted on 1/6/2014 at 10:46 PM
		</div>
		<div class="comment_text"><p>FB strips out the geocoding right after uploading, which i find a PITA. it could simply figure out locations (down to some user-controlled level of detail) &amp; *then* strip out that info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081409">6</a> by coldfusionPaul
		posted on 1/6/2014 at 10:57 PM
		</div>
		<div class="comment_text"><p>in reference to the actual problem, have you looked at (used to be called sanselan)?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcommons.apache.org%2Fproper%2Fcommons-imaging%2F%3ApgqRuBdE0ri9jwl10-8Xyv_wtDc&amp;cuid=3321886" rel="nofollow noopener" title="http://commons.apache.org/proper/commons-imaging/">http://commons.apache.org/p...</a></p><p>we used older versions to write EXIF to JPEG images (geocoding) woks fine w/cf. the latest version has a method "removeExifMetadata" that strips out all EXIF data from an image.</p><p>you might also ping steve erat, i think he knows this EXIF stuff more than most.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081405">7</a> by Raymond Camden
		posted on 1/6/2014 at 11:25 PM
		</div>
		<div class="comment_text"><p>@Paul: No, I had not. As I said, my Googling seemed to show no real solution (outside of reading in the bits and saving them as a new file as a way to nuke the EXIF). I'll have to try this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081411">8</a> by Nitai
		posted on 1/8/2014 at 1:11 AM
		</div>
		<div class="comment_text"><p>The best tool for metadata handling is hands down ExifTool. It is a simple library (on Ubuntu you simply do a "apt-get install exiftool", has downloads for Windows and Mac too).</p><p>Then all you need to do is use some cfecexute-fu and you can read, write, modify any metadata of images, videos, audios and PDF's to your heart content.</p><p>We use it all over Razuna for many years with success.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.sno.phy.queensu.ca%2F%7Ephil%2Fexiftool%2F%3A-9bgIoCSXy3hPr2eMZKTCQpCnjY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.sno.phy.queensu.ca/~phil/exiftool/">http://www.sno.phy.queensu....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081412">9</a> by Raymond Camden
		posted on 1/8/2014 at 10:59 PM
		</div>
		<div class="comment_text"><p>@Nitai: I'm really kinda opposed to a cfexecute solution... but not for any good reason. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081406">10</a> by Nitai
		posted on 1/8/2014 at 11:03 PM
		</div>
		<div class="comment_text"><p>lol... I hear you.</p><p>Actually, we are writing everything to a .bat or .sh file and then only use cfexecute to execute those files. Then cfexecute only has to execute the file and not handle anything. Using this technique has saved us from many "issues" with cfexecute :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081413">11</a> by coldfusionPaul
		posted on 1/8/2014 at 11:36 PM
		</div>
		<div class="comment_text"><p>batch files &amp; exe are kind of icky. but that thing has wrappers:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.sno.phy.queensu.ca%2F%7Ephil%2Fexiftool%2F%23links%3AG38PDEcrK6WkC3hFmh49G27n-pM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.sno.phy.queensu.ca/~phil/exiftool/#links">http://www.sno.phy.queensu....</a></p><p>under the "Programming" heading.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081407">12</a> by Sam
		posted on 2/19/2014 at 10:05 AM
		</div>
		<div class="comment_text"><p>When do the Exif data actually get dropped? In the first write or in the second read? <br>Try this.<br>ImageRead() &gt; Any Edit &gt; imageWrite(). Go to image properties of the saved image (in windows) &gt; details tab and you can still see the Exif data. ImageRead() or imageWrite() haven’t really drop Exif data yet.</p><p>Next do this:<br>Read &gt; Edit &gt; Write &gt; Read &gt; Write. Now if you go to details tab, Exif data is gone. <br>This looks rather like a bug to me, a ladybug perhaps, but nevertheless a bug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081414">13</a> by Raymond Camden
		posted on 2/19/2014 at 4:51 PM
		</div>
		<div class="comment_text"><p>That's not what I saw with my test - in the script above note it is just read and then write.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081398">14</a> by Eric M
		posted on 10/22/2014 at 12:26 AM
		</div>
		<div class="comment_text"><p>This isn't directly on topic, but it relates to reading/changing/deleting image metadata.  When you right-click a JPEG file in Windows and go to Properties &gt; Details, Windows will expose a variety of metadata.  For example on a JPG file I scanned, under a sub-heading of Image, there are listed Dimensions, Width, Height, Horizontal Resolution, Vertical Resolution and Bit Depth.  I initially assumed this was EXIF data, yet if I use imageGetExifMetadata(myImage), I get an empty structure.  If I cfdump #myImage# I can see height and width, but no other metadata.  I also tried using a couple different Exif/IPTC/XMP viewers/editors and those all come up empty.  So my question is, if these values are not EXIF/IPTC/XMP metadata, what are they and is it possible to read them with Coldfusion?  I'm particularly interested in the Resolution fields which are populated by the scanner software.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081416">15</a> by Eric M
		posted on 10/25/2014 at 1:34 AM
		</div>
		<div class="comment_text"><p>Well, for anyone who might also be interested, I solved my problem using Steven Erat's ImageMetadata.cfc (<a href="http://disq.us/url?url=http%3A%2F%2Fimagemetadata.riaforge.org%2F%29%3Axl75z8e8xpJ5x9IUvl7iffUlPK4&amp;cuid=3321886" rel="nofollow noopener" title="http://imagemetadata.riaforge.org/)">http://imagemetadata.riafor...</a>, which is a simple Coldfusion cfc wrapper for the above mentioned ExifTool.  By default, the CFC only parses the XMP namespaced tags, but adding in -exif:all into the cfexecute arguments brings in all the EXIF tags as well.  And sure enough, all the values I am interested in are included in that EXIF data - even though several other EXIF readers, including CF's native tag, did not expose those values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081417">16</a> by Raymond Camden
		posted on 10/25/2014 at 1:38 AM
		</div>
		<div class="comment_text"><p>Thanks for sharing what worked for you, Eric!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081418">17</a> by Eric M
		posted on 10/31/2014 at 11:20 PM
		</div>
		<div class="comment_text"><p>EDIT:   My original jpg files had no EXIF data whatsoever which is why all the other EXIF readers found nothing.  Yet the values of height, width and resolution still show up in Windows.  Once again, ExifTool to the rescue.  A complete command-line dump of *all* metadata for the file (using -s to display the actual tag name and -g to group them by namespace) exposes File:ImageHeight, File:ImageWidth, JFIF:XResolution, and JFIF:YResolution.  A little tinkering with Erat's CFC and - presto! - I can access these values via Coldfusion.  Many thanks to Mr. Harvey, Mr. Erat and Mr. Camden for sharing your vast knowledge!</p></div>
	</div>
</div>
		