
<div class="comment" id="c_1713616863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616863">1</a> by Brendan OHara
		posted on 2/1/2005 at 9:01 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>How do you churn out so much "BRC" software? Pretty darn prolific.</p><p>Brendan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616862">2</a> by Raymond Camden
		posted on 2/2/2005 at 12:19 AM
		</div>
		<div class="comment_text"><p>Heh, actually this is the first release of Galleons in six months, ignoring small fixes. I haven't had a  Blog update in a while. So for me - it feels slow. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616868">3</a> by Brian Rinaldi
		posted on 2/2/2005 at 3:18 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for making so much work available to the community. On a somewhat unrelated topic, I notice that this says it was posted on the 31st of January, but on the calendar pod, the 31st of January shows as if it has no entries. Just curious..?</p><p>- Brian Rinaldi</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616867">4</a> by Raymond Camden
		posted on 2/2/2005 at 3:30 AM
		</div>
		<div class="comment_text"><p>Looks like a bug then. :) I'm working on a BlogCFC update next.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616866">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616866">5</a> by Rob Brooks-Bilson
		posted on 2/2/2005 at 4:10 AM
		</div>
		<div class="comment_text"><p>Ray, any word on what's going into the next BlogCFC update?  TrackBack and Ping perhaps?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616869">6</a> by Raymond Camden
		posted on 2/2/2005 at 4:22 AM
		</div>
		<div class="comment_text"><p>Trackback... maybe.<br>Bug fixes (some minor stuff here and there)<br>Disable comments for a post.<br>Call paragraphformat2 udf on comment postings so they look a bit nicer (like in this comment, i have line breaks that aren't going to show up)<br>i may try to get auru as the default skim in<br>maybe support a print format url automatically - ie it will just show the entry with no outside layout - and maybe evne use pdf if version=blackstone<br>support bluedragon by updating the blog.cfc code that checks for wrap</p><p>and anything else that people ask for</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616871">7</a> by Chris Bestall
		posted on 2/2/2005 at 10:08 AM
		</div>
		<div class="comment_text"><p>Very Cool!  Thanks Ray.</p><p>I did have to make one change to get it to work with Bluedragon6.2.  I copied in your function configParam from your blog CFC to the application CFC to get around the lack of getProfileSections() function in Bluedragon.  Then made the changes below:</p><p>Added the following line:<br>&amp;lt;cfset var iniData = "dsn,mapping,perpage,fromAddress,rootURL,sendonpost,dbtype"&amp;gt;</p><p>Change the loop to:<br>&amp;lt;cfloop index="key" list="#iniData#"&amp;gt;<br>	&amp;lt;cfset r[key] = configParam(settingsFile,"settings",key)&amp;gt;<br>&amp;lt;/cfloop&amp;gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616864">8</a> by Chris Bestall
		posted on 2/2/2005 at 10:10 AM
		</div>
		<div class="comment_text"><p>Ok, that code didnt post very well.</p><p>Maybe that's something for the next Blog.  HTML comment formatting :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616870">9</a> by Raymond Camden
		posted on 2/2/2005 at 8:12 PM
		</div>
		<div class="comment_text"><p>Thanks for the warning. I plan on downloading BD next week so I'll have it around to test.</p></div>
	</div>
</div>
		