
<div class="comment" id="c_1713742562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742562">1</a> by Sarbjit Singh
		posted on 8/29/2012 at 5:17 PM
		</div>
		<div class="comment_text"><p>Is there a way to store that "read" state for the feed items. I want to give feedback to the user about new items in the feed. It will be great if we could notify the user when there are new items in the feed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742559">2</a> by Raymond Camden
		posted on 8/29/2012 at 6:13 PM
		</div>
		<div class="comment_text"><p>Certainly. All RSS items have a GUID (unique id). You could store those in WebSQL or LocalStorage and then just check. My gut says WebSQL would be a bit better for this - but LocalStorage would be easier.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742560">3</a> by sam
		posted on 10/9/2012 at 6:05 AM
		</div>
		<div class="comment_text"><p>I got issues with Child Browser at the moment with an rss app I'm working on. If the app is in a landscape orientation and upon closing the child browser the parent page (app), is set to portrait mode and loses some height, so can't navigate out.. I can hook into the close of event of the child browser and I am trying to programmatically set the viewpoint, but not finding any helpful code..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742558">4</a> by Michael
		posted on 10/9/2012 at 9:16 PM
		</div>
		<div class="comment_text"><p>Would you be willing to share your Xcode project version of this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742557">5</a> by Raymond Camden
		posted on 10/9/2012 at 9:38 PM
		</div>
		<div class="comment_text"><p>I didn't use XCode - I used PG Build. You can take my code and add it to an XCode/PG project locally though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742561">6</a> by Michael
		posted on 10/9/2012 at 10:09 PM
		</div>
		<div class="comment_text"><p>I guess a follow up question would be have you used PhoneGap Build or otherwise to successfully deploy an app to iTunes? This RSS reader or even another one. I have had numerous 10.6 rejections and it is starting to seem like Apple is clamping down on HTML 5 non-native apps. Just curious about other developer experiences.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742563">7</a> by Raymond Camden
		posted on 10/9/2012 at 10:10 PM
		</div>
		<div class="comment_text"><p>I've not yet pushed to the Apple store, but I'd strongly urge you to check out this article by my coworker Andy:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.tricedesigns.com%2F2012%2F10%2F03%2Fphonegap-apple-rejections-uiux-guidelines%2F%3AEe7N9w202cyzPUZqz_aGWJUJZfA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.tricedesigns.com/2012/10/03/phonegap-apple-rejections-uiux-guidelines/">http://www.tricedesigns.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742564">8</a> by Josher Slebodnik
		posted on 10/25/2012 at 8:14 PM
		</div>
		<div class="comment_text"><p>I got a question for you on the Childbrowser that maybe you will know. This doesn't have anything to do with the rss reader, but I am making two apps right now. The childbrowser in one app works fine. I just started another app using the same childbrowser code. In this app, for some reason the Toolbar showing the back, forward, and exit does not pop up. Any idea why this is? I used your code here $(window).on("touchstart", ".fullLink", function(e) {<br>	e.preventDefault();<br>	window.plugins.childBrowser.showWebPage($(this).attr("href"));<br>});<br>and assigned a class of fullLink to the link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742570">9</a> by Raymond Camden
		posted on 10/26/2012 at 4:54 PM
		</div>
		<div class="comment_text"><p>Sorry, I don't know. Maybe try the Google Group? (And ping back if you figure it out please.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742569">10</a> by Nitin Mahind
		posted on 12/24/2012 at 12:54 PM
		</div>
		<div class="comment_text"><p>How can i get contents of &lt;description&gt; tag.</p><p>actual I made some changes with javascript</p><p>I am able to get data from &lt;title&gt; &lt;author&gt; &lt;link&gt; tags and put it into SQLlite database.</p><p>but unable to get data from &lt;description&gt;. It gives me undefined.</p><p>thanks in advance.....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742565">11</a> by Raymond Camden
		posted on 12/24/2012 at 9:23 PM
		</div>
		<div class="comment_text"><p>Please share the RSS URL you are using.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742566">12</a> by Nitin Mahind
		posted on 12/27/2012 at 3:14 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Ffeedproxy.google.com%2FRaymondCamdensColdfusionBlog%3Akhca0PMNMiyChsWkz5J0iplPuvk&amp;cuid=3321886" rel="nofollow noopener" title="http://feedproxy.google.com/RaymondCamdensColdfusionBlog">http://feedproxy.google.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742567">13</a> by Raymond Camden
		posted on 12/27/2012 at 10:32 PM
		</div>
		<div class="comment_text"><p>From what I see in the Google Feed API, the description field is parsed into the content field in the entry object. Please see the Google Feed API docs for details.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742571">14</a> by Nitin Mahind
		posted on 1/2/2013 at 6:15 PM
		</div>
		<div class="comment_text"><p>Should we use same script for my rss feed...?<br>can we avoid use of feed burner...?<br>because the data I have to parse is to confidential.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742572">15</a> by Raymond Camden
		posted on 1/2/2013 at 7:55 PM
		</div>
		<div class="comment_text"><p>Please see my earlier posts where I parsed the feed manually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742573">16</a> by Pascal Kuilboer
		posted on 2/25/2013 at 3:04 PM
		</div>
		<div class="comment_text"><p>Switched to this version of your reader... but how about to get the enclosure tags for the images (url) and what to do if there isn't an image in every entry... Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742574">17</a> by Raymond Camden
		posted on 2/25/2013 at 6:12 PM
		</div>
		<div class="comment_text"><p>Two things:</p><p>1) Note that the latest version of PhoneGap supports ChildBrowser w/o using a plugin. Check the InAppBrowser spec.</p><p>2) Pascal, if Google's Feed parser doesn't return it, then you need to switch back to parsing the XML yourself, as I did in earlier entries. To see if Google returned it, simply use the console.dir() command on the results to look at it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742580">18</a> by Haris
		posted on 3/11/2013 at 8:51 AM
		</div>
		<div class="comment_text"><p>I change the rss link into :<br>//RSS url<br>var RSS = "<a href="http://disq.us/url?url=http%3A%2F%2Fserambi.blankonlinux.or.id%2Frss20.xml%3ASgotdNCuyKKRIZL3xEoCF3Y-DH4&amp;cuid=3321886" rel="nofollow noopener" title="http://serambi.blankonlinux.or.id/rss20.xml">http://serambi.blankonlinux...</a>";</p><p>But It's doesnt work.</p><p>What I must to do?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742577">19</a> by Raymond Camden
		posted on 3/11/2013 at 3:24 PM
		</div>
		<div class="comment_text"><p>You must tell me _how_ it isn't working. Use Chrome Dev Tools and spend some time diagnosing where it falls down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742578">20</a> by Haris
		posted on 3/12/2013 at 9:34 AM
		</div>
		<div class="comment_text"><p>Ah.. now it's working, I dunno why. :)<br>Anyway, can I modified this and put it on my github?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742581">21</a> by Raymond Camden
		posted on 3/12/2013 at 3:09 PM
		</div>
		<div class="comment_text"><p>I posted the code to share, so yes, you can use. If it helps your business, consider visiting my wishlist. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742576">22</a> by Brian Mitchell
		posted on 3/23/2013 at 9:35 PM
		</div>
		<div class="comment_text"><p>I am thankful for these blog posts. I have a question. Would there be a way to enable childbrowser to open links within the rss post itself on the app?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742579">23</a> by Raymond Camden
		posted on 3/23/2013 at 10:53 PM
		</div>
		<div class="comment_text"><p>Absolutely. jQuery lets you listen for events - so you could listen for all clicks within the 'post display' region. Then open them with InAppBrowser.</p><p>Oh btw - don't forget PhoneGap now supports ChildBrowser natively, w/o a plugin. It is called InAppBrowser.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742583">24</a> by Brian Mitchell
		posted on 3/25/2013 at 7:04 PM
		</div>
		<div class="comment_text"><p>I still do not understand Inappbrowser am familiar with childbrowser and am not familiar of where the post display region is located and how to listen for events with jquery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742582">25</a> by Raymond Camden
		posted on 3/25/2013 at 7:11 PM
		</div>
		<div class="comment_text"><p>Well, you have a few things here you are asking about.</p><p>InAppBrowser: Not familiar with it? Check the docs. It should clear it up.</p><p>Post Display Region: Please read this tutorial closely, and the earlier parts, and you can see where an individual entry is displayed to the user.</p><p>jQuery Events: Then I'd recommend learning jQuery. :) Yes I can write this for you pretty quickly, but honestly, you should be able to get up to speed on jQuery in an hour or so, and it would be well worth your time to take a look at it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742585">26</a> by Brian Mitchell
		posted on 3/27/2013 at 5:11 PM
		</div>
		<div class="comment_text"><p>Thank you Raymond! I'm gonna look into it I'm self taught on everything but have to piece together codes to get them to work. I attempted to add the touch handler to the page display and could not get any results to work. I'm still learning in app browser and the api. I'll look into it further today. I'll post any codes if that helps, just need to attempt to get the browser to work with individual links in the rss feed posts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742584">27</a> by Raymond Camden
		posted on 3/28/2013 at 12:36 AM
		</div>
		<div class="comment_text"><p>I haven't tested this, but I believe this is what would work. So this code handles recognizing clicks on items that have the fullLink class.</p><p>$(window).on("touchstart", ".fullLink", function(e) {<br>	e.preventDefault();<br>	window.plugins.childBrowser.showWebPage($(this).attr("href"));<br>});</p><p>You want the exact same code, but links within where the entry text is text. Entry text is stored in a div with the ID entryText. I think, stress think, this will do:</p><p>$(window).on("touchstart", "div#contentPage a", function(e) {<br>// the rest is the same</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742586">28</a> by Brian Mitchell
		posted on 4/6/2013 at 12:24 PM
		</div>
		<div class="comment_text"><p>I looked at it and followed as stated above and was unable to get anything to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742588">29</a> by Raymond Camden
		posted on 4/6/2013 at 3:12 PM
		</div>
		<div class="comment_text"><p>What exactly failed though? What do you see and in what environment?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742587">30</a> by Brian Mitchell
		posted on 4/9/2013 at 10:29 PM
		</div>
		<div class="comment_text"><p>I have the feed working perfectly. I just am struggling with the individual feed links using the in app browser. I am very novice to everything I can provide an example via paste bin and show you what I am doing and where I am inserting everything if that works. I also read a few pages back about description and images but am still learning that as well. Thank you for the quick response.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742592">31</a> by Brian Mitchell
		posted on 4/9/2013 at 10:40 PM
		</div>
		<div class="comment_text"><p>I'm using <a href="http://disq.us/url?url=http%3A%2F%2Frsspect.com%3AlJuTfbpn5DHYPCsGH5yBasiT5H8&amp;cuid=3321886" rel="nofollow noopener" title="rsspect.com">rsspect.com</a> to host my feed content so I'm not sure if I need to go there and add a div class to each link on there its in html.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742593">32</a> by Raymond Camden
		posted on 4/10/2013 at 4:35 PM
		</div>
		<div class="comment_text"><p>So when you say you are struggling, can you describe more what your issue is? I assume you get the list of entries. I assume you click to view. I assume when you click to view the full entry it is failing to use the child browser? If so, does it load in the app instead?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742596">33</a> by Brian Mitchell
		posted on 4/11/2013 at 10:58 AM
		</div>
		<div class="comment_text"><p>I have everything working, just cannot get childbrowser to open up any links within the entries. Here is my code: <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Fawjz5D7n%3A_urw9FT1gLfnN40fHAKRKqPMoRU&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/awjz5D7n">http://pastebin.com/awjz5D7n</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742591">34</a> by Raymond Camden
		posted on 4/11/2013 at 5:01 PM
		</div>
		<div class="comment_text"><p>I don't see where you tried what I suggested:</p><p>$(window).on("touchstart", "div#contentPage a", function(e) {</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742594">35</a> by Brian Mitchell
		posted on 4/12/2013 at 9:37 AM
		</div>
		<div class="comment_text"><p>I am not sure where to insert that at, could use some help there, everything else is working great.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742597">36</a> by Raymond Camden
		posted on 4/12/2013 at 3:26 PM
		</div>
		<div class="comment_text"><p>It is just more JavaScript code. You would put it with the rest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742598">37</a> by Panayiotis Georgiou
		posted on 4/26/2013 at 3:08 PM
		</div>
		<div class="comment_text"><p>Good tutorial Raymond but I have a problem.<br>I try to show the pubDate inside each post with <br>$('#postdate' + i).text(entry.pubDate);<br>but it doesn't pick the date from the feed</p><p>any ideas ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742595">38</a> by Raymond Camden
		posted on 4/26/2013 at 3:12 PM
		</div>
		<div class="comment_text"><p>If you console.dir(entry), do you see it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742599">39</a> by Ahmad Haris
		posted on 5/1/2013 at 12:08 PM
		</div>
		<div class="comment_text"><p>I figure out that your tutorial can build successfully on <a href="http://disq.us/url?url=http%3A%2F%2Fbuild.phonegap.com%3A3uSHzxAbk16923y7ubV1pPbxE78&amp;cuid=3321886" rel="nofollow noopener" title="build.phonegap.com">build.phonegap.com</a>, but, I can't handle it when build on local. Any clue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742602">40</a> by Raymond Camden
		posted on 5/1/2013 at 3:12 PM
		</div>
		<div class="comment_text"><p>Nope. I'd need to know what goes wrong when you build locally.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742606">41</a> by Ahmad Haris
		posted on 5/2/2013 at 7:52 AM
		</div>
		<div class="comment_text"><p>childbrowser not working, my be something wrong on my build.xml (on local). Can I use your config.xml as build.xml ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742603">42</a> by Raymond Camden
		posted on 5/2/2013 at 3:29 PM
		</div>
		<div class="comment_text"><p>You should use InAppBrowser instead. It is the same thing (pretty much) but built *into* PhoneGap now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742604">43</a> by Ahmad Haris
		posted on 5/6/2013 at 7:50 AM
		</div>
		<div class="comment_text"><p>Finnaly, I'm using InAppBrowser and succesed. Thanks.</p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742605">44</a> by Mars
		posted on 6/25/2013 at 9:43 AM
		</div>
		<div class="comment_text"><p>Hi, great tutorials and source file, please help me on how to add date to each entry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742607">45</a> by Mars
		posted on 6/25/2013 at 10:48 AM
		</div>
		<div class="comment_text"><p>and why it is not loading when the rss reader is opened through a main menu button. it only loads when i am refreshing the page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742609">46</a> by Raymond Camden
		posted on 6/25/2013 at 5:18 PM
		</div>
		<div class="comment_text"><p>In part 3 (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F1%2F24%2FPhoneGap-RSS-Reader--Part-3%29%3A22-eUSHIeSLxX6rJoSRbBsPc7bo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/1/24/PhoneGap-RSS-Reader--Part-3)">http://www.raymondcamden.co...</a>, look at the code that creates the "entry" data block and simply add the published date to it. I do not remember the exact property name, but if you console.dir the v object you should see it.</p><p>As to your second question, I am not sure. Can you create an APK via PhoneGap Build and share it with me?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742611">47</a> by Mars
		posted on 6/25/2013 at 8:41 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, I send you an email</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742608">48</a> by bill
		posted on 7/8/2013 at 7:20 PM
		</div>
		<div class="comment_text"><p>I am really new to jquery and phonegap. I am trying to show several listviews in a single page app. If you could share how I might be able to display different rss feeds for the different items in a list I would appreciate your help.</p><p>I have a page that has buttons that would call different rss feeds that would return a list on a different page. Just what its doing now but allowing for for several feeds to be used by different buttons. Thanks again..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742612">49</a> by Raymond Camden
		posted on 7/9/2013 at 3:58 PM
		</div>
		<div class="comment_text"><p>Bill, I hate to sound like a commercial, but if you buy my jQuery Mobile book, I've got an example of a RSS Reader app that lets you input RSS URLs and view them one by one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742610">50</a> by Alex
		posted on 7/17/2013 at 7:59 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Thanks for the great tutorial. I just upgraded to JQuery 2.0.3 and to Phonegap 2.9.0. I then change all .live to .on in the RSS script but not I am getting the following errors:<br>Firefox - TypeError: entries[selectedEntry] is undefined<br>Chrome - Uncaught TypeError: Cannot read property 'title' of undefined</p><p>on line 68 - $("h1", this).text(entries[selectedEntry].title);</p><p>Do you have an idea how to resolve this issue or point me in the right direction? Any help is greatly appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742616">51</a> by Raymond Camden
		posted on 7/17/2013 at 8:02 PM
		</div>
		<div class="comment_text"><p>Can you console.log selectedEntry to ensure it was set to a value?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742618">52</a> by Spencer
		posted on 7/19/2013 at 9:04 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>I am trying to load your code as a separate page but I can't get it to refresh. Not sure where or how to make the call to force the page to load. I changed pageinit to showpage but no joy, any ideas? Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742682">53</a> by Raymond Camden
		posted on 7/20/2013 at 6:34 PM
		</div>
		<div class="comment_text"><p>Well it should be pageshow, not showpage. Did you use that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742687">54</a> by Bill
		posted on 8/3/2013 at 6:49 AM
		</div>
		<div class="comment_text"><p>I am using your base code for a gallery works awesome. I have a problem that I am trying to solve. I am trying to add the ability to swipe left or swipe right to the next image once I am in the content page. I just don't get how to call back to the listview and track where I am. I have had limited success and was hoping you might point out how to do it. I know it has to center around the entryid and the selectedEntry var. Thanks for any pointers you might be able to share.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742691">55</a> by Raymond Camden
		posted on 8/4/2013 at 6:37 AM
		</div>
		<div class="comment_text"><p>The selectedEntry variable (if I remember right, this post is almost a year old now ;) is just the index in the list. If you listen for swipe events, you should be able to say:</p><p>on swipe left:<br>  selectedIndex = selectedIndex -1</p><p>Then update the data for the page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742684">56</a> by Roel
		posted on 8/5/2013 at 8:47 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, I tried to compile this code yours and I got error:</p><p>plugin unsupported: childbrowser</p><p>You need update your code with the new Phonegap plugin, InAppBrowser. Thanks for everything, your posts save me always.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742683">57</a> by Raymond Camden
		posted on 8/5/2013 at 2:54 PM
		</div>
		<div class="comment_text"><p>Roel, I've got a huge amount of posts here - it would be a full time job if I had to come back and update everyone that didn't work because of updates. ;) I actually do mention it up in the comments above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742681">58</a> by Radu
		posted on 10/1/2013 at 6:07 PM
		</div>
		<div class="comment_text"><p>Hi, great work on the app, but there is one problem. If i open the index.html in my computer browser it works like a charm, but built as a PhoneGap app, it fails to work. After some debugging i realized that it doesn't enter the "initialize" function at google.load . Have you encountered this problem? I also mention that it was tested only in Android, and the apk you provided worked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742679">59</a> by Raymond Camden
		posted on 10/1/2013 at 6:14 PM
		</div>
		<div class="comment_text"><p>It could be a whitelist issue. You can either add *, or the <a href="http://disq.us/url?url=http%3A%2F%2Fgoogle.com%3A_IuuuaY93QHJ-V0RbKBx3HKnPG4&amp;cuid=3321886" rel="nofollow noopener" title="google.com">google.com</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742686">60</a> by Sotiris
		posted on 11/16/2013 at 7:56 PM
		</div>
		<div class="comment_text"><p>Hello!</p><p>Great Work! I tried to make a rss reader just like that but for multiple feeds. My idea was to create a simple first page with a list of the categories. When you click on each one of them it directs you to an external page (e.g music.html) where you could see each feed. The problem is that even if had create a js file for each category it displays only the feed from the first page's js and if I remove it it doesn't show a thing. Do you have any idea how to make my app with multiple feeds?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742692">61</a> by Raymond Camden
		posted on 11/17/2013 at 10:31 AM
		</div>
		<div class="comment_text"><p>Well, I'd not create a JS file for each category. Rather, my JS file would associate an rss feed with each category.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742688">62</a> by Mars Cureg
		posted on 1/20/2014 at 12:20 PM
		</div>
		<div class="comment_text"><p>Could someone tell me on how to get the rss reader to update automatically, let us say, when I publish new post to the website where the rss it should automatically update also on the app.</p><p>What i have right is that, when I open the rss page the content doesn't update immediately, I have to leave that page open and refresh to get the new content</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742689">63</a> by Raymond Camden
		posted on 1/20/2014 at 8:18 PM
		</div>
		<div class="comment_text"><p>You could use Push, but to be honest, that seems like overkill. I blog a lot, and I average about 1 post per day. I can't see setting up Push just for that. But if you really want it - that's what you could use. I'd probably do something simpler - in the app, use a setTImeout with a long interval, like an hour, and check then.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742696">64</a> by Hindujhan
		posted on 2/10/2014 at 1:12 PM
		</div>
		<div class="comment_text"><p>Hi used your system,</p><p>I have install JSON API into my wordpress site to pull rss data can i call json url to your Javascript code?</p><p>like this<br>//RSS url<br>var RSS = "<a href="http://disq.us/url?url=http%3A%2F%2Fplatform.lk%2Fblog%2F%3Fjson%3D1%2F%3Anl8EckU-XoUzkfxFYNFUr7rreNs&amp;cuid=3321886" rel="nofollow noopener" title="http://platform.lk/blog/?json=1/">http://platform.lk/blog/?js...</a>";</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742685">65</a> by Raymond Camden
		posted on 2/10/2014 at 6:45 PM
		</div>
		<div class="comment_text"><p>I'm not sure I understand your question. My code uses a Google library to translate RSS into simple JS objects. Could you use your JSON instead? Yes - but you would need to modify my code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742695">66</a> by Ali
		posted on 2/21/2014 at 4:55 PM
		</div>
		<div class="comment_text"><p>Hello, thanks for this amazing tutorial, but I have a problem, it all worked fine in Part 2, but I'm interested with having an offline view of my feeds, so I tried the sample 4, it didn't work, I read the comments and updated the main.js, it worked well, but when I put my rss link instead of yours, it doesn't work! The app says "Sorry, we are unable to get the RSS and there is no cache. P.S: My rss feeds link is working and I have a sample with the app version "Part 2" using my link and it's working, and I'm testing the app on my android device, Thanks in advance man you're Great!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742698">67</a> by Raymond Camden
		posted on 2/21/2014 at 5:23 PM
		</div>
		<div class="comment_text"><p>Have you tried debugging? Please connect Safari or Chrome (depending on your platform) and debug the network call to see what is happening behind the scenes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742693">68</a> by Michael
		posted on 5/2/2014 at 1:20 AM
		</div>
		<div class="comment_text"><p>Ray do you know if this still works in a Cordova app? It seems pretty old and referencing CB. I have a simple RSS feed display in my app currently. The problem is I need certain RSS items to open in Safari and some to open in InApp Browser. I don't really have control of the different links to add like <a href="http://disq.us/url?url=http%3A%2F%2Fwindow.open%3AEAyKk2ZWaxIPMi9PwfgjK1kaS7A&amp;cuid=3321886" rel="nofollow noopener" title="window.open">window.open</a> and _system. Would I be able to use your plugin and have some control of the links?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742690">69</a> by Raymond Camden
		posted on 5/2/2014 at 1:59 AM
		</div>
		<div class="comment_text"><p>Not quite sure what you are asking specifically as you kinda jump around a bit. Honestly it sounds like if you are asking if the InAppBrowser will work now as opposed to the old ChildBrowser, if so, yeah, it works. You would change my code that uses the old plugin to just use the new way of doing the IAB.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742697">70</a> by Hindujhan
		posted on 5/2/2014 at 10:06 AM
		</div>
		<div class="comment_text"><p>Any Ideas about Phone Gap RSS Caching. and reading app on offline mode</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742680">71</a> by Raymond Camden
		posted on 5/2/2014 at 4:22 PM
		</div>
		<div class="comment_text"><p>Yes. You have multiple options to store data (file system, localstorage, websql).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1825526801">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_LjiyzoZRwQ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1825526801">72</a> by Patrick Schultz
		posted on 1/30/2015 at 2:30 PM
		</div>
		<div class="comment_text"><p>The source code link is broken.  Will you repost it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1825536522">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1825536522">73</a> (In reply to <a href="#c_1825526801">#72</a>) by Raymond Camden
		posted on 1/30/2015 at 2:36 PM
		</div>
		<div class="comment_text"><p>Fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1825574198">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_LjiyzoZRwQ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1825574198">74</a> by Patrick Schultz
		posted on 1/30/2015 at 3:01 PM
		</div>
		<div class="comment_text"><p>Thank you sir!  It looks like the other parts are also broken.  Do you have a Github for this whole project?  I just followed your page and am impressed by your projects, but I didn't see the rss on Git?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1825605953">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1825605953">75</a> (In reply to <a href="#c_1825574198">#74</a>) by Raymond Camden
		posted on 1/30/2015 at 3:18 PM
		</div>
		<div class="comment_text"><p>I started using one GitHub repo for my Cordova demos about half a year ago, but it was after this post was made. You can see it here: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfjedimaster%2Fcordova-examples%3AhDSsKwZ2Y-gTpH6bT-ZctTBlhjU&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfjedimaster/cordova-examples">https://github.com/cfjedima...</a>. There is a RSS demo, but it uses Ionic, so it is pretty different. You said, "the other parts are broken" - what do you mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1825611845">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_LjiyzoZRwQ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1825611845">76</a> (In reply to <a href="#c_1825605953">#75</a>) by Patrick Schultz
		posted on 1/30/2015 at 3:21 PM
		</div>
		<div class="comment_text"><p>Sorry for the confusion.  The other source code chunks on the other parts of the RSS Feeder Tutorial are also dead links.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1825630960">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1825630960">77</a> (In reply to <a href="#c_1825611845">#76</a>) by Raymond Camden
		posted on 1/30/2015 at 3:32 PM
		</div>
		<div class="comment_text"><p>Oops. So - when I migrated my blog, I messed up the part that handles attachments. I'll fix these though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1825641718">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_LjiyzoZRwQ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1825641718">78</a> (In reply to <a href="#c_1825630960">#77</a>) by Patrick Schultz
		posted on 1/30/2015 at 3:38 PM
		</div>
		<div class="comment_text"><p>Thanks!  I teach at Vocational Center, and I going to use this tutorial as a base to introduce the capabilities of PhoneGap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1825652978">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1825652978">79</a> (In reply to <a href="#c_1825641718">#78</a>) by Raymond Camden
		posted on 1/30/2015 at 3:45 PM
		</div>
		<div class="comment_text"><p>Ok, all updated. Keep in mind this "series" is almost 3 years old so.... just remember it. :)</p></div>
	</div>
</div>
		