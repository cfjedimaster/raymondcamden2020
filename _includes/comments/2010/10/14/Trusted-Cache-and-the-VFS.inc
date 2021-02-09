
<div class="comment" id="c_1713726996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726996">1</a> by rgreen517
		posted on 10/14/2010 at 8:45 PM
		</div>
		<div class="comment_text"><p>I turned it on, but for some reason, when I would check out a page, make a change, then check the page back in, it was not showing the updated page on the server. Even though, the page on the live server was correct, it was not showing up in the browser. The Trusted Cache still retained the old copy. Once I turned it off, the new page showed up just fine. This was not a good solution for us, especially since we use Contribute for many of the dept. offices to update their sections, and they were not seeing the published pages show up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726988">2</a> by Raymond Camden
		posted on 10/14/2010 at 8:50 PM
		</div>
		<div class="comment_text"><p>rgreen - I do not think you read my previous entry. This is expected with Trusted Cache turned on. The performance you get has the trade off of CF not picking up on changes to your code. Please go and read that previous entry (linked to above) as I talk about this and ways around it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726989">3</a> by rgreen517
		posted on 10/14/2010 at 8:54 PM
		</div>
		<div class="comment_text"><p>I didn't read everything close enough. When I looked in the CF Admin, and read the text, I missed the part that stated: "For sites where templates are not updated during the life of the server" and clicked it on anyway. It was my bad.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726987">4</a> by Raymond Camden
		posted on 10/14/2010 at 9:00 PM
		</div>
		<div class="comment_text"><p>I do it all the time - don't feel bad. :)</p><p>Don't forget though that there are ways around it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726990">5</a> by Tim Leach
		posted on 10/15/2010 at 12:07 AM
		</div>
		<div class="comment_text"><p>New question. Is there anyway to flag a template, or a whole directory as being excluded?</p><p>Two cases I see are:<br>1. On the server I have a file or files that I create to run a quick script against the database or other code, and usually I write it and test as I go. It's a pain to clear that file each time I fiddle with it. (In this case I guess I could write a custom tag to include to try to clear the calling file from the cache.. or something.)</p><p>2. Most of the code doesn't change, but there may be a site in progress, any way at all to say cache all but this folder?</p><p>Thank you for your awesome tips.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727000">6</a> by johans
		posted on 10/15/2010 at 12:09 AM
		</div>
		<div class="comment_text"><p>So it would be nice if there was a way to ensure the cfinclude CFML code remained executable in the compiled template and is not replaced by the included code. Maybe something like a "cfrun" tag.</p><p>I think Railo has a function to run CFML without having to resort to cfinclude.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726995">7</a> by Raymond Camden
		posted on 10/15/2010 at 12:13 AM
		</div>
		<div class="comment_text"><p>Not quite sure I get what you mean. My example does let you execute CFML code. It _was_ executable, just cached.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726993">8</a> by Raymond Camden
		posted on 10/15/2010 at 12:13 AM
		</div>
		<div class="comment_text"><p>Tim - no - when the feature is on, it caches everything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726998">9</a> by Tim Leach
		posted on 10/15/2010 at 12:28 AM
		</div>
		<div class="comment_text"><p>I was really hoping, for those single templates to be able to do this:</p><p>&lt;cfset createObject("component","cfide.adminapi.administrator").login(":-p")&gt;<br>&lt;cfinvoke component="cfide.adminapi.runtime" method="clearTrustedCache" templateList="#GetBaseTemplatePath()#"&gt;</p><p>I think it should work, cause CF would cache the code.. and then run it, and the running would uncache it..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726994">10</a> by Raymond Camden
		posted on 10/15/2010 at 12:42 AM
		</div>
		<div class="comment_text"><p>Sure - that works. Or should work. Give it a shot. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726997">11</a> by Tim Leach
		posted on 10/15/2010 at 12:57 AM
		</div>
		<div class="comment_text"><p>No, it's not working,I tried wrapping it in a  custom tag, which would be handy to stick o pages I don't want kept in the cache. I keep getting an error:</p><p>The error occurred in runtime.cfc: line 661<br>Called from E:\wwwroot\tmp\dontCache.cfm: line 3<br>Called from E:\wwwroot\tmp\___notes___.cfm: line 4</p><p>-1 : Unable to display error's location in a CFML template.</p><p>I feel like I'd need to do some kinda of after the fact delayed execution (onRequestEnd?), but maybe it's not quite worth it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726992">12</a> by Raymond Camden
		posted on 10/15/2010 at 1:04 AM
		</div>
		<div class="comment_text"><p>Oh dude - your code is a bit wrong. You want to change your first line to actually return an object.</p><p>&lt;cfset ob = createOb....</p><p>Then in line to change component="..." to component="#ob#". Not sure that will work - but it may.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727001">13</a> by Michael Long
		posted on 10/15/2010 at 1:20 AM
		</div>
		<div class="comment_text"><p>Don't automatically go in and flip this switch on without testing first.</p><p>One CMS that I know of saves bits and pieces of pages out as CFM files and includes them as needed.</p><p>Which works fine until a user posts an update and the CMS writes out a new file... which is then ignored by a system with Trusted Cache enabled.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1735198806">
	<div>
		<img src="https://disqus.com/api/users/avatars/leeish.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1735198806">14</a> by leeish
		posted on 12/10/2014 at 4:13 PM
		</div>
		<div class="comment_text"><p>We had similar issues, but realized if we implemented a fileRead into a variable and output the variable it worked as expected. This means you must run your logic when creating the file rather than when processing the file on the include. We were using .txt files but I imagine fileRead in a cfm would act the same.</p></div>
	</div>
</div>
		