
<div class="comment" id="c_1713680909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680909">1</a> by joel
		posted on 5/12/2008 at 10:21 PM
		</div>
		<div class="comment_text"><p>There doesn't appear to be an Oracle installation script in the /installation directory. Or am I missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680914">2</a> by Raymond Camden
		posted on 5/12/2008 at 10:28 PM
		</div>
		<div class="comment_text"><p>Ugh. My fault, not James. I'll update the zip right now. Please try 5 minutes after this posting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680915">3</a> by joel
		posted on 5/12/2008 at 11:11 PM
		</div>
		<div class="comment_text"><p>Quickie test: the database installed without issue, had a big problem logging in even as admin. Finally found the problem...by default, the settings.ini.cfm specifies encrypted passwords, but (again by default) the admin password isn't encrypted in the installation script. Methinks these should be coordinated to provide a better "out of the box experience."</p><p>So I set encryptpasswords=false in the ini file and then could log in. However, if I then go to the administration function and toggle the password encryption back to true, the existing passwords aren't encrypted and consequently admin can no longer log in.</p><p>I realize that this goes beyond testing the Oracle functionality, but if an admin suddenly decides encrypting passwords is a good idea (maybe he just found the option for the first time), he can lock every existing user out of the database, including himself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680905">4</a> by Raymond Camden
		posted on 5/12/2008 at 11:15 PM
		</div>
		<div class="comment_text"><p>I agree - the ini file should be set to false for that.</p><p>But - the issue you brought up is documented. I tell people that if they switch 'midstream', they need to update the data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680912">5</a> by joel
		posted on 5/12/2008 at 11:19 PM
		</div>
		<div class="comment_text"><p>I missed the midstream warning, then. Is it in the installation documentation?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680916">6</a> by Raymond Camden
		posted on 5/12/2008 at 11:25 PM
		</div>
		<div class="comment_text"><p>It darn well better be. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680911">7</a> by joel
		posted on 5/12/2008 at 11:58 PM
		</div>
		<div class="comment_text"><p>Um, don't see it :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680907">8</a> by Raymond Camden
		posted on 5/13/2008 at 12:00 AM
		</div>
		<div class="comment_text"><p>Just uh... squint real hard. ;) Maybe I thought it would be assumed. ;) I'll document it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680910">9</a> by Todd Rafferty
		posted on 5/13/2008 at 5:31 PM
		</div>
		<div class="comment_text"><p>Ray, still interested in the "edit your own post" mod?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680923">10</a> by Raymond Camden
		posted on 5/13/2008 at 5:37 PM
		</div>
		<div class="comment_text"><p>Absolutely.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680908">11</a> by Todd Rafferty
		posted on 5/13/2008 at 5:41 PM
		</div>
		<div class="comment_text"><p>Ok.  I'll do a grab from SVN and contact you sometime this week to get it organized.</p></div>
	</div>
</div>
		