
<div class="comment" id="c_1713736182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736182">1</a> by Mark Drew
		posted on 11/3/2011 at 3:58 PM
		</div>
		<div class="comment_text"><p>I looked into this a while back, and the other way its to save the image binary that you get back from the camera into a text field and submit that to the server, some toBase64 functions later, and you are done. although I do like the fileUpload functionality!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736183">2</a> by Raymond Camden
		posted on 11/3/2011 at 4:56 PM
		</div>
		<div class="comment_text"><p>The issue with the Base64 string though is that it can be huge. I've seen PG apps crawl to a halt when using Base64. You can ask for lower quality/size pictures of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736184">3</a> by Jonas Hexadecimal
		posted on 1/3/2012 at 8:52 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Get rid of the beard. Really.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736186">4</a> by Raymond Camden
		posted on 1/3/2012 at 8:53 PM
		</div>
		<div class="comment_text"><p>Eh? You mean in the one above? That's an old picture. The one you see here in comments is more recent. And my wife likes it. She trumps all comments. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736185">5</a> by Martin
		posted on 2/24/2012 at 3:12 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Have you experience multiple file upload? want to upload video,audio,image in one request..http multipart...or any other alternatives?</p><p>thx</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736188">6</a> by Raymond Camden
		posted on 2/24/2012 at 4:27 PM
		</div>
		<div class="comment_text"><p>As far as I know, you can't do it using this API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736187">7</a> by Martin
		posted on 2/24/2012 at 4:33 PM
		</div>
		<div class="comment_text"><p>hi Ray,</p><p>ok..thought that..mhhh...what are the alternatives..REST ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736191">8</a> by Raymond Camden
		posted on 2/24/2012 at 4:38 PM
		</div>
		<div class="comment_text"><p>I'd do it in N async calls. Using jQuery Deferreds, it should be a bit easier to manage.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736192">9</a> by Martin
		posted on 2/24/2012 at 10:11 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>thx for the hint with deferred, - this means using ft.upload in combination with deferred?! I was also thinking about kind of pack all files together and POST it in one request ;) ?! any creative ideas ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736193">10</a> by Raymond Camden
		posted on 2/24/2012 at 10:14 PM
		</div>
		<div class="comment_text"><p>In theory, stress, in theory, you could make a zip using JavaScript and then post that.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fgildas-lormeau.github.com%2Fzip.js%2F%3AZZ0DMimd2T2hbNstABmfjoAi198&amp;cuid=3321886" rel="nofollow noopener" title="http://gildas-lormeau.github.com/zip.js/">http://gildas-lormeau.githu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736190">11</a> by Martin
		posted on 2/24/2012 at 10:29 PM
		</div>
		<div class="comment_text"><p>ok thx.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736197">12</a> by Steven Benjamin
		posted on 6/12/2012 at 4:05 AM
		</div>
		<div class="comment_text"><p>Thanks Ray, This post saved me enough time so I could run out and pick up a bottle of Blanche De Chambly!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736194">13</a> by Raymond Camden
		posted on 6/12/2012 at 4:11 AM
		</div>
		<div class="comment_text"><p>I keep thinking as I mature, I will eventually like wine. Still hasn't happened. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736195">14</a> by Joe Velez
		posted on 10/21/2012 at 12:26 AM
		</div>
		<div class="comment_text"><p>Ray - I have used your site for a plethora of coding solutions. Thanks! ...Anyway, I am using PhoneGap 2.1 and have my emulator posting to a .cfm file but I get an http_status 500 error -- yet, when I change it to a .php script (heaven forbid I use php) it works fine. My CFM and PHP files are both blank! So why would CFM not work, and PHP work? Actually, why does CFM return a 500 and how do I fix it? I'm running Apache 1.3 CF8 PHP5 -- Thanks in advance!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736196">15</a> by Raymond Camden
		posted on 10/21/2012 at 12:30 AM
		</div>
		<div class="comment_text"><p>Did you include the link that set chunkedmode?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736198">16</a> by Joe Velez
		posted on 10/21/2012 at 12:38 AM
		</div>
		<div class="comment_text"><p>Yes.</p><p>I'm using the 'full example' code provided by PhoneGap (the latest verion). I have been google-ing around the past few days and have tested a variety of settings including:</p><p>options.chunkedMode = false;</p><p>I even tried</p><p>ft.upload(imageURI, "[MY_CFM_URL]", win, fail, options, true);</p><p>I have edited my Config.xml and set</p><p>&lt;access origin="[MYURL]"/&gt;<br>&lt;access origin="*"/&gt;</p><p>I literally changed my 'uploadtest.cfm' to 'uploadtest.php' and by doing that I don't receive the http_status 500 FileNotFoundException error.</p><p>Yes, both files exist on my server, and I can access them in the emulator's browser just fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736199">17</a> by Raymond Camden
		posted on 10/21/2012 at 12:45 AM
		</div>
		<div class="comment_text"><p>You said 500 in your first comment, then 500 File Not Found in your second. A File Not Found error is 404. Are you sure it isn't that? What do the CF logs say? The logs probably have a more verbose error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736205">18</a> by Joe Velez
		posted on 10/21/2012 at 1:12 AM
		</div>
		<div class="comment_text"><p>err i meant the emulator logs showed http_status 500 along w/ the FileNotFoundException error ... anyway, I'm a dummy! Usually I can see the errors in the browser and didn't even think to look at the logs. When I did I saw an error on some line, and realized I had some underlying Application code going on for my site. Moved my script into it's own folder with an empty Application.cfm and voila, it works! Thanks for the slap in the face to remind me to actually look at the logs - that's why they're there. Thanks for taking the time to help me out. I'll get you back</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736203">19</a> by Raymond Camden
		posted on 10/21/2012 at 5:44 AM
		</div>
		<div class="comment_text"><p>Just glad ya got it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736202">20</a> by EC List
		posted on 12/8/2012 at 12:46 AM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>Thank you for all of your phonegap posts. You've been a huge help to me.  I have a (possibly stupid) question about the file upload example.  Since you aren't using a CFFUNCTION to process the file when it is uploaded, how would I send back a confirmation to my server that the file upload when alright?  I am kind of new to this kind of development, so I am sorry if the answer is obvious.</p><p>Thank you again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736204">21</a> by Raymond Camden
		posted on 12/8/2012 at 12:56 AM
		</div>
		<div class="comment_text"><p>I did send a response. Consider this part:</p><p> &lt;cfoutput&gt;http://192.168.1.105/#getFileFromPath(newName)#&lt;/cfoutput&gt;</p><p>That response is returned to the PhoneGap app and used here:</p><p>x$("#resultpic").attr("src", r.response);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736207">22</a> by EC List
		posted on 12/8/2012 at 12:59 AM
		</div>
		<div class="comment_text"><p>Doh! Ok. Got it.  Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736206">23</a> by Johann
		posted on 2/10/2013 at 3:06 PM
		</div>
		<div class="comment_text"><p>Ray, you are such an inspiration..your work is priceless and im so glad i can talk to you through this blog</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736208">24</a> by Raymond Camden
		posted on 2/10/2013 at 8:17 PM
		</div>
		<div class="comment_text"><p>Wow, thank you. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736209">25</a> by Terry Collinson
		posted on 3/9/2013 at 5:44 PM
		</div>
		<div class="comment_text"><p>Hi Ray, Do you know of any way I can resize the image before I upload. It only need to be 300 pixels wide and any height. I found this link <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F2303690%2Fresizing-an-image-in-an-html5-canvas%3AdBP7OLqn7dat5Swda69UO7Aqknc&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/2303690/resizing-an-image-in-an-html5-canvas">http://stackoverflow.com/qu...</a> and assume the naswer is buried in there somewhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736210">26</a> by Raymond Camden
		posted on 3/9/2013 at 7:23 PM
		</div>
		<div class="comment_text"><p>If this is a *new* picture, you can specify a targetWidth/Height before uploading. If this is an existing picture, then you would need to use what is described in the SO link. Is it not making sense to you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736211">27</a> by Terry Collinson
		posted on 3/10/2013 at 6:11 PM
		</div>
		<div class="comment_text"><p>Its an existing picture and no it does not quite make sense. There appears to be two methods discussed in the link - manipulating the file in base 64 format or using canvas. Neither of which I am that familiar with. Any chance of 'whipping up' a quick example? Thanks Terry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736214">28</a> by Raymond Camden
		posted on 3/10/2013 at 6:24 PM
		</div>
		<div class="comment_text"><p>Sure, but it may take a little while. I'm on the road this week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736212">29</a> by Terry Collinson
		posted on 3/11/2013 at 11:14 AM
		</div>
		<div class="comment_text"><p>I can wait - thanks a lot</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736215">30</a> by Raymond Camden
		posted on 6/4/2013 at 5:54 PM
		</div>
		<div class="comment_text"><p>Terry, sorry this has taken me so long. I still want to work an example that shows resizing an image, but I wanted to be sure you knew that if you are using a *new* image, do not forget that the PhoneGap Camera API lets you specify a target size.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736213">31</a> by Terry Collinson
		posted on 6/5/2013 at 12:24 PM
		</div>
		<div class="comment_text"><p>Hi Ray, Thanks yes I am using that. I have been routing around myself and this link seems to be the closest to a solution - <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FedACk56q%3Ae3uXNThIrFuyzqcr--ESc1WmIbw&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/edACk56q">http://pastebin.com/edACk56q</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736216">32</a> by Terry
		posted on 6/13/2013 at 7:12 PM
		</div>
		<div class="comment_text"><p>As my first attempt at building a phonegap app.  Where do I find the *.js files referenced in the code and what is the xui?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736217">33</a> by Raymond Camden
		posted on 6/13/2013 at 8:48 PM
		</div>
		<div class="comment_text"><p>1) JS FIles.</p><p>phonegap.js comes from the PhoneGap SDK you download. <br>main.js is the second code sample I believe.<br>xui.js comes from <a href="http://disq.us/url?url=http%3A%2F%2Fxuijs.com%2F%3A0KStJKOQpBfJcfJsqj2Kzt6W-_Q&amp;cuid=3321886" rel="nofollow noopener" title="http://xuijs.com/">http://xuijs.com/</a>. xui is a light-weight jQuery clone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736220">34</a> by Soniya
		posted on 1/24/2014 at 11:39 AM
		</div>
		<div class="comment_text"><p>Hi Sir,<br>I have another issue. i can easily upload photo and video on server. but now i want to upload audio file on server. i want just like photo upload user will select audio file from list and upload that on server.whatever i got from phonegap api and google , is first record audio and upload that, but i don't want to record, just select audio file from list and upload it.<br>It would be great help if you give any idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736219">35</a> by Raymond Camden
		posted on 1/24/2014 at 8:28 PM
		</div>
		<div class="comment_text"><p>Well, where does the list of audio files come from? If the file system, then you should look at the docs for the File System stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736223">36</a> by Soniya
		posted on 1/27/2014 at 2:37 PM
		</div>
		<div class="comment_text"><p>Yes the audio will come from file system.<br>But i want the same procedure just like photo and video , user will click on upload button then file system(play list ) will open ,user will select audio file from there and upload.<br>I am very confuse as photo and video uploading is very easy, can't this also be easy for audio.I don't have very much idea about file system apis.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736221">37</a> by Raymond Camden
		posted on 1/27/2014 at 10:47 PM
		</div>
		<div class="comment_text"><p>You can use the Capture API (<a href="http://disq.us/url?url=http%3A%2F%2Fdocs.phonegap.com%2Fen%2F3.3.0%2Fcordova_media_capture_capture.md.html%23Capture%29%3Af7FN8t8gZO-q19UTNApqNNvuoAU&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.phonegap.com/en/3.3.0/cordova_media_capture_capture.md.html#Capture)">http://docs.phonegap.com/en...</a> to capture new audio, but you want existing audio - and that has to come from a file. You can't get the same UI you get with camera as that just isn't an option.</p><p>I'd recommend spending some time reading the docs on the file system stuff. It isn't friendly per se, but you need to learn it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736222">38</a> by Soniya
		posted on 1/28/2014 at 11:34 AM
		</div>
		<div class="comment_text"><p>Thanks for you reply.. i know about the capture api and it works great. but my need is different like upload existing audio.i'll surely read the file system stuff.<br>If you get some time please have a look and give me  clue regarding this .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736224">39</a> by Raymond Camden
		posted on 1/28/2014 at 9:07 PM
		</div>
		<div class="comment_text"><p>I did give you a clue. :) Read up on the file system stuff. You need to at least be prepared to read a directory and display the results to screen, which if you check the docs, should be doable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2462473742">
	<div>
		<img src="https://disqus.com/api/users/avatars/paul_baylis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2462473742">40</a> by Paul Baylis
		posted on 1/17/2016 at 4:47 AM
		</div>
		<div class="comment_text"><p>I'm probably doing something heinous, but I can't get the "select picture" button to fire anything, not even an alert. I know all my js is loading properly and no js errors coming through Firebug when I test locally. Any idea? </p></div>
	</div>
</div>
		
<div class="comment" id="c_2464565050">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2464565050">41</a> (In reply to <a href="#c_2462473742">#40</a>) by Raymond Camden
		posted on 1/18/2016 at 2:38 PM
		</div>
		<div class="comment_text"><p>Use remote debugging to see if an error is being thrown.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3698841488">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_MzUvCoPb4N.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3698841488">42</a> by nvie
		posted on 1/9/2018 at 7:56 AM
		</div>
		<div class="comment_text"><p>Need to upload file with chunked data. Do i need to change in server side code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3699347808">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3699347808">43</a> (In reply to <a href="#c_3698841488">#42</a>) by Raymond Camden
		posted on 1/9/2018 at 3:59 PM
		</div>
		<div class="comment_text"><p>You would, yes.</p></div>
	</div>
</div>
		