
<div class="comment" id="c_1713722541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722541">1</a> by dave
		posted on 3/9/2010 at 5:29 AM
		</div>
		<div class="comment_text"><p>I saw that to but really it's nothing new since it has to upload the photo first and process it and then show what's already been done. This is nice with a small image but not a larger one and the plugin is nice but no progress bar which is why I have never used it.</p><p>When I do this with a photo or video I set it to when they select the item it does this and shows it before submitting the form just like this but for other reasons. Say when a user uploads a photo I upload it to a separate hhd and rename it to a uuid and convert it to a png and move it to a temp folder(actually I use ram:/// with railo) and return the uuid to the form which then via ajax calls an image tag and adds the uuid to show the image. Then when the user submits the photo (say it's for their profile pic) I process the form and take bits of it like their names and build a new image name like ray-camden-coldfusion-jedi-03072010 and then grab the image in temp folder and move, resize and convert in one swoop to the final folders (large &amp; thumbs) and then run a script to delete any old images in any of the folders or in ram.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722540">2</a> by Gareth Arch
		posted on 3/9/2010 at 8:40 AM
		</div>
		<div class="comment_text"><p>@Ray,<br>You may also want to look into trying this using Flex in Flash Player 10.1  I'm sure you know this, but it allows you to read the file in locally from the user's file system, manipulate everything (resize, resample) to display to the user, then allow the user to send or cancel before sending everything to the server.  This gets around having to send anything back and forth between client and server, and also allows you to manage the filesize before sending.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722542">3</a> by Raymond Camden
		posted on 3/9/2010 at 9:18 AM
		</div>
		<div class="comment_text"><p>@Gareth: Actually, I did not know that. I knew you could do form posts w/ file uploads in Flex, but I didn't know you could read the file w/o doing the upload. Isn't that a security risk? Got any online examples?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722543">4</a> by Gareth Arch
		posted on 3/9/2010 at 9:47 AM
		</div>
		<div class="comment_text"><p>@Ray,<br>Yeah, they added the feature to Flash Player 10.1  Here's a video demo of it<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.gotoandlearn.com%2Fplay%3Fid%3D76%3Aln7xRp4qXsn43FDaBuYaIrqOedI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.gotoandlearn.com/play?id=76">http://www.gotoandlearn.com...</a><br>along with a nice, long discussion about why certain changes were made to the Flash sandbox in order to accommodate this feature here<br><a href="http://disq.us/url?url=http%3A%2F%2Ftheflashblog.com%2F%3Fp%3D423%3A1jbssjM625PvjkQVmOJEYR3TzvY&amp;cuid=3321886" rel="nofollow noopener" title="http://theflashblog.com/?p=423">http://theflashblog.com/?p=423</a></p><p>It takes away programmatically opening the browse dialog (for security reasons), but allows the local opening of files.  Similar functionality for save...it needs user interaction from a save dialog box to save files locally.</p><p>And the FileReference class documentation<br><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fflex%2F3%2Flangref%2Fflash%2Fnet%2FFileReference.html%3AjcvEV0KheVDaWs_1tNJFlxKPxPA&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/flex/3/langref/flash/net/FileReference.html">http://livedocs.adobe.com/f...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722546">5</a> by Raymond Camden
		posted on 3/9/2010 at 7:07 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing that video. I just watched it and it seems like a cool addition to Flash.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722545">6</a> by cjm
		posted on 4/22/2010 at 2:43 AM
		</div>
		<div class="comment_text"><p>My problem is that if a non image file is uploaded I'm having a hard time displaying back to the user that they uploaded an invalid file type.  The onComplete event never seems to fire with, for example, a pdf file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722548">7</a> by Raymond Camden
		posted on 4/24/2010 at 12:37 AM
		</div>
		<div class="comment_text"><p>Well you wouldn't be able to use my code w/o modification. It assumes the response is image data - notice how it updates the src attribute of the image. You would need to do something like:</p><p>if response is 0, point the src to a 'badimage.gif'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722547">8</a> by Ofeargall
		posted on 6/2/2010 at 1:44 AM
		</div>
		<div class="comment_text"><p>Ray, I can't seem to get this to work all the way. The upload and re-size happens but that's the end of it. Not sure what's fowling the works. The only difference in our code is the destination directory isn't in RAM. I'm using expandPath("./uploads"). For some reason I can't harvest the response. It's not showing any activity in Firebug either.<br>Also, I'm using the latest version of ajaxupload and linked to the most recent jquery library at googleapis</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722549">9</a> by cjm
		posted on 6/2/2010 at 2:12 AM
		</div>
		<div class="comment_text"><p>If you do a dump on the list of files in ram after the upload do you see anything?</p><p>&lt;cfdirectory action="list" directory="ram://" name="listDir" recurse="yes" &gt; &lt;cfdump var="#listDir#"&gt;  ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722550">10</a> by Raymond Camden
		posted on 6/2/2010 at 2:17 AM
		</div>
		<div class="comment_text"><p>No activity in Firebug at all? How about logging in the CF pages to see they are being accessed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722551">11</a> by Ofeargall
		posted on 6/2/2010 at 8:00 PM
		</div>
		<div class="comment_text"><p>I dropped a cflog onto all three pages. The main upload page is, of course accessed and so is the thumbnailupload.cfm. But, no activity on the thumbnailpreview.cfm is reported.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722552">12</a> by Ofeargall
		posted on 6/2/2010 at 8:06 PM
		</div>
		<div class="comment_text"><p>One minor caveat, I'm using CF8. But, I'm also not making use of the 'ram:////'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722553">13</a> by Ofeargall
		posted on 6/3/2010 at 1:29 AM
		</div>
		<div class="comment_text"><p>I've tried a lot of things. For some reason I'm not getting a response back. The 'onComplete' isn't firing for some reason. I'll keep hacking away until I get to the bone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722555">14</a> by Raymond Camden
		posted on 6/3/2010 at 3:43 PM
		</div>
		<div class="comment_text"><p>Try adding an alert('poo') as the first line in the onComplete. See if that fires.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722557">15</a> by Ryan Fitzpatrick
		posted on 4/13/2011 at 5:16 PM
		</div>
		<div class="comment_text"><p>Great script got everything to work but it's broken in IE anyone have any problems with IE, safari, firefox, ipad works awesome?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722560">16</a> by Raymond Camden
		posted on 4/13/2011 at 5:27 PM
		</div>
		<div class="comment_text"><p>Do you still have the console.log messages from my code? They make IE sad. Remove them and cast them beneath your feet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722564">17</a> by Ryan Fitzpatrick
		posted on 4/13/2011 at 5:35 PM
		</div>
		<div class="comment_text"><p>Yes I did Duh!, Cool looks good now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722561">18</a> by Raymond Camden
		posted on 4/13/2011 at 5:36 PM
		</div>
		<div class="comment_text"><p>I'm a bit of a console.log freak. I try to remove them when I post because it always tends to trip people up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722562">19</a> by Brad
		posted on 8/10/2011 at 10:59 AM
		</div>
		<div class="comment_text"><p>Good Stuff, thanks for sharing. Quick question, so I follow the link to AJAX Upload and download the plugin. I don't see the file ajaxupload.js, I see fileuploader.js. Am I correct to assume they one in the same?</p><p>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722567">20</a> by Raymond Camden
		posted on 8/10/2011 at 3:22 PM
		</div>
		<div class="comment_text"><p>Yeah, looks like they updated the plugin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722569">21</a> by Salvi Pascual
		posted on 4/4/2012 at 6:58 PM
		</div>
		<div class="comment_text"><p>Camden:</p><p>Thanks for your post, the example is really well-made and explain by itself; thanks to you I was able to fix a problem I had with this library since 3 days ago. But I think it have a little error, the code</p><p>&lt;cfif isImageFile(newFilePath)&gt;<br>    &lt;cfset jpgVersion = destdir &amp; "/" &amp; replace(createUUID(), "-", "_", "all") &amp; ".jpg"&gt;<br>    &lt;cfimage action="resize" width="100" height="100" source="#newFilePath#" destination="#jpgVersion#" overwrite="true"&gt;<br>    &lt;cfoutput&gt;#getFileFromPath(jpgVersion)#&lt;/cfoutput&gt;<br>&lt;/cfif&gt;</p><p>is making the file be upload twice. In your case it does not matter because you are uploading it to a memory zone, but in may solution I need to store the image in the server, so I improve it by just naming the file instead of  resize it and create a new copy.</p><p>I hope it work for someone else.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722568">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722568">22</a> by Raymond Camden
		posted on 4/4/2012 at 7:00 PM
		</div>
		<div class="comment_text"><p>Technically it isn't uploading it twice. It is keeping two copies. :) A small nit - but important if you are worried about network speed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722570">23</a> by Misty
		posted on 5/10/2012 at 2:39 PM
		</div>
		<div class="comment_text"><p>Hi, making few Changes I made it to work, All events work but only when i upload multiple files and cancel 1 file, it still upload that file, so any update the way i can handle the onCancel multiple uploads cancellation</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722572">24</a> by Raymond Camden
		posted on 5/10/2012 at 6:13 PM
		</div>
		<div class="comment_text"><p>Um... no idea man. You made modifications... so possibly just roll them back one by one. Maybe also check the docs for the plugin I was using.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722571">25</a> by misty
		posted on 5/10/2012 at 8:21 PM
		</div>
		<div class="comment_text"><p>yeah, Agreed. Did some modifications and it works but there are few limitations of this tag:</p><p>1) Cancel only works if the single file is upload, a made an ajax call on cancel event and deleted the file. <br>2) if you upload multiple files, it will fail, The Cancel comand will not work properly, it will reload the Partial file in the folder and database if that is used to store file name</p><p>So, there are my findings, still there needs to be added some kind of code in JS or custom function which can handle the cancellation of the single file and delete it when the othe files are being uploaded. I tried exploring the XHR and tried using the abort() function but that did not worked either, So figers crossed, will keep working on it, someday i may finish it off<br>:)</p></div>
	</div>
</div>
		