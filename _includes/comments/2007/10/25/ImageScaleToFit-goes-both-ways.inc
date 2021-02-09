
<div class="comment" id="c_1713673543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673543">1</a> by Adam Tuttle
		posted on 10/25/2007 at 11:22 PM
		</div>
		<div class="comment_text"><p>What about:</p><p>&lt;cfset imageScaleToFit(myImage,min(255,myImage.width),min(255,myImage.height),"highestQuality")&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673544">2</a> by Raymond Camden
		posted on 10/25/2007 at 11:28 PM
		</div>
		<div class="comment_text"><p>I've seen image resizing on CF sometimes take a long time. Therefore - if there is no need to resize, I wouldn't call it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673542">3</a> by Adam Tuttle
		posted on 10/25/2007 at 11:36 PM
		</div>
		<div class="comment_text"><p>I guess I assumed that imageScaleToFit() would be smart enough not to resize the image and just return the original, if the size you specified was the size of the original -- though I can see why it wouldn't.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673547">4</a> by James Edmunds
		posted on 10/26/2007 at 5:42 AM
		</div>
		<div class="comment_text"><p>One more observation: if you resize a GIF with a transparency attribute other than opaque, you get unhappy results. I'm not even sure if this is really a bug, but more to do with the way GIFs work. In any case, I'm debating right now how to best trap that out in a CMS I'm building, and I'm leaning toward some kind of inelegant but practical trap out of this attribute that sends them back to Photoshop, etc. to resize the image there (on the theory that for most users, resizing is more readily accomplished than finding and altering some kind of obscure attribute) before uploading. Any thoughts, anyone?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673549">5</a> by Raymond Camden
		posted on 10/26/2007 at 5:47 AM
		</div>
		<div class="comment_text"><p>James, if you cfdump an image like this, and look at the specs (color model and all that crap), is there a particular set of values that match the 'problem' gifs? If so - it would make it easier to trap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673545">6</a> by James Edmunds
		posted on 10/27/2007 at 12:45 AM
		</div>
		<div class="comment_text"><p>Ray, I think for the .gifs it's not colormodel, but something like "transparency" that seems to be the deciding factor, but I'm only half-confident that I can reliably identify the problem .gifs through that match... resizing gifs even in Photoshop or similar programs can sometimes be a bit dodgy (including requiring an increase in the number of colors to help with the anti-aliasing and sharpening, etc., before bringing the color count back down to 256), so I am thinking that it might be wise to anticipate some cases where the resized image is not so good... especially as compared to the relatively reliable jpgs.</p><p>So what I may wind up doing for .gifs is showing the resized image and instructing them to resize it externally if the results look unwanted. Not elegant, but reasonably practical. And, this is a case where the image upload is safely staged prior to the image itself will be shown on the site, so the "bad" image won't be shown; they'll just replace it with their externally resized one before taking it live.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673552">7</a> by John Fitzgerald
		posted on 3/28/2009 at 7:08 AM
		</div>
		<div class="comment_text"><p>I hope this helps someone. I fought with resizing/scaling to fit gif images all day long. I finally came up with this workaround. Basically I create a jpg copy, resize that, write it back out to a gif then delete the gif. It seems to work alright. I tested it with a couple of gifs I had trouble with and it passed that test. About to run it against 20,000 files.</p><p>Here it is:</p><p>&lt;cffunction name="createThumbnails" access="public" description="Creates small, medium, large thumbnails given a file" output="false"&gt;<br>	&lt;cfargument name="thumbSrcFile" required="true" type="string"&gt;<br>	&lt;!--- set base directory for thumbnails ---&gt;<br>	&lt;cfset var thumbBaseDir="#GetDirectoryFromPath(Arguments.thumbSrcFile)#"&gt;<br>	&lt;cfset var thumbSrcFileName="#GetFileFromPath(Arguments.thumbSrcFile)#"&gt;<br>	&lt;!--- &lt;cflog text="#thumbSrcFile#"&gt; ---&gt;<br>	&lt;cfif IsImageFile(Arguments.thumbSrcFile)&gt;<br>		&lt;!--- If it's a gif file we have to deal with it so it can be resized' ---&gt;<br>		&lt;cfif Right(Arguments.thumbSrcFile,4) eq ".gif"&gt;<br>			&lt;cfimage action="convert" destination="#Arguments.thumbSrcFile#.jpg" source="#Arguments.thumbSrcFile#" overwrite="yes"&gt;<br>			&lt;cfimage source="#Arguments.thumbSrcFile#.jpg" name="thumbSrc"&gt;<br>		&lt;cfelse&gt;<br>			&lt;cfimage source="#Arguments.thumbSrcFile#" name="thumbSrc"&gt;<br>		&lt;/cfif&gt;</p><p>		&lt;cfset largeThumb=ImageNew("#thumbSrc#")&gt;<br>		&lt;cfset mediumThumb=ImageNew("#thumbSrc#")&gt;<br>		&lt;cfset smallThumb=ImageNew("#thumbSrc#")&gt;<br>		&lt;cftry&gt;<br>			&lt;cfset ImageScaleToFit(largeThumb,Variables.largeThumbWidth,Variables.largeThumbHeight)&gt;<br>			&lt;cfset ImageScaleToFit(mediumThumb,Variables.mediumThumbWidth,Variables.mediumThumbHeight)&gt;<br>			&lt;cfset ImageScaleToFit(smallThumb,Variables.smallThumbWidth,Variables.smallThumbHeight)&gt;<br>			&lt;cfimage action="write" source="#largeThumb#" destination="#thumbBaseDir#/tnlg/tnlg_#thumbSrcFileName#" overwrite="yes" quality="1"&gt;<br>			&lt;cfimage action="write" source="#mediumThumb#" destination="#thumbBaseDir#/tnmed/tnmed_#thumbSrcFileName#" overwrite="yes" quality="1"&gt;<br>			&lt;cfimage action="write" source="#smallThumb#" destination="#thumbBaseDir#/tnsm/tnsm_#thumbSrcFileName#" overwrite="yes" quality="1"&gt;<br>			&lt;!--- Clean up temp jpg file ---&gt;<br>			&lt;cfif Right(Arguments.thumbSrcFile,4) eq ".gif"&gt;<br>				&lt;cffile action="delete" file="#Arguments.thumbSrcFile#.jpg" &gt;<br>			&lt;/cfif&gt;<br>		&lt;cfcatch type="any"&gt;<br>			&lt;cflog text="#Arguments.thumbSrcFile# Scale Error Catch Type: #cfcatch.Type#"&gt;<br>			&lt;cflog text="Catch Message: #cfcatch.Message#"&gt;<br>			&lt;cflog text="Catch Detail: #cfcatch.Detail#"&gt;<br>			&lt;cfinvoke method="createBlankThumbnails" argumentcollection="#Arguments#"&gt;<br>		&lt;/cfcatch&gt;<br>		&lt;/cftry&gt;</p><p>	&lt;/cfif&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		