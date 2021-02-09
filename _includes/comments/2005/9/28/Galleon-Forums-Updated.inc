
<div class="comment" id="c_1713621095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621095">1</a> by justin
		posted on 9/28/2005 at 11:08 PM
		</div>
		<div class="comment_text"><p>Ray-</p><p>I'm working on my own forum software (well it's an update at this point to bring it up to standards with boards like phpBB in terms of features). I was hoping you could take a post one day soon to explain the programming style you use in Galleon. It's been difficult for me to learn how to do things such as:</p><p>[code]<br>&lt;!--- Get main settings ---&gt;<br>	&lt;cfinvoke component="cfcs.galleon" method="getSettings" returnVariable="settings"&gt;<br>	&lt;cfset application.settings = settings&gt;</p><p>	&lt;!--- get user CFC ---&gt;<br>	&lt;cfset application.user = createObject("component","cfcs.user").init(application.settings)&gt;</p><p>[/code]</p><p>in my applications. If you have a good URL that would be appreaciated as well. Thanks in advance sir!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621099">2</a> by Raymond Camden
		posted on 9/29/2005 at 1:41 AM
		</div>
		<div class="comment_text"><p>Can you explain which part of the code confuses you? The use of components?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621100">3</a> by Justin
		posted on 9/29/2005 at 9:30 PM
		</div>
		<div class="comment_text"><p>Yes, I come from a JAVA / C programming background, but my coldfusion use is pretty standard.</p><p>I have trouble understanding what:<br> &lt;cfset application.user = createObject("component","cfcs.user").init(application.settings)&gt;</p><p>is actually doing... as well as never having used CFINVOKE tag. I think a good tutorial on programming Coldfusion using components would do the trick if you have any good bookmarks...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621101">4</a> by Raymond Camden
		posted on 9/29/2005 at 10:41 PM
		</div>
		<div class="comment_text"><p>Ah, what you need to do is read up on ColdFusion Components. There should be a section on just them in the docs. If you have a Java/C background, you can kind of think of CFCs as "objects-light". They are NOT "OO", but are close, and are very simple to use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621102">5</a> by Webkiwi
		posted on 9/30/2005 at 9:38 AM
		</div>
		<div class="comment_text"><p>Ray - the text file in the installation folder does not appear to have been updated - so I am not entirely sure which files to replace in my site folder. The latest version still says 1.5 (released 9/15/05) and yet, you posted this update on the 28th Sept. Do I just replace 'all' the files in the forum folder, as the data is stored in the DB? (except the settings.ini file of course?).<br>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621103">6</a> by Raymond Camden
		posted on 9/30/2005 at 3:06 PM
		</div>
		<div class="comment_text"><p>Yes, that would work. Or you can just check the file mod dates. I know that /cfcs/forum.cfc was updated. That -may- be it.</p></div>
	</div>
</div>
		