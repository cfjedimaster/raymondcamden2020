
<div class="comment" id="c_1713738235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738235">1</a> by Philip Senn
		posted on 1/20/2012 at 10:20 AM
		</div>
		<div class="comment_text"><p>I Thought the cache.manifest was for storing offline files like images.  This is all completely new info for me.  Thanks for the code!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738228">2</a> by Raymond Camden
		posted on 1/20/2012 at 4:28 PM
		</div>
		<div class="comment_text"><p>HTML5 Offline Storage could create a similar effect. In this case though the PhoneGap is local HTML, so you can't really use it. This approach could also be made much more complex - for example, it could download large images only when your connection is Wifi as opposed to cell.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738229">3</a> by Michel Morelli
		posted on 1/21/2012 at 7:07 AM
		</div>
		<div class="comment_text"><p>Thanks for this post. I need it.</p><p>M.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738233">4</a> by Sumit Verma
		posted on 1/21/2012 at 10:39 AM
		</div>
		<div class="comment_text"><p>Thanks Ray! Works fine on iOS without any issues. <a href="http://disq.us/url?url=http%3A%2F%2FFiletransfer.download%3ALdKfAuyjAq_T2DDfVqndhvDN52s&amp;cuid=3321886" rel="nofollow noopener" title="Filetransfer.download">Filetransfer.download</a>() was the key. Somehow I didn't see it in the PhoneGap API doc.</p><p>I'm downloading all the images on app load and then replacing the src of the image on page load.</p><p>/* change images to local on page load */<br>function renderLocalImage(){<br>	var contentObj = $("#pageContent");<br>	$('img',contentObj).each(function(index){<br>		var src = $(this).attr('src');<br>		var srcArray = src.split('/');<br>		var imageName = srcArray[srcArray.length-1];<br>		var localImage = 'file://' + imageDir.fullPath + '/' + imageName;<br>		$(this).attr('src',localImage);<br>	});<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738215">5</a> by Raymond Camden
		posted on 1/21/2012 at 7:28 PM
		</div>
		<div class="comment_text"><p>You missed it because it isn't listed on top. I missed it too at first. Sorry it took so long (for others, Sumit was the guy who kinda started me on this).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738219">6</a> by Sumit Verma
		posted on 1/22/2012 at 1:16 PM
		</div>
		<div class="comment_text"><p>The funny thing is it works perfectly in iOS, but I can't get it to work on Android! The getDirectory method keeps throwing error 12 (FileError.PATH_EXISTS_ERR = 12).</p><p>Also, on ICS (4.0.3) I can't even get open database to work. That throws:</p><p>I/SqliteDatabaseCpp(8031): sqlite returned: error code = 14, msg = cannot open file at line 27701 of [8609a15dfa], db=/data/data/com.ten24.androidtest/databases/webview.db</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738227">7</a> by Raymond Camden
		posted on 1/22/2012 at 8:25 PM
		</div>
		<div class="comment_text"><p>Sumit, one thing I ran into was not being able to write to my SD when my phone was in Disk Mode. Is that something you have enabled? If you try w/o the path, or make the path match what I did in part 2, does that work?</p><p>Although - it sounds like maybe your apps can't write at all - since you can't even open a db. May be worth while posting to the Google Groups and seeing if they know something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738224">8</a> by Sumit Verma
		posted on 1/23/2012 at 9:10 AM
		</div>
		<div class="comment_text"><p>Ok, so I got it to work on Android 2.3.3 but 4.0.3 (ASUS Prime) throws connection error on download.</p><p>Few points:</p><p>- The database error seems to be always there but it still works.</p><p>- The File error is because getDirectory('xxx',{create:true}) throws error if the directory exists. getDirectory('xxx',{create:true,exclusive:false}) returns the directory if it exists.</p><p>- Also nested directory creation doesn't work. You can only create one folder at a time.</p><p>- In order to use file system make sure phone is _not_ connected in USB mode. Because connecting it in USB mode un-mounts the SD card. In DroidX the come is called "Charge Only".</p><p>I have to say, iOS development seems much more easier (trouble free) than Andriod.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738230">9</a> by Raymond Camden
		posted on 1/23/2012 at 4:45 PM
		</div>
		<div class="comment_text"><p>Wow, this is truly surprising because you are seeing pretty much 100% the opposite of me:</p><p>1) No db errors for me.</p><p>2) When my directory existed, I never got an error.</p><p>3) Didn't test nested.</p><p>4) For me, my phone was in Charge Mode and it worked ok. It didn't work in disk mode.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738218">10</a> by Sumit Verma
		posted on 1/23/2012 at 7:31 PM
		</div>
		<div class="comment_text"><p>Ray, Can you try your code on 4.0.3 AVD and see if you are getting error as well?</p><p>Found this thread about DB error where Simon says he has always seen it and to just ignore it:<br><a href="http://disq.us/url?url=http%3A%2F%2Fgroups.google.com%2Fgroup%2Fphonegap%2Fbrowse_thread%2Fthread%2F7247160db72252ad%2Fe7c10aaf03a0f0ee%3Flnk%3Dgst%26q%3Dsqlite%2Berror%23e7c10aaf03a0f0ee%3AnTqKeQIZzPIvbAP7vRumGd5dB2Y&amp;cuid=3321886" rel="nofollow noopener" title="http://groups.google.com/group/phonegap/browse_thread/thread/7247160db72252ad/e7c10aaf03a0f0ee?lnk=gst&amp;q=sqlite+error#e7c10aaf03a0f0ee">http://groups.google.com/gr...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738223">11</a> by Simon MacDonald
		posted on 1/24/2012 at 8:51 PM
		</div>
		<div class="comment_text"><p>Yeah, you can safely ignore the DB error as it is just noise. I've grabbed Ray's code and tried it in a 4.0 emulator and it fails. I think, don't quote me yet, but I think it is a bug in Android 4.0 as it is failing to open a url connection. I'm going to raise a bug on Jira and do some more investigation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738221">12</a> by Sumit Verma
		posted on 1/24/2012 at 8:54 PM
		</div>
		<div class="comment_text"><p>Thanks Simon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738232">13</a> by Raymond Camden
		posted on 1/24/2012 at 9:02 PM
		</div>
		<div class="comment_text"><p>Thanks for testing this Simon (didn't get a chance to yet). Please post back when you hear more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738220">14</a> by Simon MacDonald
		posted on 1/24/2012 at 9:28 PM
		</div>
		<div class="comment_text"><p>The download method in FileTransfer was setting the HttpURLConnection.setDoOutput to true. On Android 4.0 this would force the connection to be a POST when what we actually want is a GET.</p><p>I removed the offending line and tested the fix in 2.1, 2.2, 2.3 and 4.0. The fix is checked in for PhoneGap 1.4 which should be out early next week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738234">15</a> by Raymond Camden
		posted on 1/24/2012 at 9:41 PM
		</div>
		<div class="comment_text"><p>Damn. I'm pretty disappointed in PhoneGap. I mean - this took - what - 37 minutes? How can I have faith in a framework that needs so much time to correct issues.</p><p>;)</p><p>Thanks Simon - this is great to hear!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738222">16</a> by Sumit Verma
		posted on 1/24/2012 at 9:49 PM
		</div>
		<div class="comment_text"><p>Wow! Simon, now you have set a very high expectation for future fixes. Haha...</p><p>Thanks a lot for the quick response. Is 1.4 available to play with?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738231">17</a> by Simon MacDonald
		posted on 1/24/2012 at 11:08 PM
		</div>
		<div class="comment_text"><p>Well fixes won't always come that fast but when I have a reproduction scenario and a stack trace it makes it a lot easier to track down and fix. If only all bugs had this much information.</p><p>You can always grab the latest code from:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgit-wip-us.apache.org%2Frepos%2Fasf%3Fp%3Dincubator-cordova-android.git%3Ba%3Dsummary%3AtboKV6UD58ffSAVMyTsLWTiSUYw&amp;cuid=3321886" rel="nofollow noopener" title="https://git-wip-us.apache.org/repos/asf?p=incubator-cordova-android.git;a=summary">https://git-wip-us.apache.o...</a></p><p>or the regularly updated mirror on github:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fapache%2Fincubator-cordova-android%3ATsQPq_dVnVlBmIkeAt1FMy_7rQo&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/apache/incubator-cordova-android">https://github.com/apache/i...</a></p><p>You won't have long to wait for the official 1.4 though as it should be out on Monday.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738226">18</a> by Alex
		posted on 2/26/2012 at 7:35 PM
		</div>
		<div class="comment_text"><p>Thanks for this fantastic "tutorial" it saved me lots of time and a project i am working on.</p><p>I ran in a little problem, you compare the known files and the files downloadable files, do you have an idea how to identify a file tha needs to be updated?<br>What i do is i update the data in my app (download a JSON file) but only want to download the file if it has been changed since the last update.</p><p>regards<br>Alex</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738251">19</a> by Raymond Camden
		posted on 2/26/2012 at 8:48 PM
		</div>
		<div class="comment_text"><p>Alex, unfortunately, you can't (afaik!) get the file metadata on a remote file. Using a server side solution (like ColdFusion, PHP, Ruby, etc), I'd build a service that returns a list of files and their updated date. This sounds more complex (and I guess any change would be), but in theory it wouldn't be that much harder.</p><p>On the client side (your PhoneGap app), your code requests this server, and then compares it to the local directory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738247">20</a> by Alex
		posted on 2/28/2012 at 12:12 AM
		</div>
		<div class="comment_text"><p>Raymond, thx for replying.<br>I found a solution. I request a php page which returns an json containing a date. <br>I create an empty file on the phone and name it like the date.<br>Next time i check for the "datefile" if it exists i am not updating if it doesnt i download the update.</p><p>Thanks for pointing me in the right direction.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738249">21</a> by Raymond Camden
		posted on 2/28/2012 at 12:17 AM
		</div>
		<div class="comment_text"><p>If you just want to store that date, why bother using a file? Just use localStorage.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738250">22</a> by Alex
		posted on 2/29/2012 at 10:27 PM
		</div>
		<div class="comment_text"><p>Thx again for pointing me in the right direction.<br>Completely forgot about localStorage.</p><p>If i may i have one last question (as i am not very familiar with jquery).<br>I use your code to download a file but it seems that the app "starts" before the file is complete.<br>Result, old data is shown instead of the new on. Do you have any idea how to tell the app to wait for the download to complete and display a short message?</p><p>thx for all your help</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738248">23</a> by Raymond Camden
		posted on 2/29/2012 at 10:30 PM
		</div>
		<div class="comment_text"><p>The download api has a success call back, that's where I call renderPicture. So your app should start off with a "Please stand by" type message, and in your success callback, you can simply remove that and proceed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738244">24</a> by Alex
		posted on 3/1/2012 at 2:32 PM
		</div>
		<div class="comment_text"><p>Okay, my last question was not very precise ;-)<br>I use sencha touch for my app and the app starts before the download ist completed.<br>My idea is that i load the index.html and do all the update stuff. When all the updates are done (or not if the user has no internet connection) i want to move on to another page where i start the actual app.<br>In your example you would just download all the pictures and start the display of the pictures after all the downloading is done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738253">25</a> by Raymond Camden
		posted on 3/1/2012 at 4:53 PM
		</div>
		<div class="comment_text"><p>So instead of running renderPicture like I did, you would move the user to the ohter page. If you are using something like jQuery Mobile, there is an API for that. Otherwise, document.location should work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738246">26</a> by Alex
		posted on 3/1/2012 at 5:27 PM
		</div>
		<div class="comment_text"><p>Ahhh...<br>Ok, i am downloading multiple files. So what i could do is check if it is the last file and then move the user to the next page.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fft.download%3AiTvONHhcc5g-jwmKh58YqHy8rR4&amp;cuid=3321886" rel="nofollow noopener" title="ft.download">ft.download</a>("http://my_download_path/" + escape(res[x]), dlPath, function(){<br>	if ($x == res.length){<br>	       document.loction = 'app.html';<br>	}<br>}, onError);</p><p>In the onError function i put also a location change if something goes wrong during download.</p><p>And before i even start downloading i check with <br>    if (<a href="http://disq.us/url?url=http%3A%2F%2Fnavigator.online%3AgsoEg4Xg14I4y39oxEr6MOHVG_U&amp;cuid=3321886" rel="nofollow noopener" title="navigator.online">navigator.online</a>)....<br>that an internet connection exists.</p><p>Ok..thx again for your patience and your help. Hope this was the last time i had to bother you :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738245">27</a> by Raymond Camden
		posted on 3/1/2012 at 5:32 PM
		</div>
		<div class="comment_text"><p>One thing to remember though. If you are downloading N files, then it is possible that when the callback for the Nth one fires, that an earlier one is still working. That's the nature of asynch operations.</p><p>jQuery 1.5 added easier support for grouping together such tasks such that you can "do x when all is done". This feature is based on a feature called Deferreds. I'd do a bit of reading up on it. (Personally, I still struggle with the syntax.)</p><p>For my app I didn't have to worry about it.</p><p>I should force myself to update the app to use it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738255">28</a> by Alex
		posted on 3/1/2012 at 6:19 PM
		</div>
		<div class="comment_text"><p>Jep, that is exactly what happend...<br>Too bad. <br>Is there a way to download files NOT asynch?<br>Get list of files from the JSON and than download one after the other?<br>As far as i understand, the asynch method should prevent the app from making the user wait till all is loaded.<br>But when updating data i will tell the user that the app is updating and wait for the update to finish.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738256">29</a> by Raymond Camden
		posted on 3/1/2012 at 7:53 PM
		</div>
		<div class="comment_text"><p>Nope, it must be asynch.</p><p>I'd really check the jQuery docs. I know I made it sound kind of scary, but it DOES work, and is very doable. It's just a topic I'm having a hard time wrapping my head around.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738252">30</a> by Alex
		posted on 3/1/2012 at 8:45 PM
		</div>
		<div class="comment_text"><p>I had a first look at the jQuery docu but i think i will have to look for a few more examples.<br>Maybe i should first try to fully understand how all those callback functions work ;-)<br>I'll give it a try.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738257">31</a> by Sumit Verma
		posted on 3/1/2012 at 8:54 PM
		</div>
		<div class="comment_text"><p>Here is how you can make is synchronous:</p><p>PS: there is some extra code in here that you can remove, but you will get the idea.</p><p>/* download all the images */<br>function downloadImages(data){<br>	var imageList = data.IMAGELIST;<br>	var imagePath = data.IMAGEPATH;<br>	var imageName = "";<br>	imageData.imagePath = imagePath;<br>	imageData.imageList = [];<br>	var colMap = new Object();<br>	//create column map<br>	for (var i = 0; i &lt; imageList.COLUMNS.length; i++) {<br>		colMap[imageList.COLUMNS[i]] = i;<br>	}<br>	for (var i = 0; i &lt; imageList.DATA.length; i++) {<br>		imageName = imageList.DATA[i][colMap["NAME"]];<br>		imageData.imageList.push(imageName);<br>	}<br>	consoleLog('Total images to download: ' + imageData.imageList.length);<br>	downloadImage();<br>}</p><p>/* download image syncronously */<br>function downloadImage(){<br>	if(imageData.imageList.length &gt; 0){<br>		var imageName = imageData.imageList[0];<br>		var imagePath = imageData.imagePath;<br>		consoleLog('Start file download: ' + imagePath + imageName);<br>		//check if file exists, pass the function as new closure, so the variable is preserved<br>		imageDir.getFile(imageName, {create: false}, successImageExists, (function(name, path){<br>			return function(){<br>				failImageExists(name, path)<br>			}<br>		})(imageName, imagePath));<br>	}<br>}</p><p>/* image exists */<br>function successImageExists(file){<br>	consoleLog('Image Exists: ' + <a href="http://disq.us/url?url=http%3A%2F%2Ffile.name%3AUGqt-C7b1V2q1kv6IsFB9zMLDpg&amp;cuid=3321886" rel="nofollow noopener" title="file.name">file.name</a>);<br>	updateImageDownloadProgress();<br>}</p><p>/* image doesn't exists */<br>function failImageExists(imageName,imagePath){<br>	consoleLog('image does not Exists');	<br>	//start download	<br>	consoleLog('Download Image To: ' + imageDir.fullPath + '/' + imageName);<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fft.download%3AiTvONHhcc5g-jwmKh58YqHy8rR4&amp;cuid=3321886" rel="nofollow noopener" title="ft.download">ft.download</a>(imagePath + escape(imageName), imageDir.fullPath + '/' + imageName, onImageDownload, onImageDownloadFail);<br>}</p><p>/* on image download fail */<br>function onImageDownloadFail(error){<br>    consoleLog('image not downloaded. Error: ' + JSON.stringify(error));<br>	updateImageDownloadProgress();<br>}</p><p>/* on image download success */<br>function onImageDownload(image){<br>    updateImageDownloadProgress();<br>}</p><p>/* update image download progress */<br>function updateImageDownloadProgress(){<br>	imageData.imageList = imageData.imageList.slice(1);<br>	consoleLog('images left to download: ' + imageData.imageList.length);<br>	if(imageData.imageList.length == 0){<br>		imagesDownloaded = true;<br>	} else {<br>		downloadImage();<br>	}<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738254">32</a> by Raymond Camden
		posted on 3/1/2012 at 9:12 PM
		</div>
		<div class="comment_text"><p>Sumit, please please please use pasteBin in the future. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738258">33</a> by Sumit Verma
		posted on 3/1/2012 at 10:55 PM
		</div>
		<div class="comment_text"><p>Sure, sorry :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738260">34</a> by Sumit Verma
		posted on 3/1/2012 at 10:58 PM
		</div>
		<div class="comment_text"><p>You can delete the earlier comment, if you want. Here is the paste bin version:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FkNvF166F%3AuwBKVicMBLj2bkIzEFCfTtVHqeo&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/kNvF166F">http://pastebin.com/kNvF166F</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738262">35</a> by Raymond Camden
		posted on 3/1/2012 at 11:02 PM
		</div>
		<div class="comment_text"><p>It's ok.</p><p>But... I will say this. Your implementation is not one I agree with. It looks like it would work, but you really should look at deferreds. It handles this much more elegantly.</p><p>If anything, you've convinced me to try to find time to update my demo. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738261">36</a> by Sumit Verma
		posted on 3/1/2012 at 11:19 PM
		</div>
		<div class="comment_text"><p>I agree, it can be done more elegantly using deferreds, but I didn't had time to play with that and this was a quick and easy solution (and it does work ;))...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738264">37</a> by Alex
		posted on 3/1/2012 at 11:21 PM
		</div>
		<div class="comment_text"><p>Well maybe deferred is more elegant, but Sumit gave me good idea for a workaround if i am not able to get deferred to work.</p><p>If i get deferred to work i will let you know and post my solution.</p><p>Sumit, thx for giving me an good idea for a workaround.<br>Thx to both of you for the great support :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738265">38</a> by Sumit Verma
		posted on 3/1/2012 at 11:27 PM
		</div>
		<div class="comment_text"><p>Another point wanted to mention is, if you are downloading lot of file that are large in size, synchronous download is your only option. The Async starts failing because I guess its too many threads for the device to handle (at-least in iOS).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738263">39</a> by Raymond Camden
		posted on 3/1/2012 at 11:28 PM
		</div>
		<div class="comment_text"><p>Yeah, sorry if I sounded too negative. I can promise you that Sumit's working version is better than the one I haven't written yet. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738267">40</a> by Alex
		posted on 3/5/2012 at 7:22 PM
		</div>
		<div class="comment_text"><p>@Sumit, ist possible to see the rest of your code?<br>I guess you set some of the variables used in your code outside.<br>e.g. <br>downloadImages(data)v &lt;= what does Data contain<br>imageDir. &lt;= where and how is this defined <br>imageData &lt;= same as above</p><p>Would be great if you could show me how you modified raymonds code to work with your example.<br>Sorry for bothering you again :-)</p><p>Thx for your great help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738266">41</a> by Sumit Verma
		posted on 3/5/2012 at 9:21 PM
		</div>
		<div class="comment_text"><p>Alex,</p><p>Data is a struct returned from CF.</p><p>data.imagePath = "<a href="http://disq.us/url?url=http%3A%2F%2Fdomain.com%2Fpath%2Fto%2Fimage%2Ffolder%3ANTMUaj15-oQHUMyXTCNNvm0Fh6c&amp;cuid=3321886" rel="nofollow noopener" title="http://domain.com/path/to/image/folder">http://domain.com/path/to/i...</a>"<br>data.imageList = list of image names (converted to JSON from query by CF)</p><p>Imagelist comes from cfdirectory.</p><p>imageDir is the reference to image directory in FileSystem. Same as DATADIR in Ray's example.</p><p>imageData is a global JS variable to hold the image name array, as files are downloaded image names are removed from this array.</p><p>HTH,<br>Sumit</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738269">42</a> by Raymond Camden
		posted on 3/5/2012 at 9:24 PM
		</div>
		<div class="comment_text"><p>As a side note, Sumit, I tried your technique in a different context (basically I needed to single thread N ajax calls) and it worked well. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738284">43</a> by Alex
		posted on 3/5/2012 at 10:17 PM
		</div>
		<div class="comment_text"><p>Sumit,</p><p>so data.imageList is almost the same as Raymonds <br>$.get("<a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2012%2Fjan%2F17%2Fimagelister.cfc%3Fmethod%3Dlistimages%3AXrUa-7kcQThFE6G4rN7K3Wlo9_E&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2012/jan/17/imagelister.cfc?method=listimages">http://www.raymondcamden.co...</a>", {}, function(res) {<br>....<br>  }, "json");</p><p>So what i could do is take your function downloadImages() and change it to:</p><p>function downloadImages(data){<br>   var imagePath = 'http://path_to_my_files/';<br>   $.get("http://path_to_my_JSON/json.php", {}, function(res) {</p><p>       var imageName = "";<br>       imageData.imagePath = imagePath;<br>       imageData.imageList = [];<br>       var colMap = new Object();<br>       //create column map<br>       for (var i = 0; i &lt; res.COLUMNS.length; i++) {<br>          colMap[res.COLUMNS[i]] = i;<br>       }<br>       for (var i = 0; i &lt; res.DATA.length; i++) {<br>          imageName = res.DATA[i][colMap["NAME"]];<br>          imageData.imageList.push(imageName);<br>       }<br>       consoleLog('Total images to download: ' + imageData.imageList.length);  <br>    }, "json");   <br>       downloadImage();<br>}</p><p>My webpage (json.php) returns something like this:<br>["files.json","data.json","dates.json"] (the files i want to download)<br>Ist this what your column mapper expects?</p><p>Btw. just to give you a short explaination why i ask so much instead of trying it all by myself.<br>This is my first try with HTML5, javascript and phonegap. I promised a friend to help him with a little non commercial app and i will be on holiday by the end of the week for 4 weeks ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738273">44</a> by Sumit Verma
		posted on 3/5/2012 at 10:32 PM
		</div>
		<div class="comment_text"><p>Yes to all except column mapper. You don't need it if you are getting the data as array of file names. You can just set imageData.imageList to that array. I'm using column mapper because I'm converting a query object (with image name and date modified) in CF to JSON.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738276">45</a> by Alex
		posted on 3/5/2012 at 11:11 PM
		</div>
		<div class="comment_text"><p>I gave it try:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FgZQXL8P3%3AM6n0a4HNwYgPAdlIz-VwYd0iuIc&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/gZQXL8P3">http://pastebin.com/gZQXL8P3</a></p><p>but it breaks after <br>..console.log("Start downloading..."); <br>within downloadImages()</p><p>Btw. the download process is still triggerd by the init() script from Rays example. Is this the best way to start the download and make the page "wait" until the download is finished and then move on or relocate to another page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738286">46</a> by Alex
		posted on 3/6/2012 at 1:08 AM
		</div>
		<div class="comment_text"><p>Oh my god, that was really stupid...</p><p>i used console.Log instead of console.log....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738282">47</a> by Raymond Camden
		posted on 3/6/2012 at 10:01 AM
		</div>
		<div class="comment_text"><p>Alex - I do that a lot myself. Don't feel bad. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738279">48</a> by Shailesh
		posted on 3/7/2012 at 5:01 PM
		</div>
		<div class="comment_text"><p>Hi, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2012%2Fjan%2F17%2Fimagelister.cfc%3Fmethod%3Dlistimages%3AXrUa-7kcQThFE6G4rN7K3Wlo9_E&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2012/jan/17/imagelister.cfc?method=listimages">http://www.raymondcamden.co...</a>"<br>in the code above what do you mean by : imagelister.cfc?method=listimages</p><p>I am going to use this code but only stuck at above line. i am new to phonegap and i9 need to synchronize images from remote server. please help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738278">49</a> by Raymond Camden
		posted on 3/7/2012 at 6:17 PM
		</div>
		<div class="comment_text"><p>That is a file on my ColdFusion server. It could be any technology - PHP, Ruby, whatever. For me, I used ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738287">50</a> by Jerry Zhu
		posted on 3/20/2012 at 7:54 PM
		</div>
		<div class="comment_text"><p>Hello Raymond<br>Good tutorial, very helpful. However, I still got error while file downloading. I copied all code to my project, when I run it on my real mobile (android 2.3.5), the error came out. It says:<br>-----<br>03-20 23:51:34.863: E/FileTransfer(16025): Error while downloading<br>03-20 23:51:34.863: E/FileTransfer(16025): java.io.IOException: Error while downloading<br>03-20 23:51:34.863: E/FileTransfer(16025): 	at <a href="http://disq.us/url?url=http%3A%2F%2Forg.apache.cordova.FileTransfer.download%3AnbWjgdONrEpi8YjelI3DF1w3E6Q&amp;cuid=3321886" rel="nofollow noopener" title="org.apache.cordova.FileTransfer.download">org.apache.cordova.FileTran...</a>(<a href="http://disq.us/url?url=http%3A%2F%2FFileTransfer.java%3AbldEyztQd49NQ4fujhsSajwYri8&amp;cuid=3321886" rel="nofollow noopener" title="FileTransfer.java">FileTransfer.java</a>:429)<br>03-20 23:51:34.863: E/FileTransfer(16025): 	at org.apache.cordova.FileTransfer.execute(<a href="http://disq.us/url?url=http%3A%2F%2FFileTransfer.java%3AbldEyztQd49NQ4fujhsSajwYri8&amp;cuid=3321886" rel="nofollow noopener" title="FileTransfer.java">FileTransfer.java</a>:102)<br>03-20 23:51:34.863: E/FileTransfer(16025): 	at org.apache.cordova.api.PluginManager$<a href="http://disq.us/url?url=http%3A%2F%2F1.run%3A4ZoQKRKUCFqXD2ion4k0pCvO_8I&amp;cuid=3321886" rel="nofollow noopener" title="1.run">1.run</a>(<a href="http://disq.us/url?url=http%3A%2F%2FPluginManager.java%3AX0ThFPYncTRhsIW0NxMsKI1bHU4&amp;cuid=3321886" rel="nofollow noopener" title="PluginManager.java">PluginManager.java</a>:150)<br>03-20 23:51:34.863: E/FileTransfer(16025): 	at <a href="http://disq.us/url?url=http%3A%2F%2Fjava.lang.Thread.run%3AihyBEa3w3PknQXFtdf9s-Zclq5I&amp;cuid=3321886" rel="nofollow noopener" title="java.lang.Thread.run">java.lang.Thread.run</a>(<a href="http://disq.us/url?url=http%3A%2F%2FThread.java%3AK09PFWg8SqvGk4CysQqy_ILXY-0&amp;cuid=3321886" rel="nofollow noopener" title="Thread.java">Thread.java</a>:1019)<br>-----<br>Any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738274">51</a> by Raymond Camden
		posted on 3/21/2012 at 12:05 AM
		</div>
		<div class="comment_text"><p>What are you downloading? Can you share all the code? (Via pastebin of course.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738285">52</a> by Jerry Zhu
		posted on 3/21/2012 at 6:45 AM
		</div>
		<div class="comment_text"><p>The codes are copied from your post in fact..So the images it downloaded are same from the json. The json can interpret currectly not the issues happened via downloading. Tricky..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738280">53</a> by Raymond Camden
		posted on 3/21/2012 at 2:34 PM
		</div>
		<div class="comment_text"><p>So to be clear, it dies on the actual file download? You see all the other (previous) status messages as the app starts up?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738277">54</a> by Jerry Zhu
		posted on 3/21/2012 at 6:28 PM
		</div>
		<div class="comment_text"><p>Yes, I can see correct JOSN response and "starting downloading xxx" in console. But the images weren't downloaded at all. I have checked the folder created by this app, nothing inside. Interesting problem... Drive me crazy..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738283">55</a> by Raymond Camden
		posted on 3/22/2012 at 4:45 AM
		</div>
		<div class="comment_text"><p>What I'd recommend then is adding some console.log messages. You need to find out _exactly_ where it breaks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738281">56</a> by Jerry Zhu
		posted on 3/23/2012 at 7:09 PM
		</div>
		<div class="comment_text"><p>Could I send email to you with screenshots? I'm using phonegap 1.5.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738275">57</a> by Raymond Camden
		posted on 3/23/2012 at 7:39 PM
		</div>
		<div class="comment_text"><p>Screenshots won't help. Try what I recommended - using console.log to try to diagnose where exactly it's failing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738292">58</a> by Shailesh
		posted on 3/30/2012 at 2:07 PM
		</div>
		<div class="comment_text"><p>Hi, can i get the sample code for imagelister.cfc?method=listimages File so i come to know how exctly i should write code in my PHP file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738289">59</a> by Shailesh
		posted on 3/30/2012 at 2:33 PM
		</div>
		<div class="comment_text"><p>Also i have tried your server to check the code and try to download the images but only get the below message and then nothing happen...</p><p>Checking your local cache....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738288">60</a> by Raymond Camden
		posted on 3/30/2012 at 3:26 PM
		</div>
		<div class="comment_text"><p>Shailesh: All it does is list the directory and create an array of file names. As to your error, best I can suggest is what I told Jerry, to try some console messages.</p><p>I've gotten reports that 1.5 may be an issue. Sometime today/this weekend I'll try to replicate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738290">61</a> by AJHino
		posted on 4/11/2012 at 8:30 PM
		</div>
		<div class="comment_text"><p>I'm using a similar approach to $,get a JSON object containing a list of various URL resources to store down to my app.  The files are put into various directories, mirroring the directory structure of the web server.</p><p>Is there a way to set the gotFIles() function to do a scandir type of action so it can also check all subdirectories for any matched files?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738291">62</a> by Raymond Camden
		posted on 4/11/2012 at 10:12 PM
		</div>
		<div class="comment_text"><p>Well, anything should be possible - you can write code to recursively scan folders. I don't know of any examples of that yet though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738294">63</a> by AJHino
		posted on 4/12/2012 at 2:38 AM
		</div>
		<div class="comment_text"><p>I was hoping there would be some file reader method that would recursively scan folders.  I guess a home brew is in order on this one.</p><p>One other issue I have run into is finding a way to trigger an "all files finished downloading" event.   I have tried inserting a callback function after the .get function, in the get function if the last resource has been reached, and a handful of other places.  It seems that the callback function will execute after the JSON object is scanned, but before the actual download process completes.   I'm looking for something similar to the FileWriter's property of readyState that can indicate a "DONE" state.  I have really had a hard time finding any documentation on the File Transfer download method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738293">64</a> by Raymond Camden
		posted on 4/14/2012 at 1:54 AM
		</div>
		<div class="comment_text"><p>If you've got N sets of transfers, you need a way to handle all of those asyncs being done. Afaik, jQuery Deferreds provide a way of doing this, but I'm still wrapping my head around them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738295">65</a> by Shailesh
		posted on 5/4/2012 at 2:39 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I have downloaded image in emulator and its works fine but somehow on real device it is not downloading the images. don't where it stuck... ?? any idea about that?</p><p>Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738296">66</a> by Raymond Camden
		posted on 5/4/2012 at 6:09 PM
		</div>
		<div class="comment_text"><p>I recommend making liberal use of console.log to try and diagnose where it is failing. You should be able to do this and see the failure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738313">67</a> by Gavriel
		posted on 5/17/2012 at 12:47 AM
		</div>
		<div class="comment_text"><p>Sumit, did you find a fix to the FileError.PATH_EXISTS_ERR? I'm running my code on Android via <a href="http://disq.us/url?url=http%3A%2F%2Fbuild.phonegap.com%3A3uSHzxAbk16923y7ubV1pPbxE78&amp;cuid=3321886" rel="nofollow noopener" title="build.phonegap.com">build.phonegap.com</a> (phonegap 1.6.1) and I get this when I try to open my app's main directory that already exsists: fileSystem.root.getDirectory("com.example.myapp", {create: true, exclusive: false}, ...)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738303">68</a> by Gavriel
		posted on 5/17/2012 at 12:49 AM
		</div>
		<div class="comment_text"><p>Forgot to mention that I run it on Android 2.3.7</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738311">69</a> by Sumit Verma
		posted on 5/17/2012 at 12:55 AM
		</div>
		<div class="comment_text"><p>@Gavriel</p><p>Yes, please see my earlier comment.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F1%2F19%2FDownloading-files-to-a-PhoneGap-application--Part-1%23c5793D9BF-E60A-EB1D-AA483410F95B0FC4%3Aou2VGwVMqdqOXSBOmuGTqtyHis8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/1/19/Downloading-files-to-a-PhoneGap-application--Part-1#c5793D9BF-E60A-EB1D-AA483410F95B0FC4">http://www.raymondcamden.co...</a></p><p>Sumit</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738312">70</a> by Gavriel
		posted on 5/17/2012 at 2:03 AM
		</div>
		<div class="comment_text"><p>I already had the exclusive: false. And it also turned out that the directory wasn't there. So it is probably a bug in <a href="http://disq.us/url?url=http%3A%2F%2Fbuild.phonegap.com%3A3uSHzxAbk16923y7ubV1pPbxE78&amp;cuid=3321886" rel="nofollow noopener" title="build.phonegap.com">build.phonegap.com</a>'s version. When I create the directory (for example with my app, but built in Eclipse with cordova 1.7.2, then it creates the directory) then it can open it.</p><p>However now my next problem: <a href="http://disq.us/url?url=http%3A%2F%2FFileTransfer.download%3ASNTh_qu3syTGhCXNsyzIUM_SHpA&amp;cuid=3321886" rel="nofollow noopener" title="FileTransfer.download">FileTransfer.download</a> gives me ABORT_ERR. Any idea why? I'm trying to download a file to the TEMPORARY filesystem</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738304">71</a> by Gavriel
		posted on 5/17/2012 at 3:18 AM
		</div>
		<div class="comment_text"><p>adding to config.xml: <br>&lt;feature name="<a href="http://disq.us/url?url=http%3A%2F%2Fapi.phonegap.com%2F1.0%2Ffile%3AHLjtuS-rpxnfmY4papZhIXOg9o8&amp;cuid=3321886" rel="nofollow noopener" title="http://api.phonegap.com/1.0/file">http://api.phonegap.com/1.0...</a>"/&gt;<br>&lt;access origin="<a href="https://disq.us/url?url=https%3A%2F%2Fmydomain.com%3AHtvL2N_pHqJS4MiA07pRrrPO46M&amp;cuid=3321886" rel="nofollow noopener" title="https://mydomain.com">https://mydomain.com</a>" /&gt;<br>fixed it</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738310">72</a> by Huzoor Bux Panhwar
		posted on 5/31/2012 at 3:03 PM
		</div>
		<div class="comment_text"><p>Same Code dosen't work on my android 2.2 return me below message.</p><p>05-31 16:58:32.972: DEBUG/SntpClient(59): request time failed: java.net.SocketException: Address family not supported by protocol</p><p>Please help me where i am making mistake i am using phonegap 1.7.0 version which i have changed in the code this code is created on 1.3.0.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738309">73</a> by Raymond Camden
		posted on 5/31/2012 at 5:19 PM
		</div>
		<div class="comment_text"><p>When does this error get thrown?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738302">74</a> by Huzoor Bux Panhwar
		posted on 5/31/2012 at 7:52 PM
		</div>
		<div class="comment_text"><p>When i am running my application it thrown this error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738314">75</a> by Raymond Camden
		posted on 5/31/2012 at 7:54 PM
		</div>
		<div class="comment_text"><p>Right, but what you need to do is try to determine when in the application flow. Notice the console messages? They would give you an idea of when things fail. If you do not know how to read the console, see my other blog post on the topic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738317">76</a> by Huzoor Bux Panhwar
		posted on 5/31/2012 at 8:03 PM
		</div>
		<div class="comment_text"><p>I got this error from console log.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738315">77</a> by Raymond Camden
		posted on 5/31/2012 at 8:06 PM
		</div>
		<div class="comment_text"><p>Right... but my point is this. Use the console to figure out _when_ the error occurs. What part of the process defined in the application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738308">78</a> by Huzoor Bux Panhwar
		posted on 6/7/2012 at 3:06 PM
		</div>
		<div class="comment_text"><p>Hey Raymond,</p><p>getting this errors in debugger....</p><p>06-07 17:04:23.250: DEBUG/CordovaLog(560): file:///android_asset/www/index.html: Line 47 : ERROR</p><p>06-07 17:04:23.250: INFO/Web Console(560): ERROR at file:///android_asset/www/index.html:47</p><p>06-07 17:04:23.250: DEBUG/CordovaLog(560): {"code":12}</p><p>06-07 17:04:23.250: DEBUG/CordovaLog(560): file:///android_asset/www/index.html: Line 48 : {"code":12}</p><p>06-07 17:04:23.250: INFO/Web Console(560): {"code":12} at file:///android_asset/www/index.html:48</p><p>06-07 17:04:28.110: DEBUG/dalvikvm(251): GC_EXPLICIT freed 160 objects / 11848 bytes in 258ms</p><p>and line number 47 and 48 is</p><p>function onError(e){<br> 47=&gt;   console.log("ERROR");<br> 48=&gt;   console.log(JSON.stringify(e));</p><p>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738306">79</a> by Raymond Camden
		posted on 6/7/2012 at 5:31 PM
		</div>
		<div class="comment_text"><p>You still aren't hearing me though. Do you understand that when you do console.log("X"), it prints it out to your console (and in your case, that is the debugger). My point to you is that you should add messages to the code so you can see -when- this error is thrown.</p><p>For example, you can put one in onDeviceReady, you can put one in appReady. You can put one before the $.get, in the closure, etc.</p><p>Your job here is to find out -when- error code 12 was thrown. I can't tell you this from here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738307">80</a> by Huzoor Bux Panhwar
		posted on 6/8/2012 at 1:49 PM
		</div>
		<div class="comment_text"><p>I have done this problem is because of whitelist so i have resolved this.</p><p>Now i need some thing like live progress in that page which show how much work left.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738305">81</a> by Huzoor Bux Panhwar
		posted on 6/9/2012 at 4:30 PM
		</div>
		<div class="comment_text"><p>Hey Raymond,</p><p>Thanks for this great post.</p><p>Now i am confused that how can i create nested directory like  this.</p><p>fileSystem.root.getDirectory("Android/data/com.phonegap.myapp/dir_one/dir_two/",{create:true},gotDir,onError);</p><p>and i need to make 3 directories always in each case in my script any solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738316">82</a> by Raymond Camden
		posted on 6/9/2012 at 5:25 PM
		</div>
		<div class="comment_text"><p>Unfortunately, you have to do it step by step. So to make /a/b/c, you have to make a (if you need to), then b (if you need to), and so on. For more details, see this excellent article:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.html5rocks.com%2Fen%2Ftutorials%2Ffile%2Ffilesystem%2F%3A_lqy-a4hTfVQxPHUxNzRYiciswM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.html5rocks.com/en/tutorials/file/filesystem/">http://www.html5rocks.com/e...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738318">83</a> by Kenji
		posted on 6/26/2012 at 6:14 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Just wondering, could you see a modified version of this code working for grabbing videos from a host on to the local?</p><p>Could you file size issues being an issue</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738320">84</a> by Raymond Camden
		posted on 6/26/2012 at 5:32 PM
		</div>
		<div class="comment_text"><p>Kenji: To your first paragraph, it is no different. It should just work. To your second paragraph, I'm not quite sure I get what you are syaing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738321">85</a> by Imas
		posted on 7/3/2012 at 12:47 PM
		</div>
		<div class="comment_text"><p>Hello...<br>I am beginner on mobile apps, especially phonegap.<br>I just try the script above, but it goes error...</p><p>07-03 15:46:29.409: E/Web Console(811): Uncaught TypeError: Object [object Object] has no method 'download' at file:///android_asset/www/index.html:67</p><p>the line is :<br><a href="http://disq.us/url?url=http%3A%2F%2Fft.download%3AiTvONHhcc5g-jwmKh58YqHy8rR4&amp;cuid=3321886" rel="nofollow noopener" title="ft.download">ft.download</a>("<a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2012%2Fjan%2F17%2F%3A3TkudBjahQ9WIlJ_o86n207DHxQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2012/jan/17/">http://www.raymondcamden.co...</a>" + escape(res[i]), dlPath, function(){....</p><p>what should I do?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738323">86</a> by Raymond Camden
		posted on 7/3/2012 at 9:15 PM
		</div>
		<div class="comment_text"><p>Add a quick console.dir(ft) and see if ft is a proper object. It is supposed to be an instance of FileTransfer, which supports a download method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738319">87</a> by Imas
		posted on 7/4/2012 at 11:48 AM
		</div>
		<div class="comment_text"><p>Hi it's me again...<br>I just change the version of phonegap.jar and .js with the newest version.. and <a href="http://disq.us/url?url=http%3A%2F%2Fft.download%3AiTvONHhcc5g-jwmKh58YqHy8rR4&amp;cuid=3321886" rel="nofollow noopener" title="ft.download">ft.download</a> doesn't error anymore...<br>but, i got another one -_-, it said:</p><p>Could not find class 'android.webkit.WebResourceResponse', referenced from method org.apache.cordova.CordovaWebViewClient.generateWebResourceResponse</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738325">88</a> by Raymond Camden
		posted on 7/4/2012 at 5:33 PM
		</div>
		<div class="comment_text"><p>That's a new one for me. I'd suggest the PhoneGap Google group. Sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738324">89</a> by AMet
		posted on 7/18/2012 at 1:18 PM
		</div>
		<div class="comment_text"><p>Hey Raymond.<br>Looks like that your function renderPicture(path){<br>41    $("#photos").append("&lt;img src='file://"+path+"'&gt;");<br>42    console.log("&lt;img src='file://"+path+"'&gt;");<br>43}<br>Doesn't need file:// anymore, I defently just ran this, phonegap 1.9 + jqm. and it was included in path.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738327">90</a> by Raymond Camden
		posted on 7/18/2012 at 7:35 PM
		</div>
		<div class="comment_text"><p>Thanks AMet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738344">91</a> by julee
		posted on 7/18/2012 at 8:54 PM
		</div>
		<div class="comment_text"><p>Hi, Ray &amp; Imas: Don't know if Imas is still looking for information regarding that error, but I don't think it's of consequence. I came across this <a href="https://disq.us/url?url=https%3A%2F%2Fissues.apache.org%2Fjira%2Fbrowse%2FCB-995%3ACLhP9GW14KK57o6v-_2pYJoJvXQ&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.apache.org/jira/browse/CB-995">https://issues.apache.org/j...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738339">92</a> by Jane
		posted on 7/26/2012 at 5:04 AM
		</div>
		<div class="comment_text"><p>Hi, umm T.T<br>When I run the emulator, error has occurred.<br>Error -&gt; code: 12<br>I was working on android 2.3 and 4.0 <br>but I don't know that<br>When I work with my cell phone, there was no error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738342">93</a> by Raymond Camden
		posted on 7/26/2012 at 6:43 PM
		</div>
		<div class="comment_text"><p>I'm having a hard time parsing your comment. You say it works on a real device but not the emulator?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738335">94</a> by Jane
		posted on 7/27/2012 at 3:27 AM
		</div>
		<div class="comment_text"><p>Yes <br>code dosen't work on emulator.<br>The getDirectory method keeps throwing error.<br>error code is 12</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738333">95</a> by Julius
		posted on 7/27/2012 at 10:32 AM
		</div>
		<div class="comment_text"><p>Hello,</p><p>I tried and I get "401 Unauthorized" on <a href="http://disq.us/url?url=http%3A%2F%2Fft.download%3AiTvONHhcc5g-jwmKh58YqHy8rR4&amp;cuid=3321886" rel="nofollow noopener" title="ft.download">ft.download</a>() method call.</p><p>Thanks !!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738341">96</a> by Julius
		posted on 7/27/2012 at 10:57 AM
		</div>
		<div class="comment_text"><p>Hi again,</p><p>I had forgotten to add the test url on my config.xml as a whitelist</p><p>AndroidProject/res/xml/config.xml</p><p>Thanks a lot for your awesome piece of code ;-)</p><p>Julius</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738337">97</a> by Raymond Camden
		posted on 7/27/2012 at 2:57 PM
		</div>
		<div class="comment_text"><p>Ah so it is all good now?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738338">98</a> by Abraham
		posted on 8/3/2012 at 3:26 AM
		</div>
		<div class="comment_text"><p>I have weird problem testing on Android Device,</p><p>It stops on the Directory reader event, it doesn't show any error o success... it just stops and nothing happens.</p><p>Any idea?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738346">99</a> by Raymond Camden
		posted on 8/3/2012 at 6:29 PM
		</div>
		<div class="comment_text"><p>Best I can recommend is using the console to try to track down where things are failing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738334">100</a> by Abraham
		posted on 8/4/2012 at 1:21 AM
		</div>
		<div class="comment_text"><p>got it working, I  read about the console a few minutes later of post, tnx!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738336">101</a> by yanezricardo
		posted on 10/11/2012 at 3:58 AM
		</div>
		<div class="comment_text"><p>Hello, could you tell me who is <br>"imagelister.cfc?method=listimages"? at URL: ("<a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2012%2Fjan%2F17%2Fimagelister.cfc%3Fmethod%3Dlistimages%3AXrUa-7kcQThFE6G4rN7K3Wlo9_E&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2012/jan/17/imagelister.cfc?method=listimages">http://www.raymondcamden.co...</a>")</p><p>I need to do something similar to read a list of images from my dropbox folder.</p><p>Thanks in advance!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738345">102</a> by Raymond Camden
		posted on 10/11/2012 at 5:14 AM
		</div>
		<div class="comment_text"><p>It's ColdFusion code that scans a directory for images and returns a list of these files as a JSON-encoded array. It's no more than 5 or so lines of code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738340">103</a> by yanezricardo
		posted on 10/11/2012 at 4:05 PM
		</div>
		<div class="comment_text"><p>Could you please give me a snippet? or tell me how to look for information about creating that file and please excuse the audacity!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738349">104</a> by Raymond Camden
		posted on 10/11/2012 at 4:13 PM
		</div>
		<div class="comment_text"><p>To be clear, this is like 3 lines of code or so. I don't mind sharing, but do you know ColdFusion? Do you use ColdFusion for your server-side code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738343">105</a> by yanezricardo
		posted on 10/11/2012 at 4:26 PM
		</div>
		<div class="comment_text"><p>I do not know ColdFusion, I'm a .Net developer, web inexperienced, and I'm going to develop web applications for mobile devices with PhoneGap.</p><p>I thought about doing a demo application to read my dropbox photos and displays them in a list.</p><p>Thank you very much, I'm going to read about ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738350">106</a> by Raymond Camden
		posted on 10/11/2012 at 5:45 PM
		</div>
		<div class="comment_text"><p>Ah, so you know .Net, but not necessarily in terms of web apps? As much as I'd like to see you learn ColdFusion, you really don't need too. This should be trivial in _any_ language. It's literally just a directory listing into an array turned to JSON. Shouldn't be more than 5 minutes of work in .Net, PHP, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738348">107</a> by yanezricardo
		posted on 10/11/2012 at 6:41 PM
		</div>
		<div class="comment_text"><p>yeah, just read some ColdFusion and you're right when you say that is not what I need right now ...</p><p>I think I'll fix it by creating an XML file with the metadata of the images, put the file in my dropbox folder, read the file and download images one by one.</p><p>Thank you very much for the info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738351">108</a> by Raymond Camden
		posted on 10/11/2012 at 6:43 PM
		</div>
		<div class="comment_text"><p>Sure, XML would be fine too. I just fine XML much more of a pain to deal with in JS. If you are hand crafting a file, why not hand write a JSON file? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738356">109</a> by yanezricardo
		posted on 10/12/2012 at 2:59 AM
		</div>
		<div class="comment_text"><p>You're right! thanks again...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738353">110</a> by Muthukumar
		posted on 10/17/2012 at 5:21 PM
		</div>
		<div class="comment_text"><p>I downloaded the list of pdf files from my server using file download, and able to view in my device during  online mode. But I want to view the file during offline and also need to synchronize the files. Is there a way to do file synchronisation from the server using file download</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738355">111</a> by Raymond Camden
		posted on 10/17/2012 at 6:23 PM
		</div>
		<div class="comment_text"><p>So, yes, this is definitely possible, but it is a bit non-trivial. Not terribly complex, just involved. Let's break it down.</p><p>First, your app can work in offline mode easily enough. There is an API to check network status. Use that and if offline, then you just display the files already downloaded.</p><p>The sync aspect is more interesting. So if you are online, you can get the list of file onlines and compare to those on the app's file system. THe files not there - simple - download. If they match, it gets more complex. If the files are something the user can edit, then you need to provide a way to prompt the user about which is more fresh. If not, you could just download, but that is wasteful. So you may waht your remote system to return datestamps of the files as well and compare them to the local copies. That isn't going to be perfect either as the user's device time system will probably be in a different TZ then the server.</p><p>To handle that, you may wish to use something like LocalStorage or WebSQL to associate metadata with the files that can be compared to values on the server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738361">112</a> by Mark Lane
		posted on 10/24/2012 at 5:53 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>Great posting and comment thread.</p><p>Have you had any experience or luck with using PhoneGap's FileTransfer download in conjunction with dynamically delivered / served images.</p><p>I follow your code...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2012%2Fjan%2F17%2Fimagelister.cfc%3Fmethod%3Dlistimages%3AXrUa-7kcQThFE6G4rN7K3Wlo9_E&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2012/jan/17/imagelister.cfc?method=listimages">http://www.raymondcamden.co...</a></p><p>returns a list of image file names, and they're obviously appending to arrive at resources for FileTransfer to download such as:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2012%2Fjan%2F17%2Fdanger.jpg%3Avo8MuJBpNjDXHRHVhQcdTNJwFXg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2012/jan/17/danger.jpg">http://www.raymondcamden.co...</a></p><p>That's all well and good, and I confirmed this sort of stuff worked for me back at the start of my project (basically I confirmed that PhoneGap download worked).</p><p>The problem for me is that danger.jpg ultimately is a static resource and served up to anyone who knows the URL.</p><p>Id rather not have my images, and documents available to constant and static locations, so I'm attempting to serve them up through a script.</p><p>The backend is PHP, but obviously it doesn't really matter what server side language is involved.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.example.com%2FdocumentsLibrary%2F12%3AV_Z5ziH8-NZMy24ArxL0DhbJGWg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.example.com/documentsLibrary/12">http://www.example.com/docu...</a></p><p>I've done this many times before, and browsers are fine receiving images from scripts as long as they also send out the appropriate content type header, file size, and buffer the output.</p><p>In my example url, 12 represents and ID of a document or image.  There are a myriad of reasons why I want to do this, mostly from a security standpoint.  My actual urls contain other arguments representing rotating hashes and client user identifiers, etc.</p><p>The problem is that PhoneGap's FileTransfer download seems to not work with these dynamically generated images (try your captcha for example).  I can't seem to make them  palatable for <a href="http://disq.us/url?url=http%3A%2F%2Fft.download%3AiTvONHhcc5g-jwmKh58YqHy8rR4&amp;cuid=3321886" rel="nofollow noopener" title="ft.download">ft.download</a>.</p><p>Have you successfully downloaded images, documents etc from a dynamic source?</p><p>Files are created in the simulator (iOS) and on the devices, but they're empty.  Zero (0) bytes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738362">113</a> by Raymond Camden
		posted on 10/24/2012 at 7:48 PM
		</div>
		<div class="comment_text"><p>Interesting. So - not knowing PHP, but knowing CF, I know that if I were to generate a dynamic image I'd _also_ ensure I used the right headers. Is your PHP code sending the right headers back?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738365">114</a> by Mark Lane
		posted on 10/26/2012 at 4:45 PM
		</div>
		<div class="comment_text"><p>It was related to the headers... as far as I can tell this was related to additional headers (session related headers) that PhoneGap didn't like.  Stripping the script down the bare minimum and taking it out of the context of the larger application seems to have addressed my issue.  A working combination in PHP is as follows:</p><p>header('Access-Control-Allow-Origin: *');<br>header('Access-Control-Allow-Headers: X-Requested-With');<br>header( "Content-Type: image/png" );    // Or whatever is appropriate for the file<br>header('Content-Length: ' . filesize( $sExampleFile ) );<br>ob_clean();<br>flush();<br>readfile( $sExampleFile );<br>exit();</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738366">115</a> by Raymond Camden
		posted on 10/26/2012 at 4:48 PM
		</div>
		<div class="comment_text"><p>Interesting. I wonder what head it was? If you can ever figure out, let me know. In theory, session stuff shouldn't matter to a file request. Unless your PHP code was checking for a login and redirecting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738364">116</a> by Rahul Kumar
		posted on 1/24/2013 at 2:48 PM
		</div>
		<div class="comment_text"><p>When i am using data/data in the place of Android/data i am getting error<br>the error code is 12.<br>Please help me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738363">117</a> by Raymond Camden
		posted on 1/24/2013 at 5:30 PM
		</div>
		<div class="comment_text"><p>According to the source code, 12 = path exists error. So your code is trying to make a path that already exists.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738369">118</a> by Tony Gee
		posted on 1/25/2013 at 2:47 PM
		</div>
		<div class="comment_text"><p>Could the same method be used for videos instead of images. If so what should I look out for?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738370">119</a> by Raymond Camden
		posted on 1/25/2013 at 4:55 PM
		</div>
		<div class="comment_text"><p>It could be used for anything. All I'd watch out for is the size of what you download of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738368">120</a> by Chuck
		posted on 2/5/2013 at 1:53 AM
		</div>
		<div class="comment_text"><p>I have download working with FileTransfer, but on some devices I start getting the following in my debug and the downloads fail...</p><p>02-04 12:13:31.686: E/FileTransfer(2228): java.net.SocketException: Socket is closed<br>02-04 12:13:31.686: E/FileTransfer(2228): 	at org.apache.harmony.xnet.provider.jsse.OpenSSLSocketImpl.checkOpen(<a href="http://disq.us/url?url=http%3A%2F%2FOpenSSLSocketImpl.java%3AHhtDPqV_bK3UxXZkzKJsZg1M9Aw&amp;cuid=3321886" rel="nofollow noopener" title="OpenSSLSocketImpl.java">OpenSSLSocketImpl.java</a>:262)<br>02-04 12:13:31.686: E/FileTransfer(2228): 	at org.apache.harmony.xnet.provider.jsse.OpenSSLSocketImpl.startHandshake(<a href="http://disq.us/url?url=http%3A%2F%2FOpenSSLSocketImpl.java%3AHhtDPqV_bK3UxXZkzKJsZg1M9Aw&amp;cuid=3321886" rel="nofollow noopener" title="OpenSSLSocketImpl.java">OpenSSLSocketImpl.java</a>:273)<br>02-04 12:13:31.686: E/FileTransfer(2228): 	at org.apache.harmony.xnet.provider.jsse.OpenSSLSocketImpl.startHandshake(<a href="http://disq.us/url?url=http%3A%2F%2FOpenSSLSocketImpl.java%3AHhtDPqV_bK3UxXZkzKJsZg1M9Aw&amp;cuid=3321886" rel="nofollow noopener" title="OpenSSLSocketImpl.java">OpenSSLSocketImpl.java</a>:257)<br>02-04 12:13:31.686: E/FileTransfer(2228): 	at libcore.net.http.HttpConnection.setupSecureSocket(<a href="http://disq.us/url?url=http%3A%2F%2FHttpConnection.java%3A1BeQr_Y8FZcBVPJf9QLWbIUYbAA&amp;cuid=3321886" rel="nofollow noopener" title="HttpConnection.java">HttpConnection.java</a>:210)<br>02-04 12:13:31.686: E/FileTransfer(2228): 	at libcore.net.http.HttpsURLConnectionImpl$HttpsEngine.makeSslConnection(<a href="http://disq.us/url?url=http%3A%2F%2FHttpsURLConnectionImpl.java%3AMEavKJ7T0twZtAdqME-zRzuB9_k&amp;cuid=3321886" rel="nofollow noopener" title="HttpsURLConnectionImpl.java">HttpsURLConnectionImpl.java</a>:477)<br>02-04 12:13:31.686: E/FileTransfer(2228): 	at libcore.net.http.HttpsURLConnectionImpl$HttpsEngine.connect(<a href="http://disq.us/url?url=http%3A%2F%2FHttpsURLConnectionImpl.java%3AMEavKJ7T0twZtAdqME-zRzuB9_k&amp;cuid=3321886" rel="nofollow noopener" title="HttpsURLConnectionImpl.java">HttpsURLConnectionImpl.java</a>:441)<br>02-04 12:13:31.686: E/FileTransfer(2228): 	at libcore.net.http.HttpEngine.sendSocketRequest(<a href="http://disq.us/url?url=http%3A%2F%2FHttpEngine.java%3AEv4gtcyz5DUoRJcANlFNgI28F7g&amp;cuid=3321886" rel="nofollow noopener" title="HttpEngine.java">HttpEngine.java</a>:282)<br>02-04 12:13:31.686: E/FileTransfer(2228): 	at libcore.net.http.HttpEngine.sendRequest(<a href="http://disq.us/url?url=http%3A%2F%2FHttpEngine.java%3AEv4gtcyz5DUoRJcANlFNgI28F7g&amp;cuid=3321886" rel="nofollow noopener" title="HttpEngine.java">HttpEngine.java</a>:232)<br>02-04 12:13:31.686: E/FileTransfer(2228): 	at libcore.net.http.HttpURLConnectionImpl.connect(<a href="http://disq.us/url?url=http%3A%2F%2FHttpURLConnectionImpl.java%3Ao7F4c7ekb1ZlMT0jfNTaywW2vfk&amp;cuid=3321886" rel="nofollow noopener" title="HttpURLConnectionImpl.java">HttpURLConnectionImpl.java</a>:80)<br>02-04 12:13:31.686: E/FileTransfer(2228): 	at libcore.net.http.HttpsURLConnectionImpl.connect(<a href="http://disq.us/url?url=http%3A%2F%2FHttpsURLConnectionImpl.java%3AMEavKJ7T0twZtAdqME-zRzuB9_k&amp;cuid=3321886" rel="nofollow noopener" title="HttpsURLConnectionImpl.java">HttpsURLConnectionImpl.java</a>:164)<br>02-04 12:13:31.686: E/FileTransfer(2228): 	at <a href="http://disq.us/url?url=http%3A%2F%2Forg.apache.cordova.FileTransfer.download%3AnbWjgdONrEpi8YjelI3DF1w3E6Q&amp;cuid=3321886" rel="nofollow noopener" title="org.apache.cordova.FileTransfer.download">org.apache.cordova.FileTran...</a>(<a href="http://disq.us/url?url=http%3A%2F%2FFileTransfer.java%3AbldEyztQd49NQ4fujhsSajwYri8&amp;cuid=3321886" rel="nofollow noopener" title="FileTransfer.java">FileTransfer.java</a>:463)<br>02-04 12:13:31.686: E/FileTransfer(2228): 	at org.apache.cordova.FileTransfer.execute(<a href="http://disq.us/url?url=http%3A%2F%2FFileTransfer.java%3AbldEyztQd49NQ4fujhsSajwYri8&amp;cuid=3321886" rel="nofollow noopener" title="FileTransfer.java">FileTransfer.java</a>:87)<br>02-04 12:13:31.686: E/FileTransfer(2228): 	at org.apache.cordova.api.PluginManager$<a href="http://disq.us/url?url=http%3A%2F%2F1.run%3A4ZoQKRKUCFqXD2ion4k0pCvO_8I&amp;cuid=3321886" rel="nofollow noopener" title="1.run">1.run</a>(<a href="http://disq.us/url?url=http%3A%2F%2FPluginManager.java%3AX0ThFPYncTRhsIW0NxMsKI1bHU4&amp;cuid=3321886" rel="nofollow noopener" title="PluginManager.java">PluginManager.java</a>:192)<br>02-04 12:13:31.686: E/FileTransfer(2228): 	at <a href="http://disq.us/url?url=http%3A%2F%2Fjava.lang.Thread.run%3AihyBEa3w3PknQXFtdf9s-Zclq5I&amp;cuid=3321886" rel="nofollow noopener" title="java.lang.Thread.run">java.lang.Thread.run</a>(<a href="http://disq.us/url?url=http%3A%2F%2FThread.java%3AK09PFWg8SqvGk4CysQqy_ILXY-0&amp;cuid=3321886" rel="nofollow noopener" title="Thread.java">Thread.java</a>:856)</p><p>Have you seen this before? It is not consistent between all devices and I can't make it fail in the simulator, but a few devices do it about 70% of the time. I have the code set to only try to run one download at a time, but that doesn't seem to fix it entirely either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738372">121</a> by Raymond Camden
		posted on 2/5/2013 at 1:54 AM
		</div>
		<div class="comment_text"><p>I'm sorry - that doesn't look familiar. Could you try posting to the PhoneGap Google Group (and please post back here if you get a response!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738371">122</a> by Nehal Vyas
		posted on 3/19/2013 at 5:44 PM
		</div>
		<div class="comment_text"><p>Hi - I could not download the files on device ready but i can download on any other event. It gives me error "File could not be found". I am using PhoneGap  2.4.0. Please help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738373">123</a> by Raymond Camden
		posted on 3/19/2013 at 5:47 PM
		</div>
		<div class="comment_text"><p>The error implies that it can't find the file you are trying to download. You are saying it works if you use another event? To be clear, the deviceready event is the only one you *must* wait for.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738376">124</a> by Rajesh Jai
		posted on 5/16/2013 at 2:24 PM
		</div>
		<div class="comment_text"><p>Hi, i ma new to Cordova, i got this error while runing in Android2.3.6. "Could not find class 'android.webkit.WebResourceResponse', referenced from method org.apache.cordova.CordovaWebViewClient.getWhitelistResponse" Any solution for this. thanks in advance...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738374">125</a> by Rajesh Jai
		posted on 5/16/2013 at 2:27 PM
		</div>
		<div class="comment_text"><p>hi, i am again. Cordova working in Android 4.x.. but i dont know why.? if know any one about this. please explain. thanks!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738375">126</a> by Greg Hudy
		posted on 5/17/2013 at 7:25 PM
		</div>
		<div class="comment_text"><p>I was able to use the code above for synchronous downloading that Sumit Verma (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.blogonria.com%2F%29%3ASHe4XMoQEH4k5h05nDH1qEekgUU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.blogonria.com/)">http://www.blogonria.com/)</a> had posted, modified it a bit and got it working for iOS <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FcMJYAgu1%3APZzzfs7E4rvW_zmYHWNbmm8dvLQ&amp;cuid=3321886" rel="nofollow noopener" title="pastebin.com/cMJYAgu1">pastebin.com/cMJYAgu1</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738379">127</a> by Anneleen
		posted on 8/8/2013 at 4:26 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, I tried your example, but it's not doing anything for me. I replaced com.camden.imagedownloaddemo with my own path, but no success. The images aren't visible and the Console Logs are even empty.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738377">128</a> by Raymond Camden
		posted on 8/8/2013 at 4:02 PM
		</div>
		<div class="comment_text"><p>When console.log fails me - I go back to the old school sucky alerts. I'd suggest adding some in and seeing if you can trace down exactly where the error occurs. You can also try Weinre.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738378">129</a> by Phillip Senn
		posted on 8/8/2013 at 6:04 PM
		</div>
		<div class="comment_text"><p>The debugger; statement is your friend.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738381">130</a> by Raymond Camden
		posted on 8/8/2013 at 6:05 PM
		</div>
		<div class="comment_text"><p>That's not going to work - by itself - in PhoneGap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738380">131</a> by Anneleen
		posted on 8/8/2013 at 6:22 PM
		</div>
		<div class="comment_text"><p>Added alerts, but no success...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738382">132</a> by Raymond Camden
		posted on 8/8/2013 at 6:24 PM
		</div>
		<div class="comment_text"><p>So you get *nothing*? Even if you put an alert as the first line of JS code? You mind sharing your JS via a Gist or Pastebin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738388">133</a> by Anneleen
		posted on 8/8/2013 at 6:53 PM
		</div>
		<div class="comment_text"><p>Oh god, never mind, I should stop coding so late at night. I forgot to replace the cordova version. It's working now! Thanks for your help and your tutorial!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738386">134</a> by Raymond Camden
		posted on 8/8/2013 at 8:38 PM
		</div>
		<div class="comment_text"><p>It happens - good luck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738387">135</a> by Anneleen
		posted on 8/17/2013 at 6:54 PM
		</div>
		<div class="comment_text"><p>Okay, I'm back. Just wondering how I would go about downloading a folder with different types of files, like for examples images, JSON- &amp; jsfiles. Any idea?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738385">136</a> by Raymond Camden
		posted on 8/17/2013 at 7:01 PM
		</div>
		<div class="comment_text"><p>By default, your web server should NOT be responding to a / request with a directory index, so it wouldn't work out of the box. What I've done in the past is to build server side code to handle this. So I may ask for "latestimages" (as a parameter to my server side code), it hits a particular folder, gets a list of files, and returns it as a JSON-encoded array. Then your PG code needs to loop over them and grab each.</p><p>I've actually got an example of this for images - but I can't remember the blog entry title offhand. Maybe just search for phonegap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738390">137</a> by Anneleen
		posted on 8/17/2013 at 11:45 PM
		</div>
		<div class="comment_text"><p>Fixed it! Now just one question left, is there a way to delete files that aren't used in the app anymore?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738391">138</a> by Raymond Camden
		posted on 8/18/2013 at 4:52 AM
		</div>
		<div class="comment_text"><p>FileSystem API, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738393">139</a> by Anneleen
		posted on 8/18/2013 at 5:44 AM
		</div>
		<div class="comment_text"><p>Yes ^^</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738392">140</a> by Raymond Camden
		posted on 8/19/2013 at 12:37 AM
		</div>
		<div class="comment_text"><p>So - are you agreeing you should use it? :) Just to be clear - I was saying - use the FS API. It can remove stuff from the file system.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738394">141</a> by jay
		posted on 8/27/2013 at 7:03 PM
		</div>
		<div class="comment_text"><p>hi,<br> am using phone gap to download lots of files and it keeps telling me some files failed to download with time out error, thats on ios. is there a way i can increase the timeout cus it seems to time out after 60 secs. or any fix i can do</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738395">142</a> by Raymond Camden
		posted on 8/27/2013 at 7:07 PM
		</div>
		<div class="comment_text"><p>So to be clear, you are getting random errors? Or is it normally on larger files?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738398">143</a> by jay
		posted on 8/27/2013 at 7:19 PM
		</div>
		<div class="comment_text"><p>its same error on large files</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738397">144</a> by jay
		posted on 8/27/2013 at 7:24 PM
		</div>
		<div class="comment_text"><p>this is the issue on <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F18386271%2Fios-phonegap-app-fails-to-download-remote-images-video-via-rest-api-after-60se%3AWF1B3apzaCELXfeCMDfpJ42lLgg&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/18386271/ios-phonegap-app-fails-to-download-remote-images-video-via-rest-api-after-60se">http://stackoverflow.com/qu...</a></p><p>am the developer working on it</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738401">145</a> by Greg Hudy
		posted on 8/27/2013 at 7:48 PM
		</div>
		<div class="comment_text"><p>I posted a comment on the SO link.  I have a slightly different approach that does work for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738400">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738400">146</a> by jack
		posted on 8/27/2013 at 7:49 PM
		</div>
		<div class="comment_text"><p>i also have this error, not sure if its ios or phone gap, times out after 60sec, wish someone could tell me how to solve this!!!!!</p><p>FileTransferError {<br>    body = "";<br>    code = 3;<br>    "http_status" = 0;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738402">147</a> by jay
		posted on 8/27/2013 at 8:10 PM
		</div>
		<div class="comment_text"><p>greg i read you comment, for me am getting a list of files from an ajax post then i loop through to get each image and call <a href="http://disq.us/url?url=http%3A%2F%2Ffiletranfer.download%3AEATd1HgqU19-RylDYUqBq5_Km0w&amp;cuid=3321886" rel="nofollow noopener" title="filetranfer.download">filetranfer.download</a>, but some of the files time out same kind of error like jack has, i output the error and i get some files timed out with code 3 error http_status = 0. but if i use a lan network no a wifi it works nice only fails on ios and wifi connection always times out after 60 secs of starting the download.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738403">148</a> by Greg Hudy
		posted on 8/27/2013 at 8:18 PM
		</div>
		<div class="comment_text"><p>Does it give you the error after 60 sec of a single <a href="http://disq.us/url?url=http%3A%2F%2Ffiletransfer.download%3AxP7mcVebtsHMI3UVNuI532YDYq8&amp;cuid=3321886" rel="nofollow noopener" title="filetransfer.download">filetransfer.download</a> or after 60 sec of total downloading time?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738406">149</a> by jay
		posted on 8/27/2013 at 8:28 PM
		</div>
		<div class="comment_text"><p>60 sec of total download, even if i use a single file and it  takes more then 60 secs it times out,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738404">150</a> by Greg
		posted on 8/27/2013 at 9:35 PM
		</div>
		<div class="comment_text"><p>Are you doing the downloading synchronously or async?  I have it working synchronously.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738407">151</a> by Anneleen
		posted on 9/9/2013 at 7:00 PM
		</div>
		<div class="comment_text"><p>Is there a way to let the system download the files everytime there's internet connection?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738405">152</a> by Raymond Camden
		posted on 9/9/2013 at 7:27 PM
		</div>
		<div class="comment_text"><p>@Anneleen: In theory, it is just as simple as removing the logic that only gets "new" files. Is that what you meant?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738409">153</a> by Anneleen
		posted on 9/9/2013 at 7:33 PM
		</div>
		<div class="comment_text"><p>Oh, thanks for the tip, I finally got it working! ^^</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738408">154</a> by Ujjwal Das
		posted on 10/16/2013 at 9:47 AM
		</div>
		<div class="comment_text"><p>I am getting the following error while downloading image</p><p>javax.net.ssl.SSLHandshakeException: java.security.cert.CertPathValidatorException: Trust anchor for certification path not found.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738410">155</a> by Raymond Camden
		posted on 10/17/2013 at 1:40 AM
		</div>
		<div class="comment_text"><p>Are you talking to a server using HTTPS?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738411">156</a> by Ujjwal Das
		posted on 10/17/2013 at 10:32 AM
		</div>
		<div class="comment_text"><p>Yes...I am making an ajax request to a self signed (https) server which got some certification error...Whenever I try to download from some other http/https server then its allow same with the similar code...</p><p>Since I am new to phone gap and eclipse, I am not able to handle such kind of exception..</p><p>My logcat is loaded with more error message but just providing you an selected Error message :</p><p>Caused by: java.security.cert.CertPathValidatorException: Trust anchor for certification path not found<br>xnet.provider.jsse.OpenSSLSocketImpl.verifyCertificateChain(<a href="http://disq.us/url?url=http%3A%2F%2FOpenSSLSocketImpl.java%3AHhtDPqV_bK3UxXZkzKJsZg1M9Aw&amp;cuid=3321886" rel="nofollow noopener" title="OpenSSLSocketImpl.java">OpenSSLSocketImpl.java</a>:664)</p><p>I have used your above code for reference but still made no luck :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738412">157</a> by Raymond Camden
		posted on 10/17/2013 at 3:17 PM
		</div>
		<div class="comment_text"><p>There is an option to trust all hosts (self signed certs included). See the docs: <a href="http://disq.us/url?url=http%3A%2F%2Fcordova.apache.org%2Fdocs%2Fen%2F3.1.0%2Fcordova_file_file.md.html%23FileTransfer%3ANJpiPaJDMARRV2ZvT1qmxTELkFU&amp;cuid=3321886" rel="nofollow noopener" title="http://cordova.apache.org/docs/en/3.1.0/cordova_file_file.md.html#FileTransfer">http://cordova.apache.org/d...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738415">158</a> by dmen
		posted on 10/25/2013 at 7:48 PM
		</div>
		<div class="comment_text"><p>I saw someone mention they were getting error 12 on getDirectory - and the error states the folder already exists. I'm getting this same error... <br>This isn't making sense to me - isn't getDirectory supposed to return the folder - even when the create flag is on? So that if the folder exists it's not created otherwise it is... If getDirectory() returns an error how to get the directory? <br>Also, looking in File explorer, I don't see the folder I am trying to create. I am using:<br>fileSystem.root.getDirectory("Android/data/<a href="http://disq.us/url?url=http%3A%2F%2Fcom.gmrmarketing.healthy.recipes%2Fimages%3ArTLDGLAdiW-zX26YD1JA1nWRRUM&amp;cuid=3321886" rel="nofollow noopener" title="com.gmrmarketing.healthy.recipes/images">com.gmrmarketing.healthy.re...</a>", {create:true}, gotDir, gotError);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738413">159</a> by dmen
		posted on 10/26/2013 at 12:12 AM
		</div>
		<div class="comment_text"><p>Little more on this - if I set create:true then I get error 12. If I set create:false I get error 1. I'm not sure what error 1 is, but have been at this for a while and would really like to be able to get a directory object.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738417">160</a> by Raymond Camden
		posted on 10/26/2013 at 5:01 PM
		</div>
		<div class="comment_text"><p>Try the second option attribute, exclusive, and set it to false.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcordova.apache.org%2Fdocs%2Fen%2F3.1.0%2Fcordova_file_file.md.html%23Flags%3AlHiUJ7HDzF1sBmM0W1OssA8HolU&amp;cuid=3321886" rel="nofollow noopener" title="http://cordova.apache.org/docs/en/3.1.0/cordova_file_file.md.html#Flags">http://cordova.apache.org/d...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738421">161</a> by dmen
		posted on 10/26/2013 at 7:12 PM
		</div>
		<div class="comment_text"><p>Thanks much for replying. Adding the flag doesn't seem to matter - with create:false I just get error: 1 as before and 12 with create true. This is quite frustrating, as I've got an approaching deadline and this seeming simple thing is taking way too long. Is there any device restrictions for this? The phone I'm testing on is an older LG Optimus V with Android 2.2.2 on it..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738420">162</a> by Ujjwal Das
		posted on 10/28/2013 at 8:47 AM
		</div>
		<div class="comment_text"><p>Finally I resolved my SSL certificate error by inserting a few line of code which actually work for me...</p><p>public class MainActivity extends DroidGap {			<br>    @Override<br>    public void onCreate(Bundle savedInstanceState) {<br>        super.onCreate(savedInstanceState);     <br>        super.setIntegerProperty("loadUrlTimeoutValue", 15000);<br>        super.setStringProperty("loadingDialog", "loading your app...");                                  <br>        super.loadUrl("file:///android_asset/www/index.html");<br>        //Call the fuction<br>        trustEveryone();			<br>    }</p><p>public void trustEveryone() {<br>    	try {<br>    		HttpsURLConnection.setDefaultHostnameVerifier(new HostnameVerifier(){<br>        			public boolean verify(String hostname, SSLSession session) {<br>        				return true;<br>        			}});<br>    		SSLContext context = SSLContext.getInstance("TLS");<br>    		context.init(null, new X509TrustManager[]{new X509TrustManager(){<br>    			public void checkClientTrusted(X509Certificate[] chain,<br>    					String authType) throws CertificateException {}<br>    			public void checkServerTrusted(X509Certificate[] chain,<br>    					String authType) throws CertificateException {}<br>    			public X509Certificate[] getAcceptedIssuers() {<br>    				return new X509Certificate[0];<br>    			}}}, new SecureRandom());<br>    		HttpsURLConnection.setDefaultSSLSocketFactory(<br>    				context.getSocketFactory());<br>    	} catch (Exception e) { // should never happen<br>    		e.printStackTrace();<br>    	}<br>    }   <br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738419">163</a> by dmen
		posted on 10/28/2013 at 2:44 PM
		</div>
		<div class="comment_text"><p>Doesn't seem to be a Android version issue. I tried the same code on one of the emulators at <a href="http://disq.us/url?url=http%3A%2F%2Fmanymo.com%3A4l_vXf0J2piAPxPljZ0i-3UCXGo&amp;cuid=3321886" rel="nofollow noopener" title="manymo.com">manymo.com</a> and got the same error:1</p><p>Is there anywhere that describes how to get a folder within your installed application folder?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738423">164</a> by Raymond Camden
		posted on 10/28/2013 at 2:54 PM
		</div>
		<div class="comment_text"><p>dmen - best I can suggest for now is - use what you are supposed to (create true and exclusive false) and if you still get 12, log a bug report. It should be working and if you can create a reproduceable case, you can then file a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738422">165</a> by Raymond Camden
		posted on 10/28/2013 at 3:00 PM
		</div>
		<div class="comment_text"><p>Btw - something else to consider. Your path is this:</p><p>"Android/data/<a href="http://disq.us/url?url=http%3A%2F%2Fcom.gmrmarketing.healthy.recipes%2Fimages%3ArTLDGLAdiW-zX26YD1JA1nWRRUM&amp;cuid=3321886" rel="nofollow noopener" title="com.gmrmarketing.healthy.recipes/images">com.gmrmarketing.healthy.re...</a>"</p><p>First - I think you need a / in front, don't you?<br>Second... and actually I change my mind - I don't think this is an issue - but I'll mention it anyway. You can't create N level deep stuff. Ie, "foo/moo" where both foo and moo don't exist. Last time I checked, if you needed to make 2 levels of folders deep, you had to make foo, then moo.</p><p>But I don't think that one is your issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738427">166</a> by dmen
		posted on 10/28/2013 at 7:19 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, thanks so much for helping me on this. I've managed to finally get it working, though I'm still not entirely sure why.</p><p>I moved the call to window.requestFileSystem into the deviceReady callback and it's working now. Originally, I had that call within another function that returned some xml. Not sure why it preferes to be in deviceReady but it's working - and I am using create:true, exclusive:false</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738425">167</a> by Raymond Camden
		posted on 10/28/2013 at 7:56 PM
		</div>
		<div class="comment_text"><p>"I moved the call to window.requestFileSystem into the deviceReady callback and it's working now. "</p><p>Woah... dude... seriously.... you know *all* PG stuff should be done after deviceReady, right? I assumed it was so well known that I never would have imagined you doing so without it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738424">168</a> by dmen
		posted on 10/28/2013 at 9:24 PM
		</div>
		<div class="comment_text"><p>I didn't mean to say it wasn't after deviceReady - it was. I got deviceReady and then I looked for an update xml file... if that file exists I then went ahead and do the requestFileSystem. That's what I was doing... which still seems it would work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738426">169</a> by mayank
		posted on 12/1/2013 at 1:37 AM
		</div>
		<div class="comment_text"><p>this is my code<br>		&lt;script type="text/javascript"&gt;<br>        function onBodyLoad(){<br>        	document.addEventListener("deviceready", onDeviceReady, false);<br>        }<br>function onDeviceReady() {<br>        alert("device is ready");<br>       window.requestFileSystem  = window.requestFileSystem || window.webkitRequestFileSystem;<br>        window.requestFileSystem(LocalFileSystem.PERSISTENT, 0, gotFS, fail);<br>		downloadImage('<a href="http://disq.us/url?url=http%3A%2F%2Fupload.wikimedia.org%2Fwikipedia%2Fcommons%2Fthumb%2Ff%2Ff9%2FWiktionary_small.svg%2F350px-Wiktionary_small.svg.png%27%2C%27350px-Wiktionary_small.svg.png%27%29%3B%3AblLTy1D51TQ6GNXGsJCHyrGyErI&amp;cuid=3321886" rel="nofollow noopener" title="http://upload.wikimedia.org/wikipedia/commons/thumb/f/f9/Wiktionary_small.svg/350px-Wiktionary_small.svg.png','350px-Wiktionary_small.svg.png');">http://upload.wikimedia.org...</a><br>    }</p><p>    function fail() {<br>        alert("failed to get filesystem");<br>    }</p><p>    function gotFS(fileSystem) {<br>        alert("got filesystem");</p><p>            // save the file system for later access<br>        alert(fileSystem.root.fullPath);<br>        window.rootFS = fileSystem.root;<br>    }</p><p>    function downloadImage(url, fileName){<br>        var ft = new FileTransfer();<br>		alert(window.rootFS.fullPath + "/DCIM/Camera/" + fileName);<br>        <a href="http://disq.us/url?url=http%3A%2F%2Fft.download%3AiTvONHhcc5g-jwmKh58YqHy8rR4&amp;cuid=3321886" rel="nofollow noopener" title="ft.download">ft.download</a>(<br>            url,<br>         //   window.rootFS.fullPath + "/DCIM/Camera/" + fileName,<br>		   "/sdcard/DCIM/Camera/" + fileName,<br>            function(entry) {<br>                alert("download complete: " + entry.fullPath);</p><p>            },<br>            function(error) {<br>                alert("download error" + error.code);<br>            }<br>        );<br>    }</p><p> &lt;/script&gt;</p><p>this code shows the message downloaded and file paht, but i can't find file in phone storage or sd card.</p><p>can you help me on this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738428">170</a> by Raymond Camden
		posted on 12/1/2013 at 6:48 PM
		</div>
		<div class="comment_text"><p>Not sure what to say. If you get a successful file down load and even see the path, then it should be there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738431">171</a> by mayank sood
		posted on 12/1/2013 at 7:02 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>The issue was , file was not showing in the folder, while the app was running and phone was attached with USB, when i reconnected with usb file appears in the folder..</p><p>one more question</p><p>for android i am using like</p><p>	<a href="http://disq.us/url?url=http%3A%2F%2Fft.download%3AiTvONHhcc5g-jwmKh58YqHy8rR4&amp;cuid=3321886" rel="nofollow noopener" title="ft.download">ft.download</a>(<br>            	url, // mp3 path live<br>         			"/sdcard/DCIM/Camera/" + fileName,  // phone storage folder path</p><p>will same path work for IOS? i am running on android and its working.. not sure about iphone for the path.</p><p>Thanks,</p><p>Mayank.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738433">172</a> by Raymond Camden
		posted on 12/2/2013 at 12:40 AM
		</div>
		<div class="comment_text"><p>I can never remember paths for iOS. Dumb question - but did you try it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738430">173</a> by sabarish
		posted on 12/20/2013 at 3:41 PM
		</div>
		<div class="comment_text"><p>hi,<br>i need to do download a file and save it on the local memory i have used your code but it calls only init method.<br>please help how to fix this</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738429">174</a> by Raymond Camden
		posted on 12/20/2013 at 5:49 PM
		</div>
		<div class="comment_text"><p>Sabarish, if you are the same person who emailed me, I'll reply there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738432">175</a> by Dina Salah
		posted on 7/10/2014 at 1:19 PM
		</div>
		<div class="comment_text"><p>Hello,<br>I got error in this line :<br>    $.get("<a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2012%2Fjan%2F17%2Fimagelister.cfc%3Fmethod%3Dlistimages%3AXrUa-7kcQThFE6G4rN7K3Wlo9_E&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2012/jan/17/imagelister.cfc?method=listimages">http://www.raymondcamden.co...</a>", {}, function(res) {</p><p>error msg: undefined $</p><p>I removed it then I got undefined "get"<br>who can I solve that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738434">176</a> by Raymond Camden
		posted on 7/10/2014 at 2:32 PM
		</div>
		<div class="comment_text"><p>If $ is undefined it means jQuery didn't load. Double check your script tag for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738435">177</a> by dina salah
		posted on 7/12/2014 at 12:03 AM
		</div>
		<div class="comment_text"><p>yes I fixed it, but I got this error :       <br>FileTransfer is not defined               <br>this error in this line: var ft = new FileTransfer();<br>Do you have any idea?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738436">178</a> by Raymond Camden
		posted on 7/12/2014 at 12:55 AM
		</div>
		<div class="comment_text"><p>You need to add the FileTransfer plugin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738437">179</a> by dina salah
		posted on 7/13/2014 at 2:01 AM
		</div>
		<div class="comment_text"><p>Yes, you are right,  but the Error I got now:</p><p>07-12 23:56:40.180: E/(398): unsupported multiclient unsolicited response code 1009<br>07-12 23:56:41.870: E/FileTransfer(13259): {"target":"\/\/Android\/data\/com.camden.imagedownloaddemo\/cfguy.png","http_status":200,"code":1,"source":"http:\/\/<a href="http://disq.us/url?url=http%3A%2F%2Fimages.wisegeek.com%3A3kGnHw8fwkKiEoQOeH35HpuTNGM&amp;cuid=3321886" rel="nofollow noopener" title="images.wisegeek.com">images.wisegeek.com</a>\/young-calico-cat.jpg","exception":"\/Android\/data\/com.camden.imagedownloaddemo\/cfguy.png: open failed: ENOENT (No such file or directory)"}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738439">180</a> by Raymond Camden
		posted on 7/13/2014 at 7:36 PM
		</div>
		<div class="comment_text"><p>Can you share what line this error is thrown on?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738440">181</a> by dina salah
		posted on 7/13/2014 at 8:30 PM
		</div>
		<div class="comment_text"><p>AI think this is the line:<br><a href="http://disq.us/url?url=http%3A%2F%2Fft.download%3AiTvONHhcc5g-jwmKh58YqHy8rR4&amp;cuid=3321886" rel="nofollow noopener" title="ft.download">ft.download</a>("<a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2012%2Fjan%2F17%2F%3A3TkudBjahQ9WIlJ_o86n207DHxQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2012/jan/17/">http://www.raymondcamden.co...</a>" + escape(res[i]), dlPath, function(){</p><p>in the target directory</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738442">182</a> by Raymond Camden
		posted on 7/14/2014 at 3:08 AM
		</div>
		<div class="comment_text"><p>Not sure. The error message above mentions a different URL. Um, I'd have to dig into your app myself to help more. Sorry, I can't do that right now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738444">183</a> by Akashdeep Sharma
		posted on 7/15/2014 at 12:20 PM
		</div>
		<div class="comment_text"><p>Hii, i tried your code but it's only calling the init method and not the other. Please help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738446">184</a> by Scott J. Pearson
		posted on 7/15/2014 at 5:26 PM
		</div>
		<div class="comment_text"><p>Is there any way to download files via a POST request? I.e., specify the URL and certain parameters to pick the file, and then go down the usual download pathway. Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738447">185</a> by Raymond Camden
		posted on 7/15/2014 at 7:26 PM
		</div>
		<div class="comment_text"><p>@Akashdeep: If onDeviceReady is not firing, ensure you are using cordova.js (or phonegap.js) in your HTML. Also - do remote debugging to see if you have some other error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738449">186</a> by Raymond Camden
		posted on 7/15/2014 at 7:29 PM
		</div>
		<div class="comment_text"><p>@Scott: From what I see of the docs it does NOT look possible. In theory you could do a POST with XHR and save the bits using the FIleSystem API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738445">187</a> by Scott J. Pearson
		posted on 7/15/2014 at 7:32 PM
		</div>
		<div class="comment_text"><p>The problem is that they are too large to store in memory (50 MB) as an AJAX call would require. I was hoping to try this to see if this provided a buffered approach.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738450">188</a> by Raymond Camden
		posted on 7/15/2014 at 7:36 PM
		</div>
		<div class="comment_text"><p>I just checked the code (well the Java code) and it is definitely set to GET w/ no way around it. Best I can suggest is filing an issue for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738452">189</a> by Akashdeep Sharma
		posted on 7/16/2014 at 12:34 PM
		</div>
		<div class="comment_text"><p>Hii i was calling the script twice that was creating the error. It's running now bt the image are not getting replace by the new one.. any idea on that. I tried your URL it download the images but didnt replace them plus they are not getting shown in the img src</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738453">190</a> by Raymond Camden
		posted on 7/16/2014 at 7:11 PM
		</div>
		<div class="comment_text"><p>@Akashdeep: I'd check with remote debugging to see if you can figure it out. I really can't tell from here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738454">191</a> by Akashdeep Sharma
		posted on 7/17/2014 at 9:06 AM
		</div>
		<div class="comment_text"><p>@raymond thank you for responding to the query. Just one last doubt. When i am downloading the pic i get the ERROR like {"code":1, "Source": source url; "target": target url, http status :null, body:null}. I want to know if you have used any other extra plugins. Because the folder are getting created but the file not getting  replace. And do we need file in folder before we download. Please help in this. Thank you i advance. If you time we can talk via skype that would be a real help full</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738455">192</a> by Rolando Valcárcel
		posted on 7/18/2014 at 12:40 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, nice tutorial , it's been really helpfull for me, but I'm having the same problem that Akashdeep.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738515">193</a> by Rolando Valcárcel
		posted on 7/18/2014 at 2:47 AM
		</div>
		<div class="comment_text"><p>@Akashdeep I've fixed it with a couple of changes to the code here's a Pastebin of the code:<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Fhc6XpHgz%3AAkCuGUCRl3d2Bbwa88__Txqunk8&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/hc6XpHgz">http://pastebin.com/hc6XpHgz</a> , hope it helps you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738516">194</a> by Akashdeep Sharma
		posted on 7/18/2014 at 5:36 PM
		</div>
		<div class="comment_text"><p>@Rolando i was able solve the problem in an other way. I googled a lot and found that the code written by the Raymond is for rooted device and for the device that are not rooted can't used the path define in the code. I will soon paste the code wid some edits. Thank you @rolando :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738519">195</a> by Raymond Camden
		posted on 7/20/2014 at 6:56 AM
		</div>
		<div class="comment_text"><p>Glad you guys got it - was out of town.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738520">196</a> by Irshad kk
		posted on 8/20/2014 at 10:02 AM
		</div>
		<div class="comment_text"><p>Hi Ray..<br>Where i can find the code for above to download.<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738531">197</a> by Raymond Camden
		posted on 8/20/2014 at 3:04 PM
		</div>
		<div class="comment_text"><p>There isn't a separate download. All of the important code is in the blog entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738529">198</a> by cyrielo
		posted on 9/10/2014 at 12:29 PM
		</div>
		<div class="comment_text"><p>Hello is this thread still active! i need help with my file download script it  is throwing a java FileNotFound exception the code is -&gt; <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FfPZTB2i2%3Acm2HDnIgrVEaAOQbMkG40tnbjp4&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/fPZTB2i2">http://pastebin.com/fPZTB2i2</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738517">199</a> by Chris Nalla
		posted on 10/24/2014 at 6:12 PM
		</div>
		<div class="comment_text"><p>Hello Ray,</p><p>Is it possible to do a file transfer it via USB? Nonetwork or any other form. Just connecting the phone (iOS/Android) and copy files from PC -&gt; Mobile and Mobile -&gt; PC</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738518">200</a> by Raymond Camden
		posted on 10/25/2014 at 1:29 AM
		</div>
		<div class="comment_text"><p>Hmm - I don't know honestly. I'd imagine there are some pretty strict security concerns there - you don't want a random app just getting full access to your file system.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2868742260">
	<div>
		<img src="https://disqus.com/api/users/avatars/samaludheenps.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2868742260">201</a> by Samaludheen P.S
		posted on 8/31/2016 at 11:49 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I recieve the image as Binary String. How can I store this in sqlite, the images are about 5 mb size.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2868855717">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2868855717">202</a> (In reply to <a href="#c_2868742260">#201</a>) by Raymond Camden
		posted on 8/31/2016 at 1:01 PM
		</div>
		<div class="comment_text"><p>Don't. You can, if you convert to Base64, but use the file system for images.</p></div>
	</div>
</div>
		