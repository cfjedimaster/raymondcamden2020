
<div class="comment" id="c_1713728300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728300">1</a> by Henry
		posted on 12/10/2010 at 12:35 AM
		</div>
		<div class="comment_text"><p>Cool, but Node.js ability to parse the DOM really shines at this.</p><p>Regex is really not a good tool for phasing HTML.</p><p>I wonder if this problem can be solved with CFGroovy and Rhino...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728296">2</a> by Raymond Camden
		posted on 12/10/2010 at 12:37 AM
		</div>
		<div class="comment_text"><p>Regex is really not good for HTML? I strongly disagree. Obviously a DOM parser is easier to work with - but I don't see how you can say regex is a bad tool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728303">3</a> by Henry
		posted on 12/10/2010 at 12:46 AM
		</div>
		<div class="comment_text"><p>If you go on stackoverflow, you'll see tons of questions about how to parse something out of HTML, or how to use regex to clean up HTML, and most top answers would suggest them to stop using Regex and use a real DOM.</p><p>Wouldn't it be great we we can manipulate the DOM in CF... :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728305">4</a> by Raymond Camden
		posted on 12/10/2010 at 12:52 AM
		</div>
		<div class="comment_text"><p>Heh, well, regex is powerful. Not terribly easy. ;) Hence the large amount of questions probably.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728302">5</a> by Brian
		posted on 12/10/2010 at 1:16 AM
		</div>
		<div class="comment_text"><p>Henry makes a good point... Wouldn't it be cool if we could parse a page DOM-like... I know I've tackled something like that for a project or two -- how to hierarchically address data within a page for ease of update... Maybe even using something like what Ben Nadel did a while back with an XML search/parser routine. [creative juices beginning to boil]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728304">6</a> by Wookie
		posted on 12/10/2010 at 2:06 AM
		</div>
		<div class="comment_text"><p>Very cool! At first I thought it said "regedit"..oh dear</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728301">7</a> by Peter Boughton
		posted on 12/10/2010 at 4:26 PM
		</div>
		<div class="comment_text"><p>Regex *cannot* correctly parse HTML, especially "wild" HTML, (and it should not be encouraged to do so).</p><p>Here's a trivial example of how the existing code will fail:<br>&lt;!-- Temporary: --&gt;<br>&lt;link rel="alternate" title="RSS &lt;temp until Tuesday&gt;" type="application/rss+xml" href="<a href="http://disq.us/url?url=http%3A%2F%2Ffeedproxy.google.com%2FRaymondCamdensColdfusionBlog2%3Ayqsom1X3Of9-Yxc8kwnzfKV3hqk&amp;cuid=3321886" rel="nofollow noopener" title="http://feedproxy.google.com/RaymondCamdensColdfusionBlog2">http://feedproxy.google.com...</a>" /&gt;</p><p>&lt;!-- Previous:<br>&lt;link rel="alternate" type="application/rss+xml" title="RSS" href="<a href="http://disq.us/url?url=http%3A%2F%2Ffeedproxy.google.com%2FRaymondCamdensColdfusionBlog%3Akhca0PMNMiyChsWkz5J0iplPuvk&amp;cuid=3321886" rel="nofollow noopener" title="http://feedproxy.google.com/RaymondCamdensColdfusionBlog">http://feedproxy.google.com...</a>" /&gt;<br>--&gt;</p><p>If the source code is valid XHTML, you can use XmlParse to get a DOM (and XmlSearch to obtain the href value).</p><p>If it's non-XML HTML then you need to resort to Java-based stuff. (Well, for ACF and OpenBD; Railo has HtmlParse function.)</p><p>Considering it's a web-based language, it really is a pity there isn't (more) support built-in for proper HTML parsing and DOM manipulation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728308">8</a> by Raymond Camden
		posted on 12/10/2010 at 5:51 PM
		</div>
		<div class="comment_text"><p>@Peter: I'd argue that it can - it may not be 100%, but is any solution 100%? Given your specific example, would that even be valid html? Shouldn't the inner &lt; and &gt; have to be escaped? How often is HTML valid XHTML? I'd doubt more than 1/3 if that much. Given that my solution works most of the time I'd call it more than acceptable solution. (But as it is my solution, I'm probably biased. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728306">9</a> by Peter Boughton
		posted on 12/10/2010 at 9:43 PM
		</div>
		<div class="comment_text"><p>You can't assume what you find on the Internet is valid HTML - hence my "wild" comment.<br>Browsers will accept &lt; and &gt; in attributes, even if it's not valid, and thus people will do that (and not realise their mistake).</p><p>If you're acting on specific known and unchanging content, regex can be used and may be good enough (assuming you know the rules of both HTML and regex well enough).</p><p>If you're writing software, and/or coping with unknown HTML, trying to use a regex can quickly get complicated and still not get you what you want.</p><p>Another example - entirely valid HTML that will trip your matches up in a few ways:</p><p>	&lt;link<br>	    type = 'application/xml'<br>	    href = './path/to/rss'<br>	/&gt;</p><p>If I *had* to extract RSS URLs with Regex, I'd probably end up with something like this:</p><p>	&lt;cfsavecontent trim variable="MatchHtmlCommentRegex"&gt;<br>		&lt;!--(?s:(?!&lt;!--|--&gt;).)+--&gt;<br>	&lt;/cfsavecontent&gt;</p><p>	&lt;cfsavecontent trim variable="MatchLinkTagRegex"&gt;<br>	(?six)<br>		&lt;link<br>			(          # &lt;attr&gt;<br>				\s++<br>				[\w-]++       # name<br>				\s*+=\s*+<br>				(?:<br>					[^'"]++    # unquoted value<br>					|<br>					'[^']*+'   # single-quoted value<br>					|<br>					"[^"]*+"   # double-quoted value<br>				)<br>			)+         # &lt;/attr&gt;<br>			\s*+<br>		/?&gt;<br>	&lt;/cfsavecontent&gt;</p><p>	&lt;cfset PossibleRssTypes = "application/rss+xml|application/xml|text/rss" /&gt;</p><p>	&lt;cfsavecontent trim variable="FilterRssLinkRegex"&gt;<br>	(?ix)<br>		\stype\s*+=\s*+<br>		['"](?:#ReQuote(PossibleRssTypes)#)['"]<br>	&lt;/cfsavecontent&gt;</p><p>	&lt;cfsavecontent trim variable="GetHrefRegex"&gt;<br>	(?six)<br>		(?&lt;=<br>			\shref\s*+=\s*+(['"])<br>		)<br>		(?:(?!\1).)+<br>	&lt;/cfsavecontent&gt;</p><p>	&lt;cfset HtmlText = cfhttp.fileContent.replaceAll( MatchHtmlCommentRegex , '' ) /&gt;</p><p>	&lt;cfloop index="CurLinkTag" array="#rematch( MatchLinkTagRegex , HtmlText )#"&gt;</p><p>		&lt;cfif refind( FilterRssLinkRegex , CurLinkTag ) &gt;</p><p>			&lt;cfset ArrayMerge( RssLinks , rematch( GetHrefRegex , CurLinkTag ) ) /&gt;</p><p>		&lt;/cfif&gt;</p><p>	&lt;/cfloop&gt;</p><p>And that *still* wouldn't be a 100% solution. (Even if you fix any mistakes I might have missed.)</p><p>(Btw, that wont run as-is, since it uses syntax constructs that CF's Apache ORO regex engine doesn't support.)</p><p>If those regex were written in traditional one-line format, how maybe people might decipher what's going on?</p><p>	&lt;!--(?s:(?!&lt;!--|--&gt;).)+--&gt;</p><p>	(?si)&lt;link(\s++[\w-]++\s*+=\s*+(?:[^'"]++|'[^']*+'|"[^"]*+"))+\s*+/?&gt;</p><p>	(?i)\stype\s*+=\s*+['"](?:#ReQuote(PossibleRssTypes)#)['"]</p><p>	(?si)(?&lt;=\shref\s*+=\s*+(['"]))(?:(?!\1).)+</p><p>Alternatively, here's something that *would* be a 100% solution:</p><p>	&lt;cfloop index="RssType" list="application/rss+xml,application/xml,text/rss"&gt;</p><p>		&lt;cfset CurHref = HtmlSearch<br>			( cfhttp.fileContent<br>			, '//link[type=#RssType#][@href]'<br>			) /&gt;</p><p>		&lt;cfset ArrayAppend( RssLinks , CurHref ) /&gt;</p><p>	&lt;/cfloop&gt;</p><p>Unarguably that's far more maintainable than the long buggy regex solution.</p><p>And you don't even need to know XPath to have an idea what's happening.</p><p>If only we had Html~ functions equivalent to the existing Xml~ functions... :(</p><p>Finally, here's a blog post that might have been simpler than than writing all the above, but I only remembered it after I'd done it all, so you can have both...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.codinghorror.com%2Fblog%2F2009%2F11%2Fparsing-html-the-cthulhu-way.html%3AqPydjgHDZFVknjlF9HPWm_KeC50&amp;cuid=3321886" rel="nofollow noopener" title="http://www.codinghorror.com/blog/2009/11/parsing-html-the-cthulhu-way.html">http://www.codinghorror.com...</a></p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728307">10</a> by Raymond Camden
		posted on 12/10/2010 at 9:50 PM
		</div>
		<div class="comment_text"><p>Interesting stuff there. :) Thanks - I'm still going to use my solution. Um... well, not that I have a -need- for it now. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728310">11</a> by Ben B
		posted on 12/11/2010 at 3:23 AM
		</div>
		<div class="comment_text"><p>In case you didn't follow the link out of the Coding Horror post, the HTML Regex parser answer on SO is one of my favorites.  Atwood's block quote doesn't do it justice:<br><a href="http://disq.us/url?url=http%3A%2F%2Fgoo.gl%2FuUO2E%3AzCSMU1EdObr8fXRfzJ-olf9fTSU&amp;cuid=3321886" rel="nofollow noopener" title="http://goo.gl/uUO2E">http://goo.gl/uUO2E</a><br>(still love you Ray!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728309">12</a> by Peter Boughton
		posted on 12/11/2010 at 7:06 AM
		</div>
		<div class="comment_text"><p>( The unobfuscated URL for it being: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fq%2F1732348%2F1732454%231732454%3AMju2NHpoLZRfxtGyPGmMcu9yohc&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/q/1732348/1732454#1732454">http://stackoverflow.com/q/...</a> )</p></div>
	</div>
</div>
		