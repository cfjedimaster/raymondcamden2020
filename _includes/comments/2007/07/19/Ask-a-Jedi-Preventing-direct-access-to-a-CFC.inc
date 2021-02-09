
<div class="comment" id="c_1713668569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668569">1</a> by Dave Ferguson
		posted on 7/19/2007 at 6:16 PM
		</div>
		<div class="comment_text"><p>For added fun to get around the cf admin to display the cfc data you can always do this below the cfcomponent tag.  This will just dump the info about the cfc.  It will also give you its dot notation path.</p><p>&lt;cfif not structKeyExists(url, "method")&gt;<br>     &lt;CFDUMP VAR="#this#"&gt;	<br>     &lt;CFABORT&gt;<br>&lt;/cfif&gt;</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668570">2</a> by Raymond Camden
		posted on 7/19/2007 at 6:31 PM
		</div>
		<div class="comment_text"><p>You could also get the descriptor yourself, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflib.org%2Fudf.cfm%3FID%3D1332%3A9RgDhFraRhrLW2zj900c12EWN-4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflib.org/udf.cfm?ID=1332">http://www.cflib.org/udf.cf...</a>, but doing this on every hit would suck. I'd probably run it once - get the PDF, save it, and then link to the PDF from the CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668571">3</a> by jax
		posted on 7/19/2007 at 6:57 PM
		</div>
		<div class="comment_text"><p>Another way of preventing direct access to a cfc is to put them in a directory that only the localhost has access to.</p><p>Of course that may not be the answer to the Ajax problem mentioned here, but then again, put a cfm in between.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668574">4</a> by Raymond Camden
		posted on 7/19/2007 at 7:00 PM
		</div>
		<div class="comment_text"><p>@jax - I think in this case though he really does want access to the CFC, just not w/o a method. I maybe should have named the blog entry a bit better. If other folks thought what jax did - let me know and I'll perform an edit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668582">5</a> by William from Lagos
		posted on 7/19/2007 at 8:20 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>I copied and pasted your just as it is, but a blank screen when I ran it.</p><p>Why is that happening?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668580">6</a> by Raymond Camden
		posted on 7/19/2007 at 9:27 PM
		</div>
		<div class="comment_text"><p>Anyone else seeing this? What version of CF are you on?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668583">7</a> by William from Lagos
		posted on 7/19/2007 at 10:17 PM
		</div>
		<div class="comment_text"><p>Server Product  ColdFusion MX  <br>Version  7,0,2,142559    <br>Edition  Developer    <br>Serial Number  Developer    <br>Operating System  Windows XP    <br>OS Version  5.1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668584">8</a> by Raymond Camden
		posted on 7/19/2007 at 10:21 PM
		</div>
		<div class="comment_text"><p>Odd. I know Mark tested his code elsewhere. Can anyone else reproduce this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668597">9</a> by Jeremy Prevost
		posted on 7/20/2007 at 2:13 AM
		</div>
		<div class="comment_text"><p>It works as advertised for me on both CF8 (mac) and CF7 Enterprise (win).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668596">10</a> by Charles G.
		posted on 7/20/2007 at 2:18 AM
		</div>
		<div class="comment_text"><p>Let's say you wanted the default behavior to run this sayHi method like you setup, if you really wanted a way to view the documentation could you in turn modify it like this?</p><p>&lt;cfif NOT StructKeyExists(URL, "method")&gt;<br>   &lt;cfset URL.method = "sayHi" /&gt;<br>&lt;cfelseif URL.method IS "viewDocs"&gt;<br>   &lt;cfset URL.method = "" /&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668595">11</a> by Raymond Camden
		posted on 7/20/2007 at 9:09 AM
		</div>
		<div class="comment_text"><p>Charles, I haven't tested that - but I bet it would work. Why not try it and let us know. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668712">12</a> by jax
		posted on 7/20/2007 at 12:16 PM
		</div>
		<div class="comment_text"><p>@Ray:<br>Right, my bad. I missed the 'remote' part.   :-)<br>My 'solution' then of course makes no sense.</p></div>
	</div>
</div>
		