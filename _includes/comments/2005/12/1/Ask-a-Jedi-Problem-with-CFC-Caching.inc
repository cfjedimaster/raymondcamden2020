
<div class="comment" id="c_1713623082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623082">1</a> by tony petruzzi
		posted on 12/1/2005 at 9:11 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>the strange problem you see with "select *" statement is a problem with JDBC drivers and caching the table structure. There are two ways around this:</p><p>1) restart CF services everytime you change your table structures.<br>2) uncheck the maintain connection checkbox for the DSN in CF administrator.</p><p>Personally I go with #2</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623083">2</a> by mark kruger
		posted on 12/1/2005 at 9:24 PM
		</div>
		<div class="comment_text"><p>Tony - There is a third way - you can add something (like a space) to your query to cause it to reinitialize the execution plan or schema cache. Of course if the schema is complicated and there are a lot of tables or you are using a view you may have to do this in a few places so it may not be a "fix" at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623087">3</a> by Troy Pullis
		posted on 12/2/2005 at 1:18 AM
		</div>
		<div class="comment_text"><p>I would guess he is talking about making a change to a CFC that he is using as a web service via access="remote".  In which case, I've successfully used this technique (Refreshing Web Service Stubs in ColdFusion MX) described here by Brandon Purcell. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bpurcell.org%2Fblog%2Findex.cfm%3Fmode%3Dentry%26entry%3D965%3A_UoteaMU80jt6vAZJfvhYpWluss&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bpurcell.org/blog/index.cfm?mode=entry&amp;entry=965">http://www.bpurcell.org/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623084">4</a> by todd
		posted on 12/2/2005 at 6:11 AM
		</div>
		<div class="comment_text"><p>Idea #3 - never, ever, ever (ok maybe once in a million) use select *.</p><p>I absolutely hate to be a code nazi, but it's just a bad idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623085">5</a> by Raymond Camden
		posted on 12/2/2005 at 6:14 AM
		</div>
		<div class="comment_text"><p>Definitely +1 Todd.</p></div>
	</div>
</div>
		