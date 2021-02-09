
<div class="comment" id="c_1713649465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649465">1</a> by scott
		posted on 1/23/2006 at 4:05 AM
		</div>
		<div class="comment_text"><p>Ok, time for my question.  Why not move the settings (other than datasource) into a table in the database?  We have to edit application.cfc to enter the blog name anyway so we not just enter the datasource in the application.cfc?</p><p>just curious...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649469">2</a> by Raymond Camden
		posted on 1/23/2006 at 4:08 AM
		</div>
		<div class="comment_text"><p>Good question - the reason is that BlogCFC supports N databases, so one DB would need to be a 'master'. Plus I find editing a text file just simpler. ;) So it will be XML now, which is still rather simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649468">3</a> by Mark Drew
		posted on 1/23/2006 at 5:41 AM
		</div>
		<div class="comment_text"><p>I am still uncomfortable with putting settings in files such as ModelGlue.xml, fusebox.xml and ini files.</p><p>I am not sure why all the frameworks do this. Why not rename it .cfc and make it a strcuture? I know XML files are simpler to edit (and ini files.. relating back to your blog software)</p><p>I think this is a question for the Coldfusion Cookbook. Making sure that a xml file that has been renamed as a cfm file can only display its contents for parsing if called from an include or module.</p><p>Maybe I am completely wrong here.</p><p>MD</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649470">4</a> by Matt Woodward
		posted on 1/23/2006 at 6:16 AM
		</div>
		<div class="comment_text"><p>XML files are extremely well suited for configuration of this nature, and it's simple enough to wrap it in a .cfm file to protect it.  Common practice for Mach-II applications on shared hosting accounts is to change the name of the config file to .xml.cfm and then put something in the Application.cfm file to re-route any requests asking for the config file directly.  It's a simple and effective way to protect your config file when you're in a situation where you can't put it outside the web root.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649471">5</a> by Jeff Houser
		posted on 1/23/2006 at 6:56 AM
		</div>
		<div class="comment_text"><p>I generally try to keep all CFCs out of web accessible directories.  I did that for my BlogCFC installation.  I create a CFC mapping to the relevant directory.</p><p> Ray, my one security comment is that the "posted by" is the same as your admin username.  ( Or at least was the last time I examined code).</p><p> And, I know how to get to your admin (which you're more than welcome to take or leave) .  So, I'm only one [correct] password guess away from breaking in.</p><p> I'd love to see a "display name" column added to tblUsers and have that used instead of the "UserName" field.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649472">6</a> by Raymond Camden
		posted on 1/23/2006 at 7:31 AM
		</div>
		<div class="comment_text"><p>Jeff, I agree. I'll look into this a bit later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649474">7</a> by Dave Ross
		posted on 1/23/2006 at 7:42 AM
		</div>
		<div class="comment_text"><p>We actually don't recommend you put config settings in the xml for ColdSpring. Better to use placholders (e.g ${structure.key} ) and pass in the values (I personally use .properties files).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649476">8</a> by Jennifer Larkin
		posted on 1/23/2006 at 11:54 AM
		</div>
		<div class="comment_text"><p>I was under the impression that an org directory should always be password protected if it can't be placed outside the webroot. Mine always have been. I don't remember if it was mentioned in the documentation or not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649462">9</a> by Raymond Camden
		posted on 1/23/2006 at 5:17 PM
		</div>
		<div class="comment_text"><p>Jennifer, I haven't heard that myself (which doesn't mean it's not true of course). I'd probably recommend that peple just _move_ the org folder. However, I know most of my users can't do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649463">10</a> by David Epler
		posted on 1/23/2006 at 9:02 PM
		</div>
		<div class="comment_text"><p>It also isn't that hard to block access to blog.ini through Apache configuration directives..</p><p>&lt;FilesMatch "(\.ini)$"&gt;<br>    Order allow,deny<br>    Deny from all<br>&lt;/FilesMatch&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649464">11</a> by Jennifer Larkin
		posted on 1/24/2006 at 4:23 AM
		</div>
		<div class="comment_text"><p>I'm not able to put anything outside the webroot, which is why I have many password protected directories on my server. I have a policy of making things inaccessible by default on my website. Directly-accessible third party code is a security problem waiting to happen. :)</p><p>As a side note, if you use Access with BlogCFC and you can't put the database outside the webroot someone could find it and harvest all the comment email addresses for spam. Again, a password protected directory protects against that.</p><p>I've also had the password for those directories subjected to dictionary attacks, but then I am a bit paranoid. :D</p></div>
	</div>
</div>
		