
<div class="comment" id="c_1713681086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681086">1</a> by Steve Good
		posted on 5/20/2008 at 9:55 PM
		</div>
		<div class="comment_text"><p>Drat, I was hoping for a new and amazing way to do this.  I suppose I should just be glad I've been doing it right.  Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681090">2</a> by Andy Lynch
		posted on 5/21/2008 at 3:29 PM
		</div>
		<div class="comment_text"><p>I'm sorry, I *need* to know where you found taht poster of Kirk.  It looks like one of the demotivators products, but I couldn't find it there...</p><p>I have a friend that really needs to have this given to them. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681088">3</a> by Raymond Camden
		posted on 5/21/2008 at 3:34 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.echosphere.net%2Fstar_trek_insp%2Fstar_trek_insp.html%3AmzrCFycGEfItTo5wtONSbpmJhGU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.echosphere.net/star_trek_insp/star_trek_insp.html">http://www.echosphere.net/s...</a></p><p>Next time I present, I need to share that URL. I'm not being fair by withholding that info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681092">4</a> by Will Swain
		posted on 5/23/2008 at 1:16 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>Good timing for me this post. I'm working on a system that allows a user to upload an image - I then run some checks to see if the image is over a certain width or height, and create a thumbnail if it is. However, I want all my thumbnails to be square, to fit within the viewing area nicely.</p><p>No problem - I'll create a square canvas, and then paste in the resized image much as you do above. It all works great, but I really want the resized thumbnail to be centered in the new canvas. This is where my brain starts to hurt.</p><p>Here's an example of where I am at the moment - this is creating the thumbnails, but sticking the resized image in the top left corner of the canvas of course:</p><p>&lt;cffile action="upload" destination="#application.image_root#" nameConflict="makeunique" filefield="theImage" result="fileupload"&gt;</p><p>&lt;cfset newfile = fileupload.serverdirectory &amp; "\" &amp; fileupload.serverfile&gt;<br>		      &lt;cfset thumbfile = fileupload.serverdirectory &amp; "\" &amp; fileupload.SERVERFILENAME &amp; "_thumb." &amp; fileupload.SERVERFILEEXT&gt;</p><p>&lt;cfset smallSize = 180&gt;</p><p>&lt;!--- create a thumbnail image of exactly 180 x 180 if the image is larger) ---&gt;</p><p>				&lt;cfset newimage = imageRead(#newfile#)&gt;</p><p>				&lt;cfif newimage.width GT smallSize OR newimage.height GT smallSize&gt;</p><p>					&lt;cfif newimage.width GT newimage.height&gt;</p><p>						&lt;cfset imageScaleToFit(newimage,#smallSize#,"")&gt;</p><p>						&lt;!--- new canvas ---&gt;<br>						&lt;cfset canvas = imageNew("", 180, 180, "rgb", "##FFFFFF")&gt;</p><p>						&lt;!--- paste it in ---&gt;<br>						&lt;cfset imagePaste(canvas, newimage, 0,0)&gt;</p><p>						&lt;cfimage source="#canvas#" action="write" destination="#thumbfile#" overwrite="yes"&gt;</p><p>					&lt;cfelseif myImage.height GT myImage.width&gt;</p><p>						&lt;cfset imageScaleToFit(newimage,"",#smallSize#)&gt;</p><p>						&lt;!--- new canvas ---&gt;<br>						&lt;cfset canvas = imageNew("", 180, 180, "rgb", "##FFFFFF")&gt;</p><p>						&lt;!--- paste it in ---&gt;<br>						&lt;cfset imagePaste(canvas, newimage, 0,0)&gt;</p><p>						&lt;cfimage source="#canvas#" action="write" destination="#thumbfile#" overwrite="yes"&gt;</p><p>					&lt;/cfif&gt;</p><p>				&lt;cfelse&gt;</p><p>					&lt;cfimage action="resize" height="#smallSize#" width="" source="#newfile#" <br>					destination="#thumbfile#" overwrite="true"/&gt;</p><p>				&lt;/cfif&gt;</p><p>Any suggestions on centering this thumbnail within the canvas.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681095">5</a> by Raymond Camden
		posted on 5/23/2008 at 1:19 AM
		</div>
		<div class="comment_text"><p>All you need is math. The x and y position for your paste is</p><p>(Width of Total Canvas - Width of small canvas) / 2</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681093">6</a> by Will Swain
		posted on 5/23/2008 at 1:30 AM
		</div>
		<div class="comment_text"><p>Of course!! It's late here in the UK, at least that's my excuse.</p><p>Logically then, assuming the original image isn't square, if it's wider I'd need to position by the y co-ordinate and if it's higher, I'd need to position by the x co-ordinate.</p><p>Thanks Ray.</p><p>How you getting on with Game of Thrones BTW? Finished it yet?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681094">7</a> by Raymond Camden
		posted on 5/23/2008 at 1:35 AM
		</div>
		<div class="comment_text"><p>@Will - No - it shouldn't matter. Use the same math for both.</p><p>I'm about 90% done - well, 95% done. Darn, darn good. I should wrap by tonight.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681101">8</a> by Will Swain
		posted on 5/23/2008 at 1:38 AM
		</div>
		<div class="comment_text"><p>Thanks Ray, got this working now with your help. Damn I love ColdFusion and the way it makes things like this so sensible.</p><p>Enjoy! I'm 1/4 of the way through the next book. Loving it. I might get a chance to read some tonight now I have this working.</p></div>
	</div>
</div>
		