
<div class="comment" id="c_1713677788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677788">1</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 3/4/2008 at 4:00 AM
		</div>
		<div class="comment_text"><p>@Ray - I put up a similar entry on this exact issue back in November, but took a slightly different approach:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.cutterscrossing.com%2Findex.cfm%2F2007%2F11%2F30%2FCF8-Ajax-Grid-Renderers-and-Events%3APpk8OGcHYgzSS_Y1cAyOI1brbQY&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.cutterscrossing.com/index.cfm/2007/11/30/CF8-Ajax-Grid-Renderers-and-Events">http://blog.cutterscrossing...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677798">2</a> by Raymond Camden
		posted on 3/4/2008 at 4:09 AM
		</div>
		<div class="comment_text"><p>Sorry, but different approaches are now allowed here. Please delete your blog entry.</p><p>(;)</p><p>That definitely looks like the preferred way of doing the 'column as a button' type action. Post on the first entry as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677801">3</a> by Ron McKay
		posted on 3/11/2008 at 11:51 PM
		</div>
		<div class="comment_text"><p>Ray, When implementing the sample you have here...I keep running into problems.  The first issue is when the ADD button is clicked a 2nd time we are getting this error as reported from FireBug:</p><p>MyProxy is not a constructor<br>   MyProxy(121)<br>   onclick(click clientX=0, clientY=0)</p><p>The other issue is when the new MyProxy is outside of the function "testit" I immediately get the "MyProxy is not a constructor" error.  When I move it inside the testit function I get the error after the ADD button is clicked the 2nd time.  The first time the ADD button is clicked it works fine and the way it should.  It is the subsequent clicks where the problem begins.</p><p>Here is the current JavaScript:<br>&lt;script language="javascript" type="text/javascript"&gt;<br>   function testit(x) {<br>	MyProxy = new MyProxy();<br>	MyProxy.setCallbackHandler(handleResult);<br>	MyProxy.getData(x);<br>	}<br>   function handleResult(r) {<br>        alert("Result: "+r);<br>	}<br>&lt;/script&gt;</p><p>Any ideas on what I might be missing?</p><p>Ron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677795">4</a> by Ron McKay
		posted on 3/12/2008 at 1:40 AM
		</div>
		<div class="comment_text"><p>Ok, never mind... The reason I was getting the error was because the &lt;cfajaxproxy&gt; and &lt;script&gt; statements were outside of my &lt;cfsavecontent&gt; variable.  That was causing the ajax proxy to load AFTER the JavaScript function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677802">5</a> by Wayne Pankey
		posted on 12/6/2008 at 3:31 AM
		</div>
		<div class="comment_text"><p>Hi All.  This example worked great!  One problem...  How do I pass multiple grid values to my proxied function?  Is this possible?</p></div>
	</div>
</div>
		