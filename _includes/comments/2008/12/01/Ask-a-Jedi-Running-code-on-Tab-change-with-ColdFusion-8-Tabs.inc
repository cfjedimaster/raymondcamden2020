
<div class="comment" id="c_1713710274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710274">1</a> by Cliff Pearson
		posted on 12/2/2008 at 11:17 PM
		</div>
		<div class="comment_text"><p>Just a note of thanks Ray, as I had an enhancement ticket for the project I'm working on which required something very similar.  Just after I'd marked the ticket 'will not fix', (as I didn't think I'd be able to do it), I spotted your post.</p><p>Quickly changed the status and an hour later, I had a very happy client.</p><p>Cheers!</p><p>&lt;/cliff&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710282">2</a> by Rob
		posted on 12/3/2008 at 10:46 AM
		</div>
		<div class="comment_text"><p>Awesome Ray ... many thanks.  This has got me started in the right direction.</p><p>This AJAX stuff is cool and adds great depth to CF, but of course there is much more to learn, as the black box tags only go so far.</p><p>Also, it seems that there are a lot of gotchas with the tags themselves.  I don't seem to be able to use cfcalendar within my cfdivs, and cfinput and cftextarea validation is ignored, in spite of importing the tags into the calling page.  A lot of trial and error ahead!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710285">3</a> by Graham
		posted on 11/12/2009 at 7:15 PM
		</div>
		<div class="comment_text"><p>I don't entirely get this function.  The part I don't get is where do the parameters for function(tabpanel,activetab) come from?  Are they members of mytabs or do they have to be instantiated somewhere else?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710280">4</a> by Raymond Camden
		posted on 11/12/2009 at 7:23 PM
		</div>
		<div class="comment_text"><p>That data is passed automatically by the event.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710286">5</a> by Graham
		posted on 11/12/2009 at 9:06 PM
		</div>
		<div class="comment_text"><p>Thanks!  Got everything working now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710284">6</a> by kd nyegaard
		posted on 8/23/2010 at 5:54 PM
		</div>
		<div class="comment_text"><p>Ray, I've tried replicating this code in CF9 and firebug tells me that .getText() is not found. Also, it does not work. Did the ext-js attributes change in CF9?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710289">7</a> by Raymond Camden
		posted on 8/23/2010 at 6:00 PM
		</div>
		<div class="comment_text"><p>Yes. The version of Ext in CF9 is 3.something or another - much newer. Any code you wrote making use of Ext APIs needs to be updated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710287">8</a> by Jeremy
		posted on 1/21/2011 at 3:38 AM
		</div>
		<div class="comment_text"><p>Ray, I have an existing ajax function for each tab that refreshes the tab using setTimeout. I would like to run clearTimeout() when a user clicks off of a tab so that the timer does not continue to update information that is not even being viewed.  Do you know how I could accomplish this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710291">9</a> by Raymond Camden
		posted on 1/21/2011 at 3:42 AM
		</div>
		<div class="comment_text"><p>Ah interesting. Let me rephrase your question to make sure I get it.</p><p>You have some func that runs every N seconds. You want it to work with the current tab. So if you switch tabs, the current interval should stop a new one should start.</p><p>Dumb q- why not use the same interval and have it check to see which tab is active?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710290">10</a> by Jeremy
		posted on 1/21/2011 at 3:50 AM
		</div>
		<div class="comment_text"><p>Yes, that is correct on what I am doing.</p><p>I could use the same interval/function I suppose but how do I identify the active tab at any given moment?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710288">11</a> by Raymond Camden
		posted on 1/21/2011 at 3:54 AM
		</div>
		<div class="comment_text"><p>It's been a while since I used CF's built in tabs. I coulda sworn there was a simple API to get it but I don't see it. Most likely it is simple if you call getTabLayout first. Let me do a quick test... but it will be for CF9. That ok? CF9 has a much newer Ajax library then 8 so if not - um - then I'll figure something else out. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710294">12</a> by Jeremy
		posted on 1/21/2011 at 3:57 AM
		</div>
		<div class="comment_text"><p>We are using CF8, but maybe what you come up with will still be viable?</p><p>I appreciate the assistance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710293">13</a> by Raymond Camden
		posted on 1/21/2011 at 4:03 AM
		</div>
		<div class="comment_text"><p>Found it:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.johncblandii.com%2Findex.php%2F2008%2F03%2Fcoldfusion-8-ajax-ui-controls-refresh-active-tab.html%3APlecjRnzCAUZtH7tftdGKCJx50A&amp;cuid=3321886" rel="nofollow noopener" title="http://www.johncblandii.com/index.php/2008/03/coldfusion-8-ajax-ui-controls-refresh-active-tab.html">http://www.johncblandii.com...</a></p><p>His blog is a bit hard to read - but you can see where he gets the 'active' tab.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710273">14</a> by Jeremy
		posted on 1/21/2011 at 4:10 AM
		</div>
		<div class="comment_text"><p>Thanks!  I will give this a shot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710272">15</a> by Jeremy
		posted on 1/21/2011 at 6:00 PM
		</div>
		<div class="comment_text"><p>Ray, while we are on the subject of Ajax refreshing, I wanted to run this by you as well.  I am using jQuery 1.4.4 and use the .get API to check to see if I need to refresh data on a page or not.  The problem is that there is a memory leak somewhere in the snippet below that I cannot seem to find.  You will notice that I do a lot of potentially useless things here like deleting and add back the timer all in an effort to figure out what is going on.  I assumed that doing the .load was causing the problem, but at this point, the .load doesn't occur very frequently at all.  Anyway, if I  can figure out this memory leak issue, I will be able to  hook it up to the CF tablayout and should have a nice thing going.  Hopefully you or somebody else can easily identify something silly I may be missing here.</p><p>&lt;script&gt;<br> $(document).ready(function() {<br>	 function CheckAlerts() {<br>	   //Must tell Ajax not to cache results<br>	  $.ajaxSetup({ cache: false });<br>	   $.get("AjaxDataCheck/CheckForDataRefresh.cfm", { datacheck: "MyAlerts"},<br>		function(data) {<br>		 if (data.indexOf("true") &gt;= 0) {<br>			$.ajaxSetup({ cache: false });<br>			$('#responsecontainer').load('alertchecking_Inner.cfm');<br>			//Clearing the timer and recreating may force gargage collection.<br>			clearTimeout(CheckAlertsTimer);<br>			delete CheckAlertsTimer;<br>			CheckAlertsTimer = setTimeout(CheckAlerts,2000);<br>		 }<br>		 else<br>		 {<br>			//Clearing the timer and recreating may force gargage collection.<br>			clearTimeout(CheckAlertsTimer);<br>			delete CheckAlertsTimer;<br>			CheckAlertsTimer = setTimeout(CheckAlerts,2000);<br>		 }<br>		});<br>		CheckAlertsTimer = setTimeout(CheckAlerts,2000);<br>	};<br>	CheckAlerts()<br>});<br>&lt;/script&gt;</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710276">16</a> by Jeremy
		posted on 1/21/2011 at 9:29 PM
		</div>
		<div class="comment_text"><p>Something else to note.  This code works great in Mozilla.  No leaking at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710275">17</a> by Raymond Camden
		posted on 1/22/2011 at 3:19 AM
		</div>
		<div class="comment_text"><p>Not really sure. My knowledge of JS doesn't really get into memory leaks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710277">18</a> by Chad
		posted on 3/10/2011 at 4:40 AM
		</div>
		<div class="comment_text"><p>Besides getText(), is there any other way to get the tabs name?  I am just getting [object object] as my value when I set a form value using jQuery.  I used a js for-in-loop, and can see the data I want but I don't know the js code to get that specific data.  Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710278">19</a> by Raymond Camden
		posted on 3/10/2011 at 7:01 PM
		</div>
		<div class="comment_text"><p>If you see the data in a key called foo, and ob is the result of getText(), then just use <a href="http://disq.us/url?url=http%3A%2F%2Fob.foo%3A-Df-nVJSoS_-bLRxkea4A2W9xq8&amp;cuid=3321886" rel="nofollow noopener" title="ob.foo">ob.foo</a>. It's just like CFML structures.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710279">20</a> by Gregory Alexander
		posted on 8/14/2014 at 10:29 AM
		</div>
		<div class="comment_text"><p>Note: with CF 9 and higher, this function needs to be changed to:<br>function tabChangeListener(){<br>    var mytabs = ColdFusion.Layout.getTabLayout('#tabName#');<br>    mytabs.on('tabchange', doTabChange);<br>}</p><p>function doTabChange(){<br>  var activeTabName = ColdFusion.Layout.getTabLayout('#tabName#').getActiveTab().title;</p><p>  alert(activeTabName);<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710281">21</a> by Raymond Camden
		posted on 8/14/2014 at 2:33 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing that update, Gregory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1843185487">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_LFTi00lNNr.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1843185487">22</a> (In reply to <a href="#c_1713710281">#21</a>) by Gregory
		posted on 2/9/2015 at 7:30 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond!<br>On another note- I am getting very annoyed having to deal with the code changes in the plumbing every time CF is updated with their Ajax controls and I am going to make the transition to some other grid system. I read your comments on some alternatives, but have you played with JqxWidets or Kendo UI? I like Kendo as I can keep a consistent look and feel for both Cf and .Net apps, but the coldFusion docs for Kendo are sparse.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1844822861">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1844822861">23</a> (In reply to <a href="#c_1843185487">#22</a>) by Raymond Camden
		posted on 2/10/2015 at 1:48 AM
		</div>
		<div class="comment_text"><p>I have not used JqxWidgets and I haven't *really" used Kendo UI, but I know many of the folks at Telerik and they are top notch. I'd check Kendo first. Not fair for me to say it is better than JqxWidgets, but I'd start there. If you have trouble, let me know. I can maybe hook you up with the right people.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1845674479">
	<div>
		<img src="https://disqus.com/api/users/avatars/jenlooper.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1845674479">24</a> (In reply to <a href="#c_1843185487">#22</a>) by Jen Looper
		posted on 2/10/2015 at 3:33 PM
		</div>
		<div class="comment_text"><p>hi Gregory, Jen here from Telerik...if you have any questions about Kendo UI, please contact us on the Developer Relations team - I'm at jen.looper@telerik.com. You might also take a look at <a href="http://disq.us/url?url=http%3A%2F%2Fjqueryuiwidgets.com%2F%3AgL8PsW3Vb8H_sxNShgo8FpQDLM0&amp;cuid=3321886" rel="nofollow noopener" title="http://jqueryuiwidgets.com/">http://jqueryuiwidgets.com/</a> by Cody Lindley, also on our team.</p></div>
	</div>
</div>
		