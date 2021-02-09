
<div class="comment" id="c_1713748215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748215">1</a> by Kevin A
		posted on 8/16/2013 at 6:01 PM
		</div>
		<div class="comment_text"><p>test.html, Line 35: The ID for the element is misspelled as "#numbertoo". Should be "#numbertwo".</p><p>Diagnosed in Chrome via Uncaught TypeError: Cannot read property 'value' of null.</p><p>That was fun!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748219">2</a> by Raymond Camden
		posted on 8/16/2013 at 6:05 PM
		</div>
		<div class="comment_text"><p>I'm going to be picky. "Diagnosed in Chrome" - where in Chrome. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748227">3</a> by Jonathan Martel
		posted on 8/16/2013 at 6:09 PM
		</div>
		<div class="comment_text"><p>While in FF, open Firebug, get "TypeError: document.querySelector(...) is null, line 35".</p><p>Check the source and find the misspelled id.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748221">4</a> by Kyle
		posted on 8/16/2013 at 6:14 PM
		</div>
		<div class="comment_text"><p>I used the IE debugger (F12), since that is what I am most familiar. The script console is pretty intuitive and easy to use.</p><p>SCRIPT5007: Unable to get property 'value' of undefined or null reference <br>test.html, line 35 character 6</p><p>var two = document.querySelector("#numbertoo").value;</p><p>element ID is actually "numbertwo".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748223">5</a> by Raymond Camden
		posted on 8/16/2013 at 6:15 PM
		</div>
		<div class="comment_text"><p>Kyle - just curious - what version of IE?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748224">6</a> by Piyush B
		posted on 8/16/2013 at 6:16 PM
		</div>
		<div class="comment_text"><p>In the debugger tool of FireFox, i got this error:</p><p>[20:00:19.506] TypeError: document.querySelector(...) is null @ <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2013%2Faug%2F16%2Ftest.html%3A35%3ARvJjhqy2lpzY1FTo3zvujZxL4tw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2013/aug/16/test.html:35">http://www.raymondcamden.co...</a></p><p>which leads to</p><p>var two = document.querySelector("#numbertoo").value;</p><p>It should be #numbertwo instead of #numbertoo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748228">7</a> by doug
		posted on 8/16/2013 at 6:18 PM
		</div>
		<div class="comment_text"><p>Open error console in the Web Developer 1.2.5 for  Firefox, click on the error, see highlighted line, look up to the form ID, see misspelling.  Done.</p><p>It's fun to see the different tools people use.  I'd be curious how people might tackle a harder error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748284">8</a> by Kyle
		posted on 8/16/2013 at 6:22 PM
		</div>
		<div class="comment_text"><p>Right now I am using IE10.  Our web application where I work uses some VBScript that we can't get rid of, so I have become intimately familiar with the F12 tool :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748282">9</a> by Rob
		posted on 8/16/2013 at 6:27 PM
		</div>
		<div class="comment_text"><p>I used the Chrome javascript console to see the error and line number. I clicked on the file:line# to see the location in the source. Then I was able to see the typo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748288">10</a> by Raymond Camden
		posted on 8/16/2013 at 6:27 PM
		</div>
		<div class="comment_text"><p>@Kyle: VBScript still works in IE10?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748294">11</a> by Kyle
		posted on 8/16/2013 at 6:35 PM
		</div>
		<div class="comment_text"><p>Unfortunately not. We have to run the newer IE versions in incompatibility mode.  It works surprisingly well, though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748293">12</a> by Mehdi Mousavi
		posted on 8/16/2013 at 6:45 PM
		</div>
		<div class="comment_text"><p>Are you kidding? The JavaScript code of the page is totally crap. I don't care about a typo, say, numbertoo id; what I actually care is the code itself.</p><p>1. You've just imported jQuery 1.9.1, from <a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1%2Fjquery.min.js%3AmyXuj5h8gP7HzSEw76YxIcay7LQ&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js">http://ajax.googleapis.com/...</a> that's very strange and confusing to me. I believe the original address should be <a href="https://disq.us/url?url=https%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1.9.1%2Fjquery.min.js%3ArUKpdmT9HzAFlZCFnidMy5mof-s&amp;cuid=3321886" rel="nofollow noopener" title="https://ajax.googleapis.com/ajax/libs/jquery/1.9.1/jquery.min.js">https://ajax.googleapis.com...</a>.</p><p>2. If you are going to use jQuery, why are you using event listeners or invoking querySelector directly? Aren't you supposed to use "ready handler" and the "jQuery selectors", as well as the "submit" utility function and the "html" set function instead of those shaky code?</p><p>3. You need to pass the second argument to parseInt, or else, on some browser &amp; based on entered data, users could get wrong results. (I'm addressing radix parameter which is by default 8 on based on a given string).</p><p>Keep up the good work,<br>Mehdi</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748283">13</a> by Raymond Camden
		posted on 8/16/2013 at 6:49 PM
		</div>
		<div class="comment_text"><p>Thanks for the feedback Mehdi. I had loaded jQuery initially when I built my first 'broken app', but I changed directions and decided to do something else. Therefore the jQuery load should be removed. Doing so now.</p><p>"You've just imported jQuery 1.9.1, from <a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1%2Fjque%3AmgtMokNGUQ04_DKbcmxG8C7emC8&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1/jque">http://ajax.googleapis.com/...</a>... that's very strange and confusing to me"</p><p>This is a supported way of loading by major version number. It means, "Give me the latest in the 1.X branch.</p><p>"If you are going to use jQuery, why are you using event listeners or invoking querySelector directly?" A mistake. You've made your point twice already about this so not sure why you're harping to it.</p><p>"You need to pass the second argument to parseInt, or else, on some browser &amp; based on entered data, users could get wrong results."</p><p>Good point. Added ,10 to both.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748295">14</a> by Dennis Nagel
		posted on 8/16/2013 at 6:53 PM
		</div>
		<div class="comment_text"><p>ctrl-shift-I: show console tab... play with the page.  Click add; observe error "Uncaught TypeError: Cannot read property 'value' of null test.html:35 (anonymous function)"  inspect the ID in question in the html source of the page and notice that the ID is spelled incorrectly "too" instead of "two" in the JS.  If this were a local file, you would be able to edit in place and save the file to retest your solution.  Chrome offers a "local changes" option that would show what it took to repair your solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748285">15</a> by Mehdi Mousavi
		posted on 8/16/2013 at 8:00 PM
		</div>
		<div class="comment_text"><p>@Raymond Camden: Thank you. I didn't know about the 1.x branch... But I'm curious to now if it's used in real-world applications since this could easily break existing/tested code as soon as a new version is released. Right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748297">16</a> by Raymond Camden
		posted on 8/16/2013 at 8:03 PM
		</div>
		<div class="comment_text"><p>I'd say it's rare for jQuery to add backwards-compat issues. I don't think it is something folks would have to worry about *all* the time, but sure, if it concerns you, just include a specific version. Normally I'd use 2.X as well, but my snippet hasn't been updated.</p><p>So.... hopefully you've gotten past the 'totally crap' aspect. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748287">17</a> by Mehdi Mousavi
		posted on 8/16/2013 at 8:07 PM
		</div>
		<div class="comment_text"><p>&gt; So.... hopefully you've gotten past the 'totally crap' aspect. ;)</p><p>Yeah sure. :) It now looks rational.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748286">18</a> by Bill King
		posted on 8/16/2013 at 8:55 PM
		</div>
		<div class="comment_text"><p>In both Firefox and Chrome I right-click to 'inspect element' see the error in the 'Console' tab/region, then click on the line number on the right-hand side and the line number of the issue is selected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748291">19</a> by Anit_Kumar
		posted on 8/16/2013 at 9:05 PM
		</div>
		<div class="comment_text"><p>If you use the developer tools (F12 key) in Chrome, you will get this error</p><p>"Uncaught TypeError: Cannot read property 'value' of null"</p><p>Cause of error:-<br>		var two = document.querySelector("#numbertoo").value;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748302">20</a> by Kevin A
		posted on 8/16/2013 at 11:40 PM
		</div>
		<div class="comment_text"><p>@Ray: In Chrome, Ctrl-Shift-I brings up the developer tools, which is very similar to Firebug, in some ways better, in some ways not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748296">21</a> by Matt N.
		posted on 8/17/2013 at 1:56 AM
		</div>
		<div class="comment_text"><p>Thanks for the example.  I'm a bit new and appreciate the kick start to learning.  I've identified the numbertoo as well, but was trying to change it in Chome Developer Tools/Sources dynamically to see if I could get the page to work.  I put in a breakpoint and then renamed the var:<br>var two = document.querySelector("#numbertwo").value;<br>When I resume the code, it now errors with:<br>Uncaught TypeError: Cannot read property 'value' of null</p><p>Is this type of editing possible?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748303">22</a> by Raymond Camden
		posted on 8/17/2013 at 4:24 PM
		</div>
		<div class="comment_text"><p>@Matt: As far as I know, Chrome supports this, but only when the JS you run is in it's own file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748299">23</a> by Richard Tugwell
		posted on 8/17/2013 at 6:52 PM
		</div>
		<div class="comment_text"><p>I found this too</p></div>
	</div>
</div>
		