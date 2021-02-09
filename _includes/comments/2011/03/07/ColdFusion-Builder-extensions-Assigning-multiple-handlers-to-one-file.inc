
<div class="comment" id="c_1713730264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730264">1</a> by Dave Ferguson
		posted on 3/8/2011 at 6:38 AM
		</div>
		<div class="comment_text"><p>Great suggestion in getting around this issue.  The only change I would make is this:</p><p>&lt;cfset request.requested = ListFirst(ListLast(arguments.targetpage, "/"), ".")&gt;</p><p>From what I have seen targetpage contains the full path to the template.  This modification just gets the template name minus extension from the string.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730237">2</a> by Raymond Camden
		posted on 3/9/2011 at 5:56 AM
		</div>
		<div class="comment_text"><p>Yep, and makes your code a bit simpler if you have a set of CFIFs. Ie,</p><p>&lt;cfif action is "run"&gt;</p><p>instead of</p><p>&lt;cfif action is "run.cfm"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713730260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713730260">3</a> by Dave Ferguson
		posted on 3/12/2011 at 8:22 PM
		</div>
		<div class="comment_text"><p>For this interested, I used this technique to create this extension.. <a href="http://disq.us/url?url=http%3A%2F%2Fjqmobilehelper.riaforge.org%2F%3AU0W0ZD6aLLSWJL0VVCNsM3t2S3s&amp;cuid=3321886" rel="nofollow noopener" title="http://jqmobilehelper.riaforge.org/">http://jqmobilehelper.riafo...</a></p></div>
	</div>
</div>
		