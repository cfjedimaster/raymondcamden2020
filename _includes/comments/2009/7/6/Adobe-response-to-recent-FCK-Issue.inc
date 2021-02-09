
<div class="comment" id="c_1713716664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716664">1</a> by Peter Hoopes
		posted on 7/7/2009 at 12:57 AM
		</div>
		<div class="comment_text"><p>Related: there are new versions of FCKEditor (and the new CKEditor) - is it possible to update the CF built-in version of FCKeditor. I tried replacing the existing folder inside CFIDE/scripts/ajax/ but I don't think it worked. Have you, Ray (or anyone) replaced or updated FCKeditor. Sorry if this should be a new thread...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716650">2</a> by Raymond Camden
		posted on 7/7/2009 at 12:58 AM
		</div>
		<div class="comment_text"><p>How did it not work for you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716665">3</a> by Doug
		posted on 7/7/2009 at 5:13 PM
		</div>
		<div class="comment_text"><p>The latest version of the FCKeditor (2.6.4.1) is still not safe to use.  The way it uses the cffile tag still allows for any extension or mime-type to be uploaded.  It's best to delete the entire /connectors/ directory in your FCKeditor installation until this is fixed.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.petefreitag.com%2Fitem%2F705.cfm%3AZHsFGg29lzdFJR9F4R-wGUv3wKQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petefreitag.com/item/705.cfm">http://www.petefreitag.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716666">4</a> by Doug
		posted on 7/7/2009 at 5:21 PM
		</div>
		<div class="comment_text"><p>I should mention that my solution wasn't so draconian as deleting the whole /connectors/ directory.  Since the staff at my company only needs to use the upload function of the editor while at work, I simply put a IP restriction on the /connectors/ directory to allow only local addresses (typically in the <a href="http://disq.us/url?url=http%3A%2F%2F192.168.xxx.xxx%3AI4PQt4O328dLzM8WVdDLlm8UAcg&amp;cuid=3321886" rel="nofollow noopener" title="192.168.xxx.xxx">192.168.xxx.xxx</a> range).</p></div>
	</div>
</div>
		