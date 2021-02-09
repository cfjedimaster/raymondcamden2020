
<div class="comment" id="c_1713732211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732211">1</a> by Aaron DeRenard
		posted on 5/15/2011 at 8:09 AM
		</div>
		<div class="comment_text"><p>Moved the apk over to my Incredible, used astro to find it, opened it with App Manager, hit Install and click Open when it was done installing...  Menu appears, but nothing seems to be found.</p><p>Back out of app, turn on standalone GPS, launch app...  Works!</p><p>Unfortunately the Places API looks like it doesn't find much of anything where I live (though it should) but some items are coming up and that's awesome!  For instance, I would expect Gas Station to show at least 4 entries that are very close to me, but it doesn't show any.  But it will show a cemetery that is quite further from me.  One store that is next to another, but the other doesn't show (a local store shows, but CVS does not...  strange [and I can't say what kind of store CVS is, because my comment gets flagged as spam]).</p><p>So what I am trying to say for other readers that try the app out, don't just assume it isn't working after trying 4 or 5 menu items. Try a bunch because it's probably working, just the api isn't returning much.  At least that's how it seems to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732213">2</a> by Ivan Alvarez
		posted on 5/15/2011 at 9:55 AM
		</div>
		<div class="comment_text"><p>I would recommend you to use the Stagewebview to load maps as Chris did it <a href="http://disq.us/url?url=http%3A%2F%2Fchrisgriffith.wordpress.com%2F2011%2F01%2F04%2Fintegrating-maps-into-your-mobile-application%2F%3AVdFCKyy7yeXGceCDrl7Rq7tL--E&amp;cuid=3321886" rel="nofollow noopener" title="http://chrisgriffith.wordpress.com/2011/01/04/integrating-maps-into-your-mobile-application/">http://chrisgriffith.wordpr...</a>. I have compiled to iphone 4, ipad and android and works smooth!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732214">3</a> by Mihai Baboi
		posted on 5/15/2011 at 11:52 AM
		</div>
		<div class="comment_text"><p>That's so cool. I've been looking forward to this post ever since you posted your intention on Twitter. Did it take you an hour, like you said? :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732212">4</a> by Raymond Camden
		posted on 5/15/2011 at 2:41 PM
		</div>
		<div class="comment_text"><p>@Aaron: I thought I had correctly accounted for both GPS not being available and being off - but I may have missed the 'just being off' part. I've got 3 hours in a layover today so can fix it then. ;)</p><p>And yeah - the Places API doesn't have _everything_ for sure.</p><p>@Ivan: Thank you - I will try that.</p><p>@Mihai: I'd say it took me 3 hours. I spent an hour after the conference and 2 hours after dinner. Forgot that I had never gotten my phone just right on the laptop (driver wise) so that was a hiccup.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732220">5</a> by Aaron DeRenard
		posted on 5/15/2011 at 6:06 PM
		</div>
		<div class="comment_text"><p>@Ray: If I turn off Standalone GPS and Google Location Services, the app just sits on a "Getting your location..." state.  If I just turn on Google Location Services, the same cemetery etc is found.  So apparently last night was a hiccup in Google Location Services.</p><p>So in short, it works fine with Google Location Services and/or Standalone GPS.  And the "just being off" part may have been missed as you said.</p><p>3 hours?  Heh...  Good job!  I'm impressed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732219">6</a> by Raymond Camden
		posted on 5/16/2011 at 4:12 PM
		</div>
		<div class="comment_text"><p>I got a chance to test my app back in Lafayette yesterday. While _in_ the airport, Google Places didn't know an airport existed. But it did find nearby restaurants when I picked food. Very cool to see this working.</p><p>Also - I forgot to give credit to the AIR Launchpad (<a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Fdownloads%2Fairlaunchpad.html%29%3A7kf5O3635p26kjLWfos7osA5MyM&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/downloads/airlaunchpad.html)">http://labs.adobe.com/downl...</a>. It helped me write the GPS stuff and helped me with the splash screen syntax.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732223">7</a> by Brian Rinaldi
		posted on 5/16/2011 at 6:54 PM
		</div>
		<div class="comment_text"><p>I've seen that geolocation issue on my Nexus One (not sure if it's a device issue or not) but I can assure you it's not anything related to AIR as I have seen it on a number of native apps as well.</p><p>You can customize the list item appearance using item renderers. For performance purposes it's generally recommended you use ActionScript item renderers rather than MXML. Nahuel Foronda has a great multipart tutorial on it - here's part 1 <a href="http://disq.us/url?url=http%3A%2F%2Fwww.asfusion.com%2Fblog%2Fentry%2Fmobile-itemrenderer-in-actionscript-part-1%3ACVqfbSbpSE4ZDTA7WOx4XIngehs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.asfusion.com/blog/entry/mobile-itemrenderer-in-actionscript-part-1">http://www.asfusion.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732217">8</a> by Raymond Camden
		posted on 5/16/2011 at 6:56 PM
		</div>
		<div class="comment_text"><p>Interesting - are you saying I need to do an item renderer just to make the items 'fatter'? Can't I do it via CSS or some such? I know writing item renderers isn't a big deal but it seems like overkill for this, doesn't it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732226">9</a> by Brian Rinaldi
		posted on 5/16/2011 at 7:04 PM
		</div>
		<div class="comment_text"><p>Appears so. Halo had a rowheight attribute on the List but Spark does not appear to have that. It might be possible with a skin rather than an itemrenderer but I'm not 100% certain (scanned the source with a coworker and saw minheight and maxheight attributes, so that might solve your use case...didn't see a fixed height setting though)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732231">10</a> by Raymond Camden
		posted on 5/16/2011 at 7:08 PM
		</div>
		<div class="comment_text"><p>I'll give that a shot then. Could be a good blog post. What's odd though is that in the simulator it seemed perfect. I know the simulator is much bigger, but in "relation" to the chrome it was bigger. Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732237">11</a> by Raymond Camden
		posted on 5/17/2011 at 8:20 PM
		</div>
		<div class="comment_text"><p>Posted my size/proportion question to Stack Overflow. First time I actually posted a question:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F6033948%2Fbest-way-to-handle-text-size-changes-between-simulator-and-real-device-using-flex%3AkAYsmluB8EQfR7UEnaRYLodQY6o&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/6033948/best-way-to-handle-text-size-changes-between-simulator-and-real-device-using-flex">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732234">12</a> by BNNY
		posted on 8/9/2011 at 2:06 AM
		</div>
		<div class="comment_text"><p>Can you provide us with the project file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732232">13</a> by Raymond Camden
		posted on 8/9/2011 at 2:09 AM
		</div>
		<div class="comment_text"><p>The most up to date code may be found here: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfjedimaster%2Fineedit%3ACPYC6UYgdrJ9pWH1kIJ8iPqSRc0&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfjedimaster/ineedit">https://github.com/cfjedima...</a></p></div>
	</div>
</div>
		