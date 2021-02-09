
<div class="comment" id="c_1713676706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676706">1</a> by todd sharp
		posted on 1/30/2008 at 9:43 PM
		</div>
		<div class="comment_text"><p>This brings up an interesting question - one that you may or may not know the answer to.</p><p>If you had used the directory returned by getTempDirectory() does CF have any built in purging mechanism for that directory or would you have had the same issue.</p><p>Same question applies to the built in directories that CF uses when you use cfimage with writeToBrowser or create a cfpresentation.  Does CF purge these dirs for us?  How often?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676717">2</a> by Shannon Hicks
		posted on 1/30/2008 at 11:08 PM
		</div>
		<div class="comment_text"><p>Personally, I use IPCheck Server Monitor. It watches what I tell it to (which can include disk space, memory/cpu usage, and check a URL, among *many* other things), and will email me for alerts and escalations. I have the basic alert go to my email, and the escalation go to my cell phone. They even let you provide a backup SMTP server, which is handy for monitoring your primary SMTP server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676716">3</a> by Jason Delmore
		posted on 1/30/2008 at 11:33 PM
		</div>
		<div class="comment_text"><p>ColdFusion uses the temp directory for some of its internal features and cleans those things up afterwards, but if your application is creating a file CF will not clean it up.  In the case of writeToBrowser(), if you kept the image as a variable and then used writeToBrowser, it should never be written to disk so that's not a concern.  If disk space is a concern, it's pretty easy to add a scheduled task that calls a template to clean up older files in the temp directory.</p><p>Ray, stop writing so much garbage to the temp directory!</p><p>:)<br>Jason</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676718">4</a> by Joshua
		posted on 1/30/2008 at 11:39 PM
		</div>
		<div class="comment_text"><p>I havent done this myself (yet)... but couldnt you have a monthly schedule that runs a CFC late at night to purge the temp folder?  I havent actually used the cfschedule tag, but I have it on my list of things to do in the near future.  Curious if that tag would do the job?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676720">5</a> by todd sharp
		posted on 1/30/2008 at 11:40 PM
		</div>
		<div class="comment_text"><p>Jason:</p><p>Maybe I'm confused - but here goes.</p><p>I run the following code:</p><p>&lt;cfset one = imageNew("", 100, 100, "rgb", "red") /&gt;<br>&lt;cfimage action="writeToBrowser" source="#one#" /&gt;<br>&lt;br /&gt;<br>&lt;cfimage action="writeToBrowser" source="#imageNew("", 100, 100, "rgb", "blue")#"&gt;<br>&lt;br /&gt;</p><p>View Source:</p><p>&lt;img src="/CFFileServlet/_cf_image/_cfimg-4082091803274275737.PNG" alt="" /&gt;</p><p>&lt;br /&gt;<br>&lt;img src="/CFFileServlet/_cf_image/_cfimg9186042415912217047.PNG" alt="" /&gt;</p><p>&lt;br /&gt;</p><p>I check in /CFFileServlet/_cf_image/ and see both files on disk.</p><p>What am I missing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676707">6</a> by Joshua
		posted on 1/30/2008 at 11:40 PM
		</div>
		<div class="comment_text"><p>oops, looks like someone already said this :) my mistake</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676708">7</a> by todd sharp
		posted on 1/30/2008 at 11:41 PM
		</div>
		<div class="comment_text"><p>To be more specific - I check in C:\ColdFusion8\tmpCache\CFFileServlet\_cf_image</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676709">8</a> by todd sharp
		posted on 1/30/2008 at 11:46 PM
		</div>
		<div class="comment_text"><p>And 4 minutes later they've magically disappeared....</p><p>Question remains though - what did I do wrong/misunderstand?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676711">9</a> by Jason Delmore
		posted on 1/31/2008 at 12:37 AM
		</div>
		<div class="comment_text"><p>Ah yes, I remember this all too well now.  WriteToBrowser needs to write a file because the web browser IMG tag does a separate request for the file.  We did do some cool stuff with base64 encoding the image and streaming to the browser early on, but had to ditch that because Internet Explorer doesn't have base64 encoded image support.  So yep, the CF File Servlet will write the file out long enough to serve it to the browser and then will clean it up afterwards.  Note that creating the image doesn't write to the file system, the image is in memory until you writeToBrowser.</p><p>Jason</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676712">10</a> by Tony Petruzzi
		posted on 1/31/2008 at 12:44 AM
		</div>
		<div class="comment_text"><p>Personally I just log into my server once a month and run ccleaner against it.</p><p>I know some people will be saying that I should make it an automatic job, and I agree to the most part, but he is why I do it manually.</p><p>Every month it forces me to log in and look things over and do house keeping. I mean, how often do you actually log into your server except when things break. I normally do the ccleaner, the windows updates and also run defraggler against it to clean up the disk. While I'm there I also check the event viewer to see if there are any warnings (you would be surprised how many times I've looked in EV and saw a warning about a disk going bad) or errors that need my attention. This also give me a good chance to check  out the utilization of the server to see if everything is kewl and perform some security audits. All and all it takes about an hour our of my time.</p><p>Yeah there are tools and software out there that would do a lot of this stuff for you, but let's face it, that stuff is designed to tell when things break, what I'm doing is prevention.</p></div>
	</div>
</div>
		