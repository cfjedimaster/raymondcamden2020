
<div class="comment" id="c_1713674489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674489">1</a> by RobW
		posted on 11/20/2007 at 8:52 PM
		</div>
		<div class="comment_text"><p>In the readme.txt are the 5.9.001 updates included in the list of files updated for 5.9, or are there other files that weren't listed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674502">2</a> by Raymond Camden
		posted on 11/20/2007 at 8:56 PM
		</div>
		<div class="comment_text"><p>They certainly should be. I always update the readme.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674497">3</a> by RobW
		posted on 11/20/2007 at 9:58 PM
		</div>
		<div class="comment_text"><p>It looks then like you forgot to check the file in, as the readme in both the zip and the svn repo are from October. I just like having the list of updates so I can update only the files that were modified, I'm not trying to bust your chops or anything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674498">4</a> by Raymond Camden
		posted on 11/20/2007 at 10:08 PM
		</div>
		<div class="comment_text"><p>Oops. Fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674512">5</a> by RobW
		posted on 11/20/2007 at 10:18 PM
		</div>
		<div class="comment_text"><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674511">6</a> by Phillip Senn
		posted on 11/21/2007 at 9:22 AM
		</div>
		<div class="comment_text"><p>Is Galleon written in one of the frameworks?<br>The reason why I ask is because <br>In Message.cfc, function notifySubscribers, you set<br>username = variables.user.getUser(variables.user.getUsernameFromId(arguments.userid)).username</p><p>Is that the OO way of assigning variables?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674490">7</a> by Raymond Camden
		posted on 11/21/2007 at 5:55 PM
		</div>
		<div class="comment_text"><p>I wouldn't call it OO. I'd just call it a shortcut. Since the method returns a struct, I can do xxxx.structkey on it.</p></div>
	</div>
</div>
		