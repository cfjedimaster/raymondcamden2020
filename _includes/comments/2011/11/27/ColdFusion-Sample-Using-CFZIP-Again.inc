
<div class="comment" id="c_1713737008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737008">1</a> by Shawn Bowman
		posted on 11/29/2011 at 1:19 AM
		</div>
		<div class="comment_text"><p>Not too shabby. I haven't had a real use for downloading images yet in my applications, but I do have a project upcoming that this code could give me some ideas on.</p><p>Ideally what I will do is show all the images like your example then allow a user to click the image it will then bring it up in a JQuery Lightbox and then have a download link listed there to download each image.  With your example I think I can take it one step further.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737007">2</a> by Sanoop
		posted on 12/23/2011 at 11:58 AM
		</div>
		<div class="comment_text"><p>Just wanted to know what is the role of Temp Directory under \runtime\servers\coldfusion\SERVER-INF\temp\wwwroot-tmp in both the CFZIP example?</p><p>~<br>SanooP</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737006">3</a> by Raymond Camden
		posted on 12/23/2011 at 9:47 PM
		</div>
		<div class="comment_text"><p>It's just a temp directory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736988">4</a> by Nissie
		posted on 4/12/2013 at 1:04 PM
		</div>
		<div class="comment_text"><p>Please help me with this. <br>I have an application, where I wanted to download dynamic images saved on a server. (CF 8)<br>Everything work fine on my local machine. But when I tried to dowload from server the zip file is blocked.<br>Even if I unblock it , gives me a warning like 'the compressed(zipped) files are invalid'</p><p>//Query to get teh file names.</p><p>&lt;cfset VARIABLES.dirPath = "#ExpandPath('\')#path to server files\" /&gt; <br>&lt;cfset VARIABLES.zipName = "<a href="http://disq.us/url?url=http%3A%2F%2FImages.zip%3Amaf2lZC2RKZenjxvAwzmUt9uQ_U&amp;cuid=3321886" rel="nofollow noopener" title="Images.zip">Images.zip</a>" /&gt;</p><p>&lt;cfcontent type="application/zip" reset="true" /&gt;<br>&lt;cfheader name="Content-Disposition" value="attachment;filename=#zipName#" &gt;<br>&lt;cffile action="read" file="#VARIABLES.dirPath#\#VARIABLES.zipName#" variable="archiveContent" /&gt;</p><p>//Zip Operation where source is the filename.</p><p>&lt;cffile action="read" file="#VARIABLES.dirPath#\#VARIABLES.zipName#" variable="archiveContent" /&gt;<br>&lt;/cfcatch&gt;<br>&lt;/cftry&gt;</p><p>&lt;cfoutput&gt;#archiveContent#&lt;/cfoutput&gt;</p><p>Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737011">5</a> by Raymond Camden
		posted on 4/12/2013 at 3:25 PM
		</div>
		<div class="comment_text"><p>The zip being blocked could be a network security thing, or IIS (or Apache), and this may not be a CF issue at all. I'd do this. Since your zip is on the server, try RDPing to the box and trying to open the zip there.</p><p>Btw - the code you have above is a bit more verbose then it needs to be. If you read the zip into a variable, you can pass that to cfcontent.</p></div>
	</div>
</div>
		