
<div class="comment" id="c_1713734287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734287">1</a> by Eddie Monge
		posted on 7/14/2011 at 9:42 AM
		</div>
		<div class="comment_text"><p>I've made a few changes to your JS: <br><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2F1081987%2Ff6203727eb979c715ff374b301b294f9e36a5d35%3AeKNFadaQpoJTANunvbenFFrSG0k&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/1081987/f6203727eb979c715ff374b301b294f9e36a5d35">https://gist.github.com/108...</a><br>I thought there was a way to do a diff on <a href="http://disq.us/url?url=http%3A%2F%2Fgists.github.com%3AYxX2rl_liAlHel3bTh_s7IH8yes&amp;cuid=3321886" rel="nofollow noopener" title="gists.github.com">gists.github.com</a> but forgot how (if it existed)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734283">2</a> by Raymond Camden
		posted on 7/14/2011 at 2:31 PM
		</div>
		<div class="comment_text"><p>It looks like - mainly - a bit tighter in the event handlers, right?</p><p>FYI (to all) - about to go on a 9 day vacation so may be a bit slow to respond.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734286">3</a> by SteveOfSP
		posted on 7/14/2011 at 7:28 PM
		</div>
		<div class="comment_text"><p>Running this online (FF) hangs when you drill down to the actual art.  But still very cool.  Thanx.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734289">4</a> by Raymond Camden
		posted on 7/24/2011 at 6:47 PM
		</div>
		<div class="comment_text"><p>Could be my console.log usage. Are you not running Firebug? Does it work fine in Chrome?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734288">5</a> by Sholto Maud
		posted on 9/22/2011 at 7:11 AM
		</div>
		<div class="comment_text"><p>the   $('#homePage').live('pagebeforeshow', function(event, ui){ ... <br>doesn't work for me when I first visit the page, the favourites list doesn't render. If I go back to the home page from an internal page, the favourites list does render and works beautifully from then onwards. Is there a trick to pagebeforeshow when first landing on the page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734290">6</a> by Sholto Maud
		posted on 9/22/2011 at 10:20 AM
		</div>
		<div class="comment_text"><p>I'm using jgm beta3 ... and I've found that it works when I remove $(document).ready(function()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734291">7</a> by Raymond Camden
		posted on 9/22/2011 at 2:48 PM
		</div>
		<div class="comment_text"><p>I can see no reason why this would fail to work in b3, but obviously I've not tested it there. At most, document.ready may be firing before JQM has finished marking stuff up, BUT, the live call on the div should work whenever.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734284">8</a> by Henry
		posted on 10/15/2011 at 11:01 PM
		</div>
		<div class="comment_text"><p>i'm so disapointed,that you didnt used simple javascript and for example webdb or indexdb.Couse i making a simular app and i fail :(.Anyway i keep searching to get mine running.</p><p>Good work anyway</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734294">9</a> by Raymond Camden
		posted on 10/16/2011 at 3:14 PM
		</div>
		<div class="comment_text"><p>I disagree completely with your comment Henry.</p><p>First off - "simple JS" - my solution does use JavaScript. So that doesn't make sense.</p><p>Secondly - "webdb/indexdb" - first off - indexdb/webdb isn't supported as well as local storage. Secondly, the feature doesn't make sense for what I'm doing. You would use indexdb for storing lots of data that needs a SQL-style search interface. My need was to store a few things that I'd always fetch directly. I'm not saying you _couldn't_ use indexdb here, but I really believe local storage makes more sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734303">10</a> by Donn
		posted on 1/7/2012 at 10:25 AM
		</div>
		<div class="comment_text"><p>This is amazing. Keep posting dude!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734301">11</a> by Jason Haag
		posted on 1/19/2012 at 2:24 AM
		</div>
		<div class="comment_text"><p>Excellent tutorial and thanks for sharing! I'm interested in doing the same thing (add to favorites), except don't have a need for cold fusion. I totally agree with you about using local storage for this type of capability. This is an excellent example that many can learn from! Without knowing the syntax for cold fusion I would like to create something similar with just HTML5, CSS, and JavaScript. Rather than using the dynamic variables you created (e.g. data-artid="#<a href="http://disq.us/url?url=http%3A%2F%2Furl.id%3A0bRnXeBrI7OIqL9bKyG2zQPmmP0&amp;cuid=3321886" rel="nofollow noopener" title="url.id">url.id</a>#") could I just use static variables instead and it should work, right? But I would have to create a unique dialog for each html page using data-artname and data-artid, rather than it being dynamic for each art item. Great stuff!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734300">12</a> by Raymond Camden
		posted on 1/19/2012 at 2:55 AM
		</div>
		<div class="comment_text"><p>Yep, you can use static HTML.</p><p>To your last point about needing N pages for the detail. Technically, you do not. See: <a href="http://disq.us/url?url=http%3A%2F%2Fjquerymobile.com%2Fdemos%2F1.0%2Fdocs%2Fpages%2Fpage-scripting.html%3A3Z9m5zMXk4Tw2yeQ9BRa2p16M_M&amp;cuid=3321886" rel="nofollow noopener" title="http://jquerymobile.com/demos/1.0/docs/pages/page-scripting.html">http://jquerymobile.com/dem...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734304">13</a> by Jason Haag
		posted on 1/20/2012 at 3:01 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond. Are you referring to the section at the bottom of the link to the jqm documentation, "Passing parameters between pages?"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734302">14</a> by Raymond Camden
		posted on 1/20/2012 at 3:06 AM
		</div>
		<div class="comment_text"><p>No, that entire page. It talks about how to create virtual dynamic pages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734305">15</a> by Jason Haag
		posted on 1/20/2012 at 3:10 AM
		</div>
		<div class="comment_text"><p>In other words, would one of these plug-ins they mentioned be required?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734308">16</a> by Raymond Camden
		posted on 1/20/2012 at 3:18 AM
		</div>
		<div class="comment_text"><p>Crap, brain fart on my part. You want this URL:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjquerymobile.com%2Fdemos%2F1.0%2Fdocs%2Fpages%2Fpage-dynamic.html%3Afi5K7dLBJDN4h99hjrEhp7_CH8c&amp;cuid=3321886" rel="nofollow noopener" title="http://jquerymobile.com/demos/1.0/docs/pages/page-dynamic.html">http://jquerymobile.com/dem...</a></p><p>It's the page before the one I sent. Sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734307">17</a> by Jason Haag
		posted on 1/20/2012 at 3:47 AM
		</div>
		<div class="comment_text"><p>That's it! Thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734314">18</a> by Jason Haag
		posted on 1/21/2012 at 3:20 AM
		</div>
		<div class="comment_text"><p>Raymond, were you able to get this to work in Firefox? I'm seeing the following error using Firebug:</p><p>invalid 'in' operand getStorage()<br>[Break On This Error]</p><p>return (id in getStorage());</p><p>Not sure if my install of firefox may have an issue or if you are able to replicate this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734311">19</a> by Jason Haag
		posted on 1/21/2012 at 4:11 AM
		</div>
		<div class="comment_text"><p>This seems to prevent the favorites feature from working in firefox or IE. I'm trying to look to see if there is another way to return the id from getStorage() using jquery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734310">20</a> by Raymond Camden
		posted on 1/21/2012 at 7:36 PM
		</div>
		<div class="comment_text"><p>What version of Firefox?</p><p>You can probably change:</p><p>  function hasInStorage(id){<br>                return (id in getStorage());<br>            }</p><p>to this:</p><p>  function hasInStorage(id){<br>  var current = getStorage();<br>  return current.hasOwnProperty((id);<br>            }</p><p>I'm writing this just in the comment field so it may not be exactly right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734312">21</a> by Jason Haag
		posted on 1/24/2012 at 12:07 AM
		</div>
		<div class="comment_text"><p>I'm using FF 9.0.1</p><p>Tried that, but says current is NULL. I'm seeing the same issue when trying your demo in firefox.</p><p>I started down this path because the "Add to Favorites" and "Remove" buttons don't render so it led me to: hasInStorage(id).</p><p>Are you able to see something different? Does the demo work in firefox on your end? It works perfectly in chrome and safari on my end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734313">22</a> by Raymond Camden
		posted on 1/24/2012 at 12:51 AM
		</div>
		<div class="comment_text"><p>Nope, it does not work. I assumed that in operator worked in FF. Let me dig a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734315">23</a> by Raymond Camden
		posted on 1/24/2012 at 12:52 AM
		</div>
		<div class="comment_text"><p>When you tried my mod, did you correct the typo I had above?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734317">24</a> by Raymond Camden
		posted on 1/24/2012 at 12:57 AM
		</div>
		<div class="comment_text"><p>Nevermind, it's a bit deeper. Fixing now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734318">25</a> by Raymond Camden
		posted on 1/24/2012 at 1:00 AM
		</div>
		<div class="comment_text"><p>Ok, I modified both hasInStorage and getStorage. I think this version is better. Just view source here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fartbrowser%2Fv5%3AdiCyByrQ5mb1IW3r2NGuzqlH-6U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/artbrowser/v5">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734316">26</a> by Jason Haag
		posted on 1/24/2012 at 1:35 AM
		</div>
		<div class="comment_text"><p>Hey Ramond, that works in FF now. Was it hanging up on current not being undefined (double negative)? I'm new to jquery so the syntax still throws me a bit sometimes.</p><p>Just found this plug-in too that helps for checking if your keys are stored: <a href="https://disq.us/url?url=https%3A%2F%2Faddons.mozilla.org%2Fen-US%2Ffirefox%2Faddon%2Ffirestorage%2F%3AtWxcLtnZW6osrS_w5sToO87cmgE&amp;cuid=3321886" rel="nofollow noopener" title="https://addons.mozilla.org/en-US/firefox/addon/firestorage/">https://addons.mozilla.org/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734319">27</a> by Raymond Camden
		posted on 1/24/2012 at 2:22 AM
		</div>
		<div class="comment_text"><p>Yep to your first comment.</p><p>As an FYI, there is a Chrome extension for LocalStorage viewing too. One I worked on. :)</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fchrome.google.com%2Fwebstore%2Fdetail%2Fbpidlidmmmnapeldonddkjmmjkpeiabi%3A_y5Ju3O__T5u3Jircb13lMc_rWw&amp;cuid=3321886" rel="nofollow noopener" title="https://chrome.google.com/webstore/detail/bpidlidmmmnapeldonddkjmmjkpeiabi">https://chrome.google.com/w...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734320">28</a> by Jason Haag
		posted on 1/24/2012 at 6:27 PM
		</div>
		<div class="comment_text"><p>Thanks Ramond! Nice job! Will check out your chrome extension!</p><p>Hey, have you tested this on IE? The fav buttons render and I can see that localStorage and JSON are supported in the latest version of IE, but IE does a full page refresh when navigating from the addtofav dialog screen to the categories. I'm guessing it handles jQuery mobile a bit differently and this can most likely be alleviated with some type of $.mobile.changePage() update.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734324">29</a> by Raymond Camden
		posted on 1/24/2012 at 7:30 PM
		</div>
		<div class="comment_text"><p>Nope, didn't bother. But note that I was using jQM Beta 1 for this demo. It may work better with the final release.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734322">30</a> by Jason Haag
		posted on 1/25/2012 at 12:01 AM
		</div>
		<div class="comment_text"><p>I'm using the final release and it's still the same. There must be a way to deal with it using jQM. I'll have to create some test cases and submit as a ticket probably. It has to be something with jquery syntax that IE doesn't like...my guess anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734325">31</a> by Jason Haag
		posted on 3/16/2012 at 4:37 AM
		</div>
		<div class="comment_text"><p>Hey CFJedi, I just noticed that this doesn't work in Windows Phone. Thinking it doesn't like something with the jquery syntax.</p><p>I adapted your favorites example and implemented in an app I'm building for a conference: <a href="http://disq.us/url?url=http%3A%2F%2Fgt12.adlnet.mobi%3AfOjFOaRnb9tG-I27x085eOkGrHg&amp;cuid=3321886" rel="nofollow noopener" title="http://gt12.adlnet.mobi">http://gt12.adlnet.mobi</a></p><p>If you go the the schedule and drill down to the sessions you'll see where I incorporated it. Pretty sweet! Do you have an inkling of why it might not work on Windows Phone?  The lates OS supports localStorage.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734330">32</a> by Raymond Camden
		posted on 3/16/2012 at 5:06 AM
		</div>
		<div class="comment_text"><p>Hmm. So the best I can recommend is to remove stuff until it works and see if you can pinpoint the line where it breaks. That's what I do when things break for me. You should be able to narrow it down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734329">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734329">33</a> by BRIAN FERNANDES
		posted on 5/24/2012 at 10:55 PM
		</div>
		<div class="comment_text"><p>Hi Jason,</p><p>Do you have a sample code for the application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734328">34</a> by Marcio
		posted on 10/26/2012 at 6:03 PM
		</div>
		<div class="comment_text"><p>Hello Raymond,</p><p>Nice tutorial! I have a doubt. Is there a way to copy from Android clipboard to localStorage using jQuery ou native javascript?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734331">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734331">35</a> by Raymond Camden
		posted on 10/26/2012 at 6:21 PM
		</div>
		<div class="comment_text"><p>No idea. I'd assume not... that seems like it would be a security issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734335">36</a> by Johan
		posted on 4/11/2013 at 2:13 AM
		</div>
		<div class="comment_text"><p>Hi, great work, this is what I have been looking for!<br>I just new at this and I'm working on an new app<br>and I wonder where you can change to categoryname to something else?<br>For example "Jewelry", "Painting" and so on...</p><p>I didn't found It anywhere in your sample cfm files. Where is those categories saved?<br>And how do I change it?<br>I would appreciate it if you could light me in this matter. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734333">37</a> by Raymond Camden
		posted on 4/11/2013 at 4:34 AM
		</div>
		<div class="comment_text"><p>Sorry - I'm not quite sure I get you. Are you asking how to change the data? Cuz the data itself is just sample data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734334">38</a> by Johan
		posted on 4/11/2013 at 11:47 AM
		</div>
		<div class="comment_text"><p>When I open the file index.cfm in dreamviewer I don't see the categories: functional, Jewelry, Painting and so on, how do I change this data/text? For example to Fruit, Vegetables and so on...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734332">39</a> by Raymond Camden
		posted on 4/11/2013 at 3:55 PM
		</div>
		<div class="comment_text"><p>Dreamweaver is a code editor. You understand how ColdFusion works, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734337">40</a> by Johan
		posted on 4/11/2013 at 11:11 PM
		</div>
		<div class="comment_text"><p>I started to look at it last night, is it there you program the categories?<br>not sure how it works together with jqm<br>jqm i know a bit more about<br>I wanted to make favorites on my mobile app and i need it to be local in the phone<br>ive been searching the web for a good solution and yours were the closest to my idea<br>i simply have learn how this works</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734336">41</a> by Raymond Camden
		posted on 4/12/2013 at 6:00 AM
		</div>
		<div class="comment_text"><p>Ah, well, then you are in for a journey. :) Note that you can use any server-side language. I'm primarily a ColdFusion person, but I'm doing more with Node.js lately.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734338">42</a> by Johan
		posted on 4/12/2013 at 11:07 PM
		</div>
		<div class="comment_text"><p>Yes programming is fun so that road is the way to go :)<br>any chance you could share this favorites files to cf ?<br>if yes would you please send to my mail?<br>I would be deeply grateful and maybe I can put thanks in the app info with your name if thats ok ? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734340">43</a> by Raymond Camden
		posted on 4/13/2013 at 8:42 PM
		</div>
		<div class="comment_text"><p>The CF code is included in the download.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734341">44</a> by Johan
		posted on 4/14/2013 at 1:59 AM
		</div>
		<div class="comment_text"><p>ok, im confused lol I just started to look at CF but I cant import the files into coldfusion, or am I getting this wrong, if I just load them into cf then I cant find/change the favoritenames, etc. Functional, jewel, painting..and so on</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734342">45</a> by Raymond Camden
		posted on 4/14/2013 at 3:07 AM
		</div>
		<div class="comment_text"><p>The code is using a database that ships with CF as sample data. If you don't know about databases, well, um, best I recommend is picking up a CF book (like the one I helped write ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734344">46</a> by Prathyusha
		posted on 7/8/2013 at 9:35 AM
		</div>
		<div class="comment_text"><p>Hi, Raymond thanks for sharing i'm looking exactly like this but when i'm using this code it doesn't favorites..can you give me any solution to get out this problem( <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F17468371%2Fhow-to-add-the-item-in-the-list-as-favourites-using-jquery%3AlXPaszfB7R6yYWXj3ANUi9671Is&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/17468371/how-to-add-the-item-in-the-list-as-favourites-using-jquery">http://stackoverflow.com/qu...</a> ). Thanks in Advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734343">47</a> by Raymond Camden
		posted on 7/8/2013 at 2:02 PM
		</div>
		<div class="comment_text"><p>Are you asking me about your code on the SO question or the code here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734345">48</a> by Prathyusha
		posted on 7/8/2013 at 2:50 PM
		</div>
		<div class="comment_text"><p>Thanks for replying Raymond..actually i need to get the favorites list then i got your blog your code is  working very fine but when i implemented this in my code its not working can you help me to get the solution....Thanks in Advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734346">49</a> by Prathyusha
		posted on 7/8/2013 at 2:52 PM
		</div>
		<div class="comment_text"><p>i applied this on my code <a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2F9AWvM%2F2%2F%3AfqF_5BVZ579qhgIr4j-61TavJlU&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/9AWvM/2/">http://jsfiddle.net/9AWvM/2/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734347">50</a> by Raymond Camden
		posted on 7/9/2013 at 4:10 PM
		</div>
		<div class="comment_text"><p>Well, I'd ask you to be more specific about what exactly is failing. You need to trace it down in the code level and see which portion isn't working right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734348">51</a> by Prathyusha
		posted on 7/11/2013 at 10:32 AM
		</div>
		<div class="comment_text"><p>not exactly i think in page url when i'm click on the "Add to favourite " button it is not listing anything in the favorites page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734349">52</a> by Raymond Camden
		posted on 7/11/2013 at 3:41 PM
		</div>
		<div class="comment_text"><p>So step one would be to add a console message to the click handler. Ensure it is being fired when you click.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734351">53</a> by Prathyusha
		posted on 7/12/2013 at 1:07 PM
		</div>
		<div class="comment_text"><p>i tried like an alert to get the page id..but when i'm clicking on the button getting the message but "addToStorage" is not working. I'm i doing any wrong in the storage function.can you plz check it once.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734352">54</a> by Raymond Camden
		posted on 7/12/2013 at 4:03 PM
		</div>
		<div class="comment_text"><p>Uh - trying to understand your English. It sounds like you said that you can confirm the click handler does run, is that right?</p><p>Basically - all I can tell you is to try to trace it down to what is failing exactly. I tend to use console.log() as a way to do this. You could also use the step debugger in Chrome.</p><p>You really need to do this, not me. If your code is online in a place where I can _run_ it, I will try.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734353">55</a> by Prathyusha
		posted on 7/13/2013 at 11:23 AM
		</div>
		<div class="comment_text"><p>yes i need to do this...https://<a href="http://disq.us/url?url=http%3A%2F%2Fgithub.com%2Fluckylakshmi%2FExamplecode%3AnXa4vj4eQKwq_5beSJT9drjIcm0&amp;cuid=3321886" rel="nofollow noopener" title="github.com/luckylakshmi/Examplecode">github.com/luckylakshmi/Exa...</a> i upload a example code here. I used in this HTML5,Jquery,css<br>you can run this in browser i'm using firefox.</p><p>Explanation about the files:<br>In this home page contains a list when we click on the list items  it opens the particular file(.txt files) in a separate page. In that page footer contains bookmark button. when i click on the button it opens a dialog box with "yes" and "no". when we click on "yes" it should add that particular page into "favorites list".If "no" it should display that page only. In home page we have a "Bookmarks" button under header. All these favourites should add in that "Bookmarks" in a list view.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734355">56</a> by Raymond Camden
		posted on 7/13/2013 at 5:51 PM
		</div>
		<div class="comment_text"><p>So as I said - you need to check into where it is failing using something like Chrome DevTools, or Firebug. Please take some time to learn those tools and see if you can diagnose the issue yourself. For example, you said clicking the button opens up a prompt asking for yes/no. You need to confirm that works, Then - check the code that runs when you click yes.</p><p>Both Firebug and Chrome DevTools let you pause and step through your JS code. You need to do this yourself though to track down the issue. Once you've done that, you are welcome to ask me why it is failing, but at this point you have not done the investigation yourself and you really need to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734356">57</a> by Prathyusha
		posted on 7/14/2013 at 7:48 PM
		</div>
		<div class="comment_text"><p>Thank you Raymond but this task is urgent for me. Can you plz check this once.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734358">58</a> by Raymond Camden
		posted on 7/14/2013 at 10:54 PM
		</div>
		<div class="comment_text"><p>Prathyusha, my help here is provided for free, and when I can, and more so when I think it will help others and create good conversation. It isn't my job to do your work for you. I gave you ideas for how to proceed. If it is urgent and you just want it fixed, I understand, but if you wish me to do it for you will need to hire me at my normal rate. You can see my rate on my contact page (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fcontact.cfm%29%3AbhXUkk1LH9rBooj-S6J0wmcumYs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/contact.cfm)">http://www.raymondcamden.co...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734357">59</a> by Sanghoon
		posted on 9/9/2013 at 7:18 AM
		</div>
		<div class="comment_text"><p>Thank you very much. It helps a lot!<br>Dise it work, if I use these setting in phonegap?<br>I think it's possible, because phonegap uses html5, javascript and those are same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734360">60</a> by Sanghoon
		posted on 9/9/2013 at 7:28 AM
		</div>
		<div class="comment_text"><p>'Dose' not 'Dise' <br>sorry for misspelling</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734361">61</a> by Raymond Camden
		posted on 9/9/2013 at 2:11 PM
		</div>
		<div class="comment_text"><p>Yep, works just fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734362">62</a> by Jeff Mastromonico
		posted on 10/9/2013 at 12:00 AM
		</div>
		<div class="comment_text"><p>Jason Haag #<br>Jason what you have done with your event site is EXACTLY what i am am trying to do for an event site for our university. care to share some code or some insight? I'm just not understanding how to put it all together.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734364">63</a> by Jason Haag
		posted on 10/10/2013 at 7:36 PM
		</div>
		<div class="comment_text"><p>Sure, send me a message via my social channels: <a href="http://disq.us/url?url=http%3A%2F%2Fabout.me%2Fjsonhaag%3A5nDDieq8HakP2G7h8g3zBfRfVNY&amp;cuid=3321886" rel="nofollow noopener" title="http://about.me/jsonhaag">http://about.me/jsonhaag</a></p><p>I will send you the last working version I had used.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734363">64</a> by Jorgensen
		posted on 10/15/2013 at 12:47 AM
		</div>
		<div class="comment_text"><p>Very nice to see an attempt on something that I was about to make (rather poorly) until I found this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734365">65</a> by Thich Ban La
		posted on 5/19/2014 at 10:37 AM
		</div>
		<div class="comment_text"><p>Thank you very much for the useful tutorial. <br>I was like blur to every thing until found your post. <br>(Sorry for the poor English).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2867537379">
	<div>
		<img src="https://disqus.com/api/users/avatars/mopages.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2867537379">66</a> by Mo Pages
		posted on 8/30/2016 at 6:20 PM
		</div>
		<div class="comment_text"><p>The links and attached files are no longer available :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_2867677762">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2867677762">67</a> (In reply to <a href="#c_2867537379">#66</a>) by Raymond Camden
		posted on 8/30/2016 at 7:41 PM
		</div>
		<div class="comment_text"><p>I corrected the link. The demo is no longer available online though.</p></div>
	</div>
</div>
		