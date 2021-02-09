
<div class="comment" id="c_1713681607">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681607">1</a> by Ben Nadel
		posted on 6/9/2008 at 5:27 PM
		</div>
		<div class="comment_text"><p>I remember when we had to go and fix this on a few dozen sites a few years ago :) Good times, good times. For my money, I don't know if it gets any better than nameconflict="makeunique".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681616">2</a> by joshua cyr
		posted on 6/9/2008 at 5:29 PM
		</div>
		<div class="comment_text"><p>If I remember right, a patch was also made to change back to previous behavior, all the way up to 8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681613">3</a> by CoolJJ
		posted on 6/10/2008 at 2:01 AM
		</div>
		<div class="comment_text"><p>This reminds me of a problem I never resolved a while back. How to get &lt;cffile action="readbinary" file="C:\#FileName#" variable="myFile" &gt; to work when the file name has spaces in it assuming you can't rename the file.</p><p>CoolJJ</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681615">4</a> by Raymond Camden
		posted on 6/10/2008 at 4:48 AM
		</div>
		<div class="comment_text"><p>Eh? It works just fine for me. Example:</p><p>&lt;cfset thefile = expandPath("./document copy.pdf")&gt;<br>&lt;cfif fileExists(thefile)&gt;<br>	&lt;cfoutput&gt;reading #thefile#&lt;/cfoutput&gt;<br>	&lt;cffile action="readbinary" file="#thefile#" variable="bits"&gt;<br>&lt;/cfif&gt;</p><p>This runs ok on my 8.0.1 install.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681608">5</a> by CoolJJ
		posted on 6/10/2008 at 5:14 AM
		</div>
		<div class="comment_text"><p>Aarrrggghhh! I was totally looking in the wrong place for the error. I hate it when I do that. Should have wrote a little test snippet like that and I would have figured it out. A url encoding error is what was screwing me up.</p><p>CoolJJ</p></div>
	</div>
</div>
		