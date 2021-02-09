
<div class="comment" id="c_1713728572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728572">1</a> by andy matthews
		posted on 12/30/2010 at 1:38 AM
		</div>
		<div class="comment_text"><p>This is what I came up with:</p><p>\((?:'|").+?(?:'|")\)</p><p>Captures everything between parens, while not matching the single, or double, quotes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728568">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728568">2</a> by Raymond Camden
		posted on 12/30/2010 at 1:40 AM
		</div>
		<div class="comment_text"><p>Does it work if no single or double quotes exist? I believe I've seen</p><p>url(foo.jpg)</p><p>before.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728573">3</a> by David Hammond
		posted on 12/30/2010 at 8:06 AM
		</div>
		<div class="comment_text"><p>It is possible to handle the quotes within the regular expression:</p><p>&lt;cfset matches = reFind("url\(('|"")?([^\)'""]+)('|"")?\)", s, 1, true)&gt;<br>&lt;cfloop condition="matches.pos[1] gt 1"&gt;<br>	&lt;cfset match = mid(s, matches.pos[3], matches.len[3])&gt;<br>	&lt;cfoutput&gt;<br>		match was #match#&lt;p&gt;<br>	&lt;/cfoutput&gt;<br>	&lt;cfset matches = reFind("url\(('|"")?([^\)'""]+)('|"")?\)", s, matches.pos[1]+matches.len[1], true)&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728575">4</a> by anthony
		posted on 12/31/2010 at 12:03 AM
		</div>
		<div class="comment_text"><p>(?&lt;=url\().*(?=\)) would work if CF could do look behinds.  You could use some java to do the regex for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728571">5</a> by Rhysling
		posted on 12/31/2010 at 2:51 AM
		</div>
		<div class="comment_text"><p>For something this simple there's no way you need multiple find/replace steps.</p><p>Lookaheads and lookbehinds would be nice.  It'd also be nice if ColdFusion didn't assume parentheses around the entire regex pattern, and then returned an array of the actual matched strings, too, rather than that len &amp; pos junk, like every other language I've ever used.</p><p>I have a slightly odd way of writing regex, for readability...You don't have to escape most reserved characters inside of [], so I use those in favor in escaping whenever possible, which muddles readability for me.</p><p>url[(]+['"]?([^'")]*)['"]?[)]+</p><p>&amp;lt;!--- Assumes CSS var ---&amp;gt;<br>&amp;lt;cfset regex = "url[(]+['""]?([^'"")]*)['""]?[)]+" /&amp;gt;<br>&amp;lt;cfset matches = reFind(regex, css, 1, true) /&amp;gt;<br>&amp;lt;cfoutput&amp;gt;Dump #regex#&amp;lt;/cfoutput&amp;gt;&amp;lt;cfdump var="#matches#" /&amp;gt;<br>&amp;lt;cfloop condition="matches.len[1] gt 1"&amp;gt;<br>	&amp;lt;cfset strMatch = mid(css, matches.pos[2], matches.len[2])&amp;gt;<br>	&amp;lt;cfoutput&amp;gt;#strMatch#&amp;lt;/cfoutput&amp;gt;		<br>	&amp;lt;cfset matches = reFind(regex, css, matches.pos[2]+matches.len[2], true) /&amp;gt;<br>&amp;lt;/cfloop&amp;gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728574">6</a> by Rhysling
		posted on 12/31/2010 at 3:03 AM
		</div>
		<div class="comment_text"><p>Or url[(]+['"\s]*?([^'")]*)['"\s]*?[)]+  for being careful of weird syntax that might nevertheless work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728569">7</a> by andy matthews
		posted on 12/31/2010 at 7:33 AM
		</div>
		<div class="comment_text"><p>Ray...</p><p>Change my previous example to:</p><p>\((?:'|")?.+?(?:'|")?\)</p><p>That says 0 or 1 single or double quote (but don't capture them).</p></div>
	</div>
</div>
		