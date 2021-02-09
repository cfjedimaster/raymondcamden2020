
<div class="comment" id="c_1713669460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669460">1</a> by Lola LB
		posted on 8/2/2007 at 4:05 AM
		</div>
		<div class="comment_text"><p>Taking another look at layout.cfm, I noticed some code at the bottom, having to do Google Analytics.  This is specifically for *your* ColdFusion Bloggers site, right?  If so, it'd probably be wise to advise users to remove this code or replace with their own Google Analytics account.  ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669476">2</a> by Toby Reiter
		posted on 8/2/2007 at 4:11 AM
		</div>
		<div class="comment_text"><p>Ray,<br>Wouldn't you be better off with the following?</p><p>&lt;cfset portion = reReplace(portion, "&lt;[^&gt;]*$", "")&gt;</p><p>Assuming CF uses a greedy regex search, which I think it does, wouldn't that strip out "&lt;b&gt;fun&lt;/b&gt; and games!" from "Look here for &lt;b&gt;fun&lt;/b&gt; and games"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669473">3</a> by Steve Bryant
		posted on 8/2/2007 at 4:35 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I recently modified my local copy of your StripHTML() UDF to the following to solve that issue:</p><p>REReplaceNoCase(str,"(&lt;|^)[^&gt;]*(&gt;|$)","","ALL")</p><p>Seems to do the trip. Meant to post that to cflib, but I haven't gotten around to it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669468">4</a> by Tom Chiverton
		posted on 8/2/2007 at 12:11 PM
		</div>
		<div class="comment_text"><p>Ray, what if I post text that says<br>"the cost of coldfusion is &lt; than the cost of .Net"<br>?<br>Won't you're reg. exp. swallow the whole 2nd half of the post ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669466">5</a> by Raymond Camden
		posted on 8/2/2007 at 4:09 PM
		</div>
		<div class="comment_text"><p>@Lola - good point. I'll add that to the next build.</p><p>@Toby - CF has both greedy and non greedy. The form I used was non greedy.</p><p>@Steve - if you email me directly I can double check and do a update on cflib.</p><p>@Tom - Crap. I hope you are wrong, but I'll do a test later today. Of course, if a person did that, they should have escaped it, not typed aliteral &lt;. So that shouldn't happen normally, AND if it does, it just trims down their summary a bit. So I'd probably not be too worried about it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669462">6</a> by Adam Tuttle
		posted on 8/2/2007 at 5:35 PM
		</div>
		<div class="comment_text"><p>The literal "&lt;" is actually invalid in RSS feeds. That doesn't mean that it won't show up there - but if your blog software does its job correctly, it will escape characters like that when it builds the RSS.</p></div>
	</div>
</div>
		