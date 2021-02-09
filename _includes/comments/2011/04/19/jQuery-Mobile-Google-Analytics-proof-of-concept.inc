
<div class="comment" id="c_1713731728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731728">1</a> by Eric DeLabar
		posted on 4/19/2011 at 10:15 PM
		</div>
		<div class="comment_text"><p>May be worth noting that the page events in jQuery mobile need to be defined between the jquery script and the jquery mobile script (lines 6 &amp; 7 in your first example).  Anywhere else and it MIGHT fire, but can be a bit unpredictable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731740">2</a> by Raymond Camden
		posted on 4/19/2011 at 10:19 PM
		</div>
		<div class="comment_text"><p>Interesting. Is that in the doc? I'm not seeing it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731742">3</a> by Pritesh
		posted on 4/20/2011 at 8:24 AM
		</div>
		<div class="comment_text"><p>Eric might talking about "Also, for these handlers to be invoked during the initial page load, you must bind them before jQuery Mobile executes. This can be done in the mobileinit handler, as described on the global config page."<br> documented under <br><a href="http://disq.us/url?url=http%3A%2F%2Fjquerymobile.com%2Ftest%2F%23%2Ftest%2Fdocs%2Fapi%2Fevents.html%3A7gqW8sHoKPKP4KTXuVV-embvNqg&amp;cuid=3321886" rel="nofollow noopener" title="http://jquerymobile.com/test/#/test/docs/api/events.html">http://jquerymobile.com/tes...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731739">4</a> by Jura Khrapunov
		posted on 4/20/2011 at 12:14 PM
		</div>
		<div class="comment_text"><p>You might also want to remove _gaq.push(['_trackPageview']); from the initialization block, otherwise first page is counted twice - pagebeforeshow event fired for it as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731738">5</a> by Eric DeLabar
		posted on 4/20/2011 at 4:11 PM
		</div>
		<div class="comment_text"><p>Yes, exactly what Pritesh said, probably should have included the link myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731745">6</a> by Eric DeLabar
		posted on 4/20/2011 at 4:37 PM
		</div>
		<div class="comment_text"><p>Actually, to clarify a bit more, assuming the code was not between jQuery and jQuery Mobile it would still work on every page except the first, possibly explaining why it appeared to be working in your tests.  The jQuery mobile code executes immediately not onDocumentReady, so the pagebeforeshow handler needs to be defined before the jQuery mobile code executes and shows the first page.  If it's defined after, since it is a "live" event, it will still fire before every other page show.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731743">7</a> by Raymond Camden
		posted on 4/20/2011 at 5:13 PM
		</div>
		<div class="comment_text"><p>Bam - Pritesh - thank you. Not sure how I missed that.</p><p>@Jura - very good point.</p><p>Guys - going to rebuild this and report a follow up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731747">8</a> by Richard
		posted on 4/20/2011 at 10:42 PM
		</div>
		<div class="comment_text"><p>this is cool stuff...is there any recommended IDE for developing and simulating Jquery Mobile apps?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731749">9</a> by Raymond Camden
		posted on 4/20/2011 at 10:51 PM
		</div>
		<div class="comment_text"><p>Consider jQuery Mobile is -very- simple (90% of it is just HTML!), any editor would do. I use ColdFusion Builder. Adobe has announced good support for jqm in Dreaweaver CS 5.5 though. As soon as I can publicly blog about it, I will.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731748">10</a> by Raymond Camden
		posted on 4/20/2011 at 10:54 PM
		</div>
		<div class="comment_text"><p>Oh - if you google for Dreamweaver CS 5.5 you can find a few articles out there already - from Adobians - with screen shots. Even a video on Adobe TV I think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731750">11</a> by Richard
		posted on 4/21/2011 at 1:04 AM
		</div>
		<div class="comment_text"><p>thanks i will check it out!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731751">12</a> by Raymond Camden
		posted on 4/21/2011 at 2:29 AM
		</div>
		<div class="comment_text"><p>Guys, I've posted an update here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fgajqm2%2F%3Afu5-ek7fbehCh4o1RMJED4gRsrM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/gajqm2/">http://www.coldfusionjedi.c...</a></p><p>You can view source obviously. ;) Any comments? I think this is "more proper" but before I blog it I'd like a second (third, etc) set of eyes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731726">13</a> by anonymous
		posted on 5/4/2011 at 1:56 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>May I ask you please to confirm if my code below is correct for subdomain:</p><p>Source: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fgajqm2%2Fcustom.js%3ABTzS0jctr3z-hHa42EMi6z0gfuE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/gajqm2/custom.js">http://www.coldfusionjedi.c...</a><br>I should replaced: <br>    _gaq.push(['_setAccount', 'UA-xxxxxxxx-x']);<br>with:<br>    _gaq.push(['_setAccount', 'UA-xxxxxxxx-x']);<br>    _gaq.push(['_setDomainName', '.myDomainName.com']);<br>    /*_gaq.push(['_trackPageview']);*/</p><p>Thank you,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731729">14</a> by Raymond Camden
		posted on 5/4/2011 at 2:02 AM
		</div>
		<div class="comment_text"><p>It seems ok. Please test and let us know. When things 'worked right' for me, I saw results in about 4 hours. If you test in the morning and then check at lunch, you should be able to confirm. Just note that - at least for me - Google Analytics defaulted to having it's date filter end on yesterday I believe. You may have to tweak it to include today ("today" being the day you test).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731730">15</a> by anonymous
		posted on 5/8/2011 at 5:33 PM
		</div>
		<div class="comment_text"><p>Code above for subdomain seems to work fine on Google Analytics.<br>Thank you Raymond (apologize for delay)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731731">16</a> by Raymond Camden
		posted on 5/8/2011 at 5:40 PM
		</div>
		<div class="comment_text"><p>No problem on the delay. Thanks for letting us all know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731732">17</a> by Dan
		posted on 9/7/2011 at 5:47 AM
		</div>
		<div class="comment_text"><p>Thanks for the great write up!  Have a related philosophical question about this.  If you have your mobile site off a separate subdomain "m." would you recommend creating a separate analytics profile or combining (<a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fapis%2Fanalytics%2Fdocs%2Ftracking%2FgaTrackingSite.html%29%3ASDoGDQZcpi6_8WIYAg_iIJwaz_o&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/apis/analytics/docs/tracking/gaTrackingSite.html)">http://code.google.com/apis...</a> it with the desktop web version?  I wonder if there could be useful data from having the subdomains combined, or if doing so will foul up historical data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731733">18</a> by Raymond Camden
		posted on 9/7/2011 at 5:49 AM
		</div>
		<div class="comment_text"><p>Wow, would "I have no idea" be an acceptable answer? :) Maybe someone else in the thread here will know. I'd guess that it would make sense to use the same account, but I don't have any real proof to back that up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731734">19</a> by Rishi
		posted on 3/27/2013 at 2:05 PM
		</div>
		<div class="comment_text"><p>Thanks for the post. Its a good one</p></div>
	</div>
</div>
		