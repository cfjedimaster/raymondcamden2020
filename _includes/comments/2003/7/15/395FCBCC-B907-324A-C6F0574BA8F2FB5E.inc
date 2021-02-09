
<div class="comment" id="c_1713614769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614769">1</a> by Chris Hayne
		posted on 7/22/2003 at 3:56 PM
		</div>
		<div class="comment_text"><p>I am getting this error when i try to post a comment.  I'll be the first to say that I am relatively new and "green" when it comes to CFC and may have overlooked something obvious...</p><p>Variable BLOGTITLE is undefined.</p><p>The error occurred in D:\Inetpub\wwwroot2\PSA2\BLOG\blog.cfc: line 153</p><p>151 : 				&lt;/cfloop&gt;<br>152 : 				&lt;cfif len(doneList)&gt;<br>153 : 					&lt;cfmail to="#doneList#" from="#email#" subject="Comment added to Blog: #blogTitle# / Thread: #entry.title#"&gt;<br>154 : A comment was added to a blog entry [#entry.title#] you previously commented on.<br>155 : The comment was added at #dateFormat(now(),"m/d/yy")# at #timeFormat(now(),"h:mm tt")#.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614768">2</a> by Raymond Camden
		posted on 7/22/2003 at 3:59 PM
		</div>
		<div class="comment_text"><p>Make sure you have the latest code.</p></div>
	</div>
</div>
		