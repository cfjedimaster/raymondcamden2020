
<div class="comment" id="c_1713709006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709006">1</a> by marc esher
		posted on 10/10/2008 at 1:41 PM
		</div>
		<div class="comment_text"><p>Ray,<br>  you should be able to get what you want with something like this:</p><p>$("#mydiv").load("blah.cfm #TheDivIWant");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709004">2</a> by Raymond Camden
		posted on 10/10/2008 at 3:16 PM
		</div>
		<div class="comment_text"><p>That worked perfectly Marc. I did this:</p><p>$("a").click(function(e) { $("#content").load(e.target.href+' #content');return false; });</p><p>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709007">3</a> by marc esher
		posted on 10/10/2008 at 3:22 PM
		</div>
		<div class="comment_text"><p>surely!</p><p>is this for the cfbloggers iphone page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709005">4</a> by Raymond Camden
		posted on 10/10/2008 at 3:24 PM
		</div>
		<div class="comment_text"><p>No, but I may use it. I find the view fine right now for CFB. But the full screen stuff may be nice. I also forgot to mention the tip on selecting an icon for your web app. Thats another meta tag. I'll blog that a bit laer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709011">5</a> by Raymond Camden
		posted on 10/10/2008 at 3:49 PM
		</div>
		<div class="comment_text"><p>New problem. The content loads fine - and just the div. But because I'm not rerunning the "mod my link" again, on the 2nd link it pops a new window. I need to mod my .load func to run the callback and update the links.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709012">6</a> by Raymond Camden
		posted on 10/10/2008 at 3:51 PM
		</div>
		<div class="comment_text"><p>This seems to work just fine:</p><p>function init() {<br>	$("a").click(function(e) { $("#content").load(e.target.href+' #content', init);return false; });<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709008">7</a> by Pollux
		posted on 11/26/2008 at 12:19 AM
		</div>
		<div class="comment_text"><p>Hi, can you explain me how to do to have the apps always in full screen mode please. thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709010">8</a> by Raymond Camden
		posted on 11/26/2008 at 12:22 AM
		</div>
		<div class="comment_text"><p>Did you not see the meta tags above?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709013">9</a> by Rex
		posted on 12/14/2008 at 3:43 PM
		</div>
		<div class="comment_text"><p>Sorry, just a little help. What I have to add exactly to my web page to make it works!! I downloaded jquery.js I put that in my main folder. I added the line in head part:<br>&lt;meta name="apple-mobile-web-app-capable" content="yes" /&gt;<br>I linked the jquery plug in<br>I put the script function (init).<br>I tried all that in iphone, and the fullscreen works but when I try the link, Safari opens.<br>Any little help? What I have to write exactly?<br>Thank you very much!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709014">10</a> by Raymond Camden
		posted on 12/15/2008 at 2:18 AM
		</div>
		<div class="comment_text"><p>You may want to make sure the function is being run - you can add an alert() and see if the alert runs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709015">11</a> by chris
		posted on 2/2/2009 at 12:18 AM
		</div>
		<div class="comment_text"><p>There's a much easier way I discovered:</p><p>&lt;a href="#" onClick="javascript:window.location.href='targetURL'"&gt;Click here to change page within webapp&lt;/a&gt;</p><p>Works just like a link but keeps you in the webapp.</p><p>PS: <br>&lt;meta name="apple-mobile-web-app-status-bar-style" content="black" /&gt;<br>seems unneccessary</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709016">12</a> by nono
		posted on 2/14/2009 at 4:48 AM
		</div>
		<div class="comment_text"><p>This doesn't work for me:</p><p>&lt;a href="#" onClick="javascript:window.location.href='targetURL'"&gt;Click here to change page within webapp&lt;/a&gt;</p><p>work on first click but not on subsequent (launch Safari).<br>However this did the trick:</p><p>&lt;a href="javascript:window.location.href='MyUrl.html'"&gt;Click me&lt;/a&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709024">13</a> by Sam Nicholson
		posted on 3/3/2009 at 9:19 PM
		</div>
		<div class="comment_text"><p>So just to be sure, function init() {<br>   $("a").click(function(e) { $("#content").load(e.target.href+' #content', init);return false; });<br>} will load the content of the URL into the div with the id of content? If so, the same applies for any links which are within the returned content? Sorry if this sounds dumb but I have very little experience with AJAX and none with jQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709031">14</a> by Raymond Camden
		posted on 3/3/2009 at 9:23 PM
		</div>
		<div class="comment_text"><p>As far as I know, yes. Been a while since I looked at this code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709022">15</a> by Sam Nicholson
		posted on 3/3/2009 at 9:55 PM
		</div>
		<div class="comment_text"><p>So would function init() {<br>$("#content a").click(function(e) { $("#content").load(e.target.href+' #content', init);return false; });<br>} apply it to only the A tags within the content div?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709021">16</a> by Raymond Camden
		posted on 3/3/2009 at 10:00 PM
		</div>
		<div class="comment_text"><p>Yep.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709026">17</a> by Sam Nicholson
		posted on 3/4/2009 at 1:45 AM
		</div>
		<div class="comment_text"><p>Cool. Thanks man, you're a legend. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709032">18</a> by Raymond Camden
		posted on 3/4/2009 at 1:59 AM
		</div>
		<div class="comment_text"><p>To be clear, this was something I tested. We did NOT end up using this in production. It has not been tested. Usage of this code does not apply any rights to your person. Using this code may cause drowsiness, spotting, and slight digestive pain. 4 out of 5 patients reported mild death after using this code. As with all code, be sure to consult with your doctor before making use of it. Thank you and have a nice day.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709030">19</a> by Sam Nicholson
		posted on 3/4/2009 at 3:37 PM
		</div>
		<div class="comment_text"><p>Ok. That was a bit random.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709033">20</a> by chris
		posted on 2/10/2010 at 5:07 AM
		</div>
		<div class="comment_text"><p>Hi I realise it has been some time since there was a post here. I implemented your code and it works like a dream. I load content on the same domain/site, but I couldn't get this to work for a remote site. It struck me that this could be an "iframe like" substitute. Would it be possible to load a remote site with a bit of tweaking?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709027">21</a> by Raymond Camden
		posted on 2/10/2010 at 5:09 AM
		</div>
		<div class="comment_text"><p>While iframe's may work, what you really want is JSON/P:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.insideria.com%2F2009%2F03%2Fwhat-in-the-heck-is-jsonp-and.html%3AP1LYUQ34gqa-zg7hjsxTkVxVQ4I&amp;cuid=3321886" rel="nofollow noopener" title="http://www.insideria.com/2009/03/what-in-the-heck-is-jsonp-and.html">http://www.insideria.com/20...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709028">22</a> by Jeff King
		posted on 9/14/2010 at 12:26 AM
		</div>
		<div class="comment_text"><p>Thanks for this solution. It did not meet my needs, but it got me on the right track.  I had need to not just load new content, but also make sure any javascript on the page ran.</p><p>What I did that worked, is on the click event,</p><p>&lt;ol&gt;<br>&lt;li&gt;I appended a new form to the body&lt;/li&gt;<br>&lt;li&gt;set the action to the link's href (less any query that was appended)&lt;/li&gt;<br>&lt;li&gt;parsed the query in the link (if present) and created fields as necessary in the new form&lt;/li&gt;<br>&lt;li&gt;and submitted the form&lt;/li&gt;<br>&lt;/ol&gt;</p><p>Not exactly elegant, but it works with a new page load for every click.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709029">23</a> by Don Alex
		posted on 1/13/2011 at 1:02 AM
		</div>
		<div class="comment_text"><p>First sorry @ all but my english is bad, but I try my best!</p><p>I got a website and im used this things:</p><p>&lt;meta name="apple-mobile-web-app-capable" content="yes" /&gt;<br>&lt;meta name="apple-mobile-web-app-status-bar-style" content="black" /&gt;<br>&lt;link rel="apple-touch-startup-image" href="http://***IMAGE_LINK.png***"&gt;</p><p>and it works great. except one thing, if I'm click on a link, the link start loading but not in the "apple-mobile-web-app-capable"-mode but rather in the normals safari app.</p><p>what can i do?</p><p>thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709023">24</a> by Raymond Camden
		posted on 1/13/2011 at 10:11 PM
		</div>
		<div class="comment_text"><p>You got me there. Are you saying you leave the current browser and open a new one?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709025">25</a> by Marc
		posted on 4/11/2013 at 10:10 PM
		</div>
		<div class="comment_text"><p>Sounds like Don is having exactly the issue you describe and fix in this post. @Don, use AJAX or Ray's code above. You also have the fix in the mobile boilerplate <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fh5bp%2Fmobile-boilerplate%2Fblob%2Fmaster%2Findex.html%3A1r9brMJjv_ZBhPvjaE88SKoi-Kk&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/h5bp/mobile-boilerplate/blob/master/index.html">https://github.com/h5bp/mob...</a> (see lines 24 to 34).</p></div>
	</div>
</div>
		