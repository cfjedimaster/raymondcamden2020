
<div class="comment" id="c_1713618248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618248">1</a> by Steven Erat
		posted on 4/26/2005 at 4:08 AM
		</div>
		<div class="comment_text"><p>Not that it regards the TITLE fields, but FYI, anyone using Verity in CFMX 7 should install the Cumulative Hotfix 2 which contains several important Verity hotfixes:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fgo%2Ffd71533%3AJ8vZrBWGqOZUk05vEkZdNxkt-W4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.macromedia.com/go/fd71533">http://www.macromedia.com/g...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618250">2</a> by Steve House
		posted on 8/5/2005 at 5:48 PM
		</div>
		<div class="comment_text"><p>Just an FYI on this since I found it while searching google for verity and title...</p><p>It apprears that starting with the verity included with CFMX 7, that Verity ignores title tags found inside of CF tags.  For example, we had a bunch of pages with &lt;cfhtmlhead text='&lt;title&gt;Education&lt;/title&gt;'&gt;</p><p>These title tags are not picked up. So the search results show index.cfm as the title... Probably a good fix, but a real pain in the butt.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618252">3</a> by Raymond Camden
		posted on 8/5/2005 at 5:59 PM
		</div>
		<div class="comment_text"><p>If you used Verity to index the file physically, then this makes sense. It thinks you have an improper title tag. Remember, Verity doesn't know anything about CFML. It wants to see a title tag inside a head tag insde html tags. It doesn't know what cfhtmlhead is. If you used Verity to _spider_ your site, however, it would work correctly, since it would see things like the browser sees it.</p></div>
	</div>
</div>
		