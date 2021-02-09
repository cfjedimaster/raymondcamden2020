
<div class="comment" id="c_1713738584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738584">1</a> by Raymond Camden
		posted on 1/25/2012 at 4:25 AM
		</div>
		<div class="comment_text"><p>By the way, I made one more small change. I'm loading jQuery 1.6.4 instead of 1.7. 1.7 isn't supported in jQuery Mobile yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738589">2</a> by Ivan Ilijasic
		posted on 1/25/2012 at 4:40 AM
		</div>
		<div class="comment_text"><p>Hey Raymond. Nice work and useful articles. Local storage and PhoneGap - these are some of the things I want to read about.</p><p>I wanted to ask you, since you tested lot of Adobe mobile technologies, are you satisfied with jQuery Mobile performances.</p><p>Some things work better than in AIR but jQuery transitions take time. They are not instant, takes 1 second to load another page, item renderers work nice and some things look much easier to develop than in mobile AIR. Just my 2 cents.</p><p>Cheers,<br>Ivan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738586">3</a> by Raymond Camden
		posted on 1/25/2012 at 9:10 AM
		</div>
		<div class="comment_text"><p>I know page transitions are something the JQM folks are working on improving. But for now, you can totally turn them off:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fforta.com%2Fblog%2Findex.cfm%2F2012%2F1%2F5%2FPreventing-Annoying-jQuery-Mobile-Page-Transitions%3A9Jk5XrPKHHEXpG0eK09i9cY5wLs&amp;cuid=3321886" rel="nofollow noopener" title="http://forta.com/blog/index.cfm/2012/1/5/Preventing-Annoying-jQuery-Mobile-Page-Transitions">http://forta.com/blog/index...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738587">4</a> by Johannes Wilm
		posted on 1/25/2012 at 10:18 AM
		</div>
		<div class="comment_text"><p>Hey! As far as I can tell this doesn't take care of pictures, right? I did follow your suggestions you posted as a comment on the second part. I still needed a todatauri plugin as the javascript implementation on android apparently doesn't have that builtin. It worked on small pictures, but not on larger ones. But even when I overrode the image size and had it all included in the html-stream,the android browser simply refused to show datauri images. S that was the end of that, I guess... Let me know if you attempt to fix this somehow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738592">5</a> by Raymond Camden
		posted on 1/25/2012 at 7:17 PM
		</div>
		<div class="comment_text"><p>@Johannes: You mean in terms of being offline? No - it would not handle that. I think it's ok not to as folks can still see the content.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738588">6</a> by Niclas
		posted on 1/26/2012 at 7:04 PM
		</div>
		<div class="comment_text"><p>Hi Raymond</p><p>First af all I'm a newbie so my skills aren't that good at all.</p><p>I've dowloaded the attached file from above.<br>I've tried with several feeds, some works, the most of them doesn't. I'm not sure if the not are supported or not. But one thing make me very uncertain and that is why I got this messege "Sorry, we are unable to get the RSS and there is no cache" when I try with the feed you included in the file. (var RSS = "<a href="http://disq.us/url?url=http%3A%2F%2Ffeedproxy.google.com%2FRaymondCamdensColdfusionBlog%3Akhca0PMNMiyChsWkz5J0iplPuvk&amp;cuid=3321886" rel="nofollow noopener" title="http://feedproxy.google.com/RaymondCamdensColdfusionBlog">http://feedproxy.google.com...</a>";)</p><p>Do you know why? At this moment I've only tried to run this on my PC /Win 7, browser Chrome) or do I HAVE to run it inside Phonegap?</p><p>Best regards Niclas</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738590">7</a> by Raymond Camden
		posted on 1/26/2012 at 7:08 PM
		</div>
		<div class="comment_text"><p>It _has_ to be via PhoneGap. Regular JS apps cannot make a cross domain request. Ie, a file on <a href="http://disq.us/url?url=http%3A%2F%2Ffoo.com%3AN7Z24oIKkMVc9eNBzSRQUSpuMJ0&amp;cuid=3321886" rel="nofollow noopener" title="foo.com">foo.com</a> cannot load an XML feed from <a href="http://disq.us/url?url=http%3A%2F%2Fgoo.com%3AAkE-SSx4loVmq6GQz7gE5TrRLE8&amp;cuid=3321886" rel="nofollow noopener" title="goo.com">goo.com</a>. There are ways around this (JSON/P, or uses your own server side code to proxy it), but for the most part, the answer is no. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738591">8</a> by Niclas
		posted on 1/26/2012 at 7:20 PM
		</div>
		<div class="comment_text"><p>Hi Raymond</p><p>Thanks a lot. I've got an iPhone and an iPad but no Mac. I really have to get a Mac so I can try Phonegap :)</p><p>Do you have any ideas why <a href="http://disq.us/url?url=http%3A%2F%2Fblip.tv%2Fnettuts%2Frss%3AD6qBmBtXhAnUHQMVwH9kKPgMcTs&amp;cuid=3321886" rel="nofollow noopener" title="http://blip.tv/nettuts/rss">http://blip.tv/nettuts/rss</a> works? It just a feed I got online, it is not mine or anything.</p><p>//N</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738594">9</a> by Raymond Camden
		posted on 1/26/2012 at 7:28 PM
		</div>
		<div class="comment_text"><p>No idea. It should be impossible. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738595">10</a> by Chad
		posted on 1/28/2012 at 2:50 AM
		</div>
		<div class="comment_text"><p>Hey again, you were so helpful in part 2 of course I had to come back for part 3!</p><p>Love the app so far but only one complaint. When reading an article (at least on android 4.0.3) and you hit the back button it closes the app vs returning to the home page.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwiki.phonegap.com%2Fw%2Fpage%2F29494136%2FAndroid%2520Back%2520Button%2520Handler%3A6GyB5Gd82sNLav064mjww8Agd5s&amp;cuid=3321886" rel="nofollow noopener" title="http://wiki.phonegap.com/w/page/29494136/Android%20Back%20Button%20Handler">http://wiki.phonegap.com/w/...</a></p><p>It wasn't too difficult to fix but I'm sure others will be looking for this at some point.</p><p>Also another thing I ran into was 4.0.3 has issues with phonegap and screen rotation. It pretty much kills the app. Had to modify the AndroidManifest.xml and force portrait to fix this.</p><p>        &lt;activity<br>            android:label="@string/app_name"<br>            android:name=".AppNameActivity" android:screenOrientation="portrait"&gt;</p><p>Otherwise its still awesome! v4 to tackle push/pull notifications?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738608">11</a> by Raymond Camden
		posted on 1/28/2012 at 3:07 AM
		</div>
		<div class="comment_text"><p>Odd, the back button for me (Android 3.something) works ok, so maybe it's just 4.x. Ditto rotation.</p><p>Anyway... sorry to be dense, but what do you mean by push/pull notifications?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738607">12</a> by Chad
		posted on 1/30/2012 at 6:19 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwiki.phonegap.com%2Fw%2Fpage%2F37159628%2FNotifications%3Aag3RsWttuOdgTDLNQbEc1r4pXus&amp;cuid=3321886" rel="nofollow noopener" title="http://wiki.phonegap.com/w/page/37159628/Notifications">http://wiki.phonegap.com/w/...</a><br>and<br><a href="http://disq.us/url?url=http%3A%2F%2Fdeveloper.android.com%2Fguide%2Ftopics%2Fui%2Fnotifiers%2Fnotifications.html%3A1JvWkdimit3gJgw3Mbz6iM7Vfsc&amp;cuid=3321886" rel="nofollow noopener" title="http://developer.android.com/guide/topics/ui/notifiers/notifications.html">http://developer.android.co...</a></p><p>Adding the notifications when the feed has been updated would make the app a bit more useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738609">13</a> by Raymond Camden
		posted on 1/30/2012 at 7:59 PM
		</div>
		<div class="comment_text"><p>So for that, you need something that runs in the background. I know apps don't always close when you - well, close them - so it's possible you can "hope" for that. I don't believe, stress, believe, you can set up a PG app so that it can notice something even when not running.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738611">14</a> by Chad
		posted on 1/30/2012 at 8:41 PM
		</div>
		<div class="comment_text"><p>ahh, touche! it'd be unrealistic to expect something like that out of phonegap :-P  but I did find this gem<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fsaileshmittal%2Fphonegap-system-notification-plugin%3AZvuC97jzO7o76RylYrpi7gT0gLI&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/saileshmittal/phonegap-system-notification-plugin">https://github.com/saileshm...</a></p><p>Also, I thought I had the back button issue resolved but apparently I made it worse for some users :-\</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F8251586%2Fphonegap-jquerymobile-android-back-button-closes-app-in-nested-list%3AjVXLxTk2JrUsb3EBm905NJ5GTFk&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/8251586/phonegap-jquerymobile-android-back-button-closes-app-in-nested-list">http://stackoverflow.com/qu...</a></p><p>It actually creates errors for me so I wasn't able to use this method to "fix" it. Thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738612">15</a> by Raymond Camden
		posted on 1/30/2012 at 9:05 PM
		</div>
		<div class="comment_text"><p>1) My understanding (and again, let me stress I'm mostly talking out my rear here), is that this plugin too will require the app to actually be run by the user first. It's nice like the Twitter app, for example, which will run after you reboot the phone.</p><p>2) I'm ashamed to say it, but I didn't know <a href="http://disq.us/url?url=http%3A%2F%2Fnavigator.app%3AfQV4e68sikh7SniCQ6peLNdszpA&amp;cuid=3321886" rel="nofollow noopener" title="navigator.app">navigator.app</a>.* existed. I just now asked on the forums where this is documented.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738614">16</a> by hary
		posted on 2/14/2012 at 3:51 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>Thanks for this code.<br>I tried it on a Galaxy S2 and the scrolling "jumps" a little bit, it's not smooth, do you also have the same problem ? Do you know where it could come from ?<br>Thanks,<br>Hary</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738615">17</a> by Raymond Camden
		posted on 2/14/2012 at 6:57 PM
		</div>
		<div class="comment_text"><p>Hmmmm, no, I haven't seen that. I know that on Android, sometimes page transitions can be a bit icky. They are working on fixing that asap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738617">18</a> by Arihant
		posted on 2/14/2012 at 7:29 PM
		</div>
		<div class="comment_text"><p>Hey Any ideas why i am unable to images &amp; the full content in the app?</p><p>Here's my feed url<br><a href="http://disq.us/url?url=http%3A%2F%2Ffeeds.feedburner.com%2FTattvaGyan%3AaqLrNVRIrww9vJaDQpuQwoiPrl0&amp;cuid=3321886" rel="nofollow noopener" title="http://feeds.feedburner.com/TattvaGyan">http://feeds.feedburner.com...</a></p><p>I am using wordpress on my original site. Any ideas on how to fix this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738618">19</a> by Raymond Camden
		posted on 2/14/2012 at 9:04 PM
		</div>
		<div class="comment_text"><p>What images? What content? You said full content, right? So I assume the titles work, but when you click, you don't see the entry, is that right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738616">20</a> by Arihant
		posted on 2/16/2012 at 10:08 AM
		</div>
		<div class="comment_text"><p>I am sorry for the confusion.</p><p>Your feed looks like this<br><a href="http://disq.us/url?url=http%3A%2F%2Ffeeds.feedburner.com%2FRaymondCamdensColdfusionBlog%3AnzK9XwIeRKezL04qv_G4nQ6RQfE&amp;cuid=3321886" rel="nofollow noopener" title="http://feeds.feedburner.com/RaymondCamdensColdfusionBlog">http://feeds.feedburner.com...</a></p><p>And mine looks like this<br><a href="http://disq.us/url?url=http%3A%2F%2Ffeeds.feedburner.com%2FTattvaGyan%3AaqLrNVRIrww9vJaDQpuQwoiPrl0&amp;cuid=3321886" rel="nofollow noopener" title="http://feeds.feedburner.com/TattvaGyan">http://feeds.feedburner.com...</a></p><p>I have enabled full feeds but when you view the xml version only the start description shows up with no image.</p><p>I am asking if the app can be modified to read the hidden &lt;[CDATA thing?<br>OR<br>How do i optimize my feed so that it shows the complete feed with images.</p><p>Any Ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738619">21</a> by Raymond Camden
		posted on 2/16/2012 at 8:01 PM
		</div>
		<div class="comment_text"><p>When I view source on your feed, I see HTML, not XML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738623">22</a> by Stefan
		posted on 2/16/2012 at 9:01 PM
		</div>
		<div class="comment_text"><p>i have the same problem. i want to read out an &lt;item&gt; with a field named &lt;content-encoded&gt; that includes the content in a &lt;![CDATA field. ... this code:</p><p>entry = { 					title:$(v).find("title").text(), 			link:$(v).find("link").text(), 				description:$.trim($(v).find("content:encoded").text())</p><p>doesnt work :(</p><p>best regards<br>stefan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738620">23</a> by Raymond Camden
		posted on 2/16/2012 at 9:07 PM
		</div>
		<div class="comment_text"><p>Oh, I ran into this before. Let me whip up a quick demo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738621">24</a> by Raymond Camden
		posted on 2/16/2012 at 9:18 PM
		</div>
		<div class="comment_text"><p>Ok, for me, .text works perfectly fine. Whipping up a quick blog demo and will post the link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738626">25</a> by Stefan
		posted on 2/16/2012 at 9:24 PM
		</div>
		<div class="comment_text"><p>you mean .text() works with content-encoded?</p><p>my rss feed looks like this:</p><p>&lt;item&gt;<br>&lt;title&gt;MT...&lt;/title&gt;<br>&lt;pubDate&gt;Thu, 09 Feb 2012 13:24:05 +0100&lt;/pubDate&gt;<br>&lt;link&gt;https://...&lt;/link&gt;<br>&lt;guid&gt;https://...&lt;/guid&gt;<br>&lt;content:encoded&gt;&lt;![CDATA[Fachbereich:]]&gt;&lt;/content:encoded&gt;<br>&lt;/item&gt;</p><p>and i want to read out the line with content-encoded?!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738625">26</a> by Raymond Camden
		posted on 2/16/2012 at 9:30 PM
		</div>
		<div class="comment_text"><p>Quick example code for you -</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F2%2F16%2FQuick-demo-of-accessing-XML-data-with-jQuery%3AUI-YyZPmPxG1rvqa2PLcmqVCc-M&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/2/16/Quick-demo-of-accessing-XML-data-with-jQuery">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738624">27</a> by Raymond Camden
		posted on 2/16/2012 at 9:30 PM
		</div>
		<div class="comment_text"><p>Ah, you didn't say that (actually, you probably did, and I missed it), I thought the issue was ONLY CDATA. Let me update my example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738629">28</a> by Raymond Camden
		posted on 2/16/2012 at 9:39 PM
		</div>
		<div class="comment_text"><p>Ok, I knew I remembered this. See:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fplus.google.com%2F115106614688778962135%2Fposts%2F4zX1XJ1sYgg%3A7DOgjPqtFpFKkKlc0aaubTBoY2s&amp;cuid=3321886" rel="nofollow noopener" title="https://plus.google.com/115106614688778962135/posts/4zX1XJ1sYgg">https://plus.google.com/115...</a></p><p>and specifically:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.steveworkman.com%2Fhtml5-2%2Fjavascript%2F2011%2Fimproving-javascript-xml-node-finding-performance-by-2000%2F%3Ap8PtrIXG8I-TOYhr5PXdWEVjDVI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.steveworkman.com/html5-2/javascript/2011/improving-javascript-xml-node-finding-performance-by-2000/">http://www.steveworkman.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738628">29</a> by Vince
		posted on 2/20/2012 at 7:58 AM
		</div>
		<div class="comment_text"><p>Hi, this code is working fine on Android 2.3. But on Android 2.2, the only field properly displayed from the feed is PubDate :<br>pubDate:		$(v).find("pubDate").text()</p><p>Other fields (title, description) are ignored and not displayed. Any idea of a workaround on Android 2.2?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738630">30</a> by Raymond Camden
		posted on 2/20/2012 at 6:45 PM
		</div>
		<div class="comment_text"><p>All I can suggest is some debugging. If you console.log the values, what are you seeing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738631">31</a> by Jesse
		posted on 2/21/2012 at 9:12 PM
		</div>
		<div class="comment_text"><p>Awesome tutorials, all 3.  If you're looking for something to add in case there's a part 4, consider adding multiple feeds with a feed menu as the front page.  Such as "view news from source 1" and "view news from source 2."</p><p>I've tried to set a new main page and set load a url into the RSS variable based on which link the user clicks, but I'm obviously borking it somewhere, so now I'm selfishly asking for help by suggesting it as a blog post :)</p><p>Either way, thanks for the tips so far!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738632">32</a> by Vince
		posted on 2/22/2012 at 12:12 AM
		</div>
		<div class="comment_text"><p>At this point, debugging is showing that .ajax() is returning an [Object Element] on Android 2.3 and a [HTML Element] on Android 2.2, with the very same code. On Anroid 2.2, most of the elements in the result are empty (except PubDate), and I didn't manage to understand why.</p><p>I ended up using Google Feed API, which is much faster to execute, really easy to use and more reliable across platforms. The only drawback is that if the feed contains HTML, all "class" and "id" properties are removed. Here is the code to insert in your JS file, instead of your $.ajax() call:</p><p>var feed = new google.feeds.Feed("http//insert_your_feed_URL_here");<br>feed.setNumEntries(10);<br>feed.setResultFormat(google.feeds.Feed.JSON);</p><p>feed.load(function(result) {<br>	if (!result.error) { 		<br>		var entries = []; <br>		for (var i = 0; i &lt; result.feed.entries.length; i++) {<br>			var entry = result.feed.entries[i];<br>			// Do whatever you want with each entry<br>			entries.push(entry);<br>		}<br>		localStorage["entries"] = JSON.stringify(entries);<br>	} else {<br>		 // If nos results in the feed<br>	}	<br>});</p><p>and add this in index.html:</p><p>&lt;script type="text/javascript" src="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fjsapi%3Avbl28ruWWKTpp21RiJwKnS52-hc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/jsapi">http://www.google.com/jsapi</a>"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript"&gt;<br>  	google.load("feeds", "1");<br>&lt;/script&gt;</p><p>To get the "class" and "id" properties back, I tried switching to a mixed result (JSON + XML) using "google.feeds.Feed.MIXED_FORMAT" parameter. The idea is to set entry.content from JSON with the value of &lt;content:encoded&gt; from the XML part of the result, as XML stores the full HTML without any cleanup.</p><p>I tried adding the 2 following lines in the FOR loop above:</p><p>entry.content = result.xmlDocument.getElementsByTagName('item')[i].getElementsByTagName("content:encoded")[0].firstChild.nodeValue; // Get &lt;content:encoded&gt; content and replace entry.content with full HTML of the item<br>entry.xmlNode = null; // To prevent a circular JSON Object</p><p>But it throws an error. It seems that &lt;content:encoded&gt; is not found. Console log shows: "Uncaught TypeError: Cannot read property 'firstChild' of undefined"</p><p>If somebody finds a way to make this work, it would be fantastic. For the moment, I stick with this solution, as it gives really good results with both Android 2.2 and 2.3. Moreover, response time is much better (maybe my custom server providing the feed is not that fast).</p><p>@Raymond: Feel free to use this code for a Part 4 ;) Parts 1,2 and 3 helped me a lot to understand how to parse a feed and to use the results. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738634">33</a> by Raymond Camden
		posted on 2/22/2012 at 6:15 PM
		</div>
		<div class="comment_text"><p>@Jesse: It won't be available terribly soon, but I'm building something like this for my jQuery Mobile book. In fact, it's pretty much _exactly_ that. Technically you should buy the book, but all the code will be available via Github too.</p><p>@Vince: Didn't know about the Google Feed API. It looks like your getting JSON back - that's sweet. All things being considered, you almost _always_ want to work with JSON, not XML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738635">34</a> by Peter
		posted on 2/25/2012 at 5:17 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>It has been driving my crazy for 3 days and I need to express it here :D So your code works perfectly side alone. However, when I try to link it from another html file, it seems not to work. Meant that I already have my index.html, and your code is feed.html, I try to call feed.html in the list in index.html as below:</p><p>&lt;ul data-role="listview" data-inset="true"&gt;  <br>&lt;li&gt;&lt;a href="feed.html"&gt;&lt;img src="images/feed.png" width="25" height="22" class="ui-li-icon" title="Feed"&gt;Feed&lt;/a&gt;&lt;/li&gt;</p><p>When the link is triggered, it shows only the head and footer. Not the content at all.</p><p>Do you have any ideas on this issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738637">35</a> by Peter
		posted on 2/25/2012 at 5:25 PM
		</div>
		<div class="comment_text"><p>Hi again,</p><p>For the comment above, I have found a way to work around it.</p><p>The main.js needs to be included in the index.html not feed.html in order to make it work. I found an useful post that said jquery will create another 'blank' page with the used js and css in its parent.</p><p>It leads to another issue that, reanderentry function will not work to create a viewable frame for each entry.</p><p>Sorry to ask again, but how do you think about this? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738636">36</a> by Ivan Ilijasic
		posted on 2/25/2012 at 5:34 PM
		</div>
		<div class="comment_text"><p>Peter,</p><p>try using rel="external" on your link</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738638">37</a> by Peter
		posted on 2/25/2012 at 6:41 PM
		</div>
		<div class="comment_text"><p>@Ivan,</p><p>Thank for your comment, that works! Also found another way to do it is to disable ajax by data-ajax="false" :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738639">38</a> by Raymond Camden
		posted on 2/25/2012 at 9:19 PM
		</div>
		<div class="comment_text"><p>While that works, I'd do what you did first - include the JS code in the first page. Unlike a "web" JQM site, your PhoneGap apps always start off with a root URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738640">39</a> by Mike
		posted on 3/12/2012 at 12:58 AM
		</div>
		<div class="comment_text"><p>Hey Ray,<br>first off, this is awesome. Thanks for posting the RSS series.</p><p>Here's the question. I'm looking to present each RSS feed entry in its own container. Much like a pinterest board. <br>Second, i would also like to include several RSS Feeds under their own tab. How do i do that.</p><p>FYI&gt; I am mashing the Foundation HTML5 Responsive Framework with your RSS JQuery Mobile framework. So far so good, just looking for a bit more adaptation.</p><p>Thanks a million again. Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738642">40</a> by Raymond Camden
		posted on 3/12/2012 at 1:55 AM
		</div>
		<div class="comment_text"><p>The first question is easier to answer. Instead of a UL with LIs for each entry, just use &lt;p&gt;entry&lt;/p&gt; for each one. Or use a &lt;div&gt; that you style whatever way you want.</p><p>Tabs or another issue though. I haven't found a good "tab" solution for mobile. The other issue too is size. What do you o when you have 20 feeds? You don't want 20 tabs at the bottom.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738643">41</a> by Mike
		posted on 3/12/2012 at 2:15 AM
		</div>
		<div class="comment_text"><p>Here's my HTML markup. within the body tag. As of now, all the RSS entries pull in as a list. Can you explain the &lt;p&gt;entry&lt;/p&gt; so it works dynamically?  Again, thanks.</p><p>                        &lt;!-- Panel --&gt;<br>                        &lt;div class="row"&gt;<br>                            &lt;div class="twelve columns"&gt;<br>                                &lt;div class="panel"&gt;</p><p>                                    &lt;!-- RSS Feed --&gt;<br>                                    &lt;div data-role="content"&gt;  <br>                                        &lt;div id="status"&gt;&lt;/div&gt;</p><p>                                        &lt;ul id="linksList" data-role="listview" data-inset="true" data-split-icon="gear" data-split-theme="d"&gt;<br>                                    &lt;/div&gt;<br>                                    &lt;!-- RSS Feed --&gt;</p><p>                                &lt;/div&gt;<br>                            &lt;/div&gt;<br>                        &lt;/div&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738644">42</a> by Raymond Camden
		posted on 3/12/2012 at 2:18 AM
		</div>
		<div class="comment_text"><p>Well, instead of</p><p>s += '&lt;li&gt;&lt;a href="#contentPage" class="contentLink" data-entryid="'+i+'"&gt;' + v.title + '&lt;/a&gt;&lt;/li&gt;';</p><p>You would change the li to p. And instead of the ul id="linklist", you can change it to a simple div with an ID of whatever you want. Then you inject it with</p><p>$("#someid").html(s)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738646">43</a> by Mike
		posted on 3/12/2012 at 2:22 AM
		</div>
		<div class="comment_text"><p>i should clarify. There are only 5 or 6 feeds. Each with about 20 posts displayed at a time. The feeds are randomly updated throughout the day.</p><p>oh, one more thing. How would one display an img within the #mainpage list?</p><p>Also, the Foundation Framework works really well for tabs. Check it out.<br><a href="http://disq.us/url?url=http%3A%2F%2Ffoundation.zurb.com%2F%3AvzM5g9rSIB3nfZt_UK53nWvigzs&amp;cuid=3321886" rel="nofollow noopener" title="http://foundation.zurb.com/">http://foundation.zurb.com/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738647">44</a> by Raymond Camden
		posted on 3/12/2012 at 2:27 AM
		</div>
		<div class="comment_text"><p>re:pictures - This was discussed in the comments in part 2:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2011%2F12%2F19%2FPhoneGap-RSS-Reader--Part-2%3ALhWVngMAH1QSpPsmTVL_jtnSYyY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2011/12/19/PhoneGap-RSS-Reader--Part-2">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738648">45</a> by Mike
		posted on 3/12/2012 at 2:39 AM
		</div>
		<div class="comment_text"><p>Like This?</p><p>main.js &gt;</p><p>$(".contentLink").live("click", function() {<br>                       selectedEntry = $(this).data("entryid");<br>                       });</p><p>function renderEntries(entries) {<br>    var s = '';<br>    $.each(entries, function(i, v) {<br>           s += '&lt;p&gt;&lt;a href="#contentPage" class="contentLink" data-entryid="'+i+'"&gt;' + v.title + '&lt;/a&gt;&lt;/p&gt;';<br>           });<br>    $("#pinBoard").html(s)<br>    $("#pinBoard").listview("refresh");        <br>}</p><p>html &gt;</p><p>&lt;!-- Panel --&gt;<br>                        &lt;div class="row"&gt;<br>                            &lt;div class="twelve columns"&gt;<br>                                &lt;div class="panel"&gt;</p><p>                                    &lt;!-- RSS Feed --&gt;<br>                                    &lt;div data-role="content"&gt;  <br>                                    &lt;div id="status"&gt;&lt;/div&gt;<br>                                    &lt;div id="pinBoard"&gt;&lt;/div&gt;<br>                                    &lt;!-- RSS Feed --&gt;</p><p>                                &lt;/div&gt;<br>                            &lt;/div&gt;<br>                        &lt;/div&gt;<br>                        &lt;!-- Panel --&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738645">46</a> by Raymond Camden
		posted on 3/12/2012 at 2:53 AM
		</div>
		<div class="comment_text"><p>Yep, but get rid of this:</p><p>$("#pinBoard").listview("refresh");</p><p>That tells jQuery Mobile to refresh a list view, which you don't have anymore.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738650">47</a> by Mike
		posted on 3/12/2012 at 6:03 AM
		</div>
		<div class="comment_text"><p>Groovy. Thanks Raymond.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738649">48</a> by Joshua
		posted on 3/13/2012 at 3:58 PM
		</div>
		<div class="comment_text"><p>Great tutorials, I've been looking for exactly this for quite awhile.  However I'm working on a project that breaks for some reason when I add jQuery Mobile.  Would it be possible to implement this without jQuery Mobile?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738653">49</a> by Raymond Camden
		posted on 3/13/2012 at 5:49 PM
		</div>
		<div class="comment_text"><p>Absolutely. All jQuery Mobile does is make crap pretty. I don't mean that to belittle JQM, I love it, but at the end of the day, it's role is to help design the mobile friendly site. It's not required at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738655">50</a> by Joshua
		posted on 3/14/2012 at 3:04 AM
		</div>
		<div class="comment_text"><p>Raymond, thanks for the reply.  I tried removing jQuery Mobile from your example and it stops working, is there something that I'm missing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738654">51</a> by Raymond Camden
		posted on 3/14/2012 at 5:03 AM
		</div>
		<div class="comment_text"><p>Well, my code makes use of JQM to render the entries. You would need to modify that. You asked if this could be done w/o JQM, and of course, it can, but you can't just remove the library. You would need to modify some of the code too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738657">52</a> by Joshua
		posted on 3/14/2012 at 9:26 AM
		</div>
		<div class="comment_text"><p>Thanks again for the reply.  I'll try to figure it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738656">53</a> by Ihsan Canakoglu
		posted on 3/21/2012 at 6:10 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>First of all, this is awesome. Thanks for posting the RSS series.<br>I am newbee of jquery. I want to use your code in my application in that such a way:<br>I wrote an application using phonegap wizard. I want to make a link to your code via a button click such as:<br>&lt;li&gt;&lt;a href="#api-rss"&gt;RSS Feed&lt;/a&gt;&lt;/li&gt;<br>When i copy and paste your code in my div where id's is "api-rss", the code doesn't work because your code include "pageinit" function. How can i adapt your code into a div section? Please help me.<br>Best regards.<br>PS: Sorry my bad English, I hope you understand me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738659">54</a> by Raymond Camden
		posted on 3/22/2012 at 4:31 PM
		</div>
		<div class="comment_text"><p>The pageinit event is used by jQuery Mobile. I have no idea what framework, if any, your PhoneGap wizard uses, but if it isn't including it, then it won't work.</p><p>To be clear, jQuery Mobile is NOT required for this type of app. I used it to handle the display. You could use my logic in a non-jQuery Mobile app. The changes for that would be a bit too much for the comments section though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738658">55</a> by jason sovick
		posted on 4/6/2012 at 9:33 AM
		</div>
		<div class="comment_text"><p>Fantastic rss reader! Thank you so much.</p><p>When I try to use jquery mobile's theme roller with your page the theme does not work and the page instead just uses the stock themes that come with jquery mobile. Any advice on fixing that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738660">56</a> by Raymond Camden
		posted on 4/6/2012 at 4:53 PM
		</div>
		<div class="comment_text"><p>Did you download the right bits from themeroller? Can you share some of your code (via pastebin)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738663">57</a> by Raymond Camden
		posted on 4/6/2012 at 8:50 PM
		</div>
		<div class="comment_text"><p>Jason, I deleted your comments. All you need to do is post the URL, not any HTML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738664">58</a> by jason sovick
		posted on 4/6/2012 at 8:51 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Fraw.php%3Fi%3Dn6d0uV79%3AgJs6SP7ILi_5SVjk1ngwITeAono&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/raw.php?i=n6d0uV79">http://pastebin.com/raw.php...</a></p><p>Try that link, sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738667">59</a> by Raymond Camden
		posted on 4/7/2012 at 12:28 AM
		</div>
		<div class="comment_text"><p>Looks reasonable to me. Best I can suggest is double checking which swatch you modified and ensure you are using it. You can also open your stuff up in Chrome and use DevTools to inspect the DOM.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738666">60</a> by Dennis
		posted on 4/7/2012 at 12:54 AM
		</div>
		<div class="comment_text"><p>Hey Raymond,</p><p>I want to make a app who can read 2 RSS feeds.</p><p>This is my first RSS feed:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.hapdedag.nl%2Fdaghap-enschede%2Ffeed%2F%3AXihjbJ0x8kmZI9eTxxB4A0m8oKc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.hapdedag.nl/daghap-enschede/feed/">http://www.hapdedag.nl/dagh...</a></p><p>It is a newsfeed who displays all the news correctly with your RSS reader.</p><p>Secondly i got a Food Feed:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.hapdedag.nl%2Fexternal%2Fdaghap-enschede.xml%3A6q3OzHn6jTn6AomV-_U6JcEPb00&amp;cuid=3321886" rel="nofollow noopener" title="http://www.hapdedag.nl/external/daghap-enschede.xml">http://www.hapdedag.nl/exte...</a></p><p>I want to display the restaurant and if people click on it they see the dish of the day and some more information.</p><p>How do i get these 2 RSS Feeds working???<br>The first one, the news feed is working but I do not know how to fix the other RSS Feed correctly???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738669">61</a> by Raymond Camden
		posted on 4/7/2012 at 1:23 AM
		</div>
		<div class="comment_text"><p>I can think of a few different ways of doing it.</p><p>One would be to simply have your app start with a list of two items - one for RSS feed one, the other for the second.</p><p>Clicking that leads to the list of entries just for that feed.</p><p>Another way would be to get the RSS feeds for both and merge them together. That would require a bit more work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738668">62</a> by Dennis
		posted on 4/7/2012 at 1:27 AM
		</div>
		<div class="comment_text"><p>Yeah i want to make it simple.</p><p>But what is the best way to do it??<br>Make 2 JS files? Or 1 JS file with more functions??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738670">63</a> by Raymond Camden
		posted on 4/7/2012 at 1:28 AM
		</div>
		<div class="comment_text"><p>There is no reason to add additional JS file. You can add a new html page to show your 2 rss feeds and then have them link to the page that will show the proper detail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738672">64</a> by Dennis
		posted on 4/7/2012 at 1:33 AM
		</div>
		<div class="comment_text"><p>I know! I got a second HTML file but the 2 RSS files are totaly different.</p><p>Do i need to copy and rename all the variables and functions or can I skip some??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738671">65</a> by Raymond Camden
		posted on 4/7/2012 at 1:35 AM
		</div>
		<div class="comment_text"><p>Um well give it a shot man. At this point I've described the process in general. You need to take a stab at the work yourself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738676">66</a> by Dennis
		posted on 4/7/2012 at 7:42 PM
		</div>
		<div class="comment_text"><p>Got it working!</p><p>But i got only 1 problem.</p><p>It is a app for a meal of the day.</p><p>Now the app shows alle the meals from the whole week.</p><p>How do i fix this?</p><p>Looks at the feed:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.hapdedag.nl%2Fexternal%2Fdaghap-enschede.xml%3A6q3OzHn6jTn6AomV-_U6JcEPb00&amp;cuid=3321886" rel="nofollow noopener" title="http://www.hapdedag.nl/external/daghap-enschede.xml">http://www.hapdedag.nl/exte...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738674">67</a> by Raymond Camden
		posted on 4/7/2012 at 7:44 PM
		</div>
		<div class="comment_text"><p>You can write some code to compare the data in the XML to the current day. Do some quick searching for JavaScript Date functions. It should be easy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738673">68</a> by Dennis
		posted on 4/7/2012 at 7:51 PM
		</div>
		<div class="comment_text"><p>Hmmm... i am a beginner in javascript. <br>I need the getDate() function and compare with &lt;day&gt;7&lt;/day&gt; in XML...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738677">69</a> by Dennis
		posted on 4/7/2012 at 9:22 PM
		</div>
		<div class="comment_text"><p>function renderfoodEntries(foodentries) {<br>    var s = '';<br>    var d = new Date();</p><p>if(d.getDate == <a href="http://disq.us/url?url=http%3A%2F%2Fv.day%3AMKBshTTygomrIIzgsVOZQIlJGyM&amp;cuid=3321886" rel="nofollow noopener" title="v.day">v.day</a>){</p><p>    $.each(foodentries, function(i, v) {<br>        s += '&lt;li&gt;&lt;a href="#contentfoodPage" class="contentfoodLink" data-entryfoodid="'+i+'"&gt;' + <a href="http://disq.us/url?url=http%3A%2F%2Fv.restaurant%3AqcfRgm0LsAU13-1dPF1_wT1MKGk&amp;cuid=3321886" rel="nofollow noopener" title="v.restaurant">v.restaurant</a> + '&lt;/a&gt;&lt;/li&gt;';<br>    });<br>    $("#foodList").html(s);<br>    $("#foodList").listview("refresh");	<br>}<br>}</p><p>Something like this???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738678">70</a> by Raymond Camden
		posted on 4/7/2012 at 10:10 PM
		</div>
		<div class="comment_text"><p>Err, almost. You want the date comparison INSIDE the each loop, not outside it. Also, getDate is a method, so you would have getDate().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738679">71</a> by Dennis
		posted on 4/9/2012 at 12:32 PM
		</div>
		<div class="comment_text"><p>This function also not works:</p><p>function renderfoodEntries(foodentries) {<br>    var s = '';<br>    var d = new Date();<br>    var n = d.getDate();</p><p>    $.each(foodentries, function(i, v) {<br>    	if(n == <a href="http://disq.us/url?url=http%3A%2F%2Fv.day%3AMKBshTTygomrIIzgsVOZQIlJGyM&amp;cuid=3321886" rel="nofollow noopener" title="v.day">v.day</a>){<br>        s += '&lt;li&gt;&lt;a href="#contentfoodPage" class="contentfoodLink" data-entryfoodid="'+i+'"&gt;' + <a href="http://disq.us/url?url=http%3A%2F%2Fv.restaurant%3AqcfRgm0LsAU13-1dPF1_wT1MKGk&amp;cuid=3321886" rel="nofollow noopener" title="v.restaurant">v.restaurant</a> + '&lt;/a&gt;&lt;/li&gt;';<br>        }<br>    });<br>    $("#foodList").html(s);<br>    $("#foodList").listview("refresh");		<br>}</p><p>Do I need to put more into my JS???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738682">72</a> by Raymond Camden
		posted on 4/9/2012 at 4:30 PM
		</div>
		<div class="comment_text"><p>If, inside your loop, you console.log both n and <a href="http://disq.us/url?url=http%3A%2F%2Fv.day%3AMKBshTTygomrIIzgsVOZQIlJGyM&amp;cuid=3321886" rel="nofollow noopener" title="v.day">v.day</a>, what do you see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738680">73</a> by Dennis
		posted on 4/9/2012 at 8:28 PM
		</div>
		<div class="comment_text"><p>As I said I am a beginner in Javascript how do i console.log n and v?? console.log(v)???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738684">74</a> by Raymond Camden
		posted on 4/9/2012 at 8:31 PM
		</div>
		<div class="comment_text"><p>In webkit enabled browsers and Firefox+Firebug, you can use console.log("...") to send messages to the console. Lots of examples here:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.google.com%2Fsearch%3Frlz%3D1C1CHKZ_enUS439US439%26sourceid%3Dchrome%26ie%3DUTF-8%26q%3Dusing%2Bfirebug%2Bconsole%3AbxkeG-P4-vDpdX1KBsP8jwrfS8o&amp;cuid=3321886" rel="nofollow noopener" title="https://www.google.com/search?rlz=1C1CHKZ_enUS439US439&amp;sourceid=chrome&amp;ie=UTF-8&amp;q=using+firebug+console">https://www.google.com/sear...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738686">75</a> by Dennis
		posted on 4/12/2012 at 1:18 AM
		</div>
		<div class="comment_text"><p>Okay I know Firebug or the inspector from Google Chrome but not what line i have to put into the loop.</p><p>$.each(foodentries, function(i, v) {</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738687">76</a> by Raymond Camden
		posted on 4/12/2012 at 1:25 AM
		</div>
		<div class="comment_text"><p>I'm not quite sure what you mean. As I said, you want to use console to log the value of n, which is the date, and <a href="http://disq.us/url?url=http%3A%2F%2Fv.day%3AMKBshTTygomrIIzgsVOZQIlJGyM&amp;cuid=3321886" rel="nofollow noopener" title="v.day">v.day</a>. Compare them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738688">77</a> by Chuba Okanume
		posted on 4/14/2012 at 5:21 PM
		</div>
		<div class="comment_text"><p>A Phonegap and Jquery mobile application. The Background/splash image takes too long to transit to the main application and all html,css, JavaScript are packaged with the app. Any solution to reduce the splash screen to about 4 seconds before it transit to the main page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738689">78</a> by Raymond Camden
		posted on 4/14/2012 at 5:23 PM
		</div>
		<div class="comment_text"><p>"to about 4 seconds" - how long are you seeing? I only see a splash screen of a maybe 1-2 seconds.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738690">79</a> by Chuba Okanume
		posted on 4/14/2012 at 6:26 PM
		</div>
		<div class="comment_text"><p>the time varies sometimes over 20seconds , i dont know if it depends on the network, bt like i said previously all assets a loaded in the app</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738691">80</a> by Chuba Okanume
		posted on 4/14/2012 at 6:31 PM
		</div>
		<div class="comment_text"><p>Please any solution to this problem?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738692">81</a> by Raymond Camden
		posted on 4/14/2012 at 6:36 PM
		</div>
		<div class="comment_text"><p>Ohhhh - so your issue is possibly with the amount of time it takes to get and parse the RSS. So you are seeing a loaded page, but with no content, while it gets the RSS. True?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738695">82</a> by Raymond Camden
		posted on 4/14/2012 at 6:37 PM
		</div>
		<div class="comment_text"><p>In regards to your last comment Chuba, I respond when I can. It is Saturday so may get not quick responses.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738694">83</a> by Chuba Okanume
		posted on 4/14/2012 at 6:51 PM
		</div>
		<div class="comment_text"><p>Thanks for the reply. its Json. am seeing the splash screen for too long Before the main page loads even wen it fetches  nothing from the internet</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738696">84</a> by Raymond Camden
		posted on 4/14/2012 at 6:54 PM
		</div>
		<div class="comment_text"><p>So wait - if you try a new PhoneGap project with no code and just simple html, like &lt;h1&gt;Hello&lt;/h1&gt;, are you seeing a long amount of time for _that_ to render?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738693">85</a> by Chuba Okanume
		posted on 4/14/2012 at 7:25 PM
		</div>
		<div class="comment_text"><p>its faster</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738698">86</a> by Raymond Camden
		posted on 4/14/2012 at 7:27 PM
		</div>
		<div class="comment_text"><p>So yeah then - I think your issue is the network call to get and load the RSS. So maybe the solution is to make it more obvious that it is loading crap when the page is shown?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738697">87</a> by Chuba Okanume
		posted on 4/14/2012 at 8:11 PM
		</div>
		<div class="comment_text"><p>wow does it have to take that long to load files that is available in the deployed app already? ..cuz it doesnt connect to the internet</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738699">88</a> by Raymond Camden
		posted on 4/14/2012 at 8:48 PM
		</div>
		<div class="comment_text"><p>Err, well now wait. As you said, when you did a simple example with no remote calls, it loaded faster. Right? When you use my code, which has to use the network to fetch the RSS, it was slower.</p><p>That is -expected-.</p><p>What may be the issue though is that the app is not being vocal about what is doing when it loads up. We could improve that.</p><p>I can say in my testing it ran fast, but obviously, it depends on the RSS feed you are trying to load, network conditions, etc.</p><p>Any app that needs the network for it's data is going to have that "problem" - there isn't much you can do about it. (Outside of what I said above - ensuring there is good user feedback and you can employ caching too).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738701">89</a> by Chuba Okanume
		posted on 4/14/2012 at 9:59 PM
		</div>
		<div class="comment_text"><p>k Thanks appreciate</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738700">90</a> by Grimm
		posted on 4/24/2012 at 5:23 PM
		</div>
		<div class="comment_text"><p>@STEFAN:</p><p>You need only this:</p><p>content:$(v).find("[nodeName='content:encoded']").text()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738702">91</a> by Grimm
		posted on 4/24/2012 at 5:25 PM
		</div>
		<div class="comment_text"><p>But what i am not understand is why all my &lt;p&gt; Tags do nothing in my Application when i get the full Post via content:$(v).find("[nodeName='content:encoded']").text()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738705">92</a> by Grimm
		posted on 4/27/2012 at 3:52 PM
		</div>
		<div class="comment_text"><p>Nice, now i got everthing working quite well.</p><p>Only one Question:<br>How can i put 	$.mobile.pageLoading(); and $.mobile.pageLoading( true );<br>into this script ?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738704">93</a> by Raymond Camden
		posted on 4/27/2012 at 6:05 PM
		</div>
		<div class="comment_text"><p>Um... put it in? Just do it. :) Maybe you need to clarify more what you mean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738703">94</a> by Jroen
		posted on 5/5/2012 at 5:24 PM
		</div>
		<div class="comment_text"><p>Hey Raymond! I've been using your tutorial for a phonegap app I'm building and it's extremely helpful. Although I already have written android apps in Java, apparently some employers want experience with Phonegap. I've been using your tuts to hop on this bandwagon and with your help I'm almost there.</p><p>Cheers!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738708">95</a> by Jroen
		posted on 5/5/2012 at 5:37 PM
		</div>
		<div class="comment_text"><p>I see you have gravatars enabled. Hi there!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738707">96</a> by Raymond Camden
		posted on 5/5/2012 at 5:47 PM
		</div>
		<div class="comment_text"><p>Glad you like them. If you have any suggestions for other tutorials, let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738706">97</a> by Grimm
		posted on 5/5/2012 at 5:55 PM
		</div>
		<div class="comment_text"><p>Hello Raymond,</p><p>because of my last question. <br>All what i want to do is to add a loading cycle for the time the rss news will be synct.<br>I tryed a lot right now with $.mobile.pageLoading(); and $.mobile.pageLoading( true );<br>but with no results :(</p><p>Would be very nice if you can give me a tip :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738709">98</a> by Raymond Camden
		posted on 5/5/2012 at 6:25 PM
		</div>
		<div class="comment_text"><p>I'd need to see a bit of the code. Basically, you would call pageLoading _before_ the get() call and clear it _after_ it gets loaded.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738710">99</a> by Jroen
		posted on 5/7/2012 at 1:04 AM
		</div>
		<div class="comment_text"><p>Hey Raymond,</p><p>Although I'm getting further and further with my app, it doesn't function properly when I click a feeditem. It loads mainPage but it doesn't show the feeditem or comes up with gibberish.</p><p>I've followed your tutorial step by step (part 1- 3) but I can't find out what I'm doing wrong. If I set up the app with the quickstart guide from phonegap and use your tutorial should it just 'work' or am I still missing something? Could I send you my eclipse project or is that too much to ask?</p><p>Cheers!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738711">100</a> by Raymond Camden
		posted on 5/7/2012 at 1:20 AM
		</div>
		<div class="comment_text"><p>Could be anything. But sure - go ahead and send your project, I'll try importing it. No promises on how quickly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738713">101</a> by Jroen
		posted on 5/7/2012 at 1:40 AM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>nevermind haha. I accidentally added the contentPage div two times to index.html. It loads the feeditem perfect but loads a blank contentPage immediately after it has been loaded.</p><p>Above comment can be removed if you want =)</p><p>Cheers!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738714">102</a> by Raymond Camden
		posted on 5/7/2012 at 2:34 PM
		</div>
		<div class="comment_text"><p>I like leaving mistakes like that around - you won't be the first to make it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738717">103</a> by Jroen
		posted on 5/7/2012 at 6:07 PM
		</div>
		<div class="comment_text"><p>Hey Ramond,</p><p>The next thing I want to do is to show a twitterfeed in my app. I guess I can use this script pretty much in the same way for this, amiright?</p><p>I´ll be using this (for example) <a href="http://disq.us/url?url=http%3A%2F%2Fsearch.twitter.com%2Fsearch.rss%3Fq%3Dcfjedimaster%3AdrFX565jMtzqZPT43vyFcgJ922E&amp;cuid=3321886" rel="nofollow noopener" title="http://search.twitter.com/search.rss?q=cfjedimaster">http://search.twitter.com/s...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738716">104</a> by Raymond Camden
		posted on 5/7/2012 at 6:12 PM
		</div>
		<div class="comment_text"><p>Sure yeah - Twitter has a RSS format. If I'm remembering wrong, then you just have to adjust for the different XML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738715">105</a> by G-Man
		posted on 5/15/2012 at 8:37 AM
		</div>
		<div class="comment_text"><p>What an awesome resource!  Thanks so much for posting this.</p><p>For my app, I tweaked the code in the main.js file to allow the "Read Entry on Site" to use the Childbrowser plugin in PhoneGap so I can view my blog without launching the web browser, plus I'm stuck using the WebView preference for an iFrame on one of my pages to keep it from wigging out.  Since WebView is turned on, sending links to the web browser has not been possible... or at least I don't know how to make it happen.  (Rookie at Javascript but learning.)</p><p>Anyway, here's my code for the childBrowser plugin:</p><p>contentHTML += '&lt;p/&gt;&lt;a href="#" onclick=window.plugins.childBrowser.showWebPage("'+entries[selectedEntry].link + '")&gt;Read Entry on Site&lt;/a&gt;';</p><p>I would like to use the Childbrowser plugin for other links that show up in my feed.  Can you tell me how to make this happen?</p><p>Thanks in advance - G</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738718">106</a> by Raymond Camden
		posted on 5/15/2012 at 3:27 PM
		</div>
		<div class="comment_text"><p>You will want to ensure you trap any click events in the list of feed data. That is possible via jQuery (let me know if you need help with that).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738719">107</a> by Alex Meers
		posted on 5/17/2012 at 10:37 PM
		</div>
		<div class="comment_text"><p>Let me start by saying that this tutorial has been great. It's exactly what I've been looking for to complete an app.</p><p>There is one interesting problem that I have. Peter in one of the earlier comments said that he was having trouble putting the feed on a different page than index.html. I put the main.js reference in my index file and the feed appears on the page (latest.html), but the links don't do anything when they are clicked.</p><p>I tried adding the rel="external" based on another comment, but that didn't work either. Do you have any insight into this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738721">108</a> by Raymond Camden
		posted on 5/18/2012 at 4:57 PM
		</div>
		<div class="comment_text"><p>By links do you mean the titles or do you mean the "Read Entry on Site" link?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738720">109</a> by Alex Meers
		posted on 5/21/2012 at 5:35 PM
		</div>
		<div class="comment_text"><p>Whenever I click the titles. It will light up but then it won't go anywhere. I put a console.log into the script to figure out if it fired. It knows when it's clicked but won't open the page with the text and the link that says "Read Entry on Page".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738722">110</a> by Raymond Camden
		posted on 5/21/2012 at 6:35 PM
		</div>
		<div class="comment_text"><p>Not sure then- can you post your code to pastebin please?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738723">111</a> by Alex Meers
		posted on 5/21/2012 at 8:42 PM
		</div>
		<div class="comment_text"><p>I actually finally diagnosed the problem. It's the data-role="pages" attribute. I tried it on my subpage without referencing your code and that doesn't work either, so that would explain why nothing popped up. I'm going to work with this today.</p><p>It's not your code -- it's my own lack of knowledge with JQuery and PhoneGap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738724">112</a> by Raymond Camden
		posted on 5/21/2012 at 8:43 PM
		</div>
		<div class="comment_text"><p>Ok cool- just glad you got things working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738725">113</a> by G-Man
		posted on 5/23/2012 at 1:55 AM
		</div>
		<div class="comment_text"><p>I do need help.  This is in reference to my post on 05-14-2012 at 11:37 PM.  I replied via email, but don't think that worked.</p><p>My content is coming from blogger and using feed burner to convert the RSS to RSS2.  When my feed comes to my app, any text or pictures that have links tied to them open up in WebView on my iOS device and I don't have a header with a back button to get back to the previous screen.  I have to run the app with WebView enabled as I have an iFrame on one of my #pages that launches Safari when the app loads and enabling WebView is the only way I can prevent that from happening.</p><p>Here's my feed address: <a href="http://disq.us/url?url=http%3A%2F%2Ffeeds.feedburner.com%2Fevscerevolution%3Acs8kpLtx-5R5yqU5o72MkmQcM3E&amp;cuid=3321886" rel="nofollow noopener" title="http://feeds.feedburner.com/evscerevolution">http://feeds.feedburner.com...</a> so you can test.</p><p>All my code is on GitHub at <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fjjgleim%2FeRev-RSS-Feed-Help%3AtXXzSL6GcJlVKfQ9x9JxdtaFE08&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/jjgleim/eRev-RSS-Feed-Help">https://github.com/jjgleim/...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738726">114</a> by A-z
		posted on 5/23/2012 at 1:01 PM
		</div>
		<div class="comment_text"><p>Hello Raymond,</p><p>first of all, thanks a lot for the tutorial, it was really a big help!<br>I am trying to get the &lt;media:thumbnail&gt; from my RSS-Feed in the App, but unfortunately none of my pitifully attempts has been successful :/<br>Could you give me some hint how this could work, please?</p><p>Thanks a lot in advance!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738729">115</a> by Raymond Camden
		posted on 5/23/2012 at 6:14 PM
		</div>
		<div class="comment_text"><p>@G-Man: I think I saw your email - I just haven't been able to go through my queue. Hopefully another person can possibly help out too since it is on Github. I'll try if I can get the time - just not sure I will soon.</p><p>@A-Z: You may need to ensure your JS code handles it right -  maybe:</p><p>title:$(v).find("media:thumbnail").text(),</p><p>but I don't know if .text() is right for you - if that XML element has subkeys you will need to use a different way to get to it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738730">116</a> by A-z
		posted on 5/23/2012 at 7:17 PM
		</div>
		<div class="comment_text"><p>Hello Raymond, and thank you for your rapid reply!<br>The xml is simple, looks like this:<br>		&lt;item&gt;<br>			&lt;title&gt; &lt;/title&gt;<br>			&lt;link&gt; &lt;/link&gt;<br>			&lt;description&gt; &lt;/description&gt;<br>			&lt;pubDate&gt; &lt;/pubDate&gt;<br>			&lt;media:thumbnail height="" url="" width="" /&gt;<br>		&lt;/item&gt;</p><p>and in the .js I tried something like this <br>media:$(v).find("media:thumbnail").text(),<br>or this <br>media:$(v).find("media:thumbnail").attr("url"),</p><p>The first one causes absolutely nothing, the second one "undefined"… ?<br>It is quite frustrating to be honest, because actually it should work! :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738731">117</a> by Raymond Camden
		posted on 5/23/2012 at 7:26 PM
		</div>
		<div class="comment_text"><p>Try this:</p><p>var ray = $(v).find("media:thumbnail");<br>console.log(ray);</p><p>See if it shows something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738727">118</a> by A-z
		posted on 5/23/2012 at 7:59 PM
		</div>
		<div class="comment_text"><p>Ok, I am not sure if I am putting it on the right place, but there is no reaction when it comes after the entries.push(entry); and as soon as I put it up, no matter where in the $("#mainPage").live("pageinit", function() {… or above or under it, then neither my list is displayed…<br>Here the modified code, perhaps you see something I don't?</p><p>...</p><p>function renderEntries(entries) {</p><p>var s = '';<br>$.each(entries, function(i, v) {<br>s += '&lt;li&gt;&lt;a href="#contentPage" class="contentLink" data-entryid="'+i+'"&gt;' + '&lt;div class="navtitel"&gt;' + v.title + '&lt;/div&gt;' + '&lt;div class="small-nav"&gt;'+ v.pubDate + '&lt;/div&gt;' + '&lt;/a&gt;&lt;/li&gt;';<br>});<br>$("#linksList").html(s);<br>$("#linksList").listview("refresh");</p><p>}</p><p>//Listen for main page<br>$("#mainPage").live("pageinit", function() {</p><p>    $.ajax({<br>        url:RSS,<br>        success:function(res,code) {<br>            entries = [];<br>            var xml = $(res);<br>            var items = xml.find("item");<br>            $.each(items, function(i, v) {<br>                entry = {<br>                    title:$(v).find("title").text(),<br>                    link:$(v).find("link").text(),<br>                    pubDate:$(v).find("pubDate").text(),</p><p>                    description:$.trim($(v).find("description").text()),</p><p>                };</p><p>                entries.push(entry);<br>                entries.reverse();<br>                var ray = $(v).find("media:thumbnail");<br>                console.log(ray);<br>            });</p><p>            //store entries<br>            localStorage["entries"] = JSON.stringify(entries);<br>            renderEntries(entries);<br>        },</p><p>        error:function(jqXHR,status,error) {<br>            //try to use cache<br>            if(localStorage["entries"]) {<br>                $("#status").html("Using cached version...");<br>                entries = JSON.parse(localStorage["entries"])<br>                renderEntries(entries);                <br>            } else {<br>                $("#status").html("Sorry, we are unable to get the RSS and there is no cache.");<br>            }<br>        }<br>    });</p><p>});</p><p>$("#mainPage").live("pagebeforeshow", function(event,data) {<br>    if(data.prevPage.length) {<br>        $("h1", data.prevPage).text("");<br>        $("#entryText", data.prevPage).html("");<br>    };<br>});</p><p>//Listen for the content page to load<br>$("#contentPage").live("pageshow", function(prepage) {<br>    //Set the title<br>    $("h1", this).text(entries[selectedEntry].title);<br>    var contentHTML = "";<br>    contentHTML += '&lt;div class="bg-txt-s"&gt;';<br>    contentHTML += '&lt;h3&gt;'+ entries[selectedEntry].title + '&lt;/h3&gt;';<br>    contentHTML += entries[selectedEntry].ray;<br>    contentHTML += '&lt;div class="small"&gt;' + entries[selectedEntry].pubDate + '&lt;/div&gt;';<br>    contentHTML += entries[selectedEntry].description;</p><p>...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738733">119</a> by Raymond Camden
		posted on 5/23/2012 at 8:12 PM
		</div>
		<div class="comment_text"><p>In the future, please use pastebin for big code blocks. Makes it easier to read then in here. You need to put it in the EACH block, ie, after this:</p><p>$.each(items, function(i, v) {</p><p>The line above is run for each of the items in the XML. Now - another thing to consider is that not all of your items may have a thumbnail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738732">120</a> by A-z
		posted on 5/23/2012 at 8:52 PM
		</div>
		<div class="comment_text"><p>Oh sorry, I didn't think about the readableness of the code, my mistake!</p><p>Ok, tried it the other way, still not working unfortunately… I am sure that every entry has got a thumbnail, here the whole construct of the xml and the url in &lt;media:thumbnail url="" &gt; is always filled with an image url:<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2F1ysXTsiZ%3AwUWTKMvLYvurJn0ZAxvn8FWDzZc&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/1ysXTsiZ">http://pastebin.com/1ysXTsiZ</a><br>And just to make sure, I made not more failures, here also the code of my main.js:<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FNPKuqe0e%3AKl0jqo3s-WEsI6GCji-O1GtRv0k&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/NPKuqe0e">http://pastebin.com/NPKuqe0e</a></p><p>Thanks a lot for your effort!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738728">121</a> by A-z
		posted on 5/23/2012 at 9:40 PM
		</div>
		<div class="comment_text"><p>Ok, me again ;)</p><p>I tried changing the &lt;media:thumbnail&gt; in my .rss to &lt;media&gt; and in the main.js I added ray:$(v).find("media").attr("url"),<br>and now at least the url of the image is displayed! That could been seen as a little progress perhaps, yippie! :)<br>Sorry, I am an absolute newbie in this field, this is my first app at all...<br>Do you think I should rather try on this way with the &lt;media&gt; and the .attr("url"), and if so, what would be the wisest way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738735">122</a> by A-z
		posted on 5/23/2012 at 10:00 PM
		</div>
		<div class="comment_text"><p>It works! I just have to put<br>    contentHTML += '&lt;img src="';<br>    contentHTML += entries[selectedEntry].ray;<br>    contentHTML += ' "/&gt;';<br>in my main.js, and the pictures are there!<br>Thanks for your help! :)))</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738738">123</a> by Raymond Camden
		posted on 5/23/2012 at 11:34 PM
		</div>
		<div class="comment_text"><p>Glad you got it. One thing I'd recommend - to everyone - is to consider the Google Feed API. It allows you to parse XML and return a simple array of objects. It is MUCH easier than working with XML. It even includes a JSON/P service. For the jQuery Mobile book I wrote, I did a RSS example and made use of that instead. A heck of a lot cleaner.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738737">124</a> by A-z
		posted on 5/24/2012 at 11:13 AM
		</div>
		<div class="comment_text"><p>Good morning Raymond, one last question, I hope:<br>do you see any possibility to use a feed which doesn't end with .rss in the app? Like a Yahoo Pipes feed (ends with ;_render=rss") or a Flickr feed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738740">125</a> by Raymond Camden
		posted on 5/24/2012 at 6:53 PM
		</div>
		<div class="comment_text"><p>It should not matter what the extension is. The JS code requests the URL and uses it. It should just work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738742">126</a> by Alex Meers
		posted on 5/24/2012 at 9:49 PM
		</div>
		<div class="comment_text"><p>Hey Raymond,</p><p>Alright, I got the RSS feed working exactly as I wanted except for one thing. When they tap the entry, I want it to show everything in the description tag. For example, if you look at the source code of my feed ( <a href="http://disq.us/url?url=http%3A%2F%2Fwww.lambdachi.org%2Fcandc-category%2Fcandc-rss%2Ffeed%3ADZ15ekdYE96jXgXvv9Klg3bWhtM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.lambdachi.org/candc-category/candc-rss/feed">http://www.lambdachi.org/ca...</a> ), the description tag has the text for the entire post. However, in Firefox and in your RSS feed, it shows "Continue Reading". Any ideas on how to show the full tag?</p><p>-Sandy Meers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738743">127</a> by Raymond Camden
		posted on 5/24/2012 at 11:53 PM
		</div>
		<div class="comment_text"><p>When I view that RSS, it says continue reading too. That's the content of the RSS feed. So I'm a bit confused. If you want the entire post, the RSS data has to include the entire post. (You can build another way to get the full post of course.)</p><p>Look at your blog provider. (I say "your" because I assume this is your feed.) Some blogs provide a 'short' RSS feed and some provide a full entry version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738741">128</a> by Alex Meers
		posted on 5/29/2012 at 6:42 PM
		</div>
		<div class="comment_text"><p>Figured it out finally! I guess a long weekend finally knocked some sense into me...</p><p>I needed to use my RSS2 feed (/feeds/rss2), and that generated the content in the source code. I modified your Ajax call as well. Where you looked for  description:$.trim($(v).find("description").text()), I changed the part in quotes to "encoded". RSS adds a &lt;content:encoded&gt; tag around the content and looking for just encoded gave me the near-close result that I was looking for.</p><p>Again, thanks for all of your help and for the great tutorial!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738744">129</a> by Raymond Camden
		posted on 5/29/2012 at 6:43 PM
		</div>
		<div class="comment_text"><p>Cool. I strongly recommend the Google Feed API still though. I probably need to do a follow up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738745">130</a> by Jroen
		posted on 6/5/2012 at 6:02 PM
		</div>
		<div class="comment_text"><p>Hey Raymond,</p><p>With your help my app is running superb. With a lot of tweaking it is now showing the thumbnail and title of a the items (directly from my custom Wordpress feed) on mainPage and featured images, attached images (if any), title and content on page blogContent.</p><p>I came up with another idea. What I'd love to have is more pages which only show the items in certain categories (my feed now also shows the category in which the item was posted). Could you help me or point me in the good direction?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738812">131</a> by Raymond Camden
		posted on 6/5/2012 at 6:06 PM
		</div>
		<div class="comment_text"><p>There are a few ways to handle this (well, probably many!), here are some basic ideas.</p><p>1) How do you do more pages? That is up to the UI framework you use. You could use tabs at the bottom of the screen for categories - but that would be a bit limited width wise. You could have a button that linked to a page that then listed categories. Again, there's different ways of doing this.</p><p>2) And of course -your category list is dynamic. Your blog may add the "Raymond Camden" category one day. Do you try to support that or do you get by with hard coded categories? You could simply use the categories from the RSS feed, but that's going to be dependent on your current content. If my last 10 entries are JUST on ColdFusion, then you wouldn't know that I have a jQuery category as well. And heck - even if you cache - people remove categories too. I did in my last redesign.</p><p>3) Probably the easiest aspect would be the filtering. Just use XPath. Of course, most blog engines support category specific RSS feeds, so you would simply switch to that URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738808">132</a> by Jroen
		posted on 6/5/2012 at 6:30 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>I'm using JqueryMobile. I already ran into the problem of limited width. I fixed it with using custom buttons in custom CSS without any JQMobile.</p><p>I want three extra pages. The first one, (home (or mainpage)) which show all the items in my feed. The second, third and fourth need to show items which are in the main feed but are rarely posted but interesting enough to have an own page (these categories have a lot of views compared to other categories). My problem is not the feed but more the javascript itself, I don't know where to start. Could you give me a simple example of javascript (main.js) where one page shows category X and one page shows category Y? I'll be able to work it out from there. At the moment I don't know how to let certain pages load certain items of the feed.</p><p>Thanks :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738811">133</a> by Raymond Camden
		posted on 6/5/2012 at 7:47 PM
		</div>
		<div class="comment_text"><p>Well, I can talk about it at a high level.</p><p>My code works by listening to pageinit for mainPage. Basically, "When this page is created, do this." When you add other pages, you can add your own code for them. You could- if you wanted -almost cut and paste my existing code and simply use a different RSS url (the category specific one).</p><p>I hope that helps. If I feel the code makes sense for a blog entry, I will write it, but right now, I don't think I will. As I mentioned, I think my next entry will be an update to the latest PG code base, latest JQM code base, and make use of the simpler Google Feeds API.</p><p>I actually did an example of this for my jQuery Mobile book. This code is open source here:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfjedimaster%2FjQuery-Mobile-Book%2Ftree%2Fmaster%2Fc13%3ANbxM-AzX8ZMAQTW9z3QSJSDWA3s&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfjedimaster/jQuery-Mobile-Book/tree/master/c13">https://github.com/cfjedima...</a></p><p>Of course, for a detailed explanation you need to buy the book:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.amazon.com%2Fdp%2F1849517266%2Fref%3Das_li_qf_sp_asin_til%3Ftag%3Draymondcamden-20%26camp%3D14573%26creative%3D327641%26linkCode%3Das1%26creativeASIN%3D1849517266%26adid%3D0R4RAMAP3ZK1MRNBBGPK%3AQZ99JM_ueLnao6k68IBegvgKjZU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.amazon.com/dp/1849517266/ref=as_li_qf_sp_asin_til?tag=raymondcamden-20&amp;camp=14573&amp;creative=327641&amp;linkCode=as1&amp;creativeASIN=1849517266&amp;adid=0R4RAMAP3ZK1MRNBBGPK">http://www.amazon.com/dp/18...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738809">134</a> by A-z
		posted on 6/11/2012 at 6:49 PM
		</div>
		<div class="comment_text"><p>Hey Ray, I have nearly finished my first app, but now I am running against a wall… I want to output the entries in reverse order in the list, but when I try entries.reverse(); it just makes a mess of the order. Any idea?<br>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738810">135</a> by Raymond Camden
		posted on 6/11/2012 at 6:51 PM
		</div>
		<div class="comment_text"><p>You got me there. Where are you doing the reverse? Can you post to pastebin your code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738815">136</a> by A-z
		posted on 6/12/2012 at 10:38 AM
		</div>
		<div class="comment_text"><p>I put it directly after the entries.push(entry), here the code:<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FEbMRYtFh%3AZJCNjGCNFqBeM9zzOo0x2sCuodw&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/EbMRYtFh">http://pastebin.com/EbMRYtFh</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738822">137</a> by Raymond Camden
		posted on 6/12/2012 at 3:34 PM
		</div>
		<div class="comment_text"><p>You put the reverse call in the each() block. That means your calling it every time you add an item. You need to put it immediately _after_ the each block.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738816">138</a> by A-z
		posted on 6/12/2012 at 4:23 PM
		</div>
		<div class="comment_text"><p>I could have sworn that I already tried it out at that position, but then I probably had forgotton the semicolon or made some other ridiculous little neglect...<br>Thanks a lot, of course it works! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738826">139</a> by Lynx
		posted on 6/12/2012 at 5:30 PM
		</div>
		<div class="comment_text"><p>Hey Raymond,I am a beginner with phonegap and jquery,and I tried your awesome app but it couldn't work,it just show the title and "Sorry, we are unable to get the RSS and there is no cache."<br>Here are some questions:why there are no 	<br>"&lt;script type="text/javascript" src="cordova-1.8.0.js"&gt;&lt;/script&gt;&lt;script type="text/javascript"&gt;"<br>in the index.html file?<br>why can't the program work properly for me?Does it because I missed some setting in elipse or jquery?Thanks for your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738824">140</a> by Raymond Camden
		posted on 6/12/2012 at 5:33 PM
		</div>
		<div class="comment_text"><p>1) why there are no    <br>"&lt;script type="text/javascript" src="cordova-1.8.0.js"&gt;</p><p>Almost always you need the Cordova JS file to speak to the hardware. But this application doesn't need it. It actually doesn't do anything device specific at all.</p><p>2) "why can't the program work properly for me"</p><p>No idea. You will need to do some debugging on your side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738827">141</a> by Lynx
		posted on 6/12/2012 at 6:08 PM
		</div>
		<div class="comment_text"><p>Sorry to bother you again.I open the main.js with system editor and it  says in line 11<br>$(".contentLink").live("click", function()<br>"Object Expected"<br>Please help me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738813">142</a> by Lynx
		posted on 6/12/2012 at 6:19 PM
		</div>
		<div class="comment_text"><p>By the way,I used Android 2.2 version</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738832">143</a> by Raymond Camden
		posted on 6/12/2012 at 6:19 PM
		</div>
		<div class="comment_text"><p>You get that error where? You said your system error, but are you testing on the mobile device?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738821">144</a> by Lynx
		posted on 6/12/2012 at 6:28 PM
		</div>
		<div class="comment_text"><p>I ran it on the Android Visual Device 2.2,and it just showed the titles...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738819">145</a> by Raymond Camden
		posted on 6/12/2012 at 6:36 PM
		</div>
		<div class="comment_text"><p>So the issue is with clicking to view the entries then?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738825">146</a> by Lynx
		posted on 6/12/2012 at 6:45 PM
		</div>
		<div class="comment_text"><p>It only shows "ColdFusion Jedi" and "SimpleBlog by Raymond Camden",there are nothing for me to click...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738814">147</a> by Raymond Camden
		posted on 6/12/2012 at 6:48 PM
		</div>
		<div class="comment_text"><p>So what do you see in console? Please read this blog entry:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F5%2F10%2FSetting-up-console-debugging-for-PhoneGap-and-Android%3AsRPh9ZRNPozXgktLldsvy4u8VlM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/5/10/Setting-up-console-debugging-for-PhoneGap-and-Android">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738830">148</a> by Lynx
		posted on 6/12/2012 at 7:09 PM
		</div>
		<div class="comment_text"><p>After I ran the Console told this:<br>ActivityManager: Starting: Intent { act=android.intent.action.MAIN cat=[android.intent.category.LAUNCHER] cmp=com.camden.rssdemo/.RSSDemoActivity }<br>And I just read your blog and filter the "Web Console" and "Console",nothing there</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738820">149</a> by Raymond Camden
		posted on 6/12/2012 at 8:39 PM
		</div>
		<div class="comment_text"><p>Nothing stands out to me - at this point - I'd have to say I don't know what to tell you - and to go further would require some one on one - which would be a paid engagement. Sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738828">150</a> by Lynx
		posted on 6/13/2012 at 6:01 AM
		</div>
		<div class="comment_text"><p>That's ok,thank you all the same,I'll try it myself:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738823">151</a> by Lynx
		posted on 6/15/2012 at 5:54 AM
		</div>
		<div class="comment_text"><p>Hi,it's me again:)I got it worked and thank you so very much.<br>By the way,the jquery-moblie-1.0 has a "flash back" problem,that is when clicking a link it will flash back to the mainpage ,then go to the next page,after update to jquery-moblie-1.1,this problem is solved,hope someone would find this useful:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738818">152</a> by GUNNER
		posted on 6/18/2012 at 3:46 PM
		</div>
		<div class="comment_text"><p>Hey Raymond, thanks you for sharing this app for us.But this app couldn't work not only on the emulator but also my device.they all show the title and "Sorry, we are unable to get the RSS and there is no cache."<br>    But when I put the .xml file in to the project file and open it locally, it works fine.<br>    I wonder it may be the cross-domain problem,can you give me some suggests,thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738831">153</a> by Raymond Camden
		posted on 6/19/2012 at 5:05 AM
		</div>
		<div class="comment_text"><p>Have you tried adding the RSS URL to the whitelist?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738829">154</a> by GUNNER
		posted on 6/19/2012 at 9:01 AM
		</div>
		<div class="comment_text"><p>Thanks a lot.It really works!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738836">155</a> by Sam
		posted on 6/21/2012 at 8:38 PM
		</div>
		<div class="comment_text"><p>hi,Ray.I have tested your code in eclipse platform for two days,unfortunately,it did not work.My android version is android 2.2?when I load code,it just displayed "SimpleBlog by Raymond Camden  Home" .I am new to js,so I do not know how to  debug that code.Can you give me some suggestions? thanks !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738837">156</a> by Raymond Camden
		posted on 6/21/2012 at 8:46 PM
		</div>
		<div class="comment_text"><p>Sam,</p><p>This is a topic that is quite important to me. As I've blogged more on client side development over the past few years, I've seen a growing number of people like yourself. (That sounds a bit derogatory - please do not take it as such.) There is a serious lack of knowledge in regards to how to debug issues with JavaScript applications and mobile apps as well. Because of this I've begun work on a presentation to cover the basics. The topic is too much for this blog post, but it is sorely needed. For now what I'm recommending is some basic Googling on your part in terms of debugging JavaScript. There -is- a lot of content out there. In the meantime, I can say that when my presentation is done (I'm giving it to two places next month), I'll be giving it online as well so please subscribe to my blog for updates.</p><p>I feel like I'm letting you down here a bit - but at the same time - I feel like it is just too much for this entry now and it makes sense to address it more fully in a place of it's own.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738838">157</a> by Sam
		posted on 6/21/2012 at 9:01 PM
		</div>
		<div class="comment_text"><p>Ray,thanks for replying ,I will learn to debug as soon as possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738841">158</a> by Sam
		posted on 6/23/2012 at 7:30 AM
		</div>
		<div class="comment_text"><p>hi,Ray,it works,thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738843">159</a> by Alex
		posted on 6/28/2012 at 10:15 PM
		</div>
		<div class="comment_text"><p>Hi, I hava some problem with the attached file.<br>I think it miss some important files. So Can send an E-mail for me.(yjjxwx@qq.com or yjjxwx@sina.com)<br>I am a Chinese boy, study in a collage.<br>I am very poor in English, many information what I don't know how to say.<br>I am sorry for that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738846">160</a> by Raymond Camden
		posted on 6/29/2012 at 1:12 AM
		</div>
		<div class="comment_text"><p>I just checked the zip and everything is there. If you can tell me something specifically you think is missing, I'll try to find it for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738847">161</a> by Alex
		posted on 6/29/2012 at 3:58 AM
		</div>
		<div class="comment_text"><p>Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738842">162</a> by Larry
		posted on 7/4/2012 at 7:46 PM
		</div>
		<div class="comment_text"><p>I have this working perfectly on my local machine, but when I upload the files to my server and go to index.html, I get the following error: "Sorry, we are unable to get the RSS and there is no cache." I am not sure how to trouble shoot this problem.</p><p>Any suggestions would be helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738844">163</a> by Raymond Camden
		posted on 7/4/2012 at 9:11 PM
		</div>
		<div class="comment_text"><p>Your uploading the files to your server? This isn't meant to be run as a 'normal' web site, but rather as a PhoneGap application. If you run it as is, you will have the 'Same Domain' issue, where a file on <a href="http://disq.us/url?url=http%3A%2F%2Ffoo.com%3AN7Z24oIKkMVc9eNBzSRQUSpuMJ0&amp;cuid=3321886" rel="nofollow noopener" title="foo.com">foo.com</a> can't do an XHR to <a href="http://disq.us/url?url=http%3A%2F%2Fgoo.com%3AAkE-SSx4loVmq6GQz7gE5TrRLE8&amp;cuid=3321886" rel="nofollow noopener" title="goo.com">goo.com</a>. There are ways around this of course, but my main concern is with you trying to run it on your server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738845">164</a> by Jef
		posted on 7/18/2012 at 4:44 AM
		</div>
		<div class="comment_text"><p>For people trying to acces the content between the &lt;![CDATA tags, you should use content:$.trim($(v).find("encoded").text())</p><p>Thanks for this tutorial, helped me a lot!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738848">165</a> by elektrorl
		posted on 10/12/2012 at 3:28 PM
		</div>
		<div class="comment_text"><p>I try to reproduce this, except I'm using a JSON feed instead of regular RSS xml feed.</p><p>When feed is ok, use localStorage to store entries.</p><p>Please, take a look: <a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2Felektrorl%2FQQhU7%2F%3AaPfJRUA1En7BZRRoElCA7Uodu3I&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/elektrorl/QQhU7/">http://jsfiddle.net/elektro...</a></p><p>Why I'm i getting only one entry, and this one is near the end of the list. Why only this one?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738851">166</a> by Raymond Camden
		posted on 10/12/2012 at 3:58 PM
		</div>
		<div class="comment_text"><p>This line:</p><p>entries = [];</p><p>is inside your each loop, which means the array is getting destroyed each time. Move it to before the each loop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738849">167</a> by elektrorl
		posted on 10/12/2012 at 4:44 PM
		</div>
		<div class="comment_text"><p>Thank you so much Raymond, thanks for all your work by the way. Great tutorial. Now I have my feed OK. Great !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738854">168</a> by budi
		posted on 3/27/2013 at 6:15 AM
		</div>
		<div class="comment_text"><p>Hi raymond ive try your code and its work in android but not in blackberry app, can you help me?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738850">169</a> by Raymond Camden
		posted on 3/28/2013 at 12:41 AM
		</div>
		<div class="comment_text"><p>I don't normally test in Blackberry, sorry. I'd maybe try the latest version of this app (see Part 5). You could also tell me more about how it doesn't work. What do you see - etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738852">170</a> by budi
		posted on 4/4/2013 at 9:35 AM
		</div>
		<div class="comment_text"><p>hi raymond i've try part 5 and deploy to blackberry app and its work, can you give me an example server side that using coldfusion code ? and what do you think is it the right methode to develop mobile who get data from remote site ? can you give me suggestion ?</p><p>Thank You</p><p>Budi</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738853">171</a> by Raymond Camden
		posted on 4/4/2013 at 3:23 PM
		</div>
		<div class="comment_text"><p>"can you give me an example server side that using coldfusion code"<br>Your question doesn't make sense. If you are asking how to handle RSS in general with CF, there is a &lt;cffeed&gt; tag.</p><p>"and what do you think is it the right methode to develop mobile who get data from remote site ?"</p><p>That is a bit broad. Libraries like jQuery make it relatively easy to load remote data. CF is also simple to use for generating JSON data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738855">172</a> by Saptaji
		posted on 9/3/2014 at 11:38 AM
		</div>
		<div class="comment_text"><p>Hai Raymond, i have a question about your rss.<br>How to show all title of the article? for example title is bla bla bla, not bla bla....<br>please answer my question raymond. Thanks before :).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738858">173</a> by Raymond Camden
		posted on 9/3/2014 at 3:06 PM
		</div>
		<div class="comment_text"><p>Thats jQuery Mobile truncating it. I'd check their docs to see if that can be disabled, and of course if you aren't using jQM then it won't be a problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738856">174</a> by Saptaji
		posted on 9/4/2014 at 1:47 AM
		</div>
		<div class="comment_text"><p>Ok thanks raymond. i will build a aplication about automatic summarization from article in rss, what should I do first ? do you have links to tutorials about it ? I'm sorry for your trouble :(. Thank you so much Raymond if you want help me :(.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738857">175</a> by Raymond Camden
		posted on 9/4/2014 at 1:50 AM
		</div>
		<div class="comment_text"><p>Automatic summarization? Like taking an article and making a summary from it? You would need a powerful system to do that. I'm not aware of an API you can use for that. I do know of an API that will do text analysis (keywords, reading level, etc), but it won't summarize it for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738860">176</a> by Saptaji
		posted on 9/4/2014 at 1:54 AM
		</div>
		<div class="comment_text"><p>I'm making a thesis about automatic news summarization. I was a dead end :'(.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738859">177</a> by Saptaji
		posted on 9/4/2014 at 1:58 AM
		</div>
		<div class="comment_text"><p>yes thats true, so I can not do it? :'( :'(.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738862">178</a> by Raymond Camden
		posted on 9/4/2014 at 2:10 AM
		</div>
		<div class="comment_text"><p>I'm not saying you can't do it - just that I don't know of an API you can call to do it for you. You could write the logic yourself I suppose.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738864">179</a> by Saptaji
		posted on 9/4/2014 at 2:25 AM
		</div>
		<div class="comment_text"><p>ok raymond thank you so much for your answer. :)</p></div>
	</div>
</div>
		