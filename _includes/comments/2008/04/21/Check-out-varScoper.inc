
<div class="comment" id="c_1713680033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680033">1</a> by CoolJJ
		posted on 4/21/2008 at 6:43 PM
		</div>
		<div class="comment_text"><p>What a sweet project! I thought I was a good var scoper myself. But, looks like I got a little extra work to do today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680034">2</a> by DanaK
		posted on 4/21/2008 at 6:49 PM
		</div>
		<div class="comment_text"><p>yeah varScoper has saved me time and headaches over and over. great tool. This should be one of the staples of anyone using CFCs and UDFs</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680036">3</a> by Dennis Spaag
		posted on 4/21/2008 at 7:50 PM
		</div>
		<div class="comment_text"><p>Does this mantra increase one's chances for enlightenment?  You know, I have not been to your site in a while - it looks nice and clean.  (I usually just read the feed.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680038">4</a> by Raymond Camden
		posted on 4/21/2008 at 7:53 PM
		</div>
		<div class="comment_text"><p>Dennis - I can't take credit for the design - it was a freebie. My design skills are the suck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680042">5</a> by shag
		posted on 4/21/2008 at 9:02 PM
		</div>
		<div class="comment_text"><p>Yeah, I found out about it from the first comment here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2008%2F3%2F18%2FAsk-a-Jedi-So-what-happens-when-you-dont-var-scope%3All7CXONgXVFJpPB14IQ5CrMj_q4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2008/3/18/Ask-a-Jedi-So-what-happens-when-you-dont-var-scope">http://www.coldfusionjedi.c...</a></p><p>In searching for the comment, I thought it a bit humorous that you posted about this nearly 2 years ago here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2006%2F7%2F20%2FVar-Scoping-Tool%3AxC6FkNBklL4JEErUigs_Gus20O4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2006/7/20/Var-Scoping-Tool">http://www.coldfusionjedi.c...</a></p><p>:-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680035">6</a> by Raymond Camden
		posted on 4/21/2008 at 9:12 PM
		</div>
		<div class="comment_text"><p>Heh, with close to 3k entries, I'm surprised I don't have more dupes. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680041">7</a> by Rob Gonda
		posted on 4/22/2008 at 1:08 AM
		</div>
		<div class="comment_text"><p>Cannot emphasize this enough ... varScoper is a must because you will always forget it somewhere and only realize it when the project is live and under load...</p><p>Most people don't know what they must var scope their queries, indexes for loops, cfhttp/cfftp return or connection variables, and well, pretty much anything...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680037">8</a> by Will Tomlinson
		posted on 4/22/2008 at 7:23 AM
		</div>
		<div class="comment_text"><p>I knew about this tool, but never used it. Just did and it's friggin' sweet!</p><p>I have a question though. Here's something it caught:</p><p>&lt;cfset retStruct = structNew() /&gt;<br>&lt;cfset retStruct.success = false /&gt;<br>&lt;cfset retStruct.errMsg = '' /&gt;<br>&lt;cfset retStruct.imagename = arguments['newImageName']&gt;</p><p>Now, do I just need to var scope the first line?</p><p>&lt;cfset var retStruct = structNew() /&gt;</p><p>Or all of them? Since the rest of the variables are a part of the first.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680040">9</a> by Raymond Camden
		posted on 4/22/2008 at 5:32 PM
		</div>
		<div class="comment_text"><p>You only var scope the first line. That's the only variable you made. Everything else you did was INSIDE that variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680039">10</a> by Ben Davies
		posted on 4/24/2008 at 6:13 AM
		</div>
		<div class="comment_text"><p>What a great tool. Have you or anyone else heard of way to include it with automation tools (like ANT). I now have mxUnit churning away on each build and adding varscoper seems like a natural addition</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680043">11</a> by Mike Schierberl
		posted on 4/29/2008 at 4:11 AM
		</div>
		<div class="comment_text"><p>Ben-<br>    I'm actually planning to post a blog entry on this sometime soon.  At my company we have varscoper setup and running as part of our continuous integration process.  It's invoked via ANT and reports build failures when a var scope violation is detected.  It validates a section of our codebase on an interval when new files have been committed.  I'll put something together once I've created a more generic version to release. (sorry to be a tease)</p></div>
	</div>
</div>
		