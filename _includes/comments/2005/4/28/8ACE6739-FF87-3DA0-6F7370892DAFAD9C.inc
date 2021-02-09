
<div class="comment" id="c_1713618300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618300">1</a> by Paul Bailey
		posted on 5/3/2005 at 1:39 AM
		</div>
		<div class="comment_text"><p>Just wanted to let you know their is still a problem with the program. It seems that now when you try to add infomation to a current project, It returns an error ...</p><p>The following error(s) has occured:<br>Error Executing Database Query.<br>Unknown Types value</p><p>I will try to figure this out, if I do, I will post fix .. I love this blog.</p><p>Have a safe trip .. <br>Paul</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618294">2</a> by jvanduin
		posted on 5/24/2005 at 2:00 AM
		</div>
		<div class="comment_text"><p>Looks like this works with a Access DB but not with MySQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618292">3</a> by Raymond Camden
		posted on 5/24/2005 at 2:03 AM
		</div>
		<div class="comment_text"><p>Did you follow the tip to fix it for mysql?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618291">4</a> by jvanduin
		posted on 5/24/2005 at 2:16 AM
		</div>
		<div class="comment_text"><p>Yes and the error debugs to<br>Exceptions<br>14:09:30.030 - Database Exception - in /apps/www/lighthousepro/components/IssueDAO.cfc : line 99</p><p>	    Error Executing Database Query.</p><p>and that is<br> relatedurl = &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#arguments.iBean.getRelatedurl()#" maxlength="255"&gt;,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618297">5</a> by Raymond Camden
		posted on 5/24/2005 at 2:18 AM
		</div>
		<div class="comment_text"><p>Don't forget I cache everything. You will need to refresh the cache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618298">6</a> by jvanduin
		posted on 5/25/2005 at 5:00 AM
		</div>
		<div class="comment_text"><p>My bad,<br> The second error <br>The following error(s) has occured:<br>Error Executing Database Query.<br>Unknown Types value <br>is caused by not editing the same line <br>&lt;cfqueryparam cfsqltype="cf_sql_bit" value="#arguments.iBean.getIsBug()#"&gt;<br>in the update section with integer value</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618301">7</a> by Chris
		posted on 6/8/2005 at 7:31 PM
		</div>
		<div class="comment_text"><p>Is LH Pro somthing different from the Lighthouse download on your blog?  I downloaded the blog version, and it does not seem to have DB storage, unless I am missing somthing.  Where can I find it, and how much is it?<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618296">8</a> by Callum
		posted on 8/25/2005 at 6:45 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Have you released Lighthouse Pro to the general community?, or is if just available on the DRK at the moment ?</p><p>If it's just on the DRK - are you planning on making it available at some time in the future ?</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618295">9</a> by Raymond Camden
		posted on 8/25/2005 at 6:17 PM
		</div>
		<div class="comment_text"><p>LHP is still DRK only. For now. That's all I can say.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618299">10</a> by Scott Talsma
		posted on 9/26/2005 at 6:38 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I just found/squashed a bug related to rss feeds for projects.  None admin users would get an error when querying a project:</p><p>rss_view.cfm Line 18<br>Change<br>&lt;cfset projects = application.projectManager.getUsersForProject(<a href="http://disq.us/url?url=http%3A%2F%2Furl.id%3A0bRnXeBrI7OIqL9bKyG2zQPmmP0&amp;cuid=3321886" rel="nofollow noopener" title="url.id">url.id</a>)&gt;<br>to<br>&lt;cfset projects = application.projectManager.getProjectsForUser(form.username)&gt;</p><p>Hope that saves somebody some time.</p></div>
	</div>
</div>
		