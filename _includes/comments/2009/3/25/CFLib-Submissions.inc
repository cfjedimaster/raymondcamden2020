
<div class="comment" id="c_1713714128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714128">1</a> by Jade
		posted on 3/25/2009 at 8:02 PM
		</div>
		<div class="comment_text"><p>I have experienced this same pain many times in our environment with SQL Server, my dev vm, our companies dev box, and our companies prd box.</p><p>I started using Reg-Gate (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.red-gate.com%2F%29%3ApKslHz7-mfBcyrJ9SPP4z-tfmkM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.red-gate.com/)">http://www.red-gate.com/)</a> to make sure my SQL environments are identical and boy do I love that product. SQL Compare handles the structure and there's a SQL Data Compare for making sure all data is synchronous.</p><p>I just thought I would share this for anyone struggling with the same problem. I'm in no way associated with Reg-Gate except that I'm still working through the process of having my company buy the toolset for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714138">2</a> by Jason Fisher
		posted on 3/26/2009 at 4:31 PM
		</div>
		<div class="comment_text"><p>+1 for Red-Gate's fine products.  Used them for years to manage differences in structure, especially between Staging and Prod, and they've got a solid product for comparing actual data as well.  The auto-scripting, either direction, is a nice bonus feature as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714143">3</a> by Jade
		posted on 3/26/2009 at 7:47 PM
		</div>
		<div class="comment_text"><p>@Jason<br>Does your process incorporate version control? I'm looking for good solid methodology for implementing version control for db and I think the Comparison SDK may help manage the process.</p><p>Just fishing for ideas. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714145">4</a> by Jason Fisher
		posted on 3/26/2009 at 8:41 PM
		</div>
		<div class="comment_text"><p>No, sorry, have never used Red-Gate products to support version control, but they would actuall lend themselves to this.  After comparing 2 database structures, you can choose to generate the SQL code to make A like B or to make B like A.  That SQL file could certainly then be added to the project codebase and then version-controlled.  In major projects, I have put my DB changes directly in my CF code and then executed the DB change checks under a different DSN (one with access to CREATE, MODIFY, DROP, etc).  In those cases, Red-Gate comes in handy to determine why something works in Dev but not Staging, for instance; did I miss a column or an index in that last update??   That sort of thing.</p><p>In short, I've used Red-Gate more as a way to debug rather than as part of a development strategy, but I think you're on to something, in that it could be a way to not have to make note of every DB change as you're developing.  Just use SQL Compare when you're ready to promote a code branch, to get a full list of differences between Dev and Whatever.</p></div>
	</div>
</div>
		