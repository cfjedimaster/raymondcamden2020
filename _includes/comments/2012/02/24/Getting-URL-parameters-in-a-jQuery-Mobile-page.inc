
<div class="comment" id="c_1713739205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739205">1</a> by Mikel
		posted on 2/25/2012 at 2:28 AM
		</div>
		<div class="comment_text"><p>This is a very handy tip!  I figured out how to do this by picking apart your Simple Notes application.  Actually, I've learned a whole lot of stuff from that app (not just this technique)!</p><p>Cheers and Happy Friday!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739209">2</a> by Raymond Camden
		posted on 2/25/2012 at 2:30 AM
		</div>
		<div class="comment_text"><p>Yeah, I kinda figured this is something I've forgot/remembered multiple times. I'm hoping this blog entry helps it stick in my head.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739208">3</a> by Rachel
		posted on 5/2/2012 at 5:12 PM
		</div>
		<div class="comment_text"><p>Hey Ray, curious - have you tried Chris Coenraets getURLVars function (<a href="http://disq.us/url?url=http%3A%2F%2Fcoenraets.org%2Fblog%2F2011%2F10%2Fsample-application-with-jquery-mobile-and-phonegap%2F%29%3F%3A450bJ0mchScfukQak9W9Kq85tfg&amp;cuid=3321886" rel="nofollow noopener" title="http://coenraets.org/blog/2011/10/sample-application-with-jquery-mobile-and-phonegap/)?">http://coenraets.org/blog/2...</a>  He states in the article it works for him in PhoneGap but many have only been able to recreate it in a browser.  Once in PhoneGap - nothing.  I assume the cause of failure is the reason you mention in this article - I'll be trying out getting the param through the page URL from now on! Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739207">4</a> by Raymond Camden
		posted on 5/2/2012 at 5:39 PM
		</div>
		<div class="comment_text"><p>Nope, haven't tried it. Looks similar to code I had tried (and saw fail) too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739210">5</a> by Kalle
		posted on 6/7/2012 at 9:43 PM
		</div>
		<div class="comment_text"><p>Tested your script, and it works when I call a page with a link. But when I refresh the page, I get the following error:</p><p>Uncaught TypeError: Cannot call method 'replace' of undefined</p><p>I guess this is right and I don't understand whats happening, so maybe you can help my little brain. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739204">6</a> by Raymond Camden
		posted on 6/7/2012 at 10:22 PM
		</div>
		<div class="comment_text"><p>Ah, I originally did this for a PhoneGap app, where you can't just refresh it. You would need to switch to the first block in that case (first demo). You could write code that checks first for $(this).data('url'), and if blank, then checks <a href="http://disq.us/url?url=http%3A%2F%2Fwindow.location.search%3ADV9zqqTWGzFB1Bc7-KTrq6dbSLU&amp;cuid=3321886" rel="nofollow noopener" title="window.location.search">window.location.search</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739206">7</a> by Kyle Dodge
		posted on 6/19/2012 at 8:40 PM
		</div>
		<div class="comment_text"><p>I've been having issues with Android 3 and 4 giving a "Error Loading Page" message. Android 2.x works great, searching I came across a recent git pull request that solves this issue <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fapache%2Fincubator-cordova-android%2Fpull%2F21%3ARjy1Cy7tSYD76_HKtdFS6uN1qEM&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/apache/incubator-cordova-android/pull/21">https://github.com/apache/i...</a> Hopefully Cordova 1.9 incorporates these changes, but just in case your readers have the same issues when trying to pass url params in Android 3/4</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739212">8</a> by Raymond Camden
		posted on 8/9/2012 at 7:40 PM
		</div>
		<div class="comment_text"><p>Kyle - I just ran into this. I spent hours trying to figure it out. This is SO disappointing. I noticed the Pull request is still open, but, it also says it strips them out. Doesn't that imply it "fixes" it by removing them which means if you rely on them you are screwed?</p><p>For now I'm switching to LocalStorage. I'll be blogging this too to help spread the word.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739211">9</a> by Kyle Dodge
		posted on 8/9/2012 at 8:43 PM
		</div>
		<div class="comment_text"><p>Ray,<br>Switching to this build of the cordova library in my application solved the issue. There was nothing I needed to do but to change the library, and everything on Android 3 &amp; 4 worked perfectly on my app. Due to the time crunch I was under, I wound up just using this build but I really hope that they fix this in the next version of cordova, or I will be looking at switching to local storage as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739213">10</a> by Raymond Camden
		posted on 8/9/2012 at 8:46 PM
		</div>
		<div class="comment_text"><p>So to be clear, it let you still get the values you had passed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739214">11</a> by Kyle Dodge
		posted on 8/9/2012 at 10:28 PM
		</div>
		<div class="comment_text"><p>Yep, I get the values exactly the same way that I do on Android 2.x and didn't have to change any of my javascript or html... the bug issue disappeared with that unofficial cordova build. You can test it by just changing out your cordova jar and cordova.js file, and you should see the bug disappear.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739216">12</a> by Raymond Camden
		posted on 8/9/2012 at 11:09 PM
		</div>
		<div class="comment_text"><p>Simon MacDonald says this is checked into PG2.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F8%2F9%2FCritical-AndroidPhoneGap-issue%23c7E628CB3-F6AE-5977-8AB0E671CDA126F6%3A2JW3FfsIbka4GxBk1SA_SATpAuY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/8/9/Critical-AndroidPhoneGap-issue#c7E628CB3-F6AE-5977-8AB0E671CDA126F6">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739215">13</a> by Brock Ellis
		posted on 8/21/2012 at 7:44 PM
		</div>
		<div class="comment_text"><p>Hi Raymond! Just stumbled across your blog. Very good content.Cant wait to read some more.</p><p>One question: how can you use the $(this).data("url") method for parsing multiple search queries on one url? For example, page.html?category=12&amp;id=2234</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739217">14</a> by Raymond Camden
		posted on 8/21/2012 at 7:51 PM
		</div>
		<div class="comment_text"><p>The result of the data call should give you the entire string</p><p>category=12&amp;id=2234</p><p>You would then use JavaScript string functions to parse it.</p><p>So if you know that's your URL 'form' (ie, what it will look like) you could just do</p><p>var s = $(this).data("url");<br>var categoryPart = s.split("&amp;")[0];<br>var idPart = s.split("&amp;")[1];<br>var category = categoryPart.split("=")[1];<br>var id = idPart.split("=")[1];</p><p>You could also write a simple utility function to split things and return a hash of name/value pairs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739220">15</a> by Clement
		posted on 10/8/2012 at 6:55 AM
		</div>
		<div class="comment_text"><p>Wow, thank you Raymond. I spent the past few hours trying to figure out what was wrong with the jqm.page.params plugin and trying to get the query string somehow. Very nice tip!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739221">16</a> by Raymond Camden
		posted on 10/8/2012 at 6:59 AM
		</div>
		<div class="comment_text"><p>Glad to help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739224">17</a> by shukri
		posted on 10/14/2012 at 5:02 PM
		</div>
		<div class="comment_text"><p>Thanks so much! Excellent tip, so small and simple yet solves so many problems.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739223">18</a> by Tom
		posted on 2/21/2013 at 10:23 PM
		</div>
		<div class="comment_text"><p>This just rescued me from hours of aggravation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739222">19</a> by Rachel
		posted on 2/7/2014 at 8:05 AM
		</div>
		<div class="comment_text"><p>Resurrecting an old topic, this was fixed in PG2 but am now having issues in Cordova 3 - have you played around with it by chance?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739228">20</a> by Raymond Camden
		posted on 2/7/2014 at 8:29 PM
		</div>
		<div class="comment_text"><p>No - what issues are you having?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739229">21</a> by Rachel
		posted on 2/7/2014 at 9:25 PM
		</div>
		<div class="comment_text"><p>Looks like "Error Loading Page" and "Unknown Chromium Error: 0" arise.  It is similar to when it stopped working before the 2.0 update.  Didn't know if you had confirmed this and/or if you had another suggestion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739226">22</a> by Raymond Camden
		posted on 2/8/2014 at 12:27 AM
		</div>
		<div class="comment_text"><p>If you try it in the Android browser (no PG involved) do you see the same?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739227">23</a> by Cameron Askew
		posted on 4/4/2014 at 1:02 AM
		</div>
		<div class="comment_text"><p>I created a plug-in for jQuery Mobile 1.4+ which allows you to use URL parameters. The parameters are maintained within the URL meaning that page refreshes/going directly to a page will all work. It's on MIT license so use as you please.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FCameronAskew%2Fjquery.mobile.paramsHandler%3Ao-u2EqMRX2dxDeY2trZkdyhFeMY&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/CameronAskew/jquery.mobile.paramsHandler">https://github.com/CameronA...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739230">24</a> by Shiplu Khan
		posted on 7/12/2014 at 11:13 AM
		</div>
		<div class="comment_text"><p>@Raymond Camden can u please tell me about the #artdetailpage in the code sample. May be a silly one but....................</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739232">25</a> by Raymond Camden
		posted on 7/12/2014 at 5:17 PM
		</div>
		<div class="comment_text"><p>Tell you what?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739231">26</a> by Betty Heim
		posted on 8/7/2014 at 1:27 AM
		</div>
		<div class="comment_text"><p>Thank you for this post. Can you tell me how to split the url for multiple parameters?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739233">27</a> by Betty Heim
		posted on 8/7/2014 at 1:30 AM
		</div>
		<div class="comment_text"><p>I am sorry, I didn't see that you already posted an answer for this. Thank you.</p></div>
	</div>
</div>
		