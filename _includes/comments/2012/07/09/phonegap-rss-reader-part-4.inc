
<div class="comment" id="c_1713742125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742125">1</a> by HuabinZhang
		posted on 7/18/2012 at 1:14 PM
		</div>
		<div class="comment_text"><p>Thanks for the tip Raymond!I ever wrote an RSS Reader with phonegap.I also used google feed api.But I met a lot of problems.Most important of all is 'google.load("feeds", "1",{callback:initialize});'. I just wrote it like 'google.load("feeds", "1")'.In addition to this?I thisk it wastes time to  download js from google.It may use google feed api by google URL base addresses,like '<a href="https://disq.us/url?url=https%3A%2F%2Fajax.googleapis.com%2Fajax%2Fservices%2Ffeed%2Fload.%27%3FAfter%3AhpMhpN30TuigsK9kCp5dqw83_v8&amp;cuid=3321886" rel="nofollow noopener" title="https://ajax.googleapis.com/ajax/services/feed/load.'?After">https://ajax.googleapis.com...</a> trying your code, I found app can not show  cached version without network,which was not a problem in previous version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742129">2</a> by Raymond Camden
		posted on 7/18/2012 at 7:36 PM
		</div>
		<div class="comment_text"><p>Did you see where I described why google.load won't work w/o the 3rd option? That hit me too which is why I described it above.</p><p>So - you say the cached version isn't working when offline. I'll give that a test. If I forget to ping back, remind me. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742127">3</a> by DeadTechnology
		posted on 7/26/2012 at 1:07 AM
		</div>
		<div class="comment_text"><p>Tried building this in Dreamweaver CS6 and getting stuck when building for Android.  error is Resource icon already defined.  Not sure if this was meant for Dreamweaver, but kinda stuck now.  Works in a browser tho.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742130">4</a> by Raymond Camden
		posted on 7/26/2012 at 1:08 AM
		</div>
		<div class="comment_text"><p>Sorry - I don't have DW CS6 here so I can't test. I'd post it to the Adobe forums for DW. Also, you can try using Build yourself. Just login to <a href="http://disq.us/url?url=http%3A%2F%2Fbuild.phonegap.com%3A3uSHzxAbk16923y7ubV1pPbxE78&amp;cuid=3321886" rel="nofollow noopener" title="build.phonegap.com">build.phonegap.com</a> and upload the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742135">5</a> by DeadTechnology
		posted on 7/26/2012 at 7:22 AM
		</div>
		<div class="comment_text"><p>Ok, so I guess it was my fault.  I redownloaded, and screwed with it less and hey - now it works.  How about that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742136">6</a> by Raymond Camden
		posted on 7/26/2012 at 2:35 PM
		</div>
		<div class="comment_text"><p>Happens to me all the time. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742126">7</a> by Andy
		posted on 7/30/2012 at 5:08 AM
		</div>
		<div class="comment_text"><p>Code works well except when offline. Given the index.html header includes src="<a href="https://disq.us/url?url=https%3A%2F%2Fwww.google.com%2Fjsapi%3A8npz2UZ_USPqssRjTMU5L74kaj0&amp;cuid=3321886" rel="nofollow noopener" title="https://www.google.com/jsapi">https://www.google.com/jsapi</a>"</p><p>Wouldn't that kill the possibility of using a cached version offline.</p><p>Is there any reason why we couldn't just download the source and include it in the app? TOS perhaps :p</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742131">8</a> by Raymond Camden
		posted on 7/30/2012 at 5:28 AM
		</div>
		<div class="comment_text"><p>Well, to be clear, even if you had a copy of Google's code in the app, it wouldn't help you parse the remote RSS feed, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742134">9</a> by Andy
		posted on 7/30/2012 at 11:39 AM
		</div>
		<div class="comment_text"><p>Yes. After the remote feed has been read at least once in order to be cached to localStorage and with jsapi stored locally, not having much success getting it to display the stored feed while offline.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742132">10</a> by Raymond Camden
		posted on 7/30/2012 at 3:28 PM
		</div>
		<div class="comment_text"><p>Yeah, someone higher mentioned that too. This week I'll look into that bug and fix it. Sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742133">11</a> by Raymond Camden
		posted on 8/4/2012 at 4:26 PM
		</div>
		<div class="comment_text"><p>Ok guys, I created a new version of main.js that handles this. NOTE - this is one way of handling, not necessarily the best way.</p><p>I could have used cordova.js and check the connection, but instead, I simply wrap google.load in a try/catch. The nice thing about this is that it is actually 'broader' then just a network connection test.</p><p>If it fails, we try to load the cached version:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2F3257160%3AiyhU0zSUj84fDI_vc1w1sae6ozs&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/3257160">https://gist.github.com/325...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742139">12</a> by soumavo chatterjee
		posted on 8/6/2012 at 1:48 PM
		</div>
		<div class="comment_text"><p>How can I parse logo using this API</p><p>Here is the xml <a href="http://disq.us/url?url=http%3A%2F%2Fwww.morningstaradvisor.com%2Frssdata%2Fxml%2Fgetrssdata.xml%3ApYp0bVwD6enz8AdZLgKDh1rmt4g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.morningstaradvisor.com/rssdata/xml/getrssdata.xml">http://www.morningstaradvis...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742140">13</a> by Raymond Camden
		posted on 8/6/2012 at 3:27 PM
		</div>
		<div class="comment_text"><p>From what I can see in the docs, the logo field is not returned. You will need to switch to using XML parsing as demonstrated in the earlier posts in this series.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742141">14</a> by Mike Taylor
		posted on 8/16/2012 at 6:04 PM
		</div>
		<div class="comment_text"><p>Any reason why this would work great on an iphone4 but not load on an ipad3?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742146">15</a> by Raymond Camden
		posted on 8/16/2012 at 6:12 PM
		</div>
		<div class="comment_text"><p>Nope. I don't have an iPhone, just an iPad3. I don't remember testing it there... but it should work fine. You -do- need to whitelist the URL, but that would apply to all iOS devices, not just the iPad3.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742143">16</a> by Raymond Camden
		posted on 8/16/2012 at 6:18 PM
		</div>
		<div class="comment_text"><p>As just an FYI, I'm testing this now. I had not had a chance to get XCode installed on this new Mac so this is a perfect opportunity.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742148">17</a> by Raymond Camden
		posted on 8/16/2012 at 7:32 PM
		</div>
		<div class="comment_text"><p>Finally got stuff up and running... and it works for me on my iPad3.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742147">18</a> by Andy
		posted on 8/24/2012 at 2:27 PM
		</div>
		<div class="comment_text"><p>The new version works brilliantly.</p><p>Thanks Raymond for updating it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742149">19</a> by Chris
		posted on 12/4/2012 at 7:22 PM
		</div>
		<div class="comment_text"><p>Thanks for this - it's working really well for me! One question I have is about the "target" attribute on URLs. The links in my blog's posts all use target="_blank" to fire off a new window, but that appears to be getting stripped out and links are replacing the app itself (I want them to open a new browser).</p><p>Any idea what would be doing that? Not sure if it's your code, Google, or what...</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742145">20</a> by Raymond Camden
		posted on 12/4/2012 at 7:47 PM
		</div>
		<div class="comment_text"><p>I'd add a jQuery event handler that binds to the anchor tag and detects if it has a target. I believe this would do it:</p><p>$("a[target]")</p><p>That would match anything with a target. This may be more precise:</p><p>$("a[target='_blank']")</p><p>Anyway - capture that, and you can handle the links as you want, like with the ChildBrowser plugin for example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742142">21</a> by Chris
		posted on 12/4/2012 at 8:39 PM
		</div>
		<div class="comment_text"><p>Excellent, thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742144">22</a> by George
		posted on 7/8/2013 at 11:24 AM
		</div>
		<div class="comment_text"><p>Hello, i have used your example but i'm having a small problem with the scrolling. if i tested it with the ripple on my computer is working fine and loads 10 posts but if i tried with my mobile device i can scroll only 2 and if i remove my finger from the screen is coming to the first post. how i can fix it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742150">23</a> by Raymond Camden
		posted on 7/8/2013 at 2:05 PM
		</div>
		<div class="comment_text"><p>What device is this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742151">24</a> by Carla
		posted on 9/24/2013 at 11:35 AM
		</div>
		<div class="comment_text"><p>First of all, congratulations for your blog, it's really helpful! I have downloaded the code (Part 4) and I'm trying to test it on my devices. On Android works well but I can´t run it on iOs. The problem is that the main screen is freezing (an activity indicator appears) and I can't see the list of rss entries. I think I have set the iOs certificates in the correct way. Any idea? I'm stuck on this for three days... Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742152">25</a> by Raymond Camden
		posted on 9/24/2013 at 2:19 PM
		</div>
		<div class="comment_text"><p>Are you building it with PhoneGap Build?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742153">26</a> by Carla
		posted on 9/24/2013 at 7:12 PM
		</div>
		<div class="comment_text"><p>Yes, I'm using PhoneGap Build. I've changed the package name in context.xml file, create the zip and set the .mobileprovision and the .p12 certificates. Is necessary some additional step? Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742154">27</a> by Raymond Camden
		posted on 9/24/2013 at 8:07 PM
		</div>
		<div class="comment_text"><p>Not sure what to recommend. I'd first see if you could run the code locally w/o making a build. You may see an error reported then. Please note that in order to do that, you will want to run deviceready manually. You can also try Safari Remote Debugging and connect to your app that way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742155">28</a> by Ishank
		posted on 4/10/2014 at 2:50 PM
		</div>
		<div class="comment_text"><p>Raymond, can you help me with it I'm unable to fetch google feed; it's not loading.Here is the code<br>-<br>&lt;!DOCTYPE html&gt;<br>&lt;html&gt;<br>&lt;head&gt;<br>&lt;meta charset="utf-8" /&gt;<br>&lt;meta name="format-detection" content="telephone=no" /&gt;<br>&lt;!-- WARNING: for iOS 7, remove the width=device-width and height=device-height attributes. See <a href="https://disq.us/url?url=https%3A%2F%2Fissues.apache.org%2Fjira%2Fbrowse%2FCB-4323%3ANtoGa0LAt07fW4a8ihgaDqdxGkE&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.apache.org/jira/browse/CB-4323">https://issues.apache.org/j...</a> --&gt;<br>&lt;meta name="viewport" content="user-scalable=no, initial-scale=1, maximum-scale=1, minimum-scale=1, width=device-width, height=device-height, target-densitydpi=device-dpi" /&gt;<br>&lt;link rel="stylesheet" type="text/css" href="css/index.css" /&gt;<br>&lt;title&gt;Testly&lt;/title&gt;<br>&lt;/head&gt;<br>&lt;body&gt;<br>&lt;div class="app"&gt;<br>&lt;h1&gt;PhoneGap&lt;/h1&gt;<br>&lt;div id="deviceready" class="blink"&gt;<br>&lt;p class="event listening"&gt;Connecting to Device&lt;/p&gt;<br>&lt;p class="event received"&gt;Device is Ready&lt;/p&gt;<br>&lt;a href="#" onclick="var ref = <a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a>('<a href="http://disq.us/url?url=http%3A%2F%2Fcnn.com%3A-4260ZtDaKXqXQ-UIYG8MAa7ljQ&amp;cuid=3321886" rel="nofollow noopener" title="http://cnn.com">http://cnn.com</a>', '_blank', 'location=yes,toolbar=yes');"&gt;CNN Link&lt;/a&gt;<br>&lt;/div&gt;<br>&lt;div class="f"&gt;loading...&lt;/div&gt;<br>&lt;script type="text/javascript" src="phonegap.js"&gt;&lt;/script&gt;<br>&lt;script&gt;<br>document.addEventListener("deviceready", onDeviceReady, false);<br>function onDeviceReady() {<br>document.addEventListener("backbutton", function (e) {<br>e.preventDefault();<br>}, false );<br>} &lt;/script&gt;<br>&lt;script type="text/javascript" src="js/index.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="<a href="https://disq.us/url?url=https%3A%2F%2Fwww.google.com%2Fjsapi%3A8npz2UZ_USPqssRjTMU5L74kaj0&amp;cuid=3321886" rel="nofollow noopener" title="https://www.google.com/jsapi">https://www.google.com/jsapi</a>"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript"&gt;<br>google.load("feeds", "1", {'nocss' : 1});<br>function OnLoad() {<br>var feedControl = new google.feeds.FeedControl();<br>feedControl.setNumEntries(25);<br>feedControl.addFeed("<a href="http://disq.us/url?url=http%3A%2F%2Ffeeds.feedburner.com%2FTechcrunch%3A3AMjRRVn0cmiKIqNRmPHOKw0pQY&amp;cuid=3321886" rel="nofollow noopener" title="http://feeds.feedburner.com/Techcrunch">http://feeds.feedburner.com...</a>");<br>feedControl.draw(document.querySelector(".f"));<br>}<br>google.setOnLoadCallback(OnLoad);<br>&lt;/script&gt;<br>&lt;style&gt;<br>.f{<br>margin:20px;<br>overflow:scroll;<br>width:400px;<br>height:400px;<br>}<br>&lt;/style&gt;<br>&lt;script type="text/javascript"&gt;<br>app.initialize();<br>&lt;/script&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742156">29</a> by Raymond Camden
		posted on 4/10/2014 at 3:20 PM
		</div>
		<div class="comment_text"><p>First, please do not post large blocks of code in comments. Use a Pastebin or Gist instead. Secondly, I'd suggest doing some debugging so you can figure out where it isn't working. You can check the network requests to see if it comes through. You can see if there is a JS error. Basically, you need to do a bit more work to determine *where* it is failing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2076081738">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_t8y5WeAYzB.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2076081738">30</a> by max
		posted on 6/12/2015 at 6:50 PM
		</div>
		<div class="comment_text"><p>HI,</p><p>Very good work!</p><p>I want to add more ress feeds, from 3 blogs that I'm following.</p><p>How I can do it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2091206540">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2091206540">31</a> (In reply to <a href="#c_2076081738">#30</a>) by Raymond Camden
		posted on 6/21/2015 at 1:11 PM
		</div>
		<div class="comment_text"><p>You would need to parse all the feeds and then combine them into one array. You could use promises to make this a bit easier.</p></div>
	</div>
</div>
		