
<div class="comment" id="c_1713733812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733812">1</a> by Don Q
		posted on 6/25/2011 at 8:43 PM
		</div>
		<div class="comment_text"><p>Please keep doing these!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733811">2</a> by John Sieber
		posted on 6/27/2011 at 10:03 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, this is something I would really like to start playing with and the examples are good motivation!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733816">3</a> by James
		posted on 7/2/2011 at 11:23 AM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>Thanks for the walkthrough. It's a big help. Do you know if there would be any case sensitive issues when passing query and structure data from coldfusion into my flex project?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733814">4</a> by Raymond Camden
		posted on 7/2/2011 at 3:14 PM
		</div>
		<div class="comment_text"><p>First off - your Gravatar is awesome. I can't respond to anything else before I mention that.</p><p>Secondly - yes - in terms of keys - they are upper cased. So if I returned this:</p><p>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fs.name%3AprcCAM7nZPr_jd9tMI3Crp7rZLM&amp;cuid=3321886" rel="nofollow noopener" title="s.name">s.name</a> = "ray"&gt;</p><p>It is going to be NAME in Flex. I believe if you do s["name"] case is preserved, and there is also a config setting in CF (down in one of the xml files) that let you auto lcase stuff as well.</p><p>My confidence in the above is around 90% - so double check.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733815">
	<div>
		<img src="https://disqus.com/api/users/avatars/stevegood.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733815">5</a> by Steve Good
		posted on 8/2/2011 at 12:23 AM
		</div>
		<div class="comment_text"><p>@Ray You are correct that s["key"] will result in the case of your struct key being preserved.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733813">6</a> by Ray Majoran
		posted on 2/5/2012 at 1:22 AM
		</div>
		<div class="comment_text"><p>Don't forget to double up your addParam in the CFC as per your blog (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2009%2F9%2F29%2FGotches-with-Queries-in-Script%29%3AIgyJVq7ZHDhhyAj29KpVmIfzTUk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2009/9/29/Gotches-with-Queries-in-Script)">http://www.raymondcamden.co...</a> -- unless of course you want to mess around with Adobe's CFC.</p><p>Thanks for this -- it was VERY helpful.</p></div>
	</div>
</div>
		