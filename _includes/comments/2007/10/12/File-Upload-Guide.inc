
<div class="comment" id="c_1713673046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673046">1</a> by Nick
		posted on 10/12/2007 at 6:28 PM
		</div>
		<div class="comment_text"><p>What are you feelings on the naming of files? Ex.</p><p>This File IS Windows Valid.doc</p><p>How does CFFILE handle that kind of nonsense?</p><p>Side Note: I use the storage method you mentioned where you store the original filename and then CF version of the saved file. I've even gone far enough to use the UUID Primary Key of the Document record as the name of the File that is uploaded. Thoughts, Feelings, Gold Leader Standing By.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673047">2</a> by Joshua Cyr
		posted on 10/12/2007 at 6:30 PM
		</div>
		<div class="comment_text"><p>Some web hosts limit the size you can upload as well.  Hostmysite now limits it to 8MB or so.  Usually not a big deal, but something for people to consider in the planning stages if they don't have full control over their server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673051">3</a> by Joshua Cyr
		posted on 10/12/2007 at 6:33 PM
		</div>
		<div class="comment_text"><p>Something else I have seen is to upload the files first to CF's temp folder, do additional security and type checks, fize size checks, etc. then move it to the final destination folder if all checks out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673048">4</a> by Raymond Camden
		posted on 10/12/2007 at 7:26 PM
		</div>
		<div class="comment_text"><p>Nick - that filename is valid on all supported platforms, so I'm not quite sure what you are asking.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673055">5</a> by Nick
		posted on 10/12/2007 at 7:47 PM
		</div>
		<div class="comment_text"><p>Let me flip the question then. Are there filenames that are Valid across OS's but would cause CF to explode.</p><p>Ex. #4334.pdf</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673053">6</a> by Raymond Camden
		posted on 10/12/2007 at 7:53 PM
		</div>
		<div class="comment_text"><p>How would that filename cause CF to explode? CF doesn't care if a pound is in there. I mean shoot- consider cfquery. If you return a query with a # in the data, does CF care? No. It only cares when you _hard_ code something in, like so:</p><p>&lt;cfset nicklikesparis = "Paris is ##1"&gt;</p><p>There I have to escape it. But if the value is already stored, like in a query, result of cfdirectory, etc, it doesn't matter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673052">7</a> by Shane Zehnder
		posted on 10/12/2007 at 8:18 PM
		</div>
		<div class="comment_text"><p>Well, in my agency managment system users are allowed to upload files, especially in the homeowners department where we have to have pictures of all our insured properties.  To keep it secured all filenames are stored as UUID's.</p><p>All images are automatically resized to make sure file size isn't huge.</p><p>I have been wanting to rewrite my old image processing code using CF8's extensions rather than using second party apps, as I am currently doing.</p><p>This article did bring up some points I didn't initially take into consideration such as is the image file an actual image?  This is something I probably need to look at.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673050">8</a> by Niall
		posted on 10/14/2007 at 11:09 PM
		</div>
		<div class="comment_text"><p>You should upload this tutorial onto the &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Flearncf.com%2F%3AI8B0npqvGFFYugFBa6IvCVXu9UU&amp;cuid=3321886" rel="nofollow noopener" title="http://learncf.com/">http://learncf.com/</a>" target="_blank"&gt;<a href="http://disq.us/url?url=http%3A%2F%2FlearnCF.com%3A0t-p3Tze2_L5LmT4moigUJAwl9g&amp;cuid=3321886" rel="nofollow noopener" title="learnCF.com">learnCF.com</a>&lt;/a&gt; website.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673054">9</a> by dickbob
		posted on 10/15/2007 at 1:59 PM
		</div>
		<div class="comment_text"><p>A bit OT but if you are specifying the accept attribute for jpeg's remember to add image/pjpeg to allow IE to upload jpegs. Credit here...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Frip747.wordpress.com%2F2007%2F05%2F09%2Fcffile-upload-gotcha-with-ie-and-jpg%2F%3AWiocMcjwB65pGVvMYHUtuuiSsXc&amp;cuid=3321886" rel="nofollow noopener" title="http://rip747.wordpress.com/2007/05/09/cffile-upload-gotcha-with-ie-and-jpg/">http://rip747.wordpress.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673058">10</a> by Xchanius
		posted on 11/1/2007 at 3:26 AM
		</div>
		<div class="comment_text"><p>As usual, great information Raymond. One question I have is how to manipulate the file name before you save the file. For instance, I need to make sure all filenames are lowercase when uploading files to my server. I have been unable to figure out how to access the $_FILES array in order to change the name (I'm also writing a bunch of PHP so I tend to confuse the two). I suppose I could use CFFILE to rewrite the names, but that seems like extra, unnecessary work if I can get it right the first time. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673059">11</a> by Raymond Camden
		posted on 11/1/2007 at 7:19 PM
		</div>
		<div class="comment_text"><p>Well, you can't rename a file on the client. You can easily rename the file after it is uploaded. You would just use cffile/rename.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673061">12</a> by Xchanius
		posted on 11/2/2007 at 4:12 AM
		</div>
		<div class="comment_text"><p>That's what I ended up doing. Works fine. Hopefully it will scale as the upload volume increases. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673060">13</a> by Michael
		posted on 12/12/2007 at 9:34 PM
		</div>
		<div class="comment_text"><p>Great as always. Is there a chance to CFSET a form field before using cffile-upload? Any chance to put the file in the request?<br>I won't do that usually, but it would help me with a current project. I then could use very old code to upload a file without touching the whole system or creating (better) new code - but it must happen without a browser/client request.<br>Any clues?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673057">14</a> by Raymond Camden
		posted on 12/12/2007 at 9:59 PM
		</div>
		<div class="comment_text"><p>You can't set a file to upload server side. The browser restricts that for security reasons.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673049">15</a> by Michael
		posted on 12/13/2007 at 12:49 PM
		</div>
		<div class="comment_text"><p>So sorry, I don't want to use javascript or a browser because I can't use a separate (client) request.</p><p>What I wanted is to CFSET a value in CF and then using CFFILE:<br>&lt;cfset form.uploadfile = ...&gt;<br>&lt;cffile action="UPLOAD" filefield="uploadfile" ...&gt;</p><p>Read this blog entry by Charlie Arehart:<br><a href="http://disq.us/url?url=http%3A%2F%2Fcarehart.org%2Fblog%2Fclient%2Findex.cfm%2F2006%2F5%2F7%2Fcfform_not_doing_upload%3AMofylILIn0iOG4_huOrDHtDxsIA&amp;cuid=3321886" rel="nofollow noopener" title="http://carehart.org/blog/client/index.cfm/2006/5/7/cfform_not_doing_upload">http://carehart.org/blog/cl...</a><br>Maybe I have not only to CFSET the formfield but also to copy the upload file into CF's temp directory from where CFFILE-upload can pull it.</p><p>My problem is that there is a big chunk of old code handling a file upload and doing a lot more to save the file to the system where it is managed. I don't want to write the whole stuff by myself (and forget doing something important) to import 1000 files. It will be much more simple and save to let the existing code doing that, but it uses a CFFILE-upload. All I have to do is to set the formfield name.</p><p>It should be only a trick if you can't change the whole existing code. You know how complex this old stuff can be.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673056">16</a> by Michael
		posted on 12/13/2007 at 1:23 PM
		</div>
		<div class="comment_text"><p>Here is the code I used, see below.<br>You see <br>a) where file is (so you can copy yours to this location)<br>b) what information is stored in the form field (so you can set it to name name of the the temp file)<br>But I can't see where the original file name has gone. If I can't set that value CFFILE-upload can't work properly. Maybe there is something in the multipart form header? <br>Any help will be much appreciated.</p><p>Code of test.cfm :<br>&lt;form action="test.cfm" method="post" enctype="multipart/form-data"&gt;<br>	&lt;input type="file" name="myfile"&gt;<br>	&lt;input type="submit"&gt;<br>&lt;/form&gt;</p><p>&lt;cfdump var="#form#"&gt;<br>&lt;cfdirectory action="LIST" directory="#gettempdirectory()#" name="qDir"&gt;<br>&lt;cfdump var="#qDir#"&gt;</p><p>&lt;cfflush&gt;</p><p>&lt;cfloop query="qDir"&gt;<br>	&lt;cffile action="READ" file="#gettempdirectory()##<a href="http://disq.us/url?url=http%3A%2F%2FqDir.name%3AmHMo1yzwJwfIvVovxylRPyb39w4&amp;cuid=3321886" rel="nofollow noopener" title="qDir.name">qDir.name</a>#" variable="filecontent"&gt;<br>	&lt;cfdump var="#filecontent#"&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673063">17</a> by Raymond Camden
		posted on 12/13/2007 at 4:57 PM
		</div>
		<div class="comment_text"><p>@Michael - I don't think I'm getting you. You don't want a client request? Then how do you plan on uploading a file from the client to your server? You _can't_, repeat, cannot, do this automatically. The user must select a file. Otherwise web sites would be stealing files from users left and right.</p><p>As to your code - why don't you use the cffile tag as specified in this blog entry? That will give you stuff like the original file name.</p><p>I truly do not think I'm getting you here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673064">18</a> by Michael
		posted on 12/13/2007 at 5:50 PM
		</div>
		<div class="comment_text"><p>Thanks for your patience Raymond. I'll try to explain:</p><p>I have to use an existing custom tag (with &lt;cffile action="UPLOAD" filefield="myfile" ...&gt; somewhere inside) to import 1000 new files.</p><p>What can I do? I see 2 possible solutions:<br>1.) Use our applications standard upload form, filling in all the data, select the file and press submit.<br>Takes a few hours but would work (and next year again with 10000 files ...).<br>2.) Other solution!!!</p><p>I don't want to choose solution 1 and save me a few hours work. What's with solution 2? Is there any "other solution" possible here?<br>The only other solution as far as I can see is to set the form parameters programmatically and call the custom tag.</p><p>Lets try it. First of, what form parameters do I need?</p><p>I created the following form.cfm/test.cfm to see what is sent to the server by a file upload request.<br>Call test.cfm in the browser, fill in the form and press submit to see the form dump.<br>-form.cfm<br>	&lt;form action="test.cfm" method="post" enctype="multipart/form-data"&gt;<br>	   &lt;input type="file" name="myfile"&gt;<br>	   &lt;input type="submit"&gt;<br>	&lt;/form&gt;<br>/form.cfm<br>-test.cfm:<br>	&lt;cfdump var="#form#"&gt;<br>	&lt;cffile action="UPLOAD" filefield="myfile" destination="d:\temp\upload\"&gt;<br>/test.cfm</p><p>This works perfectly. There is a string called "form.myfile" in the dump pointing to the cf temp directory:<br>"D:\ColdFusion8\runtime\servers\coldfusion\SERVER-INF\temp\wwwroot-tmp\neoXXX.tmp"<br>and the file is physically moved to d:\temp\upload\ by the cffile tag.</p><p>Perfect? Hm... Here lies a problem. I can't see the original file name in the form struct. But cffile knows it and renames neoXXX.tmp after moving it. Where is it?</p><p>Anyway! I can see how the form parameters are set and now I can create form variables by myself before calling cffile. That is what counts. Forget about the original name.<br>(Maybe CF mustn't rename the file after moving it from the temp directory, then everything is fine.<br>So let's decide that the missing original name is maybe a problem - and if: then solve it later.)</p><p>From the dump in test.cfm I know that I must set form.myfile to a path/file in the temp directory.<br>Later I copy all 1000 files, but for testing I copied only "WINZIP.TXT" manually into the cf temp directory and then called import.cfm in the browser:<br>-import.cfm<br>	&lt;cfset form.myfile = "#gettempdirectory()#WINZIP.TXT"&gt;<br>	&lt;cffile action="UPLOAD" filefield="myfile" destination="d:\temp\upload\"&gt;<br>/import.cfm</p><p>import.cfm doesn't work. The cffile error is:<br>	Message: Invalid content type: ''. <br>	Detail: The cffile action="upload" requires forms to use enctype="multipart/form-data". <br>That says it all. I can't do it manually.</p><p>Is there really no other solution than 1.)?</p><p>I hope the problem is now clear. I know, I'm not an exceptionally gifted writer ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673066">19</a> by Raymond Camden
		posted on 12/13/2007 at 6:59 PM
		</div>
		<div class="comment_text"><p>Michael, you cannot automate the uploading of files from the client. Period. It's not possible unless you use some magical IE only ActiveX control. Browsers won't allow for automatic uploads like that.</p><p>The only option I can suggest is to move the 1k files to the CF server. Then you can run the import there by changing the code in the custom tag perhaps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673068">20</a> by Michael
		posted on 12/13/2007 at 7:16 PM
		</div>
		<div class="comment_text"><p>Thank you for your reply.</p><p>I don't want to upload anything from a client.<br>Forget everything that was said in the first 2 posts.<br>Try import.cfm in my 3rd post. This is what I want to do.</p><p>I can move the files to the CF server. I can do anything with the files what I want.</p><p>The only problem is: I can't change the custom tag and the whole application behind it.<br>It's not possible. If I could, I simply changed CFFILE-upload to CFFILE-copy and it works like a charm.</p><p>There is only one chance:<br>Writing some cf code to loop over the files, set variables into the form struct<br>and call the custom tag in the same request, making the custom tag (and cffile-upload)<br>believe  that the call is coming from the form</p><p>This is what import.cfm tried to do. But it simply doesn't work.</p><p>All I need is pure CF code to set everything as a multipart form does.<br>Java - maybe? No html. No form. No javascript. One single request.</p><p>I see, there's no way to do that in Coldfusion.<br>Thank's anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673067">21</a> by Raymond Camden
		posted on 12/13/2007 at 7:18 PM
		</div>
		<div class="comment_text"><p>Ahhh. Well, it is unfortunate that you cannot change the custom tag. Can I ask why that is?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673070">22</a> by David Boyer
		posted on 3/4/2008 at 2:07 PM
		</div>
		<div class="comment_text"><p>Nice article, but do you have any idea where ColdFusion hides the original filename, before the &lt;CFFile action="upload"&gt;.</p><p>If we knew the original name we could do things like this...</p><p>Save.cfm<br>&lt;!--- form.file contains the temporary upload location + filename ---&gt;<br>&lt;cfset info = GetFileInfo(form.file) /&gt;<br>&lt;cfif ListLast(originalFilenameGoesHere, '.') Eq 'txt' And info.size Lt 50000&gt;<br>  &lt;cffile action="upload" filefield="form.file" destination="e:\docs" /&gt;<br>  Upload is valid.<br>&lt;cfelse&gt;<br>  Your upload is invalid.<br>&lt;/cfif&gt;</p><p>This is what I'm trying to do with a validation component that I don't want moving files, just validating them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673079">23</a> by Raymond Camden
		posted on 3/4/2008 at 7:40 PM
		</div>
		<div class="comment_text"><p>I don't believe you can get that w/o first doing the upload. Technically the file is already uploaded and this action just "processes" the upload so you can handle it in CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673072">24</a> by David Boyer
		posted on 3/5/2008 at 3:42 PM
		</div>
		<div class="comment_text"><p>I think you're right Ray, I've spent too long hunting for the filename now to know that even if I found it, I wouldn't want to use it as it's not documented and could change at any time.</p><p>It's a shame though, it'd be nice to avoid the extra overhead of creating a copying the file (cffile upload) just to find it has an invalid extension and then throw it away, especially if dealing with large uploads.</p><p>Fortunately for me I'm only dealing with smaller files.  I'll just have to keep it on my CF9 wishlist though :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673077">25</a> by Ilir Belba
		posted on 3/6/2008 at 9:16 PM
		</div>
		<div class="comment_text"><p>Here is a way of geting the fiel name before you use CFFILE. Notice the onSubmit function when you submit the form, the clientFilePath will provide the local path of you file to upload.</p><p>&lt;cfparam name="FORM.FileToUpload" default=""&gt;<br>&lt;cfparam name="FORM.clientFilePath" default=""&gt;<br> &lt;form action="#CGI.SCRIPT_NAME#?function=submit" method="post" enctype="multipart/form-data" onSubmit="this.clientFilePath.value = this.FileToUpload.value;"&gt;					<br>         		 &lt;table border="0"&gt;<br>					 &lt;tr&gt;		  <br>						 &lt;td class="newForm" nowrap="nowrap"&gt;Upload CV and Resume:&lt;/td&gt;<br>							&lt;td&gt;&lt;input  name="FileToUpload" type="file" value="" class="newInput"&gt;&lt;/td&gt;<br>					&lt;/tr&gt;<br>					 &lt;tr&gt;<br>							&lt;td align="right"&gt; &lt;/td&gt;						<br>							&lt;td align="left"&gt;&lt;input name="Submit" type="submit" class="send" value="SEND"&gt;&lt;/td&gt;<br>					&lt;/tr&gt;	<br>											&lt;/table&gt;			<br>				&lt;/form&gt;</p><p>Then on validate, strip the file name from the entire path and find the file extension before you use CFFILE, here is the code:</p><p>&lt;cfif Trim(Form.FileToUpload) eq ''&gt;<br>		&lt;cfset ValidateRecord = "#ValidateRecord#" &amp; "&lt;li&gt;Please upload the resume."&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfif CGI.CONTENT_LENGTH gt 2000000&gt;<br>			&lt;cfset ValidateRecord = "#ValidateRecord#" &amp; "&lt;li&gt;The file uploaded is bigger then 2 MB."&gt;			<br>		&lt;cfelse&gt;<br>			&lt;cfset Form.clientFilePath = REReplaceNoCase(#Form.clientFilePath#, " ", "", "All")&gt; <br>			&lt;cfset Form.FileName = REReplaceNoCase(#Form.clientFilePath#, "([A-Z]:\\)|\w+\\+", "", "All")&gt; <br>			&lt;cfset Form.Ext = Right(Form.FileName, Len(Form.FileName) - Find('.',Form.FileName))&gt;<br>						&lt;cfif Form.Ext neq 'doc' and Form.Ext neq 'pdf'&gt;<br>				&lt;cfset ValidateRecord = "#ValidateRecord#" &amp; "&lt;li&gt;Your resume document should be a word or pdf document."&gt;	<br>			&lt;/cfif&gt;</p><p>		&lt;/cfif&gt;<br>	&lt;/cfif&gt;</p><p>Let me know if you need the entire sample file.</p><p>Cheers,<br>Ilir</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673076">26</a> by Paul Baylis
		posted on 3/15/2008 at 2:58 PM
		</div>
		<div class="comment_text"><p>Hi Ilir,</p><p>I would like your complete validation file please. I'm having trouble making these snippets work properly. Can you email me? Many thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673075">27</a> by Rich Rein
		posted on 5/5/2008 at 11:26 PM
		</div>
		<div class="comment_text"><p>@Ilir</p><p>Unfortunately, using cgi.content_length appears to take the entire set of form data into account.  While this is alright if you have a relatively small form (other than the file being uploaded), it gets tough to say that a user should be able to upload anything 1MB or smaller using this method if you also have 100KB of other form data (text fields, selections, etc.)</p><p>In order to better gauge the size of the uploaded file (without actually performing a cffile upload on it), I came up with the following:</p><p>&lt;!--- get file name (last item in list) ---&gt;<br>&lt;cfloop from="1" to="#ListLen(form.uploadfile, "\")#" index="myPos"&gt;<br>      &lt;cfset Local.tempFileName = ListGetAt(form.uploadfile, myPos, "\") /&gt;<br>&lt;/cfloop&gt;</p><p>&lt;!--- get directory where we are storing it ---&gt;<br>&lt;cfset Local.tempFileDir = Replace(form.uploadfile, Local.tempFileName, "") /&gt;</p><p>&lt;!--- get directory list for file (including size) ---&gt;<br>&lt;cfdirectory action="list" directory="#Local.tempFileDir#" name="myDir" filter="#Local.tempFileName#" /&gt;</p><p>&lt;!--- Compare uploaded filesize to file size limit ---&gt;<br>&lt;cfif myDir.size GT local.fileSizeLimit&gt;<br>      &lt;!--- Handle the error ---&gt;<br>&lt;cfelse&gt;<br>      &lt;!--- Go ahead with the upload ---&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673078">28</a> by Ron
		posted on 5/16/2008 at 10:00 AM
		</div>
		<div class="comment_text"><p>I, too, am looking for the ever ellusive filename before the upload... Actually, I'm not even interested in ever doing a file upload, but I need a "file" input type box where the user can search for a file and then process the form.  Is this possible?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673074">29</a> by Raymond Camden
		posted on 5/16/2008 at 5:24 PM
		</div>
		<div class="comment_text"><p>I don't quite get what you are asking. You want the user to pick a file. But you don't want them to upload it. Are you saying you just want the user to pick a filename? If so, you can't really do that. The file will be uploaded.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673080">30</a> by David
		posted on 6/12/2008 at 7:36 PM
		</div>
		<div class="comment_text"><p>I have the exact same concern as David Boyer a few posts up.</p><p>As we move into video land, file upload size is becoming a big issue, and having ColdFusion copy a file from the tmp directory seems like totally unnecessary overhead.</p><p>My application basically "hangs" while CFFILE moves a 1Gb+ file from temp to wherever I have specified, so after my progress bar says 100% due to the fact that the file is now 100% in the temp folder, the user is now sitting there waiting for CFFILE to respond (although he doesn't know it).</p><p>Anyone know a way to bypass the tmp upload scenario and just have the file go right where I want it to so no copy is required?</p><p>Could this be accomplished with another language like jsp or perl?  My test server has all these languages installed.  I am totally agnostic about how to get around this particular file upload issue.  I am just looking for minimum overhead.  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673081">31</a> by Marc Mataya
		posted on 8/14/2008 at 1:37 AM
		</div>
		<div class="comment_text"><p>JUST DELETE BAD FILES:  Once it gets to the server, simply determine if you should immediately delete it.  Use the attributes such as cffile.serverFileType, size, etc. to instantly turn around a DELETE cffile tag right after the cffile that UPLOADED it.</p><p>I was trying to limit .DAT files, but there is not a MIME code for this for the accept.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673083">32</a> by Christopher David Kowalski
		posted on 1/15/2009 at 10:44 PM
		</div>
		<div class="comment_text"><p>By not storing images in the webroot, are we talking about putting things above the webroot? If so, how are you calling the image into the HTML when serving it on a page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673082">33</a> by Raymond Camden
		posted on 1/16/2009 at 12:28 AM
		</div>
		<div class="comment_text"><p>You can serve images, and other things, from outside of the webroot by using CFCONTENT</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673084">34</a> by Jules Gravinese
		posted on 1/20/2009 at 7:36 PM
		</div>
		<div class="comment_text"><p>I know I am late getting here... but I have to disagree with two comments.</p><p>1) You cannot automate the uploading of files on the client. That is not so. You can put each file field into it's own form. Then with ajax/javascript you can submit() those forms in order, one after the other.</p><p>2) You cannot get the file name before the file is uploaded. Well, you can. Again, with javascript. I made something called Fancy Upload which does that (and adds an icon). You can see it here (along with an upload progress indicator): <a href="http://disq.us/url?url=http%3A%2F%2Fwww.webveteran.com%2Fblog%2Findex.php%2Fweb-coding%2Fcoldfusion%2Fcoldfusion-file-upload-progress%2F%3Aqzuuxd_62hY03IbebK1181DfwN0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.webveteran.com/blog/index.php/web-coding/coldfusion/coldfusion-file-upload-progress/">http://www.webveteran.com/b...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673086">35</a> by Raymond Camden
		posted on 1/20/2009 at 7:38 PM
		</div>
		<div class="comment_text"><p>@JG: 1) Are you saying your first sentence is incorrect? I'm not exactly sure what you mean. You cannot set the file of a file upload. Period. It's a security issue. If you could, I could set the file field to a sensitive file on your system (c:\boot.ini) and upload it w/o you knowing about it.</p><p>2) You are correct - you can get the filename once the user has selected the file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673085">36</a> by Jules Gravinese
		posted on 1/20/2009 at 7:44 PM
		</div>
		<div class="comment_text"><p>That's not exactly what I mean. I probably wasn't clear, or I misunderstood the original comment. I meant you can automate the uploading.</p><p>Say have 5 file fields in rows. To the user it looks like one form. But it's really 5 forms stacked. (if you want to get dangerous you can have javascript create more on the fly with a cute button). The user select a file for each. Then at the end a button fires off a javascript that submits the first form (and hides it) - but submits it into a hidden iframe. The upload action page has a script at the end which tells the submitting page it's done, which in turn submits the next form in the line. Lather rinse repeat.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673088">37</a> by Raymond Camden
		posted on 1/20/2009 at 8:08 PM
		</div>
		<div class="comment_text"><p>Ah ok, that makes sense then.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673089">38</a> by Meenakshi
		posted on 4/9/2009 at 7:45 PM
		</div>
		<div class="comment_text"><p>Ray, my file upload is in CFwindow and after uploading page left the Cfwindow and redirect to the action page.</p><p>How can I keep my upload on same page?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673090">39</a> by Raymond Camden
		posted on 4/9/2009 at 7:48 PM
		</div>
		<div class="comment_text"><p>File uploads with Ajax require special code. Google for file upload ajax for some examples.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673093">40</a> by Brian Wyant
		posted on 4/29/2009 at 2:37 AM
		</div>
		<div class="comment_text"><p>I recently ran into a strange issue with cffile upload.  I have a simple app which takes a .doc file that a user specifies and uses cffile upload to put it onto our linux box (where we are running CF6).  I use the mode attribute to change the permissions on the file.  Specifically, mode = 764.</p><p>Now, in some cases the files get uploaded with the correct permissions:</p><p>-rwxrw-r--  1 wwwrun www 56832 2009-04-28 15:34 testdoc.doc</p><p>In other cases, using the same process, the mode = 764 is not applied to the uploaded file:</p><p>-rw-r--r--  1 wwwrun www 70656 2009-04-28 15:56 testdoc2.doc</p><p>I assume this has to do with the file's security properties before ColdFusion ever touches it.  Has anyone else run across this or have thoughts on how to work around it?</p><p>I'm fairly new to this ColdFusion world so if I'm asking a dumb question, well, that's why.  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673091">41</a> by Raymond Camden
		posted on 4/29/2009 at 6:44 AM
		</div>
		<div class="comment_text"><p>No idea - but CF6 is like 5 years old, isn't it? You might want to make sure it is patched up completely. Might want to also try CF8. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673094">42</a> by Mike
		posted on 5/27/2009 at 8:24 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I used the line &lt;cfif structKeyExists(form, "fileName")&gt; <br>but I still get an error if a file is not selected.</p><p>"The form field "fileName" did not contain a file. "</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673098">43</a> by Raymond Camden
		posted on 5/28/2009 at 1:48 AM
		</div>
		<div class="comment_text"><p>It means no data was sent. Try</p><p>&lt;cfif structKeyExists(form,"filename") and len(form.filename)&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673097">44</a> by Amanda
		posted on 6/27/2009 at 12:01 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>In reference to the first comments in this thread, how would CF handle a filename uploaded that was something like 'WelcomeToTheWeb2.0.xls'? This is a valid filename on Windows OS, but is CF able to successfully separate the name of the file and the file extension? Another example would be something like 'ThisIsAFile.txt.xls', which is a little different, since both are valid extensions, but may not be different in the eyes of CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673096">45</a> by Raymond Camden
		posted on 6/27/2009 at 12:02 AM
		</div>
		<div class="comment_text"><p>"but is CF able to successfully separate the name of the file and the file extension"</p><p>certainly - the extension is just the last part.</p><p>Ditto for your next question - the extension will be the _last_ part of the file name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673101">46</a> by Marllon Capdeville
		posted on 7/30/2009 at 11:55 PM
		</div>
		<div class="comment_text"><p>Ray, I read both the article and the posts. But I have to offer an image upload solution in a multiple server environment with load balance. How to make sure the image uploaded by a client will be saved in only on place and not in every server each one is directed by de load balance mechanism?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673102">47</a> by Raymond Camden
		posted on 7/31/2009 at 8:09 AM
		</div>
		<div class="comment_text"><p>You could use one machine in the cluster just for uploads. You could also use a NAS that all machines have access too. That's the only ideas that come to mind.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673100">48</a> by Andrew
		posted on 8/18/2009 at 6:11 AM
		</div>
		<div class="comment_text"><p>Hi everyone, I'm somewhat new to cf, as I've only been using it since cf8. and I've got a related question. I've got a form that encapsulates div tags which contain my form controls. I'm not exactly comfortable with this, but this is how my designer has done things thus far. for some reason my &lt;cfinput&gt; type=file name="userPic"&gt; does not register with the form. I'm using coldfusion form and control tags for my form. I've made sure I'm using enctype="multipart/form-data" attribute in my form's opening tag.</p><p>I just don't see why all my other controls are registering except for this input of type file. Any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673099">49</a> by Raymond Camden
		posted on 8/19/2009 at 7:29 PM
		</div>
		<div class="comment_text"><p>Did you use cfdiv or div?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673104">50</a> by Adam
		posted on 10/13/2009 at 11:31 PM
		</div>
		<div class="comment_text"><p>I'm using a form that allows a candidate to upload multiple documents.  The directory that the person uploads to will follow the convention of username_nominationUploads so it will be unique to each person's username.  The username is obtained from the email address in a form field called email.</p><p>In order to create the directory, I've included these lines of code:</p><p>&lt;cfset destination = expandPath("/#left(email,8)#_nominationUploads")&gt;</p><p>&lt;cfif not directoryExists(destination)&gt;<br>	&lt;cfdirectory action="create" directory="#destination#"&gt;<br>&lt;/cfif&gt;</p><p> 		&lt;cffile action="upload" <br>				filefield="nominationLetter" <br>				destination="#destination#" <br>				nameConflict="makeUnique" <br>				result="upload"&gt;</p><p>The directory is not created.  Can anyone elaborate why it is not?</p><p>Thanks,<br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673108">51</a> by Raymond Camden
		posted on 10/15/2009 at 3:12 AM
		</div>
		<div class="comment_text"><p>Did you add some logging? For example, maybe destination isn't what you think it is. Add a simple cflog that records the value. Then add a cflog for the result of directoryExists() on it. Also - an email address may contain @, and that may not be a valid directory name.</p><p>You said your code doesn't wor k- does it throw an error?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673106">52</a> by Troy Jones
		posted on 12/23/2009 at 8:42 PM
		</div>
		<div class="comment_text"><p>I have run into an issue with the uploading and writing of images. In certain instances, the file is uploaded and when the file is being written to the file directory, it throws an error "invalid file format null". I outputted the cffile structure immediately before the line that writes the file and everything in the structure seemed legit according to ColdFusion. However, the error persisted and I can find no log of it in the administrator. Has anyone experienced anything like this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673107">53</a> by Simon
		posted on 4/1/2010 at 5:08 PM
		</div>
		<div class="comment_text"><p>Hi all, has anyone had problems using file upload with Safari 4.0.5 I keep getting an error saying the form field did not contain a file. Weird as it works in all the other browsers. I tried posting my code but the page said I was spamming :0(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673109">54</a> by Raymond Camden
		posted on 4/1/2010 at 5:09 PM
		</div>
		<div class="comment_text"><p>Is this Safari on the iPhone?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673113">55</a> by Simon
		posted on 4/1/2010 at 5:48 PM
		</div>
		<div class="comment_text"><p>no just good old pc</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673110">56</a> by Raymond Camden
		posted on 4/1/2010 at 5:53 PM
		</div>
		<div class="comment_text"><p>Odd. I do know that on the iPhone, the field won't exist at all, so you want to ensure you do a isDefined (or structkeyexists) check first. Safari in general though doesn't prevent you from uploading files. That is a pretty critical failure. Can you verify it on other machines? Can you try off your network?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673112">57</a> by Simon
		posted on 4/1/2010 at 6:01 PM
		</div>
		<div class="comment_text"><p>I'll do some more testing per your suggestions Ray and report back.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673111">58</a> by jules
		posted on 4/1/2010 at 9:59 PM
		</div>
		<div class="comment_text"><p>I've ran into that a lot. So this is what I do on upload pages:<br>&lt;cfif isdefined("form.nominationLetter") and form.nominationLetter neq ''&gt;</p><p>Also are you sure your FORM tag has  enctype="multipart/form-data" ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673114">59</a> by Dave S
		posted on 3/2/2011 at 7:40 PM
		</div>
		<div class="comment_text"><p>We have tried everything over the years to get reliable file uploads using cf6, then cf7, then cf8 and now cf9. All hoping and praying finally for reliable robust file uploads and yet it still seems a bridge too far. Is anyone actually using cf9 in a large production environment uploading files 300MB+ reliably (I mean 100% of the time it works). We are using the new flash upload control with cf9 cffileupload tag on a quad core linux and quad core win 2008 server both with 8GB Ram and nothing else running on either machine (and they are connected very well in major a data center) and still 1 out of 10 uploads fail to complete and die in the cf temp directory. We have 1GB of memory set in cf administrator for file uploads and the servers never break a sweat during uploads but the upload just mysteriously (not always) fails. It's been very frustrating as we have to build just this portion in php so we can rely on it and not get constant complaints from customers of failed file uploads and the dreaded 500 Error. I would love to hear real world feedback on this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673115">60</a> by Raymond Camden
		posted on 3/10/2011 at 4:05 AM
		</div>
		<div class="comment_text"><p>Do you see anything interesting in the logs when the upload fails?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673116">61</a> by Jules Gravinese
		posted on 3/10/2011 at 5:35 AM
		</div>
		<div class="comment_text"><p>Are you maybe hitting a process time limiter, like seefusion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673117">62</a> by Dave S
		posted on 3/10/2011 at 5:27 PM
		</div>
		<div class="comment_text"><p>Nothing strange in the logs, basically the only way I know an upload is failed is a customer complaint and/or I see large tmp files sitting in the /opt/coldfusion9/runtime/servers/coldfusion/SERVER-INF/temp/wwwroot-tmp directory. The problems seem to go away for a while once I a) clear these files and b) restart the cf service. As I say this is a very powerful server running nothing but this upload app and used by no more then 4 or 5 people at the same time max.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673118">63</a> by Dave S
		posted on 3/10/2011 at 5:59 PM
		</div>
		<div class="comment_text"><p>FYI - Settings I have in CF Administrator are<br>Maximum size of post data : 1000MB<br>Request Throttle Threshold : 4 MB<br>Request Throttle Memory : 1000MB</p><p>Does the timeout setting come into play with these uploads, could the problem be that simple? I have it set to 180 secs currently and several of these uploads would take longer than that. I can't imagine that value is used in the flash uploader cf is using. When the upload fails CF does issue the 500 error which displays in the uploader but as noted nothing shows in regular logs. However, I did just find some additional logs that may be capturing the error, from <br>opt/coldfusion9/runtime/logs/coldfusion-event.log</p><p>03/10 00:33:52 error unexpected end of part<br>java.io.IOException: unexpected end of part<br>	at com.oreilly.servlet.multipart.PartInputStream.fill(<a href="http://disq.us/url?url=http%3A%2F%2FPartInputStream.java%3AYZwE6nyWzWUeR-3bOhobphcg1JM&amp;cuid=3321886" rel="nofollow noopener" title="PartInputStream.java">PartInputStream.java</a>:96)<br>	at <a href="http://disq.us/url?url=http%3A%2F%2Fcom.oreilly.servlet.multipart.PartInputStream.read%3A6tSewubFLkxl4nOFc8cNzUDVRjM&amp;cuid=3321886" rel="nofollow noopener" title="com.oreilly.servlet.multipart.PartInputStream.read">com.oreilly.servlet.multipa...</a>(<a href="http://disq.us/url?url=http%3A%2F%2FPartInputStream.java%3AYZwE6nyWzWUeR-3bOhobphcg1JM&amp;cuid=3321886" rel="nofollow noopener" title="PartInputStream.java">PartInputStream.java</a>:191)<br>	at <a href="http://disq.us/url?url=http%3A%2F%2Fcom.oreilly.servlet.multipart.PartInputStream.read%3A6tSewubFLkxl4nOFc8cNzUDVRjM&amp;cuid=3321886" rel="nofollow noopener" title="com.oreilly.servlet.multipart.PartInputStream.read">com.oreilly.servlet.multipa...</a>(<a href="http://disq.us/url?url=http%3A%2F%2FPartInputStream.java%3AYZwE6nyWzWUeR-3bOhobphcg1JM&amp;cuid=3321886" rel="nofollow noopener" title="PartInputStream.java">PartInputStream.java</a>:152)<br>	at com.oreilly.servlet.multipart.FilePart.write(<a href="http://disq.us/url?url=http%3A%2F%2FFilePart.java%3ASiLCVXOAvoQEm6NTjaiIECRtAww&amp;cuid=3321886" rel="nofollow noopener" title="FilePart.java">FilePart.java</a>:257)<br>	at com.oreilly.servlet.multipart.FilePart.writeTo(<a href="http://disq.us/url?url=http%3A%2F%2FFilePart.java%3ASiLCVXOAvoQEm6NTjaiIECRtAww&amp;cuid=3321886" rel="nofollow noopener" title="FilePart.java">FilePart.java</a>:215)</p><p>I did not include all of it as maybe these first few lines would shed some light on the source of the issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673119">64</a> by Raymond Camden
		posted on 3/15/2011 at 6:56 AM
		</div>
		<div class="comment_text"><p>Sorry for not responding sooner. Unfortunately - I've got no idea on this one. Did you try "official" Adobe support? DId you try upping the timeout to over 180? Remember you can do it on a per request basis.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673122">65</a> by Dale Copps
		posted on 3/15/2011 at 6:19 PM
		</div>
		<div class="comment_text"><p>I am using CF MX and trying to get this to work to upload a file to a network server in my company. I have incorporated your code into my form. Problem one, the result attribute is not accepted. The message:</p><p>The tag does not have an attribute called result. The valid attribute(s) are action, charset, accept, destination, filefield, nameconflict, mode, attributes, source, file, variable, output, addnewline.</p><p>So I remove the result attribute.</p><p>Then the next error is: "Variable UPLOAD is undefined." I assume this is coming from the cfdump tag: &lt;cfdump var="#upload#"&gt;. I am not sure how this is supposed to be working, and don't know what to do about it. (I'm obviously not an accomplished CF user.)</p><p>Pertinent code in my input form:<br>Select your code file: &lt;input type="file" name="uploadfile"&gt;</p><p>Pertinent code in my action page, following the INSERT query:</p><p>&lt;cfif structKeyExists(form, "uploadfile")&gt;<br>&lt;cfset destination = "\\dilbert\matlab\"&gt;<br>&lt;cfif not directoryExists(destination)&gt;<br>&lt;cfdirectory action="create" directory="#destination#"&gt;<br>&lt;/cfif&gt;</p><p>&lt;cffile action="upload" filefield="uploadfile" destination="#destination#" nameConflict="makeUnique"&gt;<br>&lt;cfdump var="#upload#"&gt;</p><p>Thank you for any guidance you can provide.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673121">66</a> by Raymond Camden
		posted on 3/15/2011 at 6:22 PM
		</div>
		<div class="comment_text"><p>1) Right. result was added in 8. You are using a -very- old version of CF. In 7 the value is just saved into a variable structure called cffile. <br>2) Therefore, change Upload to CFFILE.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673124">67</a> by Dale Copps
		posted on 3/15/2011 at 6:35 PM
		</div>
		<div class="comment_text"><p>Two undesirable (possibly related) results from this fix. 1) I get a large "struct" table displayed on my acknowledgement page; and 2) the file didn't upload to my destination. Perhaps I am defining its location with incorrect syntax ("\\dilbert\matlab\")? (The folder absolutely exists on the server dilbert.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673123">68</a> by Troy Jones
		posted on 3/15/2011 at 6:41 PM
		</div>
		<div class="comment_text"><p>The filepath to your destination is the full physical filepath. For example c:\dilbert\matlab (or whatever the actual value is). If you do not use this syntax to denote your filepath, then use the expandPath() function as so:</p><p>&lt;cfset destination = expandPath('\\dilbert\matlab')&gt;</p><p>As far as your cffile dump, you can pick a value out of that structure to use for display.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673126">69</a> by Raymond Camden
		posted on 3/15/2011 at 7:05 PM
		</div>
		<div class="comment_text"><p>@Dale: How is 1 an issue? My code dumps so it is expected. As for 2 - does CF run as a user or System? CF can't write to network shares unless it runs as a user that has access.</p><p>@Troy: I disagree. You can use a network path as is as long as CF runs as a user with access.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673129">70</a> by Dale Copps
		posted on 3/15/2011 at 7:58 PM
		</div>
		<div class="comment_text"><p>@Troy: As per Raymond's subsequent comment, I left the line cfset destination = "\\dilbert\matlab"&gt;</p><p>@Raymond: I got our IT people to give CF full user access rights to the destination folder.</p><p>And the latest test worked! In part...</p><p>1) I have a field in my database which is supposed to hold the filename (which in my current test is matlabtest1.docx). The INSERT command in the operation that worked (insofar as the file was uploaded to \\dilbert\matlab) instead entered this into that field:</p><p>D:\CFusionMX\runtime\servers\default\SERVER-INF\temp\wwwroot-tmp\neotmp2403.tmp</p><p>The INSERT command looks like this:<br>INSERT INTO tblMatlab (initials, title, description, filename)<br>VALUES ('#Form.initials#', '#Form.title#', '#Form.description#', '#Form.uploadfile#')</p><p>I have apparently put the wrong variable name in #Form.uploadfile#.</p><p>2) I guess the issue with the dump is that I don't know what it is or why it is necessary, and I don't want my users to be confused by it. However, as I glance at the latest one output, I see it has a wealth of useful information and Matlab users will not be intimidated by it.</p><p>Thank you again. You are very generous to offer so much support to us mid- to low-level users.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673199">71</a> by Raymond Camden
		posted on 3/15/2011 at 8:00 PM
		</div>
		<div class="comment_text"><p>Right - the dump is definitely NOT for the general public. I make use of cfdump a lot, especially in my demos here, but for _this_ post I should have removed it since i twas meant to a guide to getting the feature done on a 'real' site. Anyway - glad you got it all working, and you are most welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673203">72</a> by Dale Copps
		posted on 3/15/2011 at 8:06 PM
		</div>
		<div class="comment_text"><p>I will leave cfdump in there, though, for my group of matlab users for this application--a shared code repository. It is very useful.</p><p>Still, how do I get the correct file name into my filename field in the database? Note the problem described above. Obviously #Form.uploadfile# is wrong, but I can't figure out what would be the right way to capture the correct file name.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673201">73</a> by Raymond Camden
		posted on 3/15/2011 at 8:15 PM
		</div>
		<div class="comment_text"><p>Define "correct." :) The struct contains the name from the user's machine, it's cffile.clientfile i believe. (Check docs or above.) But if the file was renamed and you want that, use serverfile. Normally I store both. I need the serverfile so I can do crap with it later. But the user is shown the clientfile since that's the name THEY remember.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673205">74</a> by Dale Copps
		posted on 3/15/2011 at 8:20 PM
		</div>
		<div class="comment_text"><p>I am not being clear. The filename field in my database, which I am trying to populate with:</p><p>INSERT (..., filename)<br>VALUES (..., '#Form.uploadfile#')</p><p>SHOULD be populating that field with matlabtest1.docx, but instead is putting this into that field:</p><p>D:\CFusionMX\runtime\servers\default\SERVER-INF\temp\wwwroot-tmp\neotmp2412.tmp</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673202">75</a> by Raymond Camden
		posted on 3/15/2011 at 8:24 PM
		</div>
		<div class="comment_text"><p>You want to use the CFFILE struct, the thing you dumped? it contains _all_ the fields.</p><p>p.s. You also want to make use of cfqueryparam, but one thing at a time. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673208">76</a> by Dale Copps
		posted on 3/15/2011 at 8:35 PM
		</div>
		<div class="comment_text"><p>Ah, Raymond, you are forgetting the extent of the ignorance of us (regrettably) casual users. I get what you are saying, but don't have a clue how to implement. Here is my .cfm file, in pertinent part. Where does my filename field get populated, and how?</p><p>&lt;!--- Create record in tblMatlab ---&gt;<br>&lt;cfquery name="qry1" datasource="Creare"&gt;<br>INSERT INTO tblMatlab (initials, title, description, filename)<br>VALUES ('#Form.initials#', '#Form.title#', '#Form.description#', '#Form.uploadfile#')<br>&lt;/cfquery&gt;</p><p>&lt;cfif structKeyExists(form, "uploadfile")&gt;<br>&lt;cfset destination = "\\dilbert\matlab"&gt;<br>&lt;cfif not directoryExists(destination)&gt;<br>&lt;cfdirectory action="create" directory="#destination#"&gt;<br>&lt;/cfif&gt;</p><p>&lt;cffile action="upload" filefield="uploadfile" destination="#destination#" nameConflict="makeUnique"&gt;<br>&lt;cfdump var="#cffile#"&gt;<br>&lt;/cfif&gt;</p><p>&lt;!--- Begin HTML Page to acknowledge update---&gt; ....</p><p>By the way, I know I am using a very old ColdFusion. Problem is, the update cost is more than four times what I paid for the program in the first place! I suppose I will bite the bullet one day (when it will be even costlier), because I won't even be speaking the same language as the rest of the world's users.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673206">77</a> by Raymond Camden
		posted on 3/15/2011 at 8:44 PM
		</div>
		<div class="comment_text"><p>You want to run the upload action first. After that, the cffile struct will contain all the data you need. What the file was - what it's called now - etc. You would then do your query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673215">78</a> by Dale Copps
		posted on 3/15/2011 at 9:08 PM
		</div>
		<div class="comment_text"><p>Perfect! Works like a charm. Again, many thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673207">79</a> by Dale Copps
		posted on 3/17/2011 at 10:01 PM
		</div>
		<div class="comment_text"><p>Back at you, I fear. This new capability has me going back to some old routines and updating them with this nifty upload.</p><p>You say somewhere that you can have multiple uploads on one form. How does the cffile dump distinguish among, say, four upload possibilities on one form? I have a form where the user updates a database record and can upload up to four photos to a photo repository folder. But I don't know how to phrase the INSERT command.</p><p>I hope I am being clear here. Let me know if I need to elaborate on this.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673204">80</a> by Raymond Camden
		posted on 3/17/2011 at 10:16 PM
		</div>
		<div class="comment_text"><p>In order to process N uploads, you can use cffile action="uplaodAll", but that's CF9 only though. If you know the names of your file fields, then you need one cffile/action="upload" for each. Each tag will overwrite the CFFILE structure so you would need to process them one at a time, otherwise you 'lose' the data from the previous upload.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673218">81</a> by Mike P
		posted on 3/18/2011 at 12:57 AM
		</div>
		<div class="comment_text"><p>Hi, I've been googling for a while on this with no luck: is there any way to force the user to use the browse button to select a file to upload and prevent input in the text box? With type="file" it seems the text box and browse button are treated as a single entity, so properties like "readonly" and "disabled" affect the browse button as well as the textbox.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673210">82</a> by Paul
		posted on 3/18/2011 at 1:07 AM
		</div>
		<div class="comment_text"><p>Like the new look Ray, very "velvet underground"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673213">83</a> by Raymond Camden
		posted on 3/18/2011 at 1:10 AM
		</div>
		<div class="comment_text"><p>@mikep: Afaik no. File controls are locked down pretty hard since they represent something of a security issue. It's why you can't use JS to set the value.</p><p>@paul: thanks :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673209">84</a> by Dale Copps
		posted on 3/18/2011 at 5:20 PM
		</div>
		<div class="comment_text"><p>I need one more piece here. In my user form, I have four lines like this:</p><p>Select photo file:&lt;/b&gt; &lt;input type="file" name="uploadfile1"&gt;<br>...<br>Select photo file:&lt;/b&gt; &lt;input type="file" name="uploadfile2"&gt;<br>etc.</p><p>And in my target file, I do the following (your code stripped down to what I think are the essentials):</p><p>&lt;cfif structKeyExists(form, "uploadfile1")&gt;<br>&lt;cfset destination = "\\server\myfolder"&gt;</p><p>&lt;cffile action="upload" filefield="uploadfile1" destination="#destination#" nameConflict="makeUnique"&gt;<br>&lt;cfdump var="#cffile#"&gt;<br>&lt;/cfif&gt;<br>...</p><p>&lt;cfif structKeyExists(form, "uploadfile2")&gt;<br>&lt;cfset destination = "\\server\myfolder"&gt;</p><p>&lt;cffile action="upload" filefield="uploadfile2" destination="#destination#" nameConflict="makeUnique"&gt;<br>&lt;cfdump var="#cffile#"&gt;<br>&lt;/cfif&gt;</p><p>...  [for uploadfile3 and uploadfile4]</p><p>But then, I don't know what to do in my INSERT procedure because presumably my cffile.serverfile value will be the last one that was run.</p><p>INSERT INTO tblBlurbUpdate (... photofilename1, photocaption1, photofilename2, photocaption2, photofilename3, photocaption3, photofilename4, photocaption4)<br>VALUES (... '#cffile.serverfile#', '#Form.photocaption1#', '???', '#Form.photocaption2#', '???', '#Form.photocaption3#',  '???', '#Form.photocaption4#')</p><p>The only thing I can think of is maybe inserting a &lt;cfset tag&gt; in your section somewhere, e.g.,</p><p>&lt;cfset photofilename1 = #form.uploadfile1#</p><p>or something like that? Or is there some other way you would recommend?</p><p>Again, many thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673214">85</a> by Raymond Camden
		posted on 3/18/2011 at 5:39 PM
		</div>
		<div class="comment_text"><p>Yep, just copy the values out like you suggested.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673211">86</a> by Dale Copps
		posted on 3/18/2011 at 7:21 PM
		</div>
		<div class="comment_text"><p>I tried a form where I added a first picture but not the second, third, or fourth. When I click Submit, a cffile table is displayed, followed by the error "The form field "uploadfile2" did not contain a file." The photo is uploaded, but we never reach the INSERT command and no data record is created.</p><p>Here is the code section I think is provoking the error:</p><p>&lt;!--- Photo 2 ---&gt;<br>&lt;cfif structKeyExists(form, "uploadfile2")&gt;<br>&lt;cfset destination = "\\dilbert\corporate\projects\blurb_photos"&gt;<br>&lt;cffile action="upload" filefield="uploadfile2" destination="#destination#" nameConflict="makeUnique"&gt;<br>&lt;cfdump var="#cffile#"&gt;<br>&lt;cfset photofilename2 = #form.uploadfile2#&gt;<br>&lt;cfelse&gt;<br>&lt;cfset photofilename2 = NULL&gt;<br>&lt;/cfif&gt;</p><p>Can you see what I am missing here?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673219">87</a> by Raymond Camden
		posted on 3/18/2011 at 7:23 PM
		</div>
		<div class="comment_text"><p>When you submit the form, form.uploadfile2 does exist, but it is blank. Simply make your CFIF more robust</p><p>&lt;cfif structKeyExists(form, "uploadfile2") and len(form.uploadfile2)&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673220">88</a> by Dale Copps
		posted on 3/18/2011 at 8:10 PM
		</div>
		<div class="comment_text"><p>That works!</p><p>Again, thanks for your generosity. I've learned a lot, very efficiently, and have added a most useful capability to my intranet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673217">89</a> by Mika
		posted on 7/5/2011 at 1:20 AM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>i've just got a problem trying to upload an image from flex mobile application to server using cffile action upload.<br>I have a mobile app, which took image from camera and trying to upload to my server calling:<br>&lt;s:RemoteObject id="photoUploadService" destination="ColdFusion" source="cfc.upload"&gt;</p><p>			&lt;s:method name="insertImageLocation" result="insertImageResultHandler(event)" fault="faultHandler(event)"&gt;<br>				&lt;s:arguments&gt;<br>					&lt;picToUpload&gt;{fileURL}&lt;/picToUpload&gt;<br>				&lt;/s:arguments&gt;<br>				&lt;/s:method&gt;<br>		&lt;/s:RemoteObject&gt;</p><p>fileURL looks like this:file:///mnt/sdcard/forest/forest.jpg</p><p>Now cf part. I have a cfc with a function<br>&lt;cffunction name="insertImageLocation" access="remote" &gt;</p><p>&lt;cfargument name="picToUpload" type="string" required="no"&gt;<br>        &lt;cfset var cffile = ""&gt;</p><p>&lt;cffile action="upload" filefield="#arguments.picToUpload#" destination="d:\home\<a href="http://disq.us/url?url=http%3A%2F%2Fchi.am%3Aj_s48BZ5A3VryIMGzq-gOmxeKDY&amp;cuid=3321886" rel="nofollow noopener" title="chi.am">chi.am</a>\wwwroot\testimages" nameConflict="makeUnique" result="upload"&gt;</p><p>&lt;/cffunction&gt;</p><p>What am i missing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673216">90</a> by Raymond Camden
		posted on 7/5/2011 at 5:57 AM
		</div>
		<div class="comment_text"><p>Well, you didn't say how it was failing. Remember that filefield is supposed to be a form field name. So you probably wan't</p><p>&lt;cffile action="upload" filefield="arguments.pictoUpload" ... &gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673212">91</a> by Mika
		posted on 7/5/2011 at 10:28 AM
		</div>
		<div class="comment_text"><p>It just does not upload. I really dont know how to catch that error. <br>I've used a sample from Matt's blog:<a href="http://disq.us/url?url=http%3A%2F%2Fwww.chaosm.net%2Fblog%2F2011%2F06%2F04%2Fflex-mobile-upload-photo-to-server-with-php%2F%3AaZ56U7kxJsvvssEIC8xG2rbzALE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.chaosm.net/blog/2011/06/04/flex-mobile-upload-photo-to-server-with-php/">http://www.chaosm.net/blog/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673224">92</a> by Mika
		posted on 7/5/2011 at 10:29 AM
		</div>
		<div class="comment_text"><p>I just want have it to post to cfc, so i can send more arguments to function, say insert a data to DB.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673223">93</a> by Raymond Camden
		posted on 7/5/2011 at 2:53 PM
		</div>
		<div class="comment_text"><p>First, try the change I suggested. Secondly, check your CF logs. You can catch the error back in Flex, but it may be quickest just to look at your CF log files to see the error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673225">94</a> by James Menendez
		posted on 8/31/2011 at 11:40 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I read through the thread and comments and I don't see a solution to a problem I am having that some people were also experiencing.</p><p>I have an issue where large files are timing out during an upload. My clients don't understand how to downsize images from 300 to 72 dpi so this gets very frustrating as it makes it look to them like my system is "broken".</p><p>Do you know of any solution whatsoever to either a) restrict someone from uploading a large file, or b) actually allow a large file to be uploaded. I would prefer a solution to 'b' of course but 'a' would be fine as well. :)</p><p>Any help would be extremely appreciated. btw I am on CF9.</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673228">95</a> by Raymond Camden
		posted on 8/31/2011 at 11:48 PM
		</div>
		<div class="comment_text"><p>Why not just use maxuploadsize?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673229">96</a> by James Menendez
		posted on 8/31/2011 at 11:58 PM
		</div>
		<div class="comment_text"><p>I am not using &lt;cffileupload&gt; because I am submitting a form which has other elements which need to be inserted into a db table for records and such.</p><p>I might be a complete idiot but you can't use a form with &lt;cffileupload&gt;...can you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673230">97</a> by Raymond Camden
		posted on 9/1/2011 at 12:00 AM
		</div>
		<div class="comment_text"><p>You are absolutely NOT an idiot. It's a subtle issue - cffileupload - the control I should say, is its "own process" so to speak. So can you use it with other form elements. Yes - if you are careful. Please try this guide:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2010%2F3%2F5%2FColdFusion-9-Multifile-Uploader--Complete-Example%3AVtmFoO_3vQV8cu_fok99CAna6ow&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2010/3/5/ColdFusion-9-Multifile-Uploader--Complete-Example">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673231">98</a> by James Menendez
		posted on 9/1/2011 at 12:42 AM
		</div>
		<div class="comment_text"><p>hmmm..</p><p>This is a great example. The problem I see with it is validation that the file was uploaded prior to submitting the form. Perhaps an ajax response could enable the submit button so they couldn't click it unless at least one file was uploaded?</p><p>The other thing I see as an issue with this is that people are stupid. In my particular instance only one file needs to be uploaded. Even if I set the maxfileselect to 1, it still appears as if they could upload multiple files. The uploader I am trying to implement is a one file only uploader.</p><p>I can't have my clients thinking they can upload multiple files in this case. *sigh*</p><p>Also, what the heck is "ram:///portfoliouploads"? Does this save it to the physical memory or ColdFusion memory?</p><p>Thanks again :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673233">99</a> by Raymond Camden
		posted on 9/1/2011 at 12:45 AM
		</div>
		<div class="comment_text"><p>If you are only trying to upload one file - why are you using... oh wait... you AREN'T using cffileupload. Nm - brain fart on my side. So that being said - you still need a way to control size. So maxfileselect is _not_ working for you?</p><p>ram:/// is part of the Virtual File System. It's a CF9 feature. It's a RAM based virtual file system.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673232">100</a> by James Menendez
		posted on 9/1/2011 at 12:53 AM
		</div>
		<div class="comment_text"><p>maxfileselect "works" as in it alerts the user that they can only select 1 file, but we are talking about users here. They wont get that. I can already hear the decries of "it's broken"...*shudders*</p><p>This little flexy interface is nice and all, and I will definitely use it for a multiple file upload system. However, uploading one file in a multiple file uploader seems kind of retarded. No disrespect :)</p><p>So yes, I am still stuck with limiting the file size of a user using &lt;input type="file"...</p><p>Perhaps then I could use this Virtual File System?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673234">101</a> by Raymond Camden
		posted on 9/1/2011 at 12:58 AM
		</div>
		<div class="comment_text"><p>The thing is - afaik - only the Flash SWF can get the size of the file before it's uploaded. It's not available in JS. You may have to simply deal with the users. You can add additional warnings above the control to make it more clear.</p><p>At some point - even clueless users - have to take _some_ responsibility for using a tool.</p><p>The VFS is not really related to your issue here. I mean you can use it - but it's not going to solve your concern if that makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673235">102</a> by Brett
		posted on 9/6/2011 at 10:11 PM
		</div>
		<div class="comment_text"><p>I have an issue using cffile upload with the overwrite attribute. Seems if the file is currently in use, an "Access denied." exception is thrown. Is there a way to handle this? I have a simple PDF uploader that an admin uses to update a seminar agenda. Looks like if the file is in an "open" state by a Web user, this exception occurs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673237">103</a> by Raymond Camden
		posted on 9/6/2011 at 10:15 PM
		</div>
		<div class="comment_text"><p>try/catch should handle it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673236">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673236">104</a> by Rajiv
		posted on 10/10/2011 at 1:09 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I am uploading file from Flex4.5 app to coldfusion8. I need to send one variable with the fileRef.upload so based on the documentation, I am creating URLvariable and assigning it to the <a href="http://disq.us/url?url=http%3A%2F%2FURLrequest.data%3A_3m980zdW-T17CmU3aBjjGsdm4E&amp;cuid=3321886" rel="nofollow noopener" title="URLrequest.data">URLrequest.data</a>    (Please see below)</p><p>private function uploadLessonFile():void<br>			{<br>				/* qnFigFileRef.addEventListener(Event.COMPLETE, completeHandler);<br>				qnFigFileRef.addEventListener(DataEvent.UPLOAD_COMPLETE_DATA,dataHandler); */</p><p>				var lessonUploadURL:URLRequest = new URLRequest();<br>				var params:URLVariables = new URLVariables();<br>				params.course = courseDropdown.selectedItem.courseID;</p><p>				//~~~~~~~~~~~  For initializing File upload parameters (qn fig and qn swf etc. and  setting event listners ~~~~~~~~~~~~~~~~~~~~~~~~~~~<br>				lessonUploadURL.url = configVars.lessonCFMPath;<br>				lessonUploadURL.method = "POST"; // OR "GET" as you need it<br>				<a href="http://disq.us/url?url=http%3A%2F%2FlessonUploadURL.data%3AIaZ9ui6P4FLDJ4GpCOvWPFz7Nr4&amp;cuid=3321886" rel="nofollow noopener" title="lessonUploadURL.data">lessonUploadURL.data</a> = params; <br>				lessonUploadURL.contentType = "multipart/form-data";</p><p>				lessonFileRef.addEventListener(SecurityErrorEvent.SECURITY_ERROR,securityErrorHandler);<br>				lessonFileRef.addEventListener(HTTPStatusEvent.HTTP_STATUS,httpStatusHandler);<br>				lessonFileRef.addEventListener(IOErrorEvent.IO_ERROR,ioErrorHandler);<br>				lessonFileRef.upload(lessonUploadURL,"Custom1");<br>			}</p><p>The corresponding CFM is</p><p>&lt;cfset req = getHTTPRequestData()&gt;<br>&lt;cffile action="upload" <br>		destination="C:\temp\AnsSwf" <br>			accept="application/octet-stream" FILEFIELD="Custom1" <br>				nameconflict="makeunique"<br>/&gt;</p><p>&lt;cfdump var="#req#" format="html" output = "/temp/uploadLesson.html"/&gt; <br>&lt;cfdump var='URL' format="html" output = "/temp/uploadLesson.html"/&gt;</p><p>&lt;cfdump var="#CFFILE#" format="html" output = "/temp/uploadLesson.html"/&gt;</p><p>The ISSUE is that I am not able to access the URL variables which I set from the flex app. It does upload the file correctly. When I do a CFDUMP of the #URL#, it is an empty structure.</p><p>Any thoughts?</p><p>Thank You,<br>Rajiv</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673238">105</a> by Raymond Camden
		posted on 10/10/2011 at 2:41 AM
		</div>
		<div class="comment_text"><p>Well, your dump is using "url", not "#URL#", so it won't work as is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673242">106</a> by Rajiv
		posted on 10/10/2011 at 7:24 PM
		</div>
		<div class="comment_text"><p>Hi Ray - I have tried all combinations  "#URL#", "#url#","URL", '#URL#' but nothing is working. Of course when I put "url", it dumps the string  "url" but in rest of the cases it just dumps an empty structure. (It does not throw any error).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673239">107</a> by Rajiv
		posted on 10/10/2011 at 7:48 PM
		</div>
		<div class="comment_text"><p>Hi Ray - I discovered the fix. I need to pass the method as "GET" (instead of "POST"). Thanks for your quick reply though.</p><p>This article is good and brings up some good points. <br>Thanks again/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673241">108</a> by JohnB
		posted on 2/19/2012 at 3:42 AM
		</div>
		<div class="comment_text"><p>Hello. What should the data type for "uploadfile" be? I ask because I received a number of errors after trying to upload a pdf and docx. One of the errors stated that I need a uploadfile field in my table. Now I am receiving the following error after I added the field to my table: Invalid content type: "application/x-www-form-urlencoded". CFFILE action="upload" requires forms to use enctype="multipart/form-data". I also do have the enctype correct on my form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673243">109</a> by Raymond Camden
		posted on 2/19/2012 at 8:30 AM
		</div>
		<div class="comment_text"><p>"One of the errors stated that I need a uploadfile field in my table."</p><p>This implies you are trying to write information to a table and to a column that doesn't exist. Therefore it should be simple - add the column.</p><p>"Invalid content type: "application/x-www-form-urlencoded". CFFILE action="upload" requires forms to use enctype="multipart/form-data""</p><p>Best I can say for that is to double check.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673240">110</a> by Ron
		posted on 4/5/2012 at 8:12 AM
		</div>
		<div class="comment_text"><p>Hi. What about uploading a file from a known location on the user's PC, without forcing them to select it first. I am specifically thinking of a logo file to be uploaded to an application which generates quotes on behalf of a Dealer. We don't want the hassle of keeping Logos up to date for the Dealers, so if they always put their current logo in, say, c:\logos\MyLogo.jpg we could just pick it up from there, and put it on our server prior to incorporating it into the generated document.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673244">111</a> by Raymond Camden
		posted on 4/5/2012 at 2:40 PM
		</div>
		<div class="comment_text"><p>You can't do this as it would be a security violation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673245">112</a> by Pankaj
		posted on 5/14/2012 at 12:52 AM
		</div>
		<div class="comment_text"><p>Hey Raymond,</p><p>I am getting error if I hit upload file button without selecting a file - "The form field fileUpload did not contain a file."<br>Is there anyway to fix this out quickly</p><p>Many Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673246">113</a> by Raymond Camden
		posted on 5/14/2012 at 3:19 PM
		</div>
		<div class="comment_text"><p>Sure -</p><p>&lt;cfif not structkeyExists(form, "fileupload") or not len(trim(form.fileupload))&gt;<br>some error msg<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673247">114</a> by Naisy
		posted on 10/17/2012 at 11:01 AM
		</div>
		<div class="comment_text"><p>Hello Ray,</p><p>I need a help. I am trying to browse a photo from Flex front end, upload &amp; rename it from upload.cfm file. Everything works fine till this. After that I have to get the  new name from upload.cfm to profile.mxml file, in order to save it in the Database.  <br>file.addEventListener("complete", fileUploaded);</p><p>file.upload(urlRequest,"filedata",false);</p><p>var urlRequest:URLRequest = new URLRequest("http://localhost:8500/profile/components/upload.cfm");</p><p>private function fileUploaded(event:Event):void{                <br>newImage.load("http://localhost:8500/profile/bin/applicantPics/"+<a href="http://disq.us/url?url=http%3A%2F%2Fevent.target.name%3AFZwF1CORulbZEQ78G8vAID_YgSg&amp;cuid=3321886" rel="nofollow noopener" title="event.target.name">event.target.name</a>);<br>Users_Photo.text = <a href="http://disq.us/url?url=http%3A%2F%2Fevent.target.name%3AFZwF1CORulbZEQ78G8vAID_YgSg&amp;cuid=3321886" rel="nofollow noopener" title="event.target.name">event.target.name</a>;<br>saveItem(this.detailObject);<br>}</p><p>Is there a way I can get the new filename from upload.cfm to profile.mxml.<br>Using the above code it is saving the old file name to the DB, as it happening in the front end.<br>Please help.</p><p>Many Thanks, Naisy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673248">115</a> by Raymond Camden
		posted on 10/17/2012 at 1:14 PM
		</div>
		<div class="comment_text"><p>The new name is returned in the CFFILE structure. (I forget the exact key name, but it should be detailed above.) Your CFM needs to output this. Your Flex code would get it in the response.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673249">116</a> by Naisy
		posted on 10/17/2012 at 1:37 PM
		</div>
		<div class="comment_text"><p>Many thanks. It worked. You are a star!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673250">117</a> by Naresh
		posted on 4/4/2013 at 10:21 AM
		</div>
		<div class="comment_text"><p>Hi <br>i am facing problem from long time i.e invalid content type:application/x-www-form-urlencoded even after keeping multipart/form-data even though i have used enctype="multipart/for-data" form</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673251">118</a> by Raymond Camden
		posted on 4/4/2013 at 3:20 PM
		</div>
		<div class="comment_text"><p>I assume you mean form-data, not for-data?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673252">119</a> by Curtis Eckhart
		posted on 2/7/2014 at 11:53 PM
		</div>
		<div class="comment_text"><p>Here is a question that's more about presentation than function. What controls the language rendered on the 'browse' button itself.</p><p>We have an application that uses CFFILE. we have set both the cf locale and the browser local to es-es, but the label on the browse button is 'BROWSE', not its spanish equivalent as we would expect. I can find no documentation about how to set the text on this label.</p><p>Can anyone offer advice?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673256">120</a> by Raymond Camden
		posted on 2/8/2014 at 12:25 AM
		</div>
		<div class="comment_text"><p>Remove CF from the equation. When you use a input/type=file on a HTML page, is it localized? Are you sure the browser settings are using your correct locale?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673257">121</a> by Raymond Camden
		posted on 2/8/2014 at 12:26 AM
		</div>
		<div class="comment_text"><p>You can also bind another UI item to a file upload control: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F1163667%2Fhow-to-rename-html-browse-button%3AbJhjx_jLrF2rbJhKJFIadCVwqIc&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/1163667/how-to-rename-html-browse-button">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673254">122</a> by Curtis Eckhart
		posted on 2/8/2014 at 12:53 AM
		</div>
		<div class="comment_text"><p>@Ray</p><p>re first question: It's localized and we set the browser locale, but have no way of knowing if the user overrides.</p><p>re your second comment... it's brilliant. You just gave me a couple of ideas; I'll write back after I've tried a couple of experiments. It didn't occur to me to 'fix it' at the browser side rather than the CF side. I've been trying to peek into an opaque box when I can just fix it after the HTML is rendered.</p><p>BTW, first time corresponding even though I've been working with ColdFusion for about 15 years and been following your work for a long time.</p><p>Your contribution to the community is immeasurable. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673255">123</a> by Raymond Camden
		posted on 2/8/2014 at 12:54 AM
		</div>
		<div class="comment_text"><p>"re first question: It's localized and we set the browser locale, but have no way of knowing if the user overrides."</p><p>But why would you care? If I (the user) really wants language X for my UI, why would you want to overrule me?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673258">124</a> by Curtis Eckhart
		posted on 2/8/2014 at 12:56 AM
		</div>
		<div class="comment_text"><p>LOL. Because the same customer is complaining that the button isn't rendering in Spanish.</p><p>Give them what they want, not what they're asking for. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673262">125</a> by Raymond Camden
		posted on 2/8/2014 at 1:04 AM
		</div>
		<div class="comment_text"><p>Then you'll probably have to use option 2 then - which sounds like it is something you like anyway. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1875032452">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_uOD6wgaTMZ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1875032452">126</a> (In reply to <a href="#c_1713673104">#50</a>) by MLipenk
		posted on 2/25/2015 at 5:19 PM
		</div>
		<div class="comment_text"><p>I know this thread is ancient, but it may be useful for others. In my experience, if the directory containing the file with this code does not have full write access, it will not create the directory. I know that on my server permissions are 775 by default for areas to which I have access.  If I run this code I get an error.  But if I change the directory to have permissions 777, the directory is created.  Once the sub directory is created, however, permissions of 775 on the parent directory, work just fine. All this presumes you have access to change permissions of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1875080991">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1875080991">127</a> (In reply to <a href="#c_1875032452">#126</a>) by Raymond Camden
		posted on 2/25/2015 at 5:47 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing - old post or not. :)</p></div>
	</div>
</div>
		