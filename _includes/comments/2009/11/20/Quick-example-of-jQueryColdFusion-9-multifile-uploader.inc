
<div class="comment" id="c_1713720026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720026">1</a> by Steve Caldwell
		posted on 12/11/2009 at 8:36 PM
		</div>
		<div class="comment_text"><p>did you try this in IE? my fileuploader works fine until I add oncomplete="handleComplete" then it breaks. nothing shows at all javascript error shows 'handleComplete' is undefined.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720030">2</a> by Raymond Camden
		posted on 12/11/2009 at 8:38 PM
		</div>
		<div class="comment_text"><p>If you switch my code in handleComplete to ONLY have alert('IE SUCKS') does it work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720032">3</a> by Steve Caldwell
		posted on 12/11/2009 at 8:53 PM
		</div>
		<div class="comment_text"><p>nothing happened when I added the alert up in the function, so I removed the entire script block and only included a basic alert in the oncomplete attribute.</p><p>&lt;code&gt;&lt;cffileupload url="./handlers/add_files.cfm?uuid=#url.uuid#" name="files" oncomplete="alert('IE SUCKS')"&gt;&lt;/code&gt;</p><p>I get the alert when the page first loads. the files _do_ upload in IE now but won't upload in FF, which previously was the only browser which would upload with the oncomplete attribute included.</p><p>the alert does NOT re-fire on each upload completion.</p><p>this tag is really picky.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720035">4</a> by Raymond Camden
		posted on 12/11/2009 at 9:06 PM
		</div>
		<div class="comment_text"><p>Ok, so I found the issue, for me, in IE. The dang console.log. It is Firebug only. When I removed it, it worked for me in IE.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720031">5</a> by Steve Caldwell
		posted on 12/12/2009 at 12:10 AM
		</div>
		<div class="comment_text"><p>just to follow-up, I got it working by removing the console.dir(res) as well</p><p>My issue isn't 100% solved but I have narrowed it down some more. I'm trying to load my swf uploader inside of a jQuery ui tab loaded via AJAX. Do you have much experience with the UI tabs and AJAX functionality? When I first load the page then click the tab with the uploader (tab 2) it doesn't show, but when I go click tab 3 then come back to tab 2, it shows, and uploads and js works fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720039">6</a> by Raymond Camden
		posted on 12/12/2009 at 1:23 AM
		</div>
		<div class="comment_text"><p>Got an example online?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720034">7</a> by Steve Caldwell
		posted on 12/12/2009 at 1:56 AM
		</div>
		<div class="comment_text"><p>no, I don't have any public facing CF9 servers...I'm going to go with a popup window to hold the uploader for now. Too much time wasted on this already.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720038">8</a> by Steve Caldwell
		posted on 12/14/2009 at 8:22 PM
		</div>
		<div class="comment_text"><p>I'm pretty noobish when it comes to Structs and Arrays, so please forgive the dumb question.</p><p>&lt;cfloop from="1" to="#listlen(form.filecount)#" index="i"&gt;</p><p>&lt;cfset fileTag[#i#] = {</p><p>      file = #form['file#i#']#, <br>      type = #form['filetype#i#']#</p><p>}&gt;</p><p>&lt;/cfloop&gt;</p><p>Gives me a nice array with a 2 key struct on each row.</p><p>How do I loop over each array row and pull out the 'file' and 'filetype' from the struct?</p><p>I tried this:</p><p>&lt;cfloop array="fileTag" index="i"&gt;<br>&lt;cfquery name="tagit" datasource="foo"&gt;<br>INSERT INTO files (baa_uuid, file_path, file_revision, file_type_id)<br>VALUES (#url.uuid#, '#fileTag.file[i]#', 1, '#fileTag.type[i]#')<br>&lt;/cfquery&gt;<br>&lt;/cfloop&gt;</p><p>but get...<br>500 java.lang.String cannot be used as an array</p><p>Am I heading in the right direction?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720033">9</a> by Steve Caldwell
		posted on 12/14/2009 at 10:47 PM
		</div>
		<div class="comment_text"><p>Ok I got a working solution for posting the file tag results to db</p><p>First, up in the handleComplete function, add this to the newrow var:</p><p>&lt;input type="hidden" name="filecount" value="1"&gt;</p><p>Then on the form post page:</p><p>&lt;cfloop from="1" to="#listlen(form.filecount)#" index="i"&gt;<br>&lt;cfset fileTag[#i#] = {file = #form['file#i#']#, type = #form['filetype#i#']#}&gt;<br>&lt;/cfloop&gt;<br>&lt;cfloop from="1" to="#ArrayLen(fileTag)#" index="i"&gt;<br>&lt;cfquery name="tagit" datasource="shebaa"&gt;<br>INSERT INTO files (uuid, file_path, file_revision, file_type_id)<br>VALUES ('#url.uuid#', '#form['file#i#']#', 1, '#form['filetype#i#']#')<br>&lt;/cfquery&gt;&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720036">10</a> by Steve Caldwell
		posted on 12/14/2009 at 11:34 PM
		</div>
		<div class="comment_text"><p>Sorry to keep rambling on ... but on my way back into the office just now I had a thought...why am I using an array when I just post the form values anyway? All I really was needing to do is count how many form fields were dynamically created.</p><p>So I can skip the whole array thing, and just use the length of my hidden form value...duh...</p><p>&lt;cfloop from="1" to="#listlen(form.filecount)#" index="i"&gt;<br>&lt;cfquery ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720037">11</a> by Raymond Camden
		posted on 12/15/2009 at 1:09 AM
		</div>
		<div class="comment_text"><p>I don't call that rambling. I call it 'talking it out' and 'documenting the process' - which to me I think is helpful to all my readers!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720040">12</a> by Alex Yohn
		posted on 12/21/2009 at 9:12 PM
		</div>
		<div class="comment_text"><p>I finally figured out how to capture each file from the cffileupload and enter them into a database without having to do a wrapper form.  For the cffileupload onComplete javascript, I have:</p><p>&lt;cfajaxproxy cfc="upload" jsclassname="jsobj" /&gt;<br>&lt;script language="JavaScript1.2"&gt;<br>	function addfile(supfiles){<br>		var upload = supfiles.FILENAME;<br>		var cfcUpload = new jsobj();<br>		cfcUpload.uploadfiles(upload);<br>	}<br>&lt;/script&gt;</p><p>The CFC is:</p><p>&lt;cfcomponent output="false"&gt;<br>&lt;!--- Record Uploaded File Details ---&gt;<br>	&lt;cffunction name="uploadfiles" output="false" access="remote" returntype="struct"&gt;<br>		&lt;cfargument name="fileupload" /&gt;<br>		&lt;cfquery name="addfile" datasource="#application.dsn#"&gt;<br>			INSERT INTO ext_supportfiles<br>			(programid, userid, filename)<br>			VALUES (#cookie.programid#, #cookie.userid#, '#arguments.fileupload#')<br>		&lt;/cfquery&gt;<br>	&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720043">13</a> by Alex Yohn
		posted on 12/22/2009 at 12:24 AM
		</div>
		<div class="comment_text"><p>Small problem, if you use the nameconflict="MakeUnique" option of the cffile uploadall process, you cannot capture the new Unique name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720045">14</a> by Raymond Camden
		posted on 12/22/2009 at 12:26 AM
		</div>
		<div class="comment_text"><p>Why? It isn't returned in the array?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720042">15</a> by Alex Yohn
		posted on 12/22/2009 at 12:29 AM
		</div>
		<div class="comment_text"><p>Not that I can find, only STATUS, MESSAGE, and FILENAME (orginial filename not unique filename).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720044">16</a> by Raymond Camden
		posted on 12/22/2009 at 12:36 AM
		</div>
		<div class="comment_text"><p>Are we talking about the same thing? I mean the result in cffile/action=uploadall. It should be an array of structs much like you get from cffile/action=upload.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720046">17</a> by Alex Yohn
		posted on 12/22/2009 at 12:43 AM
		</div>
		<div class="comment_text"><p>not really, when you use the cffileupload tag, it calls a processing url that contains the cffile uploadall, but only returns STATUS, MESSAGE, and FILENAME back to the originating cffileupload page.  You lose all of the cffile variables (in my particular case serverFile).  If you know a way to capture those and pass back to the originating file for the JS to run the CFC for the DB insert, I would be very interested.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720047">18</a> by Raymond Camden
		posted on 12/22/2009 at 12:46 AM
		</div>
		<div class="comment_text"><p>Right, that's what is returned to the client, but you should be able to get access to the original file object. The cffileupload tag actually sends one file at a time. On the CFM where you post to, use cffile/action=upload and if you cfdump that result to a file, you will see everything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720049">19</a> by Alex Yohn
		posted on 12/22/2009 at 12:52 AM
		</div>
		<div class="comment_text"><p>If I use cffile/action=upload, the cffileupload returns a 500 error.  If I use cffile/action=uploadall, the files upload, make unique names, but do not return any dump. Here is the page:<br><a href="http://disq.us/url?url=http%3A%2F%2Fzeus.wvu.edu%2Fsupport%2Fupload.cfm%3AfbfyLAP8Hnm28PuUtoGOOhf7P7k&amp;cuid=3321886" rel="nofollow noopener" title="http://zeus.wvu.edu/support/upload.cfm">http://zeus.wvu.edu/support...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720048">20</a> by Alex Yohn
		posted on 12/22/2009 at 12:55 AM
		</div>
		<div class="comment_text"><p>upload.cfm content:<br>&lt;cfajaxproxy cfc="Support.upload" jsclassname="jsobj" /&gt;</p><p>&lt;cffileupload <br>	name="SupportFiles"<br>	title = "Support Document Upload" <br>	align="center" <br>	BGCOLOR="FFFFFF"<br>	extensionfilter=".jpg,.doc,.docx,.pdf,.xls,.xlsx,.ppt,.pptx,.rtf,.txt"<br>    hideUploadButton="false" <br>	clearbuttonlabel="Clear List" <br>    deletebuttonlabel="Delete"<br>    addbuttonlabel="Add A File" <br>    uploadbuttonlabel = "Click to Upload" <br>    progressbar = "true" <br>    stoponerror = "false" <br>    url = "/support/processupload.cfm" <br>    height="400"<br>	width = "800" <br>    wmode = "window"<br>	onComplete="addfile"<br>	onError="errorissue"&gt;<br>&lt;/cffileupload&gt;</p><p>&lt;script language="JavaScript"&gt;<br>	function addfile(supfiles){<br>		var upload = supfiles.FILENAME;<br>		var cfcUpload = new jsobj();<br>		//alert(upload+' Uploaded Successfully.')<br>		cfcUpload.uploadfiles(upload);<br>	}<br>	function errorissue(supfiles){<br>		alert(supfiles.STATUS+': '+supfiles.MESSAGE);<br>	}<br>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720050">21</a> by Alex Yohn
		posted on 12/22/2009 at 12:55 AM
		</div>
		<div class="comment_text"><p>processupload.cfm content:</p><p>&lt;cffile action="uploadall" destination="D:\inetpub\wwwroot\Uploads" nameConflict="makeunique" result="supportfiles"<br>accept="jpg, doc, docx, xls, xlsx, rtf, txt, pdf"&gt;</p><p>&lt;cfdump var="#supportfiles#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720051">22</a> by Raymond Camden
		posted on 12/22/2009 at 1:07 AM
		</div>
		<div class="comment_text"><p>Don't dump to screen. Dump to a file (read the docs for cfdump, this was added in cf8).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720052">23</a> by Alex Yohn
		posted on 12/22/2009 at 1:15 AM
		</div>
		<div class="comment_text"><p>No joy...</p><p>struct [empty]</p><p>**************************************************************************</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720053">24</a> by Raymond Camden
		posted on 12/22/2009 at 1:23 AM
		</div>
		<div class="comment_text"><p>Show me the code for processupload.cfm again please?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720055">25</a> by Alex Yohn
		posted on 12/22/2009 at 1:27 AM
		</div>
		<div class="comment_text"><p>&lt;cffile action="uploadall" destination="D:\inetpub\wwwroot\Uploads" nameConflict="makeunique"<br>accept="jpg, doc, docx, xls, xlsx, rtf, txt, pdf"&gt;</p><p>&lt;cfdump var="#cffile#" output="d:\inetpub\wwwroot\support\dump.txt"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720056">26</a> by Raymond Camden
		posted on 12/22/2009 at 1:28 AM
		</div>
		<div class="comment_text"><p>If you switch to action=upload, what do you get? The multifile uploader actually only sends one file at a time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720058">27</a> by Alex Yohn
		posted on 12/22/2009 at 1:35 AM
		</div>
		<div class="comment_text"><p>Getting results, but not passing the SERVERFILE back to the originating page...should I move the CFC call to the processing page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720069">28</a> by Raymond Camden
		posted on 12/23/2009 at 7:04 AM
		</div>
		<div class="comment_text"><p>Ok, had to dig a bit. Your server-side can can send back the data, but it must follow the format the client side expects, ie, status and message. So you CAN'T send custom keys back, but you could send the data you want in status. Here is the code an Adobian sent me:</p><p>&lt;cffile action = "upload" destination = "#Expandpath('./uploads')#" nameconflict="makeunique"&gt;<br>&lt;cfset str = {}&gt;<br>&lt;cfset str.STATUS = 200&gt;<br>&lt;cfset str.MESSAGE = "File Upload Successful"&gt;<br>&lt;cfoutput&gt;#serializeJSON(str)#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720061">29</a> by Ryan Harris
		posted on 6/24/2010 at 1:45 AM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I used this code to try to return the correct filename from the server (cffile.serverfile) and received a 500 error.  Do you know of a way to get the server filename after the upload completes?  I would prefer not setting a session variable for this.  My issue seems to be the same as most people in this situation: I'm using makeunique on the cffile tag and the server filename is not returning to the calling page.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720059">30</a> by Raymond Camden
		posted on 6/28/2010 at 5:20 PM
		</div>
		<div class="comment_text"><p>Can you find more info about the error? Does Firebug show anything - do your CF logs show anything?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720062">31</a> by Ranga
		posted on 7/13/2010 at 1:05 AM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>I have the following code:</p><p>&lt;cffileupload extensionfilter="jpg,jpeg,gif,png,bmp,tiff,pdf" name="artfile" maxfileselect="1" title="Art" url="art.cfm?#urlEncodedFormat(session.urltoken)#" height="175" onError="dispError" onUploadComplete="uploadComplete" onComplete="uploadSuccess" addbuttonlabel="Add"&gt;</p><p>In art.cfm:</p><p>&lt;cffile action="upload" filefield="filedata" destination="#hiresdir#" nameconflict="makeunique" result="result"&gt;</p><p>&lt;cfif structKeyExists(form, "filedata")&gt;<br>        &lt;cffile action="upload" filefield="filedata" destination="#artdir#" nameconflict="makeunique" result="result"&gt;<br>	&lt;cfset str = {}&gt;<br>	&lt;cfset str.STATUS = 200&gt;<br>	&lt;cfset str.MESSAGE = "File Upload Successful"&gt;<br>	&lt;cfset str.FILENAME = result.serverFile&gt;<br>	&lt;cfoutput&gt;#serializeJSON(str)#&lt;/cfoutput&gt;<br>&lt;/cfif&gt;</p><p>When I do run the above code, I get "Error" in the progress of the uploader. But the file is uploaded to the correct path. When I comment &lt;cfoutput&gt;#serializeJSON(str)#&lt;/cfoutput&gt;, I don't get any error and I don't get the unique file name that got uploaded rather I get the filename that was uploaded from my machine.</p><p>Is there any way to get the unique filename passed from the server to JS? Since this is a flash based file uploader, I don't get anything available in the firebug console.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720064">32</a> by Raymond Camden
		posted on 7/13/2010 at 1:11 AM
		</div>
		<div class="comment_text"><p>Why do you have 2 uploads? That doesn't make sense. It may also be causing an error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720066">33</a> by Ranga
		posted on 7/13/2010 at 1:13 AM
		</div>
		<div class="comment_text"><p>My mistake there is only one cffile action="upload". The one inside the &lt;cfif structKeyExists(form, "filedata")&gt; is the correct one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720060">34</a> by Raymond Camden
		posted on 7/13/2010 at 1:15 AM
		</div>
		<div class="comment_text"><p>It works for me. Try this for your onError:</p><p>function dispError() {<br>	console.log('ERROR')<br>	console.dir(arguments)<br>}</p><p>and look in the dump. If you see an error there, check your exception.log.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720063">35</a> by Ranga
		posted on 7/13/2010 at 1:25 AM
		</div>
		<div class="comment_text"><p>Actually it kind of works for me too but in a weird way. But, what is happening is<br>1. the UI progress shows error.<br>2. onComplete JS runs, not the onError.<br>3. The filename returned is not the unique filename it is the filename I uploaded.</p><p>The CF 9 version I am running is ColdFusion 9,0,0,251028 standard edition.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720068">36</a> by Raymond Camden
		posted on 7/13/2010 at 1:28 AM
		</div>
		<div class="comment_text"><p>You sure the file is being renamed? Use cflog to log result.fileWasRenamed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720065">37</a> by Ranga
		posted on 7/13/2010 at 1:34 AM
		</div>
		<div class="comment_text"><p>The log output was YES.<br>07/12 14:33:48 Information [jrpp-446] - result.fileWasRenamed: YES</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720067">38</a> by Raymond Camden
		posted on 7/13/2010 at 1:37 AM
		</div>
		<div class="comment_text"><p>Also log servername - ensure it is different than what you are seeing.</p><p>Unfortunately _all_ of my machines are... um, not 9. So it may be a version update. You should check to see if you have the latest hot fixes, etc installed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720073">39</a> by Ranga
		posted on 7/13/2010 at 3:33 AM
		</div>
		<div class="comment_text"><p>It looks like FILENAME could never be changed. In the cf docs for the tag - onComplete: You can also pass the JavaScript object by creating a struct with parameters "status" and "message" and call serializeJSON() on the JavaScript object.</p><p>It doesn't say you can change FILENAME. So, I guess FILENAME can never be changed.</p><p>So, I've decided to pass the filename through message.</p><p>Secondly, the reason I was getting error on upload even though it was successful. I found that it was due to the fact that I had my debug output settings ON and it was messing with flash.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720071">40</a> by Ranga
		posted on 7/13/2010 at 4:34 AM
		</div>
		<div class="comment_text"><p>And Oh, it also doesn't this.secureJSON = "true" in Application.cfc</p><p>I need it for my other CFC calls. I don't know how to overcome it.</p><p>Thanks for your help, Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720070">41</a> by Raymond Camden
		posted on 7/13/2010 at 3:44 PM
		</div>
		<div class="comment_text"><p>If turning on secure JSON breaks, then the best you can do is file a bug report. All CF AJAX UI controls should work if that option is on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720078">42</a> by sfadullah
		posted on 10/26/2010 at 7:16 AM
		</div>
		<div class="comment_text"><p>hai ray,<br>it'm me again. i'm new to coldfusion. can u help me on my programming.  i try using the cffileupload to upload an image to the folder in server and in the same time i need to store the image name into the database. i using ms sql for the database.</p><p>if i just using the cffileupload to upload multiple image, it going well. but it i try to query the name, it giving me error 500. do u have any idea how to insert the filename to my database?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720072">43</a> by Raymond Camden
		posted on 10/27/2010 at 11:05 AM
		</div>
		<div class="comment_text"><p>Well if you use cffile/action-upload on the server side, you get access to the filename. It should just plain work. I'd need to know more about why you get an error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720075">44</a> by Mike
		posted on 10/27/2010 at 10:08 PM
		</div>
		<div class="comment_text"><p>this.secureJSON = "true" in Application.cfc breaks the upload.<br>actually the upload is done but then an error is thrown in the progress bar.</p><p>Thanks for the post. I was going nuts trying to figure this out</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720074">45</a> by Raymond Camden
		posted on 10/27/2010 at 10:18 PM
		</div>
		<div class="comment_text"><p>Ah yes - it preprends JSON results with a token. CF's built in AJAX stuff picks up on this automatically. You _can_ use it with jQuery stuff too - you just need to account for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720077">46</a> by Alam
		posted on 5/13/2011 at 9:21 PM
		</div>
		<div class="comment_text"><p>I'm trying to use the multifile script every thing is ok except $("table#detail").append(newRow) which is not appending any field on the detail table.</p><p>Can anyone help me please?</p><p>&lt;script type="text/javascript" src="<a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1%2Fjquery.min.js%3AmyXuj5h8gP7HzSEw76YxIcay7LQ&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js">http://ajax.googleapis.com/...</a>"&gt;&lt;/script&gt;<br>&lt;script&gt;<br>var counter=0</p><p>function handleComplete(res) {<br>	console.dir(res)<br>	if(res.STATUS==200) {<br>		counter++<br>		var newRow = '&lt;tr&gt;&lt;td&gt;&lt;input type="hidden" name="file_'+counter+'" value="'+res.FILENAME+'"&gt;'<br>		newRow += 'Label the file: '+res.FILENAME+' &lt;input type="text" name="filename_'+counter+'"&gt;&lt;/td&gt;&lt;/tr&gt;'<br>		$("table#detail").append(newRow)<br>	}<br>}<br>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720076">47</a> by Steve
		posted on 5/13/2011 at 9:29 PM
		</div>
		<div class="comment_text"><p>Alam,<br>Are you getting any js errors in the browser? Take out the console.dir(res) if you aren't using Firefox with Firebug</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720079">48</a> by Alam
		posted on 5/16/2011 at 5:28 PM
		</div>
		<div class="comment_text"><p>Steve, you r great! it's uploading successfully!! However, the progress bar displaying Error and Red color instead of green.</p><p>Thanks,<br>Alam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720080">49</a> by Steve
		posted on 5/16/2011 at 6:19 PM
		</div>
		<div class="comment_text"><p>Alam,<br>It is uploading successfully and still showing a red progress bar? What is the exact text of the error? Try a web debugger like Fiddler to see what is going on behind the scenes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720082">50</a> by Alam
		posted on 5/16/2011 at 6:48 PM
		</div>
		<div class="comment_text"><p>After commenting the following line it is working! Thank you Steve and also I would like to thank Raymond.<br>&lt;!---&lt;cfoutput&gt;#serializeJSON(str)#&lt;/cfoutput&gt;---&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720087">51</a> by Bill
		posted on 3/9/2012 at 12:09 AM
		</div>
		<div class="comment_text"><p>Ray,<br>I have something similar to your multi-file upload created and working but how can I pass the uploaded file paths to a database? Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720088">52</a> by Raymond Camden
		posted on 3/9/2012 at 4:49 PM
		</div>
		<div class="comment_text"><p>Well, when you use cffile to process the uploads, it gives you the paths to the uploads files. You can insert those paths into a database just like any other simple string.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720092">53</a> by misty
		posted on 5/2/2012 at 11:49 AM
		</div>
		<div class="comment_text"><p>Hi ray, I have an Interesting scenario here, I am using this tag fine. Now i have created one query to check if the uploaded images are already 5 for the passed ID, if yes, then cffileupload processing should be aborted. while, it keeps uploading all the files, when i click the upload button, any idea</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720091">54</a> by Raymond Camden
		posted on 5/2/2012 at 3:11 PM
		</div>
		<div class="comment_text"><p>I'd make the server throw an error (using cfthrow), and use the stoponerror option for cffileupload.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720086">55</a> by Misty
		posted on 5/12/2012 at 12:23 PM
		</div>
		<div class="comment_text"><p>Accomplished, Just added a query Before the cffileupload to check if images already 5, then show an message rather than upload, your cfabort showerror strategy is good, will try some other day.</p><p>Also, i have seen all your comments for above, But there seems to be trouble with the IE specific, because also i tried when i use onComplete, onUploadComplete, onError, it jsut hangs and shows nothing, not even the uploadfile flash thing</p><p>hope others have come out of some kind of hack to make it work</p><p>i am using IE 9, even tried this on IE 7 but failed</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720085">56</a> by Terry
		posted on 6/13/2013 at 5:51 AM
		</div>
		<div class="comment_text"><p>How do I get the file to upload to my web server?  Sorry for the entry level question.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720090">57</a> by Raymond Camden
		posted on 6/13/2013 at 5:56 AM
		</div>
		<div class="comment_text"><p>Eh? Are you asking how to even use the control? I'd say start with the related entries at the bottom of this entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720089">58</a> by Ed
		posted on 10/30/2013 at 5:59 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, this post was very helpful (yes even 3 years later!) to a beginner using for the first time cffileupload for multiple file handling onComplete.</p><p>By the way it was good to see you in person giving a talk at the NYCF meetup group in the city a while back.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720093">59</a> by Raymond Camden
		posted on 10/30/2013 at 8:19 PM
		</div>
		<div class="comment_text"><p>Thanks Ed, glad this was helpful.</p></div>
	</div>
</div>
		