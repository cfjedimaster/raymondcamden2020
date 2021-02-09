
<div class="comment" id="c_1713723027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723027">1</a> by Robert Zehnder
		posted on 3/30/2010 at 4:34 AM
		</div>
		<div class="comment_text"><p>I am writing a multifile upload with jQuery right now, just for the heck of it.  Demos like this make me wish I had CF9 in production.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723029">2</a> by dave
		posted on 3/30/2010 at 4:55 AM
		</div>
		<div class="comment_text"><p>you could write it to ram:/// as well and not have to use cfcontent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723028">3</a> by Raymond Camden
		posted on 3/30/2010 at 5:02 AM
		</div>
		<div class="comment_text"><p>@Dave: It _is_ in ram:///. See the previous entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723030">4</a> by Raymond Camden
		posted on 3/30/2010 at 5:03 AM
		</div>
		<div class="comment_text"><p>I hit send too soon. No matter where you write it, if you want to serve up the binary data, you need cfcontent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723079">5</a> by dave
		posted on 3/30/2010 at 5:57 AM
		</div>
		<div class="comment_text"><p>I didn't see the other post but figured it was just pulling from file.</p><p>I have never used cfcontent to show back an image like this, I just upload it then show the location in ram just like a reg hhd location.</p><p>I don't have an example on hand of just an image but just made a short clip of a video uploader that uploads the video then converts and grabs a thumbnail img from video and displays it back kinda in this same train of thought but it's after the submission because it's grabbed during the video conversion but could just be as easy if doing just an image.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.deliciouscoding.com%2Fassets%2Fcontent%2Fvideo%2Fvideo-uploader.mov%3AZ-bfYlTlbRv6avWmrrFM4iWggOQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.deliciouscoding.com/assets/content/video/video-uploader.mov">http://www.deliciouscoding....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723081">6</a> by Raymond Camden
		posted on 3/30/2010 at 6:42 AM
		</div>
		<div class="comment_text"><p>Because the image is not in a web root accessible file, I have to use cfcontent to load it up. I could point right to the file - but i point to the variable because for most cases, I'm loading it into an image object and resizing it. (Although normally I'd create the thumbnail once.)</p><p>I watched your video - cool stuff. What are you using to handle video conversion? ffmpeg?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723080">7</a> by dave
		posted on 3/30/2010 at 7:00 AM
		</div>
		<div class="comment_text"><p>I guess I should have read the other post but either way hopefully it gives some insite to someone.</p><p>I also upload to a folder outside the webroot then virus scan and rename to a uuid right away then pass it into the ram drive for all the processing so that it can be used like just like this for immediate feedback without being in the webroot and thus not needing cfcontent. Nothing wrong with cfcontent just more overhead. The ram drive is a god send! I can't even begin to tell you how much code I am able to take out of uploads by just using it.</p><p>The video conversion is done via Railo's cfvideo tags and yes it used ffmpeg. It's crazy how fast it does the conversion. When you see the thumb pop in everything is already done.</p><p>One drawback to ffmpeg though is that it rips out all the metadata so the resulting flv can't supply the player with metadata and things like the scrubber bar won't work. What I do is grab the metadata before the conversion then re-inject it back in after the conversion but you got to install some some other tools into os to do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723095">8</a> by Sam Farmer
		posted on 3/30/2010 at 6:05 PM
		</div>
		<div class="comment_text"><p>Very cool.  You could also do Word documents, convert them to pdf with cfdocument and get a thumbnail with cfpdf.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723086">9</a> by Raymond Camden
		posted on 3/30/2010 at 6:07 PM
		</div>
		<div class="comment_text"><p>Absolutely. I should probably do a blog entry on a generic 'preview' service.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723101">10</a> by Josh
		posted on 3/30/2010 at 8:21 PM
		</div>
		<div class="comment_text"><p>Why is the default image a jpg yet the default extension is a gif?  Is that a mistake, or is there a reason for that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723096">11</a> by Raymond Camden
		posted on 3/30/2010 at 8:25 PM
		</div>
		<div class="comment_text"><p>It is not a mistake. To ask if it is a mistake is to imply that I can make mistakes, which is simply not true. In fact, I reject the existence of your comment as pure fantasy and this reply as nothing more then a delusional interlude in an otherwise normally dreary day.</p><p>In other words - yes - a mistake. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723083">12</a> by MCM
		posted on 4/21/2010 at 12:14 PM
		</div>
		<div class="comment_text"><p>@Dave</p><p>- what is that admin tool you are using? asside from the uploader function, is that something you've built yourself.<br>it looks like it's nicely designed and might be useful. what theme is that and is it available for download?</p><p>also, what are you using to crop that video on screen? is that cropped live or in post?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723094">13</a> by dave
		posted on 4/21/2010 at 1:38 PM
		</div>
		<div class="comment_text"><p>@MCM<br>That admin is just one I made.<br>The screenie of the video is done during the video conversion process and its part of  the Railo video tag. So basically you tell it when to extract the image and where to put it then you can do whatever u want with it. I choose to show it back with the thumb but you could certainly do anything with it at that point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723082">14</a> by Simon
		posted on 3/31/2011 at 3:17 PM
		</div>
		<div class="comment_text"><p>Is there a way using javascript to clear the list of files, im using jquery to show and hide the file upload in a dialog box, but I dont want the previously uploaded file in the list when they click to uplad another file,</p><p>thanks :0)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723088">15</a> by Raymond Camden
		posted on 3/31/2011 at 3:22 PM
		</div>
		<div class="comment_text"><p>I just checked the JS API for this control and it does not look to be supported. You can clear all files, just not _a_ file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723091">16</a> by bianca
		posted on 5/25/2011 at 7:16 PM
		</div>
		<div class="comment_text"><p>Hi,<br>if I try to use cffileupload on our production server nothing shows up, like there was nothing on the page. If I put simple text I see the text but not the supposed interface. Server is using CF9.0<br>I just used the exemple on the adobe help section.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723085">17</a> by Raymond Camden
		posted on 5/26/2011 at 5:40 PM
		</div>
		<div class="comment_text"><p>Smells like a missing /CFIDE virtual folder.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723092">18</a> by Jeff
		posted on 7/14/2011 at 7:22 PM
		</div>
		<div class="comment_text"><p>I am confused on your example below how are you getting the file.filename? I am getting undefined. I am currently using this just for one file, and runing a js after all uploaded, I want to add to the form a hidden form value that contains the filename so when the page is submitted I have that on the action page.</p><p>function previewfile(file) {</p><p>4      var previewHTML = '&lt;span class="previewSpan"&gt;&lt;img src="preview.cfm?s=' + file.FILENAME + '"&gt;&lt;/span&gt;'</p><p>5      $("##previewArea").append(previewHTML)</p><p>6  }</p><p>7  &lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723098">19</a> by Raymond Camden
		posted on 7/24/2011 at 6:43 PM
		</div>
		<div class="comment_text"><p>What does Firebug or Chrome Dev tools tell you? You should inspect what _is_ passed to the function. This is an event handler for the file upload function and result data is passed to it. If the file object is blank or contains other info, it would be useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723099">20</a> by jeff
		posted on 7/25/2011 at 1:56 AM
		</div>
		<div class="comment_text"><p>I got this to work after trial and error. Now I have an issue that I am running a javascript after all the uploads to validate and  submit the form. My issue is if the validation fails, cffileupload already has the file on the server, the user has to fix the error clear the upload and submit to and the file uploads again. Do you have any ideas how to make this more user friendly? My only thought is to split the js and do the validation on a mouse over the div or something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723089">21</a> by Raymond Camden
		posted on 7/25/2011 at 3:43 PM
		</div>
		<div class="comment_text"><p>Well, you won't know if there is an issue till upload, right? CF provides a few APIs to the file upload control so you can clear it, for example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723084">22</a> by Misty
		posted on 12/12/2011 at 5:05 PM
		</div>
		<div class="comment_text"><p>Just a Side note ray!</p><p>With this $("##previewArea").append(previewHTML)</p><p>we can do it as</p><p>$("#previewArea").append(previewHTML) and then define the <br>&lt;div id="previewArea"&gt;&lt;/div&gt; at the below</p><p>and it will work. I am also trying to add the lighbox effect to the generated images to see how it can work, once done i will share the code</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723090">23</a> by Raymond Camden
		posted on 12/12/2011 at 6:27 PM
		</div>
		<div class="comment_text"><p>Sorry - what? Your code is the same as mine, is it not? I've got two # since the code was inside cfoutputs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723097">24</a> by Raymond Camden
		posted on 12/12/2011 at 6:28 PM
		</div>
		<div class="comment_text"><p>Ah, I can see how that can be confusing - since I didn't post the _complete_ code. Good note there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723087">25</a> by Misty
		posted on 12/12/2011 at 8:10 PM
		</div>
		<div class="comment_text"><p>Hi Ray, One more thing, Just want to have clarification. you have used the cfcontent tag to display the images, since the images the stored in ram, as per your last complete example of multiupload functionality you are passing the sesssion token in the url. Can i know the bug has been fixed in CF 9.0.1 or still in work in Progress as can i know the Bug ID.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723093">26</a> by Raymond Camden
		posted on 12/12/2011 at 9:52 PM
		</div>
		<div class="comment_text"><p>Um - I don't quite understand you, sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723100">27</a> by Neal Sparks
		posted on 4/5/2012 at 11:36 PM
		</div>
		<div class="comment_text"><p>you said this "I should probably do a blog entry on a generic 'preview' service." any chance of that 'Generic Preview' need to preview gif and pdf files not just jpg</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723102">28</a> by Raymond Camden
		posted on 4/5/2012 at 11:38 PM
		</div>
		<div class="comment_text"><p>Gif should work fine already with my code above. For PDF, you can use CFPDF to generate a thumbnail of page 1. I've blogged on that before. It isn't zippy, but would work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723110">29</a> by Neal Sparks
		posted on 4/5/2012 at 11:49 PM
		</div>
		<div class="comment_text"><p>doesn't like gif this line;<br>&lt;cfset bits = imagegetblob(img)&gt;</p><p>causes this error;<br>An error occured in converting the image to base64 in the required image encoding. Base64 images can be created with ColdFusion in BMP,JPEG,PNG,PNM,and TIFF formats.</p><p>Also if I try and to convert the pdf to a jpg thumbnail with cfpdf It does not recognize it as image and displays the default;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723106">30</a> by Raymond Camden
		posted on 4/5/2012 at 11:58 PM
		</div>
		<div class="comment_text"><p>Hmm. What if you used fileReadBinary instead?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723107">31</a> by Neal Sparks
		posted on 4/6/2012 at 1:08 AM
		</div>
		<div class="comment_text"><p>fileReadBinary works for gif files, but what about the cfpdf jpeg that is not being recognized as an image file</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723108">32</a> by Raymond Camden
		posted on 4/6/2012 at 1:13 AM
		</div>
		<div class="comment_text"><p>cfpdf jpeg? Do you mean PDFs? Was my comment there not clear? Have you seen how to use CFPDF to generate JPGs from a PDF file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723109">33</a> by Paresh
		posted on 8/29/2012 at 1:53 AM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>Nice work! Just tried fileReadBinary for gif files like this:</p><p>&lt;cfif isImageFile(session.destdir &amp; "/" &amp; url.s)&gt;<br>  &lt;cfset ext = listLast(url.s,".")&gt;<br>  &lt;cfimage action="read" source="#session.destdir#/#url.s#" name="img"&gt;    <br>  &lt;cfif ext NEQ 'gif'&gt;<br>    &lt;cfset imageScaleToFit(img,125,125)&gt;<br>    &lt;cfset bits = imagegetblob(img)&gt;<br>  &lt;cfelse&gt;<br>    &lt;cfset ext = #ext#&gt;<br>    &lt;cfset bits = fileReadBinary(img)&gt;<br>  &lt;/cfif&gt;<br>&lt;/cfif&gt;<br>&lt;cfcontent type="image/#ext#" variable="#bits#"&gt;</p><p>It didn't work for me unless I have done something wrong!<br>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723111">34</a> by Raymond Camden
		posted on 8/29/2012 at 4:32 PM
		</div>
		<div class="comment_text"><p>You need to say *how* it didn't work for you - where and how did it fail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723112">35</a> by Paresh
		posted on 8/29/2012 at 4:58 PM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>Sorry for partial message. I'm allowing images only to be uploaded. This works fine for jpg and png. Thumbnails are created and displayed correctly. For gif's, only a placeholder is shown! I can't get gif images to display.</p><p>Try this test link and you'll see what I mean.</p><p>    <a href="http://disq.us/url?url=http%3A%2F%2Fwww.turn2cash.co.uk%2Fa%2Findex.cfm%3ABTOBr2g4_2DfhW-IyB2j4aa2HI8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.turn2cash.co.uk/a/index.cfm">http://www.turn2cash.co.uk/...</a></p><p>Thanks for sharing this code!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723115">36</a> by Raymond Camden
		posted on 8/29/2012 at 5:01 PM
		</div>
		<div class="comment_text"><p>Any reason why you can't use imagegetblob for gifs too?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723113">37</a> by Paresh
		posted on 8/29/2012 at 5:15 PM
		</div>
		<div class="comment_text"><p>Ray</p><p>I've changed the code to this:</p><p>&lt;cfif isImageFile(session.destdir &amp; "/" &amp; url.s)&gt;</p><p>  &lt;cfset ext = listLast(url.s,".")&gt;<br>  &lt;cfimage action="read" source="#session.destdir#/#url.s#" name="img"&gt;<br>  &lt;cfset imageScaleToFit(img,125,125)&gt;<br>  &lt;cfset bits = imagegetblob(img)&gt;</p><p>&lt;/cfif&gt;<br>&lt;cfcontent type="image/#ext#" variable="#bits#"&gt;</p><p>The results are still the same! Just can't get the gif images to display.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723114">38</a> by Raymond Camden
		posted on 8/29/2012 at 6:30 PM
		</div>
		<div class="comment_text"><p>Ah you are correct. If you view the file directly, you see CF doesn't like Gifs when used this way. So... give me a sec.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723117">39</a> by Raymond Camden
		posted on 8/29/2012 at 6:32 PM
		</div>
		<div class="comment_text"><p>Odd - I used the same code as you and it worked. You said a placeholder is showing. I assume that means a broken image. Right click and do "View image in new tab" (or whatever) and you should see a proper error. For comparison, here is the code I used:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2F3513454%3Ajh7Hd_5ewV76LbYNyy9LNB7IcAQ&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/3513454">https://gist.github.com/351...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723116">40</a> by Paresh
		posted on 8/29/2012 at 7:31 PM
		</div>
		<div class="comment_text"><p>Got it Ray! I feel like a fool for not spotting it before! I wasn't prociding the full path to the gif image. Made the changes and it works fine now! All I need to do now is to find a way to resize the gif image to match the other images.</p><p>Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723118">41</a> by Paresh
		posted on 8/30/2012 at 2:26 AM
		</div>
		<div class="comment_text"><p>For those that have cfx_imagecr3 installed, here's how to create thumbnails for any most types of images including gif, png etc. This script will only resize images if their dimensions are greater than the resize values, otherwise they will be left at their default values. You can also pass in dynamically (on the fly) created directory names, i.e. to allow for multi user environments.</p><p>&lt;cfparam name="url.s" default=""&gt;</p><p>&lt;cfif isImageFile(session.EncryptionKey.path&amp;"/"&amp;url.s)&gt;</p><p>  &lt;cfx_imagecr3 getimageinfo="#session.EncryptionKey.path#/#url.s#" &gt;<br>  &lt;cfimage action="read" source="#session.EncryptionKey.path#/#url.s#" name="img"&gt;</p><p>  &lt;cfif imagecr.width GT 75 OR imagecr.height GT 75&gt;<br>    &lt;cfx_imagecr3 load="#session.EncryptionKey.path#/#url.s#" save="#session.EncryptionKey.path#/rs_#url.s#" resize="75x75"&gt;<br>    &lt;cfset bits = fileReadBinary(session.EncryptionKey.path&amp;"/rs_"&amp;url.s)&gt;<br>  &lt;cfelse&gt;<br>    &lt;cfset bits = fileReadBinary(session.EncryptionKey.path&amp;"/"&amp;url.s)&gt;<br>  &lt;/cfif&gt;</p><p>  &lt;cfcontent type="image/gif" variable="#bits#"&gt;</p><p>&lt;/cfif&gt;</p><p>Hope this helps someone!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723120">42</a> by Paresh
		posted on 9/2/2012 at 4:37 PM
		</div>
		<div class="comment_text"><p>Is there (hopefully a simple way) to integrate a delete feature? I.e. user can click image to remove it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723119">43</a> by Raymond Camden
		posted on 9/3/2012 at 6:05 PM
		</div>
		<div class="comment_text"><p>You would need to add some UI to each image preview, like a link (X) or a small 'trash' type icon. Add JavaScript to listen to the click event and when fired, you would call code on the server to handle removing the image from the VFS. You would also need to remove the preview image from the DOM.</p></div>
	</div>
</div>
		