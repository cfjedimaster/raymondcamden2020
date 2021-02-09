
<div class="comment" id="c_1714081702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081702">1</a> by Peter Boughton
		posted on 2/10/2014 at 10:10 PM
		</div>
		<div class="comment_text"><p>Here's a better version:</p><p>	function fixNewLine(s)<br>	{<br>		return s.replaceAll('\r(?!\n)','\n').replaceAll('\r','')<br>	}</p><p>It removes all carriage returns in all situations, because they're a waste of space and rarely actually required. The sooner they are forgotten as a quirk of computing history and stop causing unnecessary extra code, the better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081704">2</a> by Raymond Camden
		posted on 2/10/2014 at 10:22 PM
		</div>
		<div class="comment_text"><p>Better being a point of view. ;) In my case, I'd disagree since the point was to replicate the behavior - right or wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081705">3</a> by Phillip Senn
		posted on 2/10/2014 at 10:43 PM
		</div>
		<div class="comment_text"><p>I've been thinking about your encouragement to post into ColdFusion UI, the right way. and one of the reasons I'm hesitating is because I have a unique point of view on how to write everything in both ColdFusion and JavaScript.  I'm sure that if I were to post a "chapter" in ColdFusion UI the right way, both you and Adam would ask "Why do you do it that way?" and would proceed to correct it.</p><p>I touched on this as a comment to an earlier blog post of yours, so the irony is not lost.<br>I guess what I'm saying is that I think it's great that you and Adam are publishing "The right way" according to your point of view, and I'm watching that github project closely.</p><p>For me to show an example, I would want to have control over the editing.<br>So: I guess, maybe, I need to change my attitude?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081701">4</a> by Raymond Camden
		posted on 2/10/2014 at 10:49 PM
		</div>
		<div class="comment_text"><p>Phillip, these are valid questions, but can I ask why you didn't post it on the blog entry? This comment is really OT here and I'd suggest you post it there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081682">5</a> by Phillip Senn
		posted on 2/10/2014 at 10:51 PM
		</div>
		<div class="comment_text"><p>Oh, it's because you said that "Better being a point of view" in this blog post, but sure, I will post it to the other.<br>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081689">6</a> by Cutter
		posted on 2/11/2014 at 12:52 AM
		</div>
		<div class="comment_text"><p>How about:</p><p>&lt;code&gt;<br>function fixNewLine(s) {<br>	return rereplace(s, "\r\n|\n|\r", ((<a href="http://disq.us/url?url=http%3A%2F%2Fserver.os.name%3AHlDumE242HAIhh05SIfD6NUAGqc&amp;cuid=3321886" rel="nofollow noopener" title="server.os.name">server.os.name</a> contains "windows") ? chr(13) : "") &amp; chr(10), "all");<br>}<br>&lt;/code&gt;</p><p>Would that work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081706">7</a> by Raymond Camden
		posted on 2/11/2014 at 2:08 AM
		</div>
		<div class="comment_text"><p>Yes, but only if you want to be fancy and shit. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081686">8</a> by Edward Beckett
		posted on 2/16/2014 at 5:48 AM
		</div>
		<div class="comment_text"><p>What about?</p><p>&lt;cfscript&gt;<br>ls = createObject("java", "java.lang.System").getProperty("line.separator");<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081684">9</a> by Raymond Camden
		posted on 2/18/2014 at 7:56 AM
		</div>
		<div class="comment_text"><p>That doesn't do what the UDF does - it just tells you what the separator is.</p></div>
	</div>
</div>
		