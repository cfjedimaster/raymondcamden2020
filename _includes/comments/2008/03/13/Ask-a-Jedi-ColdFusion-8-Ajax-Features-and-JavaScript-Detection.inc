
<div class="comment" id="c_1713678100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678100">1</a> by Dan Vega
		posted on 3/14/2008 at 2:59 AM
		</div>
		<div class="comment_text"><p>I am not sure about ColdFusion specific methods. If your page is using any of the Ajax components and Ext is available there are some methods available to you. I threw a quick list together and threw a test into FireBug.</p><p>//browsers<br>console.log(Ext.isGecko);		<br>console.log(Ext.isIE);<br>console.log(Ext.isIE7);<br>console.log(Ext.isOpera);<br>console.log(Ext.isSafari);<br>//platforms<br>console.log(Ext.isMac);<br>console.log(Ext.isWindows);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678085">2</a> by Tom Mollerus
		posted on 3/14/2008 at 5:19 AM
		</div>
		<div class="comment_text"><p>I agree with the technique of object detection, which I use all the time. I wonder if you could check for some of the objects unique to CF8, such as the ColdFusion object:<br>if(ColdFusion)<br>   ... do something</p><p>Unfortunately I don't have a copy of Netscape 7 with which to test.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678101">3</a> by David McGuigan
		posted on 3/14/2008 at 12:16 PM
		</div>
		<div class="comment_text"><p>What's Netscape? Jk.</p><p>I was actually looking for a good browser detection solution myself about a week ago and came across this:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.andrewdixon.co.uk%2Faebrowser%2Ftestlist.html%3A62lmifJsTsEbKdHx93Jae2T8Cnk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.andrewdixon.co.uk/aebrowser/testlist.html">http://www.andrewdixon.co.u...</a></p><p>It's pretty old, but detected the crap out of the browsers I tried it on and even populates quick and dirty variables like isFirefox, isExplorer, and so on FYC.</p><p>I basically just used it to detect for Safari and display the message, "It's nothing personal, but we're going to have to ask that you install a legitimate Web browser to view our site."</p><p>And it's worked like a charm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678104">4</a> by David McGuigan
		posted on 3/14/2008 at 12:18 PM
		</div>
		<div class="comment_text"><p>Oops.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.andrewdixon.co.uk%2Faebrowser%2Findex.html%3A6bqeBwryGyqhofEDjPiHtjeEC3A&amp;cuid=3321886" rel="nofollow noopener" title="http://www.andrewdixon.co.uk/aebrowser/index.html">http://www.andrewdixon.co.u...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678107">5</a> by Sam Farmer
		posted on 3/14/2008 at 5:23 PM
		</div>
		<div class="comment_text"><p>You should talk to your three neighbors and sort them out ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678106">6</a> by Justin
		posted on 3/14/2008 at 6:30 PM
		</div>
		<div class="comment_text"><p>I only need this for parts of the site that I need to do RAD work with a little flare. Like, get this done in 12 hours sort of thing.</p><p>We get about 4.5 million unique visitors per year and about 5% have browsers that ignore SPRY. This is due to very "mature" users and impoverished international users on 2nd hand U.S. PCs.</p><p>I really only need to detect older browsers, I'm not worried about feature X or Y. There are good documented cut off points in both SPRY and EXT.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678111">7</a> by Justin
		posted on 3/14/2008 at 6:31 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>Can you remove my email from my name above? Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678109">8</a> by Raymond Camden
		posted on 3/14/2008 at 6:37 PM
		</div>
		<div class="comment_text"><p>Done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678110">9</a> by Drdom
		posted on 3/14/2008 at 10:26 PM
		</div>
		<div class="comment_text"><p>Agree with Justin - yep, Ajax capabilities in CF8 make it great to develop with, but if you can't be sure of the client you can't use them, end of. You have to revert to something else to be belt and braces.</p><p>CF could do with some sort of tools to detect the client environment and manage capababilities as standard. If you have a CFForm type="flash", it would be great if CF could downgrade to a HTML form if there was no Flash.</p><p>Maybe this would help against the arguments by the less enlightened that CF's a niche tool for intranets, which I hear a lot.</p><p>I have used BrowserHawk a lot and although it's very good, it's also very expensive - if we had built-in browser client environment it would be another feather in the cap.</p><p>@Justin</p><p>If it's *REALLY* old browsers you're after you might want to try this as a start</p><p>No idea if it works in CF8 out of the box, I used to use it in CF5 quite a bit</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fplanet-source-code.com%2Fvb%2Fscripts%2FShowCode.asp%3FtxtCodeId%3D31%26lngWId%3D9%3AmcWXlDLjCyK0OXrP2f9mEGycX3k&amp;cuid=3321886" rel="nofollow noopener" title="http://planet-source-code.com/vb/scripts/ShowCode.asp?txtCodeId=31&amp;lngWId=9">http://planet-source-code.c...</a></p><p>Dom</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678084">10</a> by mgwalk
		posted on 3/28/2008 at 7:15 PM
		</div>
		<div class="comment_text"><p>I think the aebrowser looks good anyone else use it?</p></div>
	</div>
</div>
		