
<div class="comment" id="c_1713741783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741783">1</a> by Brian Swartzfager
		posted on 6/19/2012 at 4:17 PM
		</div>
		<div class="comment_text"><p>Scott also mentioned it on a CFHour podcast; that's where I remember it from.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741782">2</a> by Brian Kotek
		posted on 6/19/2012 at 6:34 PM
		</div>
		<div class="comment_text"><p>Or you can use my Form Utilities CFC (<a href="http://disq.us/url?url=http%3A%2F%2Fformutils.riaforge.org%2F%29%3AwYqYb6dRzc_Z6YrzYhXKxJzuT8g&amp;cuid=3321886" rel="nofollow noopener" title="http://formutils.riaforge.org/)">http://formutils.riaforge.o...</a> which does far more. :-)</p><p>I've been trying to get them to build this in for a while but interestingly, the bug tracker issue was marked as a duplicate for the fix you mention here, even though it's definitely not a duplicate! I'll have to pester the dev team...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741781">3</a> by Ryan Stille
		posted on 6/20/2012 at 2:41 AM
		</div>
		<div class="comment_text"><p>Great to see this is built into CF10. I wrote a function that pulls form fields as an array that can be used on older versions of CF. Its on CFlib: <a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%2Findex.cfm%3Fevent%3Dpage.udfbyid%26udfid%3D2130%3AMPA9Z_dgPeEAaHD5MFLiE8uHhkI&amp;cuid=3321886" rel="nofollow noopener" title="http://cflib.org/index.cfm?event=page.udfbyid&amp;udfid=2130">http://cflib.org/index.cfm?...</a></p><p>and here is my blog post about it: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.stillnetstudios.com%2Fcf-form-array-comma-workaround%2F%3A-6_ZxP-nHvaIOf9pwlA_BkmfTl4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.stillnetstudios.com/cf-form-array-comma-workaround/">http://www.stillnetstudios....</a></p><p>I wonder if the CF10 feature handles multipart/form-data POSTs? That was something I had to work around in my function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741785">4</a> by Raymond Camden
		posted on 6/20/2012 at 6:13 PM
		</div>
		<div class="comment_text"><p>Ryan: Try it and see. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741788">5</a> by Ben Nadel
		posted on 7/8/2012 at 10:33 PM
		</div>
		<div class="comment_text"><p>This will definitely make a particular class of problems a lot easier to solve. No more passing extraneous, hidden elements as additional identifiers for groups of elements.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741784">6</a> by Luke Nickerson
		posted on 9/19/2013 at 12:31 AM
		</div>
		<div class="comment_text"><p>Unfortunately this seems to get more complicated when you have input names with differing cases. Try the following in CF10...<br>&lt;form method="post"&gt;<br>	&lt;input type="text" name="name"&gt;<br>	&lt;input type="text" name="NAME"&gt;<br>	&lt;input type="text" name="name"&gt;<br>	&lt;input type="submit"&gt;<br>&lt;/form&gt;<br>...and the form struct will only have the value from the middle input. What's going on here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741786">7</a> by Raymond Camden
		posted on 9/19/2013 at 6:17 PM
		</div>
		<div class="comment_text"><p>I'm not seeing this with CF10/latest patch. Are you fully patched?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741789">8</a> by Luke Nickerson
		posted on 9/19/2013 at 7:28 PM
		</div>
		<div class="comment_text"><p>Raymond - Thanks, you're right. It must have been a bug that was fixed in one of the recent updates. If anyone else experiences this in CF10 (before update 9), just do an update to the latest. It's fixed as of update 11.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741791">9</a> by Raymond Camden
		posted on 12/5/2013 at 8:12 AM
		</div>
		<div class="comment_text"><p>So - I just recommended this to a CF noob... and then I remembered the damn "if blank, compact the array" - which totally makes this pointless. He had 3 sets of fields, and really needs them to match up.</p><p>Damn.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741787">10</a> by Raymond Camden
		posted on 12/5/2013 at 8:15 AM
		</div>
		<div class="comment_text"><p>Looks like a bug was filed: <a href="https://disq.us/url?url=https%3A%2F%2Fbugbase.adobe.com%2Findex.cfm%3Fevent%3Dbug%26id%3D3560964%3A46APswUp4WcaPomH2JJ5VlofWck&amp;cuid=3321886" rel="nofollow noopener" title="https://bugbase.adobe.com/index.cfm?event=bug&amp;id=3560964">https://bugbase.adobe.com/i...</a></p></div>
	</div>
</div>
		