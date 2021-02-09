
<div class="comment" id="c_1713733278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733278">1</a> by Raymond Camden
		posted on 6/16/2011 at 6:21 PM
		</div>
		<div class="comment_text"><p>Yes - I'm commenting on my own blog post. ;) One idea that occurred to me - you could use a setInterval to check the field length every second. It shouldn't be too processor heavy I think to do so. It feels kinda hacky, and it would not be "instant", but it would be darn close.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733281">2</a> by Raymond Camden
		posted on 6/16/2011 at 6:26 PM
		</div>
		<div class="comment_text"><p>For folks curious I uploaded a version here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fjuly162011%2FtestCC.html%3A3BtKNzdz1tISeG69FYYbnX9xmMU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/july162011/testCC.html">http://www.coldfusionjedi.c...</a></p><p>It uses a interval of 400 ms.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733283">3</a> by Sam Farmer
		posted on 6/16/2011 at 7:46 PM
		</div>
		<div class="comment_text"><p>I believe you can add autocomplete="off" to the input text tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733282">4</a> by Raymond Camden
		posted on 6/16/2011 at 7:46 PM
		</div>
		<div class="comment_text"><p>Errrr right. I said that. ;) But it's not a "solution" though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733284">5</a> by Sam Farmer
		posted on 6/16/2011 at 7:56 PM
		</div>
		<div class="comment_text"><p>Ah, my bad for not reading throughly! ;)</p><p>I'd be tempted to turn off autocomplete and provide links above for X number of recent searches.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733286">6</a> by Ben B
		posted on 6/16/2011 at 9:14 PM
		</div>
		<div class="comment_text"><p>Here's a suggestion that kind of side-steps the question, but I think it accomplishes the underlying task.  How about instead of disabling the submit, wait until submit and then check to see how many characters have been entered?  If enough, allow submit to continue, otherwise prevent it.  Granted, the experience is slightly different (wouldn't provide a visual indicator that submit is enabled) -- but pretty close.</p><p>Maybe if you did a combination of the two approaches you could cover your browser bases.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733288">7</a> by Raymond Camden
		posted on 6/16/2011 at 9:55 PM
		</div>
		<div class="comment_text"><p>That's not a bad suggestion Ben.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733289">8</a> by Joel Cox
		posted on 6/16/2011 at 11:27 PM
		</div>
		<div class="comment_text"><p>Thanks for all of the suggestions. Ultimately, I'm going to do an AJAX post ($.post), so they're probably won't end up being a form history anyway. I ran into this once before on a different project and thought I'd bring it up since I didn't find a good solution the first time, either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733292">9</a> by Jonathan
		posted on 6/17/2011 at 5:05 AM
		</div>
		<div class="comment_text"><p>I agree with Ben, but if you really want to think of another alternative, you can also fire the function with the onblur event from the input text box.  If so, the function should be fired before the user could get the chance to press the submit button.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733295">10</a> by Julian Halliwell
		posted on 6/18/2011 at 12:39 PM
		</div>
		<div class="comment_text"><p>From a UX viewpoint this wouldn't be ideal without some sort of visible explanation. Quite frustrating seeing buttons and not knowing why you can't click them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733296">11</a> by Raymond Camden
		posted on 6/18/2011 at 5:22 PM
		</div>
		<div class="comment_text"><p>Good point. My demo was pretty minimal but a real form should have had that type of explanation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733294">12</a> by Michael Wilson
		posted on 6/19/2011 at 9:59 AM
		</div>
		<div class="comment_text"><p>A solution for IE is to use the "onpropertychange" event.</p><p>	$("#search").bind("propertychange change", function() {<br>	 $("#searchBtn").attr("disabled", $(this).val().length &lt; 5 );<br>	});</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmsdn.microsoft.com%2Fen-us%2Flibrary%2Fms536956%28v%3Dvs.85%29.aspx%3Awr8lQXyE5U9l4rHBENVmW8-WpEI&amp;cuid=3321886" rel="nofollow noopener" title="http://msdn.microsoft.com/en-us/library/ms536956(v=vs.85).aspx">http://msdn.microsoft.com/e...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733297">13</a> by Raymond Camden
		posted on 6/19/2011 at 6:28 PM
		</div>
		<div class="comment_text"><p>Michael - kick butt. That _did_ work. I can confirm it. In IE9 at least.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733298">14</a> by Mark
		posted on 6/27/2011 at 5:30 PM
		</div>
		<div class="comment_text"><p>I have an alternative solution that seems to work in all browsers for auto-complete that uses the fact that the auto-complete window is considered outside the DOM in all browsers I have tested.</p><p>$(document).mouseenter(function(){<br>$("#searchBtn").attr("disabled", $(“#search”).val().length &lt; 5 );</p><p>The mouse will have to move after clicking before it update for it to register being back in the document but since even the slightest mouse move will cause it to update I dont see this being a issue.</p><p>Note:  The keyup function works in cases where the user chooses auto-complete option using the enter key instead of the mouse.  This is becuase autocomplete updates on keydown but for mouse require a click.</p></div>
	</div>
</div>
		