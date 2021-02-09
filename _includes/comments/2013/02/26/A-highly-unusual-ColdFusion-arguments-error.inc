
<div class="comment" id="c_1713744737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744737">1</a> by Dave Oram
		posted on 2/27/2013 at 6:42 AM
		</div>
		<div class="comment_text"><p>Well done Jeremy. Wish I had know this a few days ago.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744752">2</a> by Raymond Camden
		posted on 2/27/2013 at 6:46 AM
		</div>
		<div class="comment_text"><p>Did you actually run into this too?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744751">3</a> by David Mitchell
		posted on 2/27/2013 at 6:46 AM
		</div>
		<div class="comment_text"><p>found the bug: <a href="https://disq.us/url?url=https%3A%2F%2Fbugbase.adobe.com%2Findex.cfm%3Fevent%3Dbug%26id%3D3505517%3AKWBRjQnrBhbSvsK32g0ENaE6X3s&amp;cuid=3321886" rel="nofollow noopener" title="https://bugbase.adobe.com/index.cfm?event=bug&amp;id=3505517">https://bugbase.adobe.com/i...</a></p><p>i have been struggling with this for a while now.  Good to know that I am not the only one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744753">4</a> by david oram
		posted on 2/27/2013 at 6:47 AM
		</div>
		<div class="comment_text"><p>Yeah - seen it recently - wierd eh!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744754">5</a> by Raymond Camden
		posted on 2/27/2013 at 6:49 AM
		</div>
		<div class="comment_text"><p>Wow, ok. Well, glad he found it and I'm glad I'm helping spread the word then. ;)</p><p>David - thanks for posting the bug link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744757">6</a> by Raymond Camden
		posted on 2/27/2013 at 6:50 AM
		</div>
		<div class="comment_text"><p>I added a note to the bug saying it happens in 10 as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744758">7</a> by Adam Cameron
		posted on 3/1/2013 at 12:33 AM
		</div>
		<div class="comment_text"><p>The repro case can be pared back much further than this:</p><p>&lt;!--- repro.cfm ---&gt;<br>&lt;cfscript&gt;<br>o = new C();<br>transaction {<br>	a=1;	// any statement at all<br>	o.f(arg1={key1="value 1"}); // only a problem with named args &amp; struct-literal notation<br>}<br>&lt;/cfscript&gt;</p><p>// C.cfc<br>component {</p><p>	function f(){<br>		writeDump(arguments);<br>	}</p><p>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744739">8</a> by Adam Cameron
		posted on 3/1/2013 at 12:34 AM
		</div>
		<div class="comment_text"><p>Blimey. And it's not just a transaction{} thing, it seems it's ANY block-level construct. This also does it:</p><p>&lt;cfscript&gt;<br>o = new C();<br>try {<br>	a=1;	// any statement at all<br>	o.f(arg1={key1="value 2"}); // only a problem with named args &amp; struct-literal notation<br>}<br>catch (any e){</p><p>}<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744740">9</a> by Raymond Camden
		posted on 3/1/2013 at 12:37 AM
		</div>
		<div class="comment_text"><p>Damn. Adam, please be sure to add a note to the bug report. This is pretty darn big. Does if{} also have the bug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744738">10</a> by Adam Cameron
		posted on 3/1/2013 at 12:38 AM
		</div>
		<div class="comment_text"><p>Indeed it doesn't even need the CFC:<br>&lt;cfscript&gt;<br>try {<br>	a=1;	// any statement at all<br>	f(arg1={key1="value 3"}); // only a problem with named args &amp; struct-literal notation<br>}<br>catch (any e){</p><p>}</p><p>function f(){<br>	writeDump(arguments);<br>}<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744744">11</a> by Adam Cameron
		posted on 3/1/2013 at 12:39 AM
		</div>
		<div class="comment_text"><p>Yes, it's with if() too.  Bloody hell.</p><p>&lt;cfscript&gt;<br>if(true) {<br>	a=1;	// any statement at all<br>	f(arg1={key1="value 3"}); // only a problem with named args &amp; struct-literal notation<br>}</p><p>function f(){<br>	writeDump(arguments);<br>}<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744742">12</a> by larry c. lyons
		posted on 3/1/2013 at 2:03 AM
		</div>
		<div class="comment_text"><p>A question, does this just happen with script based code or with the more traditional tag based stuff?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744741">13</a> by Raymond Camden
		posted on 3/1/2013 at 2:05 AM
		</div>
		<div class="comment_text"><p>What did you see when you tried it Larry? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744743">14</a> by larry c. lyons
		posted on 3/1/2013 at 2:17 AM
		</div>
		<div class="comment_text"><p>I'll have to try it this evening. These people here actually expect me to work. The nerve!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744745">15</a> by Raymond Camden
		posted on 3/1/2013 at 2:18 AM
		</div>
		<div class="comment_text"><p>Heh, bastards! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744747">16</a> by Louis
		posted on 3/1/2013 at 2:37 PM
		</div>
		<div class="comment_text"><p>Wow! This is fascinating. Has anyone checked CF&lt;10 or Railo?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744746">17</a> by Louis
		posted on 3/1/2013 at 2:42 PM
		</div>
		<div class="comment_text"><p>@ larry - Tags don't seem to be affected:</p><p>&lt;p&gt;CFScript&lt;/p&gt;</p><p>&lt;cfscript&gt;<br>	try {<br>	   a = 1;<br>	   f(arg1={key1="value 3"});<br>	}<br>	catch (any e){}</p><p>	function f(){<br>	   writeDump(arg1);<br>	}<br>&lt;/cfscript&gt;</p><p>&lt;p&gt;Tag Based&lt;/p&gt;</p><p>&lt;cftry&gt;<br>	&lt;cfset a = 1&gt;<br>	&lt;cfset f2(arg1={key1="value 3"})&gt;<br>    &lt;cfcatch type="any"&gt;<br>    &lt;/cfcatch&gt;<br>&lt;/cftry&gt;</p><p>&lt;cffunction name="f2"&gt;<br>    &lt;cfdump var="#arg1#"&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744748">18</a> by Bill Davidson
		posted on 3/8/2013 at 9:17 AM
		</div>
		<div class="comment_text"><p>Yeah - Larry. Back to work. Why would you be using tags anyways?  :)</p><p>Seriously - this a pretty big issue. I wonder if I have hit this before and just thought it was me!</p></div>
	</div>
</div>
		