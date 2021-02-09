
<div class="comment" id="c_1713674503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674503">1</a> by Sam Farmer
		posted on 11/20/2007 at 9:57 PM
		</div>
		<div class="comment_text"><p>Nice.</p><p>If you have a lot of big files I believe you'll get better performance using the new fileDelete function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674504">2</a> by Raymond Camden
		posted on 11/20/2007 at 11:07 PM
		</div>
		<div class="comment_text"><p>Just an FYI, I had my &lt; and &gt; wrong. Fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674505">3</a> by Mikkel Johansen
		posted on 11/21/2007 at 1:09 AM
		</div>
		<div class="comment_text"><p>Ray: Why the &lt;cfif oldfiles.recordCount&gt; ?</p><p>Shouldn't the cfloop be enough?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674506">4</a> by Raymond Camden
		posted on 11/21/2007 at 1:15 AM
		</div>
		<div class="comment_text"><p>It is me being anal. No need to run the loop if no results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674507">5</a> by James Buckingham
		posted on 11/21/2007 at 2:58 PM
		</div>
		<div class="comment_text"><p>See we have a clustered environment on Round Robin so code like that wouldn't work without a bit of "fudging" of CFHTTP requests to make sure all the servers are dealt with.</p><p>Personally I'd use a scheduled task on the OS that runs batch files to deal with this kind of job. You can then target each server individually and don't have to hassle CF with a task that the OS could do instead. A lot less time consuming to write, test and setup as well :-)</p></div>
	</div>
</div>
		