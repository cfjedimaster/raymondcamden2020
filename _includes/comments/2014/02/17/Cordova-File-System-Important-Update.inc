
<div class="comment" id="c_1714081693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081693">1</a> by omid jafari
		posted on 2/17/2014 at 10:31 PM
		</div>
		<div class="comment_text"><p>wow you helped me solve one of my biggest problems....thank you raymonnd ..brilliant article...it would be so helpful if you could make a demo for andriod...amazing blog though:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081690">2</a> by Raymond Camden
		posted on 2/17/2014 at 11:06 PM
		</div>
		<div class="comment_text"><p>Do you have a specific example you would like to see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081685">3</a> by Ross Hanney
		posted on 2/18/2014 at 4:00 AM
		</div>
		<div class="comment_text"><p>Hello Raymond,</p><p>Thanks for the heads-up regarding this, I would have been very confused otherwise, I'm sure!</p><p>However, I'm running into an issue that I wonder if you might be able to shed some light on.</p><p>I'm recording audio files using the Media plugin. After a recording has successfully completed, I want to move the file to another directory using the File plugin. Prior to the update to the File plugin, I did something like &lt;a href="<a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Frosshanney%2F9060654%3AxqkWddfKxfJaahebZ7CmisYtQc8&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/rosshanney/9060654">https://gist.github.com/ros...</a>"&gt;this&lt;/a&gt;, which worked as the filesystem root and the location that the Media plugin initially saved the recording were the same.</p><p>Now the filesystem root is relative to my app's "private" directory (which is cool), I'm not sure how to go about reliably resolving the location of the saved recording so I can move it.</p><p>I've tried window.resolveLocalFileSystemURL, without success thus far.</p><p>I've also tried recording directly to the target directory (therefore removing the requirement to move the file at all), but passing targetDir.toURL() as the src param to Media doesn't seem to work.</p><p>I'm only targeting Android, currently.</p><p>Am I going about this the wrong way, or missing something obvious?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081696">4</a> by Ross Hanney
		posted on 2/18/2014 at 4:02 AM
		</div>
		<div class="comment_text"><p>Oops, sorry about the mangled gist link.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Frosshanney%2F9060654%3AxqkWddfKxfJaahebZ7CmisYtQc8&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/rosshanney/9060654">https://gist.github.com/ros...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081688">5</a> by omid jafari
		posted on 2/18/2014 at 4:39 PM
		</div>
		<div class="comment_text"><p>yes raymond ...i wish you could make a sample demo project for android about accessing to filesystems and searching for a particular file with a specific name for example...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081699">6</a> by Raymond Camden
		posted on 2/18/2014 at 4:52 PM
		</div>
		<div class="comment_text"><p>@omid: Well the first question is - do you know what folder you want to look in?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081695">7</a> by Tom
		posted on 2/19/2014 at 4:23 AM
		</div>
		<div class="comment_text"><p>With being able to write to the internal file system now, does this improve security at all?  We were looking into storing javascript files via the phonegap file api, but then realized there's the possibility of people editing those files we stored using the file api which could then inject code into our apps.  Thanks for posting this tidbit!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081687">8</a> by omid jafari
		posted on 2/19/2014 at 12:35 PM
		</div>
		<div class="comment_text"><p>yes presume that we know the folder..actually we make and choose this folder</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081694">9</a> by Raymond Camden
		posted on 2/19/2014 at 8:15 PM
		</div>
		<div class="comment_text"><p>@Tom: I honestly do not know. You would need to check the Android/iOS docs (not PhoneGap) for info on how it treats the file system and apps. My guts say to NOT trust it. Period. Much like a "normal" client side app (and remember you can store data on the desktop websites too with LocalStorage, IndexedDB,etc) you should always assume that the user can modify the values. That to me isn't a deal breaker. Being able to store stuff locally is incredibly important, but you just have to remember that it can't be trusted in terms of secured operations.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081697">10</a> by Raymond Camden
		posted on 2/19/2014 at 8:16 PM
		</div>
		<div class="comment_text"><p>So omid - it should just work. I mean the docs that show how to list a directory, that still works fine. These changes are more involved about *where* you start off with when opening the file system.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081698">11</a> by Vinay
		posted on 2/20/2014 at 12:16 PM
		</div>
		<div class="comment_text"><p>I am using the filetransfer plugin to download images from the server to the local file system. I get a path like 'cdvfile://localhost/persistent/...' at the end which i store for future reference. I use these cached paths to refer these images in my html using the image tag</p><p>&lt;img src="cdvfile://localhost/persistent/...'"/&gt;</p><p>This works fine when the first time but when i restart the app or navigate to some other page which iss using the same image the image doesn't load. I am seeing this behavior on simulator and on a physical device. Could you please try this out and let me know if there is some thing wrong with the way i am using the path.<br>Also i use a nexus 5 for debugging and i am not able to locate the files on my device.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081692">12</a> by omid jafari
		posted on 2/20/2014 at 12:43 PM
		</div>
		<div class="comment_text"><p>yeah, it works ,thanks raymond:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081691">13</a> by Roman
		posted on 2/20/2014 at 3:20 PM
		</div>
		<div class="comment_text"><p>For all who are having trouble with reading files from another direcotry (not root). This example lists all pictures within your DCIM/Camera folder:</p><p>document.addEventListener("deviceready", onDeviceReady, false);</p><p>function onDeviceReady() {<br>    window.requestFileSystem(LocalFileSystem.PERSISTENT, 0, onFSSuccess, FileError);<br>}</p><p>//Be careful! The onFSSuccess needs the parameter fileSystem!<br>//The directory path is without the prefix of the root directory!<br> function onFSSuccess(fileSystem) {                          fileSystem.root.getDirectory("DCIM/Camera/", {create: false, exclusive: false}, doDirectoryListing, FileError);<br>}</p><p>//dirEntry needs to be a parameter of the function!<br>function doDirectoryListing(dirEntry) {<br>            var directoryReader = dirEntry.createReader();<br>            directoryReader.readEntries(gotFiles, FileError);<br> }</p><p> function gotFiles(entries)<br> {<br>            for(var i=0,len=entries.length; i&lt;len; i++)<br>            {<br>                        //Name of the picture within "DCIM/Camera"<br>                        alert(entries[i].name);<br>              }<br> }</p><p>//This function won´t get executed if you forgot the parameter(s) of the functions <br>function FileError(e) <br>{<br>   alert("Fehler");<br>}</p><p>Thanks to RaymondCamden and SimonMacDonald!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081700">14</a> by George
		posted on 2/24/2014 at 4:31 PM
		</div>
		<div class="comment_text"><p>I store gpx files locally for openlayers to display.  The file paths starting with '/' and cdvfile://localhost/, that are returned by fullPath and toURL, will not work.  Only a path starting with file:/// will work.  Is this possible in cordova 3?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081703">15</a> by Raymond Camden
		posted on 2/24/2014 at 4:34 PM
		</div>
		<div class="comment_text"><p>Have you tried setting the img src to a cdvfile url?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081707">16</a> by George
		posted on 2/24/2014 at 4:46 PM
		</div>
		<div class="comment_text"><p>I'm not trying to display an image, I'm tring to draw a gpx track which is an xml file, for example: <a href="http://disq.us/url?url=http%3A%2F%2Fwiki.openstreetmap.org%2Fwiki%2FOpenlayers_Track_example%3AXAcARbBlxNjrCYWCVgBHUfuEa7w&amp;cuid=3321886" rel="nofollow noopener" title="http://wiki.openstreetmap.org/wiki/Openlayers_Track_example">http://wiki.openstreetmap.o...</a> (see line 'url: "around_lake.gpx",'.  The cdvfile url URL does not work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081710">17</a> by Raymond Camden
		posted on 2/24/2014 at 5:12 PM
		</div>
		<div class="comment_text"><p>Hmm. If we ignore GPX for a bit - if you do a regular XHR to the cdv url, do you get a response?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081712">18</a> by George
		posted on 2/24/2014 at 5:59 PM
		</div>
		<div class="comment_text"><p>No I get an error doing a XHR to the cdv url.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081711">19</a> by Raymond Camden
		posted on 2/24/2014 at 6:03 PM
		</div>
		<div class="comment_text"><p>Hmm, I don't know. I apologize - these new changes are confusing to me as well. What I would recommend is - post to the Google group for PhoneGap and ask about this, specifically - why you can't access the file via XHR. It seems like you should be able to. When you get a response, can you let us know?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081713">20</a> by Priya
		posted on 2/27/2014 at 11:15 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>Your blogs are very much helpful in getting a better understanding of the concepts. Thanks to you, many of my project issues were resolved even without posting in any group.</p><p>Reg filesystem, am facing the same issue as Vinay:<br>I am using the filetransfer plugin to download images from the server to the local file system. I get a path like 'cdvfile://localhost/persistent/...' at the end which i store for future reference. I use these cached paths to refer these images in my html using the image tag</p><p>&lt;img src="cdvfile://localhost/persistent/...'"/&gt;</p><p>This works fine when the first time but when i restart the app or navigate to some other page which iss using the same image the image doesn't load. I am seeing this behavior on simulator and on a physical device.</p><p>Could you please help us resolve the same?<br>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081714">21</a> by matthew
		posted on 3/6/2014 at 11:32 AM
		</div>
		<div class="comment_text"><p>I've recently upgraded and I'm having issues witht he file plugin. previously I could get a fullpath to an image that was in the gallery (android) using the code below. But now I can't. always returns undefined.</p><p>any suggestions?</p><p>window.resolveLocalFileSystemURL(imageURI, function(fileEntry) {<br>            fileEntry.file(function(fileObj) {</p><p>                newimageURI = fileObj.fullPath;<br>		alert(newimageURI);</p><p>     });<br>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081719">22</a> by Priya
		posted on 3/6/2014 at 11:44 AM
		</div>
		<div class="comment_text"><p>@mathew<br> fileObj.toURL() to be used instead of fileObj.fullPath</p><p>Please refer:<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fapache%2Fcordova-plugin-file%2Fblob%2Fdev%2Fdoc%2Findex.md%23upgrading-notes%3Azrz2QEfzr4Ch5zLBo--nEe1q6KI&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/apache/cordova-plugin-file/blob/dev/doc/index.md#upgrading-notes">https://github.com/apache/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081716">23</a> by matthew
		posted on 3/7/2014 at 4:42 AM
		</div>
		<div class="comment_text"><p>Tried that fileObj.toURL() but only get this error...</p><p>03-07 10:08:08.123: I/Web Console(2170): processMessage failed: Stack: TypeError: Object [object Object] has no method 'toURL'</p><p>The image in question is located in the content://media/external ....  but earlier in the week when I ran the above code it returned a full image address. now nothing. I'm trying to get the address so I can use fileupload to send to a server. works fine for images captured using the camera but not from stored images.</p><p>Thanks.<br>Matthew</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081715">24</a> by Priya
		posted on 3/7/2014 at 7:55 PM
		</div>
		<div class="comment_text"><p>@mathew please try fileObj.localURL</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081717">25</a> by matthew
		posted on 3/11/2014 at 4:34 AM
		</div>
		<div class="comment_text"><p>@Priya I tried fileObj.localURL and it does return a slightly different url but still not the true file path.  content://media/external/images/media/86 is the imageURI then the localURL returns the same. if I select a resized version it only gives me a link to the resize.jpg with a time stamp. where the fullPath used to return a true path to the original file (if I selected a none resized image). Is there an easy way to save the resized timestamp version locally which I rename and then get access to that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081720">26</a> by Tolu
		posted on 4/3/2014 at 1:36 PM
		</div>
		<div class="comment_text"><p>Thank you for pointing out the update. Please do you have a blog post or a demo app set up to demonstrate filesysytem access in a phonegap app? What I'm particular about is how would one go about calling up the device file system and have a user select a file and probably upload to a remote server.<br>The selection process is my major concern as the docs for accessing the filesystem are centered around getting a 'known' file and not leaving the user to browse and select 'any' file residing somewhere on their device. Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081718">27</a> by Raymond Camden
		posted on 4/3/2014 at 2:31 PM
		</div>
		<div class="comment_text"><p>I do have an earlier blog entry on the file system where I demonstrate getting a listing, which is what you would need to do. It doesn't let them browse/select, but thats the only other piece you need. Ie, add links and if they click a directory, do a listing on that then. I'll see if I can blog something more formal, but it may be a while.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081721">28</a> by Tolu
		posted on 4/3/2014 at 3:27 PM
		</div>
		<div class="comment_text"><p>Thank you Raymond, while I wait for that new post, please give me the url to the old post you referred to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081722">29</a> by Raymond Camden
		posted on 4/3/2014 at 4:25 PM
		</div>
		<div class="comment_text"><p>Hmpth, now I can't find it. I'd suggest just browsing my phonegap blog entries via my search.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081723">30</a> by OOPDeveloper89
		posted on 4/4/2014 at 4:05 PM
		</div>
		<div class="comment_text"><p>Hello Raymond,</p><p>thanks for this article. I have an issue by accesing the filesystem.<br>I download cordova-3.4 and copied the cordova.js for android system.<br>Before 3.4 I was using 2.9.1.</p><p>The problem is LocalFileSystem is undefined. In 2.9.1 it was defined. I looked<br>into the source of cordova.js and could not find LocalFileSystem. In cordova.js<br>of version 2.9.1 I could find it.</p><p>Are there other files I have to include in my index.html?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081724">31</a> by Raymond Camden
		posted on 4/4/2014 at 4:08 PM
		</div>
		<div class="comment_text"><p>Did you add the FIleSystem plugin? Remember everything in Cordova 3.X runs via plugins you *must* install first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081726">32</a> by OOPDeveloper89
		posted on 4/4/2014 at 4:28 PM
		</div>
		<div class="comment_text"><p>Yes, due the releasenotes I have version 1.0.1 (Feb 28, 2014)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081725">33</a> by Raymond Camden
		posted on 4/4/2014 at 4:29 PM
		</div>
		<div class="comment_text"><p>I'd double check then. The error you report is pretty much exactly the one you get when trying to use a feature w/o the plugin installed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081727">34</a> by OOPDeveloper89
		posted on 4/4/2014 at 5:00 PM
		</div>
		<div class="comment_text"><p>Hmm, I use Zend Studio 10.6 to install my phonegap plugins. The ide creates a config.xml where you can add and remove Plugins you want. <br>Can I check somehow which version of plugin I have installed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081728">35</a> by OOPDeveloper89
		posted on 4/4/2014 at 5:07 PM
		</div>
		<div class="comment_text"><p>I checked in plugin.xml.. This is the repository where the file plugin will be fetched:<br><a href="https://disq.us/url?url=https%3A%2F%2Fgit-wip-us.apache.org%2Frepos%2Fasf%2Fcordova-plugin-file.git%3ALEItZtnl8eOEttDhuMS5hmReGAs&amp;cuid=3321886" rel="nofollow noopener" title="https://git-wip-us.apache.org/repos/asf/cordova-plugin-file.git">https://git-wip-us.apache.o...</a><br>The console in Eclipse/Zend Studio says: <br>Fetching plugin from location "org.apache.cordova.file"...</p><p>And I see the plugins in the plugins/ directory of the project.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081731">36</a> by OOPDeveloper89
		posted on 4/4/2014 at 5:18 PM
		</div>
		<div class="comment_text"><p>Is it possible I just have to add other *.js files then cordova.js... <br>I get it in this directory of the download file...<br>...\Downloads\cordova-3.4.0\cordova-android\framework\assets\www</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081730">37</a> by Raymond Camden
		posted on 4/4/2014 at 6:00 PM
		</div>
		<div class="comment_text"><p>I would recommend *not* using Zend Studio to install plugins. It may not be working right. I don't know that for a fact of course, but I'd suggest using the *documented* way for now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081729">38</a> by OOPDeveloper89
		posted on 4/4/2014 at 6:15 PM
		</div>
		<div class="comment_text"><p>Hmm okay, I will try it with the documented way. I let you know if it worked. Thank you very much :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081732">39</a> by oopdeveloper89
		posted on 4/8/2014 at 9:32 AM
		</div>
		<div class="comment_text"><p>Hello Raymond. Is it correct that value of fileSystem.root.fullPath can be just: "/"??<br>Or should I get something like "file///..."<br>I am using  android 4.3 and phonegap 2.9...<br>Maybe zend studio really  did not install the plugin correctly.<br>Thank you for answer :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081733">40</a> by Raymond Camden
		posted on 4/8/2014 at 7:30 PM
		</div>
		<div class="comment_text"><p>Please see the upgrade notes about the FileSystem API. This in particular may be applying to you:</p><p>"With v1.0.0, the fullPath attribute is the path to the file, relative to the root of the HTML filesystem"</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fapache%2Fcordova-plugin-file%2Fblob%2Fdev%2Fdoc%2Findex.md%23upgrading-notes%3Azrz2QEfzr4Ch5zLBo--nEe1q6KI&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/apache/cordova-plugin-file/blob/dev/doc/index.md#upgrading-notes">https://github.com/apache/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081740">41</a> by OOPDeveloper89
		posted on 4/9/2014 at 4:24 PM
		</div>
		<div class="comment_text"><p>Hello again Raymond,</p><p>sorry to ask you again. I would be happy if you can answer this:<br>I need the directory entry of the "download" folder of android.<br>Therefore i wrote:<br>	window.resolveLocalFileSystemURL('cdvfile://external/persistent/storage/emulated/0/Download', function(a) {<br>	    console.log(a);<br>	}, InfopoolFileDownloadRepository.errorOccured);</p><p>Permissions of app are WRITE_EXTERNAL_STORAGE, READ_EXTERNAL_STORAGE</p><p>Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081738">42</a> by Raymond Camden
		posted on 4/9/2014 at 4:59 PM
		</div>
		<div class="comment_text"><p>And? You didn't say what went wrong - if anything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081739">43</a> by OOPDeveloper89
		posted on 4/9/2014 at 5:05 PM
		</div>
		<div class="comment_text"><p>Hehe you are right.. <br>Well, first I tried with: 'file:///...' but I always got error code 5.<br>So, <br>	window.resolveLocalFileSystemURL('file:///storage/emulated/0/Download', function(a) {<br>	    console.log(a);<br>	}, MyObj.errorOccured);</p><p>AND</p><p>	window.resolveLocalFileSystemURL('cdvfile:///storage/emulated/0/Download', function(a) {<br>	    console.log(a);<br>	}, MyObj.errorOccured);</p><p>wont work.</p><p>Using cordova 3.4 and Android 4.3.</p><p>Any idea why?</p><p>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081741">44</a> by Raymond Camden
		posted on 4/9/2014 at 5:30 PM
		</div>
		<div class="comment_text"><p>From what I can see, 5 implies an encoding error, but I'm not sure how that applies here. I also did some Googling, and from what I can see, Android devs are *not* supposed to assume a particular folder, but rather call an API to get the folder. I think if you wanted to do this with Cordova, you would need to build a plugin that just exposed this API so you could call it from JS. In theory not too difficult to do - but you would need to write some Java.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081745">45</a> by mpsyp
		posted on 4/10/2014 at 9:44 AM
		</div>
		<div class="comment_text"><p>Hello all.</p><p>Was happy to stumble upon this thread, as I'm having some difficulty with the filesystem on a cordova project I'm working on.  Having difficulty trying to access the actual file produced by the media capture plugin, despite having the full path of the file.</p><p>Details are in a Stack Overflow post that has gone unanswered for the past few days:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F22906026%2Freading-a-file-created-by-the-media-capture-plugin-in-cordova-creating-thumbna%3Amn0CWjJ7PiYhjUAxO3CFKOBISSs&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/22906026/reading-a-file-created-by-the-media-capture-plugin-in-cordova-creating-thumbna">http://stackoverflow.com/qu...</a></p><p>Any ideas?  Any help would be greatly appreciated.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081744">46</a> by Raymond Camden
		posted on 4/10/2014 at 3:27 PM
		</div>
		<div class="comment_text"><p>Posted a comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081743">47</a> by murali
		posted on 4/15/2014 at 7:26 PM
		</div>
		<div class="comment_text"><p>Hello Sir<br>In the new file system, we are facing one major issue. <br>The css styles are not applied to any html files that are residing in the library\caches folder<br>though it is not a  linked style sheet. Even the inline styles are not getting applied.</p><p>please let me know any workaround.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081742">48</a> by Raymond Camden
		posted on 4/15/2014 at 8:22 PM
		</div>
		<div class="comment_text"><p>Hmm. I'd suggest checking w/ Remote Debugging to see if you can get a detailed error report. Best I can suggest then is to post it to the Google Group.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081746">49</a> by red
		posted on 4/17/2014 at 2:43 PM
		</div>
		<div class="comment_text"><p>Hi<br>Ihave the same issue as matthew.<br>did anybody find a solution?</p><p>thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081747">50</a> by Alberto
		posted on 4/23/2014 at 8:21 PM
		</div>
		<div class="comment_text"><p>Hello Raymond,</p><p>I am new to Phonegap and is searching for information on the file API I found your blog and thought maybe you can help me with the File API. The  app captures the path a user is following using  geolocation's watch mode. The path points are stored into a variable with a predefined file format known as GPX (an XML type of file for GPS data).</p><p>I need to create the actual GPX file and allow the user to send it by email. To do so I am using the File and the Email Composer with attachments APIs and I cannot yet figure out how to connect both.</p><p>The path points data is stored in a javascript variable named "gpxcontents".  Using the file API, I am creating and storing the file to be emailed (track.gpx) as follows:</p><p>function createGPX(fs) {<br>  fs.root.getFile('track.gpx', {create: true}, function(fileEntry) {<br>    // Create a FileWriter object for our FileEntry (track.gpx).<br>    fileEntry.createWriter(function(fileWriter) {<br>      fileWriter.onwriteend = function(e) {<br>        console.log('Write completed.');<br>      };<br>      fileWriter.onerror = function(e) {<br>        console.log('Write failed: ' + e.toString());<br>      };<br>      // Create a new Blob and write it to log.txt.<br>      var blob = new Blob([gpxcontents], {type: 'text/plain'});<br>      fileWriter.write(blob);<br>    }, errorHandler);<br>  }, errorHandler);<br>}<br>window.requestFileSystem(window.LocalFileSystem.PERSISTENT, 5*1024*1024, createGPX, errorHandler);</p><p>Now, using Email Composer, I am building this function:</p><p>function emailTrack(){ <br>window.plugins.emailComposer.showEmailComposerWithCallback(callbackEmail,'Track File','Track File sent from <br>Mobile App',[] //toRecipients <br>,[] //ccRecipients <br>,[] //bccRecipients <br>,false //isHtml <br>,[] //attachments <br>,[] //attachmentsData <br>); <br>}</p><p>and have the following questions:</p><p>1. What shall be used as a "callbackEmail" function? is it mandatory or optional?</p><p>2. How can I capture the path to the "track.gpx" file and add it to the attachment section of the email composer?</p><p>3. What is the difference among "attachments"  and "attachmentsData"?  Shall both be used and if so how?</p><p>I am using Phonegap Build  with version 3.3 to compile the app.</p><p>Thanks forany help you may provide.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081748">51</a> by Raymond Camden
		posted on 4/24/2014 at 1:00 AM
		</div>
		<div class="comment_text"><p>'1. What shall be used as a "callbackEmail" function? is it mandatory or optional?'<br>I don't know this plugin. If their docs do not make this clear, you should file a bug report with them so they can make it clear.</p><p>'2. How can I capture the path to the "track.gpx" file and add it to the attachment section of the email composer? '<br>The fileEntry object you used earlier should be copied to a global scope, like window.myFile = fileEntry. The full path is part of the FileEntry object - I believe just something.fullPath.</p><p>'3. What is the difference among "attachments" and "attachmentsData"? Shall both be used and if so how?'<br>See #1. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081749">52</a> by Vignesh
		posted on 4/29/2014 at 2:13 AM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.html5rocks.com%2Fen%2Ftutorials%2Ffile%2Ffilesystem%2F%3A_lqy-a4hTfVQxPHUxNzRYiciswM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.html5rocks.com/en/tutorials/file/filesystem/">http://www.html5rocks.com/e...</a></p><p>Based on the above article, Chrome is going to stop working on the FileSystem APIs. How is this going to affect the Cordova FileSystem plugin?</p><p>Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081751">53</a> by Raymond Camden
		posted on 4/29/2014 at 7:56 PM
		</div>
		<div class="comment_text"><p>I don't know to be honest - but I do know you can subscribe to the Cordova dev list where they discuss stuff exactly like this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081753">54</a> by srk
		posted on 5/9/2014 at 3:16 PM
		</div>
		<div class="comment_text"><p>Hi,<br>I'm also having trouble reading file. I used navigator.camera.getPicture api to take or get photo from library and i manage to save it to file system using destinationType: Camera.DestinationType.1 The location of photo something like this;<br>file:///Users/xxx/Library/Application%20Support/iPhone%20Simulator/7.1-64/Applications/87329C6B-9D22-4639-AA68-5A25607234DA/tmp/cdv_photo_041.jpg<br>I've also managed to send photo using;<br>var ft = new FileTransfer();<br>ft.upload(file_uri, encodeURI(url), photo_upload_success, photo_upload_fail, options);<br>But somehow couldn't manage to read image to show in html.<br>I used different thinks like;<br>- remove first part of uri;<br>imageURI = imageURI.substr(8);<br>- don't remove<br>- etc.</p><p>Lastly i tried this function but still same;</p><p>    function get_image(imageURI){</p><p>            console.log(imageURI);<br>            var reader = new FileReader();</p><p>            reader.onloadend = function(evt) {<br>                console.log('-------------onloadend');<br>            };</p><p>            console.log('111');<br>            window.requestFileSystem(LocalFileSystem.PERSISTENT, 0, gotFS, fail);<br>            console.log('222');</p><p>            function gotFS(fileSystem) {<br>                console.log('gotFS');<br>                //fileSystem.root.getFile('tmp.tmp', {create: false, exclusive: false}, gotFileEntry, fail);<br>                fileSystem.root.getFile(imageURI, null, gotFileEntry, fail);<br>            }</p><p>            function gotFileEntry(fileEntry) {<br>                console.log('fileEntry');<br>                console.log(imageURI);<br>                reader.readAsBinaryString(imageURI);<br>                console.log('333');<br>            }<br>            function fail(error) {<br>                console.log('fail');<br>                console.log(error.code);<br>                console.log(error);<br>            }</p><p>    }</p><p>Does anyone has a working example to read image from file system on IOS?<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081752">55</a> by Raymond Camden
		posted on 5/9/2014 at 4:21 PM
		</div>
		<div class="comment_text"><p>In the future, please do not post large code blocks here.</p><p>So - to be clear, you just want to show an image that you selected w/ getPicture?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081754">56</a> by srk
		posted on 5/9/2014 at 5:10 PM
		</div>
		<div class="comment_text"><p>Sorry about it, you are right, if you want you can delete it i'll sent pastebin link.</p><p>Correct, i just would like to show an image from fileurl. I don't use DATA_URL as destinationType to avoid memory problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081755">57</a> by Raymond Camden
		posted on 5/9/2014 at 6:38 PM
		</div>
		<div class="comment_text"><p>I did a quick test and for me it worked ok. I created a virgin Cordova project and removed some of the DOM. I added an image tag with id of IMG. Here is the JS I used - it was written quickly so it isn't pretty. But it does work. I can select from the gallery and when I get the URI, I can set it to the DOM.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fcfjedimaster%2Faf298ed2bd0e3ce3ce54%3AzeeOZ7uGZNDa2BIpe3JuyKzH0G0&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/cfjedimaster/af298ed2bd0e3ce3ce54">https://gist.github.com/cfj...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081758">58</a> by Glen
		posted on 5/10/2014 at 6:53 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond for all your great articles.<br>@Alberto - I saw an email composer that said to put 'null' as the callback. The callback feature was added in order to be compatible with something.<br>window.plugins.emailComposer.showEmailComposerWithCallback(null,'Track File','Track File sent from ...<br>Can someone help me with attaching a file to an email? I have a web sql form that is exported to a text file through javascript. Logcat in Android Eclipse says the file is saved to cdvfile://localhost/temporary/profile.txt: 6124. The file is in the cache folder of my app.<br>I am using the katzer email compoer. He says to attach a file like this -<br><a href="http://disq.us/url?url=http%3A%2F%2Fwindow.plugin.email.open%3ALeFrDvUNP5612IrBzzEUfSQt8q4&amp;cuid=3321886" rel="nofollow noopener" title="window.plugin.email.open">window.plugin.email.open</a>({<br>    attachments: [<br>        'file://storage/sdcard/icon.jpg', //=&gt; Android<br>He says it can be used for text files to, but I can't get it to work. I even changed the file name to jpg.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081762">59</a> by srk
		posted on 5/12/2014 at 1:19 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond, i was trying to read file, but i saw that it more easy to use uri directly.<br>Thank you so much for help and also for article.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081756">60</a> by sergio
		posted on 5/14/2014 at 7:52 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, thanks for your post. I cannot write a file on the private memory of an android application. Please could you try and help me? This is my stackoverflow post: <br><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F23652193%2Fcordova-3-x-phonegap-write-on-data-data-generates-encodingexception%3AdM5aqCQgNCgiifUz32fXzXbb9Lc&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/23652193/cordova-3-x-phonegap-write-on-data-data-generates-encodingexception">http://stackoverflow.com/qu...</a></p><p>I am new to phonegap but I think it would be used much more if there was more support of stackoverflow ...<br>Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081760">61</a> by Raymond Camden
		posted on 5/18/2014 at 11:49 PM
		</div>
		<div class="comment_text"><p>I was at a conference - it looks like you got the support you needed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081759">62</a> by sergio
		posted on 5/19/2014 at 1:22 PM
		</div>
		<div class="comment_text"><p>yes I managed it, Thanks for your job and help anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081757">63</a> by Alberto
		posted on 5/20/2014 at 8:42 PM
		</div>
		<div class="comment_text"><p>@Glen,</p><p>Sorry for my late reply, I just saw your post. Thanks for your comment. I had figured out the role of that function and it seems to be needed by iOS somehow.</p><p>Anyway, we have figured out how to work with the new File API and native file paths. There is a new method "toNativeURL() " that allows to convert a fileEntry path to a native file path. Please check this thread in the Phonegap Build Community Forum for more details:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcommunity.phonegap.com%2Fnitobi%2Ftopics%2Ffile_and_email_with_attachments_apis_help%3AoLa97eRTYFtx0KcnTbA9oOkpesM&amp;cuid=3321886" rel="nofollow noopener" title="http://community.phonegap.com/nitobi/topics/file_and_email_with_attachments_apis_help">http://community.phonegap.c...</a></p><p>I hope it helps.<br>Greetings</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081761">64</a> by murali
		posted on 7/16/2014 at 2:40 PM
		</div>
		<div class="comment_text"><p>Hello Sir,<br>Is there any way, where we could use the cordova api functions inside a local page that opens up in inappbrowser.</p><p>say sample.html which is opened in inappbrowser. This html uses jquery and cordova.js files.<br>'document ready' is triggered but device ready is not triggered and iam unable to use any of the cordova functionalities. Is there any work around for this. as i need access to cordova.js functionality and also the local database files to fetch and display the details.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081765">65</a> by Raymond Camden
		posted on 7/16/2014 at 7:04 PM
		</div>
		<div class="comment_text"><p>In theory, yes, but it will not be easy. Only the parent doc can do "Cordova stuff", and you can't "talk" to the parent from the child. The closest you can do is poll for messages from the parent. See this: <a href="http://disq.us/url?url=http%3A%2F%2Fblogs.telerik.com%2Fappbuilder%2Fposts%2F13-12-23%2Fcross-window-communication-with-cordova%27s-inappbrowser%3A5gjp93o0WfW00cFFKQ9BJNNY1xw&amp;cuid=3321886" rel="nofollow noopener" title="http://blogs.telerik.com/appbuilder/posts/13-12-23/cross-window-communication-with-cordova's-inappbrowser">http://blogs.telerik.com/ap...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081764">66</a> by bharat
		posted on 7/31/2014 at 10:57 PM
		</div>
		<div class="comment_text"><p>I used the barcode scanner plugin that i found in repository and now i am working on that after i scan like said 10 items  i want to save it text file and send that text file through email in iphone/ipad.</p><p>Any help would be greatly appreciated.</p><p>Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081766">67</a> by Raymond Camden
		posted on 7/31/2014 at 11:07 PM
		</div>
		<div class="comment_text"><p>@bharat: Your question is a bit broad. Can you ask one specific question to narrow it down?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081770">68</a> by Huzoor Bux
		posted on 8/21/2014 at 1:49 PM
		</div>
		<div class="comment_text"><p>I have a page hosted online accessed that page in my phonegap application but now i want to come back to my local files in</p><p>file:///android_asset/www/profile.html</p><p>but it gives me error:</p><p>08-21 14:08:00.324: E/Web Console(8304): Not allowed to load local resource: file:///android_asset/www/profile.html at null:0</p><p>How do I fix this issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081769">69</a> by Raymond Camden
		posted on 8/21/2014 at 3:57 PM
		</div>
		<div class="comment_text"><p>I don't quite understand your question. How are you trying to load that file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081767">70</a> by Huzoor Bux
		posted on 8/21/2014 at 5:22 PM
		</div>
		<div class="comment_text"><p>Trying to access local page in href <br>&lt;a href="file:///android_asset/www/hyperextend.html';"&gt;Ext&lt;/a&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081768">71</a> by Huzoor Bux
		posted on 8/21/2014 at 5:24 PM
		</div>
		<div class="comment_text"><p>super.loadUrl("<a href="http://disq.us/url?url=http%3A%2F%2Fwww.web.com%2Fapp%2Fandroid%2Fwww%2Flogin.html%3AqLncW_a5jGSvyvKIYBYcVmgmnXw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.web.com/app/android/www/login.html">http://www.web.com/app/andr...</a>");</p><p>one page is added on my local folder and want to open that page using &lt;a href="file:///android_asset/www/hyperextend.html';"&gt;Ext&lt;/a&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081771">72</a> by Raymond Camden
		posted on 8/21/2014 at 6:17 PM
		</div>
		<div class="comment_text"><p>If it is local, why are you using file:///? Just link to hyerextend.html.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081778">73</a> by Huzoor Bux
		posted on 8/21/2014 at 6:35 PM
		</div>
		<div class="comment_text"><p>But my index file in online <a href="http://disq.us/url?url=http%3A%2F%2Fweb.com%2Findex.html%3AIdw4HI0I-NghiiuTPAIG7w1m60I&amp;cuid=3321886" rel="nofollow noopener" title="web.com/index.html">web.com/index.html</a> and i need only one file due to some reasons online and after that file need to come back to my local files</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081776">74</a> by Raymond Camden
		posted on 8/21/2014 at 7:48 PM
		</div>
		<div class="comment_text"><p>Then I wouldn't do that I guess. I'd fetch the remote content from a local index.html.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081779">75</a> by Todd Halfpenny
		posted on 10/17/2014 at 1:01 PM
		</div>
		<div class="comment_text"><p>There is a method that can be used to return to the 1st page... it's not ideal but it might be of use.</p><p>window.history.go( -( history.length - 1 ) );</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081780">76</a> by sarika
		posted on 11/15/2014 at 3:19 PM
		</div>
		<div class="comment_text"><p>I have this question on  <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F26943577%2Ffile-download-in-phonegapp%3AsdUPwyEZ2oopbfMzXlSXfzarMAM&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/26943577/file-download-in-phonegapp">http://stackoverflow.com/qu...</a>  , i want to download file from my app? whats wrong there am not getting....Help me!</p></div>
	</div>
</div>
		