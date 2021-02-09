
<div class="comment" id="c_1713715254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715254">1</a> by Mark Jones
		posted on 5/6/2009 at 5:37 AM
		</div>
		<div class="comment_text"><p>Don't forget that case-sensitivity applies to SQL, too: Table names (but not column names) are case-sensitive in MySQL on Linux, by default.  Ran into this when a host's Windows CF plans used MySQL databases hosted on Linux servers.</p><p>Similar to / vs \, never hardcode paths: always use expandpath() and/or relative paths; that way you don't have to worry about C:\.  That's just a general portability tip, though.</p><p>Keep a tight control on all external technologies needed, not just cfexecute calls.  URL rewriting, for instance; for IIS, I use ISAPI_Rewrite v3 because it's compatible w/ apache-style .htaccess files.  Assuming you're not going to be running Apache on Windows, anyway.</p><p>It's also another reason to avoid Access databases; Access DSNs are only available on Windows hosts.</p><p>Those aren't strictly CF-specific, but combined with what you've already got, they're everything I've run into thus far with my Windows-office, Linux-home, mixed-host experience.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715252">2</a> by Elliott Sprehn
		posted on 5/6/2009 at 7:01 AM
		</div>
		<div class="comment_text"><p>Seems you've never seen the "Hi I'm Linux" adverts before!</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3DMEYot8voTDM%3Ak_OL-Ix5kfUXIEdkp0vkQkjpQWQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.youtube.com/watch?v=MEYot8voTDM">http://www.youtube.com/watc...</a></p><p>Linux is a woman, not someone from Tron. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715257">3</a> by Justin Lewis
		posted on 5/6/2009 at 9:21 AM
		</div>
		<div class="comment_text"><p>Since it runs on the JVM and it's supposed to be platform agnostic, I guess there's just file write operations like you mentioned.</p><p>- Get in the habit of using getDirectoryFromPath() and it's ilk for file operations?</p><p>I believe cfexecute on linux invokes fork() and that can be very bad - I don't know how windows handles it.</p><p>You could almost extend this into an Apache vs IIS discussion and there would be some more things that pop up.</p><p>I don't know what the limit on windows based machines but there is a ulimit max on UX machines that is like 2000 open files so if you are doing a bunch of file reads in high traffic it can hurt.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715258">4</a> by Christoph Schmitz
		posted on 5/6/2009 at 3:35 PM
		</div>
		<div class="comment_text"><p>- If you have the chance, use a case sensitive file system for development. OS-X file systems can be case sensitive, too. ;-)<br>- Use VMs to test on various operating systems!</p><p>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715259">5</a> by Rob
		posted on 5/6/2009 at 3:40 PM
		</div>
		<div class="comment_text"><p>I ran into that with the QueryParam Scanner project on RIAforge. The last update was not reading directories on any Unix-based filesystem (I tested on both OS X and Unix). It turns out the problem was how he had written the code to recurse the directories, he had written it solely for a Windows system. I sent him a patch that I wrote to get it to work on all environments, but I'm not sure if he ever released it or not.</p><p>My work servers are all Unix, and my personal development is OS X. My Personal production is windows, so I set server specific application-level variables mapping out the directories and using the "proper" slash syntax for each. I did not know that forward slashes would work in Windows, thanks for that tip!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715261">6</a> by Michael Brennan-White
		posted on 5/6/2009 at 4:13 PM
		</div>
		<div class="comment_text"><p>Will the Bolt IDE be restricted to Mac and Windows like the new versions of Flex Builder?</p><p>I certainly hope not</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715266">7</a> by Raymond Camden
		posted on 5/6/2009 at 5:09 PM
		</div>
		<div class="comment_text"><p>@Michael: Only Adobe is allowed to talk about Bolt. You know that. ;)</p><p>@Elliott: No one is better than Tron guy though.</p><p>@All: Thanks for the additions, keep em coming.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715267">8</a> by Adrian J. Moreno
		posted on 5/6/2009 at 5:31 PM
		</div>
		<div class="comment_text"><p>Ray, I've got a post that covers a lot of this:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.iknowkungfoo.com%2Fblog%2Findex.cfm%2F2007%2F5%2F24%2FMoving-Coldfusion-applications-from-Windows-to-Linux%3AuX-1DZ-hgFq6dsZy8eycBoQmJc8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.iknowkungfoo.com/blog/index.cfm/2007/5/24/Moving-Coldfusion-applications-from-Windows-to-Linux">http://www.iknowkungfoo.com...</a></p><p>Plus as of 8.0.1, CF has become even more case-sensitive:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Fkb403862%3ALpPf-gS1BjZHD6qiQeggchnuDSE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/go/kb403862">http://www.adobe.com/go/kb4...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mkville.com%2Fblog%2Findex.cfm%2F2008%2F7%2F18%2FNew-Custom-Tag-and-CFC-case-sensitivity-on-linux-could-be-crippling%3A9wF_rJfxkJj1qrdny5wtBOEa3Qg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mkville.com/blog/index.cfm/2008/7/18/New-Custom-Tag-and-CFC-case-sensitivity-on-linux-could-be-crippling">http://www.mkville.com/blog...</a></p><p>HTH</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715268">9</a> by Andy Sandefer
		posted on 5/6/2009 at 6:23 PM
		</div>
		<div class="comment_text"><p>@Ray<br>I think that Flynn would have been a better representation of Linux because he's a true coder!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715270">10</a> by Patrick
		posted on 5/8/2009 at 3:56 PM
		</div>
		<div class="comment_text"><p>I use &lt;cfset application.fs = createObject("java", "java.lang.System").getProperty("file.separator")&gt; to fight \ vs /</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715269">11</a> by Raymond Camden
		posted on 5/8/2009 at 5:02 PM
		</div>
		<div class="comment_text"><p>@Patrick: Of course, the point I had made was that many times, you don't NEED to know the 'real' separator. Just use /.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715273">12</a> by Andy Sandefer
		posted on 5/8/2009 at 6:07 PM
		</div>
		<div class="comment_text"><p>If I can chime in here...<br>This was fresh in my mind yesterday when I was coding a multi-file uploader for a client and I used Ray's forward slash setup in a Windows environment and it worked like a charm.  I've seen many postings arguing about this in the past and I'm really starting to believe that many CF developers are making more out of this than necessary.  What are you gaining by throwing down the java?  Everyone acts as if there is to be no time or thought spent when deploying an application in terms of what environment it will live in.  If you have to store a bit of path data in a database table or your Application.cfc file and take a minute or two when deploying the app to set it up then so be it.  I'd rather spend my time on feature development then geeking out over the file system.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715271">13</a> by Raymond Camden
		posted on 5/26/2009 at 1:39 AM
		</div>
		<div class="comment_text"><p>Guys, I finally made time to 'formalize' this into a page on my blog:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fpage.cfm%2FCross-Operating-System-ColdFusion-Development-Guid%3AA-97qqU_2pBSlIxb2hutPWoqCuA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/page.cfm/Cross-Operating-System-ColdFusion-Development-Guid">http://www.coldfusionjedi.c...</a></p><p>Thoughts? I appreciate all the comments here, but I only specifically called out folks where I used their content in the guide. If that is bad, let me know!</p><p>Also, I realize the guide may not be perfect, but is it ok for a first real release? Will it be useful?</p></div>
	</div>
</div>
		