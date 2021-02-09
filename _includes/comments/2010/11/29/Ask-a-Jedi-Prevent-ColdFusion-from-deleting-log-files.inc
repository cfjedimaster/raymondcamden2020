
<div class="comment" id="c_1713727986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727986">1</a> by Daniel Budde
		posted on 11/30/2010 at 3:31 AM
		</div>
		<div class="comment_text"><p>Minor thing, but if you wanted to make sure the files appeared in order by name, you could do:</p><p>&lt;cfset name = "base" &amp; DateFormat(Now(), "yyyy.mm.dd") &amp; ".txt" /&gt;</p><p>Just a thought.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728005">2</a> by Raymond Camden
		posted on 11/30/2010 at 3:32 AM
		</div>
		<div class="comment_text"><p>Ah yes - that seems better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728002">3</a> by Brian
		posted on 11/30/2010 at 3:59 AM
		</div>
		<div class="comment_text"><p>I would think the only way an admin wouldn't be able to delete the log file would be if you log to another server where the local administrator doesn't have permission to delete the files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728004">4</a> by Raymond Camden
		posted on 11/30/2010 at 4:12 AM
		</div>
		<div class="comment_text"><p>@Brian: Right- but cflog doesn't allow for that. You can specify a file name, but just the name portion, not the directory or extension. Of course, you could change the log directory - but CF would need write access to the dir, which implies it has access to delete as well. (AFAIK)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727997">5</a> by Brian
		posted on 11/30/2010 at 4:21 AM
		</div>
		<div class="comment_text"><p>I was thinking more of having a webservice on another server using cflog and on your primary server making service calls to it.  Of course, if that server goes down, you lose you logs, so you may just want to use that to augment local logging.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728000">6</a> by Raymond Camden
		posted on 11/30/2010 at 4:26 AM
		</div>
		<div class="comment_text"><p>So a CFM on server A uses a web service on server B? But how does that help? CF will still delete the file eventually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728009">7</a> by Brian
		posted on 11/30/2010 at 4:33 AM
		</div>
		<div class="comment_text"><p>I guess I read the original post differently.  I read the important portion as being that admin couldn't delete the log so that it could be relied upon to determine what happened.  The scenario I considered was a hacker gaining root access and wiping the logs on their way out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728007">8</a> by Gary Funk
		posted on 11/30/2010 at 7:22 AM
		</div>
		<div class="comment_text"><p>You could set the log director to disallow delete  to everyone, including all admins, except for one special person.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728008">9</a> by Gary Funk
		posted on 11/30/2010 at 7:23 AM
		</div>
		<div class="comment_text"><p>that should read 'log directory'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728001">10</a> by Raymond Camden
		posted on 11/30/2010 at 7:23 AM
		</div>
		<div class="comment_text"><p>@Gary: I wonder if CF would handle that gracefully?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728010">11</a> by Gary Funk
		posted on 11/30/2010 at 11:53 PM
		</div>
		<div class="comment_text"><p>I will do testing and let everyone know.</p></div>
	</div>
</div>
		