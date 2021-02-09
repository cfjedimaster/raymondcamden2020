
<div class="comment" id="c_1713725547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725547">1</a> by Brian
		posted on 7/22/2010 at 6:03 PM
		</div>
		<div class="comment_text"><p>So, just to clarify, the NO status just means the user hasn't selected any files for upload?  As opposed to they have selected the files, but the transfer has not yet occurred?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725548">2</a> by Raymond Camden
		posted on 7/22/2010 at 6:07 PM
		</div>
		<div class="comment_text"><p>It is a PER file status. To detect if the user hasn't picked ANY files, you can look at the length of the array.</p><p>Make sense?</p><p>Oh wait - to be anal - you can do uploads and then clear. So to TRULY test to see if the user uploading anything, you would need to use the onUpload (I forget the exact name) API to mark it.</p><p>If you want, I can do an example of that. Logic for: a) ensure the user uploaded at least one thing versus b) if user has stuff in the queue, ensure he uploads them</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725550">3</a> by Eric
		posted on 7/22/2010 at 8:08 PM
		</div>
		<div class="comment_text"><p>That would be great Ray, we are currently facing that issue since we put that in production and testing for those things is becoming more important as our less-savvy users are now hitting it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725649">4</a> by Brian Kalbfleisch
		posted on 7/23/2010 at 4:33 PM
		</div>
		<div class="comment_text"><p>For those who are calling the javascript directly, here are the parameters for the ColdFusion.FileUpload.create.</p><p>ColdFusion.FileUpload.create=function<br>(_60f,//uploadDivId<br>_610,//url_withoutQuery<br>_611,//url_queryString<br>_612,//url_CF_cookie<br>_613,//addButtonLabel<br>_614,//ClearButtonLabel<br>_615,//UploadButtonLabel<br>_616,//DeleteButtonLabel<br>_617,//title<br>_618,//maxFileSelect<br>_619,//UploadSize<br>_61a,//onCompleteHandler<br>_61b,//onUploadCompleteHandler<br>_61c,//onErrorHandler<br>_61d,//width<br>_61e,//height<br>_61f,//bgcolor<br>_620,//selectcolor<br>_621,//rollovercolor<br>_622,//textcolor<br>_623,//titletextcolor<br>_624,//headercolor<br>_625,//titletextalign<br>_626,//fileFilter<br>_627,//progressbar<br>_628,//iconpath<br>_629,//disableUploadButton<br>_62a,//stopOnError<br>_62b,//wmode<br>_62c //align<br>)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725656">5</a> by jf
		posted on 7/26/2010 at 4:46 PM
		</div>
		<div class="comment_text"><p>Good to hear that sessions are now preserved automatically.</p><p>Have you had any luck getting that control to work in AJAX? Like loading it using jQuery's ajax library.  It seems to be loading so much stuff on init that I couldn't quite get it to work right...no matter the datatype.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725643">6</a> by Raymond Camden
		posted on 7/26/2010 at 5:00 PM
		</div>
		<div class="comment_text"><p>Brian pointed out the code above, but I don't believe there is any documented way to create a file uploader.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725651">7</a> by Brian Kalbfleisch
		posted on 7/26/2010 at 5:16 PM
		</div>
		<div class="comment_text"><p>JF,<br> We use ExtJS (now Sencha) as our Ajax framework. Calling the file uploader via javascript prevents coldfusion from loading the style sheets and other conflicting libraries.  I will post the minimum things needed to get the file uploader to work.  I tried posting the entire javascript, but  I think there is a comment size limit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725645">8</a> by Brian Kalbfleisch
		posted on 7/26/2010 at 5:18 PM
		</div>
		<div class="comment_text"><p>It looks like I cannot add code or script calls to the comments section. Is there a way to include code examples?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725641">9</a> by Raymond Camden
		posted on 7/26/2010 at 6:02 PM
		</div>
		<div class="comment_text"><p>Brian - please use pastebin. Blog comments really aren't good for code samples. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725647">10</a> by Brian Kalbfleisch
		posted on 7/26/2010 at 7:31 PM
		</div>
		<div class="comment_text"><p>ok, I posted the javascript needed on the forums. This should be what you need to include the file uploader in an Ajax framework.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fforums%2Fmessages.cfm%3Fthreadid%3D997B2CBC-E09A-360C-D18E93E13663E95E%3AkAOJaUHsqbgXbuCQY3KAJ3W4K-E&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/forums/messages.cfm?threadid=997B2CBC-E09A-360C-D18E93E13663E95E">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725642">11</a> by Bryan Rice
		posted on 7/28/2010 at 2:58 AM
		</div>
		<div class="comment_text"><p>Is there a reason why cffileupload will not work under ssl?  I have some test code that works fine on my server on a non-ssl domain, but fails (on the same server) under a SSL domain. Using Charles to sniff the traffic, it seems the server immediately refuses the request coming from the flash app when I try to upload.  Any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725650">12</a> by Raymond Camden
		posted on 7/28/2010 at 5:31 AM
		</div>
		<div class="comment_text"><p>Sorry, no idea on that one. I can't see why it would block SSL. Worse comes to worse, maybe try Uploadify? It's the solution I normally use for file uploads.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725654">13</a> by Bryan Rice
		posted on 9/20/2010 at 8:21 PM
		</div>
		<div class="comment_text"><p>If you have a moment, I was wondering if you can confirm that the multi-file uploader doesn't work with CFLOGIN after the 9.0.1 update. In my test code, I have found that the .cfm page where it uploads the files triggers the cflogin block in my application.cfc code (i.e. it doesn't detect the cflogin struct). It DOES however, and strangely, have access to the Session information.</p><p>I can work around this in the application.cfc by letting requests for the upload page through and then checking for a flag in the Session struct, but I would rather it work as expected. Lol.  Anyway, I know that you don't use CFLOGIN generally, but I am really going crazy over this issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725646">14</a> by Raymond Camden
		posted on 9/20/2010 at 8:24 PM
		</div>
		<div class="comment_text"><p>What are you using for loginStorage in your Application.cfc file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725652">15</a> by Bryan Rice
		posted on 9/20/2010 at 8:32 PM
		</div>
		<div class="comment_text"><p>Aha! I have it set to "cookie". I haven't tried it set to "session" for this test (I think I stopped doing that because of some past security issue...can't remember.)</p><p>I will try it with session and see if works.  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725648">16</a> by Raymond Camden
		posted on 9/20/2010 at 8:33 PM
		</div>
		<div class="comment_text"><p>Let me know. That should be it.</p><p>CFLOGIN suffered more than one security issue, but as of the latest 8.X it should be locked down. Certainly in 9 it is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725644">17</a> by Bryan Rice
		posted on 9/20/2010 at 8:46 PM
		</div>
		<div class="comment_text"><p>It's always the little things! Setting loginstorage="session" *did* allow the cffileupload to work behind cflogin as expected (and hoped).</p><p>Thanks again! Maybe this will at least help anyone else avoid this gotcha when trying to add the multi-file uploader to an already existing application that uses cflogin.</p></div>
	</div>
</div>
		