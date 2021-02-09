
<div class="comment" id="c_1713736811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736811">1</a> by Edward Trudeau
		posted on 11/15/2011 at 8:23 PM
		</div>
		<div class="comment_text"><p>Ray, any idea if this feature will work with UNC paths if the CF service account has access to the remote server?</p><p>/ejt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736824">2</a> by Raymond Camden
		posted on 11/15/2011 at 8:24 PM
		</div>
		<div class="comment_text"><p>Not sure and the release notes I have do not specify. I don't have a handy server I can test with either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736826">3</a> by Brian W
		posted on 11/17/2011 at 9:31 PM
		</div>
		<div class="comment_text"><p>Great Zeus!</p><p>From:<br>&lt;cfscript&gt;<br>fileSys = createObject( "java" , "java.io.File" ).init( "\" );<br>sysFree = fileSys.getFreeSpace();<br>&lt;/cfscript&gt;</p><p>To:<br>&lt;cfscript&gt;<br>sysFree = getFreeSpace("c:/");<br>&lt;/cfscript&gt;</p><p>It's stuff like this ColdFusion team... :) :)</p></div>
	</div>
</div>
		