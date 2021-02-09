
<div class="comment" id="c_1713614797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614797">1</a> by Bryan F. Hogan
		posted on 7/30/2003 at 6:07 PM
		</div>
		<div class="comment_text"><p>The List Server bounces back undeliverable when trying to confirm subscription.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614803">2</a> by Raymond Camden
		posted on 7/30/2003 at 7:32 PM
		</div>
		<div class="comment_text"><p>I'm not sure what to say, as others have signed up. However, I do know one other person had the same issue you had. Could it be some kind of local proxy/spam filter issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614800">3</a> by Brian Meloche
		posted on 7/31/2003 at 3:17 PM
		</div>
		<div class="comment_text"><p>Ray:</p><p>The same thing happened to me last Friday.  I never heard back from you RE: my blog installation failure.  I don't think I was correct in describing my problem as an infinite loop.  The page never comes up when you try to log in.  No matter, I am changing hosts!  I imagine that I will have it fixed soon - just haven't had time to work on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614796">4</a> by Dale Lature
		posted on 8/11/2003 at 6:41 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>I just downloaded the <a href="http://disq.us/url?url=http%3A%2F%2FBlog.zip%3ANSRM1Qbn2Qhxnk54cj3Fz6RLXXA&amp;cuid=3321886" rel="nofollow noopener" title="Blog.zip">Blog.zip</a>,  set up a database in SQL called cfblog,  created a dsn called cfblog and pointed to that SQL database I just created.  I ran the blog.sql,  and filled out the blog.ini details with my info.</p><p>I get this when I run http://localhost/cfblog</p><p>Error Executing Database Query.  <br>[MERANT][SequeLink JDBC Driver][ODBC Socket][Microsoft][ODBC SQL Server Driver]Optional feature not implemented</p><p>The error occurred in C:\DevSites\cfblog\blog.cfc: line 409<br>Called from C:\DevSites\cfblog\calendar.cfm: line 28<br>Called from C:\DevSites\cfblog\layout.cfm: line 59<br>Called from C:\DevSites\cfblog\index.cfm: line 69<br>Called from C:\DevSites\cfblog\blog.cfc: line 409<br>Called from C:\DevSites\cfblog\calendar.cfm: line 28<br>Called from C:\DevSites\cfblog\layout.cfm: line 59<br>Called from C:\DevSites\cfblog\index.cfm: line 69</p><p>407 : 		&lt;cfset var m = createDate(year,month,1)&gt;<br>408 : 		<br>409 : 		&lt;cfquery datasource="#instance.dsn#" name="days"&gt;<br>410 : 			select distinct datepart(dd, posted) as posted_day<br>411 : 			from tblblogentries</p><p>What step did I leave out,  or do wrong?</p><p>Dale</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614798">5</a> by Brian Meloche
		posted on 8/11/2003 at 7:19 PM
		</div>
		<div class="comment_text"><p>Dale:</p><p>I got the same error, exactly, when I tried to install the blog on my desktop.  It doesn't seem to like datepart or any of the date functions.  It seems like datepart is not a function installed automatically.  Sorry if I am being "Captain Obvious". :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614795">6</a> by Dale Lature
		posted on 8/20/2003 at 10:02 PM
		</div>
		<div class="comment_text"><p>I haven't found the answer yet.  I'm sigining up for the blogcfc maillist to see if I can find out there,  as well as keep up to date with the blog app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614801">7</a> by Philipp Cielen
		posted on 10/22/2003 at 6:47 PM
		</div>
		<div class="comment_text"><p>My confirmation mail to the listserve bounced as well. Seems to be overloaded...</p><p>Could not deliver message to the following recipient(s):</p><p>Failed Recipient: blogcfc-develop-request@lists.sourceforge.net<br>Reason: Remote host said: 421 <a href="http://disq.us/url?url=http%3A%2F%2Fexternalmx.vasoftware.com%3AgKoOutwOPDttcAJyskS2jTLNvEw&amp;cuid=3321886" rel="nofollow noopener" title="externalmx.vasoftware.com">externalmx.vasoftware.com</a>: Too many concurrent SMTP connections; please try again later</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614799">8</a> by Raymond Camden
		posted on 10/22/2003 at 6:53 PM
		</div>
		<div class="comment_text"><p>The listserv seems to suck pretty bad. I may just dump the entire sourceforge idea and just use another blog here.</p></div>
	</div>
</div>
		