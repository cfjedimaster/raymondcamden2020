
<div class="comment" id="c_1713728602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728602">1</a> by Tony Nelson
		posted on 12/30/2010 at 8:43 PM
		</div>
		<div class="comment_text"><p>Another approach would be to update the generated content inside the fancybold custom tag, like so:</p><p>&lt;cfif thisTag.executionMode is "start"&gt;<br>	&lt;span style="font-size:20px;color:red"&gt;<br>&lt;cfelse&gt;<br>	&lt;cf_bold&gt;&lt;cfoutput&gt;#thisTag.generatedContent#&lt;/cfoutput&gt;&lt;/cf_bold&gt;<br>	&lt;cfset thisTag.generatedContent = "" /&gt;<br>	&lt;/span&gt;<br>&lt;/cfif&gt;</p><p>This allows you to leave the bold custom tag unchanged.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728578">2</a> by Raymond Camden
		posted on 12/30/2010 at 9:33 PM
		</div>
		<div class="comment_text"><p>That's a good option too Tony!</p></div>
	</div>
</div>
		