
<div class="comment" id="c_1713746147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746147">1</a> by Peter Carabeo-Nieva
		posted on 5/2/2013 at 3:36 AM
		</div>
		<div class="comment_text"><p>I have a PhoneGap+jQM-based app where I hooked the progress event data to a nice Boostrap CSS-only animated progressbar (since jQM doesn't have progressbar UI) for providing status of uploads to an Amazon S3 bucket. The whole thing works like a charm and looks great, good stuff! :-)</p><p>I have to say that my only pain point with PhoneGap/Cordova so far is this long standing issue of camera.getPicture() not being able to support multiple media select at once: <a href="https://disq.us/url?url=https%3A%2F%2Fissues.apache.org%2Fjira%2Fbrowse%2FCB-1215%3AKQ4Jpq4n69YQUbGgc-yW2QukJsI&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.apache.org/jira/browse/CB-1215">https://issues.apache.org/j...</a> The only workarounds I know of are the hassle of integrating plugins to accommodate that or the one I did for myself which was to roll my own image gallery for multiple media select through use File API to read the images available on the device, create thumbnails of them via javascript-based image scaling algorithms, and implement caching/pagination for the whole thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746150">2</a> by Cutter
		posted on 5/2/2013 at 1:34 PM
		</div>
		<div class="comment_text"><p>My favorite cover of that will always be Led Zepplin. I'm gonna have to check out that site.</p><p>Cool code Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746149">3</a> by Raymond Camden
		posted on 5/2/2013 at 3:53 PM
		</div>
		<div class="comment_text"><p>@Peter: Does the Capture API work for you instead?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746151">4</a> by Peter Carabeo-Nieva
		posted on 5/2/2013 at 10:59 PM
		</div>
		<div class="comment_text"><p>@Raymond Nope, Capture API does allow multiple images/videos to be taken live on the device at once (limited by the optional "limit" parameter) but what I need is the ability to choose multiple existing media files (which had already been taken by the device's camera or copied over to the device's memory in the past) from the device's native gallery.</p><p>The current state of the PhoneGap Camera.getPicture method is akin to the web 1.0 days when an html form looking to accept some file from the user would throw a file dialog that only allows one to be selected. Then Flash's equivalent came along and we were able to hold down shift or control and select multiple files at once. I find it strange that cordova/phonegap has reached such maturity and yet still won't have this basic "multiple media select from native gallery" feature until some version past 3.0 or so :-/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746152">5</a> by Peter Carabeo-Nieva
		posted on 5/2/2013 at 11:07 PM
		</div>
		<div class="comment_text"><p>Also, I chose the "code my own media gallery in the webview (with help from PG File API)" workaround instead of the "use a phonegap plugin" workaround because: 1) It didn't break my ability to still cloud compile through Build whereas using some random plugin would've 2) It allows me to serve the exact same multiple media select UI/functionality to all users instead of their being being differences between users based on their differing native galleries</p><p>Let me also mention that on Android I can use PG File API to access the entire file system but on iOS apps are sandboxed so I actually can't access the media files that are in the camera roll for instance :-/ (So this is where I really do need that multiple media select being supported by camera.getPicture)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746167">6</a> by Raymond Camden
		posted on 5/3/2013 at 6:00 PM
		</div>
		<div class="comment_text"><p>Ah, Peter, thanks for clarifying that!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746176">7</a> by Tony Awad
		posted on 5/11/2013 at 5:29 PM
		</div>
		<div class="comment_text"><p>Hello, great article. I really hope you do one about uploading to an  amazon s3 bucket using the phonegap file transfer. Best wishes</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746174">8</a> by Raymond Camden
		posted on 5/11/2013 at 6:04 PM
		</div>
		<div class="comment_text"><p>I don't have one planned, but I know it has been done. I'd do a quick check of the Google group (ie load it and search it ;).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746177">9</a> by Guillaume Bartolini
		posted on 5/28/2013 at 11:40 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>What is the best way to download multiple files from a server (json files) and have a progress event for the lot.</p><p>what i a have at the moment is a loop with my <a href="http://disq.us/url?url=http%3A%2F%2FfileTransfer.download%3A1mXfnF5O25ewQTsY_YNvptP0aA4&amp;cuid=3321886" rel="nofollow noopener" title="fileTransfer.download">fileTransfer.download</a>() function inside...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746179">10</a> by Raymond Camden
		posted on 5/28/2013 at 5:18 PM
		</div>
		<div class="comment_text"><p>Hmm. Let's forget about the progress for a bit. The best way (imo) to handle N async events is to use Deferreds in jQuery. They make it (somewhat) easy to say, "I've fired N things and when they are all done, do X."</p><p>The progress meter would be more difficult. You could do N progress meters of course. Windows does that - if I remember right, when copying/moving a set of files. One PM would be fairly difficult. You would need to adjust the Max value as you get more and more data in. To support that, you would need to associate on PM event with one file. I'm not sure you can do that. No... I think you could. Yeah, so you would need to create an aggregate file size.</p><p>I think it is possible. Just non-trivial. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746180">11</a> by Guillaume Bartolini
		posted on 5/29/2013 at 12:15 AM
		</div>
		<div class="comment_text"><p>Thanks for your reply Raymond. Sadly i am using zepto and i'm not sure there is a deferred function...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746182">12</a> by Guillaume Bartolini
		posted on 5/29/2013 at 12:17 AM
		</div>
		<div class="comment_text"><p>Back again... Underscore might be my solution <a href="http://disq.us/url?url=http%3A%2F%2Funderscorejs.org%2F%23defer%3Ael2ViBT5UGM5MLoTl8wsq8j1Alo&amp;cuid=3321886" rel="nofollow noopener" title="http://underscorejs.org/#defer">http://underscorejs.org/#defer</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746185">13</a> by Shailendra
		posted on 6/19/2013 at 8:38 AM
		</div>
		<div class="comment_text"><p>I am getting the loaded size twice as that of the total size</p><p>fileTransfer.onprogress = function(progressEvent) {<br>		if (progressEvent.lengthComputable) {<br>			perc = Math.floor((progressEvent.loaded / <a href="http://disq.us/url?url=http%3A%2F%2FprogressEvent.total%3ANDGX89rDBmWTHsVJMCEFEMcG2kI&amp;cuid=3321886" rel="nofollow noopener" title="progressEvent.total">progressEvent.total</a>) * 100);<br>			//perc = Math.floor(progressEvent.loaded / <a href="http://disq.us/url?url=http%3A%2F%2FprogressEvent.total%3ANDGX89rDBmWTHsVJMCEFEMcG2kI&amp;cuid=3321886" rel="nofollow noopener" title="progressEvent.total">progressEvent.total</a> * 100);<br>			status.text(perc + "% loaded..."); <br>			loaded.text(progressEvent.loaded);<br>			if(fileSize.text()==""){<br>				fileSize.text(" of "+<a href="http://disq.us/url?url=http%3A%2F%2FprogressEvent.total%3ANDGX89rDBmWTHsVJMCEFEMcG2kI&amp;cuid=3321886" rel="nofollow noopener" title="progressEvent.total">progressEvent.total</a>+" bytes");<br>			}<br>		}// else {</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746189">14</a> by Raymond Camden
		posted on 6/19/2013 at 3:41 PM
		</div>
		<div class="comment_text"><p>It could possibly be this - from the docs: "On both Android an iOS, lengthComputable is false for downloads that use gzip encoding."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746186">15</a> by Shailendra
		posted on 6/20/2013 at 8:31 AM
		</div>
		<div class="comment_text"><p>thank you Raymond for reply,</p><p>I tested lengthComputable  in funbook, it is true. I dont understand why<br>progressEvent.loaded goes only twice of <a href="http://disq.us/url?url=http%3A%2F%2FprogressEvent.total%3ANDGX89rDBmWTHsVJMCEFEMcG2kI&amp;cuid=3321886" rel="nofollow noopener" title="progressEvent.total">progressEvent.total</a>, another thing is 'download complete message'  is fired only once at the end, it means download event is fired only once not twice</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746184">16</a> by Raymond Camden
		posted on 6/20/2013 at 6:21 PM
		</div>
		<div class="comment_text"><p>Yeah you got me there man. I would have to go deep into your code and test to give you firm reasons.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746187">17</a> by Shailendra
		posted on 6/28/2013 at 1:28 PM
		</div>
		<div class="comment_text"><p>sorry raymond i have been busy somewhere else, did you got the same problem, i still couldn't find the reason, your feedback might be very helpful and give me some hints. <br>Thanks for giving your time in my problem</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746188">18</a> by Raymond Camden
		posted on 6/28/2013 at 3:53 PM
		</div>
		<div class="comment_text"><p>No, I'm not seeing it myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746191">19</a> by Alexey Gladey
		posted on 7/1/2013 at 3:03 PM
		</div>
		<div class="comment_text"><p>I have ran into the same problem...<br>The same code works different on iOS and Android.. iOS ok, but getting 200% on Android... tried on Phonegap 2.7.0 and 2.9.0.. btw, i'm using Phonegap Build service.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746190">20</a> by Raymond Camden
		posted on 7/1/2013 at 7:44 PM
		</div>
		<div class="comment_text"><p>Are you using gzip? The docs say this will change the values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746192">21</a> by florin cosmin onciu
		posted on 8/5/2013 at 11:15 AM
		</div>
		<div class="comment_text"><p>I have the same problem with the progress percent. It goes up to 200% in Android. I didn't tested on iOS. I am using Cordova 3.0 <br>I think I have to adjust the value .. but it's not the best solution. <br>Or it might be a bug somewhere ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746194">22</a> by Aaron
		posted on 8/6/2013 at 12:00 PM
		</div>
		<div class="comment_text"><p>@Peter, could you link me to the phonegap plugin that will enable multiple image selecting ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746195">23</a> by Andrew Scott
		posted on 9/4/2013 at 6:21 PM
		</div>
		<div class="comment_text"><p>There does appear to be an issue with the .loaded value on android.  The returned a value is x2 greater than what's actually been received.</p><p>I came across this post after discovering the issue on my own implementation of progress on FileTransfer.  It's much the same as you have above, with the exception that I wasn't testing the .lengthComputable.</p><p>I've tried with different file types and with gzip enabled &amp; disabled on the server; none of which made any changes to the .loaded value.</p><p>Cordova version 3.0.8 with an AVD that's running 4.3; tested with both Arm and Atom CPUs.</p><p>As a work around until a proper fix is found I've installed the device plugin :</p><p>   cordova plugin add <a href="https://disq.us/url?url=https%3A%2F%2Fgit-wip-us.apache.org%2Frepos%2Fasf%2Fcordova-plugin-device.git%3AnvSSXH9z_wo5z99FZJFN2dVcVw0&amp;cuid=3321886" rel="nofollow noopener" title="https://git-wip-us.apache.org/repos/asf/cordova-plugin-device.git">https://git-wip-us.apache.o...</a></p><p>And then modified the calculation using :</p><p>	var loaded = device.platform == "Android" ?  (prog.loaded / 2) : prog.loaded;<br>        var pcnt = 	Math.round( (loaded / <a href="http://disq.us/url?url=http%3A%2F%2Fprog.total%3Amu9gvkoym7ftMoXpywDL3awpXdQ&amp;cuid=3321886" rel="nofollow noopener" title="prog.total">prog.total</a>) * 100 );</p><p>If anyone has resolved this issue properly please let us know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746196">24</a> by Raymond Camden
		posted on 9/4/2013 at 6:24 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing this, Andrew!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746197">25</a> by souravmitra
		posted on 9/17/2013 at 10:47 AM
		</div>
		<div class="comment_text"><p>I have seen video ,here downloading and playing the file is not taking more than 5 seconds but Incase of my build everything working fine but taking more than 10 seconds.Is it depend on bandwidth or download speed?<br>Thankyou</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746199">26</a> by Alex
		posted on 9/17/2013 at 2:14 PM
		</div>
		<div class="comment_text"><p>Hi Rayman,</p><p>Nice blog, i've found the tutorials on <a href="http://disq.us/url?url=http%3A%2F%2Ffiletranfer.download%3AEATd1HgqU19-RylDYUqBq5_Km0w&amp;cuid=3321886" rel="nofollow noopener" title="filetranfer.download">filetranfer.download</a> really useful.</p><p>Do you have a working example of how to download multiple files and firing an event when all are completed (as you mentioned before in a previous comment) with jQuery.Deferred?</p><p>If not no worries just thought I would check as I am struggling to get my head round how this could be achieved.</p><p>Thanks</p><p>Alex</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746201">27</a> by Raymond Camden
		posted on 9/19/2013 at 6:07 PM
		</div>
		<div class="comment_text"><p>Sorry, I don't.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746198">28</a> by Alex
		posted on 9/20/2013 at 11:59 AM
		</div>
		<div class="comment_text"><p>Thanks anyway, I managed to get multiple files upload working which is great, I think it was courtesy of a Simon McDonald!</p><p>Basically just put the files to be downloaded in an array and popped the last element off when it was succesfully download and just recalled the same function. It was pretty straight forward when you think about it, thanks again Simon!</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F18847763%2Fcheck-when-multiple-files-have-dowloaded-with-phonegap%3A4uFJePz2mtbuoDppVXTgSI2t43Q&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/18847763/check-when-multiple-files-have-dowloaded-with-phonegap">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746200">29</a> by Raymond Camden
		posted on 9/20/2013 at 3:50 PM
		</div>
		<div class="comment_text"><p>Ok, glad you got it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746203">30</a> by Tarhe Oweh
		posted on 10/13/2013 at 5:48 PM
		</div>
		<div class="comment_text"><p>Great article. I got it to work first time without stress on a dialog box on Jquery Mobile. I got a problem with this line that goes up to 200%;</p><p>var perc = Math.floor(progressEvent.loaded / <a href="http://disq.us/url?url=http%3A%2F%2FprogressEvent.total%3ANDGX89rDBmWTHsVJMCEFEMcG2kI&amp;cuid=3321886" rel="nofollow noopener" title="progressEvent.total">progressEvent.total</a> * 100);</p><p>But since I am using the code to download updates from within my application, I change the 100 to 50 which halve the total percentage to 100% maximum.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746204">31</a> by Andrew Sctt
		posted on 10/13/2013 at 6:10 PM
		</div>
		<div class="comment_text"><p>@Tarhe - Remember that it's only android that's suffering with the incorrect .loaded value.  Add the device plugin and check for device.platform == "Android" before making the adjustment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746206">32</a> by tarhe oweh
		posted on 10/13/2013 at 6:49 PM
		</div>
		<div class="comment_text"><p>@Andrew the Apps is meant to run on Android only, at least for now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746208">33</a> by rc1
		posted on 11/5/2013 at 1:03 PM
		</div>
		<div class="comment_text"><p>how to pause and cancel download?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746207">34</a> by Raymond Camden
		posted on 11/5/2013 at 5:12 PM
		</div>
		<div class="comment_text"><p>Please read the docs:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcordova.apache.org%2Fdocs%2Fen%2F3.1.0%2Fcordova_file_file.md.html%23FileTransfer%3ANJpiPaJDMARRV2ZvT1qmxTELkFU&amp;cuid=3321886" rel="nofollow noopener" title="http://cordova.apache.org/docs/en/3.1.0/cordova_file_file.md.html#FileTransfer">http://cordova.apache.org/d...</a></p><p>There is an abort method - but no pause.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746205">35</a> by Shailendra
		posted on 11/8/2013 at 2:54 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>Could you please suggest me, <br>I have a zipped folder (may include images, small audio and video files), now i need to download and extract it to client device.</p><p>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746210">36</a> by Raymond Camden
		posted on 11/8/2013 at 4:40 PM
		</div>
		<div class="comment_text"><p>Try zip.js - <a href="http://disq.us/url?url=http%3A%2F%2Fgildas-lormeau.github.io%2Fzip.js%2F%3AMgI924G12dGHWB7c_JjPva1LzFk&amp;cuid=3321886" rel="nofollow noopener" title="http://gildas-lormeau.github.io/zip.js/">http://gildas-lormeau.githu...</a>. I've blogged about it before. Not in context of PhoneGap, but for another demo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746212">37</a> by Darmie
		posted on 11/26/2013 at 5:12 PM
		</div>
		<div class="comment_text"><p>Hi Raymond. Thanks for the tutorial. I have tried your code but it doesn't seem to work. when i click the download button nothing happens. I am using phonegap Build (Phonegap 3.0), tested the app on Android 4.3 device.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746217">38</a> by Darmie
		posted on 11/26/2013 at 5:30 PM
		</div>
		<div class="comment_text"><p>Here's what i did:</p><p>&lt;span id="dlink"&gt;&lt;img src="img_bookdl.png"&gt;&lt;/span&gt;<br>&lt;span id="status"&gt;&lt;/span&gt;</p><p>document.addEventListener('deviceready', deviceready, false);<br>var server = "<a href="http://disq.us/url?url=http%3A%2F%2Fstudentlife.com.ng%2F%3AhMKQ-YJZiHRnpdxQQfDKo0UJM68&amp;cuid=3321886" rel="nofollow noopener" title="http://studentlife.com.ng/">http://studentlife.com.ng/</a>";<br>var sectionname;</p><p>var buttonDom;<br>var statusDom;<br>var fileSystem;<br>function deviceready() {<br>    console.log('dv ready');</p><p>	//step one is to request a file system	<br>	window.requestFileSystem(LocalFileSystem.TEMPORARY, 0, <br>		function(fs) {<br>			buttonDom = document.querySelector('#dlink');<br>			statusDom = document.querySelector('#status');<br>			buttonDom.addEventListener('touchend', dlink, false);<br>			fileSystem = fs;<br>		}, function(e) {<br>			alert('failed to get fs');<br>			alert(JSON.stringify(e));<br>		});<br>}<br>function StartDownload()<br>        {</p><p>        var fileTransfer = new FileTransfer();<br>        var uri = encodeURI("<a href="http://disq.us/url?url=http%3A%2F%2Fstudentlife.com.ng%2Fthe%3AzEGJAIZLKuvBETquQgQ7HjFMiuQ&amp;cuid=3321886" rel="nofollow noopener" title="http://studentlife.com.ng/the">http://studentlife.com.ng/the</a> great gatsby.pdf");<br>        var filePath =  fileSystem.root.fullPath+'/studentlife.pdf';<br>		fileTransfer.onProgress = function (progressEvent)<br>		{<br>			if (progressEvent.lengthComputable)<br>			 {<br>				var perc = Math.floor(progressEvent.loaded / <a href="http://disq.us/url?url=http%3A%2F%2FprogressEvent.total%3ANDGX89rDBmWTHsVJMCEFEMcG2kI&amp;cuid=3321886" rel="nofollow noopener" title="progressEvent.total">progressEvent.total</a> * 100);<br>				statusDom.innerHTML=perc + "% loaded...";<br>			} <br>			else <br>			{<br>					statusDom.innerHTML="Loading";<br>			}<br>		}<br>        <a href="http://disq.us/url?url=http%3A%2F%2FfileTransfer.download%3A1mXfnF5O25ewQTsY_YNvptP0aA4&amp;cuid=3321886" rel="nofollow noopener" title="fileTransfer.download">fileTransfer.download</a>(<br>            uri,<br>            filePath,<br>            function(entry) {<br>                statusDom.innerHTML="download complete: " + entry.fullPath;<br>            },<br>            function(error) {<br>                statusDom.innerHTML="download error source " + error.source;<br>                statusDom.innerHTML="download error target " + <a href="http://disq.us/url?url=http%3A%2F%2Ferror.target%3Ayhu4ttdns4kVaO6c5vyrH3WW974&amp;cuid=3321886" rel="nofollow noopener" title="error.target">error.target</a>;<br>                statusDom.innerHTML="upload error code" + error.code;<br>            });<br>        }</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746218">39</a> by Raymond Camden
		posted on 11/29/2013 at 1:56 AM
		</div>
		<div class="comment_text"><p>Are you sure you added Filesystem support for the plugin? That's new for 3.0 and PhoneGap Build.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746213">40</a> by Isabella Cris
		posted on 12/8/2013 at 6:51 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I am new to Phonegap and android. I am stuck in a task where I have to upload multiple files to the server. This also include database insertion operation (Fetch form entry values and store in DB). I am using HTML tag for browsing file (Image .jpg). Eg.<br>&lt;input type="file" id="upload_file_1" /&gt;</p><p>Kindly help us in this to upload files on to server.</p><p>Thanks in advance.<br>Regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746216">41</a> by Raymond Camden
		posted on 12/8/2013 at 8:25 PM
		</div>
		<div class="comment_text"><p>"Kindly help us in this to upload files on to server."<br>This can be handled by the FileTransfer code I talk about in this blog entry. Please read the documentation and let me know if you have a *specific* question.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746214">42</a> by Neerav
		posted on 12/12/2013 at 12:50 PM
		</div>
		<div class="comment_text"><p>Can you tell me how to show the progress of all files being downloaded from the server...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746220">43</a> by Raymond Camden
		posted on 12/12/2013 at 9:45 PM
		</div>
		<div class="comment_text"><p>@Neerav: Not sure what you mean. Given N transfers - you can create N divs and update them as I did in the example above. Or you could attempt to use one progress display and do the math to figure out the right %.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746219">44</a> by Colin Mahoney
		posted on 1/9/2014 at 7:51 PM
		</div>
		<div class="comment_text"><p>The problem with progressEvent.loaded having twice the expected value seems to be caused by the definition of the class *SimpleTrackingInputStream* in <a href="http://disq.us/url?url=http%3A%2F%2FFileTransfer.java%3AbldEyztQd49NQ4fujhsSajwYri8&amp;cuid=3321886" rel="nofollow noopener" title="FileTransfer.java">FileTransfer.java</a>.</p><p>SimpleTrackingInputStream overrides the three read methods from InputStream, in each case calling the corresponding <a href="http://disq.us/url?url=http%3A%2F%2FInputStream.read%3AYrsB57zgC4EvcR5Tcw6QrKrEUFI&amp;cuid=3321886" rel="nofollow noopener" title="InputStream.read">InputStream.read</a> and incrementing a counter by the number of bytes read. The problem is that InputStream implements _read(byte[] buffer)_ by calling _read(byte[] bytes, int offset, int count)_ - the end result is that the counter is incremented twice. Commenting out the method <a href="http://disq.us/url?url=http%3A%2F%2F_SimpleTrackingInputStream.read%3AVy3G4G_BiFqbdsEX8bRLxvgVIOc&amp;cuid=3321886" rel="nofollow noopener" title="_SimpleTrackingInputStream.read">_SimpleTrackingInputStream....</a>(byte[] bytes, int offset, int count)_ in <a href="http://disq.us/url?url=http%3A%2F%2FFileTransfer.java%3AbldEyztQd49NQ4fujhsSajwYri8&amp;cuid=3321886" rel="nofollow noopener" title="FileTransfer.java">FileTransfer.java</a> solved the problem for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746215">45</a> by Raymond Camden
		posted on 1/9/2014 at 8:29 PM
		</div>
		<div class="comment_text"><p>@Colin - thank you for doing this research. Cordova is open source - could you submit a pull request with that fix?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746222">46</a> by Colin Mahoney
		posted on 1/9/2014 at 9:50 PM
		</div>
		<div class="comment_text"><p>OK, will do!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746224">47</a> by Colin Mahoney
		posted on 1/10/2014 at 2:00 PM
		</div>
		<div class="comment_text"><p>I've submitted a pull request for the changes:<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fapache%2Fcordova-plugin-file-transfer%2Fpull%2F14%3AGfGYFfxoMBalrpWPJqIpZSrU9Cw&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/apache/cordova-plugin-file-transfer/pull/14">https://github.com/apache/c...</a></p><p>Also added comment to issue on JIRA:<br><a href="https://disq.us/url?url=https%3A%2F%2Fissues.apache.org%2Fjira%2Fbrowse%2FCB-5631%3Ag8aeHFPf3oPvzPX2usis34AYIzc&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.apache.org/jira/browse/CB-5631">https://issues.apache.org/j...</a></p><p>Hope I got this right - haven't done it before!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746223">48</a> by Raymond Camden
		posted on 1/10/2014 at 5:20 PM
		</div>
		<div class="comment_text"><p>Thank you - as a PG user - I appreciate it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746221">49</a> by Zoruninho
		posted on 4/23/2014 at 5:27 PM
		</div>
		<div class="comment_text"><p>Thanks a lot for this article and for your whole website! I'm currently working as an intern and I have to create an app which can record audio files and send them on a server and your work was a huge help for me.</p><p>The audio quality is still pretty bad (even in MPEG4 96Kbps) but it's working ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746226">50</a> by Daniel
		posted on 5/22/2014 at 9:53 PM
		</div>
		<div class="comment_text"><p>Thank you, thank you, thank you  ;-)<br>Great post!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746225">51</a> by Raj
		posted on 6/20/2014 at 5:42 PM
		</div>
		<div class="comment_text"><p>hi Ray,</p><p>I have used the code snippet given in the article.</p><p>I am using jquery mobile, phonegap</p><p>I am getting the Crap something went wrong... error .</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fft.download%3AiTvONHhcc5g-jwmKh58YqHy8rR4&amp;cuid=3321886" rel="nofollow noopener" title="ft.download">ft.download</a>(uri, downloadPath, <br>	function(entry) {<br>		statusDom.innerHTML = "";<br>		var media = new Media(entry.fullPath, null, function(e) { alert(JSON.stringify(e));});<br>		<a href="http://disq.us/url?url=http%3A%2F%2Fmedia.play%3AJszcGTE_-W42Cjd2ft3CiYGGjGY&amp;cuid=3321886" rel="nofollow noopener" title="media.play">media.play</a>();</p><p>	}, <br>	function(error) {<br>		alert('Crap something went wrong...');	<br>	});</p><p>I have checked the url of the auido file from the server. but still i am getting the error.</p><p>Could you please guide me on this, what went wrong here</p><p>Thanks<br>R</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746228">52</a> by Raymond Camden
		posted on 6/20/2014 at 5:52 PM
		</div>
		<div class="comment_text"><p>Change the 'crap' message to actually output the error and share that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746227">53</a> by Raj
		posted on 6/20/2014 at 6:03 PM
		</div>
		<div class="comment_text"><p>i have given the code</p><p>alert("download error source " + error.source);<br>			alert("download error target " + <a href="http://disq.us/url?url=http%3A%2F%2Ferror.target%3Ayhu4ttdns4kVaO6c5vyrH3WW974&amp;cuid=3321886" rel="nofollow noopener" title="error.target">error.target</a>);<br>			alert("upload error code" + error.code);</p><p>it is giving source as my server filelocation<br>it is giving target file path <br>upload error code as 1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746230">54</a> by Raj
		posted on 6/20/2014 at 6:39 PM
		</div>
		<div class="comment_text"><p>Hi Randy</p><p>A small observation , when i alert fileSystem.root.fullPath, it is only giving "/".</p><p>will that cause any issue? becuase as it is trying to download the mp3 to root directory</p><p>Please suggest me , i struck ed here</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746229">55</a> by Raymond Camden
		posted on 6/20/2014 at 6:48 PM
		</div>
		<div class="comment_text"><p>1 in FileTransfer errors means file not found. Ensure your source is right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746231">56</a> by Raj
		posted on 6/20/2014 at 6:54 PM
		</div>
		<div class="comment_text"><p>Surely the source is avalable, do we have any documentation on phonegap about the error codes</p><p>Is it related to destination ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746234">57</a> by Raymond Camden
		posted on 6/20/2014 at 6:57 PM
		</div>
		<div class="comment_text"><p>You can find the error codes here:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fapache%2Fcordova-plugin-file-transfer%2Fblob%2Fmaster%2Fwww%2FFileTransferError.js%3A5qU2nArKkFwGYUW38bsMANdyrus&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/apache/cordova-plugin-file-transfer/blob/master/www/FileTransferError.js">https://github.com/apache/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746233">58</a> by Raj
		posted on 6/20/2014 at 7:00 PM
		</div>
		<div class="comment_text"><p>thank you Ray</p><p>Is there any thing that i am missing here ?</p><p>In android i am i am getting / when i use - fileSystem.root.fullPath</p><p>is this some thign that i need to look at ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746232">59</a> by Raymond Camden
		posted on 6/20/2014 at 7:21 PM
		</div>
		<div class="comment_text"><p>I think the issue is with the source, not the destination. You said it exists, are you 100% sure it does? Care to share the URL here? Also, maybe edit the access block of config.xml to ensure it is allowed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746235">60</a> by Raj
		posted on 6/20/2014 at 7:29 PM
		</div>
		<div class="comment_text"><p>Yes it is</p><p>I am able to fix it</p><p>it is because of the fullpath.</p><p>after changing fileSystem.root.fullpath to fileSystem.root.toURL()</p><p>it is working.</p><p>I need to check the functionality completely.</p><p>I will confirm you once it is working</p><p>thank you soo much</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746243">61</a> by Raymond Camden
		posted on 6/20/2014 at 7:29 PM
		</div>
		<div class="comment_text"><p>Ok cool. FileSystem stuff has changed a *lot* lately.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746240">62</a> by Raj
		posted on 6/20/2014 at 7:31 PM
		</div>
		<div class="comment_text"><p>and one more observation is , if change from temparary to persistant, it is now working</p><p>any suggestions ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746246">63</a> by Raymond Camden
		posted on 6/20/2014 at 7:31 PM
		</div>
		<div class="comment_text"><p>You got it working though, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746244">64</a> by Raj
		posted on 6/20/2014 at 7:34 PM
		</div>
		<div class="comment_text"><p>Yes with LocalFileSystem.TEMPORARY but not with LocalFileSystem.PERSISTENT</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746241">65</a> by Raymond Camden
		posted on 6/20/2014 at 7:39 PM
		</div>
		<div class="comment_text"><p>I'd look at the FileSystem plugin docs. I know some folders are read only and some are meant for your data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746242">66</a> by Raj
		posted on 6/20/2014 at 7:43 PM
		</div>
		<div class="comment_text"><p>sure thank you Ray</p><p>When i alert target path , it is saying localhost as one of the directory in the path, but it should show my application name than localhost.</p><p>I have seen that you have answered some where else, i lost that thread.</p><p>if you remember, can you share me that</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746245">67</a> by Raymond Camden
		posted on 6/20/2014 at 7:44 PM
		</div>
		<div class="comment_text"><p>What I'm saying is - look at the docs for the FileSystem. They have aliases now for common paths, and some are *specific* for you to save stuff too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746248">68</a> by Raj
		posted on 6/20/2014 at 7:58 PM
		</div>
		<div class="comment_text"><p>Sure thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746249">69</a> by Sanafan
		posted on 8/28/2014 at 6:21 PM
		</div>
		<div class="comment_text"><p>Hey Raymond and thanks first for this great tutorial.</p><p>I'm just working on a file upload (video) to a server and this works fine. Even your progress event works fine and tells me the percentage.</p><p>But how can i realise a small green bar under my video, that displays the actual state of the progress? The Text is nice, but he doesn't look good. I would like to have a small bar, which gets more green the more the upload is done.</p><p>Can you tell me, how this could be realised?</p><p>Thanks in Advance!</p><p>KR from Germany!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746247">70</a> by Raymond Camden
		posted on 8/30/2014 at 4:37 PM
		</div>
		<div class="comment_text"><p>One simple way would be to use a green gif sized appropriately - so 10% of max for 10% completed, and just update the width of the graphic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746250">71</a> by Mohammed
		posted on 9/24/2014 at 4:55 PM
		</div>
		<div class="comment_text"><p>You are awesome.<br>you need to change fullPath to toURL() in you code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746251">72</a> by Raymond Camden
		posted on 9/24/2014 at 6:03 PM
		</div>
		<div class="comment_text"><p>Yep, the file API has updated quite a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746341">73</a> by Danilo Cicognani
		posted on 10/14/2014 at 12:18 PM
		</div>
		<div class="comment_text"><p>Thank you Raymond for sharing your knowledge.<br>I often finish to read one of your posts when I'm trying to understand something about the Cordova platform or one of his plugins.</p><p>I'm in pain with this problem: I'm starting multiple downloads in background, saving the files with temporary names (to avoid saving incomplete or corrupted files if connection is lost): after each download finished (in success callback) I rename the temporary file with the correct name.</p><p>This works very well in Android, but in iOS I found that the success callback is never called.</p><p>It's seams to be a bug in org.apache.cordova.file-transfer plugin (I found various issues about it: <a href="https://disq.us/url?url=https%3A%2F%2Fissues.apache.org%2Fjira%2Fbrowse%2FCB-6720%3AESd-G0-MZvUOoGuMsxlVfN4JnLw&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.apache.org/jira/browse/CB-6720">https://issues.apache.org/j...</a>, <a href="https://disq.us/url?url=https%3A%2F%2Fissues.apache.org%2Fjira%2Fbrowse%2FCB-6750%3Anu_WNcTvgbeu_w7YyD3B0IAFDlM&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.apache.org/jira/browse/CB-6750">https://issues.apache.org/j...</a>, <a href="https://disq.us/url?url=https%3A%2F%2Fissues.apache.org%2Fjira%2Fbrowse%2FCB-6525%29%3AeQYkcjJgmLeizDGOH_apQNRaSwM&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.apache.org/jira/browse/CB-6525)">https://issues.apache.org/j...</a>. This means that I can only save files with temporary names: by now I set a workaround to use temporary names only on Android, but obviously I'm not satisfied.</p><p>I'm using Cordova version 3.6.3-0.2.13 and org.apache.codova.file-transfer plugin version<br>0.4.6.</p><p>I found that the on_progress callback is always called, also in iOS, so I tried to use it to understand if the file download was completed.<br>When (progressEvent.loaded == <a href="http://disq.us/url?url=http%3A%2F%2FprogressEvent.total%3ANDGX89rDBmWTHsVJMCEFEMcG2kI&amp;cuid=3321886" rel="nofollow noopener" title="progressEvent.total">progressEvent.total</a>), the download is completed, perfect, but how can I know which one specific file download is completed?<br>There is not "entry" parameter in on_progress callback or in progressEvent parameter.<br>Any idea?</p><p>Thank you and sorry for my English.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746372">74</a> by Raymond Camden
		posted on 10/14/2014 at 2:57 PM
		</div>
		<div class="comment_text"><p>That's a real good question. I don't know. I'll do some digging.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746371">75</a> by Raymond Camden
		posted on 10/14/2014 at 2:59 PM
		</div>
		<div class="comment_text"><p>So to be clear, the success handler is not firing for iOS due to the bugs you mentioned?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746373">76</a> by Danilo Cicognani
		posted on 10/14/2014 at 6:10 PM
		</div>
		<div class="comment_text"><p>Yes.<br>The success handler, but also the error handler, are never fired in iOS.<br>Only onprogress is fired.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746374">77</a> by Raymond Camden
		posted on 10/14/2014 at 8:29 PM
		</div>
		<div class="comment_text"><p>You got me then. Unless you can wait for the iOS bug to be fixed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746375">78</a> by Danilo Cicognani
		posted on 10/15/2014 at 12:01 PM
		</div>
		<div class="comment_text"><p>Sorry, I didn't understand.<br>I don't know why the success or error handler are never fired in iOS (but it's all ok in Android): I think is because of the bug I pointed out, but I'm not sure.<br>By now I finished to use temporary file names only for Android and not for iOS, but I was trying to find a workaround, to have the App behave in the same way in the two platforms.<br>If I don't find it, I will wait for a new version of the plugin, hoping it will fix my problem...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2733653524">
	<div>
		<img src="https://disqus.com/api/users/avatars/farskid.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2733653524">79</a> by Farzad YZ
		posted on 6/16/2016 at 8:01 AM
		</div>
		<div class="comment_text"><p>Great Article! one thing to note here is that in current version of cordova 6, the fullPath method is deprecated and instead you could use toURL method which holds the file:/// protocol schema inside it. Another weird thing is that Android ignores onprogress event.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2734272413">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2734272413">80</a> (In reply to <a href="#c_2733653524">#79</a>) by Raymond Camden
		posted on 6/16/2016 at 3:58 PM
		</div>
		<div class="comment_text"><p>In theory you could just use XHR2 now. :) That should support progress events fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2734278787">
	<div>
		<img src="https://disqus.com/api/users/avatars/farskid.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2734278787">81</a> (In reply to <a href="#c_2734272413">#80</a>) by Farzad YZ
		posted on 6/16/2016 at 4:02 PM
		</div>
		<div class="comment_text"><p>Actually after playing around with the file transfer finally I implemented the unprogressive event. Looks like the problem was it could not determine the total volume to be downloaded and I solved it by getting the volume from the server manually.<br></p></div>
	</div>
</div>
		
<div class="comment" id="c_2967965928">
	<div>
		<img src="https://disqus.com/api/users/avatars/greghudy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2967965928">82</a> by Greg Hudy
		posted on 10/25/2016 at 1:53 PM
		</div>
		<div class="comment_text"><p>Hi Ray, any idea why the progress isn't firing on GZipped files?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2967992584">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2967992584">83</a> (In reply to <a href="#c_2967965928">#82</a>) by Raymond Camden
		posted on 10/25/2016 at 2:11 PM
		</div>
		<div class="comment_text"><p>Sorry no. I'd file a bug report on the plugin. Also - it may be a web server thing. I believe it has to report the size to the requestor, and it may not be doing so for gzip files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2968064291">
	<div>
		<img src="https://disqus.com/api/users/avatars/greghudy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2968064291">84</a> (In reply to <a href="#c_2967992584">#83</a>) by Greg Hudy
		posted on 10/25/2016 at 2:57 PM
		</div>
		<div class="comment_text"><p>Thanks for the info. I'll try to look into it a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3003075606">
	<div>
		<img src="https://disqus.com/api/users/avatars/shairyarbaig.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3003075606">85</a> by Shairyar Baig
		posted on 11/15/2016 at 12:17 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing it, helped me a lot.</p></div>
	</div>
</div>
		