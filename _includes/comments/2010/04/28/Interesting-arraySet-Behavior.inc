
<div class="comment" id="c_1713723820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723820">1</a> by Chris Blackwell
		posted on 4/28/2010 at 3:53 PM
		</div>
		<div class="comment_text"><p>There's a similar gotcha with udf's &amp; loops too, as this example shows - <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FWbYMRUwM%3AlRImm4ZR4DIjYU4j5uXneTyN0q8&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/WbYMRUwM">http://pastebin.com/WbYMRUwM</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723831">2</a> by Raymond Camden
		posted on 4/28/2010 at 3:55 PM
		</div>
		<div class="comment_text"><p>(FYI, for future reference, I think a code sample like that is short enough to be in the comment. Up to you though. :)</p><p>You could fix that by changing:</p><p>#event.linkto("some.event", {id=<a href="http://disq.us/url?url=http%3A%2F%2Fq.id%3AZrq8QCNRress3lmAtRCeR-7VUIc&amp;cuid=3321886" rel="nofollow noopener" title="q.id">q.id</a>})#</p><p>to</p><p>#event.linkto("some.event", {id=<a href="http://disq.us/url?url=http%3A%2F%2Fq.id%3AZrq8QCNRress3lmAtRCeR-7VUIc&amp;cuid=3321886" rel="nofollow noopener" title="q.id">q.id</a>[currentRow]})#</p><p>but I can see how one would expect the original version to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723830">3</a> by David Hammond
		posted on 4/28/2010 at 5:41 PM
		</div>
		<div class="comment_text"><p>@Chris, that is a curious bug.  At least it seems like a bug to me.  It must have something to do with how CF deals with structure literals withing functions -- that's something that was added in CF9.  My first thought was, you should be able to do this:</p><p>#event.linkto("some.event", {id=id})#</p><p>But that produces an error "Variable ID is undefined".  So I thought, wait a minute, if that produces an error, can you really do what Ray says and use currentrow?  In fact you can't.  In my test I got "Variable CURRENTROW is undefined".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723839">4</a> by Raymond Camden
		posted on 4/28/2010 at 5:44 PM
		</div>
		<div class="comment_text"><p>What?? I call BS. :) But I didn't run it. Doing so now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723833">5</a> by David Hammond
		posted on 4/28/2010 at 5:47 PM
		</div>
		<div class="comment_text"><p>:-)  I would have called BS too.  Here is my test code:</p><p>&lt;cfoutput query="q"&gt;<br>	#test({id=<a href="http://disq.us/url?url=http%3A%2F%2Fq.id%3AZrq8QCNRress3lmAtRCeR-7VUIc&amp;cuid=3321886" rel="nofollow noopener" title="q.id">q.id</a>[currentrow]})#<br>&lt;/cfoutput&gt;<br>&lt;cffunction name=test output="true"&gt;<br>	&lt;cfargument name="s" type="struct"&gt;<br>	#<a href="http://disq.us/url?url=http%3A%2F%2Fs.id%3AnhZjeewsPhOPZBf3nPWHMCeaUpM&amp;cuid=3321886" rel="nofollow noopener" title="s.id">s.id</a>#<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723837">6</a> by Raymond Camden
		posted on 4/28/2010 at 5:51 PM
		</div>
		<div class="comment_text"><p>Wow, I stand corrected!  Given this code:</p><p>&lt;cfquery name="art" datasource="cfartgallery"&gt;<br>select artid, artname<br>from art<br>&lt;/cfquery&gt;</p><p>&lt;cfscript&gt;<br>function foo(struct s) {<br>	return serializeJSON(s);<br>}<br>&lt;/cfscript&gt;</p><p>&lt;cfdump var="#art#" top=3&gt;<br>&lt;cfoutput query="art"&gt;<br>	&lt;cfset x = artid[currentrow]&gt;<br>	&lt;!---calling foo with #artid# = #foo({id=art.artid[currentrow]})#&lt;br/&gt;---&gt;<br>	&lt;!--- calling foo with #artid# = #foo({id=x})#&lt;br/&gt; ---&gt;<br>	&lt;cfset y = {id=artid}&gt;<br>	calling foo with #artid# = #foo(y)#&lt;br/&gt;<br>&lt;/cfoutput&gt;</p><p>The two items commented out both failed. I'm going to file bug reports on this guys - and I apologize for assuming.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723840">7</a> by Raymond Camden
		posted on 4/28/2010 at 5:58 PM
		</div>
		<div class="comment_text"><p>Bug filed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723838">8</a> by David Hammond
		posted on 4/28/2010 at 6:06 PM
		</div>
		<div class="comment_text"><p>Thanks, Ray.  This is disappointing because I was really looking forward to using this kind of code freely (I still have to target CF8 for my current projects.)</p><p>One additional note: this doesn't produce an error:<br>test({id=<a href="http://disq.us/url?url=http%3A%2F%2Fq.id%3AZrq8QCNRress3lmAtRCeR-7VUIc&amp;cuid=3321886" rel="nofollow noopener" title="q.id">q.id</a>[q.currentrow]})<br>but it has the same problem as test({id=<a href="http://disq.us/url?url=http%3A%2F%2Fq.id%3AZrq8QCNRress3lmAtRCeR-7VUIc&amp;cuid=3321886" rel="nofollow noopener" title="q.id">q.id</a>}).  I guess the structure is being created outside of the cfoutput scope.</p></div>
	</div>
</div>
		