
<div class="comment" id="c_1713622789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622789">1</a> by Jeff
		posted on 11/22/2005 at 8:22 PM
		</div>
		<div class="comment_text"><p>I'm just shooting in the dark here, but you aren't qualifying the column in the date_add function.</p><p> Should the line be this:</p><p> date_add(tblblogentries.posted, interval -1 hour) as posted,</p><p> I wouldn't expect that to cause the problem, unless you added a "posted" column to tblblogentriescategories.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622790">2</a> by Raymond Camden
		posted on 11/22/2005 at 8:31 PM
		</div>
		<div class="comment_text"><p>Eh? I do see "as posted". And nope, no posted in blogentriescategories.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622791">3</a> by Jeff
		posted on 11/22/2005 at 8:39 PM
		</div>
		<div class="comment_text"><p>Did the "eh?" mean you didn't understand?  If so, I'll try to expand.</p><p>The line:</p><p> date_add(posted, interval -1 hour) as posted,</p><p>Could be:</p><p> date_add(tblblogentries.posted, interval -1 hour) as posted,</p><p> The column "posted" inside the date_add function is not qualified with the table name (every other column reference in the query is).</p><p> Of course, I would not expect this to cause the bug you're seeing.</p><p> I wonder if MySQL has a problem with aliases that are identical to table names?</p><p> Re-reading your original post, I'm unsure if you were still asking for help or if the bug was fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622794">4</a> by Raymond Camden
		posted on 11/22/2005 at 8:45 PM
		</div>
		<div class="comment_text"><p>The eh meant I thought you were wrong, but I see what you  mean now. I'll try that. The bug -is- fixed by my mod to utils.cfc, but I don't consider it a 'good' fix if that makes sense. I'll try this and let you know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622792">5</a> by Doug Cain
		posted on 11/22/2005 at 11:41 PM
		</div>
		<div class="comment_text"><p>I just tried the update and it didn't fix the date problem for me :o( It's definatly an odd one, if I get a chance I will investigate further...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622795">6</a> by Raymond Camden
		posted on 11/23/2005 at 12:18 AM
		</div>
		<div class="comment_text"><p>Doug, what platform? I may have a new fix coming in soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622793">7</a> by Doug Cain
		posted on 11/23/2005 at 1:52 PM
		</div>
		<div class="comment_text"><p>Hi Ray, currently it's happening on a windows 2003 server, cf7.0.1, mysql 4.1.3a using IIS and my dev XP box with cf7.0.1 mysql 4.1.3a and IIS.</p><p>I was wondering if had something to do with my regional settings being set to UK but haven't had time to look through it yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622797">8</a> by Raymond Camden
		posted on 11/23/2005 at 7:15 PM
		</div>
		<div class="comment_text"><p>Doug, try changing the parseDatetime in hastings.utils.cfc to lsparsedatetime. Be sure to refresh the cache. Paul is working on a 'more proper' fix.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622800">9</a> by David Pinero
		posted on 12/19/2005 at 11:02 PM
		</div>
		<div class="comment_text"><p>I'm not positive this is related, but the keywords are all there that's for sure.  I just extracted the ZIP for the first time, set it up with my own DSN and to work w/MS ACCESS - believing myself to have followed all the instructions.  However, I am getting an error that reads " Error Executing Database Query.<br>[Macromedia][SequeLink JDBC Driver][ODBC Socket][Microsoft][ODBC Microsoft Access Driver] Syntax error (missing operator) in query expression 'datepart('d', dateAdd(''h'', 1, tblblogentries.posted))'.</p><p>I have no idea what it means (although I am suspcious about a double quote appearing around the H for dateadd).  Anyway, if this helps this bug diagnostics, great -- otherwise if anyone can tell me what I'm doing wrong I'd love to demo this thing.  FYI, I'm running it as localhost (or 127.0.0.1:8500).</p><p>Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622801">10</a> by Raymond Camden
		posted on 12/19/2005 at 11:06 PM
		</div>
		<div class="comment_text"><p>I have an idea of the line #, but please tell it ot me. Also confirm you have MSACCESS as your db type in the ini file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622798">11</a> by David Pinero
		posted on 12/19/2005 at 11:19 PM
		</div>
		<div class="comment_text"><p>Hi, it's 699 in BLOG.CFC.  The problem spot seems to be:<br>		&lt;cfelseif instance.blogDBType is "MSACCESS"&gt;<br>			&lt;cfset posted = "dateAdd('h', #instance.offset#, tblblogentries.posted)"&gt;</p><p>I definetely have MSACCESS set as the DBtype, but here is my evolved INI in the meantime (partially listed - sorry if this doesn't format well):</p><p>dsn=cfblog<br>owneremail=dpinero@fmhi.usf.edu<br>blogURL=http://127.0.0.1:8500/blog/client/index.cfm<br>unsubscribeURL=http://127.0.0.1:8500/blog/client/unsubscribe.cfm<br>blogTitle=BlogDev<br>blogDescription=The Dev Blog<br>blogItemURLPrefix=mode=entry&amp;entry=<br>blogDBType=MSACCESS<br>locale=en_US<br>users=admin<br>commentsFrom=<br>mailserver=<br>mailusername=<br>mailpassword=<br>pingurls=<br>offset=1<br>allowtrackbacks=1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622799">12</a> by Raymond Camden
		posted on 12/20/2005 at 1:32 AM
		</div>
		<div class="comment_text"><p>No, it can't be line 699, since that just makes a string. Thats where the string is created, but the real error should be on a cfquery block.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622802">13</a> by Raymond Camden
		posted on 12/20/2005 at 2:00 AM
		</div>
		<div class="comment_text"><p>Found the bug. Check this blog. There will be an update later today.</p></div>
	</div>
</div>
		