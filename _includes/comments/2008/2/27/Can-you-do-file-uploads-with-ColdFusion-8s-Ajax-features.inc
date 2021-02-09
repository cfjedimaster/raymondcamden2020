
<div class="comment" id="c_1713677472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677472">1</a> by Don Q
		posted on 2/27/2008 at 10:48 PM
		</div>
		<div class="comment_text"><p>I think what throws people the most is why it wasn't included/integrated with CF8 and the EXT library, either at the time EXT didn't support it or Adobe didn't want to include it.  Regardless, it would have been nice if it was there when CF8 was released... mabye next time?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677466">2</a> by James Allen
		posted on 2/27/2008 at 11:04 PM
		</div>
		<div class="comment_text"><p>Wow, yet *another* perfectly timed blog post Ray!</p><p>I am about to build the user image upload facility on my site which makes heavy use of Ajax. Being able to upload without the need for a 'real' popup window will be very useful.</p><p>Thanks for the post - yet again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677471">3</a> by todd sharp
		posted on 2/27/2008 at 11:15 PM
		</div>
		<div class="comment_text"><p>I usually hit AjaxRain and search when I need something like this.</p><p>Check their category for upload:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fajaxrain.com%2Fsearch.php%3FseValc%3Dupload%3AdJJzFNCPapYLYb4GzZTPjdAThrI&amp;cuid=3321886" rel="nofollow noopener" title="http://ajaxrain.com/search.php?seValc=upload">http://ajaxrain.com/search....</a></p><p>Many choices there - and usually they're pretty good choices.</p><p>They also have the Ext widget that Don mentioned (direct link: <a href="http://disq.us/url?url=http%3A%2F%2Fextjs.com%2Flearn%2FExtension%3AUploadForm%29%3AFf-3rAxxqR0O1Y67b8Q_06dDfP8&amp;cuid=3321886" rel="nofollow noopener" title="http://extjs.com/learn/Extension:UploadForm)">http://extjs.com/learn/Exte...</a></p><p>I've yet to play with it, but maybe one of the CF/Ext projects will take on simplifying the widget with a custom tag?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677474">4</a> by todd sharp
		posted on 2/27/2008 at 11:16 PM
		</div>
		<div class="comment_text"><p>And for the record, I've submitted an ER a few months ago for CF next to bake this in...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677475">5</a> by Raul Riera
		posted on 2/27/2008 at 11:33 PM
		</div>
		<div class="comment_text"><p>I can do file uploads with CFDIV using Safari (dont know why it works on Safari)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677478">6</a> by Terry Schmitt
		posted on 2/28/2008 at 12:24 AM
		</div>
		<div class="comment_text"><p>While CF8 Ajax features are neat, I think it leads to a lot of developers not understanding technically what is really going on with the web page that they are creating. A lot of CF developers still don't know what Ajax is or what it is doing. They think it's some neat CF8 trick, but in reality is just basic web browser functionality. <br>I personally have elected to hand-code  using ExtJS 2.0 and have learned a tremendous amount about Javascript since as well as giving me more flexibilty. Which way is better? As always... It just depends.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677479">7</a> by Chris Dawes
		posted on 2/28/2008 at 4:43 AM
		</div>
		<div class="comment_text"><p>There's two ways people generally do this in extjs:</p><p>1) flash way (currently somewhat unstable: eg swfupload)<br>2) hidden iframe submit (via normal form post)</p><p>Ext 2.0.2 (out yesterday) now has a standard form submit, however cf8's version is 1.0 so you can use that to submit to a target of an iframe...</p><p>1.0 way...<br>Ext.get('form_id').fileUpload = true;<br>Ext.get('form_id').dom.submit();</p><p>in v2.0.2<br>Ext.get('form_id').standardSubmit = true;<br>Ext.get('form_id').submit();</p><p>or just add the standardSubmit: true config item and submit the normal extjs way :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677476">8</a> by Drew
		posted on 5/14/2008 at 6:48 PM
		</div>
		<div class="comment_text"><p>I have this working fine with a cfm page, but when I put it in a cfc page it complains about:<br>The cffile action="upload" requires forms to use enctype="multipart/form-data".</p><p>The upload goes through fine, but no manner of cftry/cfcatch will prevent this error from being returned.  Surely this can be done in a cfc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677482">9</a> by Raymond Camden
		posted on 5/14/2008 at 6:54 PM
		</div>
		<div class="comment_text"><p>How are you using the CFC? Does your form post right to the CFC?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677481">10</a> by Gavy
		posted on 12/28/2008 at 5:19 PM
		</div>
		<div class="comment_text"><p>Hi ray!!!</p><p>I used your Code above as shown by You. I used the as same and it return the result properly and file got uploaded. I made some changes like:</p><p>&lt;html&gt;<br>&lt;head&gt;<br>&lt;script src="ajax/jquery.js"&gt;&lt;/script&gt;<br>&lt;script src="ajax/ajaxfileupload.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript"&gt;<br>	function ajaxFileUpload()<br>	{<br>		$("#loading")<br>		.ajaxStart(function(){<br>			$(this).show();<br>		})<br>		.ajaxComplete(function(){<br>			$(this).hide();<br>		});</p><p>		$.ajaxFileUpload<br>		(<br>			{<br>				url:'doajaxfileupload.cfm',<br>				secureuri:false,<br>				fileElementId:'fileToUpload',<br>				dataType: 'json',<br>				success: function (data, status)<br>				{<br>					if(typeof(data.error) != 'undefined')<br>					{<br>						if(data.error != '')<br>						{<br>							alert(data.error);<br>						}else<br>						{<br>							alert(data.msg);<br>						}<br>					}<br>				},<br>				error: function (data, status, e)<br>				{<br>					alert(e);<br>				}<br>			}<br>		)</p><p>		return false;</p><p>	}<br>	&lt;/script&gt; <br>    &lt;link href="style.cfm" rel="stylesheet" type="text/css"&gt;<br>&lt;cfif IsDefined('form.cat_ID')&gt; <br>	&lt;cfif form.cat_ID EQ 2&gt;<br>          &lt;cfset commitIt = "Yes"&gt;<br>          &lt;cftransaction action="begin"&gt;<br>            &lt;cftry&gt;<br>              &lt;cfinvoke component="core.cfc.front" method="chknew" argumentcollection="#form#" returnvariable="chkResults"/&gt;<br>              &lt;cfif chkResults.recordcount&gt;<br>              &lt;cfelse&gt;<br>              &lt;cfinvoke component="core.cfc.front" method="addnew argumentcollection="#form#" returnvariable="getResults"/&gt;<br>              &lt;/cfif&gt;<br>              &lt;cfcatch type="database"&gt;<br>                &lt;cftransaction action="rollback"/&gt;&lt;cfset commitIt = "No"&gt;<br>              &lt;/cfcatch&gt;<br>            &lt;/cftry&gt;<br>            &lt;cfif commitIt&gt;<br>              &lt;cftransaction action="commit"/&gt;&lt;/cfif&gt;<br>          &lt;/cftransaction&gt;<br>          &lt;cfif getResults EQ True&gt;<br>            &lt;cfset emsg = "Cool! Your contents Has Been Submitted"&gt;<br>          &lt;/cfif&gt;<br>      &lt;/cfif&gt;<br>	  &lt;/cfif&gt;<br>&lt;/head&gt;<br>&lt;body&gt;<br>  &lt;img id="loading" src="ajax/loading.gif" style="display:none;"&gt;<br>      &lt;cfform name="form" action="" method="POST" enctype="multipart/form-data"&gt;<br>      &lt;table width="100%" cellpadding="0" cellspacing="0" class="tableForm"&gt;<br>         &lt;tr&gt;<br>            &lt;td&gt;Upload Picture File:&lt;/td&gt;<br>         &lt;/tr&gt;<br>      &lt;tbody&gt;   <br>         &lt;tr&gt;<br>            &lt;td&gt;&lt;input id="fileToUpload" type="file" size="45" name="fileToUpload" class="input" tabindex="1"&gt;&lt;/td&gt;   <br>         &lt;/tr&gt;<br>      &lt;/tbody&gt;<br>         &lt;tfoot&gt;</p><p>            &lt;tr&gt;<br>              &lt;td&gt;Title:&lt;/td&gt;<br>            &lt;/tr&gt;<br>            &lt;tr&gt;<br>              &lt;td&gt;&lt;cfinput type="text" name="title" id="title" tabindex="2"&gt;<br>			  &lt;cfinput type="hidden" name="cat_ID" value="2"&gt;<br>			  &lt;/td&gt;<br>            &lt;/tr&gt;<br>            &lt;tr&gt;<br>              &lt;td&gt;Contents:&lt;/td&gt;<br>            &lt;/tr&gt;<br>            &lt;tr&gt;<br>              &lt;td&gt;&lt;textarea name="jcontents" id="jcontents" tabindex="3" cols="30" rows="5" title="Contents"&gt;&lt;/textarea&gt;&lt;/td&gt;<br>            &lt;/tr&gt;<br>            &lt;tr&gt;<br>               &lt;td&gt;&lt;cfinput name="uploadbutton" type="button" class="submitbtn" id="uploadbutton" onClick="return ajaxFileUpload();" value="Upload"&gt;&lt;/td&gt;<br>            &lt;/tr&gt;<br>         &lt;/tfoot&gt;<br>   &lt;/table&gt;<br>      &lt;/cfform&gt;    <br>&lt;/body&gt;<br>&lt;/html&gt;</p><p>here is the contents of doajaxupload.cfm as:</p><p>&lt;cfset r = structNew()&gt;<br>&lt;cfset r["msg"] = ""&gt;<br>&lt;cfset r["error"] = ""&gt;</p><p>&lt;cfif structKeyExists(form, "fileToUpload") and len(form.filetoupload)&gt;<br>   &lt;cffile action="upload" filefield="fileToUpload" destination="#expandPath("./")#" nameconflict="makeunique"&gt;<br>   &lt;cfset r["msg"] = "Your file was #file.clientfile# and had a size of #file.filesize#."&gt;<br>&lt;cfset form.uploadfile = #cffile.ServerFile#&gt;<br>&lt;cfelse&gt;<br>   &lt;cfset r["error"] = "No file was uploaded."&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfoutput&gt;#serializeJSON(r)#&lt;/cfoutput&gt;</p><p>i tried to do a upload but it says:</p><p>ajaxFilefunction() is undefined. i use firebug to figure out the error:</p><p>and it does not work that way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677480">11</a> by Raymond Camden
		posted on 12/29/2008 at 10:12 PM
		</div>
		<div class="comment_text"><p>Well, if the error says ajaxFilefunction(), then somewhere your code is calling it. I don't see it in the code snippet above, but something is calling it. Use your file search. FYI, I'd probably refrain from such large code pastings on the blog. Makes it a bit hard to read. In the future I'd recommend pastebin if your code is more than 5 lines or so.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677488">12</a> by todd sharp
		posted on 12/29/2008 at 10:35 PM
		</div>
		<div class="comment_text"><p>I'd be willing to bet there is a call to that function in one of your embedded scripts - can you post those to pastebin and put a link here and maybe we can find the issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677484">13</a> by Gavy
		posted on 12/30/2008 at 6:07 PM
		</div>
		<div class="comment_text"><p>Sorry Guys, I really don't Know what this PASTEBIN is and Where I find it. But Ok i just paste the error what i am encountering. I just played with the code a little bit but almost the same as above posted:</p><p>i recieve and error:</p><p>ajaxFileUpload is not defined<br>onclick(click clientX=434, clientY=375)R%2BKS21...VBg%3D%3D (line 2)<br>[Break on this error] return ajaxFileUpload();</p><p>Also I am Calling the page <br>using &lt;cfdiv&gt;&lt;cfinclude template="page.cfm"&gt;&lt;/cfdiv&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677485">14</a> by Raymond Camden
		posted on 12/30/2008 at 6:47 PM
		</div>
		<div class="comment_text"><p>If you remove the &lt;cfdivs&gt; and have your main logic on a page as is, does it work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677490">15</a> by Gavy
		posted on 12/30/2008 at 6:57 PM
		</div>
		<div class="comment_text"><p>Yes! If I remove that &lt;cfdiv&gt;, it works but errors out!!!.</p><p>When i click upload button, the loading image start working and alert box pops up with a message [SyntaxError: syntax error], it does not show any line.</p><p>All in all i say it works without &lt;cfdiv&gt;</p><p>and how if i wanna make this work within &lt;cfdiv&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677486">16</a> by Raymond Camden
		posted on 12/30/2008 at 6:58 PM
		</div>
		<div class="comment_text"><p>You should have more of an error than that. Are you using Firefox and Firebug? If not, do so. Don't use IE.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677491">17</a> by todd sharp
		posted on 12/30/2008 at 7:09 PM
		</div>
		<div class="comment_text"><p>You'll have to import your scripts on the page that contains the cfdiv content...are you doing that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677465">18</a> by Gavy
		posted on 12/30/2008 at 7:16 PM
		</div>
		<div class="comment_text"><p>Yes i am importing all the tags. well using the &lt;cfajaximport tags="cfdiv"&gt;</p><p>So as ray suggested i removed that div and same error prompts out. i just copied the same above as it is but still syntax error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677464">19</a> by Raymond Camden
		posted on 12/30/2008 at 7:17 PM
		</div>
		<div class="comment_text"><p>You need to dig more into the error using Firebug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677483">20</a> by Gavy
		posted on 12/30/2008 at 7:28 PM
		</div>
		<div class="comment_text"><p>Ok! Ray i digged around, first off i disabled debugging and it worked somehow, when i click upload, it saif no file uploaded..</p><p>then i upload the picture i uploaded the file properly and at exact location.</p><p>Thereafter i tried uploading other file like doc file and clicked upload it gave me error :</p><p>same syntax error and then i tested in IE it error out same [object error].</p><p>only when i try uploading other than specified file like image files</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677489">21</a> by Gavy
		posted on 12/30/2008 at 7:43 PM
		</div>
		<div class="comment_text"><p>Hey Ray! Once i have uploaded the file, it appears on exact location but when the value&lt;cfoutput&gt;serializejson(r)&lt;/cfoutput&gt; is used, where i can see its details and how can i use the value in a form to put image name in database. like:</p><p>after cffile i used:</p><p>&lt;cfset msg = file.serverfile&gt;</p><p>bit confused around it</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677487">22</a> by Raymond Camden
		posted on 12/30/2008 at 7:54 PM
		</div>
		<div class="comment_text"><p>I'm confused too. So it sounds like you upload is ok now, but now you want to know how to save it to the db? If so - that question is really dependent on your application structure. You have access to all the file details in the cffile struct (please read the CF docs for full details), and you can easily do a db insert with those details. Again though - what you save, and how, is dependent on your site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677492">23</a> by Gavy
		posted on 1/1/2009 at 11:35 AM
		</div>
		<div class="comment_text"><p>Hi ray!!! Well I have been really struggling to make it work, i think i am missing something.</p><p>I Just moved my Code Logic Where form values are inserted to doajaxupload.cfm page but it still do not work.</p><p>I will not not post code here as it is already posted above and u told not to create a big Mess around Here, Still Here i Post the link where i have posted the changed info:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Ff74bc0442%3Ad7W9imMdsKJ2fjfbn0FG-a0UOjY&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/f74bc0442">http://pastebin.com/f74bc0442</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677498">24</a> by Raymond Camden
		posted on 1/2/2009 at 7:00 AM
		</div>
		<div class="comment_text"><p>What isn't working though?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677496">25</a> by Gavy
		posted on 1/2/2009 at 1:50 PM
		</div>
		<div class="comment_text"><p>File gets upload, but it does not transfer the form values to database. i trued using &lt;cfdump var="#form#"&gt;, but that interuppts the upload functionality.</p><p>So, cause troubling me is:</p><p>it does not reach form valus.</p><p>and no database insert is performed. it is breaking before cfinvoke,</p><p>well i am stuck there</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677495">26</a> by Raymond Camden
		posted on 1/2/2009 at 7:16 PM
		</div>
		<div class="comment_text"><p>Look at your code after the cfif.</p><p>&lt;cfset form.uploadfile = #cffile.ServerFile#&gt;<br>  &lt;cfif IsDefined('form.uploadbutton')&gt;<br>  &lt;cfif IsDefined('form.cat_ID')&gt;<br>  &lt;cfif form.cat_ID EQ 2&gt;</p><p>One of these are your problem. You should add &lt;cflog&gt; statements to record the values before the cfifs and see if they match what you think they should.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677494">27</a> by possum jones
		posted on 3/2/2009 at 1:36 AM
		</div>
		<div class="comment_text"><p>im using coldbox 2.6.1 and whenever i attempt to upload the file, i am receiving an "unexpected token &lt;" error upon submitting the upload. has anyone else seen this error?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677497">28</a> by Raymond Camden
		posted on 3/2/2009 at 2:43 AM
		</div>
		<div class="comment_text"><p>That's a syntax error. The error should contain more info and help you find the file/line with the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677499">29</a> by Meenakshi
		posted on 4/9/2009 at 8:45 PM
		</div>
		<div class="comment_text"><p>Ray, I am using this code and wondering how can I print the results of Cffile result on same page. I embeded the doAjaxFileUpload.cfm in the same page. it is working fine except this issue. My javascript code is in different file and I provided link here(ImageWindow.js)</p><p>Here's my code look like <br>&lt;html&gt;<br>&lt;head&gt;<br>&lt;title&gt;Ajax File Uploader Plugin For Jquery&lt;/title&gt;<br>&lt;script type="text/javascript" src="../js/jquery.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="../js/ajaxfileupload.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="../js/ImageWindow.js"&gt;&lt;/script&gt;<br>&lt;link rel="stylesheet" href="../css/thickbox.css" type="text/css" media="screen" /&gt;<br>&lt;script type="text/javascript"&gt;</p><p>&lt;/script&gt;   <br>&lt;/head&gt;<br>&lt;cfform&gt;<br>&lt;cfset r = structNew()&gt;<br>&lt;cfset r["msg"] = ""&gt;<br>&lt;cfset r["error"] = ""&gt;<br>&lt;cfoutput&gt;<br>   &lt;cfif isDefined("Form.fileToUpload") &gt;<br>&lt;cfif structKeyExists(form, "fileToUpload") and len(form.filetoupload)&gt;<br>   &lt;cffile action="upload" filefield="fileToUpload" destination="#expandPath("./PDF")#" nameconflict="makeunique" result="upload"&gt;<br>   &lt;cfset r["msg"] = "Your file was #file.clientfile# and had a size of #file.filesize#."&gt;<br>   &lt;cfdump var="#upload#"&gt;<br>&lt;cfelse&gt;<br>   &lt;cfset r["error"] = "No file was uploaded."&gt;<br>&lt;/cfif&gt;<br>&lt;/cfif&gt;<br>&lt;/cfoutput&gt;<br>&lt;/cfform&gt;<br>&lt;body&gt;</p><p>&lt;div id="wrapper"&gt;<br>&lt;div id="content"&gt;<br>   &lt;h1&gt;Ajax File Upload Demo&lt;/h1&gt;<br>   &lt;p&gt;Jquery File Upload Plugin - upload your files with only one input field&lt;/p&gt;<br>      &lt;img id="loading" src="loading.gif" style="display:none;"&gt;<br>      &lt;form name="form" action="" method="POST" enctype="multipart/form-data"&gt;<br>      &lt;table cellpadding="0" cellspacing="0" class="tableForm"&gt;</p><p>      &lt;thead&gt;<br>         &lt;tr&gt;<br>            &lt;th&gt;Please select a file and click Upload button&lt;/th&gt;<br>         &lt;/tr&gt;<br>      &lt;/thead&gt;<br>      &lt;tbody&gt;   <br>         &lt;tr&gt;<br>            &lt;td&gt;&lt;input id="fileToUpload" type="file" size="45" name="fileToUpload" class="input"&gt;&lt;/td&gt;</p><p>         &lt;/tr&gt;</p><p>      &lt;/tbody&gt;<br>         &lt;tfoot&gt;<br>            &lt;tr&gt;<br>               &lt;td&gt;&lt;button class="button" id="buttonUpload" onclick="return ajaxFileUpload();"&gt;Upload&lt;/button&gt;&lt;/td&gt;<br>            &lt;/tr&gt;<br>         &lt;/tfoot&gt;</p><p>   &lt;/table&gt;<br>      &lt;/form&gt;    <br>&lt;/div&gt;</p><p>&lt;/body&gt;<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677500">30</a> by Raymond Camden
		posted on 4/10/2009 at 5:49 PM
		</div>
		<div class="comment_text"><p>Um, not sure why you embedded it in the same page. If you look at my original code, it is very clear that I posted to _another_ CFM. Now, going from there, you can see I return a msg with the clientfile and filesize variables. If you wanted to return more, you just would. It is as simple as changing the r["msg"] line.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677501">31</a> by Martin Franklin
		posted on 4/14/2009 at 12:01 AM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>First off I’d like to thank you for the many great examples on your site. I’ve incorporated several into my own projects over the years. For this example upon successful upload I get a syntaxError: missing ; before statement pop-up msg, in lieu of confirmation of successful upload. I believe the source is from the JSON struct being returned back from CF. Any clues here would be greatly appreciated? I've copied your example code exactly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677502">32</a> by Raymond Camden
		posted on 4/15/2009 at 1:24 AM
		</div>
		<div class="comment_text"><p>When you use Firebug, what do you see in the result?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677503">33</a> by Martin Franklin
		posted on 4/15/2009 at 9:08 PM
		</div>
		<div class="comment_text"><p>Silly Gotcha</p><p>I figured out my problem. I am prefixing all my serialized JSON with a custom prefix. In order to get this work I simply remove the prefix. Something like this:) #RemoveChars(SerializeJSON(r, "false"),1,2)#</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677505">34</a> by Raymond Camden
		posted on 4/15/2009 at 9:12 PM
		</div>
		<div class="comment_text"><p>Ah, were you using CF8's built in json-prefix support?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677504">35</a> by Martin Franklin
		posted on 4/15/2009 at 10:00 PM
		</div>
		<div class="comment_text"><p>Yes, and as expected that prefix is added to all serializedJSON. Doh:) Thanks again for your commitment to the CF community. You ROCK dude!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677507">36</a> by Raymond Camden
		posted on 4/15/2009 at 10:05 PM
		</div>
		<div class="comment_text"><p>Interesting. So I've blogged about the json prefix stuff before. If you JUST use 'native' CF8 Ajax stuff, the client side code will auto-strip the prefix. But - I can see this really confusing you if you turn in on once (it can be enabled at the server), forget, and then switch to jQuery.</p><p>Awesome - got fodder for a new blog entry. Thanks Martin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677511">37</a> by Trojan
		posted on 5/18/2009 at 8:00 PM
		</div>
		<div class="comment_text"><p>Hi I have one question. I'm using fusebox framework and I am trying to get the url to point to another directory</p><p>url:'act_test.cfm' won't work.</p><p>the file test.cfm is in a different directory.</p><p>test.cfm snippet</p><p>            url:'/docs/divs/action/act_test.cfm?action=test',</p><p>And it keeps error out with a syntaxerror: Missing ; statement?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677506">38</a> by Raymond Camden
		posted on 5/19/2009 at 12:52 AM
		</div>
		<div class="comment_text"><p>We would have to see a lot more of the code. Maybe it makes since to use a pastebin type service and point us to it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677508">39</a> by Chad
		posted on 6/29/2009 at 8:23 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I'm struggling with this one. I hope you can clear some things up. I am following your example using the ajaxfileupload.js but it seems I contiue to get the IE dreaded 'object error' and FireFox 'Syntax blah blah'. I am not using a JSON prefix and I assume my error occurs when the script attempts to return the 'serializeJSON(r)'. The file uploads fine but no return is made to the js file I guess? Hoping for a Flash of Genius until your response.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677510">40</a> by Raymond Camden
		posted on 6/29/2009 at 9:55 PM
		</div>
		<div class="comment_text"><p>What does Firebug show you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677509">41</a> by Chad
		posted on 6/29/2009 at 10:02 PM
		</div>
		<div class="comment_text"><p>Nothing that I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677514">42</a> by Raymond Camden
		posted on 6/29/2009 at 10:05 PM
		</div>
		<div class="comment_text"><p>You should see some kind of network traffic request/response going on. If you have this online where I can see, I'll take a try.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677513">43</a> by Chad
		posted on 6/29/2009 at 10:09 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fshop.smwh.net%2Fapplication%2Fpublic%2Femployment%2Finc%2Finc_resume_upload.cfm%3A85bPIc6IFn98y3JCzMSh7beNsh8&amp;cuid=3321886" rel="nofollow noopener" title="http://shop.smwh.net/application/public/employment/inc/inc_resume_upload.cfm">http://shop.smwh.net/applic...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677515">44</a> by Chad
		posted on 6/29/2009 at 10:19 PM
		</div>
		<div class="comment_text"><p>Strange I can see the 'Net' response of {"MSG":"a","ERROR":""}, in Firebug and this appears to be well formed. Yet it does not return to the 'alert' in the javascript file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677519">45</a> by Chad
		posted on 6/29/2009 at 10:28 PM
		</div>
		<div class="comment_text"><p>A'ha, kinda hard to include all my debug output in the JSON. I seem to remember reading your article on Adobe about this, sorry for wasting your time other than if there is anyone else out there using the 'Enable Request Debugging Output' setting on a DEV server. Be sure to disable this or you'll get the object error with this example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677518">46</a> by Raymond Camden
		posted on 6/29/2009 at 10:30 PM
		</div>
		<div class="comment_text"><p>Glad you got it - had not had a chance to reply yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677517">47</a> by dino
		posted on 8/31/2009 at 7:14 PM
		</div>
		<div class="comment_text"><p>I used cfdiv with AJAX. caller.cfm calls content.cfm with some dynamic javascript.<br>But the problem is AJAX strips out javascript automatically. I can't include javascript in <br>caller.cfm page. How can I include javascript?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677523">48</a> by Raymond Camden
		posted on 8/31/2009 at 7:16 PM
		</div>
		<div class="comment_text"><p>You _can_ include JS, but when the content is loaded via AJAX, it must have function declarations. Ie, this is not allowed:</p><p>function foo() { ...}</p><p>However, you can rewrite them as so:</p><p>foo = function() { ... }</p><p>And this IS allowed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677524">49</a> by dino
		posted on 9/1/2009 at 12:30 AM
		</div>
		<div class="comment_text"><p>Wow! It works! Thank you so much. I've been stuck for this one the whole day. You are great!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677522">50</a> by Dave
		posted on 9/4/2009 at 1:43 AM
		</div>
		<div class="comment_text"><p>Hi there, thanks for this example it works a treat, however what happens if I also want to submit other fields in by form like an &lt;input type="text" name="name"&gt; basically any other form variables just get lost, is there any way of passing these as well over to the URL?  Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677526">51</a> by Raymond Camden
		posted on 9/4/2009 at 1:54 AM
		</div>
		<div class="comment_text"><p>It looks like this particular plugin supports ONLY sending the file. You will need to find another plugin to support sending additional info. There are probably a few hundred different ones out there now. :)</p><p>I've used this one most recently: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.uploadify.com%2F%3AzRelemeRYXwbnA52aoO6iUlUuaQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.uploadify.com/">http://www.uploadify.com/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677521">52</a> by Dave
		posted on 9/4/2009 at 2:03 AM
		</div>
		<div class="comment_text"><p>Thanks, I'll check it out</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677525">53</a> by minnur
		posted on 12/15/2009 at 8:18 AM
		</div>
		<div class="comment_text"><p>Hi,<br>I have the same problem with IE. When i am uploading file it shows "SyntaxError: Syntax error".<br>Does anybody know how to fix this issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677527">54</a> by aylin
		posted on 1/13/2010 at 3:14 PM
		</div>
		<div class="comment_text"><p>thanks for example. i tried to change name of file before upload .&lt;cffile action="upload" filefield="fileToUpload" destination="#expandPath("./#randString#.jpg")#" nameconflict="makeunique"&gt; but it work only one <a href="http://disq.us/url?url=http%3A%2F%2Fextension.how%3AHh58t7eFXXU_svFfdxjtUE1UwK0&amp;cuid=3321886" rel="nofollow noopener" title="extension.how">extension.how</a> can i get file ext before upload without using hidden field. #file.ClientFileExt# works after upload</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677529">55</a> by Raymond Camden
		posted on 1/13/2010 at 5:02 PM
		</div>
		<div class="comment_text"><p>You can't change a filename before you upload. You can, though, make destination dynamic on the extension portion as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677530">56</a> by aylin
		posted on 1/13/2010 at 8:48 PM
		</div>
		<div class="comment_text"><p>yes i want to make dynamic extension .can i get form.fileToUpload value with coldfusion functions ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677528">57</a> by Raymond Camden
		posted on 1/13/2010 at 8:58 PM
		</div>
		<div class="comment_text"><p>If you dump the result of the cffile upload, you will see a lot of variables referencing the file that was uploaded. Check that and you should see what you want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677533">58</a> by aylin
		posted on 1/13/2010 at 10:11 PM
		</div>
		<div class="comment_text"><p>ok thanks i ll do what you say :) but it isnt what i want to do because cffile.clientFileExt works after upload, doesnt it ? i should learn ext before upload <br>like this;<br>&lt;cffile action="upload" filefield="fileToUpload" destination="#expandPath("./#randString#.#???form.fileToUpload.ext ???#")#" nameconflict="makeunique"&gt;<br>thanks your replies again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677532">59</a> by Raymond Camden
		posted on 1/13/2010 at 10:20 PM
		</div>
		<div class="comment_text"><p>ColdFusion can't get the file name. It's server side. In client side code you CAN get the file name, but you can't set it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677535">60</a> by Dallas Smith
		posted on 7/18/2010 at 3:51 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Sorry to give you such a blast to the past on this one.</p><p>I have been playing with this solution all day and think it really is fantastic. What I have is a standard form which has many different fields all relating to an item on an order.</p><p>The user must upload two files to go with each item on the order. What I used your functionality here for was, to take the two uploads and let them load up onto the server while showing the progress loop graphic.  Then I load the name of the file (used make unique) into a hidden input on the form and I change some text on the screen saying it was loaded.</p><p>The user then completes the rest of the form, hits submit, the details are all loaded into a CF Structure and they are brought back to the page to load their next item.  Seems to work REALLY well with two exceptions.</p><p>1) if the file is 20mgs or larger, I get an error that says [object Error]. I can't figure out why it is failing based on the file size.</p><p>and</p><p>2) Because I need to take on two separate file uploads from the user per item they are inputting, I have two separate loading progress images on the page. They are named completely differently and the code is set up to reference whichever is appropriate based on the file being loaded, but every time the second file is added, it seems to trigger both progress images.</p><p>Here is the link to my code: <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2F2ykLmBPb%3AysM9gIa9MR38MRC58uSJaKMY5F4&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/2ykLmBPb">http://pastebin.com/2ykLmBPb</a></p><p>Any help would be HUGELY beneficial. Thank you so much Ray!</p><p>Dallas</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677531">61</a> by Raymond Camden
		posted on 7/21/2010 at 1:27 AM
		</div>
		<div class="comment_text"><p>I _think_ the second issue is due to what you are doing with ajaxStart. That method is meant to work with ANY Ajax request, not just one. So you've basically got a global method going on there. You would need to change that up a bit.</p><p>As for issue 1, I'd check the CF server logs. Or try using the Firebug/Chrome Dev tools JS console to dump out the error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677534">62</a> by Megan
		posted on 1/16/2013 at 9:42 PM
		</div>
		<div class="comment_text"><p>I realize this is a very old post and my question is not exactly about it but I am hoping you can provide insight</p><p>I am trying to integrate nicEdit <a href="http://disq.us/url?url=http%3A%2F%2Fnicedit.com%2F%3ArE6nGBWEB3RMflh8SyJMym6HCgo&amp;cuid=3321886" rel="nofollow noopener" title="http://nicedit.com/">http://nicedit.com/</a> into a CF application using a cf upload script instead of the default imageshack example for uploading images via the nicEdit upload image button</p><p>I just needed to point to the upload.cfm in the nicEdit settings and the code uploads the image to the desired location and then returns a JSON structure back as you demonstrated here in your post</p><p>e.g. {"error":"","width":"100","done":"1","msg":"","url":"\/images\/myimage.jpg"}</p><p>"url", "width", &amp; "done" are the same as returned by the PHP version of a demo upload script at: <a href="http://disq.us/url?url=http%3A%2F%2Fnicedit.com%2Fsvn%2Fnicedit%2Ftrunk%2FnicUpload%2Fphp%2FnicUpload.php%3AMGtYLSQalq23Xvxx0L7kRSrZa2I&amp;cuid=3321886" rel="nofollow noopener" title="http://nicedit.com/svn/nicedit/trunk/nicUpload/php/nicUpload.php">http://nicedit.com/svn/nice...</a></p><p>my problem is that the the returned link to the newly uploaded image is not picked up and inserted into the nicEdit textArea the same as when using the default imageshack upload and I just do not know anything about JSON (or PHP) in order to find out what is wrong so I can get this last step to fall into place</p><p>have you ever integrated a cf upload into nicEdit? if not can you suggest what I might do to be able to figure out where the problem lies and how to fix it (I am groping in the dark LOL) thanks for any direction you can give ~megan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677537">63</a> by Misty
		posted on 1/16/2013 at 10:54 PM
		</div>
		<div class="comment_text"><p>Hi Megan, I have seen Nicedit, Its pretty good, But you can always check the ckeditor with cffm file manager by rick roots. This integrates well with the editor and has nice functionality</p><p>Out of the Question you asked, Just a suggestion</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677536">64</a> by Megan
		posted on 1/16/2013 at 11:06 PM
		</div>
		<div class="comment_text"><p>Thanks :-) - Yeah I like CKeditor but for this I wanted something really small and light</p><p>just to add to my earlier post - I realized I forgot to surround my JSON output with &lt;script&gt; tags</p><p>&lt;cfoutput&gt;#serializeJSON(r)#&lt;/cfoutput&gt;&lt;/script&gt;</p><p>and now I get the alert "Failed to upload image" from the nicEdit.js however the image IS uploaded before I was just not getting anything so I consider this progress LOL</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677538">65</a> by Megan
		posted on 1/16/2013 at 11:43 PM
		</div>
		<div class="comment_text"><p>Yippee - I got it to work - the JSON result format it was looking for was like this</p><p>&lt;cfoutput&gt;{"upload": { "links": {"original": "#r['url']#"}, "image": {"width": "#r['width']#" } }}&lt;/cfoutput&gt;</p><p>the serializeJSON() function wasn't quite right and the php didn't indicate the right format I needed for the output</p><p>So SO Happy!! :D</p></div>
	</div>
</div>
		