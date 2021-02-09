
<div class="comment" id="c_1713724642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724642">1</a> by Misty
		posted on 6/4/2010 at 8:14 PM
		</div>
		<div class="comment_text"><p>Hi The New CFC in a Script i a NEW CF9 Tag. Can the same in be in Cffunction type. AS that counts really easy to understand. If you can Provide a Sample of that too. it will be awesome!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724644">2</a> by Raymond Camden
		posted on 6/4/2010 at 8:16 PM
		</div>
		<div class="comment_text"><p>Yes, it could be in tags too. It's the exact same code though - just tag based. If you _really_ want me to do this, I will. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724648">3</a> by Misty
		posted on 6/4/2010 at 8:41 PM
		</div>
		<div class="comment_text"><p>Please! I am seeing CF is becomeing day by day more like Java as it is native to it! if the same with CFfunction can u show here, It will help in seeing the exact diffrence how to do the same in CFFunction and cfscript and see its difference and processing time too!</p><p>Regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724650">4</a> by Raymond Camden
		posted on 6/4/2010 at 11:19 PM
		</div>
		<div class="comment_text"><p>I didn't run this - just confirmed it had no syntax errors.</p><p>&lt;cfcomponent output="false"&gt;</p><p>	&lt;cffunction name="onAdd" returntype="void" access="public"&gt;<br>		&lt;cfargument name="cfevent" type="struct" required="true"&gt;</p><p>		&lt;cflog file="application" text="autowatermarker: #serializejson(<a href="http://disq.us/url?url=http%3A%2F%2Farguments.cfevent.data%3Aa6QIHo1nZBbPO7tLSJHWPViZX24&amp;cuid=3321886" rel="nofollow noopener" title="arguments.cfevent.data">arguments.cfevent.data</a>)#"&gt;<br>		&lt;cfset var theFile  = arguments.cfevent.data.filename&gt;<br>		&lt;cfset var processedfolder = expandPath("./images")&gt;</p><p>		&lt;cfif isImageFile(theFile)&gt;<br>			&lt;cfset imgFile = imageRead(theFile)&gt;<br>			&lt;cfset imgInfo = imageInfo(imgFile)&gt;</p><p>			&lt;cfset var watermark = imageRead(expandPath("./watermark.png"))&gt;<br>			&lt;cfset var watermarkinfo = imageInfo(watermark)&gt;<br>			&lt;cfset imagepaste(imgFile, watermark, imgInfo.width-watermarkinfo.width, imgInfo.height-watermarkinfo.height)&gt;<br>			&lt;cfset imageWrite(imgFile, processedfolder &amp; "/" &amp; getFileFromPath(theFile), true)&gt;<br>			&lt;cfset fileDelete(theFile)&gt;<br>		&lt;cfelse&gt;<br>			&lt;cfset fileDelete(theFile)&gt;<br>		&lt;/cfif&gt;</p><p>	&lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724651">5</a> by Misty
		posted on 6/5/2010 at 5:07 AM
		</div>
		<div class="comment_text"><p>Thanks a Ton:</p><p>well these two lines were confusing while the cffunction based CFC was not there</p><p> &lt;cfargument name="cfevent" type="struct" required="true"&gt;</p><p>      &lt;cflog file="application" text="autowatermarker: #serializejson(<a href="http://disq.us/url?url=http%3A%2F%2Farguments.cfevent.data%3Aa6QIHo1nZBbPO7tLSJHWPViZX24&amp;cuid=3321886" rel="nofollow noopener" title="arguments.cfevent.data">arguments.cfevent.data</a>)#"&gt;</p><p>but now they are all clear</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724643">6</a> by Raymond Camden
		posted on 6/5/2010 at 6:49 PM
		</div>
		<div class="comment_text"><p>The &lt;cfargument&gt; tag matches to (required struct cfevent), and the &lt;cflog&gt; tag matches to writelog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724647">7</a> by Joshua Siok
		posted on 6/5/2010 at 11:47 PM
		</div>
		<div class="comment_text"><p>Great example Ray,<br>I've done a lot of similar tasks with PDFs and have some suggestions for you.</p><p>If you are using the event gateway, I would suggest adding onChange and onDelete functions in the CFC.  Anyone using the system that didn't write the code would expect that when an image is updated or deleted in the "depot" folder, it would also change or delete the image in the "images" folder.  This could be important for business/legal reasons.</p><p>Also, If you're taking the .CFM approach and running a scheduled task, I would suggest using the DateLastModified property of your cfdirectory results to do some directory comparing of the depot and images folders to determine what files were added or more recently updated and create a new query to loop through. This will reduce the overhead of re-processing all the files that didn't change. Similarly, you might want to determine if any images exist in the images folder that are not in the depot folder and delete them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724649">8</a> by Raymond Camden
		posted on 6/5/2010 at 11:50 PM
		</div>
		<div class="comment_text"><p>To your first part - note that I move files from the depot. Therefore, nothing can get updated there. However - also note that when I copy the new image, I overwrite any existing image in the destination. So to do an update to foo.jpg, you just reupload it to the depot.</p><p>To your second point... again.. .maybe I'm missing something, but since I move files -out- of the depot, there is no need to scan for dates?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724645">9</a> by Joshua Siok
		posted on 6/6/2010 at 12:05 AM
		</div>
		<div class="comment_text"><p>Sorry Ray, I didn't notice the fileDelete(theFile) call in there.  I guess I was assuming the depot folder would be an FTP or windows folder share where someone might have a working set of files and may want to have access to the originals.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724652">10</a> by Raymond Camden
		posted on 6/6/2010 at 12:07 AM
		</div>
		<div class="comment_text"><p>No worries. Thought maybe I was missing something there. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724653">11</a> by Vae Victis
		posted on 6/14/2010 at 10:12 PM
		</div>
		<div class="comment_text"><p>Ray</p><p>Great articles as always. I am trying something similiar on my local machine (minus the watermark) with CF Standard. However, my CFC does not seem to get triggered any thoughts and how to debug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724646">12</a> by Raymond Camden
		posted on 6/14/2010 at 10:14 PM
		</div>
		<div class="comment_text"><p>Did you start the event gateway instance?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724656">13</a> by Vae Victis
		posted on 6/14/2010 at 11:29 PM
		</div>
		<div class="comment_text"><p>Ray</p><p>The it is running and all I see in the logs is that it has initialized.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724655">14</a> by Raymond Camden
		posted on 6/14/2010 at 11:31 PM
		</div>
		<div class="comment_text"><p>Ok, did you check the directory watcher log too? For me it showed additional notes - like when I had a bad directory.</p></div>
	</div>
</div>
		