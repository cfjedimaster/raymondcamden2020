
<div class="comment" id="c_1713660247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660247">1</a> by Patrick Correia
		posted on 12/14/2006 at 9:30 PM
		</div>
		<div class="comment_text"><p>I didn't know that CFLOGIN would parse the authentication headers like that -- pretty neat.</p><p>I might also humbly suggest that an article I wrote for CFDJ has a code sample showing how to parse the authentication information directly out of the header.  It's base64 encoded, so you can decode it using a combination of ToBinary() and ToString().  (Thanks Adobe, that's totally obvious.)  I guess if CFLOGIN does this automatically, that's probably easiest, unless you care where the authentication info came from.</p><p>The article is here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fcoldfusion.sys-con.com%2Fread%2F230503.htm%3ATnlJAem02Vb8f0Y2JWeuD98lps8&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfusion.sys-con.com/read/230503.htm">http://coldfusion.sys-con.c...</a></p><p>And the code sample is here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fres.sys-con.com%2Fstory%2Fjun06%2F230503%2Fsource.html%3A9Ktn1nZ3CpVObXS7EvOxRsgMCZ0&amp;cuid=3321886" rel="nofollow noopener" title="http://res.sys-con.com/story/jun06/230503/source.html">http://res.sys-con.com/stor...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660251">2</a> by Dave Dugdale
		posted on 2/12/2009 at 4:10 AM
		</div>
		<div class="comment_text"><p>&lt;cfsavecontent variable="dumpage"&gt;<br>&lt;cfoutput&gt;<br>&lt;cflogin&gt;<br>   &lt;cfdump var="#cflogin#"&gt;<br>&lt;/cflogin&gt;<br>&lt;/cfoutput&gt;<br>&lt;/cfsavecontent&gt;</p><p>&lt;cfoutput&gt;<br>#dumpage#<br>&lt;/cfoutput&gt;</p><p>I am trying to troubleshoot why I am getting logged out in my application. I would like to cfdump the cflogin vars to help me find where I am screwing up. But this code doesn't display anything. What other ways can I troubleshoot the cflogin vars?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660252">3</a> by Raymond Camden
		posted on 2/13/2009 at 8:30 PM
		</div>
		<div class="comment_text"><p>It depends on what context you are running the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660254">4</a> by Dave Dugdale
		posted on 2/13/2009 at 8:53 PM
		</div>
		<div class="comment_text"><p>Context:</p><p>Within my application I am currently logged in and I am running that code above by itself on test.cfm.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660253">5</a> by Raymond Camden
		posted on 2/15/2009 at 8:30 PM
		</div>
		<div class="comment_text"><p>If you are logged in, then you will get nothing. CF only runs code INSIDE cflogin pairs when you aren't logged in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660257">6</a> by Dave Dugdale
		posted on 2/16/2009 at 4:45 AM
		</div>
		<div class="comment_text"><p>Oh yea, I forgot about that.</p></div>
	</div>
</div>
		