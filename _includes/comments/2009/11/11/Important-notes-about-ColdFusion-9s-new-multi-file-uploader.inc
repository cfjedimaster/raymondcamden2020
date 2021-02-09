
<div class="comment" id="c_1713719648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719648">1</a> by Raymond Camden
		posted on 11/11/2009 at 11:27 PM
		</div>
		<div class="comment_text"><p>As a quick note - I plan on writing a full demo that demonstrates everything (up to the db storage, I'd fake that). This may be delayed though as I've got RIAUnleashed this week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719649">2</a> by Henry Ho
		posted on 11/11/2009 at 11:50 PM
		</div>
		<div class="comment_text"><p>Would using hideUploadButton="true" somewhat simplifies the problem?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719654">3</a> by Raymond Camden
		posted on 11/11/2009 at 11:52 PM
		</div>
		<div class="comment_text"><p>Nope. In that case, you would use the JS API to run the uploads. I didn't mean to imply there were NO JS API funcs for this UI, there are, just none that can get the status of the queue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719656">4</a> by Jon Hartmann
		posted on 11/12/2009 at 12:09 AM
		</div>
		<div class="comment_text"><p>Thats a lot of "gotchas" for a feature that I really wish was easier to use... oh well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719655">5</a> by Tyler Clendenin
		posted on 11/12/2009 at 12:24 AM
		</div>
		<div class="comment_text"><p>Very interesting, I have not moved to CF9 yet (gonna be a while) but I was particularly looking forward to trying out the multifile upload.  It seems to me that unlike many other things that CF makes easier, the multifile upload posses just as many issues as it solves.</p><p>BTW, I would be negligent if I did not suggest the firebug addon for firefox.  It does in fact give you a message in the status bar telling you all about JS errors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719653">6</a> by Raymond Camden
		posted on 11/12/2009 at 12:36 AM
		</div>
		<div class="comment_text"><p>@Tyler: To be fair though - these gotchas apply to _any_ multifile uploader - not just the one shipping with CF9. To be honest, this is just one more thing that Ajax developers have to think about in general. Ajax isn't all just sunshine and puppies - it's a whole new way of thinking.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719671">7</a> by Russ S.
		posted on 11/12/2009 at 3:58 AM
		</div>
		<div class="comment_text"><p>Yikes. Seems like some of the problems could be alleviated by having a multi-step submission process, which would allow you to use the cffileupload tag without a parent form wrapper. <br>Also, why doesn't CF doesn't send cookie data along with the uploads? Unless there's some good reason, I'd consider that a bug that needs fixing. <br>And I don't know if I agree with you about storing uploaded files in RAM. Too many simultaneous uploads and your virtual memory is toast.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719668">8</a> by Raymond Camden
		posted on 11/12/2009 at 4:01 AM
		</div>
		<div class="comment_text"><p>@Russ: Even with a multistep process, you still need to coordinate keeping the files in one place and "gathering" them when the form is complete. You still have to worry about people not completing the form.</p><p>Definitely agree on it being a bug that cookies aren't sent.</p><p>RAM: Ram is cheap. ;) But certainly you could also save it to some other physical place.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719669">9</a> by Henry Ho
		posted on 11/12/2009 at 4:01 AM
		</div>
		<div class="comment_text"><p>Flash player (what CFFileUpload uses) never respects browser's session cookies.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719678">10</a> by Russ S.
		posted on 11/12/2009 at 6:33 AM
		</div>
		<div class="comment_text"><p>@Ray I definitely like the idea of removing files at the end of the session, regardless of where they are stored. onSessionEnd() is rad.</p><p>RAM: Storing user uploads in it just seems like an unnecessary risk. If hackers didn't already have enough ways to screw your server, now they can eat up your RAM too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719679">11</a> by Raymond Camden
		posted on 11/12/2009 at 9:20 AM
		</div>
		<div class="comment_text"><p>Yeah but you get the exact same risk with the file system. You can file a file system just like you can a RAM virtual system. Of course the RAM one is smaller, but you still have to check the size. CF adds support for that with getVFSMetaData().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719682">12</a> by Paul
		posted on 11/12/2009 at 6:25 PM
		</div>
		<div class="comment_text"><p>Comforting to learn that others are having as much difficulty getting this tag to work in a 'real life' app.<br>One problem I have identified relates to the cffile upload info array created.  The CF9 documentation page for the tag states that 'After a file upload is completed, this tag creates an array of structures specified by the result parameter. Each structure in the array contains upload result information for one file'.<br>Unfortunately similar to someone who has added a comment to the info page, only the last element appears to be accessible, hence all the useful file details are lost, making subsequent manipulation and association a bit problematic</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719681">13</a> by Raymond Camden
		posted on 11/12/2009 at 7:03 PM
		</div>
		<div class="comment_text"><p>Paul - I'll have to test this myself. If you can't get data about all the files, then that is truly sucky and makes the feature 100% useless.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719683">14</a> by Raymond Camden
		posted on 11/12/2009 at 7:08 PM
		</div>
		<div class="comment_text"><p>Ahah. Get this. I uploaded 5 files. The CFM that processes the upload is run 5 times. So you don't get 5 results at once - you get 5 separate results. There is no way to tell that they came in as a "unit". I don't necessarily think you _need_ to know that though. Point is - you DO get access to them all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719686">15</a> by Paul
		posted on 11/12/2009 at 7:33 PM
		</div>
		<div class="comment_text"><p>Ray<br>I am very impressed that you are on the case so early - it's 14:14 here in the UK!<br>I picked up that the upload runs almost like a cfloop hence the over writing of the cffile array perhaps.<br>As it runs like a loop I was hoping to pick out info from the cffile array or some form of counter variable as I am trying to rename the uploaded files at the same time.  This covers the situation where a number of totally different filenames can be made into an identifiable set e.g.<br>front.jpg, side.jpg, top.jpg becomes elevation_01_01.jpg, elevation_01_02.jpg, elevation_01_03.jpg<br>At the moment I am working on the idea of throwing the uploaded files into a temp dir, interrogating this directory to get the file details, saving that in a structure within the session scope, processing said files (modifying my structure accordingly) then storing key items from this structure in the 'master' db record relating to this one process. Oh, then moving the modified files to my permanent image directory and deleting the original temp dir.<br>I was hoping that getting into the cffile array at time of upload as it loops through might have cut down the amount of code and hence been a bit more elegant.</p><p>Regards</p><p>Paul</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719684">16</a> by Raymond Camden
		posted on 11/12/2009 at 7:46 PM
		</div>
		<div class="comment_text"><p>As far as I know, it is not like cfloop. Rather, the UI control just does N requests. So the server side code, it's just getting one file at a time. I did a test with a regular form and 3 hard coded file upload fields. When I test with that, I do indeed get an array of 3 items. So file/action=uploadall can correctly handle N file uploads, but the _front_ end, when using the fancy uploader, is doing it simpler. Which kind of makes sense - you get more control if the uploads are one at a time. You can cancel a long running process for example.</p><p>I'm still planning on a _full_ demo of this feature, and I want to demo the simpler version I described above.</p><p>FYI, it's not so early here. ;) I was up at 5:45AM, my kids not much longer. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719685">17</a> by Pablo Varando
		posted on 11/12/2009 at 9:03 PM
		</div>
		<div class="comment_text"><p>What I've had to do in most cases is provided the upload function once that data is created (so it's a two step process).</p><p>So if you have let's say "upload images" I create a gallery, then on each gallery item I provide an upload option... when you upload the images (for example) I tie them to the gallery, then, and only then, do i allow you to edit the details for the image. (There are other uploaders out there that alow you to have those fields with the image uploads so you can do it all in one, but the one in CF9 does not have that feature). A good example of this would be the one that FaceBook ad MySpace uses...)</p><p>Your first example assumes you want to do it in the traditional way (one action page to do it all)... but by leveraging the flash interface you are in fact doing two things (hence why this happens with ALL of them)... I agree it would be nice to have an interface that selects multiple-files, but gets submitted with the form, instead of in a two step process...</p><p>P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719687">18</a> by rouademunte
		posted on 11/14/2009 at 1:31 AM
		</div>
		<div class="comment_text"><p>Just wanted to say great job with the blog, today is my first visit here and I’ve enjoyed reading your posts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719696">19</a> by Ben Nadel
		posted on 11/17/2009 at 7:45 PM
		</div>
		<div class="comment_text"><p>.... and all I ever wanted was a progress-bar for my file upload :) If this ability was some how built into the HTTP upload protocol, we wouldn't need all these special flash-based features.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719690">20</a> by Raymond Camden
		posted on 11/17/2009 at 7:50 PM
		</div>
		<div class="comment_text"><p>Ben, there are a few kinda 'obvious' things I'm surprised aren't in HTML yet. For example, I think the IMG tag should have native support for a mouseover image. Something like:</p><p>&lt;img src="foo.jpg" hover="foo_hot.jpg"&gt;</p><p>Sure it's trivial in JS, but mouseover images have been in use since my grandparents wrote HTML (*cough*) so it's a bit odd that simpler support for it hasn't been added.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719692">21</a> by Ben Nadel
		posted on 11/17/2009 at 7:56 PM
		</div>
		<div class="comment_text"><p>Yeah, definitely.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719691">22</a> by Jon Hartmann
		posted on 11/17/2009 at 9:03 PM
		</div>
		<div class="comment_text"><p>@Ray having a "hover" attribute on the image tag is a terrible idea... I'm a firm believer that XHTML is for providing structure, and JS is for layering on behavior, and things like changing images on hover is certainly a behavior.</p><p>Besides, in what case would you want to hover an image to see a different one in which you would not also need JS to control placement, so a caption, or some other related thing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719697">23</a> by Raymond Camden
		posted on 11/17/2009 at 9:15 PM
		</div>
		<div class="comment_text"><p>We will have to agree to disagree here. I'm a firm believer in standards - but also a strong proponent of being practical. If a solution isn't "beautiful" in a pure comp sci sense but _practical_ for the folks who actually build web pages, then I  would err on the side of practical (for the most part of course, not always!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719695">24</a> by Henry Ho
		posted on 11/25/2009 at 6:40 AM
		</div>
		<div class="comment_text"><p>Is the requirement of urlencode() a bug to begin with?  We were trying to upload to a Coldbox event and the URL is so malformed that it couldn't locate the existing session. e.g.</p><p>url="index.cfm?event=general.myUploadEvent&amp;#urlEncodedFormat(session.urltoken)#"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719694">25</a> by Henry Ho
		posted on 11/25/2009 at 7:02 AM
		</div>
		<div class="comment_text"><p>ok, it seems like all the '&amp;' in the url attribute needs to use urlencode().  Then the URL scope can parse all the key/value pairs, but unfortunately coldbox is still having problem with this urlencode() url somehow...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719698">26</a> by Raymond Camden
		posted on 11/25/2009 at 7:02 AM
		</div>
		<div class="comment_text"><p>Hmmm. Now that I think of it, you shouldn't need to use it. It's supposed to be "URL Ready". Have you compared the value both 'as is' and wrapped in urlENcodedFormat to compare?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719701">27</a> by Sebastiaan
		posted on 12/1/2009 at 1:34 PM
		</div>
		<div class="comment_text"><p>Hi Ray, for all of us on CF8 or Railo, do you have any suggestions for a multi-file uploader for us guys?</p><p>Thanx up front ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719704">28</a> by Raymond Camden
		posted on 12/2/2009 at 4:02 AM
		</div>
		<div class="comment_text"><p>Absolutely: Uploadify - <a href="http://disq.us/url?url=http%3A%2F%2Fuploadify.com%3A2e6dtLpe3-WOmJLCX4AYAmAGvSg&amp;cuid=3321886" rel="nofollow noopener" title="http://uploadify.com">http://uploadify.com</a>. Used it for a project before and it worked great.</p><p>If I've never blogged on it here, let me know and I will try to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719699">29</a> by Richard Gilbert
		posted on 12/2/2009 at 12:52 PM
		</div>
		<div class="comment_text"><p>Wow, Ray, this is amazing!  Here I was, thinking I was all alone in this crisis!  I anxiously await your full demo, as I am grappling with the very same issue -- not being able to submit form info along with my files.  One attribute I thought would work is "onUploadComplete" -- thought I could stick a "document.form1.submit()" or something in there.  Alas, when I use this attribute, the whole element disappears!  What is "onUploadComplete" used for?  How is it used?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719702">30</a> by Raymond Camden
		posted on 12/4/2009 at 8:27 PM
		</div>
		<div class="comment_text"><p>What element disappears? onUploadComplete is used for what you think - running JS code when the file is done uploading.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719700">31</a> by Pete Freitag
		posted on 12/4/2009 at 9:05 PM
		</div>
		<div class="comment_text"><p>Ray, just tested this, and it only seams to work if you are using J2EE session variables, since coldfusion sessions pass two variables CFID/CFTOKEN, it doesn't seam to work in that case.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719703">32</a> by Raymond Camden
		posted on 12/4/2009 at 9:27 PM
		</div>
		<div class="comment_text"><p>What if you change</p><p>uploadall.cfm?#urlEncodedFormat(session.urltoken)#</p><p>to</p><p>urlSessionFormat('uploadall.cfm')</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719705">33</a> by Pete Freitag
		posted on 12/4/2009 at 9:30 PM
		</div>
		<div class="comment_text"><p>Ray, I don't think that would work because "If the client accepts cookies: does not append information", also I think it will still pass two parameters.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719707">34</a> by Raymond Camden
		posted on 12/4/2009 at 9:59 PM
		</div>
		<div class="comment_text"><p>Hmm. So with J2EE turned off I get:</p><p>uploadall.cfm?CFID%3D10508%26CFTOKEN%3D99378812</p><p>I then got rid of urlencodedformat:</p><p>uploadall.cfm?CFID=10508&amp;CFTOKEN=99378812</p><p>Then turned back on J2EE, kept the formatting off, and got:</p><p>uploadall.cfm?CFID=10508&amp;CFTOKEN=99378812&amp;jsessionid=8430d08da42160276820f3c7013e57281487</p><p>These last 2 look valid. So perhaps it is just a bug in my code with urlEncodedFormat?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719708">35</a> by Pete Freitag
		posted on 12/4/2009 at 11:52 PM
		</div>
		<div class="comment_text"><p>Hmm, I guess I'm not sure why it seamed to work with J2EE session variables on then, I was thinking that the reason was that it only needs to pass jsessionid in the url, but it looks like it still passes cfid, cftoken.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719712">36</a> by Raymond Camden
		posted on 12/4/2009 at 11:58 PM
		</div>
		<div class="comment_text"><p>So... are you agreeing I just need to remove the urlEncodedFormat()?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719710">37</a> by Steve Caldwell
		posted on 12/11/2009 at 1:32 AM
		</div>
		<div class="comment_text"><p>I'm having issues with cffileupload prompting me for credentials. My app is running on IIS and requires Windows authentication, but I have set the directory being uploaded to and the file that is handling the upload to allow anonymous access.</p><p>Nevertheless, I still am prompted, and if I cancel the prompt, get a 401 error. If I type my credentials, the uploader hangs and crashes the browser.</p><p>Anyone run into any permissions stuff with this tag? Pretty sure my code is ok, but here it is anyway.</p><p>&lt;cffileupload url="dbaction.cfm?uuid=#url.uuid#&amp;addfiles=1" bgcolor="767676" width="750" maxuploadsize="19" extensionfilter="*.pdf, *.xls, *.xlsx, *.doc, *.docx, *.rtf, *.ppt, *.pptx" /&gt;</p><p>&lt;!---dbaction.cfm---&gt;<br>&lt;cffile action="uploadall" destination="c:\temp"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719711">38</a> by Raymond Camden
		posted on 12/11/2009 at 1:40 AM
		</div>
		<div class="comment_text"><p>Double check with a network monitor, like ServiceCapture or Charles. It should be a HTTP POST call, and if the URL matches the folder in question that is unprotected, it shouldn't be prompting. You know this of course. Mainly I'm just asking you to double check your/our assumptions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719713">39</a> by Steve Caldwell
		posted on 12/11/2009 at 2:01 AM
		</div>
		<div class="comment_text"><p>Ok, my bad. I feel stupid but will share anyway. It took looking at the ServiceCapture path to realize that I left off a directory in my "url" argument. (needed to be './handlers/dbaction.cfm' rather than 'dbaction.cfm')</p><p>Glad this happened though, did I uncover a bug? Apparently CF doesn't tell you when you try to upload to a non-existent page...Wouldn't it make more sense for a 404 to be thrown?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719716">40</a> by Raymond Camden
		posted on 12/11/2009 at 2:08 AM
		</div>
		<div class="comment_text"><p>Where would it get 'thrown'? In the status area at the bottom of the UI control? Also note most users wouldn't know what a 404 is anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719714">41</a> by Steve Caldwell
		posted on 12/11/2009 at 2:13 AM
		</div>
		<div class="comment_text"><p>I was thinking in the same place where the 401 error was displayed previously, in the progress bar on the file that failed.</p><p>Could be useful for the dev who is having brain trouble that day, unless I'm the only one who struggles with that from time to time :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719715">42</a> by Raymond Camden
		posted on 12/11/2009 at 2:14 AM
		</div>
		<div class="comment_text"><p>Sounds ok to me. File an ER. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719717">43</a> by Pete Freitag
		posted on 12/11/2009 at 2:18 AM
		</div>
		<div class="comment_text"><p>Did you try specifying onerror="jsFunctionName"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719719">44</a> by Raymond Camden
		posted on 12/11/2009 at 2:26 AM
		</div>
		<div class="comment_text"><p>Well I think even if you _don't_ specify an error handler, by default the UI should indeed show that something had gone wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719718">45</a> by Steve Caldwell
		posted on 12/11/2009 at 3:59 AM
		</div>
		<div class="comment_text"><p>something else I just noticed, you can only pass one parameter through to the action page. for example, I wanted one .cfm page to handle different situations, so url.addfile=1 fires off one section, url.appendfile=1 does another, etc.</p><p>I also needed to pass the UUID to my handler page so it knows what to name the folder...but it only reads the first parameter after the ? in my url</p><p>I may be getting my terms mixed up, so here's what I mean:</p><p>url="./handlers/file_manager.cfm?uuid=#url.uuid#&amp;addfile=1" only sends the uuid, and "url="./handlers/file_manager.cfm?addfile=1&amp;uuid=#url.uuid#" only sends addfile=1...</p><p>I guess I'll have to create separate pages for each action?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719725">46</a> by Raymond Camden
		posted on 12/11/2009 at 4:07 AM
		</div>
		<div class="comment_text"><p>I don't quite get what you mean. It sounds like you want to do two things on upload, which is one issue. The second thing is that it sounds like you just want to pass 2 (or more) URL variables. If you cant, then that is a serious bug. Tell me - what happens if you use &amp; to separate the values?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719723">47</a> by Steve Caldwell
		posted on 12/11/2009 at 7:08 PM
		</div>
		<div class="comment_text"><p>yeah that's what I mean, I am trying to pass 2 URL variables, separated by "&amp;", and only the first is passed. the second and subsequent variables are lost.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719722">48</a> by Raymond Camden
		posted on 12/11/2009 at 7:13 PM
		</div>
		<div class="comment_text"><p>So did you try &amp;? If my blog messes that up, it is the ampersand followed by a, m, p and a semicolon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719721">49</a> by Steve Caldwell
		posted on 12/11/2009 at 7:20 PM
		</div>
		<div class="comment_text"><p>yep, still nothing. I'm filing a bug report now</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719724">50</a> by Raymond Camden
		posted on 12/11/2009 at 7:21 PM
		</div>
		<div class="comment_text"><p>Ok. Dang that kind of sucks. Of course you can always make a struct of data and serializeJSON it (or encode it some way) and pass one arg.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719726">51</a> by Douglas Tietjen
		posted on 5/26/2010 at 2:31 AM
		</div>
		<div class="comment_text"><p>My project works perfect in IE8, but Firefox and Chrome and maybe others won't remember me.  In other words, I am uploading on a page that requires a login.  I am logged in, but when I upload a file it forgets any login info on the upload.cfm page and shows the loginpage.cfm.  IE8 somehow remembers it.  I have tried the URLEncode(Session.URLToken), and using Fiddler it seems to be going across, but for some reason it doesn't do anything with it.</p><p>Any ideas of what I might check?  (BTW, I also found out the hard way about it only sending 1 parameter across, even if you sent more)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719727">52</a> by Raymond Camden
		posted on 5/27/2010 at 11:27 AM
		</div>
		<div class="comment_text"><p>Hmm. Can you add logging to onSessionStart and see if it is firing in FF/Chrome?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719728">53</a> by Douglas Tietjen
		posted on 5/27/2010 at 6:33 PM
		</div>
		<div class="comment_text"><p>I decided to have a process folder where I call it.  In reading others comments it seems that it doesn't pass the cookie variables across and so therefore my login doesn't work, because I am using cflogin with sessionmanagement and storing cookies.  Anyway, I just pass an encrypted value across and decrypt and go on my way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719729">54</a> by Budd Wright
		posted on 6/4/2010 at 5:12 AM
		</div>
		<div class="comment_text"><p>We're starting to run into something similiar with ColdFusion 9 vs ColdFusion 8.  Basically, a couple years ago we built our own Flash multi-file uploader, and ran into the "Session not carried across in Firefox" issue, so I simply appended the current Session.cfid and Session.cftoken to the URL called by the Flash SWF, and everything worked fine in CF8.</p><p>Then came CF9, and now it doesn't work; we originally thought that a Firefox update was behind the issue, but today while testing and looking in my IIS logs, I see that the POST requests do indeed reach IIS, and the URL carries the correct session CFID and CFTOKEN vars.  But when logging to the administrator log files, the actual Session.CFID and Session.CFTOKEN variables end up with different values... basically, Flash's own session.</p><p>Perplexed as to why the URL variables were now being ignored, whereas they weren't before, I found this blurb part way down the Adobe CF9 Client State Management docs (<a href="http://disq.us/url?url=http%3A%2F%2Ftinyurl.com%2F2c6jyfy%29%3A%3ApoEGbxWgrVn81ggdHNTv44aoLRU&amp;cuid=3321886" rel="nofollow noopener" title="http://tinyurl.com/2c6jyfy):">http://tinyurl.com/2c6jyfy):</a></p><p>Note: The behavior is as follows when CFID and CFTOKEN are provided in the URL: If session exists, the CFID and CFTOKEN from the URL are ignored. If the session does not exist, CFID and CFTOKEN from the URL are used to validate the session and the session is used if it is valid. If the session is not valid, a new session is created. CFID and CFTOKEN are regenerated.</p><p>So, it would seem that CF9 changed it's behavior from CF8, where the URL variables overrode any other session variables.  That seems odd to me, but it's the best I could come up with today... let me know if you know any differently, Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719732">55</a> by Raymond Camden
		posted on 6/5/2010 at 12:42 AM
		</div>
		<div class="comment_text"><p>Question - does it work if you use session.urltoken instead? That's the proper way (afaik), instead of manually doing cfid/cftoken.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719730">56</a> by Budd Wright
		posted on 6/5/2010 at 1:24 AM
		</div>
		<div class="comment_text"><p>I'll have to try that, Ray.  However, it definitely looks like a change from CF9 to CF8; I ran some tests today by manipulating the URL variables to change sessions between several browsers, using CF8 and CF9 servers, and it all worked in CF8, but was ignored in CF9.  (I blogged about my results at <a href="http://disq.us/url?url=http%3A%2F%2Fblog.pelcosolutions.com%3A6WvGpeiaNYqmlVQ1quF614u_M74&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.pelcosolutions.com">http://blog.pelcosolutions.com</a>, a bit long winded, skip to the test stuff, and see if your results are the same!).</p><p>I'll let you know if the Session.urltoken stuff makes a difference, but I'm guessing that this change just makes CF9 more secure, and it won't?  Not necessarily a bad thing, just a change!  ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719733">57</a> by Raymond Camden
		posted on 6/5/2010 at 1:34 AM
		</div>
		<div class="comment_text"><p>I'm not sure it is more secure per se. Remember that since CF6, we've had j2ee sessions as an option, and that uses different variables. session.urltoken works with both and is 'safe' to use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719736">58</a> by Tim Do
		posted on 8/7/2010 at 3:38 AM
		</div>
		<div class="comment_text"><p>cffileupload doesn't seem to be working on chrome.  it works fine in ie/ff.  is there a work around?  i keep getting status code: 302</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719735">59</a> by Raymond Camden
		posted on 8/7/2010 at 3:40 AM
		</div>
		<div class="comment_text"><p>I -only- use Chrome and have not seen any issues. Got an example online that I can hit?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719739">60</a> by Darrin
		posted on 1/17/2011 at 6:02 PM
		</div>
		<div class="comment_text"><p>I get a status code : 302 error if on my upload.cfm page I have &lt;cflocation url="formSelector.cfm?id=#session.userObj.trackerID#" addtoken="no" /&gt;</p><p>I need to change pages after the files are uploaded</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719740">61</a> by Raymond Camden
		posted on 1/17/2011 at 7:10 PM
		</div>
		<div class="comment_text"><p>The multifile uploader uses a background network process to upload the files. You can't cflocate that because it isn't your main browser's request per se. It isn't an Ajax XHR request, but you can think of it the same. So if your need is to go someplace after done uploading, use the onuploadcomplete attribute of cffileupload to specify a JS function to run.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719741">62</a> by Jonathan
		posted on 1/21/2011 at 6:36 AM
		</div>
		<div class="comment_text"><p>So I had this working on 9.0. I upgraded to 9.0.1 on Monday and both parts in my code where I use this breaks. The problem is that the variables aren't getting passed to the post upload code. I tried both with and without the url encoding. No luck. Anyone know of a bug or workaround? I'm using coldbox.</p><p>Sample:<br>	&lt;cfset request.theURLVars = urlEncodedFormat("teamid=#event.getvalue('teamid',0)#&amp;linkid=#event.getvalue('linkid',0)#") /&gt;</p><p>	&lt;cffileupload progressbar="true" stoponerror="true" maxfileselect="20" title="Photo Gallery Image Upload" <br>			extensionfilter = "jpg,png,gif" deletebuttonlabel="Remove from upload list" <br>			clearbuttonlabel="Clear upload list" url="/upload/uploadPhotoGalleryProcess.cfm?#request.theURLVars#"/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719742">63</a> by Raymond Camden
		posted on 1/21/2011 at 7:54 PM
		</div>
		<div class="comment_text"><p>Have you tried a network monitor like Charles or Service Capture to see the request being made?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719743">64</a> by Jonathan
		posted on 1/21/2011 at 8:03 PM
		</div>
		<div class="comment_text"><p>I resolved the issue. I found that I was able to now pass more than one url variable and didn't need the url encoding.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719744">65</a> by charlie arehart
		posted on 2/4/2011 at 3:13 AM
		</div>
		<div class="comment_text"><p>Great stuff as always, Ray. About the link to Dan's article in your entry, though, it fails. It may not be obvious to some, but if you just take off the _02 at the end of the filename, it works: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fdevnet%2Fcoldfusion%2Farticles%2Fcoldfusion9_uicontrols.html%3A60KQq4PhWYGTCTFw95-Y8IS_klc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/devnet/coldfusion/articles/coldfusion9_uicontrols.html">http://www.adobe.com/devnet...</a></p><p>Ray, if you want to just edit the entry and delete this comment, that's fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719745">66</a> by Raymond Camden
		posted on 2/4/2011 at 6:51 AM
		</div>
		<div class="comment_text"><p>I had that same link a bit earlier so I just removed the second link. Thanks Charlie.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719747">67</a> by prast
		posted on 8/24/2011 at 4:58 AM
		</div>
		<div class="comment_text"><p>Why i got error status code:302 in firefox and chrome but in internet explorer was working.</p><p>&lt;cffileupload  url="uploaddocs.cfm" progressbar="true" name="myupload" addButtonLabel = "Add File" clearButtonlabel = "Clear it" hideUploadButton = "false" width=600 height=400 title = "Add New Document" BGCOLOR="##FFFFFF" MAXFILESELECT=10 UPLOADBUTTONLABEL="Upload Files" stopOnError=false/&gt;</p><p>uploaddocs.cfm<br>&lt;cfscript&gt;<br>	thisPath = ExpandPath("*.*");<br>	thisDirectory = GetDirectoryFromPath(thisPath);<br>	FileDir = thisDirectory &amp; "uploads";<br>	DocRoot = request.root;<br>	RootDir = GetDirectoryFromPath(DocRoot);<br>&lt;/cfscript&gt;</p><p>&lt;cfif not DirectoryExists(FileDir)&gt;<br>	&lt;cfdirectory action="create" directory="#FileDir#" &gt;<br>&lt;/cfif&gt;</p><p>&lt;cffile action="upload" filefield="fileData" destination = "#FileDir#" nameconflict="makeunique" mode="777"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719750">68</a> by prast
		posted on 8/24/2011 at 5:13 AM
		</div>
		<div class="comment_text"><p>I was searching on the net and got here<br>url="someurl.cfm?#urlEncodedFormat(session.urltoken)#"<br>then i just added it and it worked.</p><p>Thank's</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719751">69</a> by Jirone
		posted on 10/25/2011 at 3:53 AM
		</div>
		<div class="comment_text"><p>Greetings!</p><p>I've recently encountered this blog and it's assets for the CFFileupload. Does anyone have any suggestions for multiple file download? i.e. CFFiledownload?</p><p>Many Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719749">70</a> by Raymond Camden
		posted on 10/25/2011 at 5:58 AM
		</div>
		<div class="comment_text"><p>Well, it depends on what you mean. You can't send N files at once to a user. You can send one at a time via click. You can send N files in a zip file too. I suppose a Flash-based downloader would possibly allow you to send N files to the user at once, but that would be a pretty scary prospect imo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719752">71</a> by Jirone
		posted on 10/27/2011 at 12:37 AM
		</div>
		<div class="comment_text"><p>Thank you for your response!</p></div>
	</div>
</div>
		