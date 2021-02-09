
<div class="comment" id="c_1713722308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722308">1</a> by existdissolve
		posted on 3/6/2010 at 12:02 AM
		</div>
		<div class="comment_text"><p>Awesome example, as always.  Thanks!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722309">2</a> by John Sieber
		posted on 3/6/2010 at 2:21 AM
		</div>
		<div class="comment_text"><p>Thanks for this great write up! Two days in a row you have explained items on my to do list! I'm feeling lucky!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722311">3</a> by sandy
		posted on 3/9/2010 at 2:20 AM
		</div>
		<div class="comment_text"><p>Hi Ray!!<br>Thanks for this blog post. It's a great help for me. <br>Thank you <br>Appreciate your help every time.<br>Sandy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722313">4</a> by Andy Sandefer
		posted on 3/13/2010 at 12:13 AM
		</div>
		<div class="comment_text"><p>Thanks @Ray - good, clean and simple example</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722315">5</a> by Ben Nadel
		posted on 3/13/2010 at 4:23 AM
		</div>
		<div class="comment_text"><p>I know this is totally off-topic, but as I was reading this, it occurred to me that using the VFS to store the uploaded files would be a great way to prevent that LoadTesting hack that was going around a couple of months ago. Upload to the VFS - check file extensions and what not there - then move to the final "upload" directory.</p><p>Sorry for the random thought - great writeup.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722310">6</a> by Ben Nadel
		posted on 3/13/2010 at 4:27 AM
		</div>
		<div class="comment_text"><p>Oh, the other thought I had - I would not consider the need to explicitly pass the Session token as part of the upload processing URL a bug. Granted, it's ***not intuitive*** at all, but it is typical of most browser plugins (flash and activeX). The issue is that they don't post the browser cookies with their internal HTTP requests. As such, you need to tell it to post the cookie as a URL parameter.</p><p>Probably, what would be nice is if CFFileUpload had an "appendSessionToken" attribute or something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722312">7</a> by Raymond Camden
		posted on 3/13/2010 at 4:33 AM
		</div>
		<div class="comment_text"><p>@Ben1: Thanks - and yes, it is also a great temp folder for uploads in general. I do wish they had made VFS application specific. That way an application wouldn't have to worry about other apps using the same folders, _and_ it could rely on the app timeout for cleanup.</p><p>@Ben2: I'm reading "Clean Code", and one of the points it makes is to NOT be counterintuitive. If a dev thinks that something is going to behave a certain way, you should (normally), make the code act that way. I get your point about most MFUs requiring this though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722314">8</a> by Ben Nadel
		posted on 3/13/2010 at 4:35 AM
		</div>
		<div class="comment_text"><p>Agreed on the need to be intuitive. When I first ran into that bug trying to get XStandard (ActiveX WYSIWYG) to work, it probably took me a **WEEK** to figure out what the heck was going :)</p><p>In that case, upon reflection, perhaps it should, by default, append session tokens with the programmer's ability to turn it off (if they use custom session tokens or something else).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722317">9</a> by Marty Paoletta
		posted on 3/18/2010 at 10:59 PM
		</div>
		<div class="comment_text"><p>I have been wanting to set up a form for internet ads that includes an image file upload for a product shot, right on the form.  Your code looked like a great starting point. I downloaded, set up the project, and tested, including uploading a couple of images.  But I couldn't get past the form validation for the file upload. I kept getting the error: "You must upload at least one file."  I am an apprentice/intermediate cf8/cf9 coder</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722316">10</a> by Raymond Camden
		posted on 3/18/2010 at 11:03 PM
		</div>
		<div class="comment_text"><p>So, I assume you did upload some files, right? You chose them, and hit the upload button _on_ the MFU control, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722318">11</a> by Marty Paoletta
		posted on 3/19/2010 at 12:44 AM
		</div>
		<div class="comment_text"><p>Yup.<br>Then I hit the "send portfolio submission" button</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722319">12</a> by Raymond Camden
		posted on 3/19/2010 at 12:46 AM
		</div>
		<div class="comment_text"><p>So as you know, the code uses cfdirectory to check the virtual folder for your uploads. It is returning 0 for you. So we need to debug. First off, I'd add a butt load of CFLOGs. I'd add a cflog after line 17 that records session.myuploadroot. Compare that to fileupload.cfm. If you add a cflog in there as well to record the upload, you can compare directories. They SHOULD match, but start adding a bunch of logs to be sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722320">13</a> by Marty Paoletta
		posted on 3/20/2010 at 3:05 AM
		</div>
		<div class="comment_text"><p>Sorry. That one honestly went past me.  I am yet to be familiar with cflog, although I was able to successfully run the form by submitting the input fields first, getting the error thrown, then uploading an image.  Curious, but it worked.</p><p>I have a cf9 advanced class in May which should help me get up to speed.  Thank you for your willingness to help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722321">14</a> by Raymond Camden
		posted on 3/20/2010 at 4:19 AM
		</div>
		<div class="comment_text"><p>cflog is real simple. it takes a file argument and a text field. it then just adds the text to the file. It's a quick and dirty way to debug. So for example:</p><p>&lt;cflog file="application" text="The value of x is now #x#"&gt;</p><p>This will add a line of text to the Application.log file with the string specified above.</p><p>Does that make sense? Would a quick video demo help?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722323">15</a> by Marty Paoletta
		posted on 3/25/2010 at 8:55 AM
		</div>
		<div class="comment_text"><p>Wow! Sorry the reply took a bit..  I didn't expect you to respond. I am blown away that you did! Yes a video regarding log files certainly would help. Thank you for offering.  I feel like I am missing just a couple key elements and it would work wonderfully. Let me give a quick overview on the app and my stuck points:</p><p>The app I am creating uses a form for creating ad text and uploading an image for dealership specials. It has form fields like Ad headline, Ad details,  specifics for the Ad vehicle, like year, make , model, new used, blah,blah. I am using ORM and after the initial struggle, am loving it. Adding the upload UI on the same form using a custom tag was pretty simple and the files upload fine.</p><p>What I am struggling with is: <br>1. How to display the image and the file name beside the upload UI on the form asynchronously right after the upload, but before the form has been submitted. The div is ready to go, but the programmer is not...<br>2. Whatever size image has been uploaded, the image is re-sized to fit within 250px square (It doesn't need to be square, just the longest side no more than 250.)<br>3. Insert that freshly uploaded and modified image into the database.  Maybe even give a field to the user to rename?</p><p>What am I looking for? Since the image was just uploaded and not yet in the database, what's it called?</p><p>That's it in a nutshell. One other note: I am looking at your app and wondering if a session is needed.  I've wanted to learn how and why to use a session. But on this app, only one to two people at a time will be within admin.</p><p>Thank you in advance for your help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722325">16</a> by Raymond Camden
		posted on 3/29/2010 at 10:31 PM
		</div>
		<div class="comment_text"><p>1) You can use the onComplete function to provide a preview of the file uploaded. I can work up a demo for that. It may be a week or so before I get to it (this is a BAD week for me, details on why later), but it is doable.</p><p>2) Well that's just using imageResize, have you tried that</p><p>3) If you look at line 23, of the second to last code snippet, where I email stuff, that is basically the "I'm done, now do crap" part. That's where you would add additional logic. Remember that we used the VFS to store the images. You can copy these to a more permanent location and do any db inserts there. Really at that point it isn't an Ajax issue, it is a simple 'do what makes sense' issue.</p><p>4) The file is named based on the file upload result. We use nameconflict=overwrite so it will match the name of the user's file. Either way, remember that the cfdirectory result will have all the file names.</p><p>5) Yep, you definitely need to use sessions for my demo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722324">17</a> by Andrew Duvall
		posted on 4/7/2010 at 6:50 AM
		</div>
		<div class="comment_text"><p>ok, took me awhile to figure out why I couldn't get the sessions to work.  no matter what, I kept getting two DIFFERENT session instances; one from the form page and a different session instance on the URL being called from the cffileupload tag.   well, I discovered it only works when you go into the cfadmin and turn on:  Use J2EE session variables</p><p>I hope that bit of info helps others having session problems</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722326">18</a> by Raymond Camden
		posted on 4/7/2010 at 7:05 AM
		</div>
		<div class="comment_text"><p>Odd, session.urltoken should work with "Use J2EE" on or off.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722332">19</a> by Andrew Duvall
		posted on 4/8/2010 at 7:47 AM
		</div>
		<div class="comment_text"><p>well, i just might be incorrect afterall :)</p><p>Tonight, I just realized that the session is carrying over when using I.E.<br>but not firefox.</p><p>My implementation was a modification from your example here; but in my site, I don't use the onSessionStart, instead I have a cfwindow to authenticate a user; then upon successful login I call a proxy to set the session...</p><p>&lt;cfset session.myuploadroot = application.ramUploadRoot &amp; "/" &amp; session.member.getMemberID()&gt;<br>&lt;cfif not directoryExists(session.myuploadroot)&gt;<br>	&lt;cfdirectory action="create" directory="#session.myuploadroot#"&gt;<br>&lt;/cfif&gt;</p><p>I can't understand how my implementation would just not work in firefox.  I must be missing something here.  you have any thoughts?</p><p>this is my cffileupload tag:<br>	&lt;cffileupload extensionfilter="jpg,jpeg,gif,png,bmp,tiff" <br>		name="portfoliofiles" <br>		maxfileselect="5" <br>		onError="errorissue"		<br>		title="Portfolio Images" <br>		url="fileupload.cfm?nodeID=#nodeID#&amp;#urlEncodedFormat(session.urltoken)#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722329">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722329">20</a> by Andrew Duvall
		posted on 4/8/2010 at 8:08 AM
		</div>
		<div class="comment_text"><p>here's a cfdump from the form page with the cffileupload:<br>&lt;cfdump var="token on uploadImages.cfm: #session.urltoken#" output="c:\dump5.txt"&gt;</p><p>here's a cfdump from the top of the page that the cffileupload URL points to:<br>&lt;cfdump var="token on fileupload.cfm: #session.urltoken#" output="c:\dump5.txt"&gt;</p><p>and here is c:\dump5.txt after I upload an image:</p><p>token on uploadImages.cfm: CFID=11400&amp;CFTOKEN=49045761&amp;jsessionid=84308d6f4cb3951458c7764a5582227655c5 <br>************************************************************************************</p><p>token on fileupload.cfm: CFID=11000&amp;CFTOKEN=41029562&amp;jsessionid=8430eac9b961800584772a4e3b43691c1a5d <br>************************************************************************************</p><p>the above is the cfdump results from firefox,  as i said in my previous post, the results using I.E. show the same value for session.urltoken in the cfdumps.</p><p>thanks for any suggestions<br>Andrew</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722330">21</a> by Raymond Camden
		posted on 4/8/2010 at 8:47 AM
		</div>
		<div class="comment_text"><p>I know what it is - but can't take credit. It was mentioned on the Model-Glue listserv by Chris Blackwell. You need to urlEncoded the ENTIRE value passed to the url:</p><p>&lt;cffileupload url="#urlencodedformat("upload.cfm?upload=true&amp;foo=bar")#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722331">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722331">22</a> by Justin Yu
		posted on 7/13/2010 at 5:36 AM
		</div>
		<div class="comment_text"><p>@AndrewDuvall:  Thanks for the tip on turning on "Use J2EE session variables".  Fixed the session issue I had with the uploader in non-IE browsers.</p><p>@RaymondCamden:  I tried urlEncoding the entire url attribute's value before turning on "Use J2EE" and still got different session token from non-IE browsers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722335">23</a> by Michael
		posted on 8/5/2010 at 6:40 AM
		</div>
		<div class="comment_text"><p>Not sure what my problem is.  I'm having the Non IE Issue and have tried several variances of things suggested here.</p><p>I have  this for file up loader page<br>&lt;cffileupload url="insert_pictures.cfm?#urlEncodedFormat(session.urltoken)#" bgcolor="##0000" name="uploadfile" title="Image Uploader. Only *.jpg, *.gif Files. Max upload size at once 40MB" width="550px" extensionfilter="*.jpg, *.gif" align="center" onComplete="uploading" onUploadComplete="alluploaded" maxuploadsize="40" /&gt;</p><p>This on the process page</p><p>&lt;cffile action="upload"<br>destination="#Application.Root#BBQ\TeamFiles\#Session.TeamID#\images\events\#Session.EventTeamName#.jpg" nameconflict="makeunique" /&gt;</p><p>Works great in IE Not Firefox.    Which is surprising in itself. :)</p><p>Any thoughts greatly appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722336">24</a> by Michael
		posted on 8/5/2010 at 7:10 AM
		</div>
		<div class="comment_text"><p>Well problem solved  It appears using path from the root works<br>url="/bbq/maint/pictures/insert_pictures.cfm?#urlEncodedFormat(session.urltoken)#</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722338">25</a> by Juan Miguel Rubio
		posted on 10/7/2010 at 8:29 PM
		</div>
		<div class="comment_text"><p>I had the non IE problem, i had to enable the J2EE session variables to fix this.</p><p>Now it works, but i don't understand why i had to do this. I tried with different browsers and OSs. Without the J2EE sv the uploader worked on windows using IE and on any browser on mac. But it didn't work on any other browser on windows.</p><p>Does anybody know why this happens?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722337">26</a> by Darrin
		posted on 12/27/2010 at 5:52 PM
		</div>
		<div class="comment_text"><p>Good Day,<br>  I am trying to use the multiple file upload, but on the action part I need to load the file into a SQL DB.</p><p>For 1 file I did this:<br>&lt;cffile action="readbinary" file="#form.uploadFile#" variable="binaryFile" /&gt; <br>&lt;cffile action="upload"  destination="#application.UploadDir#" result="oUpload" nameconflict="overwrite" /&gt;<br>&lt;cffile action="delete" file="#Application.UploadDir##oUpload.serverFile#" /&gt;</p><p>How do I use the new cf9 multi file upload, and cffile uploadall to do the same?</p><p>Thanks,<br> Darrin</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722339">27</a> by Raymond Camden
		posted on 12/27/2010 at 7:48 PM
		</div>
		<div class="comment_text"><p>Remember that cffile uploadall returns an array of the results. You would simply loop through the array and process each file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722340">28</a> by Shawn McKee
		posted on 1/3/2011 at 5:32 AM
		</div>
		<div class="comment_text"><p>I am about to go insane with what I have finally determined is a configuration issue. If I put your example in my webroot (/Library/WebServer/Documents/) in the subdirectory 'demo' and run it from http://localhost/demo everything is just fine. But if I add a vhost entry for Apache and the appropriate hosts file entry as well and then run it as http://demo I get a blank screen where the Flash widget belongs. This clearly has bigger implications for any and all CFAjaxian stuff. Please help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722342">29</a> by Raymond Camden
		posted on 1/3/2011 at 6:01 AM
		</div>
		<div class="comment_text"><p>In your virtual host, or at root level, create a mapping for /CFIDE.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722341">30</a> by Shawn McKee
		posted on 1/3/2011 at 6:57 AM
		</div>
		<div class="comment_text"><p>Doh! Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722344">31</a> by Brad
		posted on 1/24/2011 at 5:06 AM
		</div>
		<div class="comment_text"><p>Perhaps I am missing something simple, but I downloaded and ran on my own CF9 web server, and when I hit upload after selecting a file, nothing happens. The bar just stays still. Any ideas on how to debug this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722343">32</a> by Raymond Camden
		posted on 1/24/2011 at 7:17 AM
		</div>
		<div class="comment_text"><p>Use a network monitor tool like Charles or Service Capture. This can tell you what - if any - response was sent back from the server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722345">33</a> by Brad
		posted on 1/24/2011 at 10:28 PM
		</div>
		<div class="comment_text"><p>Thanks - will do! Also of note, I am now getting a red bar on the first file progress bar if uploading multiple files. Does this point to anything specific?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722346">34</a> by Raymond Camden
		posted on 1/24/2011 at 10:30 PM
		</div>
		<div class="comment_text"><p>Should be an error. Check out the response in Charles. You can also check your CF application log for a logged error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722347">35</a> by Brad
		posted on 1/25/2011 at 9:39 PM
		</div>
		<div class="comment_text"><p>Thanks for your help! My application.cfc in a parent folder seemed to be mucking with your application. Once I moved it out, it worked fine!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722351">36</a> by Doug
		posted on 2/3/2011 at 6:10 AM
		</div>
		<div class="comment_text"><p>Hi Ray -</p><p>I am working with the Multi-file uploader and the cffile action="uploadall" and I can get the basic functionality working. Which is a fine start, but I have a couple of questions for you regarding where I go next.</p><p>1) In Comment #27 - You mention that uploadall returns an array.  How does one view the array?  Since the page that processes the uploaded files is never seen, doing a dump is not the easiest.  Any suggestions?</p><p>2) In your fileupload.cfm, you use action="upload".   Should that be Uploadall or does the upload give you better file controls?</p><p>The reason I ask is that I want to receive any number of files from any number of users, store the files names in my DB, create a new truly unique name, and then store that name and those files on S3.</p><p>Any and all insight is always appreciated.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722349">37</a> by Raymond Camden
		posted on 2/5/2011 at 2:48 AM
		</div>
		<div class="comment_text"><p>1) You can dump to a file. That's one way.</p><p>2) So that's the thing, uploadall works if you have N file uploads in the form page. But guess what - the Flash based uploader actually does one POST at a time. So you really just need upload. Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722350">38</a> by Doug
		posted on 2/6/2011 at 4:15 AM
		</div>
		<div class="comment_text"><p>Hi Ray -</p><p>On part 2... thanks for the info.  I do appreciate it.</p><p>Ok, thanks.  I have an idea about what I can try.</p><p>Is the fileUpload page called everytime the flash uploader processes each file?</p><p>So if the Flash uploader has 10 files to work with, <br>the processing page gets called 10 times also?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722348">39</a> by Raymond Camden
		posted on 2/6/2011 at 8:05 AM
		</div>
		<div class="comment_text"><p>You are right - if you upload 10 files you will have 10 requests.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722353">40</a> by Gene Godsey
		posted on 5/3/2011 at 7:37 PM
		</div>
		<div class="comment_text"><p>So In order to get the file name I would need to use the onComplete attribute as a call to a JavaScript file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722352">41</a> by Raymond Camden
		posted on 5/3/2011 at 8:32 PM
		</div>
		<div class="comment_text"><p>Are you talking about the filename as it is in the control or the filename after it's been uploaded?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722354">42</a> by Gene
		posted on 5/3/2011 at 9:19 PM
		</div>
		<div class="comment_text"><p>The filename after it's been uploaded to the server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722355">43</a> by Raymond Camden
		posted on 5/3/2011 at 9:28 PM
		</div>
		<div class="comment_text"><p>You would need to return it in the MESSAGE field - where I used "passed".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722358">44</a> by Paul Dynan
		posted on 6/2/2011 at 7:24 PM
		</div>
		<div class="comment_text"><p>Is there any other way to get error information?  I downloaded the pages--both locally and on our live server--and when it tries to upload the first file, the bar turns into a red "error".  The application log only has that onSessionEnd is being run, and the deleting of the ram folders.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722357">45</a> by Raymond Camden
		posted on 6/2/2011 at 7:26 PM
		</div>
		<div class="comment_text"><p>Check your application log.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722361">46</a> by Paul Dynan
		posted on 6/2/2011 at 7:27 PM
		</div>
		<div class="comment_text"><p>I checked, and the log only has that onSessionEnd is being run, and the deleting of the ram folders.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722362">47</a> by Raymond Camden
		posted on 6/2/2011 at 7:35 PM
		</div>
		<div class="comment_text"><p>What log though - are you checking c:\coldfusion9\logs\application.log?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722359">48</a> by Raymond Camden
		posted on 6/2/2011 at 7:35 PM
		</div>
		<div class="comment_text"><p>Also - don't forget you can use Firebug/Chrome Dev Tools to see what the response is... it should work for this. If not, use Charles, a cheap network tool that works well with Flash network calls.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722363">49</a> by Paul Dynan
		posted on 6/2/2011 at 8:28 PM
		</div>
		<div class="comment_text"><p>I did check that log, and I installed firebug (and flash version), and it shows nothing.</p><p>Interesting, is that I changed the destination to the portfoliosubmission folder, and the files do end up there, so something is working.  I just can't see what isn't, so I can do more than one upload.</p><p>Someone here mentioned the J2EE session variables, which we don't have on.  I turned it on locally, and that fixed it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722364">50</a> by Paul Dynan
		posted on 6/9/2011 at 9:30 PM
		</div>
		<div class="comment_text"><p>We finally turned on J2EE, but still nothing: you click upload, the bar goes to 100%, then turns red and says, "error".  When I changed the upload destination, odd part is the file is in fact uploaded.</p><p>Is there a place flash writes errors to?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722365">51</a> by Raymond Camden
		posted on 6/9/2011 at 9:41 PM
		</div>
		<div class="comment_text"><p>It has to be in how you return data to the control. Can I run this myself on your server?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722366">52</a> by Paul Dynan
		posted on 6/9/2011 at 9:42 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.listinglab.com%2Fportfoliosubmission%2Fportfoliosubmission.cfm%3Ape-2azfaN-GA48B5hQvD71wqXRU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.listinglab.com/portfoliosubmission/portfoliosubmission.cfm">http://www.listinglab.com/p...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722367">53</a> by Raymond Camden
		posted on 6/9/2011 at 9:46 PM
		</div>
		<div class="comment_text"><p>I think I know what it is. In the Application.cfc file for this folder, add</p><p>this.secureJSON=false;</p><p>then try again and let me know. If it works, I'll epxlain.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722368">54</a> by Paul Dynan
		posted on 6/9/2011 at 9:57 PM
		</div>
		<div class="comment_text"><p>We've added that, but it just blows up the application page.  We added &lt;cfset this.secureJSON = false&gt; right below &lt;cfset this.sessionTimeout = createTimeSpan(0,0,4,0)&gt;.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722369">55</a> by Raymond Camden
		posted on 6/9/2011 at 9:58 PM
		</div>
		<div class="comment_text"><p>Can you describe what 'blows up' mean? You get an error?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722370">56</a> by Paul Dynan
		posted on 6/9/2011 at 9:58 PM
		</div>
		<div class="comment_text"><p>Nm...we added the quotes and the page works again...</p><p>...but not the uploader, if you want to try it again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722373">57</a> by Paul Dynan
		posted on 6/9/2011 at 9:59 PM
		</div>
		<div class="comment_text"><p>&lt;cfset this.secureJSON = false&gt; threw an error...&lt;cfset this.secureJSON = "false"&gt; fixed that page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722372">58</a> by Raymond Camden
		posted on 6/9/2011 at 10:02 PM
		</div>
		<div class="comment_text"><p>Try again. It works for me. :) Once you confirm, I will explain what it was.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722375">59</a> by Paul Dynan
		posted on 6/9/2011 at 10:02 PM
		</div>
		<div class="comment_text"><p>Alright...it works in chrome on a Mac, but in nothing else.  Works on nothing on a PC (ie, chrome, FF).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722376">60</a> by Raymond Camden
		posted on 6/9/2011 at 10:02 PM
		</div>
		<div class="comment_text"><p>You may want to clear cache and such. I'm on a PC and it's working fine for me now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722371">61</a> by Paul Dynan
		posted on 6/9/2011 at 10:16 PM
		</div>
		<div class="comment_text"><p>I cleared chrome (which was running incognito), but still an error.  I tried in IE and chrome on antoher computer that had never been to the page, but still the same error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722374">62</a> by Raymond Camden
		posted on 6/9/2011 at 10:22 PM
		</div>
		<div class="comment_text"><p>Weird - I just tested in FF too and it worked fine there. I cpicked two files and clicked Upload all. I saw em both go up ok.</p><p>At this point not sure what to tell you. I asked Scott Stroz to test too (via IM) and he also reports it worked ok.</p><p>This is the bug I was referring to:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2011%2F4%2F19%2FInteresting-JSON-issue-to-look-out-for--and-a-cffileupload-bug%3A_yINpWs_ed6Jn0Zg2qLOmMmQWhg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2011/4/19/Interesting-JSON-issue-to-look-out-for--and-a-cffileupload-bug">http://www.coldfusionjedi.c...</a></p><p>I really think that was it. As soon as you changed it it worked for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722377">63</a> by Paul Dynan
		posted on 6/9/2011 at 10:29 PM
		</div>
		<div class="comment_text"><p>Since it's working sporatically, I can't think of anything else to ask.  Maybe after I restart or something, it will start working.</p><p>In any case, unless it starts working uniformly, we may not be able to use it for now.</p><p>Thanks for getting us this far.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722378">64</a> by Raymond Camden
		posted on 6/9/2011 at 10:31 PM
		</div>
		<div class="comment_text"><p>If you do switch, I recommend Uploadify:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.uploadify.com%2F%3AzRelemeRYXwbnA52aoO6iUlUuaQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.uploadify.com/">http://www.uploadify.com/</a></p><p>I've blogged examples of it here before.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722379">65</a> by Paul Dynan
		posted on 6/9/2011 at 10:45 PM
		</div>
		<div class="comment_text"><p>We may give that a try.  Thx.</p><p>The whole reason we have been iso a new uploader (using <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cftagstore.com%2Fdemos%2FProFlashUpload%2F%29%3AC7uVXLtdPRew2SP6ibm0MXdlkYs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cftagstore.com/demos/ProFlashUpload/)">http://www.cftagstore.com/d...</a> is because a) it throws errors for some users, and b) we suspect it may be responsible for hugely swelling our CF memory (it will hit 5Gb in 4-5 days and require a restart).</p><p>I can't say for sure, but reason A was enough for us to switch to something in hopes of fixing B.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722380">66</a> by Andy
		posted on 8/31/2011 at 3:17 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>First, thanks for the heads-up on Charles Proxy.  I only had to use it once before I bought it.  Great app! The fact that it shows Flash HTTP traffic is even better, because I was looking for something like that.</p><p>Second, using the "uploadall" action of cffile doesn't require you to pass a JSON string back, which seems to be the only point of using that action.  The array returned from cffile is of the last uploaded file whether using action="upload" or action="uploadall", so capturing the file meta info isn't as easy as just accessing the result array.</p><p>To get around that, you can set a session variable. I cfparam a session variable as a 1 dimensional array and use arrayappend() on it after the cffile tag executes.  This way my array, after processing, contains all file meta information.</p><p>Thanks for the posts, they were a big help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722476">67</a> by Raymond Camden
		posted on 9/1/2011 at 12:51 AM
		</div>
		<div class="comment_text"><p>"Second, using the "uploadall" action of cffile doesn't require you to pass a JSON string back, which seems to be the only point of using that action."</p><p>No, cffile/action=uploadall is used in cases where you have a form post with N file upload fields. The multifile uploader actually sends one file at a time. So it isn't useful in this case, but isn't harmful either. That's why you see me using action=upload. You are supposed to return JSON though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722470">68</a> by Andy
		posted on 9/1/2011 at 1:52 AM
		</div>
		<div class="comment_text"><p>Yeah, I used Charles and saw that each file got POSTed by cffileupload one at a time.  So, using either upload or uploadall with cffileupload doesn't change that fact.  As you said, though, posting a regular form with multiple upload fields and using "uploadall" will handle all of those fields without having to loop run the tag multiple times yourself.</p><p>The docs seem a bit confusing for cffileupload because they basically tell you to use action="uploadall", which I thought originally was just for cffileupload.  Now that you've clarified it, though, it all makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722469">69</a> by Clay Hess
		posted on 10/13/2011 at 9:22 PM
		</div>
		<div class="comment_text"><p>As usual, Jedi...am learning a ton from you. I have never used this before and am trying it out. I have run into an issue that I do not know how to solve...I am dumping the 'myuploads' to the screen and sometimes it is empty. I cannot see any consistency in it. Do you know what would cause this behavior?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722477">70</a> by Clay Hess
		posted on 10/13/2011 at 10:15 PM
		</div>
		<div class="comment_text"><p>ok...disregard my previous question. I believe I found it. I had a typo in my CreateTimeSpan function. So my app was ending prematurely.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722463">71</a> by Raymond Camden
		posted on 10/13/2011 at 10:17 PM
		</div>
		<div class="comment_text"><p>Glad you figured it out. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722474">72</a> by Clay Hess
		posted on 10/13/2011 at 11:48 PM
		</div>
		<div class="comment_text"><p>ty...I did run into another issue though...When I was running through your tutorial, I was simply using the uploader and once I got that working, I added a cfc hit inside the cfif form submitted statement. This cfc hits the DB and records the appropriate info for the images. All of that worked swimmingly. I then moved that code to my real form which has other form fields that I am submitting to the DB. Now when I click upload in the uploader, I am getting a 302 error. I am not doing any redirection with cflocation or anything and it was working before I moved it to my real form. Have you ever run into the 302 error before and how did you debug it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722468">73</a> by Raymond Camden
		posted on 10/14/2011 at 1:19 AM
		</div>
		<div class="comment_text"><p>Hmm. Not sure. Is this online where I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722466">74</a> by Clay Hess
		posted on 10/14/2011 at 1:56 AM
		</div>
		<div class="comment_text"><p>You can see it here...http://65.110.91.104/users/addinventory.cfm. I eliminated everything except the cffileupload and it still throws the error. Charles reports a broken socket.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722461">75</a> by Clay Hess
		posted on 10/14/2011 at 2:00 AM
		</div>
		<div class="comment_text"><p>I should say specifically Charles says Socket:Broken Pipe</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722467">76</a> by Raymond Camden
		posted on 10/14/2011 at 2:00 AM
		</div>
		<div class="comment_text"><p>Please post your code for fileupload.cfm to pastebin. Note - I'm about to head to a meeting so it may be a while before I respond.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722458">77</a> by Raymond Camden
		posted on 10/14/2011 at 2:01 AM
		</div>
		<div class="comment_text"><p>Oh - it looks to be trying to post to fileupload.cfm, but it looks like that file does not exist. Did you forget to include that file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722465">78</a> by Clay Hess
		posted on 10/14/2011 at 2:16 AM
		</div>
		<div class="comment_text"><p>Aha...I see the force is still strong with you. LOL...When I =ran through your tutorial, I did it from the root. The "real" form was in a subdirectory and I never moved the fileupload. Thanks a heap for pointing me in the right direction...by the way, do you still have visions of Robocop riding a unicorn? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722478">79</a> by Raymond Camden
		posted on 10/14/2011 at 5:25 AM
		</div>
		<div class="comment_text"><p>No worries, glad to help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722464">80</a> by Joseph
		posted on 10/24/2011 at 6:07 PM
		</div>
		<div class="comment_text"><p>Is there a way to open the cffileupload dialog box as usual, but have it start in a specific directory/path on the user's computer? i.e. every time any user attempts to upload on my site it starts in C:\ etc</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722475">81</a> by Joseph
		posted on 10/24/2011 at 8:26 PM
		</div>
		<div class="comment_text"><p>Hey Raymond, your example is the only real example of a business use for cffileupload out there. I appreciate your work on this. I have one other question as well. I have an application that I must use my existing application.cfm file for. I noticed that you are using Application.cfc at the root level in your example. Of course the conflict when they are both placed at the root. How could I modify your example to use Application.cfc under the cfc folder? Thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722462">82</a> by Raymond Camden
		posted on 10/24/2011 at 8:55 PM
		</div>
		<div class="comment_text"><p>@Joseph1: I don't believe so. As it stands, that wouldn't work well cross platform.</p><p>@Joseph2: Hmmm. Tricky. On one hand I'd say to just rewrite my logic, but what I used is isn't transferable to App.cfm. To be honest I'd have to see your App.cfm. If it isn't too complex, I'd maybe suggest copying some of the logic over. Copying is bad!! Blah blah blah. We all know that. But for this case it may be the most expedient.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722460">83</a> by Joseph
		posted on 10/24/2011 at 9:17 PM
		</div>
		<div class="comment_text"><p>re: Joseph1 - I have a project which is internal to my company. Since it's internal we know there are only a few different configurations that the user can have, and where their folders for the upload of these files would be stored. We check the #cgi.HTTP_USER_AGENT# which gives us something like .....  Mozilla/4.0 (compatible; MSIE 7.0; Windows NT 5.1; .NET CLR 2.0.50727; .NET CLR 1.1.4322; .NET CLR 3.0.4506.2152; .NET CLR 3.5.30729; ATT; ATT) ..... we can then build a simple case statement to decide which starting path we want their default upload to be from, making it easier on some of our non-computer techie client base to navigate to the files to upload. Is there any way to force this, maybe by using cfdirectory beforehand, or is there another upload method that may be in order if we really need this feature? Thanks for your help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722479">84</a> by Joseph
		posted on 10/24/2011 at 9:55 PM
		</div>
		<div class="comment_text"><p>re Joseph2: I've been doing some reading here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F726-ColdFusion-Application-cfc-Tutorial-And-Application-cfc-Reference.htm%3A-b7M2K-LtmOOK22F6vAUTjvct-8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/726-ColdFusion-Application-cfc-Tutorial-And-Application-cfc-Reference.htm">http://www.bennadel.com/blo...</a></p><p>It appears that maybe my existing application.cfm could be rewritten as you mentioned in the Application.cfc. Would I use the OnSessionStart() event in the cfc to build in the additional statements?</p><p>I am including my application.cfm as a public google docs:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fdocs.google.com%2Fdocument%2Fd%2F18KIJM8ZnFJB0IwmZjs7fuLhfSSdYBlTur_dqPR0ihMI%2Fedit%3Fhl%3Den_US%3A6SifgFHPYVxZGsuigCqCRwk7fr4&amp;cuid=3321886" rel="nofollow noopener" title="https://docs.google.com/document/d/18KIJM8ZnFJB0IwmZjs7fuLhfSSdYBlTur_dqPR0ihMI/edit?hl=en_US">https://docs.google.com/doc...</a></p><p>Thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722472">85</a> by Raymond Camden
		posted on 10/24/2011 at 11:01 PM
		</div>
		<div class="comment_text"><p>1) choose dir:<br>Well... I don't believe it's supported by the Flash runtime - but I feel VERY low on my confidence on that. I know you can do it in Adobe AIR.</p><p>2) Well, my code involved multiple parts of app.cfc. You can't just put it all in onSessionStart. Or did you mean you would put YOUR code in there? It depends on what your statements are.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722459">86</a> by Joseph
		posted on 10/24/2011 at 11:06 PM
		</div>
		<div class="comment_text"><p>re Joseph1: okay, we will probably have to do without that functionality.</p><p>re Joseph2: I meant to add my code to your Application.cfc. i assume I could add most of my code to the OnSessionStart?</p><p>Joseph3: When I upload files they come through without the original filename and with no file extension. I have to rename a file to the .jpg extension in order to view it. I dont care so much about the filenames since those are in the output anyways, but is there a way to get that file extension back on those files when they are saved so I don't have to rename the files using the original file information later on in the process?</p><p>hope this makes sense, thanks!Joseph</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722471">87</a> by Raymond Camden
		posted on 10/24/2011 at 11:12 PM
		</div>
		<div class="comment_text"><p>re2: No, that is not a safe assumption. Again, it depends on what your Application.cfm. In many cases, folks would write their App.cfms like so:</p><p>(pseudo-code)<br>&lt;cfapp name="myapp"&gt;<br>&lt;cfif not isDefined("application.init")&gt;<br>  set a bunch of app vars<br>  &lt;cfset application.init = 1&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfif not isDefined("session.init")&gt;<br>  set some session vars<br>  &lt;cfset session.init=1&gt;<br>&lt;/cfif&gt;</p><p>In that case, you have 2 different things going on - application variable setup and Session variable setup. One would go into onApplicationStart and the other into onSessionStart.</p><p>re3: Woah, that doesn't make sense. You always have access to the original file name of the upload. Looking at this line here:</p><p>&lt;cffile action="upload" filefield="filedata" destination="#session.myuploadroot#" nameconflict="overwrite" result="result"&gt;</p><p>If you dump result, or write the contents to a file, you should see it there. In the CF docs, look up cffile/action=upload. They talk about the CFFILE struct created after an upload.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722473">88</a> by Joseph
		posted on 10/25/2011 at 12:10 AM
		</div>
		<div class="comment_text"><p>re Joseph3: Without modifying your code except for the target directory to save the file to being on the server instead of the vfs, each time I make an upload I get a file in my folder of 2B35061C_1018_7FBF_BEDF8DDA75CAABED with no file type. But I need the extension to be saved with the file so that I can launch the file later on. Any ideas why the extension would not be saving with the file?</p><p>Thanks for your help! Joseph</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722480">89</a> by Raymond Camden
		posted on 10/25/2011 at 12:18 AM
		</div>
		<div class="comment_text"><p>Did you try logging result? Since this is being called "behind the scenes", read the docs on cfdump and how it can write to a file. Do that for result and share what it stored. It should be about 10 or so keys.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722484">90</a> by nature_girl151
		posted on 11/1/2011 at 8:34 PM
		</div>
		<div class="comment_text"><p>Hi Ray, I am trying to modify your example a bit to add required fields for each file uploaded and not having much luck with the validation. I tried using one of your previous posts<br>Quick example of jQuery/ColdFusion 9 multifile uploader<br>and adding 3 additional fields for each file, but I can't seem to get it to show the fields once I try to upload a file.<br>- and I can only get the code to work in IE. I also want to get each file loaded into the database as part of the processing - so I am a bit confused as to how to do this. DO I use action="upload" or action = "uploadAll" if I need all of the vars passed.<br>Thanks in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722486">91</a> by Raymond Camden
		posted on 11/2/2011 at 5:35 AM
		</div>
		<div class="comment_text"><p>You want to include a set of values with the files? If so - you don't to use the multiuploader being used here. In this example, I have a set of form fields that go along with the files, but they aren't associated with one individual file. You would need to use something different.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722490">92</a> by nature_girl151
		posted on 11/2/2011 at 4:09 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, kinda thought so. Moving on to your adding fields with JQuery post - just have to figure out how to add a maximum number of files(additions) allowed!<br>Your examples/blogs are always such a big help figuring out some of the tough stuff.<br>Thanks again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722491">93</a> by Raymond Camden
		posted on 11/2/2011 at 4:56 PM
		</div>
		<div class="comment_text"><p>If you keep track of the # added, then it should be simple to check that # versus some maximum. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722489">94</a> by Clay
		posted on 11/11/2011 at 9:37 PM
		</div>
		<div class="comment_text"><p>Just thought I would post this in case anyone else runs into it...</p><p>I used the Jedi's excellent post in order to construct an app I was building. In my particular app, it was possible for the end user to upload images and then go back and upload some more in the same session. This caused a problem because the first set of images were still in the VFS (session and app scopes were still active).</p><p>To solve this, in my CFC, I added a piece of code to clear out the directory, without deleting the VFS directory for future uploads. Here is my snippet...</p><p>&lt;cfloop query="myuploads" startrow="1" endrow="#myuploads.RecordCount#"&gt;<br>     &lt;cffile action="delete" file="#directory#\#name#" /&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722488">95</a> by Raymond Camden
		posted on 11/11/2011 at 10:23 PM
		</div>
		<div class="comment_text"><p>Ohhh darn good point there Clay. I wasn't thinking about N, distinct, uses of the form in one session.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722495">96</a> by Bob Clingan
		posted on 11/21/2011 at 9:20 PM
		</div>
		<div class="comment_text"><p>I'm trying out the new cffile upload and according to Firebug, its dying because its looking for the crossdomain.xml file on localhost:8080. JBoss is running on that port in my case and I'm not running off localhost. Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722487">97</a> by Raymond Camden
		posted on 11/22/2011 at 12:40 AM
		</div>
		<div class="comment_text"><p>So your saying you see a request to localhost:8080 even though you aren't on there?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722493">98</a> by Bob Clingan
		posted on 11/22/2011 at 12:44 AM
		</div>
		<div class="comment_text"><p>Correct.. my page is at: <a href="https://disq.us/url?url=https%3A%2F%2Fwww.foo.com%2Findex.cfm%3ATvNJCWexdBKaNANLhwiMdp0UOMA&amp;cuid=3321886" rel="nofollow noopener" title="https://www.foo.com/index.cfm">https://www.foo.com/index.cfm</a> and in firebug after clicking the upload button I see:</p><p>GET crossdomain.xml   Aborted   localhost:8080</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722492">99</a> by Raymond Camden
		posted on 11/22/2011 at 12:47 AM
		</div>
		<div class="comment_text"><p>That's odd. I assume if you view source then you are seeing some of the scripts being loaded that way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722499">100</a> by Bob Clingan
		posted on 11/22/2011 at 12:49 AM
		</div>
		<div class="comment_text"><p>Every other request is correctly formed using the webservername.. ie</p><p>GET MultiFileUpload.swf  200 OK   <a href="http://disq.us/url?url=http%3A%2F%2Fwww.foo.com%3AXyHzr9i_xV8Q_nGiigenJ6yZiHQ&amp;cuid=3321886" rel="nofollow noopener" title="www.foo.com">www.foo.com</a></p><p>It is very odd...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722497">101</a> by Bob Clingan
		posted on 11/22/2011 at 1:28 AM
		</div>
		<div class="comment_text"><p>Just inspected the javascript CF generates.. it has localhost as well..</p><p>/* &lt;![CDATA[ */<br>2 var _cf_fileupload_init_1321906891556=function()<br>3 {<br>4 var _cf_fileupload=ColdFusion.FileUpload.create('cf_fileupload1321906891555','http%3A%2F%2Flocalhost%3A8080%2Fcfusion%2FXXXXX%2FXXXX%2Fdev%2Fprocess%2Ecfm',null,'CFID%3D15050%26CFTOKEN%3D13433490%26jsessionid%3D59526C32EBFAD91D912BC9B69A979E88',null,null,null,null,null,null,10485760,null,null,null,null,null,null,null,null,null,null,null,null,null,true,'/cfusion',false,true,null,'left');<br>5 };ColdFusion.Event.registerOnLoad(_cf_fileupload_init_1321906891556);<br>6/* ]]&gt; */</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722494">102</a> by Bob Clingan
		posted on 11/22/2011 at 2:07 AM
		</div>
		<div class="comment_text"><p>I think this is most likely some type of configuration issue.. we have two instances of CF on this particular box... one standalone, and one deployed under JBoss. Both are getting the wrong value for the path in one way or another. ColdFusion seems to derive this in some way that is not working for us. Could be some type of ReverseProxy confusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722498">103</a> by Raymond Camden
		posted on 11/22/2011 at 2:15 AM
		</div>
		<div class="comment_text"><p>Yeah, sorry man - not sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722496">104</a> by Bob Clingan
		posted on 11/29/2011 at 1:23 AM
		</div>
		<div class="comment_text"><p>Just to bring some closure to this thread... CF uses the <a href="http://disq.us/url?url=http%3A%2F%2Fcgi.host%3Ae9tr8XwvMUdSfDDudNI5MvEi0DU&amp;cuid=3321886" rel="nofollow noopener" title="cgi.host">cgi.host</a> variable when automatically generating the .swf and various bits. If you are doing any proxying behind the scenes with Apache, you will need to use the ProxyPreserveHost Directive to ensure the correct host name is used. Check Apache docs for more info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722500">105</a> by Raymond Camden
		posted on 11/29/2011 at 1:28 AM
		</div>
		<div class="comment_text"><p>Thanks for posting this - I'm sure it's going to hit others too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722502">106</a> by Renee Spadaro
		posted on 6/15/2012 at 1:32 AM
		</div>
		<div class="comment_text"><p>Hi Ray,  I'm using cffileupload with CF 9.0.1 and the interface will not load.  If I right click the area where it should be I get 'movie will not load' and the flash version I'm running.  Finally figured out that the problem was the extension filter.  If I take it out the interface loads, if I put it back the interface doesn't.  Problem is without the extension filter none of the other variables seem to be recognized.  For example, changing the width changes the color; the delete button is barely readable; the clear list button is displaying a token, there is no upload buttton.  Makes no difference what browser I use or version. I can run this on a dev server using just cffileupload and cffile tags just fine.  No errors, uploading multiple files at one time.  The only difference I have found is that my dev server is running CF 9.0.0.  I have turned on the J2EE serssion variables in the CF administrator but that doesn't work.  I've been playing around with this for 3 days to no avail.  Any help you can provide would be greatly appreciated.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722501">107</a> by Raymond Camden
		posted on 6/20/2012 at 6:21 PM
		</div>
		<div class="comment_text"><p>Not sure what I can recommend w/o being able to see it. Is it online where I can visit it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722503">108</a> by Renee Spadaro
		posted on 6/20/2012 at 6:27 PM
		</div>
		<div class="comment_text"><p>Yes, sorry. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.archbalt.org%2Fultipro%2Ftest.cfm%3Adop-hGtRx4yik0_Vgz9Sv7f4tQc&amp;cuid=3321886" rel="nofollow noopener" title="www.archbalt.org/ultipro/test.cfm">www.archbalt.org/ultipro/te...</a>.  The first is the cffileupload tag without the extention filter and the second is the generated code from my dev site.  I copied it into an embed code.  That's what it should look like but if you actually try to upload a file the upload button toggles to the cancel button.  The extension filter adds this to the code when it's generated:  &lt;embed src="*.pdf, *.xls, *.xlsx/CFIDE/scripts/ajax/resources/cf/assets/MultiFileUpload.swf"...&gt;.  I've checked the path in the CF administrator for the scripts and it's correct.  It's got to be some setting somewhere that I'm missing.  Thanks for looking at it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722508">109</a> by Raymond Camden
		posted on 6/20/2012 at 6:35 PM
		</div>
		<div class="comment_text"><p>When I test it now, I get a cross domain error which makes sense. It is trying to post to <a href="http://disq.us/url?url=http%3A%2F%2Fnewev.archbalt.org%3A_mO3IQINi1kVxxPDKsMe2Bvw8Y4&amp;cuid=3321886" rel="nofollow noopener" title="newev.archbalt.org">newev.archbalt.org</a>, not <a href="http://disq.us/url?url=http%3A%2F%2Farchbalt.org%3AJwJat4BsTVxapwZZiEdc0DsDt1c&amp;cuid=3321886" rel="nofollow noopener" title="archbalt.org">archbalt.org</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722507">110</a> by Renee Spadaro
		posted on 6/20/2012 at 6:48 PM
		</div>
		<div class="comment_text"><p>Ok, stupid coder error on my part. Fixed that and it does work.  One problem solved.  Do you have any idea why it won't work with the cffileupload tag?  I'll put the extension filter back in and you can see it that way.  Or not as the case may be.  You'll have to right click where it should be.  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722509">111</a> by Raymond Camden
		posted on 6/20/2012 at 6:49 PM
		</div>
		<div class="comment_text"><p>Well, let me know when it is back. It may be better to switch to email (raymondcamden at gmail dot com).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722510">112</a> by Palyne
		posted on 8/22/2012 at 5:48 AM
		</div>
		<div class="comment_text"><p>Oh wow, I just found this post over 2 years late -- I'd seen others you have on this topic but missed this one. THANK YOU (my hero!) for this complete example. This is awesome!!</p><p>So looking at the code the only thing that seemed specific to 'me' (vs. generic and already covered) was the email address, so I changed that. I'm on shared hosting J2EE CF9.01 (or whatever is most current I'm pretty sure).</p><p>I made a new folder inside an existing one (the existing one is within session security on my site already), and dropped all four files into it. (fileupload.cfm, temp.cfm, Application.cfc and portfoliosubmission.cfm).</p><p>I get the following error (screenshot):<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.palyne.com%2Fcoldfusionhell%2Fsnap0233.jpg%3AQ3Ap8XEKtgeoGUjGbdb1VIyPA98&amp;cuid=3321886" rel="nofollow noopener" title="http://www.palyne.com/coldfusionhell/snap0233.jpg">http://www.palyne.com/coldf...</a></p><p>I'm wondering: I don't have an application.cfc right now. I have an Application.cfm file (up a couple levels from where this test folder is). Do I need to extract your cfc code into it, and if so would it be ok to use the code in the cfm file? (I am a little fuzzy on the diff as far as that goes.)</p><p>Or might there be some other reason I'd get a 404 when uploading a simple image file from my desktop?</p><p>Thanks hugely, incredibly, for the example and for any help. I was so excited to find this it was ridiculous. This beautiful 'easy feature' has made me bleed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722511">113</a> by Raymond Camden
		posted on 8/22/2012 at 6:00 AM
		</div>
		<div class="comment_text"><p>Hmm. So the file uploader in portfoliosubmission.cfm should point to fileupload.cfm. Can you confirm you *really* copied it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722512">114</a> by Palyne
		posted on 8/22/2012 at 9:21 AM
		</div>
		<div class="comment_text"><p>Yes sir. Though I didn't copy the text, I just downloaded your zip file, opened it up, replaced the email address in the cfmail tag (in portfoliosubmission.cfm line 29), saved the file, and then moved all 4 files via FTP to the server. Here's a screenshot of the file content (line 75), didn't touch that area but it seems to be correct. And a shot of the FTP (was still open from hours ago when I put 'em all there) just as sanity check.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.palyne.com%2Fcoldfusionhell%2Fsnap0237.jpg%3AtPrMFrbRiQh8AB7OHYKw0tQw3FM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.palyne.com/coldfusionhell/snap0237.jpg">http://www.palyne.com/coldf...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.palyne.com%2Fcoldfusionhell%2Fsnap0238.jpg%3Azxv7eX5fcfRm6Ul8sqVH6PQcBss&amp;cuid=3321886" rel="nofollow noopener" title="http://www.palyne.com/coldfusionhell/snap0238.jpg">http://www.palyne.com/coldf...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722513">115</a> by Raymond Camden
		posted on 8/22/2012 at 3:17 PM
		</div>
		<div class="comment_text"><p>Can you share the URL so I can try it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722514">116</a> by Palyne
		posted on 8/22/2012 at 4:41 PM
		</div>
		<div class="comment_text"><p>Yes, and thank you. Fwiw:</p><p>I originally had it in a subsub folder, with the top folder being under login. I copied it into a folder just under root, which had no session/client/cookies enabled (my root app file doesn't by default), and got the same results. I turned those three values in cfapplication tag on, but it seems to be the same. I'm in WinXP at the moment, and I tested it via Chrome 21.0.1180.79m, Firefox 14.0.1 and MSIE 8.0.6001.18702.</p><p>I'm happy to provide FTP info in email if it is at all helpful.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdojopsi.com%2Ful%2Fportfoliosubmission.cfm%3A57jq3GOH-55JuwhoNod570R4dy4&amp;cuid=3321886" rel="nofollow noopener" title="http://dojopsi.com/ul/portfoliosubmission.cfm">http://dojopsi.com/ul/portf...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722515">117</a> by Raymond Camden
		posted on 8/22/2012 at 5:55 PM
		</div>
		<div class="comment_text"><p>This is what I did.</p><p>I used the Charles network proxy tool to monitor my hits of your site.</p><p>I loaded up your demo and confirmed I saw it in Charles.</p><p>I then picked a file and clicked upload. I got a 404. I saw why pretty quickly:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.evernote.com%2Fshard%2Fs3%2Fsh%2Fcd213a2a-f74f-4b95-9015-a017b7d712d6%2F065626ee1a44e6b00f4603a7891cd386%3Aw63GIvXnkHY8jT1Mu519ttVgXus&amp;cuid=3321886" rel="nofollow noopener" title="http://www.evernote.com/shard/s3/sh/cd213a2a-f74f-4b95-9015-a017b7d712d6/065626ee1a44e6b00f4603a7891cd386">http://www.evernote.com/sha...</a></p><p>Notice the "sites" branch - that showed up when I hit upload. For some reason it is trying to go to</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdojopsi.com%2Fsites%2Fdojopsi_com%2Ful%2Ffileupload.cfm%3Abcd52PORiWjjAZzTUFn_rv3IE2Y&amp;cuid=3321886" rel="nofollow noopener" title="http://dojopsi.com/sites/dojopsi_com/ul/fileupload.cfm">http://dojopsi.com/sites/do...</a></p><p>I'm guessing your server is getting confused about what the site root is.</p><p>Easy solution is - in the cffileupload tag - use a full URL (<a href="http://disq.us/url?url=http%3A%2F%2Fdojopsi.com%2Ful%2Ffileupload.cfm%29%3AqfGQ2MzeDbXwleeLde7D-ugf01s&amp;cuid=3321886" rel="nofollow noopener" title="http://dojopsi.com/ul/fileupload.cfm)">http://dojopsi.com/ul/fileu...</a> and see if that works. Or maybe even "./fileupload.cfm".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722516">118</a> by Palyne
		posted on 8/22/2012 at 11:25 PM
		</div>
		<div class="comment_text"><p>Oh wow, thank you incredibly for your input. I tried:</p><p>./fileupload.cfm<br>../ul/fileupload.cfm<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.dojopsi.com%2Ful%2Ffileupload.cfm%3A92Nhp7w6Y9fOGFvPrhM4sMz-2KE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.dojopsi.com/ul/fileupload.cfm">http://www.dojopsi.com/ul/f...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fdojopsi.com%2Ful%2Ffileupload.cfm%3AZL-YbJgIv12AxFEY5Clp_1L4kqc&amp;cuid=3321886" rel="nofollow noopener" title="http://dojopsi.com/ul/fileupload.cfm">http://dojopsi.com/ul/fileu...</a></p><p>All were 404 except the last one which did work. Glory!</p><p>I can't tell you how many times over the years I've spent eons ripping my hair out about something, bugging support, only to later find out it is some setting the shared server corp didn't have set right on my site (and didn't notice during my pleading with them for help since my code seemed identical to that working perfectly elsewhere). I don't know if this situation means that is the case or not. I cannot figure out why using a simple filename link in the uploader would post to that duplicate-like address your tool showed, but it seems like a server mapping issue I guess. I'll write the host.</p><p>Thank you so much for the ref to the proxy tool. I didn't even know that kind of thing was available. At least this particular issue will never be the cause without my seeing it promptly again!</p><p>Best regards,<br>Palyne</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722517">119</a> by Palyne
		posted on 8/24/2012 at 7:03 AM
		</div>
		<div class="comment_text"><p>A follow-up for other finding via search.</p><p>I'm new to CF9, and this is actually the first flash element I've used in CF, so a couple things prevented this working right at first. One of the hardest things when learning is that all the 'answers' on the internet often assume you already know at least 2 underlying things you actually don't, so for the other clueless I'm adding:</p><p>The above solution only worked in chrome and ie for me, it turns out. Reason? Firefox was "so helpfully" forcing my browser to add www to the URL. Even if I forcibly removed it, it put it back. I never noticed it "overrode" my entry like that before, even if http:// was present.</p><p>If I added the www to the URL manually in chrome or ie, when the page loaded, the url would auto-change to <a href="http://disq.us/url?url=http%3A%2F%2Fdomain.com%3A1FzqpsvA5WpQAoTMRCUnundDbZY&amp;cuid=3321886" rel="nofollow noopener" title="http://domain.com">http://domain.com</a>. But it didn't 'remove' the www in firefox, I suppose because the browser was overriding my server and forcing it or something.</p><p>I know I'm late to this party obviously but as I only do little shared-hosting hobby sites (webwork isn't my job for too many eons, and I only just got a diff server config recently) it just never came up for me before.</p><p>This is "domain guessing" and to turn it off on the local ffx browser put "about:config" (no quotes) in the url bar and press enter. Agree to the button that comes up. Put "browser.fixup.alternate.enabled" (no quotes) in the 'search' field at the top of the page you get, to pull up this option. Double-click that option line to change it to false. Then close the browser fully and reopen. Now ffx won't "force" .com or www. onto your URLs anymore. At that point, it worked in firefox for me.</p><p>Alas I can't expect all my users to do that, so clearly there was something else.</p><p>Thanks to the charles proxy tool I was able to see that it was calling 'crossdomain.xml' just before the upload element did nothing-at-all.</p><p>I didn't know that you must have a crossdomain.xml file in the root folder of the domain. This is on my local cf9 install at the wwwroot level but not on the shared server. So using the one on my local install with a mod I made:</p><p>&lt;?xml version="1.0"?&gt;<br>&lt;!DOCTYPE cross-domain-policy SYSTEM "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fxml%2Fdtds%2Fcross-domain-policy.dtd%3AsUwyqFw0bZHXviTRWYBxtkpS67M&amp;cuid=3321886" rel="nofollow noopener" title="http://www.macromedia.com/xml/dtds/cross-domain-policy.dtd">http://www.macromedia.com/x...</a>"&gt;<br>&lt;cross-domain-policy&gt;<br>&lt;allow-access-from domain="*.mydomain.com"/&gt;<br>&lt;/cross-domain-policy&gt;</p><p>And put it in the root folder. Now anybody's firefox seems to run my cf9 cffileupload flash-based file uploader as well as chrome and ie. Little things...</p><p>I guess now it's clear why the header of my rarely used blog says, "CFML is a beautiful code language, designed so even an idiot can use it. I'm that idiot. Here's my answers to stupidly simple stuff I struggled to figure out."</p><p>Thanks again for your awesome files and help Ray.</p><p>P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722519">120</a> by Clay Hess
		posted on 9/9/2012 at 6:37 AM
		</div>
		<div class="comment_text"><p>Ray...have you ever run into the following error when using the multiple file upload?</p><p>access denied (coldfusion.vfs.VFilePermission...</p><p>I have a site on a CF10 server (shared hosting) and am using the exact same application.cfc code I used on a site that is within a CF9 environment. Here is my code (or I should say your code)...</p><p>In the OnApplicationStart...<br>&lt;cfset Application.portfolioUploadRoot = "ram:///portfoliouploads"&gt;<br>        &lt;cfif not directoryExists(Application.portfolioUploadRoot)&gt;<br>            &lt;cfdirectory action="create" directory="#Application.portfolioUploadRoot#"&gt;<br>        &lt;/cfif&gt;</p><p>In the OnSessionStart...<br>&lt;cfset session.myuploadroot = application.portfolioUploadRoot &amp; "/" &amp; replace(createUUID(), "-", "_", "all")&gt;<br>        &lt;cfif not directoryExists(session.myuploadroot)&gt;<br>            &lt;cfdirectory action="create" directory="#session.myuploadroot#"&gt;<br>        &lt;/cfif&gt;</p><p>Thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722518">121</a> by Raymond Camden
		posted on 9/9/2012 at 6:27 PM
		</div>
		<div class="comment_text"><p>VFS can be turned off at the server level. That looks to be your issue based on the error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722520">122</a> by Clay Hess
		posted on 9/12/2012 at 12:08 AM
		</div>
		<div class="comment_text"><p>Ray...ty. That was the issue and my host fixed it. For those readers that might run into this, I found the following snippet in the docs that was helpful...</p><p>&lt;cfdump var="#getVFSMetaData("ram")#"&gt;</p><p>------</p><p>I ran into another issue...I am creating the session.myuploadroot variable like you did using the VFS I grabbed in the OnApplicationStart and the UUID. I then utilize the session.myuploadroot variable throughout my code just like you did. Everything seemed to work, but no files were uploaded. I dumped the session to the screen and used Charles to watch the flow of things and noticed that my fileupload.cfm page is using a session.myuploadroot variable with a different UUID than my upload page. How can that happen if I am creating the variable within my application.cfc? Ever run into this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722521">123</a> by Raymond Camden
		posted on 9/12/2012 at 1:31 AM
		</div>
		<div class="comment_text"><p>Not sure what to tell you. Maybe ensure your session isn't timing out. Add logging to onSessionStart and ensuring it is just running the one time. Maybe add a foo.cfm page that does cfdump on session and ensure it matches with what you think it should be.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722522">124</a> by Clay Hess
		posted on 9/13/2012 at 11:31 AM
		</div>
		<div class="comment_text"><p>Ok...just in terms of followup...I used cfdump along with Charles/JSON to trace session.myuploadroot through the process. I did it on my own CF10 development server and it worked like a charm. The CF10 at my host is where the problem lies. The session variable seems to be created twice from my OnSessionStart method. The fileupload.cfm file uses a different session.myuploadroot than the page containing the cffileupload. So it seems to be creating two sessions for the same site/session. Since it works on my test server, I obviously think it has something to do with my hosts CF server config. I have a site using this successfully with this host in a CF9 environment. So I figured it had to be some setting in CF10. I know that CF10 had a lot of security changes, etc., but I could not seem to find any information that would answer why two sessions at once. Anyone have any thoughts? I am stumped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722524">125</a> by Raymond Camden
		posted on 9/13/2012 at 7:23 PM
		</div>
		<div class="comment_text"><p>Is your host perhaps using J2EE Session variables?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722528">126</a> by jpmyob
		posted on 4/18/2013 at 8:41 AM
		</div>
		<div class="comment_text"><p>Raymond... any time I try to add any code to 'process' the images i get an error 500 back to the flash uploader...</p><p>for instance.<br>&lt;cfscript&gt;<br>if ( structKeyExists( URL, 'g' ) {<br>	//if ( !isDefined( 'objFiles' ) ) { objFiles = createObject( 'component', 'cfc.file' ); }<br>	//objFiles.processGallery( URL.g );<br>}<br>&lt;/cfscript&gt;</p><p>if I run this same code from a separate cfm page, no issues, so the method call doesnt return an error... and it doesnt matter id i wrap it in cfsilent, or try/catch and suppress any errors... if i put ANY code after the &lt;cffile action="upload" &gt; then I get an error... making me have to add an extra step..</p><p>any ideas?<br>do you have code examples of you process the uploaded images.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722526">127</a> by Raymond Camden
		posted on 4/18/2013 at 3:26 PM
		</div>
		<div class="comment_text"><p>What do you see in your exception.log?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722527">128</a> by jpmyob
		posted on 4/20/2013 at 2:51 AM
		</div>
		<div class="comment_text"><p>...well, as usual, when i try to recreate something that plagued me for hours b4 I posted, it works. Now I know where to look first b4 I repost. thx</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722529">129</a> by Raymond Camden
		posted on 4/20/2013 at 5:46 PM
		</div>
		<div class="comment_text"><p>Glad this old post helped. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722530">130</a> by Clay Hess
		posted on 8/15/2013 at 4:16 AM
		</div>
		<div class="comment_text"><p>Ray ~</p><p>I ran into an odd error upon which I hope you can shed some light. I have a site that will sporadically display a blank screen as if it does not have any content. I am creating the VFS space like you are in the application.cfc. When I comment out the VFS code in the application.cfc, the site displays just fine (although my file uploader won't work obviously).</p><p>I am wondering if you have run into this before and have a thought or two as to a fix?</p><p>FYI...The site is on a CF10 shared hosting plan at Newtek. I am thinking it is a config issue with sandboxing, but cannot be sure. I am having them email me the log files as I have error logging set up in the application.cfc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722531">131</a> by Raymond Camden
		posted on 8/15/2013 at 6:33 AM
		</div>
		<div class="comment_text"><p>So to be clear, the Flash uploader UI doesn't show? The VFS is being used to store the uploads - it shouldn't impact the display of the control.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722535">132</a> by Stefan Kovacs
		posted on 10/17/2013 at 12:05 PM
		</div>
		<div class="comment_text"><p>Hello, Ray<br>I want to say something to newbies (like me).<br>If debug is enabled, and want to send status back, it is a must to use<br>cfsetting showdebugoutput="false"<br>If not, the json will be compromised.</p><p>Is there a way to send more data back? I want to upload a file, and after some iteration to send back some result. in  str.Data . <br>Actually, my json Response is ripped out. Is used only STATUS and MESSAGE. And MESSAGE key is apparently limited string.<br>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722534">133</a> by Raymond Camden
		posted on 10/17/2013 at 2:47 PM
		</div>
		<div class="comment_text"><p>As far as I know, no. You would need to use something else to have to more control.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722536">134</a> by Stefan Kovacs
		posted on 10/17/2013 at 10:33 PM
		</div>
		<div class="comment_text"><p>Too bad... It's a great control... with limited power...<br>Thank you very much</p></div>
	</div>
</div>
		