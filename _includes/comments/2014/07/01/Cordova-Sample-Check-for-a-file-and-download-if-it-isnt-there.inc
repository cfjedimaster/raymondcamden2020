
<div class="comment" id="c_1714083286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083286">1</a> by Krishna
		posted on 7/2/2014 at 6:28 AM
		</div>
		<div class="comment_text"><p>I tried _cordova.file.dataDirectory_ as a way to store files in a cross platform way and it seems to be undefined. I installed the file and file-transfer plugins. From what version is this available in the file plugin?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083284">2</a> by Raymond Camden
		posted on 7/2/2014 at 6:34 AM
		</div>
		<div class="comment_text"><p>1.2 and higher. Did you wait for deviceready to fire?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083287">3</a> by Krishna
		posted on 7/2/2014 at 6:56 AM
		</div>
		<div class="comment_text"><p>Yes the call was inside deviceready. The reason it probably didn't work was because I used Phonegap Build. I can now see in the plugins page (<a href="https://disq.us/url?url=https%3A%2F%2Fbuild.phonegap.com%2Fplugins%2F617%29%3A6Te7R5Q6soYbDYS1TVqXhAl-lmg&amp;cuid=3321886" rel="nofollow noopener" title="https://build.phonegap.com/plugins/617)">https://build.phonegap.com/...</a> that the latest version is 1.0.1.</p><p>Will I get version 1.2 of the file plugin if I use cordova CLI?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083289">4</a> by Raymond Camden
		posted on 7/2/2014 at 7:46 AM
		</div>
		<div class="comment_text"><p>Yep.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083288">5</a> by ManuelPaulo
		posted on 7/2/2014 at 9:04 AM
		</div>
		<div class="comment_text"><p>Thanks for this. I am testing your code to update a file regularly. <br>Using Network Link Conditioner, I simulated a 100% loss network.<br>Now the problem is, when the file transfer fails, the stored local life gets deleted. Any idea on how to prevent  fileTransfer from deleting it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083292">6</a> by Raymond Camden
		posted on 7/2/2014 at 5:13 PM
		</div>
		<div class="comment_text"><p>Oh now that is interesting. I guess it would be expected as it needs to stream the data to the system and if the stream fails, it wipes the file, but I can see how this may be a surprise to people.</p><p>So I see two things:<br>a) We should document it in the FileTransfer download method.<br>b) For your specific use case, the logic should be modified to download to *another* location and on success, copy to the proper location.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083285">7</a> by Raymond Camden
		posted on 7/3/2014 at 7:47 AM
		</div>
		<div class="comment_text"><p>Note - code updated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083291">8</a> by ManuelPaulo
		posted on 7/3/2014 at 10:06 AM
		</div>
		<div class="comment_text"><p>Thanks for your reply.</p><p>I think FileTransfer should have a cache mechanism like the OS's. Start downloading to .tmp file; if successful move it to the final file name, if not, delete the .tmp.</p><p>Yes, I will have to implement this. Will use fileEntry.copyTo. When not update your code to do this also? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083290">9</a> by Raymond Camden
		posted on 7/3/2014 at 6:13 PM
		</div>
		<div class="comment_text"><p>I'd suggest filing a request for this on the issue tracker: <a href="https://disq.us/url?url=https%3A%2F%2Fissues.apache.org%2Fjira%2Fbrowse%2FCB%2F%3FselectedTab%3Dcom.atlassian.jira.jira-projects-plugin%3Asummary-panel%3AbJl-4kRo4UrbWe_OAz_651zOp6k&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.apache.org/jira/browse/CB/?selectedTab=com.atlassian.jira.jira-projects-plugin:summary-panel">https://issues.apache.org/j...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083294">10</a> by Néstor RP
		posted on 7/14/2014 at 5:08 PM
		</div>
		<div class="comment_text"><p>Hi Raymond</p><p>Nice post, this is exactly what I was trying to do. However, I have a question about it: You don't seem to call _requestFileSystem()_ anywhere.<br>In every documentation or tutorial I've seen so far, _requestFileSystem()_ must be called in order to access any file in the file system. I presume that _resolveLocalFileSystemURL()_ has been introduced in version 1.2 and it's intended to be used when the full path for the file bein accessed is already known, while _requestFileSystem()_ allows navigating through the file system and look for it, but since I can't find any reason on the net why _resolveLocalFileSystemURL()_ was introduced, I'm not sure. Could you please confirm or refuse it?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083293">11</a> by Raymond Camden
		posted on 7/14/2014 at 5:46 PM
		</div>
		<div class="comment_text"><p>My understanding is that requestFileSystem is mainly giving you an alias to the root of either the persistent or temp directory. The new aliases in the latest FS plugin makes this unnecessary (assuming you want to use one of those aliases of course).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083295">12</a> by Jason U
		posted on 7/16/2014 at 9:36 PM
		</div>
		<div class="comment_text"><p>This post was great and helped me to download a file to my app. How do I set the download location to be in my \www\data directory that I have in my app?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083296">13</a> by Raymond Camden
		posted on 7/17/2014 at 12:06 AM
		</div>
		<div class="comment_text"><p>I *believe* that may be read only. I think the docs say as much here:</p><p>cordova.file.applicationDirectory - Read-only directory where the application is installed. (iOS, Android)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083297">14</a> by Jason U
		posted on 7/17/2014 at 12:11 AM
		</div>
		<div class="comment_text"><p>Here's the actual goal. I ship a json file with my app.  It is stored in the \www\data directory. I would like to be able to replace that file from time to time with new data.  If that directory is read only then where can I store the file during development?  I don't see any of the app storage directories when developing in cordova.</p><p>Thanks for all of the help, it is greatly appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083301">15</a> by Raymond Camden
		posted on 7/17/2014 at 12:12 AM
		</div>
		<div class="comment_text"><p>I'd just store the new version in localStorage. Then your logic can be:</p><p>if I have it in localstorage, see if too old, and if so, update<br>otherwise if not too old, use it<br>otherwise if not there, default to one I ship with the app in file storage</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083299">16</a> by David Blanchard
		posted on 7/28/2014 at 1:14 AM
		</div>
		<div class="comment_text"><p>This code worked great for Android devices.  But when I ran the same code on a wp8 device, the cordova.file namespace appears to be undefined as I receive an error of 'unable to get property 'dataDirectory' of undefined or null reference'.  When I reference the cordova-plugin-file at <a href="http://disq.us/url?url=git%3A%2F%2Fgit.apache.org%2Fcordova-plugin-file.git%3AK6ADG_wZPANDVPAr12zopOR4h1A&amp;cuid=3321886" rel="nofollow noopener" title="git://git.apache.org/cordova-plugin-file.git">git://git.apache.org/cordov...</a>, it seems the plugin is supported by wp8, but that is the only reference to it.  None of the cordova.file.* have wp8 listed.</p><p>Do you know what I should be using instead for wp8?  And where I can reference the 'where to store files' table for wp8 that is an excellent summary for each other platform?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083300">17</a> by Raymond Camden
		posted on 7/28/2014 at 6:16 AM
		</div>
		<div class="comment_text"><p>The docs mention that dataDirectory is not supported in WP8.</p><p>Since these are just aliases to help simplify your code, in theory, it shouldn't stop you per se, you would just need to figure out the right folder by hand. I'd google around and see what the typical directory would be for that platform.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083305">18</a> by AJ Davidson
		posted on 8/7/2014 at 8:07 PM
		</div>
		<div class="comment_text"><p>First thanks.  This post helped me get up to speed quickly.   <br>On IOS I can download and open the file in Adobe smoothly.   But it never finds the downloaded file.  It always downloads another copy(#).  I have tried  Documents, Library, Temp directories.  <br>My console logs show the right directory all the way through.<br>Adobe will open those very files offline, but my code doesn't find it or at least cant open it.<br>resolveLocalFileSystemURL is never true, but it should be.<br>Is adobe moving my files?<br>Do i need to requestFileSystem before opening a file that doesn't need to be downloaded?</p><p>I will appreciate any help and regardless thank you again for your time.  I am certainly downloading and opening files in the sandbox when I wasn't before and that is useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083304">19</a> by Raymond Camden
		posted on 8/7/2014 at 10:03 PM
		</div>
		<div class="comment_text"><p>First off... what do you mean by Adobe? Adobe what?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083303">20</a> by AJ Davidson
		posted on 8/7/2014 at 10:26 PM
		</div>
		<div class="comment_text"><p>I can download the file and open it in Adobe Reader.  I use a different plugin to just read PDF offline no prob.  <br>But Forms PDFs we need to open in reader so client can email print etc the form.  Console shows adobe "copying"  the file. Which is actually great for us. <br>And it seems to still show the file in the application sandbox listing in xcode.  <br>But it always downloads another copy it never finds the file that is there and makes the copy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083302">21</a> by Raymond Camden
		posted on 8/7/2014 at 10:27 PM
		</div>
		<div class="comment_text"><p>I honestly can't tell what you are saying here. It sounds like you modified my code to work with PDFs, and you are trying to open the PDF, is that so? If so, it does not apply to this blog post, does it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083307">22</a> by AJ Davidson
		posted on 8/7/2014 at 11:42 PM
		</div>
		<div class="comment_text"><p>the pdf opens with the fileopener plugin just fine. <br>it is just one call line added to your code to open the file.  I could have used inAppBrower too.  Its not top of mind relevant because <br>resolveLocalFileSystemURL is never true with or without even trying to open the file, except if I am still connected to the mac and hit run again then</p><p>your code does work great to download and open pdf in adobe reader btw, when used with the fileopener plugin.</p><p>I just cant open the downloaded file online or offline. <br>resolveLocalFileSystemURL cant find it or it isnt still there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083308">23</a> by Raymond Camden
		posted on 8/8/2014 at 12:26 AM
		</div>
		<div class="comment_text"><p>I'm still not quite I understand you. That being said - I'm currently investigating a bug with this on Android. Please see: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfjedimaster%2FCordova-Examples%2Fissues%2F2%3A-_fTibMCpPIKwupmf8Jl8ZgrAfw&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfjedimaster/Cordova-Examples/issues/2">https://github.com/cfjedima...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083311">24</a> by AJ Davidson
		posted on 8/8/2014 at 12:59 AM
		</div>
		<div class="comment_text"><p>ty already watching that. I am teamdenver</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083309">25</a> by AJ Davidson
		posted on 8/8/2014 at 9:50 PM
		</div>
		<div class="comment_text"><p>I have a bit more info.  I watched my apps sandboxed directory from the xcode organiser window.<br>I can see the file in the Documents folder after successful transfer code.<br>Then console says it is "copy" file to Adobe Reader Sandbox.<br>But as soon as I choose "Open With" Adobe Reader, and refresh organiser window, it is gone.<br>It is a "move" not a "copy".<br>resolveLocalFileSystemURL isnt true because the file is no longer  there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083310">26</a> by Dave
		posted on 9/10/2014 at 3:38 PM
		</div>
		<div class="comment_text"><p>Great article! Helped me a lot. Do you also know how to delete a file? Will I have to loop through the entire dir to get the filehandle, or is it possible to delete a file straight away if you know the filename? Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083312">27</a> by Dave
		posted on 9/10/2014 at 4:16 PM
		</div>
		<div class="comment_text"><p>Figured that out, the success routine will have the filehandle.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083313">28</a> by Nehul Agrawal
		posted on 9/11/2014 at 1:11 AM
		</div>
		<div class="comment_text"><p>Hello,</p><p>I want to use your this file checking method in loop.</p><p>I have write this something like below.</p><p>window.resolveLocalFileSystemURL(DATADIR.toURL() +"/"+ filename, appStart, function(){<br>    											<a href="http://disq.us/url?url=http%3A%2F%2Fft.download%3AiTvONHhcc5g-jwmKh58YqHy8rR4&amp;cuid=3321886" rel="nofollow noopener" title="ft.download">ft.download</a>(uri, dlPath, function(e){<br>    												//renderPicture(e.toURL());<br>    												alert("Successful download of "+e.toURL());<br>    											}, onError, true);</p><p>    										});</p><p>But it seems like i am doing some mistake here. Can you please tell me the right way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083314">29</a> by Raymond Camden
		posted on 9/11/2014 at 2:03 AM
		</div>
		<div class="comment_text"><p>Remember that these calls are async, so if you have it in a loop, there is no guarantee for which order they will finish.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083315">30</a> by Nehul Agrawal
		posted on 9/11/2014 at 10:20 AM
		</div>
		<div class="comment_text"><p>Hello, thank you for your reply. <br>No problem with the order. But the same image is keep downloading. And even though it dont download the file. It just shows that, it has been downloaded successfully.</p><p>I generated one query here at <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F25780407%2Fsame-file-keep-downloading-in-phonegap%3Avi__A_LZkjDPayG3vYYEYln5UoM&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/25780407/same-file-keep-downloading-in-phonegap">http://stackoverflow.com/qu...</a>.</p><p>Please if there is anyway i can resolve this problem let?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083319">31</a> by Raymond Camden
		posted on 9/12/2014 at 5:55 AM
		</div>
		<div class="comment_text"><p>Posted an answer there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083318">32</a> by Nehul Agrawal
		posted on 9/12/2014 at 1:36 PM
		</div>
		<div class="comment_text"><p>Thank you, you are a life saver....This one worked perfectly fine.</p><p>But i dont understand. What the problem from my method?</p><p>Thank you! Thank you so much!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083317">33</a> by Raymond Camden
		posted on 9/12/2014 at 2:55 PM
		</div>
		<div class="comment_text"><p>I explained - kinda - on SO. It has to do with the nature of callbacks. If it is any consolation, I make the same mistake myself all the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083320">34</a> by Mohammed
		posted on 9/25/2014 at 6:47 PM
		</div>
		<div class="comment_text"><p>Your effort really appreciated Raymond. Everybody loves Raymond :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713385505">
	<div>
		<img src="https://disqus.com/api/users/avatars/rajeshrs.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713385505">35</a> by rajesh rs
		posted on 11/26/2014 at 10:19 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, thanks for the post.</p><p>i was trying the upload plugin for uploading a "zip" file to the server.</p><p>the zip file successfully uploads to the server but the web service does some operation based on the uploaded zip file before returning success. But on the device side i get an cordova error as below:</p><p>"File Transfer Error: The request timed out." code : 3</p><p>please let me know how to handle this or is there a way to increase the timeout for this plugin ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714217772">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714217772">36</a> (In reply to <a href="#c_1713385505">#35</a>) by Raymond Camden
		posted on 11/26/2014 at 7:58 PM
		</div>
		<div class="comment_text"><p>I'm not seeing an option for that. I'd file a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1752826463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1752826463">37</a> by Prashant
		posted on 12/21/2014 at 2:38 PM
		</div>
		<div class="comment_text"><p>@Raymond.<br>In my case, i will be download file depending on productid. So i dont know what will be the file name and its extension. So how can i download this file.?<br>For eg:<br>http://127.0.0.1/Download.php?id=10<br>Will give ABC.doc <br>http://127.0.0.1/Download.php?id=6<br>Will give Five.pdf<br>http://127.0.0.1/Download.php?id=3<br>Will give Five.xls<br>So how can i specify my filename?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1754435902">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1754435902">38</a> (In reply to <a href="#c_1752826463">#37</a>) by Raymond Camden
		posted on 12/22/2014 at 1:06 PM
		</div>
		<div class="comment_text"><p>You would need to modify your API to return the name. For example, I'd have an API that returns the file name and the "download.php" url. You would then make a second request to get the binary data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1863489925">
	<div>
		<img src="https://disqus.com/api/users/avatars/meloman4eg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1863489925">39</a> by Дадыкин Павел
		posted on 2/19/2015 at 10:43 AM
		</div>
		<div class="comment_text"><p>Hello! Thanks for your post.<br>But I have a question. How to delete files?<br>In my app I have to download zip file to cordova.file.dataDirectory, and extract it to cordova.file.dataDirectory/folder.<br>But when file updates on the server, I need to download new zip file and delete old zip file and all files stored in cordova.file.dataDirectory/folder.</p><p>Please, tell me, how to delete these files.<br>Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1863639415">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1863639415">40</a> (In reply to <a href="#c_1863489925">#39</a>) by Raymond Camden
		posted on 2/19/2015 at 1:02 PM
		</div>
		<div class="comment_text"><p>It is discussed here, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.html5rocks.com%2Fen%2Ftutorials%2Ffile%2Ffilesystem%2F%3A_lqy-a4hTfVQxPHUxNzRYiciswM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.html5rocks.com/en/tutorials/file/filesystem/">http://www.html5rocks.com/e...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2173838951">
	<div>
		<img src="https://disqus.com/api/users/avatars/AlessandroBelli.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2173838951">41</a> by Alessandro Belli
		posted on 8/4/2015 at 3:25 PM
		</div>
		<div class="comment_text"><p>is it possibile to make a loop for check more files?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2174303065">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2174303065">42</a> (In reply to <a href="#c_2173838951">#41</a>) by Raymond Camden
		posted on 8/4/2015 at 7:25 PM
		</div>
		<div class="comment_text"><p>Sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2202556699">
	<div>
		<img src="https://disqus.com/api/users/avatars/jayjdas.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2202556699">43</a> by Jay J. Das
		posted on 8/19/2015 at 10:59 AM
		</div>
		<div class="comment_text"><p>Hello! Raymond</p><p>Can we download the file to the downloads folder?<br>What should be the path for store, instead of</p><p>cordova.file.dataDirectory;</p><p>Thanks,<br>J</p></div>
	</div>
</div>
		
<div class="comment" id="c_2202590398">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2202590398">44</a> (In reply to <a href="#c_2202556699">#43</a>) by Raymond Camden
		posted on 8/19/2015 at 11:03 AM
		</div>
		<div class="comment_text"><p>I don't know. I checked the File plugin (<a href="https://disq.us/url?url=https%3A%2F%2Fwww.npmjs.com%2Fpackage%2Fcordova-plugin-file%29%3AXbgfllljUp7HyVkHoFOQYlNKEHk&amp;cuid=3321886" rel="nofollow noopener" title="https://www.npmjs.com/package/cordova-plugin-file)">https://www.npmjs.com/packa...</a> and there is no alias for it, but obviously if you know the full path to the downloads folder, and it is writeable by your app, then it is a simple matter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2206614961">
	<div>
		<img src="https://disqus.com/api/users/avatars/karthikeyamishra.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2206614961">45</a> (In reply to <a href="#c_2202590398">#44</a>) by Karthikeya Mishra
		posted on 8/21/2015 at 11:46 AM
		</div>
		<div class="comment_text"><p>I have used cordova.file.externalRootDirectory to create a folder. And I downloaded the photos in that folder. But now my problem is I want to check whether the file I am downloading already exist in that folder but I am unable to get the path of that folder.</p><p>I  am using Ionic framewrok. To download the image in folder I used  -</p><p>$scope.downloaad= function(photoUrl, photoId, folder){<br> var url = photoUrl;<br> var targetPath =            cordova.file.externalRootDirectory+"/"+folder+"/"+options.photoId+".jpg";</p><p> var trustHosts = true;<br> var str = {};</p><p> $<a href="http://disq.us/url?url=http%3A%2F%2FcordovaFileTransfer.download%3AeZIPfOmQFV8d7rsMwdqa0R7Ie2I&amp;cuid=3321886" rel="nofollow noopener" title="cordovaFileTransfer.download">cordovaFileTransfer.download</a>(url, targetPath, str, trustHosts)<br>      .then(function(result) {<br>     console.log("result-&gt;" + result);<br> }, function(err) { <br> console.log("error-&gt;" + err);<br>    });</p><p> }</p></div>
	</div>
</div>
		
<div class="comment" id="c_2207161184">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2207161184">46</a> (In reply to <a href="#c_2206614961">#45</a>) by Raymond Camden
		posted on 8/21/2015 at 4:59 PM
		</div>
		<div class="comment_text"><p>Are you saying you want to resolve the path to a DirectoryEntry object you can work with?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2229766475">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_IetULYYwzi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2229766475">47</a> by mralj
		posted on 9/1/2015 at 12:56 PM
		</div>
		<div class="comment_text"><p>Hey, thanks for the great article. I've tried to implement your code in my app, which has to do this: check if video exists, if it does play it, else download it and play it. But it doesn't work, problem is both every time success and fail functions get called. So if video exists app plays it, but it also downloads it again.  Here is relevant part of my code:</p><p>           var store = cordova.file.dataDirectory;<br>            var filePath = store + "videoTest.mp4";</p><p>            //Check for the file. <br>            window.resolveLocalFileSystemURL(filePath, playVideo(filePath, true), transferFile(uri, filePath));</p><p>Also here is my SO question with a bit different code, but same problem:  <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F32329311%2Fphonegap-check-if-file-exists%3AzlxoNzgF9Ild8lEmOG59au4FjpM&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/32329311/phonegap-check-if-file-exists">http://stackoverflow.com/qu...</a></p><p>Please, if it is not too much trouble, could you tell me what am I doing wrong ?</p><p>Thanks in advance !</p></div>
	</div>
</div>
		
<div class="comment" id="c_2229798744">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2229798744">48</a> (In reply to <a href="#c_2229766475">#47</a>) by Raymond Camden
		posted on 9/1/2015 at 1:18 PM
		</div>
		<div class="comment_text"><p>I posted an answer there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2229886457">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_IetULYYwzi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2229886457">49</a> (In reply to <a href="#c_2229798744">#48</a>) by mralj
		posted on 9/1/2015 at 2:15 PM
		</div>
		<div class="comment_text"><p>Hey, thanks for the fast response :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2256602506">
	<div>
		<img src="https://disqus.com/api/users/avatars/tomiwaadefokun.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2256602506">50</a> by tomiwaadefokun
		posted on 9/16/2015 at 1:50 PM
		</div>
		<div class="comment_text"><p>Thanks for the great post. But how do I open the file via a link?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2256879080">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2256879080">51</a> (In reply to <a href="#c_2256602506">#50</a>) by Raymond Camden
		posted on 9/16/2015 at 4:26 PM
		</div>
		<div class="comment_text"><p>Just link to it? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2256909386">
	<div>
		<img src="https://disqus.com/api/users/avatars/tomiwaadefokun.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2256909386">52</a> by tomiwaadefokun
		posted on 9/16/2015 at 4:42 PM
		</div>
		<div class="comment_text"><p>Many thanks. Using url = entry.toURL() gives me file:///path/to/file and it doesn't open in browser and not even in inAppBrowser. Both  <a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a>(url, '_system')  and  <a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a>(url, '_blank') did not work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2256917044">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2256917044">53</a> (In reply to <a href="#c_2256909386">#52</a>) by Raymond Camden
		posted on 9/16/2015 at 4:46 PM
		</div>
		<div class="comment_text"><p>What happens though? You said it didn't work- did it throw an error? What did remote debugging show you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2256964806">
	<div>
		<img src="https://disqus.com/api/users/avatars/tomiwaadefokun.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2256964806">54</a> (In reply to <a href="#c_2256917044">#53</a>) by tomiwaadefokun
		posted on 9/16/2015 at 5:10 PM
		</div>
		<div class="comment_text"><p>I get "Options expected to be an object", from inAppBrowser. I have no idea what that means...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2256973893">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2256973893">55</a> (In reply to <a href="#c_2256964806">#54</a>) by Raymond Camden
		posted on 9/16/2015 at 5:14 PM
		</div>
		<div class="comment_text"><p>Double check to ensure you are running this plugin - <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fapache%2Fcordova-plugin-inappbrowser%3ADtJLXpQUs3q7KCWHiqRtQHRXMeM&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/apache/cordova-plugin-inappbrowser">https://github.com/apache/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2257045821">
	<div>
		<img src="https://disqus.com/api/users/avatars/tomiwaadefokun.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2257045821">56</a> (In reply to <a href="#c_2256973893">#55</a>) by tomiwaadefokun
		posted on 9/16/2015 at 5:51 PM
		</div>
		<div class="comment_text"><p>The problem is ngCordova's InAppBrowser implementation actually requires the options to be passed as object. Now the file opens with a PDF reader but it says "Document path is not valid." Please what can be the issue? Many thanks for your time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2257134151">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2257134151">57</a> (In reply to <a href="#c_2257045821">#56</a>) by Raymond Camden
		posted on 9/16/2015 at 6:36 PM
		</div>
		<div class="comment_text"><p>Was the file downloaded to a temporary location?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2257161868">
	<div>
		<img src="https://disqus.com/api/users/avatars/tomiwaadefokun.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2257161868">58</a> (In reply to <a href="#c_2257134151">#57</a>) by tomiwaadefokun
		posted on 9/16/2015 at 6:50 PM
		</div>
		<div class="comment_text"><p>The file was downloaded to cordova.file.dataDirectory directly, I am suspecting it may be that it is private. Could that be the case?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2257208915">
	<div>
		<img src="https://disqus.com/api/users/avatars/tomiwaadefokun.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2257208915">59</a> (In reply to <a href="#c_2257161868">#58</a>) by tomiwaadefokun
		posted on 9/16/2015 at 7:16 PM
		</div>
		<div class="comment_text"><p>I changed the path to cordova.file.externalApplicationStorageDirectory and it worked well. How reliable is this path?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2257236500">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2257236500">60</a> (In reply to <a href="#c_2257208915">#59</a>) by Raymond Camden
		posted on 9/16/2015 at 7:30 PM
		</div>
		<div class="comment_text"><p>I'd check what the FIle plugin doc has to say about it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2257252556">
	<div>
		<img src="https://disqus.com/api/users/avatars/tomiwaadefokun.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2257252556">61</a> (In reply to <a href="#c_2257236500">#60</a>) by tomiwaadefokun
		posted on 9/16/2015 at 7:38 PM
		</div>
		<div class="comment_text"><p>Many thanks Raymond, I really appreciate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2368489110">
	<div>
		<img src="https://disqus.com/api/users/avatars/candidodmv.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2368489110">62</a> (In reply to <a href="#c_1714083299">#16</a>) by Vinicius
		posted on 11/19/2015 at 5:12 PM
		</div>
		<div class="comment_text"><p>Hello, I'm with the same problem.<br>Do you find some workaround for this issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2397484039">
	<div>
		<img src="https://disqus.com/api/users/avatars/realtebo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2397484039">63</a> by Realtebo
		posted on 12/7/2015 at 9:01 AM
		</div>
		<div class="comment_text"><p>Great tutorial !</p><p>resolveLocalFileSystemURL error fallback passes an argument of type FileError object. Here you can find the meaning of FileError.code: <a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen-US%2Fdocs%2FWeb%2FAPI%2FFileError%3AjFst5eq9UfndHxwDQ9iqi4oEYUE&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en-US/docs/Web/API/FileError">https://developer.mozilla.o...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2555776250">
	<div>
		<img src="https://disqus.com/api/users/avatars/naitik_patel.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2555776250">64</a> by Naitik Patel
		posted on 3/7/2016 at 10:32 AM
		</div>
		<div class="comment_text"><p>Can we add file on external sdcard, if sdcard is inserted? i done code put file in internal storage in specific folder. But need to put in external sdcard. Is there any way to do it? Thank you in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2555844007">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2555844007">65</a> (In reply to <a href="#c_2555776250">#64</a>) by Raymond Camden
		posted on 3/7/2016 at 11:50 AM
		</div>
		<div class="comment_text"><p>Check out externalDataDirectory, and the other external aliases in the docs here: <a href="https://disq.us/url?url=https%3A%2F%2Fwww.npmjs.com%2Fpackage%2Fcordova-plugin-file%3AuyEJDlLwsNSBZ77xtPTcc9PXGmU&amp;cuid=3321886" rel="nofollow noopener" title="https://www.npmjs.com/package/cordova-plugin-file">https://www.npmjs.com/packa...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2555855354">
	<div>
		<img src="https://disqus.com/api/users/avatars/naitik_patel.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2555855354">66</a> (In reply to <a href="#c_2555844007">#65</a>) by Naitik Patel
		posted on 3/7/2016 at 12:02 PM
		</div>
		<div class="comment_text"><p>thank for you quick reply, But it didn't help me. It still showing internal storage path for app. I need external sdcard access.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2555869529">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2555869529">67</a> (In reply to <a href="#c_2555855354">#66</a>) by Raymond Camden
		posted on 3/7/2016 at 12:18 PM
		</div>
		<div class="comment_text"><p>You say, "it still showing internal storage path" - what is? If you mean my code, obviously you need to change it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2555874498">
	<div>
		<img src="https://disqus.com/api/users/avatars/naitik_patel.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2555874498">68</a> (In reply to <a href="#c_2555869529">#67</a>) by Naitik Patel
		posted on 3/7/2016 at 12:23 PM
		</div>
		<div class="comment_text"><p>yes it showing me path "file:///storage/emulated/0/" but i need get path of "/sdcard/myfolder" here sdcard is what normally inserted in android phone externally.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2555876719">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2555876719">69</a> (In reply to <a href="#c_2555874498">#68</a>) by Raymond Camden
		posted on 3/7/2016 at 12:26 PM
		</div>
		<div class="comment_text"><p>yes what? If you are using my code, then you need to change it. If you've changed my code to use the external sd card, show (via a Gist) how you did it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2555878460">
	<div>
		<img src="https://disqus.com/api/users/avatars/naitik_patel.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2555878460">70</a> (In reply to <a href="#c_2555876719">#69</a>) by Naitik Patel
		posted on 3/7/2016 at 12:28 PM
		</div>
		<div class="comment_text"><p>i used your code. But i didn't change it till now. i need your help for save my file on "external sdcard"</p></div>
	</div>
</div>
		
<div class="comment" id="c_2555892715">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2555892715">71</a> (In reply to <a href="#c_2555878460">#70</a>) by Raymond Camden
		posted on 3/7/2016 at 12:42 PM
		</div>
		<div class="comment_text"><p>And I did help. :) Look at the docs on the File plugin and pay special attention to the external aliases.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2557482877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2557482877">72</a> by Jacob
		posted on 3/8/2016 at 9:24 AM
		</div>
		<div class="comment_text"><p>Hi, thanks for a great tutorial! I've got a question for you, in case this has already been asked and answered before I beg your pardon.. hope you're up for it :)<br>Anyway, here we go:</p><p>I am downloading images to the device on the fly and my intention is to save them locally in my application. The app will then look for the images when they're requested and see if they're stored locally and then use them with the local path otherwise it will download them and save them for future use.</p><p>In many other examples I've seen the following:<br>window.requestFileSystem(LocalFileSystem.PERSISTENT, 0, onFileSystemSuccess, fail);</p><p>But in yours I don't. In your example, are the images saved until they're removed or are they just saved temporarily? If they're saved temporarily, what would I change to make them stick around forever?</p><p>When I try to add window.requestFileSystem(LocalFileSystem.PERSISTENT, 0, onFileSystemSuccess, fail);  to my application it will just stop. No callbacks are thrown at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2557556301">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2557556301">73</a> (In reply to <a href="#c_2557482877">#72</a>) by Raymond Camden
		posted on 3/8/2016 at 11:04 AM
		</div>
		<div class="comment_text"><p>requestFileSystem will give you a handle to the root of the file system. This would let me start digging into the file system from, basically, /. I don't need that as I'm checking to see if a specific file exists. Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2557599922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2557599922">74</a> (In reply to <a href="#c_2557556301">#73</a>) by Jacob
		posted on 3/8/2016 at 11:52 AM
		</div>
		<div class="comment_text"><p>Thank you so much for your reply. That makes sense. Just to clarify, when I use <a href="http://disq.us/url?url=http%3A%2F%2FfileTransfer.download%3A1mXfnF5O25ewQTsY_YNvptP0aA4&amp;cuid=3321886" rel="nofollow noopener" title="fileTransfer.download">fileTransfer.download</a> will the file then be saved permanently? My main worry here is that I want to make sure that images that are downloaded from a remote host can be used in offline mode days/weeks later.</p><p>When I connect, say my Android to my Mac and open up a program called  "Android File Transfer" I was expecting to see the saved files within my adobe.phonegap folder. But it seems to be empty. Is this normal behaviour? I am using your exact example.</p><p>I really appriciate your time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2586683961">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2586683961">75</a> (In reply to <a href="#c_2557599922">#74</a>) by Raymond Camden
		posted on 3/24/2016 at 1:23 PM
		</div>
		<div class="comment_text"><p>1) Check the docs on that. There are locations that are temp/perm.</p><p>2) Note the docs on dataDirectory: "Persistent and private data storage" - notice how it says 'private'? I'm guessing thats why you can't see it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2586684309">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2586684309">76</a> (In reply to <a href="#c_2557599922">#74</a>) by Raymond Camden
		posted on 3/24/2016 at 1:24 PM
		</div>
		<div class="comment_text"><p>Holy smokes - sorry it took 16 days to reply.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2621412008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2621412008">77</a> (In reply to <a href="#c_2586683961">#75</a>) by Jacob
		posted on 4/13/2016 at 1:09 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, woah! Took me another 20 days to reply! Sorry about that. Thank you so much for your help. Much appriciated. Great articles!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2681521588">
	<div>
		<img src="https://disqus.com/api/users/avatars/rajr11245.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2681521588">78</a> by JA C
		posted on 5/18/2016 at 6:25 AM
		</div>
		<div class="comment_text"><p>Thanks for the great article!!!! But I am not sure why this file downloads everytime i run the script even though the file exists it downloads again. how can i overcome this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2681546355">
	<div>
		<img src="https://disqus.com/api/users/avatars/rajr11245.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2681546355">79</a> (In reply to <a href="#c_2681521588">#78</a>) by JA C
		posted on 5/18/2016 at 7:00 AM
		</div>
		<div class="comment_text"><p>I fixed the issue you need to change the following line :</p><p>window.resolveLocalFileSystemURL('file:///'+store+fileName, appStart, downloadAsset);</p><p>below article was helpful to solve it :</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fourcodeworld.com%2Farticles%2Fread%2F22%2Fsolve-native-path-of-android-content-if-resolvelocalfilesystemurl-doesn-t-work%3AFeP2P8cMHgWL1EeEjIvOFHzo0BU&amp;cuid=3321886" rel="nofollow noopener" title="http://ourcodeworld.com/articles/read/22/solve-native-path-of-android-content-if-resolvelocalfilesystemurl-doesn-t-work">http://ourcodeworld.com/art...</a></p><p>Thanks Again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2681827135">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2681827135">80</a> (In reply to <a href="#c_2681546355">#79</a>) by Raymond Camden
		posted on 5/18/2016 at 11:51 AM
		</div>
		<div class="comment_text"><p>Looks to be a known bug - hopefully corrected soon. Thanks for sharing this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2682141905">
	<div>
		<img src="https://disqus.com/api/users/avatars/rajr11245.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2682141905">81</a> (In reply to <a href="#c_2681827135">#80</a>) by JA C
		posted on 5/18/2016 at 2:22 PM
		</div>
		<div class="comment_text"><p>How abt this code working on iOS. i mean what will be the path of  cordova.file.dataDirectory</p></div>
	</div>
</div>
		
<div class="comment" id="c_2682174408">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2682174408">82</a> (In reply to <a href="#c_2682141905">#81</a>) by Raymond Camden
		posted on 5/18/2016 at 2:42 PM
		</div>
		<div class="comment_text"><p>See the FileSystem plugin docs. It explains what that alias means for each supported platform.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2707631859">
	<div>
		<img src="https://disqus.com/api/users/avatars/omaralarab.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2707631859">83</a> by Omar Al Arab
		posted on 6/2/2016 at 3:25 AM
		</div>
		<div class="comment_text"><p>Hello is there a way to download a mp3 FIle and then use it as a localNotification</p><p>I have already downloaded the file successfully but i am not being able to use it as a local notification</p></div>
	</div>
</div>
		
<div class="comment" id="c_2708136117">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2708136117">84</a> (In reply to <a href="#c_2707631859">#83</a>) by Raymond Camden
		posted on 6/2/2016 at 12:56 PM
		</div>
		<div class="comment_text"><p>If you mean something that is used with a Push notification, then I'm not sure. I know when you send a Push, you can specify a audio file to play, and if you can specify a folder that matches where you save the file, then yes. So I'd look into that first.</p><p>If you mean just a random noise, then sure, you can use the Media plugin to play it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2748483801">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_e1LxbZBvuw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2748483801">85</a> by David Graf
		posted on 6/24/2016 at 3:19 PM
		</div>
		<div class="comment_text"><p>Hi, could we download pdf file on ios device?<br>if then, how can we browse that downloaded pdf file?<br>I tried below code from <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fapache%2Fcordova-plugin-file-transfer%3AJqn5sBK6EDl6ZD_9_G0Jh02Ea7U&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/apache/cordova-plugin-file-transfer">https://github.com/apache/c...</a>.<br>I got "download complete", but can't find that pdf and no way to find out on my device.</p><p>var fileTransfer = new FileTransfer();<br>var uri = encodeURI("<a href="http://disq.us/url?url=http%3A%2F%2Fsome.server.com%2Fdownload.php%3AU918k1PAk95n5N5mKBarOycn_Ps&amp;cuid=3321886" rel="nofollow noopener" title="http://some.server.com/download.php">http://some.server.com/down...</a>");</p><p><a href="http://disq.us/url?url=http%3A%2F%2FfileTransfer.download%3A1mXfnF5O25ewQTsY_YNvptP0aA4&amp;cuid=3321886" rel="nofollow noopener" title="fileTransfer.download">fileTransfer.download</a>(<br>    uri,<br>    fileURL,<br>    function(entry) {<br>        console.log("download complete: " + entry.toURL());<br>    },<br>    function(error) {<br>        console.log("download error source " + error.source);<br>        console.log("download error target " + <a href="http://disq.us/url?url=http%3A%2F%2Ferror.target%3Ayhu4ttdns4kVaO6c5vyrH3WW974&amp;cuid=3321886" rel="nofollow noopener" title="error.target">error.target</a>);<br>        console.log("download error code" + error.code);<br>    },<br>    false,<br>    {<br>        headers: {<br>            "Authorization": "Basic dGVzdHVzZXJuYW1lOnRlc3RwYXNzd29yZA=="<br>        }<br>    }<br>);</p></div>
	</div>
</div>
		
<div class="comment" id="c_2748500814">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2748500814">86</a> (In reply to <a href="#c_2748483801">#85</a>) by Raymond Camden
		posted on 6/24/2016 at 3:29 PM
		</div>
		<div class="comment_text"><p>So first off - yes - you can download a PDF, or any file within reason. You know you can because you yourself said you saw the download complete message, right?</p><p>So - as for viewing it - theres a few options here. Let me get back to you on that. You may be able to simply window.location.href = entry.toURL().</p></div>
	</div>
</div>
		
<div class="comment" id="c_2759975254">
	<div>
		<img src="https://disqus.com/api/users/avatars/alwynmalan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2759975254">87</a> by Alwyn Malan
		posted on 7/1/2016 at 8:21 AM
		</div>
		<div class="comment_text"><p>Howsit Raymond, I'm trying to download a video file on the click of a button on both Android and iOS.  I can get it to work fine on Android but not on iOS.  As far as I can see it is the target directory that is the problem here.</p><p>After a lot of research I just can't seem to get the target path right and using the other solutions i.e. cordova.file.applicationDirectory, cordova.file.dataDirectory doesn't seem to work.  Please help if you can, here is my code:</p><p> if (devicePlatform === 'Android') {<br>            baseUrl = '/storage/emulated/0/Download/';<br>        }<br>        else if (devicePlatform === 'iOS') {<br>            baseUrl = 'var/mobile/Applications/&lt;application uuid=""&gt;/Documents/Download/';<br>        }</p><p>It is this baseURL that is the problem.  I don't know how to get that path dynamically?</p><p> $('#download6').on('click', function (e) {</p><p>            e.preventDefault();<br>            var fileTransfer = new FileTransfer();<br>            var uri = encodeURI("URLOFVIDEO");<br>            var fileURL = baseUrl + 'FILENAME';</p><p>            $('#videoContainer6').html('&lt;img alt="" src="images/loading.gif"/&gt;<br>Downloading');</p><p>            <a href="http://disq.us/url?url=http%3A%2F%2FfileTransfer.download%3A1mXfnF5O25ewQTsY_YNvptP0aA4&amp;cuid=3321886" rel="nofollow noopener" title="fileTransfer.download">fileTransfer.download</a>(<br>                uri,<br>                fileURL,<br>                function (entry) {<br>                    alert('Your video has finished downloading to: Device Storage &gt; Download &gt; FILENAME');<br>                    console.log("download complete: " + entry.toURL());<br>                    $('#videoContainer6').html('Video Downloaded.');<br>                },<br>                function (error) {<br>                    console.log("download error source " + error.source);<br>                    console.log("download error target " + <a href="http://disq.us/url?url=http%3A%2F%2Ferror.target%3Ayhu4ttdns4kVaO6c5vyrH3WW974&amp;cuid=3321886" rel="nofollow noopener" title="error.target">error.target</a>);<br>                    console.log("download error code" + error.code);<br>                },<br>                false,<br>                {<br>                    headers: {<br>                        "Authorization": "Basic dGVzdHVzZXJuYW1lOnRlc3RwYXNzd29yZA=="<br>                    }<br>                }<br>            );<br>            return false;<br>        });</p></div>
	</div>
</div>
		
<div class="comment" id="c_2760253653">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2760253653">88</a> (In reply to <a href="#c_2759975254">#87</a>) by Raymond Camden
		posted on 7/1/2016 at 1:13 PM
		</div>
		<div class="comment_text"><p>So when you tried cordova.file.dataDirectory, how did it fail?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2760258422">
	<div>
		<img src="https://disqus.com/api/users/avatars/alwynmalan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2760258422">89</a> (In reply to <a href="#c_2760253653">#88</a>) by Alwyn Malan
		posted on 7/1/2016 at 1:16 PM
		</div>
		<div class="comment_text"><p>It succeeds, but when I go to that folder there is no file.  Tried the cache directory as well, get the succeed message from the File Transfer function but no actual file in directory...very strange.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2760261682">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2760261682">90</a> (In reply to <a href="#c_2760258422">#89</a>) by Raymond Camden
		posted on 7/1/2016 at 1:19 PM
		</div>
		<div class="comment_text"><p>How are you "going to the folder"? Are you using the File system APIs to get a directory listing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2760267358">
	<div>
		<img src="https://disqus.com/api/users/avatars/alwynmalan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2760267358">91</a> (In reply to <a href="#c_2760261682">#90</a>) by Alwyn Malan
		posted on 7/1/2016 at 1:23 PM
		</div>
		<div class="comment_text"><p>Just using "My Files" on Android and when going to Android-&gt;Storage-&gt;Data-&gt;App-&gt;Files/Cache there is nothing there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2760268895">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2760268895">92</a> (In reply to <a href="#c_2760267358">#91</a>) by Raymond Camden
		posted on 7/1/2016 at 1:24 PM
		</div>
		<div class="comment_text"><p>Well keep in mind - some of these folders are private to the app itself. Ie, only the *app* can see it - so that may be your issue. If you use the File API to get a file listing, see if *that* shows up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2760270448">
	<div>
		<img src="https://disqus.com/api/users/avatars/alwynmalan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2760270448">93</a> (In reply to <a href="#c_2760268895">#92</a>) by Alwyn Malan
		posted on 7/1/2016 at 1:25 PM
		</div>
		<div class="comment_text"><p>Cool will have a look thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_2803940671">
	<div>
		<img src="https://disqus.com/api/users/avatars/caiczcz.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2803940671">94</a> by caiczcz
		posted on 7/26/2016 at 11:09 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>    I have tried your method with some modification, but I met with some issues. <br>    Every time I tried to download something, whether there exists the file, the file will be created but not any data is downloaded, so the file is 0 byte. Every time, "already exists" prints. Do you have any idea?</p><p>window.resolveLocalFileSystemURL(dirname.nativeURL+"/"+path.dir+"/"+<a href="http://disq.us/url?url=http%3A%2F%2Fpath.name%3AKJ8e4hr1Eg44zPs5UAwcx5ek_tA&amp;cuid=3321886" rel="nofollow noopener" title="path.name">path.name</a>, function(){<br>                            		console.log("already exists");<br>                            	}, function(){</p><p>                                	var p = fe.toURL();</p><p>                                    console.log("p====&gt;"+p);<br>                                    fe.remove();<br>                                    ft = new FileTransfer();<br>                                    <a href="http://disq.us/url?url=http%3A%2F%2Fft.download%3AiTvONHhcc5g-jwmKh58YqHy8rR4&amp;cuid=3321886" rel="nofollow noopener" title="ft.download">ft.download</a>(<br>                                        encodeURI(url),<br>                                        p,<br>                                        function(entry) {<br>                                            console.log("entry===&gt;"+entry);<br>                                           // $scope.imgFile = entry.toURL();<br>                                            deferred.resolve();<br>                                        },<br>                                        function(error) {<br>                                            deferred.reject();<br>                                        },<br>                                        false,<br>                                        null<br>                                    );<br>                            	});</p></div>
	</div>
</div>
		
<div class="comment" id="c_2804285930">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2804285930">95</a> (In reply to <a href="#c_2803940671">#94</a>) by Raymond Camden
		posted on 7/26/2016 at 2:43 PM
		</div>
		<div class="comment_text"><p>If you log the error in the error handler for download, what do you see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2805453602">
	<div>
		<img src="https://disqus.com/api/users/avatars/caiczcz.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2805453602">96</a> (In reply to <a href="#c_2804285930">#95</a>) by caiczcz
		posted on 7/27/2016 at 2:10 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>    You mean the second parameter of window.resolveLocalFileSystemURL() is error handler for download??</p><p>window.requestFileSystem(LocalFileSystem.PERSISTENT, 1024*1024*100, function(fs) {</p><p>                fs.root.getDirectory(<br>                    "EvnetsTiles",<br>                    {<br>                        create: true,                         <br>                    },<br>                    function(dirname) {</p><p>                        dirname.getDirectory(path.dir,<br>	                    {<br>	                        create: true,                          <br>	                    },<br>                        function(dirEntry){</p><p>                        dirEntry.getFile(<br>                        		<a href="http://disq.us/url?url=http%3A%2F%2Fpath.name%3AKJ8e4hr1Eg44zPs5UAwcx5ek_tA&amp;cuid=3321886" rel="nofollow noopener" title="path.name">path.name</a>, <br>                            {<br>                        	create: true, <br>                                exclusive: false<br>                            }, <br>                            function gotFileEntry(fe) {</p><p>                            	window.resolveLocalFileSystemURL(dirname.nativeURL+"/"+path.dir+"/"+<a href="http://disq.us/url?url=http%3A%2F%2Fpath.name%3AKJ8e4hr1Eg44zPs5UAwcx5ek_tA&amp;cuid=3321886" rel="nofollow noopener" title="path.name">path.name</a>, <br>                            	   function(){<br>                            		console.log("already exists");<br>                            	}, function(){</p><p>                                	var p = fe.toURL();</p><p>                                    console.log("p====&gt;"+p);<br>                                    fe.remove();<br>                                    ft = new FileTransfer();<br>                                    <a href="http://disq.us/url?url=http%3A%2F%2Fft.download%3AiTvONHhcc5g-jwmKh58YqHy8rR4&amp;cuid=3321886" rel="nofollow noopener" title="ft.download">ft.download</a>(<br>                                        encodeURI(url),<br>                                        p,<br>                                        function(entry) {<br>                                            console.log("entry===&gt;"+entry);</p><p>                                            deferred.resolve();<br>                                        },<br>                                        function(error) {<br>                                            deferred.reject();<br>                                        }</p><p>                                    );<br>                            	});</p><p>                            }, <br>                            function() { <br>                                deferred.reject();<br>                            }<br>                        );<br>                    });<br>                  }<br>                );<br>            });</p></div>
	</div>
</div>
		
<div class="comment" id="c_2806084053">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2806084053">97</a> (In reply to <a href="#c_2805453602">#96</a>) by Raymond Camden
		posted on 7/27/2016 at 12:47 PM
		</div>
		<div class="comment_text"><p>You posted the code again - that's not what I want. When you do deferred.reject(), can console.log(error) to see what the error is?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2817499497">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9FqB74mh8H.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2817499497">98</a> by Mauricio
		posted on 8/2/2016 at 6:24 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I am working with an ipad, but I have the issue that after the image is downloaded it don't show in the img tag, the thing is it works with cache folder :</p><p>var targetPath = cordova.file.cacheDirectory + "folio/assets/images/testImage0.jpg"; //work</p><p>var targetPath = cordova.file.dataDirectory + "testImage.jpg"; // don't work</p><p>"folio/assets/images" I take this path from other image that I don't download it is part of the content.</p><p>sorry for bad English, not native speaker.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2820764763">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2820764763">99</a> (In reply to <a href="#c_2817499497">#98</a>) by Raymond Camden
		posted on 8/4/2016 at 5:05 PM
		</div>
		<div class="comment_text"><p>Do you get a 404 error in the console - for the image I mean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2820794881">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9FqB74mh8H.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2820794881">100</a> (In reply to <a href="#c_2820764763">#99</a>) by Mauricio
		posted on 8/4/2016 at 5:25 PM
		</div>
		<div class="comment_text"><p>Not i don't get any error, it seems to be something with path, I can download image wherever I want : cordova.file.cacheDirectory, cordova.file.dataDirectory, cordova.file.documentsDirectory but I only can show the ones saved in cordova.file.cacheDirectory, I have trying with adiccional folder but i get same result :</p><p>cordova.file.dataDirectory + "/image/someimage.jpg"<br>cordova.file.dataDirectory + "/content/image/someimage.jpg" etc.</p><p>it only work with "cordova.file.cacheDirectory" my fear is that this directory can be cleared whenever the OS desires, that is why i want to use cordova.file.cacheDirectory or cordova.file.documentsDirectory</p></div>
	</div>
</div>
		
<div class="comment" id="c_2820814149">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2820814149">101</a> (In reply to <a href="#c_2820794881">#100</a>) by Raymond Camden
		posted on 8/4/2016 at 5:37 PM
		</div>
		<div class="comment_text"><p>If the image didn't load, *something* went wrong. What do you see when you remote debug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2820830694">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9FqB74mh8H.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2820830694">102</a> (In reply to <a href="#c_2820814149">#101</a>) by Mauricio
		posted on 8/4/2016 at 5:48 PM
		</div>
		<div class="comment_text"><p>I am not doing remote debugging, I will do it and tell you what i get.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2871407291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2871407291">103</a> by Jim
		posted on 9/1/2016 at 7:04 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I'm wondering how to specify a specific file to download as part of the download() call.  So when we call upload(), can can include params that allow our server to make additional determinations regarding what to do with the uploaded file.  When I call download (to download a picture for a person's profile for instance), the server needs to do which specific picture to download - I don't see how to tell it that as part of the download() call since there is no ability to add params onto the call.  Any advice?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2873287397">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2873287397">104</a> (In reply to <a href="#c_2871407291">#103</a>) by Raymond Camden
		posted on 9/2/2016 at 5:43 PM
		</div>
		<div class="comment_text"><p>"So when we call upload(), can can include params "<br>Yes, look at the API docs for the plugin, this is supported.</p><p>"I don't see how to tell it that as part of the download() call since there is no ability to add params onto the call"<br>Since you are passing a URL, you can use URL params. Ie,</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmyserver.com%2Fimage.php%3Fid%3DX%3ATdIV-Rz_LcLNxE9pCQcZWXu0NjI&amp;cuid=3321886" rel="nofollow noopener" title="myserver.com/image.php?id=X">myserver.com/image.php?id=X</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2910336187">
	<div>
		<img src="https://disqus.com/api/users/avatars/iRoachie.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2910336187">105</a> (In reply to <a href="#c_2820814149">#101</a>) by Kyle Roach
		posted on 9/22/2016 at 12:31 PM
		</div>
		<div class="comment_text"><p>Hey i encountered the same problem. The error given in the console is 'Failed to load resource: The operation couldn’t be completed. Operation not permitted'. I used 'cordova.file.documentsDirectory'</p></div>
	</div>
</div>
		
<div class="comment" id="c_2910611979">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2910611979">106</a> (In reply to <a href="#c_2910336187">#105</a>) by Raymond Camden
		posted on 9/22/2016 at 3:27 PM
		</div>
		<div class="comment_text"><p>It may be that you can read and write to the directory but can't use it as an image source. You should maybe consider another path.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2910868336">
	<div>
		<img src="https://disqus.com/api/users/avatars/iRoachie.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2910868336">107</a> (In reply to <a href="#c_2910611979">#106</a>) by Kyle Roach
		posted on 9/22/2016 at 5:53 PM
		</div>
		<div class="comment_text"><p>I also was to mention that it works in the simulator but not on device</p></div>
	</div>
</div>
		
<div class="comment" id="c_2910877393">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2910877393">108</a> (In reply to <a href="#c_2910868336">#107</a>) by Raymond Camden
		posted on 9/22/2016 at 5:58 PM
		</div>
		<div class="comment_text"><p>Not sure what else to suggest off the top of my head. At this point I'd need to get your code, run it, etc, which would be a paid engagement.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3151911680">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9I3oB3k4a8.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3151911680">109</a> by Mohammed Azhar
		posted on 2/13/2017 at 7:06 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I'm trying to download a file but the file using this plugin. On the success callback, I am triggering the FileOpener2 plugin. However, the fileOpener2 plugin throws an error that the file is not found. When I go check in the file directory on an android phone through the file manager, the file does not exist. I have posted the question with some code on SO, link is: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F42153934%2Funable-to-download-file-in-cordova-and-ionic-with-filetransfer%3A2y-dztS-YH28g2C6072OLttcTRI&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/42153934/unable-to-download-file-in-cordova-and-ionic-with-filetransfer">http://stackoverflow.com/qu...</a></p><p>Please check this out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3153752824">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3153752824">110</a> (In reply to <a href="#c_3151911680">#109</a>) by Raymond Camden
		posted on 2/14/2017 at 2:24 AM
		</div>
		<div class="comment_text"><p>I'm not using the fileOpener2 plugin in this blog post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3154042307">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9I3oB3k4a8.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3154042307">111</a> (In reply to <a href="#c_3153752824">#110</a>) by Mohammed Azhar
		posted on 2/14/2017 at 7:48 AM
		</div>
		<div class="comment_text"><p>I am using the fileOpener2 plugin just to open the downloaded file. My concern is not with the fileOpener2 plugin but it is about downloading of the file itself. The file is not getting downloaded.</p><p>I found the issue to be with the new permissions in Android 6.0 and above. I've posted the answer on my question in SO and if anyone here has come across a similar issue, you can check my answer.<br>Cheers! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3574364393">
	<div>
		<img src="https://disqus.com/api/users/avatars/nisha_ramesh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3574364393">112</a> by Nisha Ramesh
		posted on 10/19/2017 at 9:15 AM
		</div>
		<div class="comment_text"><p>I am using the fileOpener2 plugin just to open the downloaded file in my cordova hybrid app(android version) .It works only once after logging.If we again click on the pdf image ,it's not working and didn't get any error.If we logout and login again it will work for the first time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3574544591">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3574544591">113</a> (In reply to <a href="#c_3574364393">#112</a>) by Raymond Camden
		posted on 10/19/2017 at 12:48 PM
		</div>
		<div class="comment_text"><p>You say no error, so I assume you checked developer tools. Outside of that - no idea. I'd post a report on the GitHub repo for the plugin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3593398247">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_lGpmgMxtjS.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3593398247">114</a> by CitizenKane
		posted on 10/31/2017 at 2:39 PM
		</div>
		<div class="comment_text"><p>Where can files added be to an Android and iOS cordova project so files are preloaded into the dataDirectory?</p><p>For the longest time I have been using applicationDirectory which is read-only.  In the project, add the files to be preloaded into (android) /platforms/android/assets and (iOS) simply add the files to the root of project in Xcode (I still don't know where it places the files in the Xcode project though, but it works.)</p><p>But now I need to write to these preloaded files which means I need to change the folder to a read-write folder...based on my reading, I think the best location for this is the dataDirectory (based on the assumption that both OS's do not clear this folder/data - please correct me if I am wrong).  I need the data files to be persistent so long as the app is installed.</p><p>But for the life of me I can't find any documentation on what directory path to add these files to the project so they get properly preloaded into the dataDirectory during app install</p><p>Any other insights would be appreciated too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3593405519">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_lGpmgMxtjS.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3593405519">115</a> (In reply to <a href="#c_2910611979">#106</a>) by CitizenKane
		posted on 10/31/2017 at 2:44 PM
		</div>
		<div class="comment_text"><p>My understanding is that files in this path are not a part of the www/dom resource structure.  Thus an image placed in it is not accessible from a www page.  The only other way would be to read the file and write the file on the fly to the page being rendered</p></div>
	</div>
</div>
		
<div class="comment" id="c_3600446402">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3600446402">116</a> (In reply to <a href="#c_3593398247">#114</a>) by Raymond Camden
		posted on 11/4/2017 at 10:20 PM
		</div>
		<div class="comment_text"><p>Sorry you got me there. Obviously you could do a one time copy - that may be your only solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3660076334">
	<div>
		<img src="https://disqus.com/api/users/avatars/naitik_patel.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3660076334">117</a> (In reply to <a href="#c_2555892715">#71</a>) by Naitik Patel
		posted on 12/13/2017 at 7:56 AM
		</div>
		<div class="comment_text"><p>Glad again i found this. We had conversation before 2 years. But again stuck on this. SO for more clarification my question is:</p><p>i have some files at removable SdCard in location /storage/450-283/test</p><p>i need to grab from those files and copy inside internal storage of device.</p><p>But i can't able to fetch files from removable SdCard in location /storage/450-283/test.</p><p>Please more clarification i need to READ/WRITE file from external sdcard ( removable sdcard ).</p><p>Thanks again man.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3660339447">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3660339447">118</a> (In reply to <a href="#c_3660076334">#117</a>) by Raymond Camden
		posted on 12/13/2017 at 1:28 PM
		</div>
		<div class="comment_text"><p>I'd check the FIle plugin documentation and see what it says about external storage. The docs say what you have R/W access to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3660892347">
	<div>
		<img src="https://disqus.com/api/users/avatars/naitik_patel.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3660892347">119</a> (In reply to <a href="#c_3660339447">#118</a>) by Naitik Patel
		posted on 12/13/2017 at 7:19 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Thank you. But got working now.</p><p>below is my code for your reference:</p><p>function getExternalSdLocation(done){<br>            cordova.plugins.diagnostic.getExternalSdCardDetails(function(details){<br>                details.forEach(function(detail){<br>                    if(detail.type == "application"){<br>                        cordova.file.externalSdCardApplicationDirectory = detail.filePath;<br>                    }else if(detail.type == "root"){<br>                        cordova.file.externalSdCardRootDirectory = detail.filePath;<br>                    }<br>                });<br>                done();<br>            }, function(error){<br>                console.error(error);<br>                done();<br>            });<br>        }</p><p>        function requestExternalSdPermission(done){<br>            cordova.plugins.diagnostic.requestRuntimePermission(function(status){<br>                switch(status){<br>                    case cordova.plugins.diagnostic.permissionStatus.GRANTED:<br>                        console.log("Permission granted");<br>                        getExternalSdLocation(done);<br>                        break;<br>                    case cordova.plugins.diagnostic.permissionStatus.DENIED:<br>                        console.log("Permission denied");<br>                        askAgain(done);<br>                        break;<br>                    case cordova.plugins.diagnostic.permissionStatus.DENIED_ALWAYS:<br>                        console.log("Permission permanently denied");<br>                        reportError(done);<br>                        break;<br>                }<br>            }, function(error){<br>                console.error("The following error occurred: "+error);<br>                reportError(done);<br>            }, cordova.plugins.diagnostic.permission.WRITE_EXTERNAL_STORAGE);<br>        }</p><p>        requestExternalSdPermission(function(res){<br>            console.log("Permission done " , res);<br>        })</p><p>        function checkIfFileExists(path){<br>           window.resolveLocalFileSystemURL(path, <br>            function(fileSystem){ <br>                console.log("File System " ,fileSystem )<br>                fileSystem.getFile('1.jpg', { create: false }, function(fileEntry){<br>                    console.log("File " + fileEntry.fullPath + " exists!");<br>                }, function(){<br>                    console.log("file does not exist");<br>                });<br>            },function(){<br>                console.log("Error Grab file system" );<br>            }) //of requestFileSystem<br>        }</p><p>        setTimeout(function(){<br>            checkIfFileExists(cordova.file.externalSdCardRootDirectory + '/test')<br>        },5000);</p><p>That will check in removable sdcard and inside it "test" folder and search for file "1.jpg" and it's working great.</p><p>Thank you for your valuable time man.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4307272408">
	<div>
		<img src="https://disqus.com/api/users/avatars/parrishfam.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4307272408">120</a> by Parrish Fam
		posted on 1/25/2019 at 9:35 PM
		</div>
		<div class="comment_text"><p>Does ANYONE have a demo Phonegap or Cordova file download app template that works.  I am trying to build an app that is able to download files to Android device.  I am not sure how to download or include the plugin the the config.xml file and need a working guide.  Please share if you have something.  Thanks !</p></div>
	</div>
</div>
		