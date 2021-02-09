
<div class="comment" id="c_1713740319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740319">1</a> by Raymond Camden
		posted on 4/4/2012 at 1:04 AM
		</div>
		<div class="comment_text"><p>Sorry for the lack of tabbing above folks. Not sure why. I used Sublime Text 2 for all of my work and I'm assuming something pasted wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740383">2</a> by Mikel
		posted on 4/4/2012 at 3:25 PM
		</div>
		<div class="comment_text"><p>Oh!  Very nice!  Thanks for this example!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740386">3</a> by Phillip Senn
		posted on 4/4/2012 at 6:56 PM
		</div>
		<div class="comment_text"><p>There's a lot to digest here, and I thank you as always for taking the time to blog.  One thing I noticed is that during development, it might be nice to drop the table in initDB before creating it.  Just in case you change the schema.  It's not as trivial as one would think because (I think) you have to wait for the callback before creating it again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740382">4</a> by Raymond Camden
		posted on 4/4/2012 at 6:57 PM
		</div>
		<div class="comment_text"><p>@Phillip: Dude... get this. I removed this line from my blog post:</p><p>    //tx.executeSql("drop table docs");</p><p>That's _exactly_ what I was doing during testing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740385">5</a> by Phillip Senn
		posted on 4/4/2012 at 7:01 PM
		</div>
		<div class="comment_text"><p>I use the following to test for whether their online or not:</p><p>if (navigator.onLine) {<br>	$('#myOnline').text('Your Internet status is: online.');<br>	setTimeout(Sync,3000); // Don't sync until they've paused for a few seconds.<br>} else {<br>	$('#myOnline').text('Your Internet status is: offline.');<br>}</p><p>window.addEventListener("offline", function(e) {<br>	$('#myOnline').text('Your new Internet status is: offline.');<br>}, false);</p><p>window.addEventListener("online", function(e) {<br>	$('#myOnline').text('Your new Internet status is: online.');<br>	Sync(); // This will start the sync the moment they walk back into Wi-Fi.<br>}, false);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740384">6</a> by Raymond Camden
		posted on 4/4/2012 at 7:04 PM
		</div>
		<div class="comment_text"><p>I tried navigator.onLine, but on my device, it reported me as online while in Airplane Mode.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740398">7</a> by Phillip Senn
		posted on 4/4/2012 at 9:35 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Ftv.adobe.com%2Fwatch%2Fadc-presents%2Fphonegap-file-api%2F%3ARzEmIiHojCW7WRbBvqe5ATvdKvs&amp;cuid=3321886" rel="nofollow noopener" title="http://tv.adobe.com/watch/adc-presents/phonegap-file-api/">http://tv.adobe.com/watch/a...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740388">8</a> by Terry Collinson
		posted on 4/15/2012 at 7:29 PM
		</div>
		<div class="comment_text"><p>Thanks very much Ray. Amazed not more questions on this great post. On first run the table creates fine but I don't have the last update date in my local storage. I know there hasn't been an update yet so do I have to create it manually to start things off? I am using Chrome on the desktop and can see other local storage with the JavaScript tool. I have replaced the server link providing the JSON</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740400">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740400">9</a> by Raymond Camden
		posted on 4/16/2012 at 12:23 AM
		</div>
		<div class="comment_text"><p>Hmm. So the client-side code should be making the request and passing an empty date string, which should make the server return everything. Can you add some debugging (simple writeLogs) to the CFC to see if it is doing that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740391">10</a> by Raymond Camden
		posted on 4/16/2012 at 12:24 AM
		</div>
		<div class="comment_text"><p>Oh - and this may not be obvious - but did you _write_ some docs using the server-side code first?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740397">11</a> by Terry Collinson
		posted on 4/18/2012 at 4:07 PM
		</div>
		<div class="comment_text"><p>All I have done is to change the url of the cfc to  <a href="http://disq.us/url?url=http%3A%2F%2Fwildlifehero.com%2Fapi%2FgetLatestEvents.cfc%3Fmethod%3Dlistsighting%26returnformat%3Djson%26sort%3Dname%26sortdir%3Dasc%3ACVN9mV25MTG-smmSS8nQJM072H4&amp;cuid=3321886" rel="nofollow noopener" title="http://wildlifehero.com/api/getLatestEvents.cfc?method=listsighting&amp;returnformat=json&amp;sort=name&amp;sortdir=asc">http://wildlifehero.com/api...</a>. I used your API example of a while back to create the JSON from an existing table. So I assume the date format is not an issue. I don't see any call to the cfc in the Chrome Network tab - not sure if I should. If you can confirm the JSON is ok I will add some looking as you suggested. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740387">12</a> by Raymond Camden
		posted on 4/18/2012 at 5:34 PM
		</div>
		<div class="comment_text"><p>When I run your URL I get a file not found error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740392">13</a> by Terry Collinson
		posted on 4/18/2012 at 7:14 PM
		</div>
		<div class="comment_text"><p>sorry I missed out the www in the post. It is in my code <a href="http://disq.us/url?url=http%3A%2F%2Fwww.wildlifehero.com%2Fapi%2FgetLatestEvents.cfc%3Fmethod%3Dlistsighting%26returnformat%3Djson%26sort%3Dname%26sortdir%3Dasc%3ABu7dlogtvu2aAJBnJVXCGtkmx2A&amp;cuid=3321886" rel="nofollow noopener" title="http://www.wildlifehero.com/api/getLatestEvents.cfc?method=listsighting&amp;returnformat=json&amp;sort=name&amp;sortdir=asc">http://www.wildlifehero.com...</a> Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740396">14</a> by Raymond Camden
		posted on 4/18/2012 at 7:57 PM
		</div>
		<div class="comment_text"><p>Terry, that looks right to me. At this point, I'd continue to debug. In my code, I have this:</p><p>   console.log("back from getting updates with "+resp.length + " items to process.");</p><p>Try quickly changing it to an alert, rerunning, and tell me if you see a msg? (console.log is nicer, but if you don't know how to see it - this is quicker for you)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740399">15</a> by stuart
		posted on 11/1/2012 at 11:47 AM
		</div>
		<div class="comment_text"><p>executeSql uses an anonymous callback function, the purpose of the callback being that it may take some time before the result is retrieved... so it's possible that displayDocs() is called before all entries are inserted?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740390">16</a> by Raymond Camden
		posted on 11/2/2012 at 12:55 AM
		</div>
		<div class="comment_text"><p>I believe you are right. I would most likely rewrite that logic to make use of jQuery deferreds such that you can say, "When you have done these N asynch ops, then do X", where X is displayDocs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740401">17</a> by Ah Wirayudha
		posted on 11/9/2012 at 11:23 AM
		</div>
		<div class="comment_text"><p>hai raimond... can i use xui to synch local db and server in phonegap???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740405">18</a> by Raymond Camden
		posted on 11/9/2012 at 5:58 PM
		</div>
		<div class="comment_text"><p>I assume you mean as a replacement for jQuery. If so, yes. I prefer Zepto myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740393">19</a> by Ah Wirayudha
		posted on 11/11/2012 at 2:09 PM
		</div>
		<div class="comment_text"><p>any good documentation or tutorial related to this topic??? i mean sync localdb with zepto..   btw.. thanks..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740389">20</a> by Raymond Camden
		posted on 11/11/2012 at 7:20 PM
		</div>
		<div class="comment_text"><p>I'm not sure I understand you. Zepto, like jQuery, is a library of utilities. Zepto is built to be very similar to jQuery. Take a look at the docs and you will see this. A separate demo would't make much sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740402">21</a> by Ah Wirayudha
		posted on 11/11/2012 at 9:20 PM
		</div>
		<div class="comment_text"><p>thank you so much... i'm sorry.. cause i'm newbie.. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740395">22</a> by neeraj Rathore
		posted on 1/8/2013 at 5:17 PM
		</div>
		<div class="comment_text"><p>i am connecting database using phone gap but it giving error can't access the variable</p><p>01-08 16:09:59.350: E/Web Console(326): ReferenceError: Can't find variable: AddValueToDB at file:///android_asset/www/b.html:205</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740394">23</a> by Raymond Camden
		posted on 1/9/2013 at 1:23 AM
		</div>
		<div class="comment_text"><p>I'd have to see your code. Is AddValueToDB something you wrote?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740403">24</a> by Chris
		posted on 1/10/2013 at 12:11 AM
		</div>
		<div class="comment_text"><p>Hello,</p><p>This is a very helpful article, but I didn't know if there was any easy way to change the server side coding to php? I currently have some php code and would love to integrate this with it. If not, what is the format of the JSON output and I can rebuild a php version? Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740404">25</a> by Raymond Camden
		posted on 1/10/2013 at 2:51 AM
		</div>
		<div class="comment_text"><p>The JSON can be seen by using the URL I used in the code:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2012%2Fapr%2F3%2Fserverbackend%2Fservice.cfc%3Fmethod%3Dgetupdates%26returnformat%3Djson%26date%3D%3ADrOmLugEvd4RTQUUErNfppIONNY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2012/apr/3/serverbackend/service.cfc?method=getupdates&amp;returnformat=json&amp;date=">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740410">26</a> by Chris
		posted on 1/10/2013 at 4:25 AM
		</div>
		<div class="comment_text"><p>Great, thank you. Is there a specific way to generate the token? Or is there a reason it is like this? Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740408">27</a> by Raymond Camden
		posted on 1/10/2013 at 7:45 AM
		</div>
		<div class="comment_text"><p>I generated the data like that because - it just made sense. :) There isn't a required reason though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740407">28</a> by Idee
		posted on 4/4/2013 at 12:05 AM
		</div>
		<div class="comment_text"><p>Waw, thanks for this example</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740409">29</a> by Akash
		posted on 5/30/2013 at 3:44 AM
		</div>
		<div class="comment_text"><p>Hello Raymond,<br>Firstly thank you for this excellent tutorial. I was wondering where the CRUD forms were attached? Sorry as i am unable to find it.<br>Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740412">30</a> by Seema
		posted on 5/30/2013 at 9:48 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I have an app already deployed. I now want to upgrade the app with some schema changes to the existing database. How can I achieve it without losing data from the original database? One way I thought of was creating a new database and copying contents from the original database. I haven't tried it - just an idea. <br>Please let me know how I can achieve this.<br>What does db.changeVersion(); do in Phonegap?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740414">31</a> by Raymond Camden
		posted on 5/31/2013 at 2:27 AM
		</div>
		<div class="comment_text"><p>I wouldn't create a new db, I'd just script the table adds. Remember your SQL can do "create table if not exists", so that can be used to safely add the new ones.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740413">32</a> by Raymond Camden
		posted on 5/31/2013 at 2:44 AM
		</div>
		<div class="comment_text"><p>@Akash: Everything should be in the download zip.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740415">33</a> by Szymon
		posted on 8/5/2013 at 5:21 PM
		</div>
		<div class="comment_text"><p>Great article! Thanks for sharing, this really got my to a flying start with what I thought would be a tedious task.<br>I had to add some operations to go "the other way" as in sending data that has been modified on the device back to the server. I'm sure based on your code anybody can get this done in a few minutes, but still if anybody wants to save a bit of coding, here's my solution:<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FSUsfahYR%3AGMSV1F7ONMu4VkfftCpQ2P2dUhY&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/SUsfahYR">http://pastebin.com/SUsfahYR</a></p><p>comments welcome, as I am no JS expert ;)<br>Thanks again for a great article, all the best!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740416">34</a> by Raymond Camden
		posted on 8/6/2013 at 4:12 AM
		</div>
		<div class="comment_text"><p>This is nice, Szymon - thanks for sharing it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740418">35</a> by Alex Lopez
		posted on 9/30/2013 at 2:44 AM
		</div>
		<div class="comment_text"><p>Hi there, I am getting the error XMLHttpRequest cannot load... localhost ... Origin www.server... is not allowed by Access-Control-Allow-Origin.</p><p>Do you know whay I am getting this when tryng to sync from my computer to the server?</p><p>Thanks<br>Alex</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740417">36</a> by Raymond Camden
		posted on 9/30/2013 at 7:29 PM
		</div>
		<div class="comment_text"><p>Because web browsers can't make XHR (AJAX) requests to other servers. There are workarounds (CORS, JSON/P), but in general, you are blocked. PhoneGap removed this restriction.</p><p>So you need to see if your server supports JSON/P or CORS. You can also try Ripple, but Ripple is a bit rough at the moment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740419">37</a> by Gorkaeff
		posted on 10/15/2013 at 11:23 PM
		</div>
		<div class="comment_text"><p>Thanks for this example Raymond.<br>Nowadays, who is the best option to synchronize offline data with my online server in Phonegap?? I've heard something like couchbase but there arent docs about it. I am using Phonegap 3.0 to my example app. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740420">38</a> by Raymond Camden
		posted on 10/16/2013 at 12:00 AM
		</div>
		<div class="comment_text"><p>Well, I'm not sure I can say what is "best". I spent most of my dev career using ColdFusion, and CF has very good support as a client for XHR requests. You could also use something like <a href="http://disq.us/url?url=http%3A%2F%2FParse.com%3AHOqUIwVjL-3eSnTAceIxxeYWB48&amp;cuid=3321886" rel="nofollow noopener" title="Parse.com">Parse.com</a>. (I've done many blog posts on it.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740423">39</a> by Juan Pablo
		posted on 3/10/2014 at 7:38 PM
		</div>
		<div class="comment_text"><p>I got this (just on the client side, the server side works great, I wrote some docs in there), It doesn't show anything. I need assistance, please.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fminus.com%2Fi%2FtInX2G7rsZEy%3AhdfZuax2kXMD1ahuQzFDEnQMA38&amp;cuid=3321886" rel="nofollow noopener" title="http://minus.com/i/tInX2G7rsZEy">http://minus.com/i/tInX2G7r...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740424">40</a> by Raymond Camden
		posted on 3/10/2014 at 7:41 PM
		</div>
		<div class="comment_text"><p>Um, you need to be a bit more clear about what is wrong. A screen shot isn't enough.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740426">41</a> by Juan Pablo
		posted on 3/10/2014 at 11:14 PM
		</div>
		<div class="comment_text"><p>The code works exactly the same way as you shared it, with the only difference that uses my localhost, In the server side It works perfectly, with the Doc Editor and everything, I can add content, edit it with no problems, the real issue is on the client side when the app tries to get the documents, it doesn't show neither the table nor the docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740425">42</a> by Raymond Camden
		posted on 3/10/2014 at 11:18 PM
		</div>
		<div class="comment_text"><p>Best I can suggest is debugging. Have you tried running the code in a desktop browser?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740430">43</a> by Juan Pablo
		posted on 3/11/2014 at 12:00 AM
		</div>
		<div class="comment_text"><p>Yes, I run the code in Chrome, but still, I can't figure out what's the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740429">44</a> by Raymond Camden
		posted on 3/11/2014 at 12:41 AM
		</div>
		<div class="comment_text"><p>Does it fail the same in Chrome is what I mean? If so - please look into your dev tools to diagnose the issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740431">45</a> by Gaurav Saini
		posted on 4/28/2014 at 2:56 PM
		</div>
		<div class="comment_text"><p>Hello,</p><p>I am trying to implement synchronization in my app. I am having doubt that when I connect to internet how will my app will know that internet is connected so it can fire sync event in background without opening my application.</p><p>Thanks<br>Gaurav</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740432">46</a> by Raymond Camden
		posted on 4/28/2014 at 3:00 PM
		</div>
		<div class="comment_text"><p>You can't, as far as I know. You would have to do the sync next time the user opens the app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740434">47</a> by Gaurav Saini
		posted on 4/28/2014 at 3:05 PM
		</div>
		<div class="comment_text"><p>Thanks for instant reply Raymond. Do you know any other way to do that in Cordova Apps. As I think this is a necessary thing (as application like gmail, twitter use background sync.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740435">48</a> by Raymond Camden
		posted on 4/28/2014 at 3:09 PM
		</div>
		<div class="comment_text"><p>Not that I know of. I know there has been some work on 'background plugins' (see the plugins site), but I don't know what state that works is in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740436">49</a> by Terry Collinson
		posted on 4/28/2014 at 3:41 PM
		</div>
		<div class="comment_text"><p>Not sure how your app will know but the user could be alerted of an update with a push notification</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740437">50</a> by Bharat Patil
		posted on 6/24/2014 at 8:20 PM
		</div>
		<div class="comment_text"><p>Post is nice. however I am curious to know what do you think about my solution.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.digitoffee.com%2Fprogramming%2Fdatasync-phonegapweb-applications-using-localstorage%2F123%2F%3A23zPkxXQTHNUB4dUnajy-N0NH8I&amp;cuid=3321886" rel="nofollow noopener" title="https://www.digitoffee.com/programming/datasync-phonegapweb-applications-using-localstorage/123/">https://www.digitoffee.com/...</a></p><p>I have also added jsfiddle demo in that post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740438">51</a> by Raymond Camden
		posted on 6/24/2014 at 11:13 PM
		</div>
		<div class="comment_text"><p>Looks nice, Bharat, thanks for sharing it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740441">52</a> by L.e. Nichols
		posted on 6/27/2014 at 1:51 AM
		</div>
		<div class="comment_text"><p>Script works fine up until populating the noSQL db. Initially it says its inserting but it doesnt. Wondering why? My table is always empty.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740440">53</a> by Raymond Camden
		posted on 6/27/2014 at 6:31 PM
		</div>
		<div class="comment_text"><p>When you debugged, what did you see? Do you see an error in the console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740442">54</a> by L.e. Nichols
		posted on 6/27/2014 at 11:58 PM
		</div>
		<div class="comment_text"><p>I get this screen. This is my webSQL db: <a href="http://disq.us/url?url=http%3A%2F%2Fi239.photobucket.com%2Falbums%2Fff77%2Flenichols%2FScreenShot2014-06-27at124213PM_zps772f063e.png%3AJ3knqvQo3_3_F0MR9tRi0ad_oDY&amp;cuid=3321886" rel="nofollow noopener" title="http://i239.photobucket.com/albums/ff77/lenichols/ScreenShot2014-06-27at124213PM_zps772f063e.png">http://i239.photobucket.com...</a></p><p>I get this in my console. Says date is = null.<br><a href="http://disq.us/url?url=http%3A%2F%2Fi239.photobucket.com%2Falbums%2Fff77%2Flenichols%2FScreenShot2014-06-27at125544PM_zpsc6714826.png%3AWDAcGxIpDJ7z7FjDegMS1KMj-54&amp;cuid=3321886" rel="nofollow noopener" title="http://i239.photobucket.com/albums/ff77/lenichols/ScreenShot2014-06-27at125544PM_zpsc6714826.png">http://i239.photobucket.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740443">55</a> by Raymond Camden
		posted on 6/28/2014 at 9:00 PM
		</div>
		<div class="comment_text"><p>So, it says it is back from getting 28 items.  Is resp.forEach running? Maybe on the line after forEach, add console.log("doing an item");</p><p>Confirm you see 28 of them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740447">56</a> by L.e. Nichols
		posted on 6/30/2014 at 5:54 AM
		</div>
		<div class="comment_text"><p>foreach seems to be working but no values in my db: <a href="http://disq.us/url?url=http%3A%2F%2Fi239.photobucket.com%2Falbums%2Fff77%2Flenichols%2FScreenShot2014-06-29at64730PM_zpsac207316.png%3AdqGlENoKLnPF8Az2oj7EkoKz7jU&amp;cuid=3321886" rel="nofollow noopener" title="http://i239.photobucket.com/albums/ff77/lenichols/ScreenShot2014-06-29at64730PM_zpsac207316.png">http://i239.photobucket.com...</a></p><p>weird!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740444">57</a> by Raymond Camden
		posted on 6/30/2014 at 5:56 AM
		</div>
		<div class="comment_text"><p>Can you put it online where I can run it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740446">58</a> by L.e. Nichols
		posted on 6/30/2014 at 7:34 AM
		</div>
		<div class="comment_text"><p>Can i email or inbox you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740448">59</a> by Raymond Camden
		posted on 6/30/2014 at 7:47 AM
		</div>
		<div class="comment_text"><p>Sure - I'm on vacation this week so may be slow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740450">60</a> by L.e. Nichols
		posted on 6/30/2014 at 8:36 PM
		</div>
		<div class="comment_text"><p>Ok... i sent you an email with an example and a jsfiddle to have a look at. I can tell its something simple because it gets the values, it just doesnt insert. I've looked at it 100times.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740449">61</a> by Senor Felix
		posted on 7/1/2014 at 10:26 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond for this article. Im a newbie in this and looking for a MySql backend for the DB  on a remote server. How would you advice  me to customize your setup. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740451">62</a> by Raymond Camden
		posted on 7/1/2014 at 7:17 PM
		</div>
		<div class="comment_text"><p>The back end db for this isn't doing anything complete. It's just one table of content. I didn't build a real DB even just used a ColdFusion feature to create a fake query-like object. Maybe if you explain what you tried I can help more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740452">63</a> by Senor Felix
		posted on 7/1/2014 at 7:23 PM
		</div>
		<div class="comment_text"><p>Thanks for the clarification. I'm actually interested in offline data collection - having the phonegap app work offline, store the data on websql or other html5 storage options and sync the collected data with a MySQL backend on a server. I also want the app to pull some updated tables from the Server and use them as lookups in my data collection form. In a nutshell I'm  looking a limited 2-directional syncronization...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740455">64</a> by L.E. nichols
		posted on 7/1/2014 at 7:33 PM
		</div>
		<div class="comment_text"><p>Thanks for your help an reply Raymond I was able to get it working with a few tweets.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740454">65</a> by Raymond Camden
		posted on 7/1/2014 at 7:36 PM
		</div>
		<div class="comment_text"><p>Oh ok - cool. I'm so taking credit even though I didn't do anything. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740453">66</a> by L.E. Nichols
		posted on 7/1/2014 at 10:29 PM
		</div>
		<div class="comment_text"><p>Great script btw!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740456">67</a> by Jan
		posted on 8/4/2014 at 3:15 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>how you trigger a function only after the loop which populates the table is finished? I understand each iteration is async, right?</p><p>e.g.<br>for(i=0;i&lt;100;1++){</p><p> tx.executeSql("INSERT INTO table1 (id) VALUES (?)",[i]);<br>}</p><p>// do something after everything is inserted</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740458">68</a> by Raymond Camden
		posted on 8/4/2014 at 7:29 PM
		</div>
		<div class="comment_text"><p>Use a transaction. Then you can execute code when the entire thing is complete.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740460">69</a> by Phillip Senn
		posted on 8/4/2014 at 8:41 PM
		</div>
		<div class="comment_text"><p>Jan,</p><p>I've pasted some code here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FPhillipSenn%2F3KMpL%2F%3AJjiSddEXEUPMRwUpv7sWPqu5Ewo&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/PhillipSenn/3KMpL/">http://jsfiddle.net/Phillip...</a></p><p>This is how I did it a few months ago. <br>I've since moved to Railo but I hope you can glean some info from looking at how I accomplished the same thing back when.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740457">70</a> by Stephan Reinecke
		posted on 8/6/2014 at 3:01 PM
		</div>
		<div class="comment_text"><p>Thank you for this great article!</p><p>I have one problem with the dates (lastupdated):<br>I rebuild the serverbackend in PHP / MySQL and syncing (insert / update / delete) works fine. But it is *updating all records every time*, though I didn’t make any changes in the serverbackend.</p><p>My date format in both db tables and the local storage is 0000-00-00 00:00:00. Is that correct or must it be another format?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740459">71</a> by Raymond Camden
		posted on 8/6/2014 at 6:03 PM
		</div>
		<div class="comment_text"><p>I'd begin by doing some console.logging to see if the time thing is a problem. For example, look at your db value on the client side versus the server. For two values that are supposed to be the same, are they not? And if not, *how* are they different?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740461">72</a> by Stephan Reinecke
		posted on 8/6/2014 at 6:47 PM
		</div>
		<div class="comment_text"><p>Just checked with your original date format (April, 03 2012 15:08:50) and it is the same behavior, it is updating all records, not just the changed ones.<br>I thought, there is a date comparison to just update records with newer dates.</p><p>Doesn't matter. In my real app, I will have only one lastupdate field to sync the whole database or something like that. Thx!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740464">73</a> by capa
		posted on 8/25/2014 at 9:52 AM
		</div>
		<div class="comment_text"><p>Naviagator.connection.type return 0 for cordova 3.5 , Please tell how to solve it??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740465">74</a> by Raymond Camden
		posted on 8/25/2014 at 3:11 PM
		</div>
		<div class="comment_text"><p>What platform?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740463">75</a> by Ustym
		posted on 10/8/2014 at 5:29 PM
		</div>
		<div class="comment_text"><p>I'd like to put your photo on the wall in my rooom.<br>Really usefull info for beginers like me! Thanks a lot!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740466">76</a> by Raymond Camden
		posted on 10/8/2014 at 6:19 PM
		</div>
		<div class="comment_text"><p>Heh, that's not creepy at all. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740467">77</a> by L.E. Nichols
		posted on 10/12/2014 at 1:11 AM
		</div>
		<div class="comment_text"><p>Whats the best method to redirect after sync is completely finished inserting?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740469">78</a> by Raymond Camden
		posted on 10/13/2014 at 2:38 PM
		</div>
		<div class="comment_text"><p>It depends. If you are using Angular then the $location service makes it simple. jQuery Mobile has a way to load a new view too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740468">79</a> by Gowri
		posted on 10/17/2014 at 2:12 PM
		</div>
		<div class="comment_text"><p>Thank you for this great article!</p><p>But in first time i am seen all data .After that i am delete browse data.After that i cant access data. in console log shows.<br>Starting up...<br>table created <br>DB initialization done. <br>Will get items after April, 03 2012 15:08:50</p><p>and nothing it shoes</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740471">80</a> by Raymond Camden
		posted on 10/17/2014 at 2:22 PM
		</div>
		<div class="comment_text"><p>So it says it will get the items but it does not - what does the Network tab show in Dev Tools?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740473">81</a> by Gowri
		posted on 10/17/2014 at 2:36 PM
		</div>
		<div class="comment_text"><p>Here is the code console log shows</p><p>"back from getting updates with 0 items to process. "</p><p>	syncDB();<br>    if(<a href="http://disq.us/url?url=http%3A%2F%2Fnavigator.network%3ASNz4exZXRw5jskA6PgJoL5NpBuY&amp;cuid=3321886" rel="nofollow noopener" title="navigator.network">navigator.network</a> &amp;&amp; navigator.network.connection.type != Connection.NONE) syncDB();<br>    else displayDocs();<br>}</p><p>function syncDB() {<br>    $("#docs").html("Refreshing documentation...");<br>console.log("inside");<br>    var date = localStorage["lastdate"]?localStorage["lastdate"]:'';<br>    console.log("Will get items after "+date);<br>    $.get(updateurl, {date:date}, function(resp,code) {<br>        console.log("back from getting updates with "+resp.length + " items to process.");<br>        //Ok, loop through. For each one, we see if it exists, and if so, we update/delete it<br>        //If it doesn't exist, straight insert<br>        resp.forEach(function(ob) {<br>		console.log("we");<br>            db.transaction(function(ctx) {<br>			console.log("back");<br>                ctx.executeSql("select id from docs where token = ?", [ob.token], function(tx,checkres) {<br>                    if(checkres.rows.length) {<br>                        console.log("possible update/delete");<br>                        if(!ob.deleted) {<br>                            console.log("updating "+ob.title+ " "+ob.lastupdated);<br>                            tx.executeSql("update docs set title=?,body=?,lastupdated=? where token=?", [ob.title,ob.body,ob.lastupdated,ob.token]);<br>                        } else {<br>                            console.log("deleting "+ob.title+ " "+ob.lastupdated);<br>                            tx.executeSql("delete from docs where token = ?", [ob.token]);<br>                        }<br>                    } else {<br>                        //only insert if not deleted<br>                        console.log("possible insert");<br>                        if(!ob.deleted) {<br>                            console.log("inserting "+ob.title+ " "+ob.lastupdated);<br>                            tx.executeSql("insert into docs(title,body,lastupdated,token) values(?,?,?,?)", [ob.title,ob.body,ob.lastupdated,ob.token]);<br>                        }<br>                    }</p><p>                });<br>            });<br>        });<br>        //if we had anything, last value is most recent<br>        if(resp.length) localStorage["lastdate"] = resp[resp.length-1].lastupdated;<br>        displayDocs();    <br>    },"json");</p><p>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740472">82</a> by Raymond Camden
		posted on 10/17/2014 at 2:55 PM
		</div>
		<div class="comment_text"><p>You said you deleted data - did you clear the localStorage value used to mark the date?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740475">83</a> by Stephan Reinecke
		posted on 10/24/2014 at 1:37 PM
		</div>
		<div class="comment_text"><p>I have 5 tables to sync, what is the best solution to get the latest date of update?</p><p>For every table I can get the latest date with <br>if(resp.length) var lastdate = resp[resp.length-1].last_update;</p><p>But how can I store them to sort and get the latest? I tried with an array, but I can't get this array out of the sync function (because of ajax?). Do I need a callback and how to do it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740476">84</a> by Raymond Camden
		posted on 10/25/2014 at 6:50 AM
		</div>
		<div class="comment_text"><p>Why not use the same process for each? They will be asynch but it will work. If you need to ensure ALL have checked and ALL have updated (if need be), look into using Promises to help manage it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740478">85</a> by Eulador
		posted on 11/6/2014 at 8:54 PM
		</div>
		<div class="comment_text"><p>We need a Windows Mobile app on a Motorola device that will collect data remotely and then sync to an Access db when it is connected to its host PC.  Is this a standard feature in the PhoneGap environment or is this always a "do it yourself" solution?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740477">86</a> by Raymond Camden
		posted on 11/6/2014 at 9:29 PM
		</div>
		<div class="comment_text"><p>Well syncing via AJAX is easy - connecting to an Access db on a client machine would need a custom plugin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2097808739">
	<div>
		<img src="https://disqus.com/api/users/avatars/mysoftt.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2097808739">87</a> (In reply to <a href="#c_1713740423">#39</a>) by mysoftt
		posted on 6/24/2015 at 8:32 PM
		</div>
		<div class="comment_text"><p>did you solve this problem??</p></div>
	</div>
</div>
		