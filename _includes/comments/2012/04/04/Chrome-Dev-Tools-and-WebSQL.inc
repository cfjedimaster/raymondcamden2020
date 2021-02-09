
<div class="comment" id="c_1713740479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740479">1</a> by Dan
		posted on 4/4/2012 at 6:53 PM
		</div>
		<div class="comment_text"><p>I tried this on a regular website and a locally hosted website however I didn't see any database listed. What type of databases does this inspect?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740486">2</a> by Raymond Camden
		posted on 4/4/2012 at 6:58 PM
		</div>
		<div class="comment_text"><p>WebSQL - a db usable via JavaScript. Chrome supports it, Firefox does not.</p><p>Details: <a href="http://disq.us/url?url=http%3A%2F%2Fcaniuse.com%2F%23feat%3Dsql-storage%3AkhPOogZaUfYeGlg5vFIkr94FJXk&amp;cuid=3321886" rel="nofollow noopener" title="http://caniuse.com/#feat=sql-storage">http://caniuse.com/#feat=sq...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740481">3</a> by Mike Goeppner
		posted on 4/5/2012 at 12:31 AM
		</div>
		<div class="comment_text"><p>W3 completely deprecated WebSQL (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fwebdatabase%2F%29%3A5jmo7pjmIa86bazNtUNSOknVw4g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/webdatabase/)">http://www.w3.org/TR/webdat...</a>. I remember the Firefox devs thought it was problematic (based on SQLite, etc) and implemented IndexedDB instead.</p><p>IndexedDB (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2FIndexedDB%2F%29%3AjcD-mEIy0NHNm658a8HfORF8w4g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/IndexedDB/)">http://www.w3.org/TR/Indexe...</a> and session/localStorage (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fwebstorage%2F%29%3AE96-YCBP1ILl_brli8C75UVjNFg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/webstorage/)">http://www.w3.org/TR/websto...</a> replaced WebSQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740482">4</a> by Raymond Camden
		posted on 4/5/2012 at 12:33 AM
		</div>
		<div class="comment_text"><p>My understanding is that it was deprecated because everyone like SQLite and the W3C insisted on another implementation. That's sad IMO. I have nothing against IndexedDB - but in terms of simplicity, WebSQL is far easier to work with.</p><p>That being said - this is for PhoneGap, where WebSQL is supported. While testing in Chrome though the tool is very useful, and I don't believe Chrome is going to remove it anytime soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740483">5</a> by Raymond Camden
		posted on 4/5/2012 at 12:34 AM
		</div>
		<div class="comment_text"><p>BTW -your web page is incredible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740485">6</a> by Mike Goeppner
		posted on 4/5/2012 at 12:37 AM
		</div>
		<div class="comment_text"><p>Thank you very much!</p><p>It works as well if you know your *nix commands (If you can't get focus on the editable line, press enter a few times).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740487">7</a> by Raymond Camden
		posted on 4/5/2012 at 12:59 AM
		</div>
		<div class="comment_text"><p>I will say when I did "su" and then "ls", it seemed to lock up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740484">8</a> by Mike Goeppner
		posted on 4/5/2012 at 1:02 AM
		</div>
		<div class="comment_text"><p>Thanks for pointing that bug out!</p><p>Try su &lt;tumblr username here&gt; then ls.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740488">9</a> by Raymond Camden
		posted on 4/5/2012 at 1:07 AM
		</div>
		<div class="comment_text"><p>Oh heh - I don't use tumblr. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740490">10</a> by Marcin
		posted on 4/5/2012 at 2:57 AM
		</div>
		<div class="comment_text"><p>Actually if you click on the database in the resource panel ("main" in your example) you get a console in the main pane where you can write arbitrary SQL.</p><p>It seems that table names are all lowercase though - I had a table that showed in the left column as "Transaction" but had to do "select * from transaction" to get it to work.</p><p>Don't know if there are any magic commands for showing schema, the sqlite ones didn't seem to work (eg. ".schema")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740495">11</a> by Marcin
		posted on 4/5/2012 at 3:00 AM
		</div>
		<div class="comment_text"><p>Oh yeah, also check out persistence.js - <a href="http://disq.us/url?url=http%3A%2F%2Fpersistencejs.org%2F%3Ah1zFNgACfcQztwE74M8dLQdJRS0&amp;cuid=3321886" rel="nofollow noopener" title="http://persistencejs.org/">http://persistencejs.org/</a> - it's a JS ORM for (amongst other things) WebSQL.</p><p>I actually just started working on a project that's using PhoneGap and local SQL storage.  The asynchronous nature of it can be a bit of a pain sometimes!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740492">12</a> by Raymond Camden
		posted on 4/5/2012 at 5:58 PM
		</div>
		<div class="comment_text"><p>Dude - EPIC find there. Thank you for sharing that.</p><p>It also has autocomplete which kicks butt too.</p><p>I'm not seeing the case issue you are though. I'm on Chrome 19something or another so maybe my build is a bit ahead.</p><p>But thank you - thank you - thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740494">13</a> by Raymond Camden
		posted on 4/5/2012 at 7:10 PM
		</div>
		<div class="comment_text"><p>Note - edited the blog to make it clear. Some folks don't read comments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740496">14</a> by Me
		posted on 5/27/2014 at 11:27 AM
		</div>
		<div class="comment_text"><p>While HTML and JS suck in every possible aspect of examination, people keep shoving more stuff (of highly questionable quality) inside the browsers. Having my experience spread from desktop programming to web programming, I can say with certainty that web programming is the most boring, annoying, security risky, counterproductive, immature, lousy designed and hackish programming I have ever experienced. The web MUST be redesigned from scratch.</p><p>Of course, this will make your favorite ringing toys not to work for some time, so it's not gonna happen. So, this is the reason the web will remain broken and ugly for a long long time. Petty for us having to make mirracles happen. Perhaps the final outcome of all this hacking turns out to be fancy and even amazing but it is still ugly and bad as hell underneath the surface.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713740497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713740497">15</a> by Raymond Camden
		posted on 5/27/2014 at 2:31 PM
		</div>
		<div class="comment_text"><p>Wow, what a completely depressing attitude. :) I disagree completely. Don't get me wrong, web development isn't perfect (of course, what platform *is* perfect), but I find working in it (especially these last few years) to be a joy. This "highly questionable quality" of stuff you describe are things that making it easier for web developers to create better sites and applications. Sometimes these new features need to get tweaked before release (hence the use of prefixes and flags), but I know I appreciate the the additional power we're getting within the browser.</p></div>
	</div>
</div>
		