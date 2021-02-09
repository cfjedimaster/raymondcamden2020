
<div class="comment" id="c_1713744779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744779">1</a> by Tim Leach
		posted on 3/1/2013 at 5:38 PM
		</div>
		<div class="comment_text"><p>You said not persist to DB or file, but can we persist in memory?<br>Server.SiteBgIndex++;</p><p>And day of year would work except for leap year. So starting with that method and making it work better we could do DateDiff now() '01-01-2000' Mod 5.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744793">2</a> by Danny
		posted on 3/1/2013 at 5:54 PM
		</div>
		<div class="comment_text"><p>Unix timestamp seemed to work nicely, tested it through a 1000 iterations</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fdannyrscott%2F5064455%23file-friday-puzzle-color-picker%3ApTHXc3rgZ4kmRPCSUTASpgLQd5s&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/dannyrscott/5064455#file-friday-puzzle-color-picker">https://gist.github.com/dan...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744791">3</a> by Raymond Camden
		posted on 3/1/2013 at 6:03 PM
		</div>
		<div class="comment_text"><p>@Tim - nope - no persistence allowed. Why? Because. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744789">4</a> by GrumpyCFer
		posted on 3/1/2013 at 6:10 PM
		</div>
		<div class="comment_text"><p>&lt;cfset colorIndex = (DateDiff("s", DateConvert("utc2Local", "January 1 1970 00:00"), day) \ 86400 % ArrayLen(colors))+1&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744794">5</a> by Raymond Camden
		posted on 3/1/2013 at 7:56 PM
		</div>
		<div class="comment_text"><p>GrumpyCFer - that is interesting. I assume day is now()?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744799">6</a> by Paul Rowe
		posted on 3/1/2013 at 8:23 PM
		</div>
		<div class="comment_text"><p>You could also go for:<br>&lt;cfset iColor = (DateDiff("dd", "1/1/2000", Now()) MOD ArrayLen(colorsRotation)) + 1 /&gt;<br>Now, this takes care of things server-side. Question is, this tells the user which color is today's background. It doesn't let the user "select" a color and it doesn't update the background color until another request is made. You could perhaps store some information in a cookie (if that sort of persistence is allowed) and implement some JavaScript to update the background color if the user is still viewing the same page before and after midnight.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744801">7</a> by Raymond Camden
		posted on 3/1/2013 at 8:24 PM
		</div>
		<div class="comment_text"><p>Thanks Paul. I'm not so much worried about the implementation per se (I try to keep these puzzles to small, atomic challenges).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744803">8</a> by AXL
		posted on 3/1/2013 at 9:13 PM
		</div>
		<div class="comment_text"><p>Here is mine.<br><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2F805J0ijt%3Angg56AKWQnQ7E76aXRgl0_KaBIg&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/805J0ijt">http://pastebin.com/805J0ijt</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744781">9</a> by WebManWalking
		posted on 3/2/2013 at 12:22 PM
		</div>
		<div class="comment_text"><p>Given a properly chosen start date and 4 properly chosen constants, you can calculate the number of days since that start date, blindingly fast, in fewer than 10 arithmetic operations and one if. Is that the sort of thing you were looking for?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744782">10</a> by Raymond Camden
		posted on 3/2/2013 at 6:20 PM
		</div>
		<div class="comment_text"><p>I was looking for solutions - so yes. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744780">11</a> by AXL
		posted on 3/3/2013 at 4:08 PM
		</div>
		<div class="comment_text"><p>So what was your possible simple solution?  Is mine close to yours?<br>BTW, "Driving a car" + "Thinking of coding" = "Nooooooooooooooooooooooooooooooooooooooooooooooooooot a good idea.  ^^;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744784">12</a> by Raymond Camden
		posted on 3/3/2013 at 7:53 PM
		</div>
		<div class="comment_text"><p>Both you and Danny were what I was thinking of. Use an arbitrary date in the past and take the diff from that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744783">13</a> by GrumpyCFer
		posted on 3/9/2013 at 6:59 AM
		</div>
		<div class="comment_text"><p>@Ray Insert my line between your 4 and 5 and the array index on 5 (now 6) to colorIndex. The date diff is just to get Epoch time. Could be shortened, as Danny did, but prefer the hinting.</p></div>
	</div>
</div>
		