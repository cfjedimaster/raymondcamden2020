
<div class="comment" id="c_1713711598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711598">1</a> by Scott
		posted on 1/23/2009 at 1:01 AM
		</div>
		<div class="comment_text"><p>Ahh, very nice. I hadn't realized this. If you're not running 8.0.1 you could utilize the technique that Dan outlines &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fblog.pengoworks.com%2Findex.cfm%2F2007%2F10%2F26%2FUsing-CFMAIL-to-send-attachments-stored-in-memory%3AufVchKVpTyQLxIKNnPesOCZ6_hY&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.pengoworks.com/index.cfm/2007/10/26/Using-CFMAIL-to-send-attachments-stored-in-memory">http://blog.pengoworks.com/...</a>"&gt;here&lt;/a&gt;.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711607">2</a> by Scott
		posted on 1/23/2009 at 1:03 AM
		</div>
		<div class="comment_text"><p>Whoops, try this: <a href="http://disq.us/url?url=http%3A%2F%2Fblog.pengoworks.com%2Findex.cfm%2F2007%2F10%2F26%2FUsing-CFMAIL-to-send-attachments-stored-in-memory%3AufVchKVpTyQLxIKNnPesOCZ6_hY&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.pengoworks.com/index.cfm/2007/10/26/Using-CFMAIL-to-send-attachments-stored-in-memory">http://blog.pengoworks.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711604">3</a> by tanguyr
		posted on 1/23/2009 at 1:04 AM
		</div>
		<div class="comment_text"><p>it has been a couple of years since i worked full-time with coldfusion, but it still just blows me away when i see stuff like this - regular cf devs take this for granted, but you just dynamically generated a pdf file and sent it via email in less than 10 lines of code. I have yet to see another web dev language that could do this (at least without enless lines of behind the scenes configuration).</p><p>Regs,<br>/t</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711618">4</a> by Jonathan
		posted on 1/23/2009 at 6:56 PM
		</div>
		<div class="comment_text"><p>argh!</p><p>I needed to do this in a project a couple months back and went to the trouble of using some nasty java class to send the email.</p><p>oh well, nice to know for the next time</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711619">5</a> by Brian W.
		posted on 2/10/2009 at 10:57 PM
		</div>
		<div class="comment_text"><p>I'm currently using this method to send pdf's within my company. I'm noticing the memory on the server starting to spike and hold pretty steadily now that word is getting around about my app.</p><p>My question is: Do you think it would be beneficial to clear the variable holding that document after its been sent? If so, can you advise on how to best accomplish this?</p><p>I'm already dynamically creating a unique "name" (w/in cflock) for the pdf so there would be no problem clearing it if you folks think that would help.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711621">6</a> by Raymond Camden
		posted on 2/11/2009 at 7:13 AM
		</div>
		<div class="comment_text"><p>Hmm, if you are generating the same PDF over and over again, it may be better to save it to the file system and use that version for future emails.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711620">7</a> by Brian W.
		posted on 2/12/2009 at 12:30 AM
		</div>
		<div class="comment_text"><p>Thanks for the reply Ray!</p><p>They're all unique reports based on the users selections; however, I lowered the session timeout and that seemed to have mitigated the high memory issue I was running into.</p><p>Thanks again, and keep up the amazing work. Your blog has helped me numerous times. I come here when I can't get "out side the box" for a little Coldfusion Jedi insight :)</p><p>Brian.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711697">8</a> by Michael Evangelista
		posted on 2/26/2009 at 10:36 PM
		</div>
		<div class="comment_text"><p>This is really helpful - I need to do something similar, with a twist... in this case the client is a small govt agency. They are developing some simple PDF forms in livecycle, and I'm learning how to integrate the PDF form submission with CF.</p><p>If possible, we'd like a user to submit a PDF form in their browser, and then we:</p><p>1) save the pdf to the server, looking just like the form they filled out, with their data in place</p><p>2) email a copy of same (once saved to server emailing is no problem - that's this blog entry!)</p><p>AND</p><p>3) extract just the data from the form (ala 'form.variablename' in cf), and save it to a database, separate from the actual PDF layout.</p><p>Can it be done?</p><p>I am just starting to play with their existing PDF forms and the 'submit' options seem somewhat limited... which makes me think I am missing something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711694">9</a> by Raymond Camden
		posted on 2/27/2009 at 9:10 PM
		</div>
		<div class="comment_text"><p>@ME - Yes, I think you just need to look into cfpdfform. I haven't played with it a lot, but it should allow for this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711692">10</a> by Michael Evangelista
		posted on 2/27/2009 at 10:17 PM
		</div>
		<div class="comment_text"><p>as usual, cf says in one tag or command what i couldn't even say very well in 12 lines.</p><p>I knew i could 'make' a pdf form with cfpdfform ( #1 below), but didn't realize it did these other things, too. Very cool, thanks.</p><p>+++<br>    *  Embed an interactive form created in Acrobat LiveCycle in a PDF document. You use the cfpdfform tag to embed the PDF form in a cfdocument tag.<br>    * Render an existing form created in Acrobat or LiveCycle. This includes prefilling fields from a database or an XML data file and processing form data from an HTTP post or PDF submission.<br>    * Extract or prefill values in stored PDF forms and save the output to a file or use it to update a data source.</p><p>+++</p><p>ps TOO weird. The captcha that came up for this reply was "m e"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711695">11</a> by George
		posted on 6/24/2009 at 1:20 AM
		</div>
		<div class="comment_text"><p>So glad I found this - just saved me a ton of work!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711693">12</a> by George
		posted on 6/24/2009 at 7:29 PM
		</div>
		<div class="comment_text"><p>So after I tried to implement - I realized that I am using 7 on this server.  Is there a similar method - or something like it - that can be used there?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711704">13</a> by Raymond Camden
		posted on 6/25/2009 at 4:30 PM
		</div>
		<div class="comment_text"><p>You can send mail with attachments in CF7 - you just can't use an in-memory variable like I did. You would need to save the data to the file system and then clean it up later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711703">14</a> by Andrew
		posted on 8/14/2009 at 2:50 PM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>I am getting the following error when attaching my cfdocument via the cfmailparam tag:<br>ByteArray objects cannot be converted to strings.</p><p>I know the pdf is being generated as I wrote it to desk to check this.  My code is as follows:</p><p>	&lt;cffunction name="sendPDF" output="false" access="public" returntype="struct"&gt;<br>		&lt;cfargument name="replyto_name" required="false" type="String" default=""&gt;<br>		&lt;cfargument name="replyto_email" required="false" type="String" default=""&gt;<br>		&lt;cfargument name="to_name" required="false" type="String" default="Admin"&gt;<br>		&lt;cfargument name="to_email" required="false" type="String" default="#application.settings.adminEmail#"&gt;<br>		&lt;cfargument name="subject" required="false" type="String" default="Form Email"&gt;<br>		&lt;cfargument name="type" required="false" type="String" default="html"&gt;<br>	    &lt;cfset var thepath = '#ExpandPath("images/giftvoucher/logo.jpg")#'&gt;<br>	    &lt;cfset var thepath2 = '#ExpandPath("images/giftvoucher/podplayshop.jpg")#'&gt;<br>	    &lt;cfset var logopath = '#ExpandPath("images/logo.jpg")#'&gt;<br>		&lt;cfset result.isSuccess = false&gt;<br>	    &lt;cfset result.message = "An unknown error occurred."&gt;<br>	    &lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fresult.data%3Aj5R619kvWJKIgosVyqNADKfqU_k&amp;cuid=3321886" rel="nofollow noopener" title="result.data">result.data</a> = ""&gt;<br>	    &lt;cfset thepath = '<a href="http://disq.us/url?url=http%3A%2F%2Fwww.mydomain.com%2Ftest%2Fimages%2Fgiftvoucher%2Flogo.jpg%27%3E%3Aa7oguEkoagx4PGc2AAhYQruiemg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mydomain.com/test/images/giftvoucher/logo.jpg'>">http://www.mydomain.com/tes...</a><br>	    &lt;cfset thepath2 = '<a href="http://disq.us/url?url=http%3A%2F%2Fwww.mydomain.com%2Ftest%2Fimages%2Fgiftvoucher%2Fpodplayshop.jpg%27%3E%3AOfpCGCvMZCnP0wcCboJf5dVCy7A&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mydomain.com/test/images/giftvoucher/podplayshop.jpg'>">http://www.mydomain.com/tes...</a><br>	    &lt;cfset logopath = '<a href="http://disq.us/url?url=http%3A%2F%2Fwww.mydomain.com%2Ftest%2Fimages%2Flogo.jpg%27%3E%3A8wMBLP9RebL_UmT45g1YVwgx154&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mydomain.com/test/images/logo.jpg'>">http://www.mydomain.com/tes...</a><br>	    &lt;cftry&gt;<br>		    &lt;!--- CREATE THE PDF ---&gt;<br>		    &lt;cfdocument format="PDF" name="voucherpdf"&gt;<br>			    &lt;cfoutput&gt;<br>				    &lt;div style="text-align:center;"&gt;<br>					    &lt;div style="width:700;border:1px solid orange;"&gt;<br>							&lt;div style="float:right;width:337px;text-align:left;"&gt;<br>								&lt;img src='<a href="http://disq.us/url?url=http%3A%2F%2Fwww.mydomain.com%2Ftest%2Fimages%2Fgiftvoucher%2Flogo.jpg%27%3AMoADyS0FwWbpFP-khGSQ-DZiIPg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mydomain.com/test/images/giftvoucher/logo.jpg'">http://www.mydomain.com/tes...</a> width='337' height='101' /&gt;<br>					   			&lt;img src='<a href="http://disq.us/url?url=http%3A%2F%2Fwww.mydomain.com%2Ftest%2Fimages%2Fgiftvoucher%2Fpodplayshop.jpg%27%3Afr2m_qUQu5TvtXHsSHgNhwP8Dq8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mydomain.com/test/images/giftvoucher/podplayshop.jpg'">http://www.mydomain.com/tes...</a> width='330' height='103' /&gt;<br>					   			&lt;p&gt;side content goes here&lt;/p&gt;<br>							&lt;/div&gt;<br>							&lt;div style="float:left;text-align:left;"&gt;<br>								&lt;p&gt;The main content will go here...&lt;/p&gt;<br>							&lt;/div&gt;<br>							&lt;br clear="all"/&gt;<br>						&lt;/div&gt;<br>					&lt;/div&gt;<br>				&lt;/cfoutput&gt;<br>			&lt;/cfdocument&gt;<br>		    &lt;!--- SEND THE MAIL ---&gt;<br>			&lt;cfmail to = "#ARGUMENTS.replyto_name#&lt;#ARGUMENTS.replyto_email#&gt;" from = "#application.settings.systemEmail#" subject = "#ARGUMENTS.subject#" server="#application.settings.smtpServer#" username="#application.settings.systemEmail#" password="#application.settings.systemEmailPassword#" type="html" replyto="#ARGUMENTS.to_name#&lt;#ARGUMENTS.to_email#&gt;"&gt;<br>				&lt;cfmailparam file='doc.pdf' contentID="#voucherpdf#"&gt;<br>				&lt;cfsavecontent variable="theEmail"&gt;<br>		   			&lt;cfoutput&gt;<br>		   				&lt;center&gt;<br>			   				&lt;cfmailparam file='#logopath#' contentid='mainlogo' disposition='inline' /&gt;<br>				   			&lt;img src='cid:mainlogo' width='400' height='130' alt='Company Name' /&gt;<br>				   			&lt;p&gt;Attached is your voucher.&lt;/p&gt;</p><p>				   			&lt;p&gt;Hope you enjoy spending it :)&lt;/p&gt;</p><p>							&lt;p&gt;Kind Regards&lt;/p&gt;<br>						&lt;/center&gt;<br>					&lt;/cfoutput&gt;<br>				&lt;/cfsavecontent&gt;<br>				&lt;cfoutput&gt;#theEmail#&lt;/cfoutput&gt;<br>	     	&lt;/cfmail&gt;<br>	     	&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fresult.data%3Aj5R619kvWJKIgosVyqNADKfqU_k&amp;cuid=3321886" rel="nofollow noopener" title="result.data">result.data</a> = #theEmail#&gt;</p><p>	     	&lt;cfcatch&gt;<br>		     	&lt;cfset result.message = '#cfcatch.message#'&gt;<br>			&lt;/cfcatch&gt;<br>	     &lt;/cftry&gt;<br>		&lt;cfreturn result&gt;<br>	&lt;/cffunction&gt;</p><p>The code calling this function is:</p><p>&lt;cfsilent&gt;<br>	&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fvariables.email%3A-dBz2qmWkq_9yJ6tzQrYl7n2bJI&amp;cuid=3321886" rel="nofollow noopener" title="variables.email">variables.email</a> = createObject("component","components.utility").sendPDF("MyName",APPLICATION.settings.ownerEmail)&gt;<br>&lt;/cfsilent&gt;<br>&lt;cfoutput&gt;<br>	#VARIABLES.email.message#<br>&lt;/cfoutput&gt;</p><p>Please point me in the right direction.<br>Thanks in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711702">15</a> by Raymond Camden
		posted on 8/14/2009 at 4:11 PM
		</div>
		<div class="comment_text"><p>The contentid value of cfmailparam is a string, not binary data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711698">16</a> by Andrew
		posted on 8/14/2009 at 4:13 PM
		</div>
		<div class="comment_text"><p>Ignore my previous post...</p><p>I was using 'contentID' instead on 'content'<br>&lt;cfmailparam file='doc.pdf' contentID="#voucherpdf#"&gt;<br>&lt;cfmailparam file='doc.pdf' content="#voucherpdf#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711701">17</a> by clicque
		posted on 10/20/2009 at 11:32 AM
		</div>
		<div class="comment_text"><p>I'm using a similor code to send dynamic pdf, i've a strange problem with the image background.  The two first pdf contains the images but all the other are not included.<br>Here is the code i'm using</p><p>&lt;cfloop list="#form.fournisseur_id#" index="index"&gt;<br>	&lt;cfquery name="Getfournisseur" datasource="#application.dsn#"&gt;<br>		SELECT * from fou<br>		WHERE fou_id=#index#<br>	&lt;/cfquery&gt;</p><p>&lt;cfdocument pagetype="A4" format="pdf" fontembed="yes"  backgroundvisible="true" name="annexe"&gt;<br>&lt;cfoutput&gt;<br>&lt;html&gt;<br> &lt;head&gt;<br> &lt;style &gt;<br>	.backgroundimage {<br>        background-image: url(/images/background.gif);<br>        background-repeat: no-repeat;<br>        height:2339px;<br>        width:1654px;<br>        position:absolute;<br>        top:-100px;	<br>        visibility: visible;<br>        left: -50px;<br>		z-index: 0;<br>}<br>&lt;/style&gt;<br>&lt;/head&gt;<br>  &lt;body&gt;</p><p>&lt;div class="backgroundimage"&gt;&lt;/div&gt;<br>&lt;div style="z-index:1; position:absolute;  font-size:33px; padding-left:50px;"&gt;<br>&lt;DIV style="padding-left:1000px; font-weight:bold; padding-top:500px; "&gt;<br>  #<a href="http://disq.us/url?url=http%3A%2F%2Fgetfournisseur.name%3AofRUrmRCtTpl2dyZALvndd4bZvc&amp;cuid=3321886" rel="nofollow noopener" title="getfournisseur.name">getfournisseur.name</a>#&lt;br&gt;<br>  #getfournisseur.adress#&lt;br&gt;<br> &lt;/div&gt;</p><p>	 &lt;p&gt;<br>	 #replace(form.contenu,"#chr(13)#","&lt;br&gt;","all")#<br>	 &lt;/p&gt;<br>    &lt;br&gt;&lt;br&gt;<br>&lt;/div&gt;<br> &lt;/body&gt;  <br> &lt;/html&gt;<br> &lt;/cfoutput&gt;<br> &lt;/cfdocument&gt;<br>  &lt;cfmail from="#application.from#" to="#<a href="http://disq.us/url?url=http%3A%2F%2Fgetfournisseur.email%3AIdI92Yi-S069hOW0rCYY-pll6CA&amp;cuid=3321886" rel="nofollow noopener" title="getfournisseur.email">getfournisseur.email</a>#" subject="info" type="HTML"&gt;<br>  &lt;cfmailparam file="annexe.pdf" content="#annexe#"&gt;<br>  &lt;/cfmail&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711699">18</a> by Anthony Escribens
		posted on 4/30/2010 at 12:59 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I tried your example and are having an issue opening the PDF file.  I get the following Adobe Reader error:</p><p>"Adobe Reader could not open 'document.pdf' because it is either not a supported file type or because the file has been damanged (for example, it was sent as an email attachment and wasn't correctly decoded)."</p><p>I checked the properties of the file and was listed to have a PDF Version: 0.0 (under the PDF tab).</p><p>My Coldfusion Email Client is SmarterMail sending to a GMAIL account, if this makes a difference.</p><p>Any suggestions?</p><p>Thanks!<br>Anthony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711700">19</a> by Raymond Camden
		posted on 4/30/2010 at 1:03 AM
		</div>
		<div class="comment_text"><p>First - add a line of code to save the PDF binary to the file system. See if the file is ok there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711706">20</a> by Anthony Escribens
		posted on 4/30/2010 at 3:48 PM
		</div>
		<div class="comment_text"><p>Ray - Saving the file before attaching it to cfmail seems to be doing the trick, but there is a way to generate the pdf and mail it without saving it?  Or is it best practice to first save the file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711696">21</a> by Raymond Camden
		posted on 4/30/2010 at 5:09 PM
		</div>
		<div class="comment_text"><p>Well, I wouldn't save it if you didn't need to. So - let's see why it didn't work for you. Are you running 801? (Note I said 801, not 8.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711705">22</a> by Anthony Escribens
		posted on 5/7/2010 at 7:06 PM
		</div>
		<div class="comment_text"><p>Sorry about the late response.  I just checked the server and are running version 8,0,1,195765.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711707">23</a> by Raymond Camden
		posted on 5/7/2010 at 7:18 PM
		</div>
		<div class="comment_text"><p>Ok, interesting. Um, well wow. I'm out of ideas. :) You can file a bug report with Adobe, but it definitely worked for me. But if your having success with using a 'real' file, for now then I'd just stick with that. Sorry I don't have a better answer.</p></div>
	</div>
</div>
		